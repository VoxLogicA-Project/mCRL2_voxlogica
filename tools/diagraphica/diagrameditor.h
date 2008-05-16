// Author(s): A.J. (Hannes) Pretorius
// Copyright: see the accompanying file COPYING.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// LICENSE_1_0.txt)
//
/// \file ./diagrameditor.h

// --- diagrameditor.h ----------------------------------------------
// (c) 2007  -  A.J. Pretorius  -  Eindhoven University of Technology
// ---------------------------  *  ----------------------------------

#ifndef DIAGRAMEDITOR_H
#define DIAGRAMEDITOR_H

#include <cstddef>
#include <cstdlib>
#include <cmath>
#include "colorchooser.h"
#include "dof.h"
#include "diagram.h"
#include "graph.h"
#include "visualizer.h"

class DiagramEditor : public Visualizer
{
public:
    // -- constructors and destructor -------------------------------
    DiagramEditor(
        Mediator* m,
        Graph* g,
        GLCanvas* c );
    virtual ~DiagramEditor();

    // -- set functions ---------------------------------------------
    void setDiagram( Diagram* dgrm );

    void setEditModeSelect();
    void setEditModeNote();
    void setEditModeDOF();
    void setEditModeRect();
    void setEditModeEllipse();
    void setEditModeLine();
    void setEditModeArrow();
    void setEditModeDArrow();

    void setShowGrid( const bool &flag );
    void setSnapGrid( const bool &flag );

    void setFillCol();
    void setLineCol();

    void handleIntersection();
    void translatePoints( double &x1, double &y1, double &x2, double &y2, double givenX1, double givenY1, double givenX2, double givenY2 );
    bool isAnyShapeSelected();
    void handleDOFSel( const int &DOFIdx );
    void handleDOFSetTextStatus(
        const int &DOFIdx,
        const int &status );
    int handleDOFGetTextStatus( const int &DOFIdx );
    void handleDOFColAdd(
        const double &hue,
        const double &y );
    void handleDOFColUpdate(
        const int &idx,
        const double &hue,
        const double &y );
    void handleDOFColClear(
        const int &idx );
    void handleDOFOpaAdd(
        const double &opa,
        const double &y );
    void handleDOFOpaUpdate(
        const int &idx,
        const double &opa,
        const double &y );
    void handleDOFOpaClear(
        const int &idx );
    void setLinkDOFAttr( 
        const int &DOFIdx, 
        const int &attrIdx );
    void clearLinkDOFAttr( const int &DOFIdx );
    void clearLinkAttrDOF( const int &attrIdx );
    
    // -- helper functions ------------------------------------------
    virtual void printMouseVariables();
    
    // -- get functions ---------------------------------------------
    Diagram* getDiagram();
    int getEditMode();
    
    // -- visualization functions  ----------------------------------
    void visualize( const bool &inSelectMode );

    // -- event handlers --------------------------------------------
    void handleMouseLftDownEvent(
        const int &x,
        const int &y );
    void handleMouseLftUpEvent( 
        const int &x, 
        const int &y );
    void handleMouseLftDClickEvent(
        const int &x,
        const int &y );
    void handleMouseRgtDownEvent( 
        const int &x, 
        const int &y );
    void handleMouseMotionEvent( 
        const int &x, 
        const int &y );
    void handleKeyUpEvent( const int &keyCode, const int &specialKey );
    void handleKeyDownEvent( const int &keyCode, const int &specialKey );
    
    void handleHits( const vector< int > &ids );
    void handleHitDiagramOnly();
    void handleHitShape( const int &shapeIdx );
    void handleHitShapeHandle( 
        const int &shapeIdx,
        const int &handleId );

    void handleDrag();
    /*
    void handleDrop(
        const int &x,
        const int &y,
        const vector< int > &data );
    */
    void handleShowVariable( const string &variable, const int &variableId );
    void handleShowNote( const string &variable, const int &shapeId );
    void handleAddText( string &variable, int &shapeId );
    void handleTextSize( int &textSize, int &shapeId );
    void handleSetTextSize( int &textSize, int &shapeId );
    void handleCut();
    void handleCopy();
    void clearClipBoard();
    void handlePaste();
    void handleDelete();
    void handleSelectAll();
    void handleBringToFront();
    void handleSendToBack();
    void handleBringForward();
    void handleSendBackward();
    void handleEditDOF();
    void handleSetDOF( const int &attrIdx );
    void handleCheckedVariable( const int &idDOF, const int &variableId );

    // -- public utility functions ----------------------------------
    void deselectAll();
    
    // -- public constants ------------------------------------------
    enum
    {
        EDIT_MODE_SELECT,
        EDIT_MODE_NOTE,
        EDIT_MODE_DOF,
        EDIT_MODE_RECT,
        EDIT_MODE_ELLIPSE,
        EDIT_MODE_LINE,
        EDIT_MODE_ARROW,
        EDIT_MODE_DARROW,
    };

protected:
    // -- private utility functions ---------------------------------
    void displShapeEdtOptions( Shape *s );
    void displDOFInfo( Shape* s );
    
    void handleDragCtr( Shape* s, double &xDrag, double &yDrag );
    void handleDragTopLft( Shape* s );
    void handleDragLft( Shape* s );
    void handleDragBotLft( Shape* s );
    void handleDragBot( Shape* s );
    void handleDragBotRgt( Shape* s );
    void handleDragRgt( Shape* s );
    void handleDragTopRgt( Shape* s );
    void handleDragTop( Shape* s );
    void handleDragRotRgt( Shape* s );
    void handleDragRotTop( Shape* s );

    void handleDragDOFXCtrBeg( Shape* s );
    void handleDragDOFXCtrEnd( Shape* s );
    void handleDragDOFYCtrBeg( Shape* s );
    void handleDragDOFYCtrEnd( Shape* s );
    void handleDragDOFWthBeg( Shape* s );
    void handleDragDOFWthEnd( Shape* s );
    void handleDragDOFHgtBeg( Shape* s );
    void handleDragDOFHgtEnd( Shape* s );
    void handleDragHge( Shape* s );
    void handleDragDOFAglBeg( Shape* s );
    void handleDragDOFAglEnd( Shape* s );

    // -- hit detection ---------------------------------------------
    void processHits( 
        GLint hits, 
        GLuint buffer[] );

    // -- data members ----------------------------------------------
    Diagram* diagram; // composition
    int editMode;
    int drgBegIdx1;
    int drgBegIdx2;
    int lastSelectedShapeId;
    bool selection;

    double xDrgDist;
    double yDrgDist;
    double selectedX1, selectedX2, selectedY1, selectedY2;
    
    Shape* clipBoardShape; // composition
    vector < Shape* > clipBoardList;
    double xPaste, yPaste;
    
    // -- static variables ------------------------------------------
    static int szeTxt;
};

#endif

// -- end -----------------------------------------------------------
