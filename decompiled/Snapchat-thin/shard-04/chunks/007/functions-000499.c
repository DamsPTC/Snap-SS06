/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103862de0; end: 103862e23; -[SCARBarSnapEditorFeaturesIntegrationEntryPoint end] */

void FUN_103862de0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103862e24; end: 103863183;  */

void FUN_103862e24(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x7469644570616e73;
      if (((param_2 == 0x7469644570616e73) && (param_3 == -0x109a8f909cac8d91)) ||
         (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c593c0();
      }
      else {
        uVar2 = 0x7265537261427261;
        if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
           (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52898();
        }
        else {
          uVar2 = 0xd000000000000019;
          if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e0a30)) ||
             (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55cbc();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef0e906d0)) ||
               (func_0x000107c605b8(0xd00000000000002e,0x800000010f16f930,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c593d4();
            }
            else {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef0fc1460)) &&
                 (func_0x000107c605b8(0xd00000000000001e,0x800000010f03eba0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "ARBarIntegration/SCARBarSnapEditorFeaturesIntegrationEntryPoint.swift"
                                    ,0x45,2,0x3a,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103863184);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55d1c();
            }
          }
        }
      }
      goto LAB_103862eb8;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103862eb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103863184; end: 10386322f; -[SCARBarSnapEditorFeaturesIntegrationEntryPoint setValue:forIvarName:] */

void FUN_103863184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103862e24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103863230; end: 1038632f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863230(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3ba0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3ba8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3bb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3bb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3bc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3bc8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3bd0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038632f4; end: 103863313; -[SCARBarSnapEditorFeaturesIntegrationEntryPoint init] */

void FUN_1038632f4(void)

{
  FUN_103863230();
  return;
}



/* Entry: 103863314; end: 103863347;  */

void FUN_103863314(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103863348; end: 1038633cf; -[SCARBarSnapEditorFeaturesIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863348(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3ba0);
  func_0x000107c61610(param_1 + _DAT_112fa3ba8);
  func_0x000107c61610(param_1 + _DAT_112fa3bb0);
  func_0x000107c61610(param_1 + _DAT_112fa3bb8);
  func_0x000107c61610(param_1 + _DAT_112fa3bc0);
  func_0x000107c61610(param_1 + _DAT_112fa3bc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3bd0));
  return;
}



/* Entry: 1038633d0; end: 1038633ef;  */

void FUN_1038633d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128f4118);
  return;
}



/* Entry: 1038633f0; end: 1038633fb; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038633f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c00;
  func_0x000107c61428(param_1 + _DAT_112fa3c00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038633fc; end: 103863407; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038633fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c00;
  func_0x000107c61428(param_1 + _DAT_112fa3c00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103863408; end: 103863413; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint snapEditorScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863408(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c08;
  func_0x000107c61428(param_1 + _DAT_112fa3c08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103863414; end: 10386341f; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setSnapEditorScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c08;
  func_0x000107c61428(param_1 + _DAT_112fa3c08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103863420; end: 10386342b; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint leBrowserIntegrationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863420(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c10;
  func_0x000107c61428(param_1 + _DAT_112fa3c10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386342c; end: 103863437; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setLeBrowserIntegrationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386342c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c10;
  func_0x000107c61428(param_1 + _DAT_112fa3c10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103863438; end: 103863443; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint snapEditorScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863438(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c18;
  func_0x000107c61428(param_1 + _DAT_112fa3c18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103863444; end: 10386344f; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setSnapEditorScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863444(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c18;
  func_0x000107c61428(param_1 + _DAT_112fa3c18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103863450; end: 10386345b; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863450(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c20;
  func_0x000107c61428(param_1 + _DAT_112fa3c20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386345c; end: 103863467; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386345c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c20;
  func_0x000107c61428(param_1 + _DAT_112fa3c20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103863468; end: 103863473; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint arBarIntegrationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863468(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c28;
  func_0x000107c61428(param_1 + _DAT_112fa3c28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103863474; end: 10386347f; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setArBarIntegrationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c28;
  func_0x000107c61428(param_1 + _DAT_112fa3c28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103863480; end: 10386348b; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint miniCameraNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863480(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c30;
  func_0x000107c61428(param_1 + _DAT_112fa3c30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10386348c; end: 103863497; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setMiniCameraNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386348c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c30;
  func_0x000107c61428(param_1 + _DAT_112fa3c30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103863498; end: 1038634a3; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint snapEditorLensInjectionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863498(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c38;
  func_0x000107c61428(param_1 + _DAT_112fa3c38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038634a4; end: 1038634af; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setSnapEditorLensInjectionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038634a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c38;
  func_0x000107c61428(param_1 + _DAT_112fa3c38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038634b0; end: 1038634bb; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint lensExplorerStudySettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038634b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c40;
  func_0x000107c61428(param_1 + _DAT_112fa3c40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038634bc; end: 1038634ff;  */

void FUN_1038634bc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103863500; end: 10386350b; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setLensExplorerStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863500(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c40;
  func_0x000107c61428(param_1 + _DAT_112fa3c40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386350c; end: 10386355f;  */

void FUN_10386350c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103863560; end: 103864d17;  */

/* WARNING: Possible PIC construction at 0x000103863890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038638a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038638e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038644a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038646e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038649d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103864728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103863bac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103863bd0) */
/* WARNING: Removing unreachable block (ram,0x000103863bc0) */
/* WARNING: Removing unreachable block (ram,0x000103863bf0) */
/* WARNING: Removing unreachable block (ram,0x000103863be0) */
/* WARNING: Removing unreachable block (ram,0x000103863c20) */
/* WARNING: Removing unreachable block (ram,0x000103863c10) */
/* WARNING: Removing unreachable block (ram,0x000103863c60) */
/* WARNING: Removing unreachable block (ram,0x000103863c50) */
/* WARNING: Removing unreachable block (ram,0x000103863c40) */
/* WARNING: Removing unreachable block (ram,0x000103863ca0) */
/* WARNING: Removing unreachable block (ram,0x000103863c90) */
/* WARNING: Removing unreachable block (ram,0x000103863c80) */
/* WARNING: Removing unreachable block (ram,0x000103863c70) */
/* WARNING: Removing unreachable block (ram,0x00010386472c) */
/* WARNING: Removing unreachable block (ram,0x000103864cd4) */
/* WARNING: Removing unreachable block (ram,0x000103864cc4) */
/* WARNING: Removing unreachable block (ram,0x000103864cb4) */
/* WARNING: Removing unreachable block (ram,0x000103864ca4) */
/* WARNING: Removing unreachable block (ram,0x000103864c94) */
/* WARNING: Removing unreachable block (ram,0x000103864c84) */
/* WARNING: Removing unreachable block (ram,0x000103864c00) */
/* WARNING: Removing unreachable block (ram,0x000103864bf0) */
/* WARNING: Removing unreachable block (ram,0x000103864b88) */
/* WARNING: Removing unreachable block (ram,0x000103864b78) */
/* WARNING: Removing unreachable block (ram,0x000103864b68) */
/* WARNING: Removing unreachable block (ram,0x000103864b58) */
/* WARNING: Removing unreachable block (ram,0x000103864b48) */
/* WARNING: Removing unreachable block (ram,0x000103864b38) */
/* WARNING: Removing unreachable block (ram,0x000103864b28) */
/* WARNING: Removing unreachable block (ram,0x000103864b18) */
/* WARNING: Removing unreachable block (ram,0x000103864b08) */
/* WARNING: Removing unreachable block (ram,0x000103864ae8) */
/* WARNING: Removing unreachable block (ram,0x000103864ad8) */
/* WARNING: Removing unreachable block (ram,0x000103864ac4) */
/* WARNING: Removing unreachable block (ram,0x000103864a78) */
/* WARNING: Removing unreachable block (ram,0x0001038649d8) */
/* WARNING: Removing unreachable block (ram,0x000103864994) */
/* WARNING: Removing unreachable block (ram,0x0001038646ec) */
/* WARNING: Removing unreachable block (ram,0x000103864730) */
/* WARNING: Removing unreachable block (ram,0x000103864688) */
/* WARNING: Removing unreachable block (ram,0x000103864648) */
/* WARNING: Removing unreachable block (ram,0x000103864700) */
/* WARNING: Removing unreachable block (ram,0x000103864664) */
/* WARNING: Removing unreachable block (ram,0x0001038644a8) */
/* WARNING: Removing unreachable block (ram,0x00010386460c) */
/* WARNING: Removing unreachable block (ram,0x000103864584) */
/* WARNING: Removing unreachable block (ram,0x00010386461c) */
/* WARNING: Removing unreachable block (ram,0x00010386445c) */
/* WARNING: Removing unreachable block (ram,0x000103864424) */
/* WARNING: Removing unreachable block (ram,0x000103864460) */
/* WARNING: Removing unreachable block (ram,0x00010386446c) */
/* WARNING: Removing unreachable block (ram,0x000103864430) */
/* WARNING: Removing unreachable block (ram,0x000103864334) */
/* WARNING: Removing unreachable block (ram,0x000103864284) */
/* WARNING: Removing unreachable block (ram,0x000103863ecc) */
/* WARNING: Removing unreachable block (ram,0x000103863b48) */
/* WARNING: Removing unreachable block (ram,0x000103863b4c) */
/* WARNING: Removing unreachable block (ram,0x000103863cf4) */
/* WARNING: Removing unreachable block (ram,0x000103863b64) */
/* WARNING: Removing unreachable block (ram,0x000103863b74) */
/* WARNING: Removing unreachable block (ram,0x000103863cf8) */
/* WARNING: Removing unreachable block (ram,0x000103863d38) */
/* WARNING: Removing unreachable block (ram,0x000103863d20) */
/* WARNING: Removing unreachable block (ram,0x000103863d44) */
/* WARNING: Removing unreachable block (ram,0x000103863ad0) */
/* WARNING: Removing unreachable block (ram,0x00010386390c) */
/* WARNING: Removing unreachable block (ram,0x000103863ae0) */
/* WARNING: Removing unreachable block (ram,0x000103863cc4) */
/* WARNING: Removing unreachable block (ram,0x000103863d7c) */
/* WARNING: Removing unreachable block (ram,0x000103863d94) */
/* WARNING: Removing unreachable block (ram,0x000103863d80) */
/* WARNING: Removing unreachable block (ram,0x000103863d98) */
/* WARNING: Removing unreachable block (ram,0x000103863ed0) */
/* WARNING: Removing unreachable block (ram,0x000103863f18) */
/* WARNING: Removing unreachable block (ram,0x000103864018) */
/* WARNING: Removing unreachable block (ram,0x000103863fb8) */
/* WARNING: Removing unreachable block (ram,0x00010386401c) */
/* WARNING: Removing unreachable block (ram,0x0001038642d4) */
/* WARNING: Removing unreachable block (ram,0x000103864248) */
/* WARNING: Removing unreachable block (ram,0x000103863e84) */
/* WARNING: Removing unreachable block (ram,0x000103863b1c) */
/* WARNING: Removing unreachable block (ram,0x000103863a9c) */
/* WARNING: Removing unreachable block (ram,0x0001038638ec) */
/* WARNING: Removing unreachable block (ram,0x0001038638ac) */
/* WARNING: Removing unreachable block (ram,0x000103863894) */
/* WARNING: Removing unreachable block (ram,0x000103863bb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103863560(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5b274();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ac98();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c5b288();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c3e0b0();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c3e090();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar5 = unaff_x20;
              func_0x000107c4cf5c();
              func_0x000107c61180();
              if (lVar5 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar5 = unaff_x20;
                func_0x000107c5b250();
                func_0x000107c61180();
                if (lVar5 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  func_0x000107c4b100();
                  func_0x000107c61180();
                  if (unaff_x20 != 0) {
                    FUN_1038474f0();
                    func_0x000107c613fc();
                    uVar7 = *(undefined8 *)(lVar5 + _DAT_112fa4328);
                    puVar6 = &UNK_11069ec70;
                    func_0x000107c613fc(&UNK_11069ec70,0x18,7);
                    *(undefined8 *)(puVar6 + 0x10) = uVar7;
                    func_0x0001000285a8(0x112fa03d0,&UNK_10dc15ff0);
                    func_0x000107c613fc();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x0001000bdd8c();
                    func_0x000107c5faec();
                    func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
                    func_0x000107c61534();
                    func_0x0001000bdd8c(FUN_10383d3cc,0);
                    puVar6 = &UNK_11069ec98;
                    func_0x000107c613fc(&UNK_11069ec98,0x18,7);
                    *(long *)(puVar6 + 0x10) = unaff_x20;
                    func_0x0001000285a8(0x112fa03c8,&UNK_10dc15780);
                    func_0x000107c61534();
                    func_0x000107c61174();
                    func_0x0001000bdd8c(0x103864d20,puVar6);
                    FUN_103865568(lVar3 + _DAT_112fa2d40,
                                  *(undefined8 *)(lVar3 + _DAT_112fa2d40 + 0x18));
                    func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
                    func_0x000107c61174();
                    func_0x000107c4aeb0(lVar4);
                    func_0x000107c61180();
                    func_0x000107c4aeb4();
                    func_0x000107c61180();
                    lVar1 = lVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103864d18; end: 103864d6f;  */

void FUN_103864d18(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x00010381e004();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11069a740;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 103864d70; end: 103864d97; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint begin] */

void FUN_103864d70(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103863560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103864d98; end: 103864ddb; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint end] */

void FUN_103864d98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103864ddc; end: 10386526b;  */

void FUN_103864ddc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x7469644570616e73;
    if (((param_2 == 0x7469644570616e73) && (param_3 == -0x109a8f909cac8d91)) ||
       (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c593c0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0e90c80)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001c,0x800000010f16f380,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffd2) && (param_3 == -0x7ffffffef0e906d0)) ||
             (func_0x000107c605b8(0xd00000000000002e,0x800000010f16f930,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c593d4();
          }
          else {
            uVar2 = 0x7265537261427261;
            if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
               (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c52898();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0e90cf0)) ||
                 (func_0x000107c605b8(0xd000000000000018,0x800000010f16f310,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c52888();
              }
              else {
                if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10cf6a0)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd00000000000001c,0x800000010ef30960,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0xd00000000000001f;
                    if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef0e90650)) ||
                       (func_0x000107c605b8(0xd00000000000001f,0x800000010f16f9b0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c593b4();
                    }
                    else {
                      uVar2 = 0xd000000000000019;
                      if (((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0e90c60)) &&
                         (func_0x000107c605b8(0xd000000000000019,0x800000010f16f3a0,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "ARBarIntegration/SCARBarSnapEditorLEBrowserIntegrationEntryPoint.swift"
                                            ,0x46,2,0x49,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x10386526c);
                        (*pcVar1)();
                      }
                      FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55d24();
                    }
                    goto LAB_103864e6c;
                  }
                }
                FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c566dc();
              }
            }
          }
          goto LAB_103864e6c;
        }
      }
      FUN_103865568(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c55b54();
    }
  }
LAB_103864e6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10386526c; end: 103865317; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint setValue:forIvarName:] */

void FUN_10386526c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103864ddc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_1038655ac(auStack_50);
  return;
}



/* Entry: 103865318; end: 103865417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865318(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3c48) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103865418; end: 103865437; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint init] */

void FUN_103865418(void)

{
  FUN_103865318();
  return;
}



/* Entry: 103865438; end: 10386546b;  */

void FUN_103865438(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10386546c; end: 103865567; -[SCARBarSnapEditorLEBrowserIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386546c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3c00);
  func_0x000107c61610(param_1 + _DAT_112fa3c08);
  func_0x000107c61610(param_1 + _DAT_112fa3c10);
  func_0x000107c61610(param_1 + _DAT_112fa3c18);
  func_0x000107c61610(param_1 + _DAT_112fa3c20);
  func_0x000107c61610(param_1 + _DAT_112fa3c28);
  func_0x000107c61610(param_1 + _DAT_112fa3c30);
  func_0x000107c61610(param_1 + _DAT_112fa3c38);
  func_0x000107c61610(param_1 + _DAT_112fa3c40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3c48));
  return;
}



/* Entry: 103865568; end: 10386558b;  */

long * FUN_103865568(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10386558c; end: 1038655ab;  */

void FUN_10386558c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f4200);
  return;
}



/* Entry: 1038655ac; end: 1038655cb;  */

void FUN_1038655ac(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001038655c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1038655cc; end: 1038655d7; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038655cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c78;
  func_0x000107c61428(param_1 + _DAT_112fa3c78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038655d8; end: 1038655e3; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038655d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c78;
  func_0x000107c61428(param_1 + _DAT_112fa3c78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038655e4; end: 1038655ef; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint modularCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038655e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c80;
  func_0x000107c61428(param_1 + _DAT_112fa3c80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038655f0; end: 1038655fb; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setModularCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038655f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c80;
  func_0x000107c61428(param_1 + _DAT_112fa3c80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038655fc; end: 103865607; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint leBrowserIntegrationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038655fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c88;
  func_0x000107c61428(param_1 + _DAT_112fa3c88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103865608; end: 103865613; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setLeBrowserIntegrationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c88;
  func_0x000107c61428(param_1 + _DAT_112fa3c88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103865614; end: 10386561f; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint lensExplorerStudySettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865614(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c90;
  func_0x000107c61428(param_1 + _DAT_112fa3c90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103865620; end: 10386562b; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setLensExplorerStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865620(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c90;
  func_0x000107c61428(param_1 + _DAT_112fa3c90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386562c; end: 103865637; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint lensCarouselFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386562c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3c98;
  func_0x000107c61428(param_1 + _DAT_112fa3c98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103865638; end: 103865643; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setLensCarouselFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865638(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3c98;
  func_0x000107c61428(param_1 + _DAT_112fa3c98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103865644; end: 10386564f; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865644(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3ca0;
  func_0x000107c61428(param_1 + _DAT_112fa3ca0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103865650; end: 10386565b; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865650(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3ca0;
  func_0x000107c61428(param_1 + _DAT_112fa3ca0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386565c; end: 103865667; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint arBarIntegrationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386565c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3ca8;
  func_0x000107c61428(param_1 + _DAT_112fa3ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103865668; end: 103865673; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setArBarIntegrationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865668(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3ca8;
  func_0x000107c61428(param_1 + _DAT_112fa3ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103865674; end: 10386567f; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint lensCarouselDataProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865674(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3cb0;
  func_0x000107c61428(param_1 + _DAT_112fa3cb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103865680; end: 10386568b; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setLensCarouselDataProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3cb0;
  func_0x000107c61428(param_1 + _DAT_112fa3cb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10386568c; end: 103865697; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386568c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3cb8;
  func_0x000107c61428(param_1 + _DAT_112fa3cb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103865698; end: 1038656a3; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865698(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3cb8;
  func_0x000107c61428(param_1 + _DAT_112fa3cb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038656a4; end: 1038656af; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint miniCameraNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038656a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3cc0;
  func_0x000107c61428(param_1 + _DAT_112fa3cc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038656b0; end: 1038656f3;  */

void FUN_1038656b0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038656f4; end: 1038656ff; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setMiniCameraNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038656f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3cc0;
  func_0x000107c61428(param_1 + _DAT_112fa3cc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103865700; end: 103865753;  */

void FUN_103865700(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103865754; end: 1038671f3;  */

/* WARNING: Possible PIC construction at 0x0001038659e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386627c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038666f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038667e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038670a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038670b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038670c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038670d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038670e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038670f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386712c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103867198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038671a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038671b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038671cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103866020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103865e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103865e70) */
/* WARNING: Removing unreachable block (ram,0x000103865e60) */
/* WARNING: Removing unreachable block (ram,0x000103865e90) */
/* WARNING: Removing unreachable block (ram,0x000103865e80) */
/* WARNING: Removing unreachable block (ram,0x000103865ec0) */
/* WARNING: Removing unreachable block (ram,0x000103865eb0) */
/* WARNING: Removing unreachable block (ram,0x000103865f00) */
/* WARNING: Removing unreachable block (ram,0x000103865ef0) */
/* WARNING: Removing unreachable block (ram,0x000103865ee0) */
/* WARNING: Removing unreachable block (ram,0x000103865f40) */
/* WARNING: Removing unreachable block (ram,0x000103865f30) */
/* WARNING: Removing unreachable block (ram,0x000103865f20) */
/* WARNING: Removing unreachable block (ram,0x000103865f10) */
/* WARNING: Removing unreachable block (ram,0x000103865f80) */
/* WARNING: Removing unreachable block (ram,0x000103865f70) */
/* WARNING: Removing unreachable block (ram,0x000103865f60) */
/* WARNING: Removing unreachable block (ram,0x000103865f50) */
/* WARNING: Removing unreachable block (ram,0x000103866024) */
/* WARNING: Removing unreachable block (ram,0x000103866014) */
/* WARNING: Removing unreachable block (ram,0x000103866004) */
/* WARNING: Removing unreachable block (ram,0x000103865ff4) */
/* WARNING: Removing unreachable block (ram,0x000103865fe4) */
/* WARNING: Removing unreachable block (ram,0x000103865fd4) */
/* WARNING: Removing unreachable block (ram,0x000103865fc4) */
/* WARNING: Removing unreachable block (ram,0x000103866b1c) */
/* WARNING: Removing unreachable block (ram,0x0001038671d0) */
/* WARNING: Removing unreachable block (ram,0x0001038671bc) */
/* WARNING: Removing unreachable block (ram,0x0001038671ac) */
/* WARNING: Removing unreachable block (ram,0x00010386719c) */
/* WARNING: Removing unreachable block (ram,0x00010386718c) */
/* WARNING: Removing unreachable block (ram,0x00010386717c) */
/* WARNING: Removing unreachable block (ram,0x00010386716c) */
/* WARNING: Removing unreachable block (ram,0x00010386715c) */
/* WARNING: Removing unreachable block (ram,0x00010386714c) */
/* WARNING: Removing unreachable block (ram,0x000103867130) */
/* WARNING: Removing unreachable block (ram,0x00010386603c) */
/* WARNING: Removing unreachable block (ram,0x00010386711c) */
/* WARNING: Removing unreachable block (ram,0x00010386710c) */
/* WARNING: Removing unreachable block (ram,0x0001038670fc) */
/* WARNING: Removing unreachable block (ram,0x0001038670ec) */
/* WARNING: Removing unreachable block (ram,0x0001038670dc) */
/* WARNING: Removing unreachable block (ram,0x0001038670cc) */
/* WARNING: Removing unreachable block (ram,0x0001038670bc) */
/* WARNING: Removing unreachable block (ram,0x0001038670ac) */
/* WARNING: Removing unreachable block (ram,0x00010386709c) */
/* WARNING: Removing unreachable block (ram,0x000103866fe8) */
/* WARNING: Removing unreachable block (ram,0x000103867144) */
/* WARNING: Removing unreachable block (ram,0x00010386702c) */
/* WARNING: Removing unreachable block (ram,0x000103866f8c) */
/* WARNING: Removing unreachable block (ram,0x000103866f7c) */
/* WARNING: Removing unreachable block (ram,0x000103866f6c) */
/* WARNING: Removing unreachable block (ram,0x000103866f5c) */
/* WARNING: Removing unreachable block (ram,0x000103866f4c) */
/* WARNING: Removing unreachable block (ram,0x000103866f3c) */
/* WARNING: Removing unreachable block (ram,0x000103866f28) */
/* WARNING: Removing unreachable block (ram,0x000103866f14) */
/* WARNING: Removing unreachable block (ram,0x000103866f04) */
/* WARNING: Removing unreachable block (ram,0x000103866ee4) */
/* WARNING: Removing unreachable block (ram,0x000103866ed4) */
/* WARNING: Removing unreachable block (ram,0x000103866ec0) */
/* WARNING: Removing unreachable block (ram,0x000103866e74) */
/* WARNING: Removing unreachable block (ram,0x000103866dd4) */
/* WARNING: Removing unreachable block (ram,0x000103866d90) */
/* WARNING: Removing unreachable block (ram,0x000103866adc) */
/* WARNING: Removing unreachable block (ram,0x000103866b20) */
/* WARNING: Removing unreachable block (ram,0x000103866a74) */
/* WARNING: Removing unreachable block (ram,0x000103866a34) */
/* WARNING: Removing unreachable block (ram,0x000103866af0) */
/* WARNING: Removing unreachable block (ram,0x000103866a50) */
/* WARNING: Removing unreachable block (ram,0x000103866868) */
/* WARNING: Removing unreachable block (ram,0x0001038669f8) */
/* WARNING: Removing unreachable block (ram,0x000103866950) */
/* WARNING: Removing unreachable block (ram,0x000103866a08) */
/* WARNING: Removing unreachable block (ram,0x00010386681c) */
/* WARNING: Removing unreachable block (ram,0x0001038667e4) */
/* WARNING: Removing unreachable block (ram,0x000103866820) */
/* WARNING: Removing unreachable block (ram,0x00010386682c) */
/* WARNING: Removing unreachable block (ram,0x0001038667f0) */
/* WARNING: Removing unreachable block (ram,0x0001038666f4) */
/* WARNING: Removing unreachable block (ram,0x000103866648) */
/* WARNING: Removing unreachable block (ram,0x000103866280) */
/* WARNING: Removing unreachable block (ram,0x000103865de8) */
/* WARNING: Removing unreachable block (ram,0x000103865dec) */
/* WARNING: Removing unreachable block (ram,0x0001038660a4) */
/* WARNING: Removing unreachable block (ram,0x000103865e04) */
/* WARNING: Removing unreachable block (ram,0x000103865e14) */
/* WARNING: Removing unreachable block (ram,0x0001038660a8) */
/* WARNING: Removing unreachable block (ram,0x0001038660e8) */
/* WARNING: Removing unreachable block (ram,0x0001038660d4) */
/* WARNING: Removing unreachable block (ram,0x0001038660f0) */
/* WARNING: Removing unreachable block (ram,0x000103865d88) */
/* WARNING: Removing unreachable block (ram,0x000103865a64) */
/* WARNING: Removing unreachable block (ram,0x000103865d90) */
/* WARNING: Removing unreachable block (ram,0x000103866070) */
/* WARNING: Removing unreachable block (ram,0x000103866130) */
/* WARNING: Removing unreachable block (ram,0x00010386614c) */
/* WARNING: Removing unreachable block (ram,0x000103866138) */
/* WARNING: Removing unreachable block (ram,0x000103866150) */
/* WARNING: Removing unreachable block (ram,0x000103866284) */
/* WARNING: Removing unreachable block (ram,0x0001038662dc) */
/* WARNING: Removing unreachable block (ram,0x0001038663dc) */
/* WARNING: Removing unreachable block (ram,0x000103866378) */
/* WARNING: Removing unreachable block (ram,0x0001038663e0) */
/* WARNING: Removing unreachable block (ram,0x000103866698) */
/* WARNING: Removing unreachable block (ram,0x00010386660c) */
/* WARNING: Removing unreachable block (ram,0x00010386623c) */
/* WARNING: Removing unreachable block (ram,0x000103865dbc) */
/* WARNING: Removing unreachable block (ram,0x000103865d58) */
/* WARNING: Removing unreachable block (ram,0x0001038659e4) */
/* WARNING: Removing unreachable block (ram,0x000103865e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103865754(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_1c8 [24];
  ulong uStack_1b0;
  long lStack_1a8;
  
  lVar6 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c4d0dc();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c4ac98();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar6);
        lVar6 = lVar1;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c4b100();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar6);
          lVar6 = lVar1;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c4ae78();
          func_0x000107c61180();
          if (lVar2 != 0) {
            lVar2 = unaff_x20;
            func_0x000107c3e0b0();
            func_0x000107c61180();
            if (lVar2 != 0) {
              lVar2 = unaff_x20;
              func_0x000107c3e090();
              func_0x000107c61180();
              if (lVar2 == 0) {
                func_0x000107c61170(lVar6);
                lVar6 = lVar1;
              }
              else {
                lVar3 = unaff_x20;
                func_0x000107c4ae68();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar6);
                  lVar6 = lVar1;
                }
                else {
                  lVar4 = unaff_x20;
                  func_0x000107c4afbc();
                  func_0x000107c61180();
                  if (lVar4 != 0) {
                    func_0x000107c4cf5c();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      FUN_103837070();
                      func_0x000107c613fc();
                      func_0x000107c3e0a8();
                      func_0x000107c61180();
                      func_0x000107c61174(*(undefined8 *)(lVar2 + _DAT_112f9fbc8));
                      func_0x000107c4ae78();
                      func_0x000107c61180();
                      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fe94e8);
                      func_0x000107c61174();
                      func_0x000107c61174(uVar7);
                      func_0x0001000d224c(auStack_1c8);
                      FUN_103867c78(auStack_1c8,uStack_1b0);
                      uVar5 = uStack_1b0;
                      (**(code **)(lStack_1a8 + 0x40))(uStack_1b0,lStack_1a8);
                      FUN_103867cbc(auStack_1c8);
                      if (((uVar5 & 1) == 0) ||
                         (lVar6 = *(long *)(lVar1 + _DAT_113071fd0), lVar6 == 0)) {
                        func_0x000107c61170(lVar2);
                        lVar6 = lVar3;
                      }
                      else {
                        func_0x000107c61174();
                        lVar2 = lVar6;
                        func_0x000107c42548();
                        if ((int)lVar2 != 0) {
                          lVar6 = 0;
                          func_0x000103822894();
                          func_0x000107c61534();
                          *(long *)(lVar6 + 0x10) = lVar1;
                          *(undefined8 *)(lVar6 + 0x18) = 0;
                          *(undefined1 *)(lVar6 + 0x20) = 0;
                          lVar6 = *(long *)(lVar1 + _DAT_113071fc8);
                          func_0x000107c61174();
                          func_0x000107c3e6c8(lVar6);
                          func_0x000107c61180();
                          func_0x000107c5b3f0();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 1038671f4; end: 10386724b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038671f4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_11307d050);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c40f70(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c431f4(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10386724c; end: 103867273; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint begin] */

void FUN_10386724c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103865754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103867274; end: 1038673a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867274(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112fa3cc8);
  if (lVar1 != 0) {
    func_0x000103867bac(lVar1 + 0x10,auStack_68,0x112fa0bd0,&UNK_10dc15d00);
    if (lStack_50 == 0) {
      func_0x000103867c38(auStack_68,0x112fa0bd0,&UNK_10dc15d00);
    }
    else {
      FUN_103867c78();
      func_0x000107c6157c(lVar1);
      func_0x000100c82230();
      func_0x000104875e28(auStack_a0);
      if (lStack_88 == 0) {
        func_0x000103867c38(auStack_a0,0x112fa0418,&UNK_10dc15790);
      }
      else {
        FUN_103867c78(auStack_a0,lStack_88);
        (**(code **)(lStack_80 + 0x30))(lStack_88,lStack_80);
        FUN_103867cbc(auStack_a0);
      }
      FUN_103867cbc(auStack_68);
      func_0x000107c61574(lVar1);
    }
  }
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1038673a8; end: 1038673db; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint end] */

void FUN_1038673a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103867274();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038673dc; end: 1038678cf;  */

void FUN_1038673dc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0e905e0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010f16fa20,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0e90c80)) ||
             (func_0x000107c605b8(0xd00000000000001c,0x800000010f16f380,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55b54();
          }
          else {
            uVar2 = 0xd000000000000019;
            if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef0e90c60)) ||
               (func_0x000107c605b8(0xd000000000000019,0x800000010f16f3a0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55d24();
            }
            else {
              uVar2 = 0xd00000000000001b;
              if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10e43b0)) ||
                 (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1bc50,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c30();
              }
              else {
                uVar2 = 0x7265537261427261;
                if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
                   (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52898();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0e90cf0)) ||
                     (func_0x000107c605b8(0xd000000000000018,0x800000010f16f310,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c52888();
                  }
                  else {
                    uVar2 = 0xd000000000000021;
                    if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0f247e0)) ||
                       (func_0x000107c605b8(0xd000000000000021,0x800000010f0db820,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55c28();
                    }
                    else {
                      if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e0a30)) {
                        uVar2 = 0xd000000000000019;
                        func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10cf6a0))
                          {
                            uVar2 = 0;
                            func_0x000107c605b8(0xd00000000000001c,0x800000010ef30960,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              func_0x000107c602fc(0x15);
                              func_0x000107c6142c(0xe000000000000000);
                              func_0x000107c5fb78(param_2,param_3);
                              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                  0x800000010ef0fc20,
                                                  "ARBarIntegration/SCARBarModularCameraLEBrowserIntegrationEntryPoint.swift"
                                                  ,0x49,2,0x4f,0);
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x1038678d0);
                              (*pcVar1)();
                            }
                          }
                          FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c566dc();
                          goto LAB_103867474;
                        }
                      }
                      FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55cbc();
                    }
                  }
                }
              }
            }
          }
          goto LAB_103867474;
        }
      }
      FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c567b0();
      goto LAB_103867474;
    }
  }
  FUN_103867c78(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103867474:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1038678d0; end: 10386797b; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint setValue:forIvarName:] */

void FUN_1038678d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1038673dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_103867cbc(auStack_50);
  return;
}



/* Entry: 10386797c; end: 103867a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10386797c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3c98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3ca0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3ca8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3cb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3cb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3cc0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3cc8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103867a90; end: 103867aaf; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint init] */

void FUN_103867a90(void)

{
  FUN_10386797c();
  return;
}



/* Entry: 103867ab0; end: 103867ae3;  */

void FUN_103867ab0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103867ae4; end: 103867c77; -[SCARBarModularCameraLEBrowserIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867ae4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3c78);
  func_0x000107c61610(param_1 + _DAT_112fa3c80);
  func_0x000107c61610(param_1 + _DAT_112fa3c88);
  func_0x000107c61610(param_1 + _DAT_112fa3c90);
  func_0x000107c61610(param_1 + _DAT_112fa3c98);
  func_0x000107c61610(param_1 + _DAT_112fa3ca0);
  func_0x000107c61610(param_1 + _DAT_112fa3ca8);
  func_0x000107c61610(param_1 + _DAT_112fa3cb0);
  func_0x000107c61610(param_1 + _DAT_112fa3cb8);
  func_0x000107c61610(param_1 + _DAT_112fa3cc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3cc8));
  return;
}



/* Entry: 103867c78; end: 103867c9b;  */

long * FUN_103867c78(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103867c9c; end: 103867cbb;  */

void FUN_103867c9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f4300);
  return;
}



/* Entry: 103867cbc; end: 103867cdb;  */

void FUN_103867cbc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103867cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103867cdc; end: 103867ce7; -[SCARBarModularCameraActivationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867cdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3cf8;
  func_0x000107c61428(param_1 + _DAT_112fa3cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867ce8; end: 103867cf3; -[SCARBarModularCameraActivationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3cf8;
  func_0x000107c61428(param_1 + _DAT_112fa3cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867cf4; end: 103867cff; -[SCARBarModularCameraActivationEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867cf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d00;
  func_0x000107c61428(param_1 + _DAT_112fa3d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867d00; end: 103867d0b; -[SCARBarModularCameraActivationEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d00;
  func_0x000107c61428(param_1 + _DAT_112fa3d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867d0c; end: 103867d17; -[SCARBarModularCameraActivationEntryPoint modularCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d08;
  func_0x000107c61428(param_1 + _DAT_112fa3d08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867d18; end: 103867d23; -[SCARBarModularCameraActivationEntryPoint setModularCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d08;
  func_0x000107c61428(param_1 + _DAT_112fa3d08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867d24; end: 103867d2f; -[SCARBarModularCameraActivationEntryPoint captureScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d10;
  func_0x000107c61428(param_1 + _DAT_112fa3d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867d30; end: 103867d3b; -[SCARBarModularCameraActivationEntryPoint setCaptureScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d10;
  func_0x000107c61428(param_1 + _DAT_112fa3d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867d3c; end: 103867d47; -[SCARBarModularCameraActivationEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d18;
  func_0x000107c61428(param_1 + _DAT_112fa3d18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867d48; end: 103867d53; -[SCARBarModularCameraActivationEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d18;
  func_0x000107c61428(param_1 + _DAT_112fa3d18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867d54; end: 103867d5f; -[SCARBarModularCameraActivationEntryPoint lensCarouselStudySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d20;
  func_0x000107c61428(param_1 + _DAT_112fa3d20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867d60; end: 103867d6b; -[SCARBarModularCameraActivationEntryPoint setLensCarouselStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d20;
  func_0x000107c61428(param_1 + _DAT_112fa3d20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867d6c; end: 103867d77; -[SCARBarModularCameraActivationEntryPoint lensExplorerStudySettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d28;
  func_0x000107c61428(param_1 + _DAT_112fa3d28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867d78; end: 103867d83; -[SCARBarModularCameraActivationEntryPoint setLensExplorerStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d28;
  func_0x000107c61428(param_1 + _DAT_112fa3d28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867d84; end: 103867d8f; -[SCARBarModularCameraActivationEntryPoint taskManagmentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d30;
  func_0x000107c61428(param_1 + _DAT_112fa3d30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867d90; end: 103867d9b; -[SCARBarModularCameraActivationEntryPoint setTaskManagmentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d30;
  func_0x000107c61428(param_1 + _DAT_112fa3d30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867d9c; end: 103867da7; -[SCARBarModularCameraActivationEntryPoint lensCollectionTabBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867d9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d38;
  func_0x000107c61428(param_1 + _DAT_112fa3d38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867da8; end: 103867db3; -[SCARBarModularCameraActivationEntryPoint setLensCollectionTabBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d38;
  func_0x000107c61428(param_1 + _DAT_112fa3d38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867db4; end: 103867dbf; -[SCARBarModularCameraActivationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867db4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3d40;
  func_0x000107c61428(param_1 + _DAT_112fa3d40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867dc0; end: 103867e03;  */

void FUN_103867dc0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103867e04; end: 103867e0f; -[SCARBarModularCameraActivationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3d40;
  func_0x000107c61428(param_1 + _DAT_112fa3d40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867e10; end: 103867e63;  */

void FUN_103867e10(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103867e64; end: 1038688e3;  */

/* WARNING: Possible PIC construction at 0x00010386809c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038680b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038681b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038681f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038685a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038688a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038688b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038688c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038687c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038687d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038687e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038687f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038687a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103868778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038686dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038686ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038686fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386869c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038686ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038686bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386865c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386866c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386867c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386862c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386863c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386864c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386860c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010386861c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038685ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038685cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038685bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038685d0) */
/* WARNING: Removing unreachable block (ram,0x0001038685f0) */
/* WARNING: Removing unreachable block (ram,0x000103868620) */
/* WARNING: Removing unreachable block (ram,0x000103868610) */
/* WARNING: Removing unreachable block (ram,0x000103868650) */
/* WARNING: Removing unreachable block (ram,0x000103868640) */
/* WARNING: Removing unreachable block (ram,0x000103868630) */
/* WARNING: Removing unreachable block (ram,0x000103868680) */
/* WARNING: Removing unreachable block (ram,0x000103868670) */
/* WARNING: Removing unreachable block (ram,0x000103868660) */
/* WARNING: Removing unreachable block (ram,0x0001038686c0) */
/* WARNING: Removing unreachable block (ram,0x0001038686b0) */
/* WARNING: Removing unreachable block (ram,0x0001038686a0) */
/* WARNING: Removing unreachable block (ram,0x000103868710) */
/* WARNING: Removing unreachable block (ram,0x000103868700) */
/* WARNING: Removing unreachable block (ram,0x0001038686f0) */
/* WARNING: Removing unreachable block (ram,0x0001038686e0) */
/* WARNING: Removing unreachable block (ram,0x00010386877c) */
/* WARNING: Removing unreachable block (ram,0x00010386876c) */
/* WARNING: Removing unreachable block (ram,0x00010386875c) */
/* WARNING: Removing unreachable block (ram,0x00010386874c) */
/* WARNING: Removing unreachable block (ram,0x00010386873c) */
/* WARNING: Removing unreachable block (ram,0x0001038687ac) */
/* WARNING: Removing unreachable block (ram,0x00010386879c) */
/* WARNING: Removing unreachable block (ram,0x00010386878c) */
/* WARNING: Removing unreachable block (ram,0x000103868814) */
/* WARNING: Removing unreachable block (ram,0x000103868804) */
/* WARNING: Removing unreachable block (ram,0x000103868810) */
/* WARNING: Removing unreachable block (ram,0x0001038687f4) */
/* WARNING: Removing unreachable block (ram,0x0001038687f8) */
/* WARNING: Removing unreachable block (ram,0x0001038687e4) */
/* WARNING: Removing unreachable block (ram,0x0001038687d4) */
/* WARNING: Removing unreachable block (ram,0x0001038687c4) */
/* WARNING: Removing unreachable block (ram,0x0001038688c4) */
/* WARNING: Removing unreachable block (ram,0x0001038688b4) */
/* WARNING: Removing unreachable block (ram,0x0001038688a4) */
/* WARNING: Removing unreachable block (ram,0x000103868894) */
/* WARNING: Removing unreachable block (ram,0x00010386887c) */
/* WARNING: Removing unreachable block (ram,0x00010386886c) */
/* WARNING: Removing unreachable block (ram,0x00010386885c) */
/* WARNING: Removing unreachable block (ram,0x0001038685ac) */
/* WARNING: Removing unreachable block (ram,0x0001038688d4) */
/* WARNING: Removing unreachable block (ram,0x00010386881c) */
/* WARNING: Removing unreachable block (ram,0x00010386859c) */
/* WARNING: Removing unreachable block (ram,0x00010386858c) */
/* WARNING: Removing unreachable block (ram,0x00010386857c) */
/* WARNING: Removing unreachable block (ram,0x00010386856c) */
/* WARNING: Removing unreachable block (ram,0x00010386854c) */
/* WARNING: Removing unreachable block (ram,0x00010386853c) */
/* WARNING: Removing unreachable block (ram,0x00010386852c) */
/* WARNING: Removing unreachable block (ram,0x00010386851c) */
/* WARNING: Removing unreachable block (ram,0x00010386850c) */
/* WARNING: Removing unreachable block (ram,0x000103868444) */
/* WARNING: Removing unreachable block (ram,0x00010386842c) */
/* WARNING: Removing unreachable block (ram,0x00010386827c) */
/* WARNING: Removing unreachable block (ram,0x000103868854) */
/* WARNING: Removing unreachable block (ram,0x0001038683e8) */
/* WARNING: Removing unreachable block (ram,0x00010386823c) */
/* WARNING: Removing unreachable block (ram,0x0001038681f4) */
/* WARNING: Removing unreachable block (ram,0x0001038681b8) */
/* WARNING: Removing unreachable block (ram,0x000103868148) */
/* WARNING: Removing unreachable block (ram,0x0001038680b8) */
/* WARNING: Removing unreachable block (ram,0x000103868174) */
/* WARNING: Removing unreachable block (ram,0x00010386811c) */
/* WARNING: Removing unreachable block (ram,0x0001038680a0) */
/* WARNING: Removing unreachable block (ram,0x0001038685c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103867e64(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong unaff_x20;
  ulong uVar5;
  undefined1 auStack_c0 [24];
  ulong uStack_a8;
  long lStack_a0;
  
  uVar5 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (uVar5 == 0) {
    return;
  }
  uVar4 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar1 = unaff_x20;
    func_0x000107c4d0dc();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = unaff_x20;
      func_0x000107c3f5e0();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar2 = unaff_x20;
        func_0x000107c3e0b0();
        func_0x000107c61180();
        if (uVar2 == 0) {
          func_0x000107c61170(uVar5);
          uVar5 = uVar4;
        }
        else {
          uVar2 = unaff_x20;
          func_0x000107c4af4c();
          func_0x000107c61180();
          if (uVar2 == 0) {
            func_0x000107c61170(uVar5);
            uVar5 = uVar4;
          }
          else {
            uVar2 = unaff_x20;
            func_0x000107c4b100();
            func_0x000107c61180();
            if (uVar2 != 0) {
              uVar2 = unaff_x20;
              func_0x000107c5c790();
              func_0x000107c61180();
              if (uVar2 != 0) {
                uVar2 = unaff_x20;
                func_0x000107c4af8c();
                func_0x000107c61180();
                if (uVar2 == 0) {
                  func_0x000107c61170(uVar5);
                  uVar5 = uVar4;
                }
                else {
                  func_0x000107c4afbc();
                  func_0x000107c61180();
                  if (unaff_x20 == 0) {
                    func_0x000107c61170(uVar5);
                    uVar5 = uVar4;
                  }
                  else {
                    lVar3 = 0;
                    FUN_103834868();
                    func_0x000107c613fc();
                    *(undefined8 *)(lVar3 + 0x10) = 0;
                    *(undefined8 *)(lVar3 + 0x18) = 0;
                    func_0x000107c3e0a8();
                    func_0x000107c61180();
                    func_0x0001000d224c(auStack_c0);
                    FUN_103868e68(auStack_c0,uStack_a8);
                    uVar4 = uStack_a8;
                    (**(code **)(lStack_a0 + 0x40))(uStack_a8,lStack_a0);
                    FUN_103869188(auStack_c0);
                    uVar5 = unaff_x20;
                    if (((uVar4 & 1) != 0) &&
                       (uVar4 = *(ulong *)(uVar1 + _DAT_113071fd0), uVar4 != 0)) {
                      func_0x000107c61174();
                      uVar2 = uVar4;
                      func_0x000107c42548();
                      uVar5 = uVar4;
                      if ((uVar2 & 1) != 0) {
                        lVar3 = 0;
                        func_0x000103822894();
                        func_0x000107c61534();
                        *(ulong *)(lVar3 + 0x10) = uVar1;
                        *(undefined8 *)(lVar3 + 0x18) = 0;
                        *(undefined1 *)(lVar3 + 0x20) = 0;
                        uVar5 = *(ulong *)(uVar1 + _DAT_113071fc8);
                        func_0x000107c61174(uVar1);
                        func_0x000107c3e6c8(uVar5);
                        func_0x000107c61180();
                        func_0x000107c5b3f0();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}


