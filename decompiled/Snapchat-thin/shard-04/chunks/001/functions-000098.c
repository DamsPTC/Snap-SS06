/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10311d344; end: 10311d4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d344(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5c6d4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4b498();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c519b4();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000103118e0c(0);
          func_0x000107c613fc();
          func_0x000107c61174();
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          lVar5 = lVar1;
          FUN_103118a90(lVar1,lVar2,lVar3,lVar4);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f42588);
          *(long *)(unaff_x20 + _DAT_112f42588) = lVar5;
          func_0x000107c6157c();
          func_0x000107c61574(uVar6);
          uVar6 = *(undefined8 *)(lVar5 + 0x10);
          func_0x000103f94e34(0);
          func_0x000107c610f8();
          func_0x000107c6157c(uVar6);
          func_0x000103f94d78();
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(lVar5);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10311d4e0; end: 10311d56b; -[SCLensCarouselTalkContextConfiguratorServiceProvider provide] */

void FUN_10311d4e0(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10311d344();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensCarouselTalkIntegration/SCLensCarouselTalkContextConfiguratorServiceProvider.swift"
                      ,0x56,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10311d56c);
  (*pcVar1)();
}



/* Entry: 10311d56c; end: 10311d59f; -[SCLensCarouselTalkContextConfiguratorServiceProvider __safeProvide] */

void FUN_10311d56c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10311d344();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10311d5a0; end: 10311d5e3; -[SCLensCarouselTalkContextConfiguratorServiceProvider end] */

void FUN_10311d5a0(undefined8 param_1)

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



/* Entry: 10311d5e4; end: 10311d84f;  */

void FUN_10311d5e4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef1048630)) {
      uVar2 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010efb79d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffc8) && (param_3 == -0x7ffffffef0ed9850)) ||
           (func_0x000107c605b8(0xd000000000000038,0x800000010f1267b0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55eb0();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0ed9810)) &&
             (func_0x000107c605b8(0xd00000000000001c,0x800000010f1267f0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "LensCarouselTalkIntegration/SCLensCarouselTalkContextConfiguratorServiceProvider.swift"
                                ,0x56,2,0x3b,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10311d850);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58c98();
        }
        goto LAB_10311d674;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59bb8();
  }
LAB_10311d674:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10311d850; end: 10311d8fb; -[SCLensCarouselTalkContextConfiguratorServiceProvider setValue:forIvarName:] */

void FUN_10311d850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10311d5e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10311d8fc; end: 10311d997; -[SCLensCarouselTalkContextConfiguratorServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d8fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f42568,0);
  func_0x000107c61614(param_1 + _DAT_112f42570,0);
  func_0x000107c61614(param_1 + _DAT_112f42578,0);
  func_0x000107c61614(param_1 + _DAT_112f42580,0);
  *(undefined8 *)(param_1 + _DAT_112f42588) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10311d998; end: 10311d9cb;  */

void FUN_10311d998(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10311d9cc; end: 10311da33; -[SCLensCarouselTalkContextConfiguratorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311d9cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f42568);
  func_0x000107c61610(param_1 + _DAT_112f42570);
  func_0x000107c61610(param_1 + _DAT_112f42578);
  func_0x000107c61610(param_1 + _DAT_112f42580);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f42588));
  return;
}



/* Entry: 10311da34; end: 10311da53;  */

void FUN_10311da34(void)

{
  func_0x000107c61168(&PTR_PTR_112f425d0);
  return;
}



/* Entry: 10311da54; end: 10311ddcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10311da54(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar13 = param_3;
  func_0x000107c5d198();
  func_0x000107c61180();
  lVar4 = param_4;
  func_0x000107c40e10();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar7 = param_5;
    func_0x000107c4ae28();
    func_0x000107c61180();
    uVar5 = uVar7;
    func_0x000107c4ae24();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar7 = param_7;
    func_0x000107c4aeb0();
    func_0x000107c61180();
    uVar6 = uVar7;
    func_0x000107c4aeb4();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(param_8 + _DAT_113035b60);
    uVar14 = *(undefined8 *)(param_6 + _DAT_113036040);
    uVar15 = *(undefined8 *)(param_1 + _DAT_113081ca0);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c44dd0();
    func_0x000107c61180();
    lVar8 = 0;
    FUN_103120ff0();
    lVar9 = lVar8;
    func_0x000107c610f8();
    lVar1 = _DAT_112f42b50;
    func_0x000107c61614(lVar9 + _DAT_112f42b50,0);
    *(undefined8 *)(lVar9 + _DAT_112f42b78) = 0;
    *(undefined8 *)(lVar9 + _DAT_112f42b90) = 0;
    *(undefined1 *)(lVar9 + _DAT_112f42b98) = 0;
    lVar2 = _DAT_112f42ba0;
    uVar10 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    *(undefined8 *)(lVar9 + lVar2) = uVar10;
    *(undefined8 *)(lVar9 + _DAT_112f42ba8) = 0;
    func_0x000107c61604(lVar9 + lVar1,uVar13);
    *(long *)(lVar9 + _DAT_112f42b58) = lVar4;
    *(undefined8 *)(lVar9 + _DAT_112f42b68) = uVar5;
    *(undefined8 *)(lVar9 + _DAT_112f42b70) = uVar6;
    *(undefined8 *)(lVar9 + _DAT_112f42b80) = uVar14;
    *(undefined8 *)(lVar9 + _DAT_112f42b88) = uVar15;
    *(undefined8 *)(lVar9 + _DAT_112f42b60) = uVar7;
    plVar11 = &lStack_70;
    lStack_70 = lVar9;
    lStack_68 = lVar8;
    func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
    func_0x000107c61170(uVar13);
    *(long **)(unaff_x20 + 0x10) = plVar11;
    func_0x000107c61174();
    FUN_10312054c();
    puVar12 = &UNK_110610728;
    func_0x000107c613fc(&UNK_110610728,0x18,7);
    *(long **)(puVar12 + 0x10) = plVar11;
    func_0x0001000285a8(0x112f42648,&UNK_10db8f320);
    func_0x000107c613fc();
    func_0x000107c61174(plVar11);
    pcVar3 = FUN_10311deb0;
    func_0x0001000bdd8c(FUN_10311deb0,puVar12);
    uVar13 = 0;
    func_0x000103f944d8(0);
    func_0x000107c610f8();
    func_0x000103f9441c(pcVar3,uVar13);
    func_0x000107c42c20(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(plVar11);
    func_0x000107c61170(pcVar3);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10311ddd0);
  (*pcVar3)();
}



/* Entry: 10311ddd0; end: 10311de63;  */

void FUN_10311ddd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110610ab8;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10311de64; end: 10311de87;  */

void FUN_10311de64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10311de88; end: 10311de8b;  */

void FUN_10311de88(void)

{
  return;
}



/* Entry: 10311de8c; end: 10311deaf;  */

undefined8 FUN_10311de8c(void)

{
  func_0x00010311de08();
  return 0;
}



/* Entry: 10311deb0; end: 10311deb3;  */

void FUN_10311deb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110610ab8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 10311deb4; end: 10311deef;  */

void FUN_10311deb4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110610ab8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 10311def0; end: 10311df0f;  */

void FUN_10311def0(void)

{
  func_0x000107c61168(&PTR_PTR_112f42698);
  return;
}



/* Entry: 10311df10; end: 10311df17;  */

bool FUN_10311df10(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10311df18; end: 10311e33b;  */

long FUN_10311df18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  return unaff_x20;
}



/* Entry: 10311e33c; end: 10311e3eb;  */

/* WARNING: Possible PIC construction at 0x00010311e348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010311e358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010311e368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010311e35c) */
/* WARNING: Removing unreachable block (ram,0x00010311e34c) */
/* WARNING: Removing unreachable block (ram,0x00010311e36c) */

void FUN_10311e33c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10311e3ec; end: 10311e40f;  */

void FUN_10311e3ec(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010311dfa8();
  *param_1 = param_2;
  return;
}



/* Entry: 10311e410; end: 10311e45f;  */

undefined8 * FUN_10311e410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = param_1[2];
  uVar5 = param_1[5];
  uVar4 = param_1[4];
  param_2[3] = param_1[3];
  param_2[2] = uVar3;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return param_2;
}



/* Entry: 10311e460; end: 10311e4e7;  */

void FUN_10311e460(undefined8 param_1)

{
  if (lRam0000000112f42720 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74990c);
  return;
}



/* Entry: 10311e4e8; end: 10311e793;  */

long FUN_10311e4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  uVar1 = param_7;
  func_0x000107c4b33c();
  func_0x000107c61180();
  puVar2 = &UNK_110610788;
  func_0x000107c613fc(&UNK_110610788,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar3 = FUN_10311e820;
  func_0x0001000bdd8c(FUN_10311e820,puVar2);
  puVar2 = &UNK_1106107b0;
  func_0x000107c613fc(&UNK_1106107b0,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(code **)(puVar2 + 0x30) = pcVar3;
  func_0x0001000285a8(0x112f427f8,&UNK_10db8f438);
  func_0x000107c613fc();
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(pcVar3);
  pcVar4 = FUN_10311e940;
  func_0x0001000bdd8c(FUN_10311e940,puVar2);
  func_0x0001000285a8(0x112f42800,&UNK_10db8f440);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_10311e984;
  func_0x0001000bdd8c(FUN_10311e984,pcVar4);
  *(code **)(unaff_x20 + 0x10) = pcVar5;
  func_0x0001000285a8(0x112f42808,&UNK_10db8f448);
  func_0x000107c613fc();
  func_0x000107c61580(pcVar5,2);
  pcVar6 = FUN_10311e9c8;
  func_0x0001000bdd8c(FUN_10311e9c8,pcVar5);
  uVar7 = 0;
  func_0x000103f94600(0);
  func_0x000107c610f8();
  func_0x000103f94544(pcVar6,uVar7);
  func_0x000107c42c20(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(pcVar6);
  return unaff_x20;
}



/* Entry: 10311e794; end: 10311e81f;  */

void FUN_10311e794(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:cameraUIScope:cameraUIServices:lensContentServices:lensPerformerServices:lensHintProvidingServices:cameraUIScopedLensProcessingCarouselServices:lensModalCardControllerServicesExposer:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10311e820; end: 10311e827;  */

void FUN_10311e820(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:cameraUIScope:cameraUIServices:lensContentServices:lensPerformerServices:lensHintProvidingServices:cameraUIScopedLensProcessingCarouselServices:lensModalCardControllerServicesExposer:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10311e828; end: 10311e93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311e828(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  func_0x000107c4b1cc();
  func_0x000107c61180();
  func_0x000107c4ae48();
  func_0x000107c61180();
  func_0x000107c415d8();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_5 + _DAT_1130385c0);
  lVar2 = 0;
  FUN_103121fcc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f42c08) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f42be0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f42be8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f42bf0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f42bf8) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112f42c00) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(param_6);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10311e940; end: 10311e943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311e940(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar7 = &lStack_60;
  func_0x000107c4b1cc();
  func_0x000107c61180();
  func_0x000107c4ae48();
  func_0x000107c61180();
  func_0x000107c415d8();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(lVar6 + _DAT_1130385c0);
  lVar5 = 0;
  FUN_103121fcc();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f42c08) = 0;
  *(undefined8 *)(lVar6 + _DAT_112f42be0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f42be8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112f42bf0) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112f42bf8) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_112f42c00) = uVar8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar7;
  return;
}



/* Entry: 10311e944; end: 10311e983;  */

void FUN_10311e944(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001031225fc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10311e984; end: 10311e98b;  */

void FUN_10311e984(long *param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x0001031225fc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10311e98c; end: 10311e9c7;  */

void FUN_10311e98c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001031225fc();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110610cd8;
  func_0x0001000d224c(param_1);
  return;
}



/* Entry: 10311e9c8; end: 10311e9cb;  */

void FUN_10311e9c8(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  func_0x0001031225fc();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110610cd8;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 10311e9cc; end: 10311ea0f;  */

void FUN_10311e9cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10311ea10; end: 10311ea1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10311ea10(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar7 = &lStack_60;
  func_0x000107c4b1cc();
  func_0x000107c61180();
  func_0x000107c4ae48();
  func_0x000107c61180();
  func_0x000107c415d8();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(lVar6 + _DAT_1130385c0);
  lVar5 = 0;
  FUN_103121fcc();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f42c08) = 0;
  *(undefined8 *)(lVar6 + _DAT_112f42be0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f42be8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112f42bf0) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112f42bf8) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_112f42c00) = uVar8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar7;
  return;
}



/* Entry: 10311ea20; end: 10311ea53;  */

void FUN_10311ea20(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  func_0x0001031225fc();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110610cd8;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 10311ea54; end: 10311ebf3;  */

undefined * FUN_10311ea54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_80;
  func_0x000104875e28(&puStack_80);
  if (puStack_80 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c61574();
    puVar2 = PTR_PTR_1126afc98;
    func_0x000107c61168();
    func_0x000107c3e26c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x0001000d224c(&uStack_48);
    puVar4 = &UNK_1106107d8;
    func_0x000107c613fc(&UNK_1106107d8,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000104875e28(&puStack_80);
    if (puStack_80 == (undefined *)0x0) {
      func_0x000107c4358c(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uStack_48);
    }
    else {
      func_0x000107c615e8();
      func_0x0001000d224c(&uStack_50);
      pcStack_60 = FUN_10311ebf4;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000b0c7c;
      puStack_68 = &UNK_1106107f0;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar1 = puStack_58;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar1);
      func_0x000107c44e24(uStack_50);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uStack_48);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(uStack_50);
    }
    puVar4 = puVar2;
    func_0x000107c4f3ec(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  return puVar4;
}



/* Entry: 10311ebf4; end: 10311ebfb;  */

void FUN_10311ebf4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10311ebfc; end: 10311ec27;  */

void FUN_10311ebfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10311ec28; end: 10311ec2b;  */

void FUN_10311ec28(void)

{
  return;
}



/* Entry: 10311ec2c; end: 10311ec4b;  */

void FUN_10311ec2c(void)

{
  FUN_10311ea54();
  return;
}



/* Entry: 10311ec4c; end: 10311ec67;  */

void FUN_10311ec4c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10311ec68; end: 10311ec87;  */

void FUN_10311ec68(void)

{
  func_0x000107c61168(&PTR_PTR_112f42850);
  return;
}



/* Entry: 10311ec88; end: 10311ef13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10311ec88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  
  func_0x000107c613fc();
  uVar1 = param_5;
  func_0x000107c4b33c();
  func_0x000107c61180();
  puVar2 = &UNK_110610848;
  func_0x000107c613fc(&UNK_110610848,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar3 = FUN_10311efa0;
  func_0x0001000bdd8c(FUN_10311efa0,puVar2);
  uVar9 = *(undefined8 *)(param_6 + _DAT_112fcaa80);
  func_0x0001000285a8(0x112d5de00,&UNK_10d9245b8);
  func_0x000107c6157c(uVar9);
  uVar4 = uVar1;
  func_0x000107c4ae48();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  puVar2 = &UNK_110610870;
  func_0x000107c613fc(&UNK_110610870,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  *(code **)(puVar2 + 0x20) = pcVar3;
  func_0x0001000285a8(0x112f428b8,&UNK_10db8f4a0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar3);
  pcVar6 = FUN_10311f020;
  func_0x0001000bdd8c(FUN_10311f020,puVar2);
  func_0x0001000285a8(0x112f428c0,&UNK_10db8f4a8);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_10311f068;
  func_0x0001000bdd8c(FUN_10311f068,pcVar6);
  func_0x000103f94728(0);
  func_0x000107c610f8();
  pcVar8 = pcVar7;
  func_0x000107c6157c(pcVar7);
  func_0x000103f9466c();
  func_0x000107c42c20(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61170(pcVar8);
  return unaff_x20;
}



/* Entry: 10311ef14; end: 10311ef9f;  */

void FUN_10311ef14(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:cameraUIScope:cameraUIServices:lensPerformerServices:cameraUIScopedLensProcessingCarouselServices:lensFullScreenServices:lensUIElementsVisibilityControllerServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10311efa0; end: 10311efa7;  */

void FUN_10311efa0(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:cameraUIScope:cameraUIServices:lensPerformerServices:cameraUIScopedLensProcessingCarouselServices:lensFullScreenServices:lensUIElementsVisibilityControllerServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 10311efa8; end: 10311f01f;  */

void FUN_10311efa8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000103122b90(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_103122650(param_2,param_3,param_4);
  *param_1 = param_2;
  return;
}



/* Entry: 10311f020; end: 10311f02b;  */

void FUN_10311f020(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000103122b90(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  FUN_103122650(uVar2,uVar1,uVar3);
  *param_1 = uVar2;
  return;
}



/* Entry: 10311f02c; end: 10311f067;  */

void FUN_10311f02c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103122b90();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110610cf0;
  func_0x0001000d224c(param_1);
  return;
}



/* Entry: 10311f068; end: 10311f06b;  */

void FUN_10311f068(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  func_0x000103122b90();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110610cf0;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 10311f06c; end: 10311f09f;  */

void FUN_10311f06c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10311f0a0; end: 10311f0d3;  */

void FUN_10311f0a0(long param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  func_0x000103122b90();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110610cf0;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 10311f0d4; end: 10311f0ef;  */

void FUN_10311f0d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10311f0f0; end: 10311f10f;  */

void FUN_10311f0f0(void)

{
  func_0x000107c61168(&PTR_PTR_112f42908);
  return;
}



/* Entry: 10311f110; end: 10311f28f;  */

long FUN_10311f110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0x112ea35b0;
  func_0x0001000285a8(0x112ea35b0,&UNK_10db33120);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  uVar1 = 0x112f42650;
  func_0x0001000285a8(0x112f42650,&UNK_10db8f330);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x40) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  return unaff_x20;
}



/* Entry: 10311f290; end: 10311f29f;  */

void FUN_10311f290(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 10311f2a0; end: 10311f3df;  */

void FUN_10311f2a0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
    func_0x000104886440();
  }
  else {
    lVar2 = lVar1;
    func_0x000107c41ddc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
    func_0x0001000b637c(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10311f3e0; end: 10311f433;  */

long FUN_10311f3e0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3dff4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 10311f434; end: 10311f4e3;  */

void FUN_10311f434(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_1106108b8;
  func_0x000107c613fc(&UNK_1106108b8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_10311f67c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_102b3b330;
  puStack_48 = &UNK_1106108d0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4db94(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10311f4e4; end: 10311f67b;  */

void FUN_10311f4e4(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      lVar1 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c41c24();
      func_0x000107c61180();
      pcVar2 = "setup()";
      func_0x0001000c10c0("setup()");
      func_0x000107c61180();
      lVar3 = lVar1;
      func_0x000107c4da88(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(pcVar2);
      lVar1 = lVar3;
      func_0x000107c421ac(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      puVar4 = &UNK_1106108b8;
      func_0x000107c613fc(&UNK_1106108b8,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,param_2);
      uStack_68 = 0x10311fef4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      uStack_78 = 0x10311f730;
      puStack_70 = &UNK_1106109c8;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_60);
      lVar3 = lVar1;
      func_0x000107c5c320(lVar1);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar1);
      func_0x000107c3e924(lVar3);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 10311f67c; end: 10311f683;  */

void FUN_10311f67c(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      lVar2 = param_1;
      func_0x000107c615f0(param_1);
      func_0x000107c41c24();
      func_0x000107c61180();
      pcVar3 = "setup()";
      func_0x0001000c10c0("setup()");
      func_0x000107c61180();
      lVar4 = lVar2;
      func_0x000107c4da88(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(pcVar3);
      lVar2 = lVar4;
      func_0x000107c421ac(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      puVar5 = &UNK_1106108b8;
      func_0x000107c613fc(&UNK_1106108b8,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,lVar1);
      uStack_68 = 0x10311fef4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      uStack_78 = 0x10311f730;
      puStack_70 = &UNK_1106109c8;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_60);
      lVar4 = lVar2;
      func_0x000107c5c320(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar2);
      func_0x000107c3e924(lVar4);
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 10311f684; end: 10311f77b;  */

void FUN_10311f684(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(param_2);
    func_0x000107c42440();
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    uStack_58 = uVar1;
    puStack_50 = puVar2;
    func_0x0001002a64a8(&uStack_58);
    func_0x000107c6142c(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 10311f77c; end: 10311f79f;  */

void FUN_10311f77c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10311f7a0; end: 10311f877;  */

void FUN_10311f7a0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    return;
  }
  lVar2 = lStack_38;
  func_0x000107c49f88(lStack_38,param_2,param_1);
  if ((int)lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4500c();
    func_0x000107c61180();
  }
  else {
    uVar1 = param_1;
    func_0x000107c49c88();
    if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x000107c4a73c(), (int)uVar1 == 0)) {
      FUN_10311f8bc(param_1);
      goto LAB_10311f834;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4500c();
    func_0x000107c61180();
  }
  if (lVar2 != 0) {
    func_0x000107c3fac8();
    func_0x000107c615e8(lVar2);
  }
LAB_10311f834:
  uVar1 = param_1;
  func_0x000107c49c88();
  if ((uVar1 & 1) == 0) {
    FUN_10311faf8(param_1);
  }
  func_0x000107c615e8(lStack_38);
  return;
}



/* Entry: 10311f878; end: 10311f8bb;  */

void FUN_10311f878(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3fac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10311f8bc; end: 10311faf7;  */

void FUN_10311f8bc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    puStack_80 = param_1;
    func_0x0001002a64a8(&puStack_80);
    puVar2 = puVar1;
    func_0x000107c41074();
    func_0x000107c61180();
    puVar3 = &UNK_110610988;
    uVar7 = 0x20;
    func_0x000107c613fc(&UNK_110610988,0x20,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined **)(puVar3 + 0x18) = param_1;
    pcStack_60 = FUN_10311fef0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100ff4e10;
    puStack_68 = &UNK_1106109a0;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c6157c();
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c3e028(puVar1);
    func_0x000107c60bd0(ppuVar4);
    uVar8 = uVar7;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x000107c61174();
      puVar5 = puVar3;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5faec();
      uVar8 = uVar7;
      func_0x000107c61170(puVar5);
      puStack_80 = puVar6;
      uStack_78 = uVar7;
      func_0x0001002a64a8(&puStack_80);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(puVar3);
    }
    puVar3 = puVar1;
    func_0x000107c41074();
    func_0x000107c61180();
    uVar7 = uVar8;
    if (puVar3 != (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5faec();
      uVar7 = uVar8;
      func_0x000107c61170(puVar5);
      puStack_80 = puVar6;
      uStack_78 = uVar8;
      func_0x0001002a64a8(&puStack_80);
      func_0x000107c6142c(uVar8);
      func_0x000107c61170(puVar3);
    }
    puVar3 = puVar1;
    func_0x000107c3dff4();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c615e8(puVar1);
    }
    else {
      puVar5 = puVar3;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5faec();
      func_0x000107c61170(puVar5);
      puStack_80 = puVar6;
      uStack_78 = uVar7;
      func_0x0001002a64a8(&puStack_80);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(puVar1);
      puVar2 = puVar3;
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 10311faf8; end: 10311fba3;  */

void FUN_10311faf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    func_0x0001000d224c(&lStack_50);
    lVar1 = lStack_50;
    if (lStack_50 != 0) {
      lVar2 = lStack_50;
      func_0x000107c42270();
      if ((int)lVar2 != 0) {
        func_0x000107c4b1dc();
        func_0x000107c61180();
        lVar2 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        lStack_50 = lVar2;
        uStack_48 = param_2;
        func_0x0001002a64a8(&lStack_50);
        func_0x000107c6142c(param_2);
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10311fba4; end: 10311fbef;  */

void FUN_10311fba4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10311fbf0; end: 10311fbfb;  */

void FUN_10311fbf0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x38));
  return;
}



/* Entry: 10311fbfc; end: 10311fd43;  */

void FUN_10311fbfc(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
    func_0x000104886440();
  }
  else {
    lVar2 = lVar1;
    func_0x000107c41ddc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
    func_0x0001000b637c(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10311fd44; end: 10311fd9b;  */

long FUN_10311fd44(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3dff4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 10311fd9c; end: 10311fda7;  */

void FUN_10311fd9c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x30));
  return;
}



/* Entry: 10311fda8; end: 10311fe5b;  */

void FUN_10311fda8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &UNK_1106108b8;
  func_0x000107c613fc(&UNK_1106108b8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar3);
  uStack_40 = 0x10311ff14;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_102b3b330;
  puStack_48 = &UNK_110610950;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4db94(uVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10311fe5c; end: 10311fe67;  */

void FUN_10311fe5c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + 0x40),PTR_s_disposeAll_1125bf508);
  return;
}



/* Entry: 10311fe68; end: 10311fecf;  */

void FUN_10311fe68(void)

{
  FUN_10311f7a0();
  return;
}



/* Entry: 10311fed0; end: 10311feef;  */

void FUN_10311fed0(void)

{
  func_0x000107c61168(&PTR_PTR_112f429a0);
  return;
}



/* Entry: 10311fef0; end: 10311ff17;  */

void FUN_10311fef0(void)

{
  return;
}



/* Entry: 10311ff18; end: 10311ff7b;  */

void FUN_10311ff18(void)

{
  long unaff_x20;
  
  func_0x00010312052c(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10311ff7c; end: 103120163;  */

void FUN_10311ff7c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c615f0(param_1);
      func_0x0001000d224c(auStack_80);
      lVar2 = lStack_60;
      uVar1 = uStack_68;
      func_0x000103120508(auStack_80,uStack_68);
      (**(code **)(lVar2 + 8))(uVar1,lVar2);
      func_0x000107c5297c(param_1);
      func_0x000107c615e8(uVar1);
      func_0x00010312052c(auStack_80);
      func_0x0001000d224c(auStack_80);
      lVar2 = lStack_60;
      uVar1 = uStack_68;
      func_0x000103120508(auStack_80,uStack_68);
      (**(code **)(lVar2 + 8))(uVar1,lVar2);
      func_0x000107c56764(param_1);
      func_0x000107c615e8(uVar1);
      func_0x00010312052c(auStack_80);
      func_0x0001000d224c(auStack_80);
      lVar2 = lStack_60;
      uVar1 = uStack_68;
      func_0x000103120508(auStack_80,uStack_68);
      (**(code **)(lVar2 + 8))(uVar1,lVar2);
      func_0x000107c59334(param_1);
      func_0x000107c615e8(uVar1);
      func_0x00010312052c(auStack_80);
      func_0x0001000d224c(auStack_80);
      func_0x000103120508(auStack_80,uStack_68);
      uVar1 = uStack_68;
      (**(code **)(lStack_60 + 0x10))(uStack_68,lStack_60);
      func_0x000107c55490(param_1);
      func_0x000107c615e8(uVar1);
      func_0x00010312052c(auStack_80);
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      lVar2 = *(long *)(param_2 + 0x38);
      func_0x000103120508(param_2 + 0x10,uVar1);
      (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 103120164; end: 103120423;  */

void FUN_103120164(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5297c();
    func_0x000107c56764(lVar1);
    func_0x000107c59334(lVar1);
    func_0x000107c55490(lVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar3 = *(long *)(unaff_x20 + 0x38);
    func_0x000103120508(unaff_x20 + 0x10,uVar2);
    (**(code **)(lVar3 + 0x18))(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 103120424; end: 103120443;  */

void FUN_103120424(void)

{
  FUN_103120164();
  return;
}



/* Entry: 103120444; end: 1031204e3;  */

void FUN_103120444(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *unaff_x20;
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  lVar3 = *(long *)(lVar1 + 0x38);
  func_0x000103120508(lVar1 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x20))(param_1,uVar2,lVar3);
  return;
}



/* Entry: 1031204e4; end: 10312054b;  */

void FUN_1031204e4(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c615f0(param_1);
      func_0x0001000d224c(auStack_80);
      lVar3 = lStack_60;
      uVar2 = uStack_68;
      func_0x000103120508(auStack_80,uStack_68);
      (**(code **)(lVar3 + 8))(uVar2,lVar3);
      func_0x000107c5297c(param_1);
      func_0x000107c615e8(uVar2);
      func_0x00010312052c(auStack_80);
      func_0x0001000d224c(auStack_80);
      lVar3 = lStack_60;
      uVar2 = uStack_68;
      func_0x000103120508(auStack_80,uStack_68);
      (**(code **)(lVar3 + 8))(uVar2,lVar3);
      func_0x000107c56764(param_1);
      func_0x000107c615e8(uVar2);
      func_0x00010312052c(auStack_80);
      func_0x0001000d224c(auStack_80);
      lVar3 = lStack_60;
      uVar2 = uStack_68;
      func_0x000103120508(auStack_80,uStack_68);
      (**(code **)(lVar3 + 8))(uVar2,lVar3);
      func_0x000107c59334(param_1);
      func_0x000107c615e8(uVar2);
      func_0x00010312052c(auStack_80);
      func_0x0001000d224c(auStack_80);
      func_0x000103120508(auStack_80,uStack_68);
      uVar2 = uStack_68;
      (**(code **)(lStack_60 + 0x10))(uStack_68,lStack_60);
      func_0x000107c55490(param_1);
      func_0x000107c615e8(uVar2);
      func_0x00010312052c(auStack_80);
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      lVar3 = *(long *)(lVar1 + 0x38);
      func_0x000103120508(lVar1 + 0x10,uVar2);
      (**(code **)(lVar3 + 0x10))(uVar2,lVar3);
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 10312054c; end: 1031208c7;  */

/* WARNING: Possible PIC construction at 0x000103120660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031207c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103120848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103120888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031208a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010312088c) */
/* WARNING: Removing unreachable block (ram,0x00010312084c) */
/* WARNING: Removing unreachable block (ram,0x0001031207cc) */
/* WARNING: Removing unreachable block (ram,0x000103120664) */
/* WARNING: Removing unreachable block (ram,0x000103120730) */
/* WARNING: Removing unreachable block (ram,0x0001031206ec) */
/* WARNING: Removing unreachable block (ram,0x000103120778) */
/* WARNING: Removing unreachable block (ram,0x0001031208a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312054c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f42b50;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4fc08();
    func_0x000107c61170(lVar1);
  }
  plVar2 = (long *)0x0;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x0001000c6580();
  plVar3 = *(long **)(unaff_x20 + _DAT_112f42b70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar3 != (long *)0x0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    func_0x000107c3d1a0();
    func_0x000107c61180();
    plVar2 = plVar3;
    func_0x0001000b637c();
    func_0x000107c61170(plVar3);
    puVar4 = &UNK_110610b00;
    func_0x000107c613fc(&UNK_110610b00,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    (**(code **)(*plVar2 + 0x60))(FUN_1031212ec,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 1031208c8; end: 10312099f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1031208c8(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = _DAT_112f42ba8;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112f42ba8);
  pcVar4 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f42b58);
    puVar3 = &UNK_110610ad8;
    func_0x000107c613fc(&UNK_110610ad8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    *(long *)(puVar3 + 0x18) = unaff_x20;
    func_0x0001000285a8(0x112f42bd8,&UNK_10db8f640);
    func_0x000107c613fc();
    func_0x000107c615f0(uVar5);
    func_0x000107c61174();
    pcVar4 = FUN_10312126c;
    func_0x0001000bdd8c(FUN_10312126c,puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar5);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c6157c(pcVar2);
  return pcVar4;
}



/* Entry: 1031209a0; end: 1031209ff;  */

void FUN_1031209a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c3ebcc(uVar1);
    FUN_103120a00();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103120a00; end: 103120b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103120a00(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 auStack_50 [2];
  
  pcVar1 = FUN_103121600;
  func_0x000100087bd4(FUN_103121600,auStack_50,PTR___sytN_11034f1b0 + 8);
  if ((param_1 & 1) == 0) {
    FUN_1031208c8();
    func_0x0001000d224c(auStack_50);
    func_0x000107c61574(pcVar1);
    uVar2 = auStack_50[0];
    func_0x000107c5d448(auStack_50[0]);
    func_0x000107c615e8(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f42ba8);
    func_0x000107c6157c(uVar2);
    func_0x0001000d224c(auStack_50);
    func_0x000107c61574(uVar2);
    func_0x000107c55cd8(auStack_50[0]);
    func_0x000107c615e8(auStack_50[0]);
  }
  return;
}



/* Entry: 103120b50; end: 103120ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103120b50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 auStack_60 [2];
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  uVar1 = 0x103121324;
  func_0x000100087bd4(0x103121324,auStack_60,PTR___sytN_11034f1b0 + 8);
  FUN_1031208c8();
  func_0x0001000d224c(auStack_60);
  func_0x000107c61574(uVar1);
  uVar1 = auStack_60[0];
  func_0x000107c5d448(auStack_60[0]);
  func_0x000107c615e8(uVar1);
  func_0x000103120c58(param_1,param_2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f42ba8);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_60);
  func_0x000107c61574(uVar1);
  func_0x000107c55cd8(auStack_60[0]);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(auStack_60[0]);
  return;
}



/* Entry: 103120ec8; end: 103120f27; -[_TtC38LensCarouselLensApplicatorServicesImpl31LensCTAButtonControllerWorkflow init] */

void FUN_103120ec8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselLensApplicatorServicesImpl.LensCTAButtonControllerWorkflow",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103120ef4);
  (*pcVar1)();
}



/* Entry: 103120f28; end: 103120fef; -[_TtC38LensCarouselLensApplicatorServicesImpl31LensCTAButtonControllerWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103120f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103120fd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103120f98) */
/* WARNING: Removing unreachable block (ram,0x000103120fd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103120f28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f42b50);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f42b58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42b60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42b68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42b70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f42b78));
  return;
}



/* Entry: 103120ff0; end: 10312100f;  */

void FUN_103120ff0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b9098);
  return;
}



/* Entry: 103121010; end: 10312104f;  */

undefined8 FUN_103121010(undefined8 param_1)

{
  undefined8 uStack_28;
  
  FUN_1031208c8();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61574(param_1);
  return uStack_28;
}



/* Entry: 103121050; end: 1031210cb; -[_TtC38LensCarouselLensApplicatorServicesImpl31LensCTAButtonControllerWorkflow showCallToActionViewForLens:] */

/* WARNING: Possible PIC construction at 0x0001031210b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031210b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103121050(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f42b80);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5ae4c();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1031210cc; end: 103121147; -[_TtC38LensCarouselLensApplicatorServicesImpl31LensCTAButtonControllerWorkflow activeLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031210cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112d3b7d8;
  func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
  func_0x000100087bd4(&uStack_38,FUN_1031212b4,auStack_50,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 103121148; end: 1031211b3; -[_TtC38LensCarouselLensApplicatorServicesImpl31LensCTAButtonControllerWorkflow areLensesActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103121148(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_31,FUN_10312129c,auStack_50,PTR___sSbN_11034dd40);
  func_0x000107c61170(param_1);
  return uStack_31;
}



/* Entry: 1031211b4; end: 1031211d3; -[_TtC38LensCarouselLensApplicatorServicesImpl31LensCTAButtonControllerWorkflow lensCameraBottomContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031211b4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f42b88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031211d4; end: 103121267; -[_TtC38LensCarouselLensApplicatorServicesImpl31LensCTAButtonControllerWorkflow isPointInsideView:] */

long FUN_1031211d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_48;
  
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_1031208c8();
  func_0x000104875e28(&lStack_48);
  func_0x000107c61574(uVar1);
  if (lStack_48 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lStack_48;
    func_0x000107c4eae4(param_1,param_2,lStack_48);
    func_0x000107c615e8(lStack_48);
  }
  func_0x000107c61170(param_3);
  return lVar2;
}



/* Entry: 103121268; end: 10312126b; -[_TtC38LensCarouselLensApplicatorServicesImpl31LensCTAButtonControllerWorkflow setUIHidden:] */

void FUN_103121268(void)

{
  return;
}



/* Entry: 10312126c; end: 10312129b;  */

void FUN_10312126c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4d61c(lVar2,param_3,*(undefined8 *)(unaff_x20 + 0x18));
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10312129c);
  (*pcVar1)();
}



/* Entry: 10312129c; end: 1031212b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312129c(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f42b98);
  return;
}


