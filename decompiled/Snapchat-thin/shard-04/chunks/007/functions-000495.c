/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103852d74; end: 1038530c3;  */

void FUN_103852d74(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffee || param_3 != -0x7ffffffef10ef650) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x656d61436e69616d;
      if (((param_2 == 0x656d61436e69616d) && (param_3 == -0x109a8f909cac9e8e)) ||
         (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c561a0();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ecf90)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000021;
            if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0ed9390)) ||
               (func_0x000107c605b8(0xd000000000000021,0x800000010f126c70,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c566d8();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0e90cf0)) ||
                 (func_0x000107c605b8(0xd000000000000018,0x800000010f16f310,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c52888();
              }
              else {
                uVar2 = 0xd000000000000015;
                if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) &&
                   (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "ARBarIntegration/SCARBarMiniCameraUIHandlingEntryPoint.swift"
                                      ,0x3c,2,0x3c,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038530c4);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55df4();
              }
            }
            goto LAB_103852e04;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53104();
      }
      goto LAB_103852e04;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103852e04:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1038530c4; end: 10385316f; -[SCARBarMiniCameraUIHandlingEntryPoint setValue:forIvarName:] */

void FUN_1038530c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103852d74(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103853170; end: 103853233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853170(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa35b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa35b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa35c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa35c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa35d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa35d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa35e0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103853234; end: 103853253; -[SCARBarMiniCameraUIHandlingEntryPoint init] */

void FUN_103853234(void)

{
  FUN_103853170();
  return;
}



/* Entry: 103853254; end: 103853287;  */

void FUN_103853254(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103853288; end: 10385330f; -[SCARBarMiniCameraUIHandlingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853288(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa35b0);
  func_0x000107c61610(param_1 + _DAT_112fa35b8);
  func_0x000107c61610(param_1 + _DAT_112fa35c0);
  func_0x000107c61610(param_1 + _DAT_112fa35c8);
  func_0x000107c61610(param_1 + _DAT_112fa35d0);
  func_0x000107c61610(param_1 + _DAT_112fa35d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa35e0));
  return;
}



/* Entry: 103853310; end: 10385332f;  */

void FUN_103853310(void)

{
  func_0x000107c61168(&PTR_PTR_1128f33b8);
  return;
}



/* Entry: 103853330; end: 10385333b; -[SCARBarReplyLEBrowserIntegrationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853330(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3610;
  func_0x000107c61428(param_1 + _DAT_112fa3610,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10385333c; end: 103853347; -[SCARBarReplyLEBrowserIntegrationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10385333c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3610;
  func_0x000107c61428(param_1 + _DAT_112fa3610,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103853348; end: 103853353; -[SCARBarReplyLEBrowserIntegrationEntryPoint chatCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853348(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3618;
  func_0x000107c61428(param_1 + _DAT_112fa3618,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103853354; end: 10385335f; -[SCARBarReplyLEBrowserIntegrationEntryPoint setChatCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3618;
  func_0x000107c61428(param_1 + _DAT_112fa3618,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103853360; end: 10385336b; -[SCARBarReplyLEBrowserIntegrationEntryPoint leBrowserIntegrationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853360(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3620;
  func_0x000107c61428(param_1 + _DAT_112fa3620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10385336c; end: 103853377; -[SCARBarReplyLEBrowserIntegrationEntryPoint setLeBrowserIntegrationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10385336c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3620;
  func_0x000107c61428(param_1 + _DAT_112fa3620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103853378; end: 103853383; -[SCARBarReplyLEBrowserIntegrationEntryPoint lensExplorerStudySettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853378(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3628;
  func_0x000107c61428(param_1 + _DAT_112fa3628,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103853384; end: 10385338f; -[SCARBarReplyLEBrowserIntegrationEntryPoint setLensExplorerStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853384(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3628;
  func_0x000107c61428(param_1 + _DAT_112fa3628,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103853390; end: 10385339b; -[SCARBarReplyLEBrowserIntegrationEntryPoint lensCarouselFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853390(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3630;
  func_0x000107c61428(param_1 + _DAT_112fa3630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10385339c; end: 1038533a7; -[SCARBarReplyLEBrowserIntegrationEntryPoint setLensCarouselFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10385339c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3630;
  func_0x000107c61428(param_1 + _DAT_112fa3630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038533a8; end: 1038533b3; -[SCARBarReplyLEBrowserIntegrationEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038533a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3638;
  func_0x000107c61428(param_1 + _DAT_112fa3638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038533b4; end: 1038533bf; -[SCARBarReplyLEBrowserIntegrationEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038533b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3638;
  func_0x000107c61428(param_1 + _DAT_112fa3638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038533c0; end: 1038533cb; -[SCARBarReplyLEBrowserIntegrationEntryPoint arBarIntegrationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038533c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3640;
  func_0x000107c61428(param_1 + _DAT_112fa3640,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038533cc; end: 1038533d7; -[SCARBarReplyLEBrowserIntegrationEntryPoint setArBarIntegrationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038533cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3640;
  func_0x000107c61428(param_1 + _DAT_112fa3640,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038533d8; end: 1038533e3; -[SCARBarReplyLEBrowserIntegrationEntryPoint lensCarouselDataProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038533d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3648;
  func_0x000107c61428(param_1 + _DAT_112fa3648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038533e4; end: 1038533ef; -[SCARBarReplyLEBrowserIntegrationEntryPoint setLensCarouselDataProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038533e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3648;
  func_0x000107c61428(param_1 + _DAT_112fa3648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038533f0; end: 1038533fb; -[SCARBarReplyLEBrowserIntegrationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038533f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3650;
  func_0x000107c61428(param_1 + _DAT_112fa3650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038533fc; end: 103853407; -[SCARBarReplyLEBrowserIntegrationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038533fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3650;
  func_0x000107c61428(param_1 + _DAT_112fa3650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103853408; end: 103853413; -[SCARBarReplyLEBrowserIntegrationEntryPoint miniCameraNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853408(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3658;
  func_0x000107c61428(param_1 + _DAT_112fa3658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103853414; end: 103853457;  */

void FUN_103853414(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103853458; end: 103853463; -[SCARBarReplyLEBrowserIntegrationEntryPoint setMiniCameraNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103853458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3658;
  func_0x000107c61428(param_1 + _DAT_112fa3658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103853464; end: 1038534b7;  */

void FUN_103853464(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038534b8; end: 103854dbb;  */

/* WARNING: Possible PIC construction at 0x000103853730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038537a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038542e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038544bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038546b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038546f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010385475c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103854d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010385479c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103853bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103853bd4) */
/* WARNING: Removing unreachable block (ram,0x000103853bc4) */
/* WARNING: Removing unreachable block (ram,0x000103853bf4) */
/* WARNING: Removing unreachable block (ram,0x000103853be4) */
/* WARNING: Removing unreachable block (ram,0x000103853c24) */
/* WARNING: Removing unreachable block (ram,0x000103853c14) */
/* WARNING: Removing unreachable block (ram,0x000103853c64) */
/* WARNING: Removing unreachable block (ram,0x000103853c54) */
/* WARNING: Removing unreachable block (ram,0x000103853c44) */
/* WARNING: Removing unreachable block (ram,0x000103853ca4) */
/* WARNING: Removing unreachable block (ram,0x000103853c94) */
/* WARNING: Removing unreachable block (ram,0x000103853c84) */
/* WARNING: Removing unreachable block (ram,0x000103853c74) */
/* WARNING: Removing unreachable block (ram,0x000103853ce4) */
/* WARNING: Removing unreachable block (ram,0x000103853cd4) */
/* WARNING: Removing unreachable block (ram,0x000103853cc4) */
/* WARNING: Removing unreachable block (ram,0x000103853cb4) */
/* WARNING: Removing unreachable block (ram,0x0001038547a0) */
/* WARNING: Removing unreachable block (ram,0x000103854d80) */
/* WARNING: Removing unreachable block (ram,0x000103854d70) */
/* WARNING: Removing unreachable block (ram,0x000103854d60) */
/* WARNING: Removing unreachable block (ram,0x000103854d50) */
/* WARNING: Removing unreachable block (ram,0x000103854d40) */
/* WARNING: Removing unreachable block (ram,0x000103854d30) */
/* WARNING: Removing unreachable block (ram,0x000103854d20) */
/* WARNING: Removing unreachable block (ram,0x000103854d10) */
/* WARNING: Removing unreachable block (ram,0x000103854d00) */
/* WARNING: Removing unreachable block (ram,0x000103854c74) */
/* WARNING: Removing unreachable block (ram,0x000103854c04) */
/* WARNING: Removing unreachable block (ram,0x000103854bf4) */
/* WARNING: Removing unreachable block (ram,0x000103854be4) */
/* WARNING: Removing unreachable block (ram,0x000103854bd4) */
/* WARNING: Removing unreachable block (ram,0x000103854bc4) */
/* WARNING: Removing unreachable block (ram,0x000103854bb4) */
/* WARNING: Removing unreachable block (ram,0x000103854ba0) */
/* WARNING: Removing unreachable block (ram,0x000103854b8c) */
/* WARNING: Removing unreachable block (ram,0x000103854b7c) */
/* WARNING: Removing unreachable block (ram,0x000103854b5c) */
/* WARNING: Removing unreachable block (ram,0x000103854b4c) */
/* WARNING: Removing unreachable block (ram,0x000103854b38) */
/* WARNING: Removing unreachable block (ram,0x000103854aec) */
/* WARNING: Removing unreachable block (ram,0x000103854a4c) */
/* WARNING: Removing unreachable block (ram,0x000103854a08) */
/* WARNING: Removing unreachable block (ram,0x000103854760) */
/* WARNING: Removing unreachable block (ram,0x0001038547a4) */
/* WARNING: Removing unreachable block (ram,0x0001038546fc) */
/* WARNING: Removing unreachable block (ram,0x0001038546b8) */
/* WARNING: Removing unreachable block (ram,0x000103854774) */
/* WARNING: Removing unreachable block (ram,0x0001038546d8) */
/* WARNING: Removing unreachable block (ram,0x00010385450c) */
/* WARNING: Removing unreachable block (ram,0x00010385467c) */
/* WARNING: Removing unreachable block (ram,0x0001038545e4) */
/* WARNING: Removing unreachable block (ram,0x00010385468c) */
/* WARNING: Removing unreachable block (ram,0x0001038544c0) */
/* WARNING: Removing unreachable block (ram,0x000103854488) */
/* WARNING: Removing unreachable block (ram,0x0001038544c4) */
/* WARNING: Removing unreachable block (ram,0x0001038544d0) */
/* WARNING: Removing unreachable block (ram,0x000103854494) */
/* WARNING: Removing unreachable block (ram,0x000103854394) */
/* WARNING: Removing unreachable block (ram,0x0001038542e4) */
/* WARNING: Removing unreachable block (ram,0x000103853f1c) */
/* WARNING: Removing unreachable block (ram,0x000103853b4c) */
/* WARNING: Removing unreachable block (ram,0x000103853b50) */
/* WARNING: Removing unreachable block (ram,0x000103853d44) */
/* WARNING: Removing unreachable block (ram,0x000103853b68) */
/* WARNING: Removing unreachable block (ram,0x000103853b78) */
/* WARNING: Removing unreachable block (ram,0x000103853d48) */
/* WARNING: Removing unreachable block (ram,0x000103853d8c) */
/* WARNING: Removing unreachable block (ram,0x000103853d74) */
/* WARNING: Removing unreachable block (ram,0x000103853d98) */
/* WARNING: Removing unreachable block (ram,0x000103853ad4) */
/* WARNING: Removing unreachable block (ram,0x0001038537a4) */
/* WARNING: Removing unreachable block (ram,0x000103853ae4) */
/* WARNING: Removing unreachable block (ram,0x000103853d10) */
/* WARNING: Removing unreachable block (ram,0x000103853dcc) */
/* WARNING: Removing unreachable block (ram,0x000103853de4) */
/* WARNING: Removing unreachable block (ram,0x000103853dd0) */
/* WARNING: Removing unreachable block (ram,0x000103853de8) */
/* WARNING: Removing unreachable block (ram,0x000103853f20) */
/* WARNING: Removing unreachable block (ram,0x000103853f78) */
/* WARNING: Removing unreachable block (ram,0x000103854078) */
/* WARNING: Removing unreachable block (ram,0x000103854018) */
/* WARNING: Removing unreachable block (ram,0x00010385407c) */
/* WARNING: Removing unreachable block (ram,0x000103854334) */
/* WARNING: Removing unreachable block (ram,0x0001038542a8) */
/* WARNING: Removing unreachable block (ram,0x000103853ed4) */
/* WARNING: Removing unreachable block (ram,0x000103853b20) */
/* WARNING: Removing unreachable block (ram,0x000103853a9c) */
/* WARNING: Removing unreachable block (ram,0x000103853734) */
/* WARNING: Removing unreachable block (ram,0x000103853bb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038534b8(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_120 [24];
  ulong uStack_108;
  long lStack_100;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f82c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4ac98();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4b100();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c4ae78();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar4 = unaff_x20;
            func_0x000107c3e0b0();
            func_0x000107c61180();
            if (lVar4 != 0) {
              lVar4 = unaff_x20;
              func_0x000107c3e090();
              func_0x000107c61180();
              if (lVar4 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar4 = unaff_x20;
                func_0x000107c4ae68();
                func_0x000107c61180();
                if (lVar4 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar4 = unaff_x20;
                  func_0x000107c4afbc();
                  func_0x000107c61180();
                  if (lVar4 != 0) {
                    func_0x000107c4cf5c();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      FUN_10384114c();
                      func_0x000107c613fc();
                      func_0x000107c3e0a8();
                      func_0x000107c61180();
                      func_0x000107c61174();
                      func_0x000107c4ae78();
                      func_0x000107c61180();
                      uVar5 = *(undefined8 *)(lVar4 + _DAT_1130813f0);
                      func_0x000107c61174();
                      func_0x000107c6157c(uVar5);
                      func_0x0001000d224c(auStack_120);
                      func_0x000107c61574(uVar5);
                      lVar4 = lStack_100;
                      uVar3 = uStack_108;
                      FUN_103855708(auStack_120,uStack_108);
                      pcVar6 = *(code **)(lVar4 + 0x48);
                      lVar1 = lVar2;
                      func_0x000107c61174();
                      (*pcVar6)(uVar3,lVar4);
                      lVar4 = 0;
                      func_0x000103822894();
                      func_0x000107c61534();
                      *(undefined8 *)(lVar4 + 0x10) = 0;
                      *(long *)(lVar4 + 0x18) = lVar2;
                      *(byte *)(lVar4 + 0x20) = (byte)uVar3 & 1;
                      FUN_103855708(auStack_120,uStack_108);
                      (**(code **)(lStack_100 + 0x40))(uStack_108,lStack_100);
                      if ((uStack_108 & 1) != 0) {
                        func_0x000107c5b3f0();
                        FUN_103822094();
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
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103854dbc; end: 103854e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103854dbc(void)

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



/* Entry: 103854e14; end: 103854e3b; -[SCARBarReplyLEBrowserIntegrationEntryPoint begin] */

void FUN_103854e14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038534b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103854e3c; end: 1038553e7; -[SCARBarReplyLEBrowserIntegrationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103854e3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112fa3660);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_103840e8c();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_103854ed0;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_103854ed0:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1038553e8; end: 103855493; -[SCARBarReplyLEBrowserIntegrationEntryPoint setValue:forIvarName:] */

void FUN_1038553e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000103854ef0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_10385574c(auStack_50);
  return;
}



/* Entry: 103855494; end: 1038555a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855494(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3610,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3618,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3620,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3628,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3630,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3638,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3640,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3648,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3650,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3658,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3660) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038555a8; end: 1038555c7; -[SCARBarReplyLEBrowserIntegrationEntryPoint init] */

void FUN_1038555a8(void)

{
  FUN_103855494();
  return;
}



/* Entry: 1038555c8; end: 1038555fb;  */

void FUN_1038555c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038555fc; end: 103855707; -[SCARBarReplyLEBrowserIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038555fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3610);
  func_0x000107c61610(param_1 + _DAT_112fa3618);
  func_0x000107c61610(param_1 + _DAT_112fa3620);
  func_0x000107c61610(param_1 + _DAT_112fa3628);
  func_0x000107c61610(param_1 + _DAT_112fa3630);
  func_0x000107c61610(param_1 + _DAT_112fa3638);
  func_0x000107c61610(param_1 + _DAT_112fa3640);
  func_0x000107c61610(param_1 + _DAT_112fa3648);
  func_0x000107c61610(param_1 + _DAT_112fa3650);
  func_0x000107c61610(param_1 + _DAT_112fa3658);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3660));
  return;
}



/* Entry: 103855708; end: 10385572b;  */

long * FUN_103855708(long *param_1,long param_2)

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



/* Entry: 10385572c; end: 10385574b;  */

void FUN_10385572c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f34a0);
  return;
}



/* Entry: 10385574c; end: 10385576b;  */

void FUN_10385574c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103855760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10385576c; end: 103855777; -[SCARBarReplyActivationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10385576c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3690;
  func_0x000107c61428(param_1 + _DAT_112fa3690,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103855778; end: 103855783; -[SCARBarReplyActivationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3690;
  func_0x000107c61428(param_1 + _DAT_112fa3690,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103855784; end: 10385578f; -[SCARBarReplyActivationEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855784(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3698;
  func_0x000107c61428(param_1 + _DAT_112fa3698,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103855790; end: 10385579b; -[SCARBarReplyActivationEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3698;
  func_0x000107c61428(param_1 + _DAT_112fa3698,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10385579c; end: 1038557a7; -[SCARBarReplyActivationEntryPoint chatCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10385579c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa36a0;
  func_0x000107c61428(param_1 + _DAT_112fa36a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038557a8; end: 1038557b3; -[SCARBarReplyActivationEntryPoint setChatCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038557a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa36a0;
  func_0x000107c61428(param_1 + _DAT_112fa36a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038557b4; end: 1038557bf; -[SCARBarReplyActivationEntryPoint captureScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038557b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa36a8;
  func_0x000107c61428(param_1 + _DAT_112fa36a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038557c0; end: 1038557cb; -[SCARBarReplyActivationEntryPoint setCaptureScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038557c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa36a8;
  func_0x000107c61428(param_1 + _DAT_112fa36a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038557cc; end: 1038557d7; -[SCARBarReplyActivationEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038557cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa36b0;
  func_0x000107c61428(param_1 + _DAT_112fa36b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038557d8; end: 1038557e3; -[SCARBarReplyActivationEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038557d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa36b0;
  func_0x000107c61428(param_1 + _DAT_112fa36b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038557e4; end: 1038557ef; -[SCARBarReplyActivationEntryPoint lensCarouselStudySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038557e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa36b8;
  func_0x000107c61428(param_1 + _DAT_112fa36b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038557f0; end: 1038557fb; -[SCARBarReplyActivationEntryPoint setLensCarouselStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038557f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa36b8;
  func_0x000107c61428(param_1 + _DAT_112fa36b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038557fc; end: 103855807; -[SCARBarReplyActivationEntryPoint lensExplorerStudySettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038557fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa36c0;
  func_0x000107c61428(param_1 + _DAT_112fa36c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103855808; end: 103855813; -[SCARBarReplyActivationEntryPoint setLensExplorerStudySettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa36c0;
  func_0x000107c61428(param_1 + _DAT_112fa36c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103855814; end: 10385581f; -[SCARBarReplyActivationEntryPoint taskManagmentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855814(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa36c8;
  func_0x000107c61428(param_1 + _DAT_112fa36c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103855820; end: 10385582b; -[SCARBarReplyActivationEntryPoint setTaskManagmentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855820(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa36c8;
  func_0x000107c61428(param_1 + _DAT_112fa36c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10385582c; end: 103855837; -[SCARBarReplyActivationEntryPoint lensCollectionTabBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10385582c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa36d0;
  func_0x000107c61428(param_1 + _DAT_112fa36d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103855838; end: 103855843; -[SCARBarReplyActivationEntryPoint setLensCollectionTabBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855838(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa36d0;
  func_0x000107c61428(param_1 + _DAT_112fa36d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103855844; end: 10385584f; -[SCARBarReplyActivationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855844(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa36d8;
  func_0x000107c61428(param_1 + _DAT_112fa36d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103855850; end: 103855893;  */

void FUN_103855850(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103855894; end: 10385589f; -[SCARBarReplyActivationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103855894(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa36d8;
  func_0x000107c61428(param_1 + _DAT_112fa36d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038558a0; end: 1038558f3;  */

void FUN_1038558a0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038558f4; end: 10385623f;  */

/* WARNING: Possible PIC construction at 0x000103855b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103855ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038561a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038561b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038561c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038561d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038561e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038560e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038560f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038560b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038560c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038560d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103856044) */
/* WARNING: Removing unreachable block (ram,0x000103856034) */
/* WARNING: Removing unreachable block (ram,0x000103856064) */
/* WARNING: Removing unreachable block (ram,0x000103856054) */
/* WARNING: Removing unreachable block (ram,0x000103856094) */
/* WARNING: Removing unreachable block (ram,0x000103856084) */
/* WARNING: Removing unreachable block (ram,0x0001038560d4) */
/* WARNING: Removing unreachable block (ram,0x0001038560c4) */
/* WARNING: Removing unreachable block (ram,0x0001038560b4) */
/* WARNING: Removing unreachable block (ram,0x000103856114) */
/* WARNING: Removing unreachable block (ram,0x000103856104) */
/* WARNING: Removing unreachable block (ram,0x0001038560f4) */
/* WARNING: Removing unreachable block (ram,0x0001038560e4) */
/* WARNING: Removing unreachable block (ram,0x000103856154) */
/* WARNING: Removing unreachable block (ram,0x000103856144) */
/* WARNING: Removing unreachable block (ram,0x000103856134) */
/* WARNING: Removing unreachable block (ram,0x000103856124) */
/* WARNING: Removing unreachable block (ram,0x0001038561e8) */
/* WARNING: Removing unreachable block (ram,0x0001038561d8) */
/* WARNING: Removing unreachable block (ram,0x0001038561c8) */
/* WARNING: Removing unreachable block (ram,0x0001038561b8) */
/* WARNING: Removing unreachable block (ram,0x0001038561a8) */
/* WARNING: Removing unreachable block (ram,0x000103856198) */
/* WARNING: Removing unreachable block (ram,0x000103856188) */
/* WARNING: Removing unreachable block (ram,0x000103855ff8) */
/* WARNING: Removing unreachable block (ram,0x0001038561f8) */
/* WARNING: Removing unreachable block (ram,0x000103855fe8) */
/* WARNING: Removing unreachable block (ram,0x000103855fd0) */
/* WARNING: Removing unreachable block (ram,0x000103855fc0) */
/* WARNING: Removing unreachable block (ram,0x000103855fa0) */
/* WARNING: Removing unreachable block (ram,0x000103855f90) */
/* WARNING: Removing unreachable block (ram,0x000103855f80) */
/* WARNING: Removing unreachable block (ram,0x000103855f70) */
/* WARNING: Removing unreachable block (ram,0x000103855f60) */
/* WARNING: Removing unreachable block (ram,0x000103855e9c) */
/* WARNING: Removing unreachable block (ram,0x000103855e84) */
/* WARNING: Removing unreachable block (ram,0x000103855cdc) */
/* WARNING: Removing unreachable block (ram,0x000103856180) */
/* WARNING: Removing unreachable block (ram,0x000103855e40) */
/* WARNING: Removing unreachable block (ram,0x000103855ca0) */
/* WARNING: Removing unreachable block (ram,0x000103855c58) */
/* WARNING: Removing unreachable block (ram,0x000103855c1c) */
/* WARNING: Removing unreachable block (ram,0x000103855bb4) */
/* WARNING: Removing unreachable block (ram,0x000103855b20) */
/* WARNING: Removing unreachable block (ram,0x000103855bdc) */
/* WARNING: Removing unreachable block (ram,0x000103855b88) */
/* WARNING: Removing unreachable block (ram,0x000103856024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038558f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3f0d0();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3f82c();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar5;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c3f5e0();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar5;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c3e0b0();
          func_0x000107c61180();
          if (lVar3 != 0) {
            lVar3 = unaff_x20;
            func_0x000107c4af4c();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar3 = unaff_x20;
              func_0x000107c4b100();
              func_0x000107c61180();
              if (lVar3 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar5;
              }
              else {
                lVar3 = unaff_x20;
                func_0x000107c5c790();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar5;
                }
                else {
                  lVar5 = unaff_x20;
                  func_0x000107c4af8c();
                  func_0x000107c61180();
                  if (lVar5 != 0) {
                    func_0x000107c4afbc();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      FUN_10383dcb4();
                      func_0x000107c613fc();
                      func_0x000107c3e0a8();
                      func_0x000107c61180();
                      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_1130813f0);
                      func_0x000107c6157c(uVar6);
                      func_0x0001000d224c(auStack_90);
                      func_0x000107c61574(uVar6);
                      lVar5 = lStack_70;
                      uVar4 = uStack_78;
                      FUN_1038567d0(auStack_90,uStack_78);
                      pcVar7 = *(code **)(lVar5 + 0x48);
                      lVar1 = lVar2;
                      func_0x000107c61174();
                      (*pcVar7)(uVar4,lVar5);
                      lVar5 = 0;
                      func_0x000103822894();
                      func_0x000107c61534();
                      *(undefined8 *)(lVar5 + 0x10) = 0;
                      *(long *)(lVar5 + 0x18) = lVar2;
                      *(byte *)(lVar5 + 0x20) = (byte)uVar4 & 1;
                      FUN_1038567d0(auStack_90,uStack_78);
                      (**(code **)(lStack_70 + 0x40))(uStack_78,lStack_70);
                      if ((uStack_78 & 1) != 0) {
                        func_0x000107c5b3f0(*(undefined8 *)(lVar1 + _DAT_11306db00));
                        FUN_103822094();
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
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103856240; end: 10385626b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856240(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f9f678);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10385626c; end: 103856293; -[SCARBarReplyActivationEntryPoint begin] */

void FUN_10385626c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038558f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103856294; end: 1038562d7; -[SCARBarReplyActivationEntryPoint end] */

void FUN_103856294(undefined8 param_1)

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



/* Entry: 1038562d8; end: 1038567cf;  */

void FUN_1038562d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x656d614374616863;
          if (((param_2 == 0x656d614374616863) && (param_3 == -0x109a8f909cac9e8e)) ||
             (func_0x000107c605b8(0x656d614374616863,0xef65706f63536172,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5333c();
          }
          else {
            uVar2 = 0xd00000000000002b;
            if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0f1a7c0)) ||
               (func_0x000107c605b8(0xd00000000000002b,0x800000010f0e5840,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c531f0();
            }
            else {
              uVar2 = 0x7265537261427261;
              if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
                 (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c52898();
              }
              else {
                uVar2 = 0xd000000000000021;
                if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef1039a00)) ||
                   (func_0x000107c605b8(0xd000000000000021,0x800000010efc6600,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55c90();
                }
                else {
                  uVar2 = 0xd000000000000019;
                  if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef0e90c60)) ||
                     (func_0x000107c605b8(0xd000000000000019,0x800000010f16f3a0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55d24();
                  }
                  else {
                    uVar2 = 0xd000000000000015;
                    if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef103ce90)) ||
                       (func_0x000107c605b8(0xd000000000000015,0x800000010efc3170,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c59c30();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0f0db70)) ||
                         (func_0x000107c605b8(0xd00000000000001c,0x800000010f0f2490,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c55ca0();
                      }
                      else {
                        if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e0a30)) {
                          uVar2 = 0xd000000000000019;
                          func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,
                                              0);
                          if ((uVar2 & 1) == 0) {
                            func_0x000107c602fc(0x15);
                            func_0x000107c6142c(0xe000000000000000);
                            func_0x000107c5fb78(param_2,param_3);
                            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                0x800000010ef0fc20,
                                                "ARBarIntegration/SCARBarReplyActivationEntryPoint.swift"
                                                ,0x37,2,0x55,0);
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038567d0);
                            (*pcVar1)();
                          }
                        }
                        FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c55cbc();
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_10385636c;
        }
      }
      FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_10385636c;
    }
  }
  FUN_1038567d0(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10385636c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1038567d0; end: 1038567f3;  */

long * FUN_1038567d0(long *param_1,long param_2)

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



/* Entry: 1038567f4; end: 10385689f; -[SCARBarReplyActivationEntryPoint setValue:forIvarName:] */

void FUN_1038567f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1038562d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_103856af0(auStack_50);
  return;
}



/* Entry: 1038568a0; end: 1038569b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038568a0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3690,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3698,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa36a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa36a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa36b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa36b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa36c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa36c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa36d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa36d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa36e0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038569b4; end: 1038569d3; -[SCARBarReplyActivationEntryPoint init] */

void FUN_1038569b4(void)

{
  FUN_1038568a0();
  return;
}



/* Entry: 1038569d4; end: 103856a07;  */

void FUN_1038569d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103856a08; end: 103856acf; -[SCARBarReplyActivationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856a08(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3690);
  func_0x000107c61610(param_1 + _DAT_112fa3698);
  func_0x000107c61610(param_1 + _DAT_112fa36a0);
  func_0x000107c61610(param_1 + _DAT_112fa36a8);
  func_0x000107c61610(param_1 + _DAT_112fa36b0);
  func_0x000107c61610(param_1 + _DAT_112fa36b8);
  func_0x000107c61610(param_1 + _DAT_112fa36c0);
  func_0x000107c61610(param_1 + _DAT_112fa36c8);
  func_0x000107c61610(param_1 + _DAT_112fa36d0);
  func_0x000107c61610(param_1 + _DAT_112fa36d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa36e0));
  return;
}



/* Entry: 103856ad0; end: 103856aef;  */

void FUN_103856ad0(void)

{
  func_0x000107c61168(&PTR_PTR_1128f35a8);
  return;
}



/* Entry: 103856af0; end: 103856b0f;  */

void FUN_103856af0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103856b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103856b10; end: 103856b1b; -[SCARBarReplyMiniCameraFeaturesEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3710;
  func_0x000107c61428(param_1 + _DAT_112fa3710,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103856b1c; end: 103856b27; -[SCARBarReplyMiniCameraFeaturesEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3710;
  func_0x000107c61428(param_1 + _DAT_112fa3710,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103856b28; end: 103856b33; -[SCARBarReplyMiniCameraFeaturesEntryPoint chatCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3718;
  func_0x000107c61428(param_1 + _DAT_112fa3718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103856b34; end: 103856b3f; -[SCARBarReplyMiniCameraFeaturesEntryPoint setChatCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3718;
  func_0x000107c61428(param_1 + _DAT_112fa3718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103856b40; end: 103856b4b; -[SCARBarReplyMiniCameraFeaturesEntryPoint lensCarouselFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3720;
  func_0x000107c61428(param_1 + _DAT_112fa3720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103856b4c; end: 103856b57; -[SCARBarReplyMiniCameraFeaturesEntryPoint setLensCarouselFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3720;
  func_0x000107c61428(param_1 + _DAT_112fa3720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103856b58; end: 103856b63; -[SCARBarReplyMiniCameraFeaturesEntryPoint lensContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3728;
  func_0x000107c61428(param_1 + _DAT_112fa3728,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103856b64; end: 103856b6f; -[SCARBarReplyMiniCameraFeaturesEntryPoint setLensContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3728;
  func_0x000107c61428(param_1 + _DAT_112fa3728,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103856b70; end: 103856b7b; -[SCARBarReplyMiniCameraFeaturesEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3730;
  func_0x000107c61428(param_1 + _DAT_112fa3730,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103856b7c; end: 103856b87; -[SCARBarReplyMiniCameraFeaturesEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3730;
  func_0x000107c61428(param_1 + _DAT_112fa3730,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103856b88; end: 103856b93; -[SCARBarReplyMiniCameraFeaturesEntryPoint lensExplorerNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856b88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3738;
  func_0x000107c61428(param_1 + _DAT_112fa3738,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103856b94; end: 103856bd7;  */

void FUN_103856b94(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103856bd8; end: 103856be3; -[SCARBarReplyMiniCameraFeaturesEntryPoint setLensExplorerNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103856bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3738;
  func_0x000107c61428(param_1 + _DAT_112fa3738,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103856be4; end: 103856c37;  */

void FUN_103856be4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103856c38; end: 103856fbb;  */

/* WARNING: Possible PIC construction at 0x000103856d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103856f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103856f70) */
/* WARNING: Removing unreachable block (ram,0x000103856f60) */
/* WARNING: Removing unreachable block (ram,0x000103856f90) */
/* WARNING: Removing unreachable block (ram,0x000103856f80) */
/* WARNING: Removing unreachable block (ram,0x000103856edc) */
/* WARNING: Removing unreachable block (ram,0x000103856ecc) */
/* WARNING: Removing unreachable block (ram,0x000103856ebc) */
/* WARNING: Removing unreachable block (ram,0x000103856e40) */
/* WARNING: Removing unreachable block (ram,0x000103856e04) */
/* WARNING: Removing unreachable block (ram,0x000103856d60) */
/* WARNING: Removing unreachable block (ram,0x000103856f50) */

void FUN_103856c38(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f82c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ae78();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4afe4();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c4b2f4();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c4b0d8();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_1038424e4();
              func_0x000107c613fc();
              FUN_103842494();
              func_0x000107c613fc();
              func_0x0001000285a8(0x112ee3e90,&UNK_10db0ef60);
              func_0x000107c4aeb4(lVar3);
              func_0x000107c61180();
              func_0x000100759c94();
              lVar1 = lVar3;
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



/* Entry: 103856fbc; end: 103856fe3; -[SCARBarReplyMiniCameraFeaturesEntryPoint begin] */

void FUN_103856fbc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103856c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103856fe4; end: 103857027; -[SCARBarReplyMiniCameraFeaturesEntryPoint end] */

void FUN_103856fe4(undefined8 param_1)

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



/* Entry: 103857028; end: 103857373;  */

void FUN_103857028(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x656d614374616863;
    if (((param_2 == 0x656d614374616863) && (param_3 == -0x109a8f909cac9e8e)) ||
       (func_0x000107c605b8(0x656d614374616863,0xef65706f63536172,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5333c();
    }
    else {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10e43b0)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1bc50,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55c30();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10ecd30)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef132d0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000015;
            if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
               (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55df4();
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
                                    "ARBarIntegration/SCARBarReplyMiniCameraFeaturesEntryPoint.swift"
                                    ,0x3f,2,0x46,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103857374);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55d1c();
            }
            goto LAB_1038570b8;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55cc0();
      }
    }
  }
LAB_1038570b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103857374; end: 10385741f; -[SCARBarReplyMiniCameraFeaturesEntryPoint setValue:forIvarName:] */

void FUN_103857374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103857028(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103857420; end: 1038574e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103857420(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fa3710,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3718,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3720,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3728,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3730,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fa3738,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fa3740) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038574e4; end: 103857503; -[SCARBarReplyMiniCameraFeaturesEntryPoint init] */

void FUN_1038574e4(void)

{
  FUN_103857420();
  return;
}



/* Entry: 103857504; end: 103857537;  */

void FUN_103857504(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103857538; end: 1038575bf; -[SCARBarReplyMiniCameraFeaturesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103857538(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa3710);
  func_0x000107c61610(param_1 + _DAT_112fa3718);
  func_0x000107c61610(param_1 + _DAT_112fa3720);
  func_0x000107c61610(param_1 + _DAT_112fa3728);
  func_0x000107c61610(param_1 + _DAT_112fa3730);
  func_0x000107c61610(param_1 + _DAT_112fa3738);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3740));
  return;
}



/* Entry: 1038575c0; end: 1038575df;  */

void FUN_1038575c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128f36b0);
  return;
}


