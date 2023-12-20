	void FoldSightsCPB (EntityAI ParentItem)
    {
        protected int foldingOpticRaisedId = -1;
        protected int foldingOpticLoweredId = -1;
        TStringArray selectionNames = new TStringArray;

        ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

        foldingOpticRaisedId = selectionNames.Find("cpb_raised");
        foldingOpticLoweredId = selectionNames.Find("cpb_lowered");  
            
        ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,false);
        ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,true);
    };

    void UnfoldSightsCPB(EntityAI ParentItem)
    {
        protected int foldingOpticRaisedId = -1;
        protected int foldingOpticLoweredId = -1;
        TStringArray selectionNames = new TStringArray;

        ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

        foldingOpticRaisedId = selectionNames.Find("cpb_raised");
        foldingOpticLoweredId = selectionNames.Find("cpb_lowered");  

        ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,true);
        ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,false);
    };