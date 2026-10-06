/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10308f884; end: 10308f9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308f884(double param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_58;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f38988));
  pdVar1 = (double *)(unaff_x20 + _DAT_112f38998);
  *pdVar1 = param_1 * 1000.0;
  *(undefined1 *)(pdVar1 + 1) = 0;
  func_0x0001000d224c(&uStack_58);
  lVar7 = *(long *)(unaff_x20 + _DAT_112f38980);
  puVar2 = (undefined8 *)(*(long *)(lVar7 + _DAT_113067480) + _DAT_113067da0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  lVar3 = _DAT_113067470;
  uVar5 = *(undefined8 *)(lVar7 + _DAT_113067470);
  func_0x000107c61174(uVar5);
  func_0x000104191a9c();
  func_0x000107c61170(uVar5);
  uVar6 = *(undefined8 *)(lVar7 + lVar3);
  func_0x000107c61174(uVar6);
  uVar5 = uVar6;
  func_0x000104191b2c();
  func_0x000107c61170(uVar6);
  FUN_10308f63c();
  func_0x000107c4ba24(uStack_58);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10308f9d8; end: 10308f9ff; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker trackAttachmentTriggered] */

void FUN_10308f9d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10308f884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10308fa00; end: 10308fb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308fa00(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  lVar6 = *(long *)(unaff_x20 + _DAT_112f38980);
  puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_113067480) + _DAT_113067da0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  lVar2 = _DAT_113067470;
  uVar4 = *(undefined8 *)(lVar6 + _DAT_113067470);
  func_0x000107c61174(uVar4);
  func_0x000104191a9c();
  func_0x000107c61170(uVar4);
  uVar5 = *(undefined8 *)(lVar6 + lVar2);
  func_0x000107c61174(uVar5);
  uVar4 = uVar5;
  func_0x000104191b2c();
  func_0x000107c61170(uVar5);
  FUN_10308f63c();
  func_0x000107c4ba18(uStack_58);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10308fb20; end: 10308fb47; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker trackAttachmentPresented] */

void FUN_10308fb20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10308fa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10308fb48; end: 10308fc83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308fb48(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  lVar6 = *(long *)(unaff_x20 + _DAT_112f38980);
  puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_113067480) + _DAT_113067da0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  lVar2 = _DAT_113067470;
  uVar4 = *(undefined8 *)(lVar6 + _DAT_113067470);
  func_0x000107c61174(uVar4);
  func_0x000104191a9c();
  func_0x000107c61170(uVar4);
  func_0x000107c5ed2c(param_1);
  uVar5 = *(undefined8 *)(lVar6 + lVar2);
  func_0x000107c61174(uVar5);
  uVar4 = uVar5;
  func_0x000104191b2c();
  func_0x000107c61170(uVar5);
  FUN_10308f63c();
  func_0x000107c4ba20(uStack_58);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10308fc84; end: 10308fcd3; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker trackAttachmentPresentFailed:] */

/* WARNING: Possible PIC construction at 0x00010308fcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010308fcc0) */

void FUN_10308fc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10308fb48(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10308fcd4; end: 10308fd2f; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker trackAttachmentDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308fcd4(double param_1,long param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f38988);
  func_0x000107c61174();
  func_0x000107c3ceac(uVar2);
  pdVar1 = (double *)(param_2 + _DAT_112f389a0);
  *pdVar1 = param_1 * 1000.0;
  *(undefined1 *)(pdVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10308fd30; end: 10308fe83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308fd30(double param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_58;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f38988));
  pdVar1 = (double *)(unaff_x20 + _DAT_112f389a8);
  *pdVar1 = param_1 * 1000.0;
  *(undefined1 *)(pdVar1 + 1) = 0;
  func_0x0001000d224c(&uStack_58);
  lVar7 = *(long *)(unaff_x20 + _DAT_112f38980);
  puVar2 = (undefined8 *)(*(long *)(lVar7 + _DAT_113067480) + _DAT_113067da0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  lVar3 = _DAT_113067470;
  uVar5 = *(undefined8 *)(lVar7 + _DAT_113067470);
  func_0x000107c61174(uVar5);
  func_0x000104191a9c();
  func_0x000107c61170(uVar5);
  uVar6 = *(undefined8 *)(lVar7 + lVar3);
  func_0x000107c61174(uVar6);
  uVar5 = uVar6;
  func_0x000104191b2c();
  func_0x000107c61170(uVar6);
  FUN_10308f63c();
  func_0x000107c4ba14(uStack_58);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10308fe84; end: 10308feab; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker trackAttachmentDidDismiss] */

void FUN_10308fe84(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10308fd30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10308feac; end: 10308ffcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10308feac(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  lVar6 = *(long *)(unaff_x20 + _DAT_112f38980);
  puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_113067480) + _DAT_113067da0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  lVar2 = _DAT_113067470;
  uVar4 = *(undefined8 *)(lVar6 + _DAT_113067470);
  func_0x000107c61174(uVar4);
  func_0x000104191a9c();
  func_0x000107c61170(uVar4);
  uVar5 = *(undefined8 *)(lVar6 + lVar2);
  func_0x000107c61174(uVar5);
  uVar4 = uVar5;
  func_0x000104191b2c();
  func_0x000107c61170(uVar5);
  FUN_10308f63c();
  func_0x000107c4ba1c(uStack_58);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10308ffcc; end: 10308fff3; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker trackAttachmentWillDismiss] */

void FUN_10308ffcc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10308feac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10308fff4; end: 103090053; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker init] */

void FUN_10308fff4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdAttachmentHandlerEventTracker",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103090020);
  (*pcVar1)();
}



/* Entry: 103090054; end: 10309009b; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAttachmentHandlerEventTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103090054(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38980));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38988));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38990));
  return;
}



/* Entry: 10309009c; end: 1030900bb;  */

void FUN_10309009c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2908);
  return;
}



/* Entry: 1030900bc; end: 1030902e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030900bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f389e8);
  func_0x0001000d224c(&puStack_a0);
  func_0x000107c5cd80(puStack_a0);
  func_0x000107c615e8(puStack_a0);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f389d8);
  func_0x000107c3d268(*(undefined8 *)(unaff_x20 + _DAT_112f389f8));
  puVar1 = &UNK_110606f30;
  func_0x000107c613fc(&UNK_110606f30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f389e0);
  puVar5 = &UNK_110606f58;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_110606f58,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110606f80;
  func_0x000107c613fc(&UNK_110606f80,0x31,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  puVar3[0x30] = 1;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x103091a70;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1030904a0;
  puStack_88 = &UNK_110606f98;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar3 = puStack_78;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c613fc(&UNK_110606f58,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar3 = &UNK_110606fd0;
  func_0x000107c613fc(&UNK_110606fd0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar5;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  uStack_80 = 0x103091a80;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100ba5314;
  puStack_88 = &UNK_110606fe8;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c42c14(uVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 1030902e4; end: 10309049f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030902e4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0;
  FUN_1030922c0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f38a60) = param_3;
  *(undefined8 *)(lVar5 + _DAT_112f38a68) = param_4;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61174();
  func_0x000107c6157c(param_4);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar3);
  func_0x000107c61428(param_5 + 0x10,auStack_88,1,0);
  uVar8 = *(undefined8 *)(param_5 + 0x10);
  *(long **)(param_5 + 0x10) = plVar6;
  func_0x000107c61174(plVar6);
  func_0x000107c61170(uVar8);
  uVar7 = *(undefined8 *)(param_3 + _DAT_113067470);
  uVar9 = *(undefined8 *)(param_3 + _DAT_113067480);
  func_0x000107c61428(param_6 + 0x10,auStack_a0,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618(param_6);
  uVar1 = *(undefined1 *)(param_3 + _DAT_113067490);
  uVar2 = *(undefined1 *)(param_3 + _DAT_113067498);
  uVar8 = 0;
  func_0x0001041b6180();
  func_0x000107c610f8();
  func_0x000107c61174(plVar6);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(param_2);
  func_0x0001041b5e08(uVar7,plVar6,uVar9,param_2,param_6,uVar1,param_7,uVar2);
  param_1[3] = uVar8;
  func_0x000107c61170(plVar6);
  *param_1 = uVar7;
  return;
}



/* Entry: 1030904a0; end: 1030905bf;  */

void FUN_1030904a0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  FUN_103091b08(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000103091b2c(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1030905c0; end: 103090afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030905c0(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined *puVar17;
  code *pcVar18;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = param_2;
  if (param_3 == 0) {
    func_0x000107c61434();
    goto LAB_1030909c8;
  }
  lVar1 = unaff_x20 + _DAT_112f38a08;
  lVar2 = *(long *)(lVar1 + 0x20);
  FUN_103091b08(lVar1,*(undefined8 *)(lVar1 + 0x18));
  uVar13 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112f389d8) + _DAT_113067470);
  uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f389d8) + _DAT_113067480);
  pcVar18 = *(code **)(lVar2 + 8);
  func_0x000107c61434(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar3 = uVar13;
  (*pcVar18)(uVar13,param_3,uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  uVar13 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar11 = *(ulong *)(uVar13 + 0x10);
  }
  else {
    uVar11 = uVar13;
    if (0x7fffffffffffffff < uVar3) {
      uVar11 = uVar3;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x10309096c);
            (*pcVar18)();
          }
          uVar16 = *(ulong *)(uVar3 + uVar14 * 8 + 0x20);
          func_0x000107c615f0(uVar16);
          puVar12 = PTR__OBJC_CLASS___NSObject_1126b1300;
        }
        else {
          uVar16 = uVar14;
          func_0x0001030b5ba4(uVar14,uVar3);
          puVar12 = PTR__OBJC_CLASS___NSObject_1126b1300;
        }
        PTR__OBJC_CLASS___NSObject_1126b1300 = puVar12;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x103090968);
          (*pcVar18)();
        }
        uVar10 = uVar14 + 1;
        func_0x000107c61168(puVar12);
        uVar4 = uVar16;
        func_0x000107c6148c(uVar16,puVar12);
        if (uVar4 == 0) break;
        puVar5 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar8 < 0)) ||
           (puVar12 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar5 = puVar8;
            }
            func_0x000107c60480(puVar5);
          }
          puVar12 = (undefined *)0x0;
          func_0x000102c3ada8(0,puVar5 + 1,1,puVar8);
        }
        uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar16 + 0x10);
        if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar14) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
          func_0x000102c3ada8(puVar5,uVar14 + 1,1,puVar12);
          uVar16 = (ulong)puVar5 & 0xffffffffffffff8;
          puVar12 = puVar5;
        }
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(ulong *)(uVar16 + 0x10) = uVar14 + 1;
        *(ulong *)(uVar16 + uVar14 * 8 + 0x20) = uVar4;
        puVar8 = puVar12;
        uVar14 = uVar10;
        if (uVar10 == uVar11) goto LAB_103090848;
      }
      func_0x000107c615e8(uVar16);
      uVar14 = uVar14 + 1;
    } while (uVar10 != uVar11);
  }
LAB_103090848:
  func_0x000107c6142c(uVar3);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    if (puVar12 != (undefined *)0x0) goto LAB_103090868;
LAB_10309099c:
    func_0x000107c6142c(puVar8);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar12 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar12 = puVar8;
    }
    func_0x000107c60480();
    if (puVar12 == (undefined *)0x0) goto LAB_10309099c;
LAB_103090868:
    puStack_b0 = puVar5;
    func_0x0001007bbbdc(0,(ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x103090afc);
      (*pcVar18)();
    }
    puVar17 = (undefined *)0x0;
    do {
      puVar5 = puStack_b0;
      if (((ulong)puVar8 & 0xc000000000000001) == 0) {
        puVar6 = *(undefined **)(puVar8 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar17;
        func_0x0001020f3928();
      }
      uVar7 = 0;
      puStack_b8 = puVar6;
      FUN_103091ac8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar15 = uVar7;
      func_0x0001007bbc3c();
      func_0x000107c602d4(&puStack_a8,&puStack_b8,uVar7,uVar15);
      uVar3 = *(ulong *)(puVar5 + 0x10);
      puStack_b0 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
        func_0x0001007bbbdc(1 < *(ulong *)(puVar5 + 0x18),uVar3 + 1,1);
      }
      puVar5 = puStack_b0;
      puVar17 = puVar17 + 1;
      *(ulong *)(puStack_b0 + 0x10) = uVar3 + 1;
      *(code **)(puStack_b0 + uVar3 * 0x28 + 0x40) = pcStack_88;
      *(undefined8 *)(puStack_b0 + uVar3 * 0x28 + 0x28) = uStack_a0;
      *(undefined **)(puStack_b0 + uVar3 * 0x28 + 0x20) = puStack_a8;
      *(undefined **)(puStack_b0 + uVar3 * 0x28 + 0x38) = puStack_90;
      *(undefined **)(puStack_b0 + uVar3 * 0x28 + 0x30) = puStack_98;
    } while (puVar12 != puVar17);
    func_0x000107c6142c(puVar8);
    param_1 = puStack_a8;
  }
  func_0x000100bf13dc(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(puVar5);
LAB_1030909c8:
  func_0x00010403fd94(0);
  func_0x00010403fc54();
  uVar15 = uStack_78;
  if ((double)param_1 <= 0.0) {
    FUN_1030911c0(uStack_78);
    func_0x000107c6142c(uVar15);
  }
  else {
    puVar12 = PTR_PTR_1126e1928;
    func_0x000107c610f8(PTR_PTR_1126e1928);
    func_0x000107c453e4();
    puVar5 = &UNK_110606f58;
    func_0x000107c613fc(&UNK_110606f58,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,unaff_x20);
    uVar15 = uStack_78;
    puVar8 = &UNK_110607020;
    func_0x000107c613fc(&UNK_110607020,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar5;
    *(undefined8 *)(puVar8 + 0x18) = uVar15;
    pcStack_88 = FUN_103091ac0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_110607038;
    ppuVar9 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar5 = puStack_80;
    func_0x000107c61434(uVar15);
    func_0x000107c61574(puVar5);
    func_0x000107c4e528(param_1,puVar12);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c6142c(uVar15);
    func_0x000107c61170(puVar12);
  }
  return;
}



/* Entry: 103090afc; end: 103090b0b; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentHandlerWorkflow adAttachmentPresenterTriggerAttempt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103090afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f389f8),
             PTR_s_adAttachmentPresenterTriggerAtte_11259a180);
  return;
}



/* Entry: 103090b0c; end: 103090b1b; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentHandlerWorkflow adAttachmentPresenterDidTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103090b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f389f8),
             PTR_s_adAttachmentPresenterDidTrigger__11259a160);
  return;
}



/* Entry: 103090b1c; end: 103090b2b; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentHandlerWorkflow adAttachmentPresenterDidLoad:metrics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103090b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f389f8),
             PTR_s_adAttachmentPresenterDidLoad_met_11259a150);
  return;
}



/* Entry: 103090b2c; end: 103090bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103090b2c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 auStack_58 [3];
  
  func_0x0001000d224c(auStack_58);
  func_0x000107c5cd7c(auStack_58[0]);
  func_0x000107c615e8(auStack_58[0]);
  lVar1 = _DAT_113067488;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f389d8);
  func_0x000107c61428(lVar2 + _DAT_113067488,auStack_58,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c3d224();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c3d254(*(undefined8 *)(unaff_x20 + _DAT_112f389f8));
  return;
}



/* Entry: 103090bf4; end: 103090c5f; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentHandlerWorkflow adAttachmentPresenterDidPresent:attachmentMetadata:] */

/* WARNING: Possible PIC construction at 0x000103090c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103090c44) */

void FUN_103090bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103090b2c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103090c60; end: 103090f63;  */

/* WARNING: Possible PIC construction at 0x000103090ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103090dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103090e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103090ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103090f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103090efc) */
/* WARNING: Removing unreachable block (ram,0x000103090e50) */
/* WARNING: Removing unreachable block (ram,0x000103090ea8) */
/* WARNING: Removing unreachable block (ram,0x000103090f60) */
/* WARNING: Removing unreachable block (ram,0x000103090eb0) */
/* WARNING: Removing unreachable block (ram,0x000103090ec4) */
/* WARNING: Removing unreachable block (ram,0x000103090f00) */
/* WARNING: Removing unreachable block (ram,0x000103090f04) */
/* WARNING: Removing unreachable block (ram,0x000103090f14) */
/* WARNING: Removing unreachable block (ram,0x000103090ed8) */
/* WARNING: Removing unreachable block (ram,0x000103090f20) */
/* WARNING: Removing unreachable block (ram,0x000103090ee4) */
/* WARNING: Removing unreachable block (ram,0x000103090dd8) */
/* WARNING: Removing unreachable block (ram,0x000103090ce4) */
/* WARNING: Removing unreachable block (ram,0x000103090f2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103090c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (*(char *)(unaff_x20 + _DAT_112f38a10) == '\x01') {
    if ((*(byte *)(unaff_x20 + _DAT_112f38a28) & 1) != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f38a20);
      pcVar2 = (code *)*puVar1;
      puVar3 = (undefined *)puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      if (pcVar2 == (code *)0x0) {
        return;
      }
      func_0x000107c6157c(puVar3);
      (*pcVar2)();
      if (pcVar2 == (code *)0x0) {
        return;
      }
      goto code_r0x000107c61574;
    }
    *(undefined1 *)(unaff_x20 + _DAT_112f38a28) = 1;
  }
  func_0x000107c3d24c(*(undefined8 *)(unaff_x20 + _DAT_112f389f8),param_2,param_1,param_2,param_3);
  uStack_78 = 0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f389e8);
  puVar3 = &UNK_110606e40;
  func_0x000107c613fc(&UNK_110606e40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 **)(puVar3 + 0x18) = &uStack_78;
  puVar4 = &UNK_110606e68;
  func_0x000107c613fc(&UNK_110606e68,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103091a24;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_88 = FUN_103091a2c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x103091b74;
  puStack_90 = &UNK_110606e80;
  puStack_80 = puVar4;
  func_0x000107c60bc4(&puStack_a8);
  puVar3 = puStack_80;
  func_0x000107c61580(uVar5,2);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 103090f64; end: 1030910d3;  */

void FUN_103090f64(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c5cd74(uStack_38);
  func_0x000107c615e8(uVar2);
  func_0x0001000d224c(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c42038(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  func_0x000107c5c3c8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = *param_3;
  *param_3 = puVar1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030910d4; end: 103091163; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentHandlerWorkflow adAttachmentPresenterDidComplete:result:attachmentMetadata:] */

/* WARNING: Possible PIC construction at 0x000103091138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103091148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309113c) */
/* WARNING: Removing unreachable block (ram,0x00010309114c) */

void FUN_1030910d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103090c60(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103091164; end: 1030911bf;  */

void FUN_103091164(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1030911c0(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030911c0; end: 10309153f;  */

/* WARNING: Possible PIC construction at 0x000103091200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103091460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103091510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103091204) */
/* WARNING: Removing unreachable block (ram,0x000103091230) */
/* WARNING: Removing unreachable block (ram,0x0001030913dc) */
/* WARNING: Removing unreachable block (ram,0x0001030913c0) */
/* WARNING: Removing unreachable block (ram,0x0001030913e0) */
/* WARNING: Removing unreachable block (ram,0x000103091208) */
/* WARNING: Removing unreachable block (ram,0x000103091464) */
/* WARNING: Removing unreachable block (ram,0x000103091514) */
/* WARNING: Removing unreachable block (ram,0x0001030914fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030911c0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_103091540();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f38a18);
  *(undefined8 *)(unaff_x20 + _DAT_112f38a18) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103091540; end: 103091907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103091540(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar12 = (ulong *)(param_1 + 0x38);
  uVar17 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uVar17 < 0x40) {
    uVar15 = ~(-1L << (-uVar17 & 0x3f));
  }
  uVar15 = uVar15 & *puVar12;
  func_0x000107c61434();
  puVar16 = PTR___ss11AnyHashableVN_11034e448;
  lVar13 = 0;
  lVar14 = lVar13;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    while (uVar15 != 0) {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      func_0x0001007bbd18(*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 0x28
                          + lVar13 * 0xa00,&puStack_88);
      uStack_b8 = uStack_80;
      puStack_c0 = puStack_88;
      uStack_a8 = uStack_70;
      uStack_b0 = uStack_78;
      uStack_a0 = uStack_68;
      uVar11 = 0x112f38a58;
      func_0x0001000285a8(0x112f38a58,&UNK_10db84230);
      plVar4 = &lStack_90;
      func_0x000107c6147c(plVar4,&puStack_c0,puVar16,uVar11,6);
      lVar1 = lStack_90;
      lVar14 = lVar13;
      if ((((ulong)plVar4 & 1) != 0) && (lStack_90 != 0)) {
        puVar6 = puVar7;
        func_0x000107c61550();
        if (((int)puVar6 == 0) ||
           (((long)puVar7 < 0 || (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar7) {
              puVar5 = puVar7;
            }
            func_0x000107c60480(puVar5);
          }
          puVar6 = (undefined *)0x0;
          func_0x0001030aab34(0,puVar5 + 1,1,puVar7);
        }
        uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar10 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar8) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
          func_0x0001030aab34(puVar7,uVar8 + 1,1,puVar6);
          uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
        *(long *)(uVar10 + uVar8 * 8 + 0x20) = lVar1;
      }
    }
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103091848);
      (*pcVar2)();
    }
    if ((long)(0x3f - uVar17 >> 6) <= lVar13) break;
    uVar15 = puVar12[lVar13];
  }
  func_0x000100ba5608(param_1,puVar12,~uVar17,lVar14,0);
  puVar16 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar6 = *(undefined **)(puVar16 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar6 = puVar16;
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar6 = puVar7;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (puVar6 != (undefined *)0x0) {
    uVar15 = 0;
    do {
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar16 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103091850);
          (*pcVar2)();
        }
        uVar17 = *(ulong *)(puVar7 + uVar15 * 8 + 0x20);
        func_0x000107c615f0(uVar17);
      }
      else {
        uVar17 = uVar15;
        func_0x0001030b5ba4(uVar15,puVar7);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10309184c);
        (*pcVar2)();
      }
      puVar18 = (undefined *)(uVar15 + 1);
      uVar8 = uVar17;
      func_0x000107c3f3d4();
      if ((uVar8 & 1) == 0) {
        func_0x000107c615e8(uVar17);
      }
      else {
        puVar9 = puVar5;
        func_0x000107c61558();
        puStack_88 = puVar5;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_103094e00(0,*(long *)(puVar5 + 0x10) + 1,1);
        }
        uVar8 = *(ulong *)(puStack_88 + 0x10);
        if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar8) {
          FUN_103094e00(1 < *(ulong *)(puStack_88 + 0x18),uVar8 + 1,1);
        }
        *(ulong *)(puStack_88 + 0x10) = uVar8 + 1;
        *(ulong *)(puStack_88 + uVar8 * 8 + 0x20) = uVar17;
        puVar5 = puStack_88;
      }
      uVar15 = uVar15 + 1;
    } while (puVar18 != puVar6);
  }
  func_0x000107c6142c(puVar7);
  if (((long)puVar5 < 0) || (((ulong)puVar5 >> 0x3e & 1) != 0)) {
    func_0x000107c60480(puVar5);
    puVar16 = puVar5;
    func_0x000107c60480();
  }
  else {
    puVar16 = *(undefined **)(puVar5 + 0x10);
  }
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c61574(puVar5);
    uVar11 = 0;
  }
  else {
    if (((ulong)puVar5 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103091908);
        (*pcVar2)();
      }
      uVar11 = *(undefined8 *)(puVar5 + 0x20);
      func_0x000107c615f0(uVar11);
    }
    else {
      uVar11 = 0;
      func_0x0001030b5ba4(0,puVar5);
    }
    func_0x000107c61574(puVar5);
  }
  return uVar11;
}



/* Entry: 103091908; end: 103091967; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentHandlerWorkflow init] */

void FUN_103091908(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdAttachmentHandlerWorkflow",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103091934);
  (*pcVar1)();
}



/* Entry: 103091968; end: 103091a03; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdAttachmentHandlerWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030919a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030919a8) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103091968(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f389d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f389e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f389e8));
  return;
}



/* Entry: 103091a04; end: 103091a23;  */

void FUN_103091a04(void)

{
  func_0x000107c61168(&PTR_PTR_1128b29f0);
  return;
}



/* Entry: 103091a24; end: 103091a2b;  */

void FUN_103091a24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_38,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  uVar3 = uStack_38;
  func_0x000107c5cd74(uStack_38);
  func_0x000107c615e8(uVar3);
  func_0x0001000d224c(&uStack_38);
  uVar3 = uStack_38;
  func_0x000107c42038(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  func_0x000107c5c3c8();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = *puVar1;
  *puVar1 = puVar2;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 103091a2c; end: 103091a4b;  */

void FUN_103091a2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103091a4c; end: 103091a87;  */

void FUN_103091a4c(long param_1,long param_2)

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



/* Entry: 103091a88; end: 103091abf;  */

void FUN_103091a88(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103091ac0; end: 103091ac7;  */

void FUN_103091ac0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1030911c0(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103091ac8; end: 103091b07;  */

void FUN_103091ac8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103091b08; end: 103091b77;  */

long * FUN_103091b08(long *param_1,long param_2)

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



/* Entry: 103091b78; end: 103091d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103091b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_113067488;
  lVar7 = *(long *)(unaff_x20 + _DAT_112f38a60);
  func_0x000107c61428(lVar7 + _DAT_113067488,auStack_68,0,0);
  lVar2 = lVar7 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c3d23c();
    func_0x000107c615e8(lVar2);
  }
  puVar3 = &UNK_110607098;
  func_0x000107c613fc(&UNK_110607098,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110607138;
  func_0x000107c613fc(&UNK_110607138,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  uVar8 = *(ulong *)(lVar7 + _DAT_113067478);
  uVar5 = uVar8;
  func_0x000107c61150(uVar8,PTR_s_respondsToSelector__11262c7e0,PTR_s_attachUI_completion__1125a0c10
                     );
  if ((uVar5 & 1) == 0) {
    func_0x000100b64c10(param_2,param_3);
    func_0x000107c6157c(puVar3);
    func_0x000107c3e2c0(uVar8);
    func_0x000103091dd0(param_2,param_3,puVar3);
  }
  else {
    puVar3 = &UNK_110607160;
    func_0x000107c613fc(&UNK_110607160,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_103092344;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    pcStack_78 = FUN_103092350;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000b0c7c;
    puStack_80 = &UNK_110607178;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar6);
    puVar1 = puStack_70;
    func_0x000100b64c10(param_2,param_3);
    func_0x000107c615f0(uVar8);
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c3e2c4(uVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar8);
  }
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 103091d78; end: 103091eb3; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdAttachmentPresenterUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x000103091db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103091dbc) */

void FUN_103091d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103091b78(param_3,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103091eb4; end: 1030920df; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdAttachmentPresenterUIContainer attachUI:completion:] */

/* WARNING: Possible PIC construction at 0x000103091f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103091f48) */

void FUN_103091eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110607110;
    func_0x000107c613fc(&UNK_110607110,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x103092374;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103091b78(param_3,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030920e0; end: 10309219b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030920e0(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_113067488;
  if (param_3 != 0) {
    lVar2 = *(long *)(param_3 + _DAT_112f38a60);
    func_0x000107c61428(lVar2 + _DAT_113067488,auStack_60,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(param_3);
    }
    else {
      func_0x000107c3d238();
      func_0x000107c61170(param_3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10309219c; end: 103092227; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdAttachmentPresenterUIContainer detachUI:] */

void FUN_10309219c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110607070;
    func_0x000107c613fc(&UNK_110607070,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_1030922e0;
  }
  func_0x000107c61174(param_1);
  func_0x000103091f60(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103092228; end: 103092287; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdAttachmentPresenterUIContainer init] */

void FUN_103092228(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdAttachmentPresenterUIContainer",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103092254);
  (*pcVar1)();
}



/* Entry: 103092288; end: 1030922bf; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdAttachmentPresenterUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103092288(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38a60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38a68));
  return;
}



/* Entry: 1030922c0; end: 1030922df;  */

void FUN_1030922c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2b00);
  return;
}



/* Entry: 1030922e0; end: 10309230f;  */

void FUN_1030922e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103092310; end: 103092343;  */

void FUN_103092310(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103092344; end: 10309234f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103092344(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 auStack_60 [3];
  undefined1 auStack_48 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x0001000d224c(auStack_60);
    func_0x000107c5cd70(auStack_60[0]);
    func_0x000107c615e8(auStack_60[0]);
    lVar2 = _DAT_113067488;
    lVar4 = *(long *)(lVar3 + _DAT_112f38a60);
    func_0x000107c61428(lVar4 + _DAT_113067488,auStack_60,0,0);
    lVar4 = lVar4 + lVar2;
    func_0x000107c61618();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c3d234();
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 103092350; end: 10309236f;  */

void FUN_103092350(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103092370; end: 10309238b;  */

void FUN_103092370(long param_1,long param_2)

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



/* Entry: 10309238c; end: 1030923ab;  */

void FUN_10309238c(void)

{
  func_0x000107c61168(&PTR_PTR_112f38ad8);
  return;
}



/* Entry: 1030923ac; end: 103092737;  */

/* WARNING: Possible PIC construction at 0x0001030926d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030925a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030926dc) */
/* WARNING: Removing unreachable block (ram,0x0001030925a8) */
/* WARNING: Removing unreachable block (ram,0x0001030925d4) */
/* WARNING: Removing unreachable block (ram,0x0001030925bc) */
/* WARNING: Removing unreachable block (ram,0x0001030925d8) */
/* WARNING: Removing unreachable block (ram,0x0001030926e8) */
/* WARNING: Removing unreachable block (ram,0x000103092700) */

void FUN_1030923ac(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long alStack_a0 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126acae8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
      func_0x000107c60e78();
      if (puRam0000000112f38b30 == (undefined *)0x0) {
        *(undefined1 **)((long)alStack_a0 + lVar4) = &stack0xfffffffffffffff0;
        *(code **)((long)alStack_a0 + lVar4 + 8) = FUN_103092738;
        puVar5 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
        func_0x000107c61168();
        func_0x000107c614ec();
        puRam0000000112f38b30 = puVar5;
        return;
      }
      return;
    }
    goto code_r0x000107c46fa4;
  }
  puVar5 = PTR__OBJC_CLASS___NSDataDetector_1126c36c8;
  func_0x000107c610f8();
  uStack_60 = 0;
  func_0x000107c48f08();
  uVar2 = uStack_60;
  if (puVar5 == (undefined *)0x0) {
    uVar10 = uStack_60;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar2);
    func_0x000107c61170(uVar10);
    func_0x000107c61654();
    func_0x000107c610f8(PTR_PTR_1126acae8);
    goto code_r0x000107c46fa4;
  }
  func_0x000107c61174();
  puVar6 = param_1;
  func_0x000107c5fb5c(param_1,param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4c7f0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar7 = (undefined *)0x0;
  FUN_103092738();
  puVar8 = puVar5;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar5);
  if ((ulong)puVar8 >> 0x3e == 0) {
    if (*(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) != 1) goto LAB_1030926c0;
LAB_1030924dc:
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103092734);
        (*pcVar3)();
      }
      lVar4 = *(long *)(puVar8 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      puVar7 = puVar8;
      FUN_1030b5d48();
    }
    lVar9 = lVar4;
    func_0x000107c4d928();
    func_0x000107c61170(lVar4);
    if (lVar9 != 1) goto LAB_1030926c0;
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      lVar4 = *(long *)(puVar8 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      puVar7 = puVar8;
      FUN_1030b5d48();
    }
    func_0x000107c6142c(puVar8);
    lVar9 = lVar4;
    func_0x000107c4f888();
    func_0x000107c61170(lVar4);
    if ((lVar9 == 0) && (puVar6 == puVar7)) {
      func_0x000107c610f8(PTR_PTR_1126acae8);
      goto code_r0x000107c46fa4;
    }
  }
  else {
    puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar5 = puVar8;
    }
    puVar11 = puVar5;
    func_0x000107c60480();
    if ((puVar11 == (undefined *)0x1) && (func_0x000107c60480(), puVar5 != (undefined *)0x0))
    goto LAB_1030924dc;
LAB_1030926c0:
    func_0x000107c6142c(puVar8);
  }
  func_0x000107c610f8(PTR_PTR_1126acae8);
code_r0x000107c46fa4:
                    /* WARNING: Could not recover jumptable at 0x00010c01faf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103092738; end: 10309277b;  */

void FUN_103092738(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f38b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f38b30 = puVar1;
  return;
}



/* Entry: 10309277c; end: 1030927db; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter init] */

void FUN_10309277c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdAppInstallAttachmentPresenter",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030927a8);
  (*pcVar1)();
}



/* Entry: 1030927dc; end: 103092833; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030927dc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38b38));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38b40));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38b48));
  param_1 = param_1 + _DAT_112f38b58;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103092834; end: 103092853;  */

void FUN_103092834(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2bc8);
  return;
}



/* Entry: 103092854; end: 10309288f; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter canHandleAttachment:] */

bool FUN_103092854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 2;
}



/* Entry: 103092890; end: 10309289f; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103092890(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f38b50);
}



/* Entry: 1030928a0; end: 103092b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030928a0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar3 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000100b92084();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(unaff_x20 + _DAT_112f38b38);
  lVar3 = lVar7;
  func_0x000106987180(lVar7);
  func_0x000107c61180();
  puVar2 = PTR___sypN_11034f1a8;
  lVar4 = lVar3;
  func_0x000107c5f9e8();
  func_0x000107c61170(lVar3);
  func_0x000107c61174();
  func_0x0001041c9838(puVar5);
  FUN_1030bfd40(lVar8);
  FUN_103093274(puVar5);
  func_0x0001041ed328(0);
  func_0x000107c610f8();
  func_0x0001041ec3c8(lVar8);
  if (*(long *)(lVar7 + _DAT_1130683a0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + _DAT_1130683a0) + _DAT_113067620);
    pcVar9 = (code *)*puVar1;
    if (pcVar9 != (code *)0x0) {
      uVar6 = puVar1[1];
      func_0x000107c6157c(uVar6);
      (*pcVar9)();
      func_0x000100d33784(pcVar9,uVar6);
    }
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f38b50) = 1;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f38b40);
  lVar3 = lVar4;
  func_0x00010018cc3c(lVar4);
  func_0x000107c6142c(lVar4);
  lVar4 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,puVar2 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar3);
  func_0x000107c4efe4(uVar6);
  func_0x000107c61170(lVar4);
  lVar3 = unaff_x20 + _DAT_112f38b58;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x0001041bb118(0);
    func_0x0001041b95e4(lVar7);
    func_0x000107c3d258(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 103092b04; end: 103092b2b; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter presentAttachment] */

void FUN_103092b04(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030928a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103092b2c; end: 103092c0f;  */

/* WARNING: Possible PIC construction at 0x000103092be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103092be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103092b2c(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112f38b40);
  func_0x000107c42094();
  if ((uVar1 & 1) == 0) {
    lVar2 = unaff_x20 + _DAT_112f38b58;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar3 = 0;
      func_0x0001041bb118(0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f38b38);
      func_0x0001041b95e4(uVar4,uVar3);
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      func_0x0001041bf5c0(0);
      func_0x0001041bf1b4();
      func_0x000107c3d24c(lVar2);
      func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 103092c10; end: 103092c37; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter dismissAttachment] */

void FUN_103092c10(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103092b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103092c38; end: 103092c43; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter storeProductViewPresenterDidLoad:storeKitLoadInfo:] */

/* WARNING: Possible PIC construction at 0x000103092ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103092cac) */

void FUN_103092c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103092d70(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103092c44; end: 103092c4f; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter storeProductViewPresenter:didCloseStoreViewWithStoreKitLoadInfo:] */

/* WARNING: Possible PIC construction at 0x000103092ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103092cac) */

void FUN_103092c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x103092f04)(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103092c50; end: 103092cc3;  */

/* WARNING: Possible PIC construction at 0x000103092ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103092cac) */

void FUN_103092c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103092cc4; end: 103092d07; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter storeProductViewPresenterDidOpenStoreView:] */

void FUN_103092cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1030930d0();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103092d08; end: 103092d6f; -[_TtC40SCAdAttachmentHandlerImplementationSwift31AdAppInstallAttachmentPresenter storeProductViewPresenter:failedToPresentWithError:] */

/* WARNING: Possible PIC construction at 0x000103092d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103092d5c) */

void FUN_103092d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x000103093174(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103092d70; end: 1030930cf;  */

/* WARNING: Possible PIC construction at 0x000103092ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103092ec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103092d70(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f38b38);
  if (*(long *)(lVar6 + _DAT_1130683a0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_1130683a0) + _DAT_113067628);
    pcVar7 = (code *)*puVar1;
    if (pcVar7 != (code *)0x0) {
      uVar5 = puVar1[1];
      func_0x000107c6157c(uVar5);
      func_0x000107c5dfe8(param_2);
      uVar2 = param_2;
      func_0x000107c4e298(param_2);
      uVar3 = param_2;
      func_0x000107c4e294(param_2);
      (*pcVar7)(uVar2,uVar3);
      func_0x000100d33784(pcVar7,uVar5);
    }
  }
  lVar4 = unaff_x20 + _DAT_112f38b58;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x0001041bb118(0);
    func_0x0001041b95e4(lVar6);
    func_0x000107c5dfe8(param_2);
    uVar2 = param_2;
    func_0x000107c4e294();
    func_0x000107c4e298();
    uVar5 = 0;
    func_0x0001041bc850(0);
    uStack_78 = 0x100;
    if ((int)param_2 == 0) {
      uStack_78 = 0;
    }
    uStack_78 = uStack_78 | uVar2 & 0xffffffff;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_80 = param_1;
    func_0x0001041bbba4(&uStack_80,uVar5);
    func_0x000107c3d250(lVar4);
    func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 1030930d0; end: 103093273;  */

/* WARNING: Possible PIC construction at 0x00010309314c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103093150) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030930d0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f38b58;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x0001041bb118(0);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f38b38);
    func_0x0001041b95e4(uVar3,uVar2);
    func_0x0001041bf5c0(0);
    func_0x0001041bf1b4();
    func_0x000107c3d254(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 103093274; end: 1030932af;  */

undefined8 FUN_103093274(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b91790();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1030932b0; end: 103093a23;  */

void FUN_1030932b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_1106071b0;
  func_0x000107c613fc(&UNK_1106071b0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_8;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_103093a24,puVar1);
  return;
}



/* Entry: 103093a24; end: 103093a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103093a24(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 auStack_d0 [3];
  long *aplStack_b8 [3];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  func_0x000100083b20(aplStack_b8,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  plVar2 = aplStack_b8[0];
  if ((*(char *)((long)aplStack_b8[0] + _DAT_113067438) == '\x01') &&
     (lVar17 = *(long *)(*(long *)((long)aplStack_b8[0] + _DAT_113067410) + _DAT_113067d30),
     lVar17 != 0)) {
    func_0x000107c61174();
    func_0x000100083b20(aplStack_b8);
    plVar3 = aplStack_b8[0];
    func_0x000100083b20(aplStack_b8);
    plVar4 = aplStack_b8[0];
    uVar5 = *(undefined8 *)((long)plVar3 + _DAT_113010c08);
    uVar20 = *(undefined8 *)((long)plVar3 + _DAT_113010c28);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar6 = uVar20;
    func_0x00010040de80();
    puVar7 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000100083b20(aplStack_b8);
    plVar19 = aplStack_b8[0];
    uVar8 = *(undefined8 *)((long)aplStack_b8[0] + _DAT_11304a480);
    func_0x000107c61174();
    func_0x000107c61170(plVar19);
    uVar18 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61174();
    func_0x000100083b20(aplStack_b8);
    uVar8 = *(undefined8 *)((long)aplStack_b8[0] + _DAT_113043d30);
    func_0x000107c6157c(uVar8);
    func_0x000107c61170(aplStack_b8[0]);
    func_0x0001000d224c(auStack_d0);
    func_0x000107c61574(uVar8);
    func_0x000100083b20(alStack_70);
    uVar9 = *(undefined8 *)(alStack_70[0] + _DAT_112fbd138);
    func_0x000107c61174(uVar9);
    func_0x000107c61170(alStack_70[0]);
    func_0x000100083b20(&lStack_78);
    uVar21 = *(undefined8 *)(lStack_78 + _DAT_113068c28);
    func_0x000107c615f0(uVar21);
    func_0x000107c61170(lStack_78);
    func_0x000100083b20(&uStack_80);
    uVar8 = uStack_80;
    func_0x000107c4d80c(uStack_80);
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    uVar10 = uVar18;
    FUN_1030c1f08(uVar18,puVar7,auStack_d0[0],uVar5,uVar9,uVar21,uVar6,uVar8);
    func_0x000107c615e8(uVar18);
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(auStack_d0[0]);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar21);
    func_0x000107c61170(uVar8);
    puVar11 = &UNK_110607220;
    func_0x000107c613fc(&UNK_110607220,0x18,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar5;
    func_0x0001000285a8(0x112f38bb0,&UNK_10db841d8);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar12 = FUN_103093aa8;
    func_0x0001000bdd8c(FUN_103093aa8,puVar11);
    puVar11 = &UNK_110607248;
    func_0x000107c613fc(&UNK_110607248,0x18,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar20;
    func_0x0001000285a8(0x112f38bb8,&UNK_10db841e0);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar13 = FUN_103093a78;
    func_0x0001000bdd8c(FUN_103093a78,puVar11);
    puVar11 = &UNK_110607270;
    func_0x000107c613fc(&UNK_110607270,0x18,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar6;
    func_0x0001000285a8(0x112f38bc0,&UNK_10db841e8);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c615f0(uVar10);
    func_0x000107c61174(uVar6);
    uVar18 = 0x103093aac;
    func_0x0001000bdd8c(0x103093aac,puVar11);
    lVar14 = 0;
    FUN_103094638();
    lVar15 = lVar14;
    func_0x000107c610f8();
    func_0x000107c61614(lVar15 + _DAT_112f38bc8,0);
    *(undefined8 *)(lVar15 + _DAT_112f38bf8) = 0;
    puVar1 = (undefined8 *)(lVar15 + _DAT_112f38c00);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar15 + _DAT_112f38c08);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(code **)(lVar15 + _DAT_112f38bd0) = pcVar12;
    *(code **)(lVar15 + _DAT_112f38bd8) = pcVar13;
    *(undefined8 *)(lVar15 + _DAT_112f38be0) = uVar10;
    *(undefined **)(lVar15 + _DAT_112f38be8) = puVar7;
    *(undefined8 *)(lVar15 + _DAT_112f38bf0) = uVar18;
    puVar11 = PTR_s_init_1125d9248;
    lStack_90 = lVar15;
    lStack_88 = lVar14;
    func_0x000107c61174();
    func_0x000107c615f0(uVar10);
    func_0x000107c6157c(pcVar12);
    func_0x000107c6157c(pcVar13);
    func_0x000107c6157c(uVar18);
    plVar16 = &lStack_90;
    func_0x000107c61154(plVar16,puVar11);
    func_0x000107c53fcc(*(undefined8 *)((long)plVar16 + _DAT_112f38be0));
    func_0x000107c61574(pcVar12);
    func_0x000107c61574(pcVar13);
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(uVar18);
    uVar18 = *(undefined8 *)((long)plVar2 + _DAT_113067418);
    lVar14 = 0;
    FUN_103092834();
    lVar15 = lVar14;
    func_0x000107c610f8();
    *(undefined1 *)(lVar15 + _DAT_112f38b50) = 0;
    func_0x000107c61614(lVar15 + _DAT_112f38b58,0);
    *(long *)(lVar15 + _DAT_112f38b38) = lVar17;
    *(long **)(lVar15 + _DAT_112f38b40) = plVar16;
    *(undefined8 *)(lVar15 + _DAT_112f38b48) = uVar18;
    puVar11 = PTR_s_init_1125d9248;
    lStack_a0 = lVar15;
    lStack_98 = lVar14;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(uVar18);
    plVar19 = &lStack_a0;
    func_0x000107c61154(plVar19,puVar11);
    lVar15 = _DAT_113067428;
    func_0x000107c61428((long)plVar2 + _DAT_113067428,aplStack_b8,0,0);
    lVar15 = (long)plVar2 + lVar15;
    func_0x000107c61618(lVar15);
    func_0x000107c61170(plVar3);
    func_0x000107c61170(plVar2);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61604((long)plVar19 + _DAT_112f38b58,lVar15);
    func_0x000107c615e8(lVar15);
    lVar17 = _DAT_112f38bc8;
    func_0x000107c61428((long)plVar16 + _DAT_112f38bc8,auStack_d0,1,0);
    func_0x000107c61604((long)plVar16 + lVar17,plVar19);
    aplStack_b8[0] = plVar16;
  }
  else {
    plVar19 = (long *)0x0;
  }
  func_0x000107c61170(aplStack_b8[0]);
  *param_1 = plVar19;
  return;
}



/* Entry: 103093a78; end: 103093aa7;  */

void FUN_103093a78(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103093aa8; end: 103093aaf;  */

void FUN_103093aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103093ab0; end: 103093af7; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103093ab0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f38bc8;
  func_0x000107c61428(param_1 + _DAT_112f38bc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103093af8; end: 103093b4f; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103093af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f38bc8;
  func_0x000107c61428(param_1 + _DAT_112f38bc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103093b50; end: 10309429f;  */

/* WARNING: Removing unreachable block (ram,0x000103094290) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103093b50(undefined *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 in_x4;
  ulong *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_1e8 [88];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *apuStack_c8 [4];
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x0001000d224c(&puStack_140);
    puVar8 = puStack_140;
    if (puStack_140 != (undefined *)0x0) {
      func_0x000103095904(0,0x112dcf430,&PTR_PTR_1126b3e90);
      uVar7 = 0x11;
      func_0x000103dec308(0x11);
      puStack_f0 = (undefined *)0x0;
      uStack_e8 = 0xe000000000000000;
      func_0x000107c602fc(0x2c);
      func_0x000107c6142c(uStack_e8);
      puStack_f0 = (undefined *)0x5b;
      uStack_e8 = 0xe100000000000000;
      func_0x000107c614f0();
      uVar15 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar15);
      func_0x000107c5fb78(0xd000000000000029,0x800000010f11cea0);
      uVar15 = uStack_e8;
      puVar13 = puStack_f0;
      func_0x000107c5fadc(puStack_f0,uStack_e8);
      func_0x000107c6142c(uVar15);
      uVar15 = 0xd000000000000030;
      func_0x000107c5fadc(0xd000000000000030,0x800000010f11ced0);
      func_0x000107c3e1fc(puVar8);
      func_0x000107c615e8(puVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(uVar15);
    }
    func_0x0001000d224c(&puStack_f0);
    puVar8 = puStack_f0;
    if (puStack_f0 != (undefined *)0x0) {
      func_0x000107c4b9cc(puStack_f0);
      func_0x000107c615e8(puVar8);
    }
    lVar19 = _DAT_112f38bc8;
    func_0x000107c61428(unaff_x20 + _DAT_112f38bc8,&puStack_f0,0,0);
    lVar19 = unaff_x20 + lVar19;
    func_0x000107c61618();
    if (lVar19 == 0) {
      return;
    }
    lVar16 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar10 = auStack_1e8;
    func_0x000107c61534();
    *(undefined8 *)(lVar16 + 0x18) = 2;
    *(undefined8 *)(lVar16 + 0x10) = 1;
    uVar15 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar16 + 0x20) = uVar15;
    puVar8 = PTR___sSSN_11034da80;
    *(undefined **)(lVar16 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar16 + 0x28) = puVar10;
    *(undefined8 *)(lVar16 + 0x30) = 0xd000000000000015;
    *(undefined8 *)(lVar16 + 0x38) = 0x800000010f11ce80;
    lVar14 = lVar16;
    func_0x000100214a84(lVar16);
    func_0x000107c61588(lVar16);
    func_0x00010309587c((undefined8 *)(lVar16 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar15 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f11ce50);
    lVar16 = lVar14;
    func_0x000107c5f9dc(lVar14,puVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar14);
    func_0x000107c466bc(puVar13);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(lVar16);
    puVar8 = puVar13;
    func_0x000107c5ed2c(puVar13);
    func_0x000107c61170(puVar13);
    func_0x000107c5befc(lVar19);
    func_0x000107c615e8(lVar19);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f38c00);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f38c08);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(unaff_x20 + _DAT_112f38bf8) = in_x4;
    puVar13 = param_1;
    func_0x0001012254e8();
    if (puVar13 == (undefined *)0x0) {
      lVar19 = *(long *)(param_1 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar19 != 0) {
        puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000103094e1c(0,lVar19,0);
        puVar8 = puStack_78;
        puVar13 = param_1 + 0x40;
        puVar5 = puVar13;
        func_0x000107c60268(puVar13,~(-1L << ((ulong)(byte)param_1[0x20] & 0x3f)));
        lVar16 = 0;
        iVar3 = *(int *)(param_1 + 0x24);
        do {
          if ((ulong)puVar5 >> ((ulong)(byte)param_1[0x20] & 0x3f) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10309427c);
            (*pcVar4)();
          }
          uVar17 = (ulong)puVar5 >> 6;
          uVar18 = 1L << ((ulong)puVar5 & 0x3f);
          if ((*(ulong *)(puVar13 + uVar17 * 8) & uVar18) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103094280);
            (*pcVar4)();
          }
          if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103094284);
            (*pcVar4)();
          }
          func_0x0001007bbd18(*(long *)(param_1 + 0x30) + (long)puVar5 * 0x28,&puStack_f0);
          func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar5 * 0x20,apuStack_c8);
          uStack_138 = uStack_e8;
          puStack_140 = puStack_f0;
          puStack_128 = puStack_d8;
          puStack_130 = puStack_e0;
          pcStack_120 = pcStack_d0;
          func_0x000100102924(apuStack_c8,&uStack_118);
          ppuVar6 = &puStack_140;
          ppuVar9 = &puStack_190;
          func_0x0001030958bc(ppuVar6,ppuVar9,0x112d69838,&UNK_10d92d0b0);
          func_0x000107c602c0();
          func_0x0001007bbff0(&puStack_190);
          func_0x000100183ab8(&uStack_168);
          uStack_158 = uStack_108;
          uStack_160 = uStack_110;
          uStack_150 = uStack_100;
          puStack_178 = puStack_128;
          puStack_180 = puStack_130;
          uStack_168 = uStack_118;
          pcStack_170 = pcStack_120;
          uStack_188 = uStack_138;
          puStack_190 = puStack_140;
          ppuStack_a8 = ppuVar6;
          ppuStack_a0 = ppuVar9;
          func_0x000100102924(&uStack_168,&uStack_98);
          func_0x0001007bbff0(&puStack_190);
          uVar2 = *(ulong *)(puVar8 + 0x10);
          puStack_78 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
            func_0x000103094e1c(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
          }
          puVar8 = puStack_78;
          *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x38) = uStack_90;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x30) = uStack_98;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x48) = uStack_80;
          *(undefined8 *)(puStack_78 + uVar2 * 0x30 + 0x40) = uStack_88;
          *(undefined ***)(puStack_78 + uVar2 * 0x30 + 0x28) = ppuStack_a0;
          *(undefined ***)(puStack_78 + uVar2 * 0x30 + 0x20) = ppuStack_a8;
          puVar12 = (undefined *)(1L << ((ulong)(byte)param_1[0x20] & 0x3f));
          if (puVar12 <= puVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103094288);
            (*pcVar4)();
          }
          if ((*(ulong *)(puVar13 + uVar17 * 8) & uVar18) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10309428c);
            (*pcVar4)();
          }
          if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103094290);
            (*pcVar4)();
          }
          uVar18 = *(ulong *)(puVar13 + uVar17 * 8) & -2L << ((ulong)puVar5 & 0x3f);
          if (uVar18 == 0) {
            lVar14 = uVar17 << 6;
            puVar11 = (ulong *)(param_1 + uVar17 * 8 + 0x48);
            do {
              uVar17 = uVar17 + 1;
              if ((ulong)(puVar12 + 0x3f) >> 6 <= uVar17) {
                FUN_103095660(puVar5,iVar3,0);
                goto LAB_103093c54;
              }
              uVar18 = *puVar11;
              lVar14 = lVar14 + 0x40;
              puVar11 = puVar11 + 1;
            } while (uVar18 == 0);
            FUN_103095660(puVar5,iVar3,0);
            uVar17 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            puVar12 = (undefined *)(LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) + lVar14);
          }
          else {
            uVar17 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            puVar12 = (undefined *)
                      (LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | (ulong)puVar5 & 0x7fffffffffffffc0
                      );
          }
LAB_103093c54:
          lVar16 = lVar16 + 1;
          puVar5 = puVar12;
        } while (lVar16 != lVar19);
      }
      puVar13 = *(undefined **)(puVar8 + 0x10);
      puStack_f0 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if (puVar13 != (undefined *)0x0) {
        func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
        func_0x000107c60498();
        puStack_f0 = puVar13;
      }
      FUN_103095674(puVar8,1,&puStack_f0);
      func_0x000107c6142c(puVar8);
      puVar13 = puStack_f0;
    }
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f38be0);
    puVar8 = puVar13;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar13);
    puVar13 = &UNK_1106072d8;
    func_0x000107c613fc(&UNK_1106072d8,0x18,7);
    func_0x000107c61614(puVar13 + 0x10,unaff_x20);
    pcStack_d0 = FUN_103095858;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0x42000000;
    puStack_e0 = &UNK_1000b0c7c;
    puStack_d8 = &UNK_1106072f0;
    ppuVar6 = &puStack_f0;
    apuStack_c8[0] = puVar13;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(apuStack_c8[0]);
    func_0x000107c4efe8(uVar15);
    func_0x000107c60bd0(ppuVar6);
  }
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 1030942a0; end: 103094373;  */

void FUN_1030942a0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001030942f4();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103094374; end: 10309444f; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter presentStoreProductViewWithStoreParams:appInstallParams:uiContainer:backgroundExitBehavior:skanImpressionSource:] */

void FUN_103094374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_103093b50(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103094450; end: 103094467; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter dismissStoreProductView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103094450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf845b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f38be0),
             PTR_s_dismissStoreProductAnimated_comp_1125beb10,1,0);
  return;
}



/* Entry: 103094468; end: 10309455f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103094468(double param_1)

{
  long unaff_x20;
  
  if (*(char *)((double *)(unaff_x20 + _DAT_112f38c00) + 1) == '\x01') {
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f38be8));
    if (*(char *)((double *)(unaff_x20 + _DAT_112f38c08) + 1) != '\x01') {
      param_1 = param_1 - *(double *)(unaff_x20 + _DAT_112f38c08);
    }
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
  }
  else {
    param_1 = *(double *)(unaff_x20 + _DAT_112f38c00);
    if (*(char *)((double *)(unaff_x20 + _DAT_112f38c08) + 1) == '\x01') {
      if (param_1 < 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      param_1 = param_1 - *(double *)(unaff_x20 + _DAT_112f38c08);
      if (param_1 < 0.0) {
        param_1 = 0.0;
      }
    }
  }
  func_0x000107c610f8(PTR_PTR_1126cf558);
                    /* WARNING: Could not recover jumptable at 0x00010c033170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1);
  return;
}



/* Entry: 103094560; end: 1030945bf; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter init] */

void FUN_103094560(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdStoreProductViewPreloadablePresenter"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10309458c);
  (*pcVar1)();
}



/* Entry: 1030945c0; end: 103094637; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030945ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030945f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030945c0(long param_1)

{
  func_0x000103095944(param_1 + _DAT_112f38bc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38bd0));
  return;
}



/* Entry: 103094638; end: 103094657;  */

void FUN_103094638(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2ca8);
  return;
}



/* Entry: 103094658; end: 10309469b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103094658(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f38bc8;
  func_0x000107c61428(unaff_x20 + _DAT_112f38bc8,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 10309469c; end: 1030947e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309469c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f38bc8;
  func_0x000107c61428(unaff_x20 + _DAT_112f38bc8,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1030947e8; end: 1030948eb;  */

void FUN_1030947e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b92084();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001018eb36c(param_2,puVar2);
  func_0x0001041ed328(0);
  func_0x000107c610f8();
  func_0x0001041ec3c8(puVar2);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar3);
  (**(code **)(lVar1 + 8))(uVar3,lVar1);
  FUN_103093b50(param_1,puVar2,uVar3,param_4,param_5);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 1030948ec; end: 103094913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030948ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c42090(*(undefined8 *)(unaff_x20 + _DAT_112f38be0),param_2,1,0);
  return;
}



/* Entry: 103094914; end: 103094a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103094914(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long alStack_68 [3];
  
  bVar2 = (param_2 & 1) == 0;
  if (bVar2) {
    uVar7 = 0;
    uVar4 = param_2;
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112f38be8);
    uVar7 = param_1;
    func_0x000107c3ceac(uVar4);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f38c00);
  *puVar1 = uVar7;
  *(bool *)(puVar1 + 1) = bVar2;
  FUN_103094468();
  func_0x0001000d224c(alStack_68);
  if (alStack_68[0] != 0) {
    if (param_3 != 0) {
      func_0x000107c5ed2c(param_3);
    }
    func_0x000107c4be54(param_1,alStack_68[0]);
    func_0x000107c615e8(alStack_68[0]);
    func_0x000107c61170(param_3);
  }
  lVar3 = _DAT_112f38bc8;
  if ((param_2 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f38bc8,alStack_68,0,0);
    uVar5 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c61150();
      if ((uVar6 & 1) == 0) {
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar5);
        return;
      }
      func_0x000107c5bf00(uVar5);
      func_0x000107c615e8(uVar5);
    }
  }
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 103094a80; end: 103094b0f; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter didLoadStoreProduct:error:perceivedLatency:preloaded:] */

/* WARNING: Possible PIC construction at 0x000103094ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103094aec) */

void FUN_103094a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_5);
  FUN_103094914(param_1,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 103094b10; end: 103094b13; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter willDismissStoreProductViewController] */

void FUN_103094b10(void)

{
  return;
}



/* Entry: 103094b14; end: 103094bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103094b14(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long alStack_58 [3];
  
  FUN_103094468();
  func_0x0001000d224c(alStack_58);
  if (alStack_58[0] != 0) {
    func_0x000107c4e294(param_1);
    func_0x000107c4e298(param_1);
    func_0x000107c5dfe8(param_1);
    func_0x000107c4bf08(alStack_58[0]);
    func_0x000107c615e8(alStack_58[0]);
  }
  lVar1 = _DAT_112f38bc8;
  func_0x000107c61428(unaff_x20 + _DAT_112f38bc8,alStack_58,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5bef8();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103094bfc; end: 103094c23; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter didDismissStoreProductViewController] */

void FUN_103094bfc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103094b14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103094c24; end: 103094dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103094c24(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_b8 [80];
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112f38bc8;
  func_0x000107c61428(unaff_x20 + _DAT_112f38bc8,auStack_68,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar7 = auStack_b8;
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    puVar6 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar2 + 0x28) = puVar7;
    *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000022;
    *(undefined8 *)(lVar2 + 0x38) = 0x800000010f11cf10;
    lVar4 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    FUN_10309587c((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f11ce50);
    lVar2 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    puVar6 = puVar5;
    func_0x000107c5ed2c(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c5befc(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 103094dd8; end: 103094dff; -[_TtC40SCAdAttachmentHandlerImplementationSwift38AdStoreProductViewPreloadablePresenter didFailToPresentStoreProductViewController] */

void FUN_103094dd8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103094c24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103094e00; end: 10309500f;  */

void FUN_103094e00(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103095010();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103095010; end: 103095283;  */

undefined * FUN_103095010(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103095140);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1030bad5c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112f38a58;
    func_0x0001000285a8(0x112f38a58,&UNK_10db84230);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103095284; end: 10309553b;  */

undefined *
FUN_103095284(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1030953c0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000103095904(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}


