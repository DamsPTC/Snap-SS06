/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018e8f54; end: 1018e8f6b;  */

undefined8 * FUN_1018e8f54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1018e8f6c; end: 1018e8fd3;  */

long FUN_1018e8f6c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1018e8fd4; end: 1018e8fdf;  */

void FUN_1018e8fd4(long param_1,long param_2)

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



/* Entry: 1018e8fe0; end: 1018e8fe3; -[_TtC38AdPlayableWebViewFactoryImplementation27AdPlayableWebViewInteractor webView:didFailNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x000100cbe3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100cbe3f8) */

void FUN_1018e8fe0(undefined8 param_1)

{
  undefined8 in_x4;
  
  func_0x000107c61174(in_x4);
  func_0x000107c61174(param_1);
  FUN_1018e8794(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1018e8fe4; end: 1018e8ff3; -[_TtC38AdPlayableWebViewFactoryImplementation27AdPlayableWebViewInteractor webView:didFailProvisionalNavigation:withError:] */

/* WARNING: Possible PIC construction at 0x000100cbe3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100cbe3f8) */

void FUN_1018e8fe4(undefined8 param_1)

{
  undefined8 in_x4;
  
  func_0x000107c61174(in_x4);
  func_0x000107c61174(param_1);
  FUN_1018e8794(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1018e8ff4; end: 1018e9013;  */

void FUN_1018e8ff4(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1018e9014; end: 1018e90a7;  */

void FUN_1018e9014(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0x112dd0f78;
  func_0x0001000285a8(0x112dd0f78,&UNK_10d992278);
  func_0x000107c613fc();
  func_0x0001000c2754();
  lVar2 = 0;
  func_0x0001018e9168();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(code **)(lVar3 + 0x18) = FUN_1018e912c;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x1018e9130;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11040ec68;
  *param_1 = lVar3;
  return;
}



/* Entry: 1018e90a8; end: 1018e90b7;  */

void FUN_1018e90a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018e90b8; end: 1018e912b;  */

void FUN_1018e90b8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112dd0ea8,&UNK_10d992230);
  func_0x000107c613fc();
  pcVar1 = FUN_1018e9014;
  func_0x0001000bdd8c(FUN_1018e9014,0);
  uVar2 = 0;
  func_0x0001001d6f30(0);
  func_0x000107c610f8();
  func_0x00010072a5c8(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1018e912c; end: 1018e9133;  */

void FUN_1018e912c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4UUIDVACycfC_110350c30)();
  return;
}



/* Entry: 1018e9134; end: 1018e9187;  */

void FUN_1018e9134(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018e9188; end: 1018e9193;  */

void FUN_1018e9188(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1018e9194; end: 1018e929b;  */

void FUN_1018e9194(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0x112dd1030;
  func_0x0001000285a8(0x112dd1030,&UNK_10d9922d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar2 = 0;
  func_0x000102d25de8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *unaff_x20;
  (**(code **)(lVar5 + 0x18))(lVar4);
  (**(code **)(lVar5 + 0x28))(lVar4 + *(int *)(lVar2 + 0x14));
  FUN_1018e929c(param_1,puVar3);
  func_0x0001018e92e0(lVar4,puVar3 + *(int *)(lVar1 + 0x1c));
  func_0x0001002a64a8(puVar3);
  func_0x0001018e9324(puVar3);
  func_0x0001018e936c(lVar4);
  return;
}



/* Entry: 1018e929c; end: 1018e93a7;  */

long FUN_1018e929c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1018e93a8; end: 1018e979f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e93a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    puVar1 = &UNK_11040ed18;
    func_0x000107c613fc(&UNK_11040ed18,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_11040ed40;
    func_0x000107c613fc(&UNK_11040ed40,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    pcStack_58 = FUN_1018e98e8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11040ed58;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_50;
    func_0x00010006c00c(param_1,param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(lStack_48);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lStack_48);
  }
  return;
}



/* Entry: 1018e97a0; end: 1018e9813; -[AdFormatEventLogger logEventWithAdFormatEvent:] */

/* WARNING: Possible PIC construction at 0x0001018e97e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e97e8) */

void FUN_1018e97a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018e9814; end: 1018e986f; -[AdFormatEventLogger init] */

void FUN_1018e9814(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdFormatEventLogger.AdFormatEventLogger",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e9840);
  (*pcVar1)();
}



/* Entry: 1018e9870; end: 1018e98c7; -[AdFormatEventLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e9870(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd1038));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd1040));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd1048));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd1050));
  return;
}



/* Entry: 1018e98c8; end: 1018e98e7;  */

void FUN_1018e98c8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ebb38);
  return;
}



/* Entry: 1018e98e8; end: 1018e990f;  */

/* WARNING: Possible PIC construction at 0x0001018e95fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e96d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e96ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e975c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e97e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e9744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e9718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e9730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e971c) */
/* WARNING: Removing unreachable block (ram,0x0001018e9748) */
/* WARNING: Removing unreachable block (ram,0x0001018e97e8) */
/* WARNING: Removing unreachable block (ram,0x0001018e96f0) */
/* WARNING: Removing unreachable block (ram,0x0001018e9750) */
/* WARNING: Removing unreachable block (ram,0x0001018e96dc) */
/* WARNING: Removing unreachable block (ram,0x0001018e9600) */
/* WARNING: Removing unreachable block (ram,0x0001018e96fc) */
/* WARNING: Removing unreachable block (ram,0x0001018e9608) */
/* WARNING: Removing unreachable block (ram,0x0001018e9790) */
/* WARNING: Removing unreachable block (ram,0x0001018e9668) */
/* WARNING: Removing unreachable block (ram,0x0001018e9674) */
/* WARNING: Removing unreachable block (ram,0x0001018e9678) */
/* WARNING: Removing unreachable block (ram,0x0001018e9794) */
/* WARNING: Removing unreachable block (ram,0x0001018e967c) */
/* WARNING: Removing unreachable block (ram,0x0001018e9684) */
/* WARNING: Removing unreachable block (ram,0x0001018e9688) */
/* WARNING: Removing unreachable block (ram,0x0001018e9798) */
/* WARNING: Removing unreachable block (ram,0x0001018e968c) */
/* WARNING: Removing unreachable block (ram,0x0001018e9740) */
/* WARNING: Removing unreachable block (ram,0x0001018e96b4) */
/* WARNING: Removing unreachable block (ram,0x0001018e9734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e98e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_90;
  long lStack_88;
  char cStack_79;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  undefined1 uStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    func_0x000107c60e78();
    lVar2 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar1);
    func_0x000107c5ee30(lVar3);
    lVar1 = lVar2;
  }
  else {
    func_0x0001000d224c(&uStack_90);
    uVar5 = uStack_90;
    func_0x000107c614f0(uStack_90);
    alStack_60[0] = -0x2fffffffffffffda;
    alStack_60[1] = 0x800000010efbfc50;
    uStack_50 = 0;
    (**(code **)(lStack_88 + 8))
              (&cStack_79,alStack_60,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar5,lStack_88);
    func_0x000107c615e8(uStack_90);
    if (cStack_79 == '\x01') {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112dd1048);
      func_0x000107c6157c(uVar5);
      func_0x0001000d224c(alStack_60);
      func_0x000107c61574(uVar5);
      if (alStack_60[0] != 0) {
        uVar5 = 0;
        FUN_1018e9910(0);
        func_0x000107c614e8();
        func_0x000107c5ee20(lVar2,uVar4);
        alStack_60[0] = 0;
        func_0x000107c4e380(uVar5);
        func_0x000107c61180();
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1018e9910; end: 1018e9953;  */

void FUN_1018e9910(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd1080 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e14b8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dd1080 = puVar1;
  return;
}



/* Entry: 1018e9954; end: 1018e99c7;  */

long FUN_1018e9954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  return unaff_x20;
}



/* Entry: 1018e99c8; end: 1018e9a5f;  */

void FUN_1018e99c8(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0xd00000000000003c;
    func_0x000107c5fadc(0xd00000000000003c,0x800000010efbfcf0);
    lVar2 = param_2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    func_0x000107c61170(uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1018e9a60; end: 1018e9a67;  */

void FUN_1018e9a60(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0xd00000000000003c;
    func_0x000107c5fadc(0xd00000000000003c,0x800000010efbfcf0);
    lVar3 = lVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar1);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 1018e9a68; end: 1018e9b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e9a68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  FUN_1018e98c8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dd1038) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dd1040) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112dd1048) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112dd1050) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1018e9b28; end: 1018e9b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018e9b28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = 0;
  FUN_1018e98c8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112dd1038) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112dd1040) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112dd1048) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112dd1050) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1018e9b34; end: 1018e9b5f;  */

/* WARNING: Possible PIC construction at 0x0001018e9b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e9b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e9b44) */
/* WARNING: Removing unreachable block (ram,0x0001018e9b54) */

void FUN_1018e9b34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018e9b60; end: 1018e9bdf;  */

void FUN_1018e9b60(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018e9be0; end: 1018e9c23;  */

void FUN_1018e9be0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018e9c24; end: 1018e9dd3;  */

/* WARNING: Possible PIC construction at 0x0001018e9cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e9d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018e9d74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018e9d5c) */
/* WARNING: Removing unreachable block (ram,0x0001018e9cfc) */
/* WARNING: Removing unreachable block (ram,0x0001018e9d78) */

void FUN_1018e9c24(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar1 = (undefined *)0x0;
  func_0x0001018e9c04();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x10) = 0;
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_11040f008;
    func_0x000107c613fc(&UNK_11040f008,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar1;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    pcStack_70 = FUN_1018eaa70;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ab3660;
    puStack_78 = &UNK_11040f020;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c(puVar1);
    func_0x000107c61434(param_3);
    puVar1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1018e9dd4; end: 1018e9e7b;  */

void FUN_1018e9dd4(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  func_0x000105478d84(param_1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c3e1b8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar3 = 0;
    func_0x000103e0eaec(0);
    lVar4 = lVar2;
    func_0x000107c5fc54(lVar2,uVar3);
    func_0x000107c61170(lVar2);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_2 + 0x10) = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018e9e7c);
  (*pcVar1)();
}



/* Entry: 1018e9e7c; end: 1018e9fbf; -[_TtC38AdPublicStoryPersistenceImplementation42AdPublicStoryContentViewHistoryCoordinator fetchPublicStoryContentViewHistoryWithProfileIds:completionHandler:] */

void FUN_1018e9e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040ef90;
  func_0x000107c613fc(&UNK_11040ef90,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040efb8;
  func_0x000107c613fc(&UNK_11040efb8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d992450;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040efe0;
  func_0x000107c613fc(&UNK_11040efe0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d992458;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d992460,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018e9fc0; end: 1018ea013;  */

void FUN_1018e9fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  func_0x000107c5fc54(param_1,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  func_0x000107c6157c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ea014,0,0);
  return;
}



/* Entry: 1018ea014; end: 1018ea06b;  */

void FUN_1018ea014(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1018ea06c;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_1018e9c24();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1018ea06c; end: 1018ea0ab;  */

void FUN_1018ea06c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ea0ac,0,0);
  return;
}



/* Entry: 1018ea0ac; end: 1018ea12b;  */

void FUN_1018ea0ac(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61574(uVar1);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000103e0eaec(0);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))(*(long *)(unaff_x22 + 0x58),lVar3);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001018ea128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018ea12c; end: 1018ea14b;  */

void FUN_1018ea12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ea14c,0,0);
  return;
}



/* Entry: 1018ea14c; end: 1018ea2db;  */

void FUN_1018ea14c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0xa0);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1018ea2dc;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,0);
  lVar6 = *(long *)(lVar6 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar4 = &UNK_11040eef0;
    func_0x000107c613fc(&UNK_11040eef0,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar9;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    *(undefined8 *)(puVar4 + 0x20) = uVar10;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puVar8 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar4 + 0x28) = uVar7;
    *(code **)(unaff_x22 + 0x70) = FUN_1018ea86c;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100ab3660;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11040ef08;
    puVar5 = puVar8;
    func_0x000107c60bc4(puVar8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar1);
    func_0x000107c61574(uVar9);
    puVar4 = &UNK_11040ef40;
    func_0x000107c613fc(&UNK_11040ef40,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1018ea898;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *puVar8 = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100ab47f8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11040ef58;
    func_0x000107c60bc4(puVar8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4e55c(lVar6);
    func_0x000107c60bd0(puVar8);
    func_0x000107c60bd0(puVar5);
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1018ea2dc; end: 1018ea31b;  */

void FUN_1018ea2dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ea31c,0,0);
  return;
}



/* Entry: 1018ea31c; end: 1018ea323;  */

void FUN_1018ea31c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001018ea320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018ea324; end: 1018ea3a3;  */

/* WARNING: Possible PIC construction at 0x0001018ea388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018ea38c) */

void FUN_1018ea324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5fadc(param_3,param_4);
  if (param_5 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c5fc48(param_5,uVar1);
  }
  func_0x0001054790c8(param_1,param_2,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018ea3a4; end: 1018ea507; -[_TtC38AdPublicStoryPersistenceImplementation42AdPublicStoryContentViewHistoryCoordinator updatePublicStoryContentViewHistoryForProfileId:contentViewTimeSinceLastAdSeconds:contentOpenTimestampSinceLastAdSeconds:completionHandler:] */

void FUN_1018ea3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040ee78;
  func_0x000107c613fc(&UNK_11040ee78,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040eea0;
  func_0x000107c613fc(&UNK_11040eea0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d992410;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040eec8;
  func_0x000107c613fc(&UNK_11040eec8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d992420;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_2);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&UNK_10d992430,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018ea508; end: 1018ea5b3;  */

void FUN_1018ea508(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  long *plVar3;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  *(long *)(unaff_x22 + 0x18) = param_5;
  lVar2 = param_3;
  func_0x000107c5faec();
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c5fc54(param_3,uVar1);
  }
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(long *)(unaff_x22 + 0x28) = lVar2;
  plVar3 = (long *)0xb0;
  func_0x000107c6157c(param_5);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1018ea5b4;
  plVar3[0x13] = param_3;
  plVar3[0x14] = param_5;
  plVar3[0x12] = param_1;
  plVar3[0x10] = param_2;
  plVar3[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ea14c,0,0);
  return;
}



/* Entry: 1018ea5b4; end: 1018ea623;  */

void FUN_1018ea5b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  lVar6 = *(long *)(lVar4 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x30));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
  (**(code **)(lVar6 + 0x10))(lVar6);
                    /* WARNING: Could not recover jumptable at 0x0001018ea620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 1018ea624; end: 1018ea66f;  */

void FUN_1018ea624(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018ea670; end: 1018ea6f3;  */

void FUN_1018ea670(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  long lVar8;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1018eaad0;
  plVar3[2] = lVar4;
  plVar3[3] = lVar6;
  lVar4 = lVar2;
  func_0x000107c5faec();
  if (lVar2 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c5fc54(lVar2,uVar1);
  }
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar7 = (long *)0xb0;
  func_0x000107c6157c(lVar6);
  func_0x000107c615b8();
  plVar3[6] = (long)plVar7;
  *plVar7 = (long)plVar3;
  plVar7[1] = (long)FUN_1018ea5b4;
  plVar7[0x13] = lVar2;
  plVar7[0x14] = lVar6;
  plVar7[0x12] = lVar8;
  plVar7[0x10] = lVar5;
  plVar7[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ea14c,0,0);
  return;
}



/* Entry: 1018ea6f4; end: 1018ea76b;  */

void FUN_1018ea6f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eaac4;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ea76c; end: 1018ea7a7;  */

void FUN_1018ea76c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018ea7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018ea7a8; end: 1018ea82b;  */

void FUN_1018ea7a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eaacc;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ea82c; end: 1018ea86b;  */

void FUN_1018ea82c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018ea868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018ea86c; end: 1018ea89f;  */

/* WARNING: Possible PIC construction at 0x0001018ea388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018ea38c) */

void FUN_1018ea86c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  if (lVar3 != 0) {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c5fc48(lVar3,uVar2);
  }
  func_0x0001054790c8(uVar4,param_1,uVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1018ea8a0; end: 1018ea90b;  */

void FUN_1018ea8a0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1018ea90c;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar4;
  func_0x000107c5fc54(lVar2,PTR___sSSN_11034da80);
  plVar3[0xd] = lVar2;
  func_0x000107c6157c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ea014,0,0);
  return;
}



/* Entry: 1018ea90c; end: 1018ea947;  */

void FUN_1018ea90c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018ea944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018ea948; end: 1018ea9bf;  */

void FUN_1018ea948(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eaad4;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ea9c0; end: 1018ea9eb;  */

void FUN_1018ea9c0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018ea9ec; end: 1018eaa6f;  */

void FUN_1018ea9ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eaad8;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018eaa70; end: 1018eaa77;  */

void FUN_1018eaa70(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
  func_0x000105478d84(param_1,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c3e1b8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar4 = 0;
    func_0x000103e0eaec(0);
    lVar5 = lVar3;
    func_0x000107c5fc54(lVar3,uVar4);
    func_0x000107c61170(lVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    *(long *)(lVar1 + 0x10) = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018e9e7c);
  (*pcVar2)();
}



/* Entry: 1018eaa78; end: 1018eaaab;  */

void FUN_1018eaa78(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) =
       *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1018eaaac; end: 1018eaadb;  */

void FUN_1018eaaac(long param_1,long param_2)

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



/* Entry: 1018eaadc; end: 1018eab6f;  */

void FUN_1018eaadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1018eab70; end: 1018eab77;  */

/* WARNING: Possible PIC construction at 0x0001018eab58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018eab5c) */

void FUN_1018eab70(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x0001018ea650();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1018eab78; end: 1018eab93;  */

/* WARNING: Possible PIC construction at 0x0001018eab84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018eab88) */

void FUN_1018eab78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018eab94; end: 1018eabdf;  */

void FUN_1018eab94(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018eabe0; end: 1018eacd7;  */

void FUN_1018eabe0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c421c8();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar3 = &UNK_11040f0d0;
  func_0x000107c613fc(&UNK_11040f0d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112dd12c0,&UNK_10d992470);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  pcVar4 = FUN_1018eacd8;
  func_0x0001000bdd8c(FUN_1018eacd8,puVar3);
  uVar5 = 0;
  func_0x0001001f5a74(0);
  func_0x000107c610f8();
  func_0x00010071a088(pcVar4,uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1018eacd8; end: 1018eacdb;  */

/* WARNING: Possible PIC construction at 0x0001018eab58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018eab5c) */

void FUN_1018eacd8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x0001018ea650();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1018eacdc; end: 1018eaeef;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018eacdc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  double dVar12;
  long alStack_b8 [6];
  undefined1 auStack_88 [40];
  
  FUN_1018eaef0(alStack_b8 + 1);
  if (alStack_b8[4] == 0) {
    func_0x0001018eb3b0(alStack_b8 + 1,0x112dd1450,&UNK_10d992548);
    lVar7 = 0;
    ppuVar9 = (undefined **)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000100cbe5bc(alStack_b8 + 1,auStack_88);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
    plVar2 = (long *)(unaff_x20 + 0x20);
    func_0x0001000a8868(plVar2,*(undefined8 *)(unaff_x20 + 0x38));
    uVar3 = *(undefined8 *)(*plVar2 + _DAT_112dd15d0);
    lVar7 = ((undefined8 *)(*plVar2 + _DAT_112dd15d0))[1];
    func_0x000107c614f0(uVar3);
    alStack_b8[1] = 0xd00000000000002f;
    alStack_b8[2] = 0x800000010efbfd80;
    alStack_b8[3] = 2000;
    pcVar11 = *(code **)(lVar7 + 8);
    func_0x000107c615f0(uVar10);
    (*pcVar11)(alStack_b8,alStack_b8 + 1,&UNK_110738448,&PTR_DAT_11304a4e0,uVar3,lVar7);
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar12 = (double)alStack_b8[0];
    func_0x000107c4cec4();
    puVar4 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = PTR_PTR_1126b46f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = PTR_PTR_1126b46f0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar7 = 0;
    FUN_1018f3c64();
    lVar8 = lVar7;
    func_0x000107c613fc();
    *(undefined1 *)(lVar8 + 0x10) = 0;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1818);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112dd1820);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    func_0x0001018eb328(auStack_88,lVar8 + 0x18);
    *(undefined8 *)(lVar8 + 0x40) = uVar10;
    *(undefined **)(lVar8 + 0x48) = puVar4;
    func_0x0001018eb36c(param_2,lVar8 + _DAT_112dd17f8);
    *(double *)(lVar8 + _DAT_112dd1800) = dVar12;
    *(undefined **)(lVar8 + _DAT_112dd1808) = puVar5;
    *(undefined **)(lVar8 + _DAT_112dd1810) = puVar6;
    *param_1 = lVar8;
    func_0x0001000834e4(auStack_88);
    ppuVar9 = &PTR_DAT_11040f580;
  }
  param_1[3] = lVar7;
  param_1[4] = (long)ppuVar9;
  return;
}



/* Entry: 1018eaef0; end: 1018eb2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018eaef0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *apuStack_98 [2];
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar4 = 2;
  func_0x000100029b9c(2,0x11,4,0);
  if ((int)lVar4 != 0) {
    lVar5 = 0;
    func_0x000100b92390();
    lVar11 = *(long *)(lVar5 + -8);
    apuStack_98[1] = &stack0xffffffffffffff60;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
    lVar8 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    puVar9 = (undefined8 *)((long)alStack_88 + lVar8 + -0x18);
    lVar4 = 0x112dd1458;
    func_0x0001000285a8(0x112dd1458,&UNK_10d992550);
    apuStack_98[0] = (undefined1 *)puVar9;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar4 = (long)puVar9 - extraout_x8_00;
    lVar6 = 0x112dd1460;
    func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar12 = lVar4 - extraout_x8_01;
    lVar6 = 0;
    func_0x000100b92084();
    func_0x0001018eb434(param_2 + *(int *)(lVar6 + 0x1c),lVar12,0x112dd1460,&UNK_10d9925f0);
    lVar7 = 0;
    func_0x000100b92194();
    lVar6 = lVar12;
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar12,1,lVar7);
    if ((int)lVar6 == 1) {
      func_0x0001018eb3b0(lVar12,0x112dd1460,&UNK_10d9925f0);
      (**(code **)(lVar11 + 0x38))(lVar4,1,1,lVar5);
    }
    else {
      func_0x0001018eb434(lVar12 + *(int *)(lVar7 + 0x18),lVar4,0x112dd1458,&UNK_10d992550);
      func_0x0001018eb47c(lVar12,&SUB_100b92194);
      lVar6 = lVar4;
      (**(code **)(lVar11 + 0x30))(lVar4,1,lVar5);
      if ((int)lVar6 != 1) {
        func_0x0001018eb3f0(lVar4,puVar9);
        uVar10 = *puVar9;
        uVar2 = *(undefined8 *)((long)apuStack_98 + lVar8);
        iVar3 = *(int *)(lVar5 + 0x14);
        lVar6 = 0;
        FUN_1018f10dc();
        lVar4 = lVar6;
        func_0x000107c613fc();
        ppuStack_68 = &PTR_DAT_11040f568;
        lVar8 = 0;
        alStack_88[0] = lVar4;
        lStack_70 = lVar6;
        func_0x0001018f1f84();
        lVar4 = lVar8;
        func_0x000107c613fc();
        puVar1 = (undefined8 *)(lVar4 + _DAT_112dd16c8);
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[4] = 0;
        func_0x0001018eb36c(param_2,lVar4 + _DAT_112dd16a8);
        puVar1 = (undefined8 *)(lVar4 + _DAT_112dd16b0);
        *puVar1 = uVar10;
        puVar1[1] = uVar2;
        func_0x0001018eb434((long)puVar9 + (long)iVar3,lVar4 + _DAT_112dd16b8,0x112d36580,
                            &UNK_10d9016d0);
        func_0x000100cbe5bc(alStack_88,lVar4 + _DAT_112dd16c0);
        param_1[3] = lVar8;
        param_1[4] = (long)&PTR_DAT_11040f520;
        *param_1 = lVar4;
        func_0x000107c61434(uVar2);
        func_0x0001018eb47c(puVar9,&SUB_100b92390);
        return;
      }
    }
    func_0x0001018eb3b0(lVar4,0x112dd1458,&UNK_10d992550);
  }
  FUN_1018f014c();
  if (lVar4 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar8 = 0;
    func_0x0001018f4b78();
    lVar6 = lVar8;
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x10) = uVar10;
    ppuStack_68 = &PTR_DAT_11040f790;
    lVar5 = 0;
    alStack_88[0] = lVar6;
    lStack_70 = lVar8;
    func_0x0001018f4cc4();
    lVar6 = lVar5;
    func_0x000107c613fc();
    *(long *)(lVar6 + 0x10) = lVar4;
    func_0x0001018eb36c(param_2,lVar6 + _DAT_112dd19c8);
    func_0x000100cbe5bc(alStack_88,lVar6 + _DAT_112dd19d0);
    param_1[3] = lVar5;
    param_1[4] = (long)&PTR_DAT_11040f748;
    *param_1 = lVar6;
    func_0x000107c615f0(uVar10);
  }
  return;
}



/* Entry: 1018eb2d4; end: 1018eb307;  */

void FUN_1018eb2d4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018eb308; end: 1018eb4b7;  */

void FUN_1018eb308(void)

{
  FUN_1018eacdc();
  return;
}



/* Entry: 1018eb4b8; end: 1018eb4ff;  */

void FUN_1018eb4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1018eb500; end: 1018eb523;  */

/* WARNING: Possible PIC construction at 0x0001018eb50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018eb510) */

void FUN_1018eb500(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018eb524; end: 1018eb59b;  */

void FUN_1018eb524(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018eb59c; end: 1018eb5bb; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker configProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018eb59c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112dd1550));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018eb5bc; end: 1018eb823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018eb5bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  long alStack_b0 [2];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  lVar3 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar8 = auStack_d0 + lVar3;
  lVar4 = 0;
  func_0x000100b92084();
  FUN_1018ef69c(param_2 + *(int *)(lVar4 + 0x1c),puVar8,0x112dd1460,&UNK_10d9925f0);
  lVar4 = 0;
  func_0x000100b92194();
  puVar5 = puVar8;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar8,1,lVar4);
  if ((int)puVar5 == 1) {
    func_0x0001018ef6e4(puVar8,0x112dd1460,&UNK_10d9925f0);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    return;
  }
  lVar4 = *(long *)((long)alStack_b0 + lVar3);
  uVar2 = *(ulong *)((long)alStack_b0 + lVar3 + 8);
  func_0x000107c61434(uVar2);
  func_0x0001018ef724(puVar8,&SUB_100b92194);
  lVar3 = _DAT_112dd1560;
  func_0x000107c61428(unaff_x20 + _DAT_112dd1560,auStack_a0,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    lVar6 = lVar4;
    uVar7 = uVar2;
    func_0x000100029284(lVar4);
    if ((uVar7 & 1) != 0) {
      FUN_1018ee4dc(*(long *)(lVar9 + 0x38) + lVar6 * 0x28,auStack_c8);
      FUN_1018ee58c(auStack_c8,auStack_88);
      func_0x000107c614a8(auStack_a0);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(lVar9);
      goto LAB_1018eb7c8;
    }
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c614a8(auStack_a0);
  lVar9 = unaff_x20 + _DAT_112dd1548;
  uVar1 = *(undefined8 *)(lVar9 + 0x18);
  lVar6 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar1);
  (**(code **)(lVar6 + 8))(auStack_c8,param_2,uVar1,lVar6);
  if (alStack_b0[0] == 0) {
    func_0x000107c6142c(uVar2);
    func_0x0001018ef6e4(auStack_c8,0x112dd15a0,&UNK_10d9925d8);
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  FUN_1018ee58c(auStack_c8,auStack_88);
  FUN_1018ee4dc(auStack_88,auStack_c8);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_a0,0x21,0);
  FUN_1018eb824(auStack_c8,lVar4,uVar2);
  func_0x000107c614a8(auStack_a0);
LAB_1018eb7c8:
  FUN_1018ee58c(auStack_88,param_1);
  return;
}



/* Entry: 1018eb824; end: 1018eb907;  */

void FUN_1018eb824(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  lStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  if (lStack_78 == 0) {
    func_0x0001018ef6e4(&uStack_90,0x112dd15a0,&UNK_10d9925d8);
    FUN_1018ee5e8(auStack_68,param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x0001018ef6e4(auStack_68,0x112dd15a0,&UNK_10d9925d8);
  }
  else {
    FUN_1018ee58c(&uStack_90,auStack_68);
    uVar1 = *unaff_x20;
    func_0x000107c61558(uVar1);
    uStack_90 = *unaff_x20;
    FUN_1018ee6c0(auStack_68,param_2,param_3,uVar1);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_90;
  }
  return;
}



/* Entry: 1018eb908; end: 1018ebbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018eb908(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar9 = auStack_c0 + lVar4;
  FUN_1018eb5bc(auStack_b0,param_2);
  if (alStack_a0[1] == 0) {
    func_0x0001018ef6e4(auStack_b0,0x112dd15a0,&UNK_10d9925d8);
  }
  else {
    FUN_1018ee58c(auStack_b0,auStack_88);
    lVar6 = lStack_68;
    uVar5 = uStack_70;
    func_0x0001000a8868(auStack_88,uStack_70);
    (**(code **)(lVar6 + 0x50))(uVar5,lVar6);
    uVar1 = (uint)uVar5 & 0xff;
    if (uVar1 == 1 || (uVar5 & 0xff) == 0) {
      if ((uVar5 & 0xff) == 0) {
        func_0x0001000a8868(auStack_88,uStack_70);
        (**(code **)(lStack_68 + 8))(param_3,uStack_70,lStack_68);
        lVar6 = 0;
        func_0x000100b92084();
        FUN_1018ef69c(param_2 + *(int *)(lVar6 + 0x1c),puVar9,0x112dd1460,&UNK_10d9925f0);
        lVar6 = 0;
        func_0x000100b92194();
        puVar7 = puVar9;
        (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar9,1,lVar6);
        if ((int)puVar7 == 1) {
          func_0x0001018ef6e4(puVar9,0x112dd1460,&UNK_10d9925f0);
        }
        else {
          uVar2 = *(undefined8 *)((long)alStack_a0 + lVar4);
          uVar3 = *(undefined8 *)((long)alStack_a0 + lVar4 + 8);
          func_0x000107c61434(uVar3);
          func_0x0001018ef724(puVar9,&SUB_100b92194);
          func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112dd1558));
          lVar4 = _DAT_112dd1570;
          func_0x000107c61428(unaff_x20 + _DAT_112dd1570,auStack_b0,0x21,0);
          uVar8 = *(undefined8 *)(unaff_x20 + lVar4);
          func_0x000107c61558(uVar8);
          uStack_b8 = *(undefined8 *)(unaff_x20 + lVar4);
          *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
          FUN_1018ee7e8(param_1,0,0,1,uVar2,uVar3,uVar8);
          func_0x000107c6142c(uVar3);
          *(undefined8 *)(unaff_x20 + lVar4) = uStack_b8;
          func_0x000107c614a8(auStack_b0);
        }
      }
      else if ((param_4 & 1) != 0) {
        func_0x0001000a8868(auStack_88,uStack_70);
        (**(code **)(lStack_68 + 0x10))(param_3,uStack_70,lStack_68);
        FUN_1018ebbc4(auStack_88,param_2);
        FUN_1018eb908(param_2,param_3,1);
      }
    }
    else if (uVar1 == 2) {
      func_0x0001000a8868(auStack_88,uStack_70);
      (**(code **)(lStack_68 + 0x18))(param_3,uStack_70,lStack_68);
    }
    func_0x0001000834e4(auStack_88);
  }
  return;
}



/* Entry: 1018ebbc4; end: 1018ebe33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ebbc4(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar9 = auStack_88 + lVar2 + -8;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar6);
  (**(code **)(lVar3 + 0x50))(uVar6,lVar3);
  if (((uint)uVar6 & 0xff) != 3) {
    return;
  }
  lVar3 = 0;
  func_0x000100b92084();
  FUN_1018ef69c(param_3 + *(int *)(lVar3 + 0x1c),puVar9,0x112dd1460,&UNK_10d9925f0);
  lVar3 = 0;
  func_0x000100b92194();
  puVar4 = puVar9;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar9,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x0001018ef6e4(puVar9,0x112dd1460,&UNK_10d9925f0);
  }
  else {
    lVar3 = *(long *)(&stack0xffffffffffffff90 + lVar2);
    uVar1 = *(ulong *)(&stack0xffffffffffffff98 + lVar2);
    func_0x000107c61434(uVar1);
    func_0x0001018ef724(puVar9,&SUB_100b92194);
    lVar2 = _DAT_112dd1570;
    func_0x000107c61428(unaff_x20 + _DAT_112dd1570,auStack_88,0x20,0);
    lVar8 = *(long *)(unaff_x20 + lVar2);
    if (*(long *)(lVar8 + 0x10) != 0) {
      func_0x000107c61434(lVar8);
      lVar5 = lVar3;
      uVar7 = uVar1;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + lVar5 * 0x20);
        func_0x000107c614a8(auStack_88);
        func_0x000107c6142c(lVar8);
        func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112dd1558));
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        lVar8 = *(long *)(param_2 + 0x20);
        uVar10 = param_1;
        func_0x0001000a8868(param_2,uVar6);
        (**(code **)(lVar8 + 0x48))(uVar6,lVar8);
        func_0x000107c61428(unaff_x20 + lVar2,auStack_88,0x21,0);
        uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
        func_0x000107c61558(uVar6);
        uStack_90 = *(undefined8 *)(unaff_x20 + lVar2);
        *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
        FUN_1018ee7e8(uVar11,uVar10,param_1,0,lVar3,uVar1,uVar6);
        func_0x000107c6142c(uVar1);
        *(undefined8 *)(unaff_x20 + lVar2) = uStack_90;
        func_0x000107c614a8(auStack_88);
        goto LAB_1018ebe04;
      }
      func_0x000107c6142c(lVar8);
    }
    func_0x000107c614a8(auStack_88);
    func_0x000107c6142c(uVar1);
  }
LAB_1018ebe04:
  FUN_1018ebe34(param_3);
  return;
}



/* Entry: 1018ebe34; end: 1018ec057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ebe34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  ulong uVar10;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  long alStack_90 [5];
  undefined1 auStack_68 [40];
  
  lVar2 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  plVar6 = (long *)((long)&lStack_b0 + lVar2);
  lVar3 = 0;
  func_0x000100b92084();
  FUN_1018ef69c(param_1 + *(int *)(lVar3 + 0x1c),plVar6,0x112dd1460,&UNK_10d9925f0);
  lVar3 = 0;
  func_0x000100b92194();
  plVar4 = plVar6;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(plVar6,1,lVar3);
  if ((int)plVar4 == 1) {
    uVar8 = 0x112dd1460;
    puVar9 = &UNK_10d9925f0;
  }
  else {
    uVar8 = *(undefined8 *)((long)alStack_90 + lVar2);
    uVar1 = *(undefined8 *)((long)alStack_90 + lVar2 + 8);
    func_0x000107c61434(uVar1);
    func_0x0001018ef724(plVar6,&SUB_100b92194);
    func_0x000107c61428(unaff_x20 + _DAT_112dd1560,auStack_a8,0x21,0);
    FUN_1018ee5e8(alStack_90,uVar8,uVar1);
    func_0x000107c614a8(auStack_a8);
    func_0x000107c6142c(uVar1);
    if (alStack_90[3] != 0) {
      FUN_1018ee58c(alStack_90,auStack_68);
      FUN_1018ee4dc(auStack_68,alStack_90);
      lVar2 = _DAT_112dd1568;
      func_0x000107c61428(unaff_x20 + _DAT_112dd1568,auStack_a8,0x21,0);
      uVar10 = *(ulong *)(unaff_x20 + lVar2);
      uVar5 = uVar10;
      func_0x000107c61558();
      *(ulong *)(unaff_x20 + lVar2) = uVar10;
      uVar7 = uVar10;
      if ((uVar5 & 1) == 0) {
        uVar7 = 0;
        FUN_1018ef3e4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        *(ulong *)(unaff_x20 + lVar2) = uVar7;
      }
      uVar5 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_1018ef3e4(uVar10,uVar5 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
      FUN_1018ee58c(alStack_90,uVar10 + uVar5 * 0x28 + 0x20);
      *(ulong *)(unaff_x20 + lVar2) = uVar10;
      func_0x000107c614a8(auStack_a8);
      func_0x0001000834e4(auStack_68);
      return;
    }
    uVar8 = 0x112dd15a0;
    puVar9 = &UNK_10d9925d8;
    plVar6 = alStack_90;
  }
  func_0x0001018ef6e4(plVar6,uVar8,puVar9);
  return;
}



/* Entry: 1018ec058; end: 1018ec34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ec058(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  long alStack_b0 [5];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar8 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = -extraout_x8;
  puVar7 = auStack_d0 + lVar8;
  lVar2 = 0;
  func_0x000100b92084();
  FUN_1018ef69c(param_2 + *(int *)(lVar2 + 0x1c),puVar7,0x112dd1460,&UNK_10d9925f0);
  lVar2 = 0;
  func_0x000100b92194();
  puVar3 = puVar7;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar7,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001018ef6e4(puVar7,0x112dd1460,&UNK_10d9925f0);
    return;
  }
  lVar2 = *(long *)((long)alStack_b0 + lVar8);
  uVar1 = *(ulong *)((long)alStack_b0 + lVar8 + 8);
  func_0x000107c61434(uVar1);
  func_0x0001018ef724(puVar7,&SUB_100b92194);
  lVar8 = _DAT_112dd1560;
  func_0x000107c61428(unaff_x20 + _DAT_112dd1560,alStack_b0 + 2,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_1018ec2f8:
    func_0x000107c614a8(alStack_b0 + 2);
    func_0x000107c6142c(uVar1);
    return;
  }
  func_0x000107c61434(lVar8);
  lVar9 = lVar2;
  uVar6 = uVar1;
  func_0x000100029284(lVar2);
  if ((uVar6 & 1) == 0) {
    func_0x000107c6142c(lVar8);
    goto LAB_1018ec2f8;
  }
  FUN_1018ee4dc(*(long *)(lVar8 + 0x38) + lVar9 * 0x28,auStack_c8);
  FUN_1018ee58c(auStack_c8,auStack_88);
  func_0x000107c614a8(alStack_b0 + 2);
  func_0x000107c6142c(lVar8);
  lVar8 = lStack_68;
  uVar10 = uStack_70;
  func_0x0001000a8868(auStack_88,uStack_70);
  (**(code **)(lVar8 + 0x20))(param_3,uVar10,lVar8);
  func_0x0001000a8868(auStack_88,uStack_70);
  (**(code **)(lStack_68 + 0x48))(uStack_70,lStack_68);
  uVar10 = param_1;
  FUN_1018ebe34(param_2);
  lVar8 = _DAT_112dd1570;
  func_0x000107c61428(unaff_x20 + _DAT_112dd1570,auStack_c8,0x20,0);
  lVar9 = *(long *)(unaff_x20 + lVar8);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    lVar4 = lVar2;
    uVar6 = uVar1;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + lVar4 * 0x20);
      func_0x000107c614a8(auStack_c8);
      func_0x000107c6142c(lVar9);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112dd1558));
      func_0x000107c61428(unaff_x20 + lVar8,auStack_c8,0x21,0);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
      func_0x000107c61558(uVar5);
      alStack_b0[2] = *(undefined8 *)(unaff_x20 + lVar8);
      *(undefined8 *)(unaff_x20 + lVar8) = 0x8000000000000000;
      FUN_1018ee7e8(uVar11,param_1,uVar10,0,lVar2,uVar1,uVar5);
      func_0x000107c6142c(uVar1);
      *(long *)(unaff_x20 + lVar8) = alStack_b0[2];
      func_0x000107c614a8(auStack_c8);
      goto LAB_1018ec324;
    }
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c614a8(auStack_c8);
  func_0x000107c6142c(uVar1);
LAB_1018ec324:
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 1018ec34c; end: 1018ec57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ec34c(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = _DAT_112dd1570;
  func_0x000107c61428(unaff_x20 + _DAT_112dd1570,&uStack_b0,0x20,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    lVar7 = param_2;
    uVar6 = param_3;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + lVar7 * 0x20);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = (ulong)*(byte *)(puVar1 + 2);
      uVar8 = puVar1[3];
      func_0x000107c614a8(&uStack_b0);
      func_0x000107c6142c(lVar3);
      lVar3 = _DAT_112dd1560;
      func_0x000107c61428(unaff_x20 + _DAT_112dd1560,auStack_88,0x20,0);
      lVar3 = *(long *)(unaff_x20 + lVar3);
      if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1018ec518:
        lStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
LAB_1018ec524:
        func_0x0001018ef6e4(&uStack_b0,0x112dd15a0,&UNK_10d9925d8);
        func_0x000107c614a8(auStack_88);
      }
      else {
        func_0x000107c61434(lVar3);
        func_0x000100029284(param_2);
        if ((param_3 & 1) == 0) {
          func_0x000107c6142c(lVar3);
          goto LAB_1018ec518;
        }
        FUN_1018ee4dc(*(long *)(lVar3 + 0x38) + param_2 * 0x28,&uStack_b0);
        func_0x000107c6142c(lVar3);
        if (lStack_98 == 0) goto LAB_1018ec524;
        func_0x0001000a8868(&uStack_b0,lStack_98);
        lVar7 = *(long *)(lStack_98 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
        lVar3 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar7 + 0x10))(lVar3);
        func_0x0001018ef6e4(&uStack_b0,0x112dd15a0,&UNK_10d9925d8);
        func_0x000107c614a8(auStack_88);
        (**(code **)(lStack_90 + 0x48))(lStack_98,lStack_90);
        uVar8 = CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0)))))));
        (**(code **)(lVar7 + 8))(lVar3,lStack_98);
      }
      uVar2 = 0;
      goto LAB_1018ec548;
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c614a8(&uStack_b0);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar2 = 1;
  uVar8 = 0;
LAB_1018ec548:
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar8;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}



/* Entry: 1018ec57c; end: 1018ec5eb;  */

void FUN_1018ec57c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ec5ec,uVar1,uVar2);
  return;
}



/* Entry: 1018ec5ec; end: 1018ec65f;  */

void FUN_1018ec5ec(undefined8 *param_1)

{
  func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1018ec624,*param_1,0);
  return;
}



/* Entry: 1018ec660; end: 1018ec773;  */

void FUN_1018ec660(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(unaff_x22 + 0x50) == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x60);
    func_0x0001018ef6e4(unaff_x22 + 0x38,0x112dd15a0,&UNK_10d9925d8);
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
    lVar3 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,uVar2);
    func_0x0001030beda8();
    *(long *)(unaff_x22 + 0xa0) = lVar5;
    piVar4 = *(int **)(lVar3 + 8);
    plVar1 = (long *)(ulong)(uint)piVar4[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar4 + (long)piVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1018ec808;
  }
  else {
    FUN_1018ee58c(unaff_x22 + 0x38,unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
    piVar4 = *(int **)(lVar3 + 0x30);
    plVar1 = (long *)(ulong)(uint)piVar4[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar4 + (long)piVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1018ec774;
    lVar5 = *(long *)(unaff_x22 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x0001018ec770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar5,uVar2,lVar3);
  return;
}



/* Entry: 1018ec774; end: 1018ec7cb;  */

void FUN_1018ec774(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018ec7cc;
  }
  else {
    pcVar1 = (code *)0x1018ec8d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x80),*(undefined8 *)(lVar2 + 0x88));
  return;
}



/* Entry: 1018ec7cc; end: 1018ec807;  */

void FUN_1018ec7cc(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001018ec804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018ec808; end: 1018ec86f;  */

void FUN_1018ec808(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa8));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1018ec870;
  }
  else {
    pcVar2 = (code *)0x1018ec8a4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar2,*(undefined8 *)(lVar3 + 0x80),*(undefined8 *)(lVar3 + 0x88));
  return;
}



/* Entry: 1018ec870; end: 1018ec95f;  */

void FUN_1018ec870(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001018ec8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018ec960; end: 1018eca67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ec960(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x68) + _DAT_112dd1548;
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  lVar5 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar4);
  (**(code **)(lVar5 + 8))(unaff_x22 + 0x38,uVar3,uVar4,lVar5);
  if (*(long *)(unaff_x22 + 0x50) != 0) {
    FUN_1018ee58c(unaff_x22 + 0x38,unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
    piVar7 = *(int **)(lVar1 + 0x38);
    iVar2 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1018eca68;
                    /* WARNING: Could not recover jumptable at 0x0001018eca24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar7))(uVar3,lVar1);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x0001018ef6e4(unaff_x22 + 0x38,0x112dd15a0,&UNK_10d9925d8);
                    /* WARNING: Could not recover jumptable at 0x0001018eca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1018eca68; end: 1018ecad3;  */

void FUN_1018eca68(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x88) = param_1;
    pcVar1 = FUN_1018ecad4;
  }
  else {
    pcVar1 = (code *)0x1018ecb14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x70),0);
  return;
}



/* Entry: 1018ecad4; end: 1018ecb4f;  */

void FUN_1018ecad4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001018ecb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 1018ecb50; end: 1018ecbaf; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker init] */

void FUN_1018ecb50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AppImpressionServicesImplementation.AppImpressionTracker",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018ecb7c);
  (*pcVar1)();
}



/* Entry: 1018ecbb0; end: 1018ecc4b; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018ecbfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018ecc00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ecbb0(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112dd1548);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd1550));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dd1558));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dd1560));
  return;
}



/* Entry: 1018ecc4c; end: 1018ecd03;  */

void FUN_1018ecc4c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_1018eb5bc(auStack_90);
  if (lStack_78 == 0) {
    func_0x0001018ef6e4(auStack_90,0x112dd15a0,&UNK_10d9925d8);
  }
  else {
    FUN_1018ee58c(auStack_90,auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 0x10))(param_2,uStack_50,lStack_48);
    FUN_1018ebbc4(auStack_68,param_1);
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 1018ecd04; end: 1018ecd23;  */

void FUN_1018ecd04(void)

{
  FUN_1018ec058();
  return;
}



/* Entry: 1018ecd24; end: 1018ecd97;  */

void FUN_1018ecd24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = *unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ecd98,uVar1,uVar2);
  return;
}



/* Entry: 1018ecd98; end: 1018ece17;  */

void FUN_1018ecd98(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = 0;
  FUN_1018ee5a4();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined ***)(unaff_x22 + 0x30) = &PTR_DAT_11040f850;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  plVar5 = (long *)0xc0;
  func_0x000107c61174(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1018ece18;
  lVar2 = *(long *)(unaff_x22 + 0x48);
  plVar5[0xd] = *(long *)(unaff_x22 + 0x40);
  plVar5[0xe] = lVar2;
  plVar5[0xc] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar5[0xf] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x10] = lVar1;
  plVar5[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ec5ec,lVar1,lVar2);
  return;
}



/* Entry: 1018ece18; end: 1018ece7b;  */

void FUN_1018ece18(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x68));
  if (unaff_x20 == 0) {
    func_0x0001000834e4(lVar4 + 0x10);
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_1018ece7c;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = (code *)0x1018eceb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1018ece7c; end: 1018eceeb;  */

void FUN_1018ece7c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001018eceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018eceec; end: 1018ecf3b;  */

void FUN_1018eceec(long *param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1018ecf3c;
  plVar1[0xc] = (long)param_1;
  plVar1[0xd] = lVar2;
  func_0x0001041e66ac();
  lVar2 = *param_1;
  plVar1[0xe] = lVar2;
  func_0x000107c6157c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ec960,lVar2,0);
  return;
}



/* Entry: 1018ecf3c; end: 1018ecf83;  */

void FUN_1018ecf3c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018ecf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


