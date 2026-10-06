/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ecab38; end: 103ecab63; -[_TtC17SCSnapEditorScope17SCSnapEditorScope init] */

void FUN_103ecab38(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapEditorScope.SCSnapEditorScope",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ecab64);
  (*pcVar1)();
}



/* Entry: 103ecab64; end: 103ecace3; -[_TtC17SCSnapEditorScope17SCSnapEditorScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecab64(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bab0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bab8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bac0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bac8));
  func_0x000100d71728(param_1 + _DAT_11302bad0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bad8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bae0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bae8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302baf0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302baf8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bb08));
  func_0x000100d71728(param_1 + _DAT_11302bb10);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bb20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bb28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bb30));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bb50));
  func_0x0001000d1dcc(param_1 + _DAT_113812260);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113812268));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113812270));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113812278);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113812280);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_113812288);
  return;
}



/* Entry: 103ecace4; end: 103ecacf3; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ecace4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302bb58);
}



/* Entry: 103ecacf4; end: 103ecad03; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecacf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bb60));
  return;
}



/* Entry: 103ecad04; end: 103ecad0f; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder pluginConfigs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecad04(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302bb68);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000100f99ab0(0);
    func_0x0001038e13ac();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103ecad10; end: 103ecad87;  */

void FUN_103ecad10(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000100f99ab0(0);
    func_0x0001038e13ac();
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103ecad88; end: 103ecada7; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder deckHierarchy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecad88(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302bb70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecada8; end: 103ecadb3; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecada8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bb78;
  _swift_beginAccess(param_1 + _DAT_11302bb78,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecadb4; end: 103ecadbf; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecadb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bb78;
  _swift_beginAccess(param_1 + _DAT_11302bb78,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecadc0; end: 103ecaddf; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder snapDocEditor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecadc0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302bb80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecade0; end: 103ecadeb; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder snapSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecade0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302bb88);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302bb88))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ecadec; end: 103ecae33;  */

void FUN_103ecadec(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ecae34; end: 103ecae3f; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder lensSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecae34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302bb90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302bb90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ecae40; end: 103ecae97;  */

void FUN_103ecae40(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ecae98; end: 103ecaea7; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder commonLoggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecae98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bb98));
  return;
}



/* Entry: 103ecaea8; end: 103ecaeb7; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder playbackFirstFrameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bba0));
  return;
}



/* Entry: 103ecaeb8; end: 103ecaec7; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder lensSendStepConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaeb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302bba8));
  return;
}



/* Entry: 103ecaec8; end: 103ecaed3; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder cameraCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaec8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbb0;
  _swift_beginAccess(param_1 + _DAT_11302bbb0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecaed4; end: 103ecaedf; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setCameraCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbb0;
  _swift_beginAccess(param_1 + _DAT_11302bbb0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecaee0; end: 103ecaeff; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder aiLensDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaee0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302bbb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecaf00; end: 103ecaf43; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder launchMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103ecaf00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbc0;
  _swift_beginAccess(param_1 + _DAT_11302bbc0,auStack_38,0,0);
  return *(undefined4 *)(param_1 + lVar1);
}



/* Entry: 103ecaf44; end: 103ecaf93; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setLaunchMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaf44(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbc0;
  _swift_beginAccess(param_1 + _DAT_11302bbc0,auStack_48,1,0);
  *(undefined4 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103ecaf94; end: 103ecafdb; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder editMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecaf94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbc8;
  _swift_beginAccess(param_1 + _DAT_11302bbc8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103ecafdc; end: 103ecafe7; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setEditMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecafdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbc8;
  _swift_beginAccess(param_1 + _DAT_11302bbc8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103ecafe8; end: 103ecb02f; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecafe8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbd0;
  _swift_beginAccess(param_1 + _DAT_11302bbd0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103ecb030; end: 103ecb03b; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbd0;
  _swift_beginAccess(param_1 + _DAT_11302bbd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103ecb03c; end: 103ecb083; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder initialPlayControl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb03c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbd8;
  _swift_beginAccess(param_1 + _DAT_11302bbd8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103ecb084; end: 103ecb08f; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setInitialPlayControl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb084(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbd8;
  _swift_beginAccess(param_1 + _DAT_11302bbd8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103ecb090; end: 103ecb0d3; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder orientPlaybackRenderSizeToSnapGrid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ecb090(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbe0;
  _swift_beginAccess(param_1 + _DAT_11302bbe0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103ecb0d4; end: 103ecb123; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setOrientPlaybackRenderSizeToSnapGrid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb0d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbe0;
  _swift_beginAccess(param_1 + _DAT_11302bbe0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103ecb124; end: 103ecb167; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder isLegacyAdvancedEdit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ecb124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbe8;
  _swift_beginAccess(param_1 + _DAT_11302bbe8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103ecb168; end: 103ecb1b7; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setIsLegacyAdvancedEdit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb168(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbe8;
  _swift_beginAccess(param_1 + _DAT_11302bbe8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103ecb1b8; end: 103ecb1fb; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder blockQuickCaptureCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ecb1b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbf0;
  _swift_beginAccess(param_1 + _DAT_11302bbf0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103ecb1fc; end: 103ecb24b; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setBlockQuickCaptureCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb1fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbf0;
  _swift_beginAccess(param_1 + _DAT_11302bbf0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103ecb24c; end: 103ecb28f; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder actionBarMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103ecb24c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302bbf8;
  _swift_beginAccess(param_1 + _DAT_11302bbf8,auStack_38,0,0);
  return *(undefined4 *)(param_1 + lVar1);
}



/* Entry: 103ecb290; end: 103ecb2df; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setActionBarMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb290(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302bbf8;
  _swift_beginAccess(param_1 + _DAT_11302bbf8,auStack_48,1,0);
  *(undefined4 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103ecb2e0; end: 103ecb3bf; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder captureDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb2e0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_113812290;
  puVar4 = auStack_50 + -extraout_x8;
  _swift_beginAccess(param_1 + _DAT_113812290,auStack_48,0,0);
  func_0x0001009f0578(param_1 + lVar1,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103ecb3c0; end: 103ecb4b7; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setCaptureDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb3c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_113812290;
  _swift_beginAccess(param_1 + _DAT_113812290,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 103ecb4b8; end: 103ecb4ff; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder captureLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb4b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113812298;
  _swift_beginAccess(param_1 + _DAT_113812298,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103ecb500; end: 103ecb50b; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setCaptureLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb500(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113812298;
  _swift_beginAccess(param_1 + _DAT_113812298,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103ecb50c; end: 103ecb56b;  */

void FUN_103ecb50c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 103ecb56c; end: 103ecb5b3; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder preloadUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb56c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138122a0;
  _swift_beginAccess(param_1 + _DAT_1138122a0,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecb5b4; end: 103ecb617; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setPreloadUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138122a0;
  _swift_beginAccess(param_1 + _DAT_1138122a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 103ecb618; end: 103ecb623; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder placeholderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb618(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138122a8;
  _swift_beginAccess(param_1 + _DAT_1138122a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecb624; end: 103ecb62f; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138122a8;
  _swift_beginAccess(param_1 + _DAT_1138122a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecb630; end: 103ecb63b; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder cameraViewfinder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb630(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138122b0;
  _swift_beginAccess(param_1 + _DAT_1138122b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecb63c; end: 103ecb647; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setCameraViewfinder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138122b0;
  _swift_beginAccess(param_1 + _DAT_1138122b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecb648; end: 103ecb653; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder placeholderImageFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb648(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138122b8;
  _swift_beginAccess(param_1 + _DAT_1138122b8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecb654; end: 103ecb697;  */

void FUN_103ecb654(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ecb698; end: 103ecb6a3; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder setPlaceholderImageFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecb698(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138122b8;
  _swift_beginAccess(param_1 + _DAT_1138122b8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecb6a4; end: 103ecb6f7;  */

void FUN_103ecb6a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ecb6f8; end: 103ecbafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ecb6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_a8 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_allocWithZone();
  lVar3 = _DAT_11302bb78;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302bb78,0);
  lVar4 = _DAT_11302bbb0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302bbb0,0);
  *(undefined4 *)(unaff_x20 + _DAT_11302bbc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302bbc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302bbd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302bbd8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302bbe0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302bbe8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302bbf0) = 0;
  *(undefined4 *)(unaff_x20 + _DAT_11302bbf8) = 0;
  lVar5 = _DAT_113812290;
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(unaff_x20 + lVar5,1,1,lVar6);
  *(undefined8 *)(unaff_x20 + _DAT_113812298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1138122a0) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1138122a8,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1138122b0,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1138122b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302bb58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302bb60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302bb68) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302bb70) = param_4;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_11302bb80) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302bb88);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302bb90);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11302bb98) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11302bba0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11302bba8) = param_13;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_14);
  *(undefined8 *)(unaff_x20 + _DAT_11302bbb8) = param_15;
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puVar7 = auStack_a8;
  _objc_msgSendSuper2(puVar7,puVar2);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_11);
  _objc_release(param_12);
  _objc_release(param_13);
  _swift_unknownObjectRelease(param_14);
  return puVar7;
}



/* Entry: 103ecbafc; end: 103ecbcab; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder initWithSource:config:pluginConfigs:deckHierarchy:delegate:snapDocEditor:snapSessionID:lensSessionID:commonLoggingParams:playbackFirstFrameImage:lensSendStepConfig:cameraCoordinator:aiLensDataProvider:] */

undefined8
FUN_103ecbafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_88;
  
  if (param_5 == 0) {
    lStack_88 = 0;
  }
  else {
    param_2 = 0;
    func_0x000100f99ab0();
    uVar1 = param_2;
    func_0x0001038e13ac();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,param_2,PTR___syXlN_11034f1a0 + 8,uVar1);
    lStack_88 = param_5;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_10 == 0) {
    lStack_a0 = 0;
    uStack_b0 = 0;
  }
  else {
    uStack_b0 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_a0 = param_10;
  }
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  uVar1 = param_11;
  _objc_retain();
  uVar2 = param_12;
  _objc_retain();
  uVar3 = param_13;
  _objc_retain(param_13);
  _swift_unknownObjectRetain(param_14);
  _swift_unknownObjectRetain(param_15);
  func_0x000103eccb00(param_3,param_4,lStack_88,param_6,param_7,param_8,param_9,param_2,lStack_a0,
                      uStack_b0,param_11,param_12,param_13,param_14,param_15);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _swift_unknownObjectRelease(param_14);
  return param_3;
}



/* Entry: 103ecbcac; end: 103ecbcd7; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder init] */

void FUN_103ecbcac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapEditorScope.SCSnapEditorScopeBuilder",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ecbcd8);
  (*pcVar1)();
}



/* Entry: 103ecbcd8; end: 103ecbcdb;  */

void FUN_103ecbcd8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ecbcdc; end: 103ecbe97; -[_TtC17SCSnapEditorScope24SCSnapEditorScopeBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecbcdc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bb60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bb68));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bb70));
  func_0x000100d71728(param_1 + _DAT_11302bb78);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bb80));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bb88 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bb90 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bb98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bba0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bba8));
  func_0x000100d71728(param_1 + _DAT_11302bbb0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bbb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bbc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bbd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302bbd8));
  func_0x0001000d1dcc(param_1 + _DAT_113812290);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113812298));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1138122a0));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1138122a8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1138122b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_1138122b8);
  return;
}



/* Entry: 103ecbe98; end: 103ecc1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103ecbe98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 unaff_x20;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar6 = 0;
  FUN_103eccdc8();
  lVar7 = lVar6;
  _objc_allocWithZone();
  lVar3 = _DAT_11302bb78;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_11302bb78,0);
  lVar4 = _DAT_11302bbb0;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_11302bbb0,0);
  *(undefined4 *)(lVar7 + _DAT_11302bbc0) = 0;
  *(undefined8 *)(lVar7 + _DAT_11302bbc8) = 0;
  *(undefined8 *)(lVar7 + _DAT_11302bbd0) = 0;
  *(undefined8 *)(lVar7 + _DAT_11302bbd8) = 0;
  *(undefined1 *)(lVar7 + _DAT_11302bbe0) = 0;
  *(undefined1 *)(lVar7 + _DAT_11302bbe8) = 0;
  *(undefined1 *)(lVar7 + _DAT_11302bbf0) = 0;
  *(undefined4 *)(lVar7 + _DAT_11302bbf8) = 0;
  lVar5 = _DAT_113812290;
  lVar8 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar7 + lVar5,1,1,lVar8);
  *(undefined8 *)(lVar7 + _DAT_113812298) = 0;
  *(undefined8 *)(lVar7 + _DAT_1138122a0) = 0;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_1138122a8,0);
  _swift_unknownObjectWeakInit(lVar7 + _DAT_1138122b0,0);
  _swift_unknownObjectWeakInit(lVar7 + _DAT_1138122b8,0);
  *(undefined8 *)(lVar7 + _DAT_11302bb58) = param_1;
  *(undefined8 *)(lVar7 + _DAT_11302bb60) = param_2;
  *(undefined8 *)(lVar7 + _DAT_11302bb68) = param_3;
  *(undefined8 *)(lVar7 + _DAT_11302bb70) = param_4;
  _swift_beginAccess(lVar7 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar3,param_5);
  *(undefined8 *)(lVar7 + _DAT_11302bb80) = param_6;
  puVar1 = (undefined8 *)(lVar7 + _DAT_11302bb88);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(lVar7 + _DAT_11302bb90);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(lVar7 + _DAT_11302bb98) = param_11;
  *(undefined8 *)(lVar7 + _DAT_11302bba0) = param_12;
  *(undefined8 *)(lVar7 + _DAT_11302bba8) = param_13;
  _swift_beginAccess(lVar7 + lVar4,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar4,param_14);
  *(undefined8 *)(lVar7 + _DAT_11302bbb8) = param_15;
  puVar2 = PTR_s_init_1125d9248;
  lStack_a8 = lVar7;
  lStack_a0 = lVar6;
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _swift_unknownObjectRetain(param_15);
  plVar9 = &lStack_a8;
  _objc_msgSendSuper2(plVar9,puVar2);
  func_0x000107c3ed2c(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(plVar9);
  return unaff_x20;
}



/* Entry: 103ecc1c4; end: 103ecc3d7; -[_TtC17SCSnapEditorScope25SCSnapEditorScopeServices buildWithSource:config:pluginConfigs:deckHierarchy:delegate:snapDocEditor:snapSessionID:lensSessionID:commonLoggingParams:playbackFirstFrameImage:lensSendStepConfig:cameraCoordinator:aiLensDataProvider:] */

void FUN_103ecc1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_c0;
  long lStack_80;
  undefined8 uStack_70;
  
  if (param_5 == 0) {
    lStack_80 = 0;
  }
  else {
    param_2 = 0;
    func_0x000100f99ab0();
    uVar1 = param_2;
    func_0x0001038e13ac();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,param_2,PTR___syXlN_11034f1a0 + 8,uVar1);
    lStack_80 = param_5;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_10 == 0) {
    lStack_c0 = 0;
    uStack_70 = 0;
  }
  else {
    uStack_70 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_c0 = param_10;
  }
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  uVar1 = param_11;
  _objc_retain();
  uVar2 = param_12;
  _objc_retain();
  uVar3 = param_13;
  _objc_retain();
  _swift_unknownObjectRetain(param_14);
  _swift_unknownObjectRetain(param_15);
  _objc_retain(param_1);
  FUN_103ecbe98(param_3,param_4,lStack_80,param_6,param_7,param_8,param_9,param_2,lStack_c0,
                uStack_70,param_11,param_12,param_13,param_14,param_15);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _swift_unknownObjectRelease(param_14);
  _swift_unknownObjectRelease(param_15);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uStack_70);
  _swift_bridgeObjectRelease(lStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103ecc3d8; end: 103ecc48b; -[_TtC17SCSnapEditorScope25SCSnapEditorScopeServices buildWithBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecc3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  func_0x00010036d104(0);
  _objc_allocWithZone();
  _objc_retain();
  _objc_retain();
  uVar1 = param_3;
  FUN_103ecc4fc();
  auStack_48[0] = uVar1;
  func_0x00010008a7c8(&uStack_38,auStack_48);
  func_0x000100083b20(auStack_48);
  _swift_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_unknownObjectRelease(auStack_48[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ecc48c; end: 103ecc4eb; -[_TtC17SCSnapEditorScope25SCSnapEditorScopeServices init] */

void FUN_103ecc48c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapEditorScope.SCSnapEditorScopeServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ecc4b8);
  (*pcVar1)();
}



/* Entry: 103ecc4ec; end: 103ecc4fb; -[_TtC17SCSnapEditorScope25SCSnapEditorScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecc4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302bc08));
  return;
}



/* Entry: 103ecc4fc; end: 103eccdc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecc4fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_getObjectType();
  lVar3 = _DAT_11302bad0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302bad0,0);
  lVar4 = _DAT_11302bb10;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302bb10,0);
  lVar5 = _DAT_113812278;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113812278,0);
  lVar6 = _DAT_113812280;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113812280,0);
  lVar7 = _DAT_113812288;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113812288,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302baa8) = *(undefined8 *)(param_1 + _DAT_11302bb58);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11302bb60);
  *(undefined8 *)(unaff_x20 + _DAT_11302bab0) = uVar9;
  *(undefined8 *)(unaff_x20 + _DAT_11302bab8) = *(undefined8 *)(param_1 + _DAT_11302bb68);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11302bb70);
  *(undefined8 *)(unaff_x20 + _DAT_11302bac0) = uVar10;
  _swift_bridgeObjectRetain();
  _swift_unknownObjectRetain(uVar10);
  _objc_retain(uVar9);
  func_0x000107c41408();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(unaff_x20 + _DAT_11302bac8) = uVar10;
  lVar8 = _DAT_11302bb78;
  _swift_beginAccess(param_1 + _DAT_11302bb78,auStack_80,0,0);
  lVar8 = param_1 + lVar8;
  _swift_unknownObjectWeakLoadStrong(lVar8);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,lVar8);
  _swift_unknownObjectRelease(lVar8);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11302bb80);
  *(undefined8 *)(unaff_x20 + _DAT_11302bad8) = uVar9;
  uVar10 = ((undefined8 *)(param_1 + _DAT_11302bb88))[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302bae0);
  *puVar1 = *(undefined8 *)(param_1 + _DAT_11302bb88);
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302bb90);
  uVar11 = puVar1[1];
  uVar12 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302bae8);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar12;
  uVar12 = *(undefined8 *)(param_1 + _DAT_11302bb98);
  *(undefined8 *)(unaff_x20 + _DAT_11302baf0) = uVar12;
  uVar13 = *(undefined8 *)(param_1 + _DAT_11302bba0);
  *(undefined8 *)(unaff_x20 + _DAT_11302baf8) = uVar13;
  lVar8 = _DAT_11302bbe0;
  _swift_beginAccess(param_1 + _DAT_11302bbe0,auStack_b0,0,0);
  *(undefined1 *)(unaff_x20 + _DAT_11302bb00) = *(undefined1 *)(param_1 + lVar8);
  uVar14 = *(undefined8 *)(param_1 + _DAT_11302bba8);
  *(undefined8 *)(unaff_x20 + _DAT_11302bb08) = uVar14;
  lVar8 = _DAT_11302bbb0;
  _swift_beginAccess(param_1 + _DAT_11302bbb0,auStack_c8,0,0);
  lVar8 = param_1 + lVar8;
  _swift_unknownObjectWeakLoadStrong(lVar8);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_e0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,lVar8);
  _objc_retain(uVar14);
  _swift_unknownObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _objc_retain(uVar12);
  _objc_retain(uVar13);
  _swift_unknownObjectRelease(lVar8);
  uVar10 = *(undefined8 *)(param_1 + _DAT_11302bbb8);
  *(undefined8 *)(unaff_x20 + _DAT_11302bb50) = uVar10;
  lVar8 = _DAT_11302bbc0;
  _swift_beginAccess(param_1 + _DAT_11302bbc0,auStack_f8,0,0);
  *(undefined4 *)(unaff_x20 + _DAT_11302bb18) = *(undefined4 *)(param_1 + lVar8);
  lVar8 = _DAT_11302bbc8;
  _swift_beginAccess(param_1 + _DAT_11302bbc8,auStack_110,0,0);
  uVar9 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(unaff_x20 + _DAT_11302bb20) = uVar9;
  lVar8 = _DAT_11302bbd0;
  _swift_beginAccess(param_1 + _DAT_11302bbd0,auStack_128,0,0);
  uVar11 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(unaff_x20 + _DAT_11302bb28) = uVar11;
  lVar8 = _DAT_11302bbd8;
  _swift_beginAccess(param_1 + _DAT_11302bbd8,auStack_140,0,0);
  uVar12 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(unaff_x20 + _DAT_11302bb30) = uVar12;
  lVar8 = _DAT_11302bbe8;
  _swift_beginAccess(param_1 + _DAT_11302bbe8,auStack_158,0,0);
  *(undefined1 *)(unaff_x20 + _DAT_11302bb38) = *(undefined1 *)(param_1 + lVar8);
  lVar8 = _DAT_11302bbf0;
  _swift_beginAccess(param_1 + _DAT_11302bbf0,auStack_170,0,0);
  *(undefined1 *)(unaff_x20 + _DAT_11302bb40) = *(undefined1 *)(param_1 + lVar8);
  lVar8 = _DAT_11302bbf8;
  _swift_beginAccess(param_1 + _DAT_11302bbf8,auStack_188,0,0);
  *(undefined4 *)(unaff_x20 + _DAT_11302bb48) = *(undefined4 *)(param_1 + lVar8);
  lVar8 = _DAT_113812290;
  _swift_beginAccess(param_1 + _DAT_113812290,auStack_1a0,0,0);
  func_0x0001009f0578(param_1 + lVar8,unaff_x20 + _DAT_113812260);
  lVar8 = _DAT_113812298;
  _swift_beginAccess(param_1 + _DAT_113812298,auStack_1b8,0,0);
  uVar13 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(unaff_x20 + _DAT_113812268) = uVar13;
  lVar8 = _DAT_1138122a0;
  _swift_beginAccess(param_1 + _DAT_1138122a0,auStack_1d0,0,0);
  uVar14 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(unaff_x20 + _DAT_113812270) = uVar14;
  lVar8 = _DAT_1138122a8;
  _swift_beginAccess(param_1 + _DAT_1138122a8,auStack_1e8,0,0);
  lVar8 = param_1 + lVar8;
  _swift_unknownObjectWeakLoadStrong();
  _swift_beginAccess(unaff_x20 + lVar5,auStack_200,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,lVar8);
  _swift_unknownObjectRetain(uVar14);
  _swift_unknownObjectRetain(uVar10);
  _objc_retain(uVar9);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  _objc_retain(uVar13);
  _objc_release(lVar8);
  lVar8 = _DAT_1138122b0;
  _swift_beginAccess(param_1 + _DAT_1138122b0,auStack_218,0,0);
  lVar8 = param_1 + lVar8;
  _swift_unknownObjectWeakLoadStrong(lVar8);
  _swift_beginAccess(unaff_x20 + lVar6,auStack_230,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar6,lVar8);
  _objc_release(lVar8);
  lVar8 = _DAT_1138122b8;
  _swift_beginAccess(param_1 + _DAT_1138122b8,auStack_248,0,0);
  param_1 = param_1 + lVar8;
  _swift_unknownObjectWeakLoadStrong(param_1);
  _swift_beginAccess(unaff_x20 + lVar7,auStack_260,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar7,param_1);
  _objc_release(param_1);
  _objc_msgSendSuper2(&stack0xfffffffffffffd90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eccdc8; end: 103eccdeb;  */

void FUN_103eccdc8(undefined8 param_1)

{
  if (lRam000000011302bc70 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7d2830);
  return;
}



/* Entry: 103eccdec; end: 103eccee3;  */

void FUN_103eccdec(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_108 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_100 = PTR___sBOWV_11034d658 + 0x40;
  puStack_f8 = &UNK_10dca6a08;
  puStack_f0 = &UNK_10dca6a20;
  puStack_e8 = &UNK_10dca6a38;
  puStack_e0 = &UNK_10dca6a20;
  puStack_d8 = &UNK_10dca6a50;
  puStack_d0 = &UNK_10dca6a68;
  puStack_c8 = &UNK_10dca6a08;
  puStack_c0 = &UNK_10dca6a08;
  puStack_b8 = &UNK_10dca6a08;
  puStack_b0 = &UNK_10dca6a38;
  puStack_a0 = PTR___sBi32_WV_11034d668 + 0x40;
  puStack_a8 = &UNK_10dca6a08;
  puStack_98 = &UNK_10dca6a08;
  puStack_90 = &UNK_10dca6a08;
  puStack_88 = &UNK_10dca6a08;
  puStack_80 = &UNK_10dca6a80;
  puStack_78 = &UNK_10dca6a80;
  puStack_70 = &UNK_10dca6a80;
  lVar1 = 0x13f;
  puStack_68 = puStack_a0;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &UNK_10dca6a08;
    puStack_50 = &UNK_10dca6a08;
    puStack_48 = &UNK_10dca6a38;
    puStack_40 = &UNK_10dca6a38;
    puStack_38 = &UNK_10dca6a38;
    _swift_updateClassMetadata2(param_1,0x100,0x1b,&puStack_108,param_1 + 0x50);
  }
  return;
}



/* Entry: 103eccee4; end: 103eccefb;  */

undefined1  [16] FUN_103eccee4(void)

{
  return ZEXT816(0x11071d3c0);
}



/* Entry: 103eccefc; end: 103eccf0b;  */

undefined1  [16] FUN_103eccefc(void)

{
  return ZEXT816(0x11071d3e8);
}



/* Entry: 103eccf0c; end: 103eccf4f;  */

void FUN_103eccf0c(void)

{
  long unaff_x20;
  
  FUN_103ecd07c(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103eccf50; end: 103ecd07b;  */

void FUN_103eccf50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    puVar1 = PTR___sSSN_11034da80;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_5,PTR___sSSN_11034da80);
    uVar3 = 0;
    func_0x000101345fdc(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_6,uVar3);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_7,puVar1);
    func_0x000107c420b8(lVar2);
    _swift_unknownObjectRelease(lVar2);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_7);
    return;
  }
  return;
}



/* Entry: 103ecd07c; end: 103ecd09f;  */

undefined8 FUN_103ecd07c(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103ecd0a0; end: 103ecd0b3;  */

bool FUN_103ecd0a0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ecd0b4; end: 103ecd15f;  */

void FUN_103ecd0b4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ecd160; end: 103ecd163;  */

void FUN_103ecd160(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bd60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6bb0;
  _swift_getWitnessTable(&UNK_10dca6bb0,&UNK_11071d498);
  puRam000000011302bd60 = puVar1;
  return;
}



/* Entry: 103ecd164; end: 103ecd1a3;  */

void FUN_103ecd164(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bd60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6bb0;
  _swift_getWitnessTable(&UNK_10dca6bb0,&UNK_11071d498);
  puRam000000011302bd60 = puVar1;
  return;
}



/* Entry: 103ecd1a4; end: 103ecd313;  */

int FUN_103ecd1a4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ecd220;
        goto LAB_103ecd204;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ecd204:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103ecd220:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ecd314; end: 103ecd3ab;  */

void FUN_103ecd314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  _swift_getObjectType();
  _swift_getObjectType(param_3);
  (*param_8)(param_1,param_3,param_5,param_6,param_7);
  return;
}



/* Entry: 103ecd3ac; end: 103ecd40b; -[_TtC17SCSnapEditorScope24SnapEditorPluginServices init] */

void FUN_103ecd3ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapEditorScope.SnapEditorPluginServices",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ecd3d8);
  (*pcVar1)();
}



/* Entry: 103ecd40c; end: 103ecd473; -[_TtC17SCSnapEditorScope24SnapEditorPluginServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ecd40c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bd68));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302bd70));
  func_0x0001000d1dcc(param_1 + _DAT_1138122c0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138122c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1138122d0));
  return;
}



/* Entry: 103ecd474; end: 103ecd6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ecd474(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  undefined1 auStack_60 [8];
  
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_60 + -extraout_x8;
  lVar4 = 0;
  func_0x000103ecd898();
  _swift_allocObject();
  _swift_unknownObjectWeakInit(lVar4 + 0x10,0);
  _swift_unknownObjectWeakAssign(lVar4 + 0x10,param_1);
  lVar5 = 0;
  func_0x000103eccf30();
  _swift_allocObject();
  _swift_unknownObjectWeakInit(lVar5 + 0x10,0);
  _swift_unknownObjectWeakAssign(lVar5 + 0x10,param_1);
  lVar6 = param_1;
  func_0x000107c3f594();
  _objc_retainAutoreleasedReturnValue();
  bVar2 = lVar6 == 0;
  if (bVar2) {
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar8);
    _objc_release(lVar6);
    lVar6 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar8,bVar2,1);
  func_0x000107c3f5b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_allocWithZone();
  plVar1 = (long *)(unaff_x20 + _DAT_11302bd68);
  *plVar1 = lVar4;
  plVar1[1] = (long)&PTR_DAT_11071d4e0;
  plVar1 = (long *)(unaff_x20 + _DAT_11302bd70);
  *plVar1 = lVar5;
  plVar1[1] = (long)&PTR_DAT_11071d400;
  func_0x0001009f0578(puVar8,unaff_x20 + _DAT_1138122c0);
  *(long *)(unaff_x20 + _DAT_1138122c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1138122d0) = param_2;
  puVar3 = PTR_s_init_1125d9248;
  _swift_retain(param_2);
  puVar7 = auStack_60;
  _objc_msgSendSuper2(puVar7,puVar3);
  func_0x0001000d1dcc(puVar8);
  return puVar7;
}



/* Entry: 103ecd6cc; end: 103ecd7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ecd6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_70;
  long lStack_68;
  
  plVar3 = &lStack_70;
  lVar2 = param_6;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_6 + _DAT_11302bd68);
  *puVar1 = param_1;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(param_6 + _DAT_11302bd70);
  *puVar1 = param_2;
  puVar1[1] = param_10;
  func_0x0001009f0578(param_3,param_6 + _DAT_1138122c0);
  *(undefined8 *)(param_6 + _DAT_1138122c8) = param_4;
  *(undefined8 *)(param_6 + _DAT_1138122d0) = param_5;
  lStack_70 = param_6;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 103ecd7a4; end: 103ecd7ab;  */

void FUN_103ecd7a4(void)

{
  if (lRam000000011302bda0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d2970);
  return;
}



/* Entry: 103ecd7ac; end: 103ecd7e3;  */

void FUN_103ecd7ac(undefined8 param_1)

{
  if (lRam000000011302bda0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d2970);
  return;
}



/* Entry: 103ecd7e4; end: 103ecd873;  */

void FUN_103ecd7e4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dca6c60;
  puStack_40 = &UNK_10dca6c60;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dca6c78;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 103ecd874; end: 103ecd8b7;  */

void FUN_103ecd874(void)

{
  long unaff_x20;
  
  FUN_103ecd07c(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ecd8b8; end: 103ecda13;  */

long FUN_103ecd8b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5d180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c4d070();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _swift_unknownObjectRelease(lVar1);
  }
  return lVar3;
}



/* Entry: 103ecda14; end: 103ecda8b;  */

undefined8 FUN_103ecda14(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c3ec60();
    _swift_unknownObjectRelease(lVar1);
  }
  return param_1;
}



/* Entry: 103ecda8c; end: 103ecdb53;  */

long FUN_103ecda8c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c40428();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar1);
  }
  return lVar2;
}



/* Entry: 103ecdb54; end: 103ecdb77;  */

void FUN_103ecdb54(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ecdb78; end: 103ecdc3b;  */

void FUN_103ecdb78(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11302be50;
  func_0x0001000285a8(0x11302be50,&UNK_10dca6cf0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103ecdc3c; end: 103ecdc3f;  */

void FUN_103ecdc3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6d00;
  _swift_getWitnessTable(&UNK_10dca6d00,&UNK_11071d5a8);
  puRam000000011302bea0 = puVar1;
  return;
}



/* Entry: 103ecdc40; end: 103ecdcab;  */

void FUN_103ecdc40(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6d00;
  _swift_getWitnessTable(&UNK_10dca6d00,&UNK_11071d5a8);
  puRam000000011302bea0 = puVar1;
  return;
}



/* Entry: 103ecdcac; end: 103ecdcaf;  */

void FUN_103ecdcac(void)

{
  undefined *puVar1;
  
  if (puRam000000011302beb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6db8;
  _swift_getWitnessTable(&UNK_10dca6db8,&UNK_11071d348);
  puRam000000011302beb8 = puVar1;
  return;
}



/* Entry: 103ecdcb0; end: 103ecdd1b;  */

void FUN_103ecdcb0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302beb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6db8;
  _swift_getWitnessTable(&UNK_10dca6db8,&UNK_11071d348);
  puRam000000011302beb8 = puVar1;
  return;
}



/* Entry: 103ecdd1c; end: 103ecdd9f;  */

void FUN_103ecdd1c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103ecdda0; end: 103ecdda3;  */

void FUN_103ecdda0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6e28;
  _swift_getWitnessTable(&UNK_10dca6e28,&UNK_11071d348);
  puRam000000011302bed0 = puVar1;
  return;
}



/* Entry: 103ecdda4; end: 103ecdde3;  */

void FUN_103ecdda4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6e28;
  _swift_getWitnessTable(&UNK_10dca6e28,&UNK_11071d348);
  puRam000000011302bed0 = puVar1;
  return;
}



/* Entry: 103ecdde4; end: 103ecdde7;  */

void FUN_103ecdde4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6de0;
  _swift_getWitnessTable(&UNK_10dca6de0,&UNK_11071d348);
  puRam000000011302bed8 = puVar1;
  return;
}



/* Entry: 103ecdde8; end: 103ecde47;  */

void FUN_103ecdde8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302bed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca6de0;
  _swift_getWitnessTable(&UNK_10dca6de0,&UNK_11071d348);
  puRam000000011302bed8 = puVar1;
  return;
}



/* Entry: 103ecde48; end: 103ecdfdf;  */

int FUN_103ecde48(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xec < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x13) {
      iVar2 = 4;
    }
    if (param_2 + 0x13 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ecdec4;
        goto LAB_103ecdea8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ecdea8:
      return ((uint)*param_1 | uVar1 << 8) - 0x13;
    }
  }
LAB_103ecdec4:
  iVar2 = *param_1 - 0x14;
  if (*param_1 < 0x14) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ecdfe0; end: 103ece08b;  */

void FUN_103ecdfe0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ece08c; end: 103ece0b3;  */

void FUN_103ece08c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}


