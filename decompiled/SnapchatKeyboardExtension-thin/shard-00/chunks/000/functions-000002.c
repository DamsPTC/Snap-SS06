/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001a864; end: 10001a897;  */

undefined8 FUN_10001a864(undefined8 param_1)

{
  (*(code *)(undefined *)0x1000127ec)();
  return param_1;
}



/* Entry: 10001a898; end: 10001a9a7;  */

void FUN_10001a898(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_100016cec(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
  _swift_unknownObjectRelease(*(undefined8 *)(lVar1 + 8));
  FUN_100016688(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                *(undefined1 *)(lVar1 + 0x20));
  if (*(long *)(lVar1 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x38));
  }
  lVar6 = (long)*(int *)(lVar2 + 0x30);
  uVar3 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar4 = lVar1 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar4,uVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1 + lVar6,lVar4);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar6));
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001a9a8; end: 10001aa47;  */

void FUN_10001a9a8(undefined8 param_1,ulong *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = 0;
  FUN_100016cec(0,uVar7,uVar13);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  uVar11 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  uVar16 = *(undefined8 *)(unaff_x20 + uVar10);
  uVar17 = *(undefined8 *)(unaff_x20 + uVar10 + 8);
  uVar18 = *(undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar19 = *(undefined8 *)(unaff_x20 + (uVar10 + 0x1f & 0xffffffffffffff8));
  lVar6 = unaff_x20 + uVar11;
  lVar9 = 0x100051f08;
  uStack_c8 = uVar7;
  uStack_c0 = uVar13;
  uStack_b0 = param_1;
  FUN_100010860(0x100051f08,&UNK_10003c668);
  lStack_d0 = *(long *)(lVar9 + -8);
  lStack_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = (long)&lStack_d0 - extraout_x8;
  lVar9 = 0x100051f10;
  FUN_100010860(0x100051f10,&UNK_10003c670);
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar14 - extraout_x8_00;
  lVar4 = 0x100051ea0;
  FUN_100010860(0x100051ea0,&UNK_10003c620);
  lStack_b8 = lVar4;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar12 - extraout_x8_01;
  uVar10 = *param_2;
  lVar4 = *(long *)(lVar6 + 0x10);
  uVar7 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined1 *)(lVar6 + 0x20);
  uVar5 = 0;
  FUN_100013f0c(0);
  uVar13 = uVar5;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar4,uVar7,uVar1,uVar5,uVar13);
  lVar6 = lVar4;
  FUN_1000136c0();
  _swift_release(lVar4);
  if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000185bc);
    (*pcVar3)();
  }
  if (uVar10 < *(ulong *)(lVar6 + 0x10)) {
    uVar13 = *(undefined8 *)(lVar6 + uVar10 * 8 + 0x20);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRelease(lVar6);
    uVar7 = 0;
    FUN_100016cec(0,uStack_c8,uStack_c0);
    if (uVar10 == 2) {
      FUN_1000185c0(lVar15,uVar16,uVar17,uVar18,uVar19,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      FUN_10001ae68(lVar15,lVar12,0x100051ea0,&UNK_10003c620);
      _swift_storeEnumTagMultiPayload(lVar12,lVar9,0);
      puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730;
      uVar7 = 0x100051e98;
      FUN_10001b6cc(0x100051e98,0x100051ea0,&UNK_10003c620,
                    PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730);
      uVar13 = 0x100051ea8;
      func_0x0001000118b8(0x100051ea8,&UNK_10003c628);
      uVar5 = 0x100051eb0;
      FUN_10001b6cc(0x100051eb0,0x100051ea8,&UNK_10003c628,puVar2);
      uVar16 = uVar5;
      FUN_10001ac0c();
      puStack_98 = &UNK_10004d278;
      puVar8 = &uStack_a0;
      uStack_a0 = uVar13;
      uStack_90 = uVar5;
      uStack_88 = uVar16;
      _swift_getOpaqueTypeConformance
                (puVar8,PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_10004c638
                 ,1);
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_b0,lVar12,lStack_b8,lStack_a8,uVar7,puVar8);
      func_0x00010001b050(lVar15,0x100051ea0,&UNK_10003c620);
    }
    else {
      FUN_100018740(lVar14,uVar18,uVar16,uVar19,uVar13,uVar7);
      _swift_bridgeObjectRelease(uVar13);
      lVar6 = lStack_a8;
      lVar4 = lStack_d0;
      (**(code **)(lStack_d0 + 0x10))(lVar12,lVar14,lStack_a8);
      _swift_storeEnumTagMultiPayload(lVar12,lVar9,1);
      puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730;
      uVar7 = 0x100051e98;
      FUN_10001b6cc(0x100051e98,0x100051ea0,&UNK_10003c620,
                    PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730);
      uVar13 = 0x100051ea8;
      func_0x0001000118b8(0x100051ea8,&UNK_10003c628);
      uVar5 = 0x100051eb0;
      FUN_10001b6cc(0x100051eb0,0x100051ea8,&UNK_10003c628,puVar2);
      uVar16 = uVar5;
      FUN_10001ac0c();
      puStack_98 = &UNK_10004d278;
      puVar8 = &uStack_a0;
      uStack_a0 = uVar13;
      uStack_90 = uVar5;
      uStack_88 = uVar16;
      _swift_getOpaqueTypeConformance
                (puVar8,PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_10004c638
                 ,1);
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_b0,lVar12,lStack_b8,lVar6,uVar7,puVar8);
      (**(code **)(lVar4 + 8))(lVar14,lVar6);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000185c0);
  (*pcVar3)();
}



/* Entry: 10001aa48; end: 10001aabf;  */

void FUN_10001aa48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100051e80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051e70;
  func_0x0001000118b8(0x100051e70,&UNK_10003c610);
  uVar2 = uVar1;
  FUN_10001aac0();
  puStack_30 = PTR___sSiSxsWP_10004cd10;
  puVar3 = PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_10004cd20;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_10004cd20,uVar1,&puStack_30);
  puRam0000000100051e80 = puVar3;
  return;
}



/* Entry: 10001aac0; end: 10001aaff;  */

void FUN_10001aac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000100051e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSiSZsMc_10004cd08;
  _swift_getWitnessTable(PTR___sSiSZsMc_10004cd08,PTR___sSiN_10004ccf8);
  puRam0000000100051e88 = puVar1;
  return;
}



/* Entry: 10001ab00; end: 10001ac0b;  */

void FUN_10001ab00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (puRam0000000100051e90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051e78;
  func_0x0001000118b8(0x100051e78,&UNK_10003c618);
  puVar7 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730;
  uVar2 = 0x100051e98;
  FUN_10001b6cc(0x100051e98,0x100051ea0,&UNK_10003c620,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730);
  uVar3 = 0x100051ea8;
  func_0x0001000118b8(0x100051ea8,&UNK_10003c628);
  uVar4 = 0x100051eb0;
  FUN_10001b6cc(0x100051eb0,0x100051ea8,&UNK_10003c628,puVar7);
  uVar5 = uVar4;
  FUN_10001ac0c();
  puStack_58 = &UNK_10004d278;
  puVar6 = &uStack_60;
  uStack_60 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  _swift_getOpaqueTypeConformance
            (puVar6,PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_10004c638,1);
  puVar7 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0;
  uStack_70 = uVar2;
  puStack_68 = puVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_10004c4d0,uVar1,
             &uStack_70);
  puRam0000000100051e90 = puVar7;
  return;
}



/* Entry: 10001ac0c; end: 10001ac4b;  */

void FUN_10001ac0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100051eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003bce4;
  _swift_getWitnessTable(&UNK_10003bce4,&UNK_10004d278);
  puRam0000000100051eb8 = puVar1;
  return;
}



/* Entry: 10001ac4c; end: 10001ac57;  */

void FUN_10001ac4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100016cec(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10001a398(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2,0x100013b2c);
  return;
}



/* Entry: 10001ac58; end: 10001acb3;  */

void FUN_10001ac58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100016cec(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10001a398(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2,param_1);
  return;
}



/* Entry: 10001acb4; end: 10001ad33;  */

void FUN_10001acb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000100051ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003c804;
  _swift_getWitnessTable(&UNK_10003c804,&UNK_10004de70);
  puRam0000000100051ef0 = puVar1;
  return;
}



/* Entry: 10001ad34; end: 10001ada3;  */

void FUN_10001ad34(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100016cec(0,uVar1,lVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)) + 8);
  pcVar6 = *(code **)(lVar2 + 0x18);
  _swift_unknownObjectRetain(uVar5);
  (*pcVar6)(0x20,0xe100000000000000,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_10004cf78)(uVar5);
  return;
}



/* Entry: 10001ada4; end: 10001adeb;  */

void FUN_10001ada4(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100016cec(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(unaff_x20 + *(int *)(lVar1 + 0x38) + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff))))
            ();
  return;
}



/* Entry: 10001adec; end: 10001ae0f;  */

void FUN_10001adec(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001ae10; end: 10001ae57;  */

void FUN_10001ae10(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  (**(code **)(lVar1 + 0x18))(10,0xe100000000000000,uVar2,lVar1);
  return;
}



/* Entry: 10001ae58; end: 10001ae67;  */

void FUN_10001ae58(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_10004cf40)(param_2);
    return;
  }
  return;
}



/* Entry: 10001ae68; end: 10001aeaf;  */

undefined8 FUN_10001ae68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10001aeb0; end: 10001aef7;  */

void FUN_10001aeb0(void)

{
  FUN_10001a5b8();
  return;
}



/* Entry: 10001aef8; end: 10001af0f;  */

void FUN_10001aef8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100016cec(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10001a398(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2,FUN_100013994)
  ;
  return;
}



/* Entry: 10001af10; end: 10001af87;  */

void FUN_10001af10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100051f48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051f40;
  func_0x0001000118b8(0x100051f40,&UNK_10003c6e8);
  uVar2 = uVar1;
  FUN_10001af88();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_10004c2f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100051f48 = puVar3;
  return;
}



/* Entry: 10001af88; end: 10001afc7;  */

void FUN_10001af88(void)

{
  undefined *puVar1;
  
  if (puRam0000000100051f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003c334;
  _swift_getWitnessTable(&UNK_10003c334,&UNK_10004d7f8);
  puRam0000000100051f50 = puVar1;
  return;
}



/* Entry: 10001afc8; end: 10001b08f;  */

undefined8 FUN_10001afc8(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100010860(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10001b090; end: 10001b0a7;  */

void FUN_10001b090(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_100016cec(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
  _swift_unknownObjectRelease(*(undefined8 *)(lVar1 + 8));
  FUN_100016688(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                *(undefined1 *)(lVar1 + 0x20));
  if (*(long *)(lVar1 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x38));
  }
  lVar6 = (long)*(int *)(lVar2 + 0x30);
  uVar3 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar4 = lVar1 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar4,uVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1 + lVar6,lVar4);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar6));
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001b0a8; end: 10001b0e7;  */

void FUN_10001b0a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000100051f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003c748;
  _swift_getWitnessTable(&UNK_10003c748,&UNK_10004dd78);
  puRam0000000100051f68 = puVar1;
  return;
}



/* Entry: 10001b0e8; end: 10001b0eb;  */

void FUN_10001b0e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100016cec(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_100019814(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2);
  return;
}



/* Entry: 10001b0ec; end: 10001b13f;  */

void FUN_10001b0ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100016cec(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_100019814(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2);
  return;
}



/* Entry: 10001b140; end: 10001b23f;  */

void FUN_10001b140(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  FUN_100016cec(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
  _swift_unknownObjectRelease(*(undefined8 *)(lVar1 + 8));
  FUN_100016688(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                *(undefined1 *)(lVar1 + 0x20));
  if (*(long *)(lVar1 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x38));
  }
  lVar6 = (long)*(int *)(lVar2 + 0x30);
  uVar3 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar4 = lVar1 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar4,uVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1 + lVar6,lVar4);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar6));
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001b240; end: 10001b253;  */

void FUN_10001b240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100016cec(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  FUN_1000196c8(param_1,*(undefined8 *)(unaff_x20 + uVar4),
                *(undefined8 *)(unaff_x20 + (uVar4 + 0xf & 0xffffffffffffff8)),param_2,
                unaff_x20 + uVar5,uVar1,uVar2,&UNK_10004dc10,0x10001b744);
  return;
}



/* Entry: 10001b254; end: 10001b3e3;  */

void FUN_10001b254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100016cec(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  FUN_1000196c8(param_1,*(undefined8 *)(unaff_x20 + uVar4),
                *(undefined8 *)(unaff_x20 + (uVar4 + 0xf & 0xffffffffffffff8)),param_2,
                unaff_x20 + uVar5,uVar1,uVar2,param_3,param_4);
  return;
}



/* Entry: 10001b3e4; end: 10001b40f;  */

void FUN_10001b3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,param_5);
  return;
}



/* Entry: 10001b410; end: 10001b42f;  */

ulong * FUN_10001b410(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (0xfffffffe < *param_2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_retain(uVar1);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 10001b430; end: 10001b5a7;  */

ulong * FUN_10001b430(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (0xfffffffe < *param_2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_retain(uVar1);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 10001b5a8; end: 10001b697;  */

int FUN_10001b5a8(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 10001b698; end: 10001b6cb;  */

void FUN_10001b698(void)

{
  FUN_10001b6cc(0x100051f70,0x100051e10,&UNK_10003c550,
                PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_10004c780);
  return;
}



/* Entry: 10001b6cc; end: 10001b70f;  */

void FUN_10001b6cc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x0001000118b8(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10001b710; end: 10001b747;  */

ulong * FUN_10001b710(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (0xfffffffe < *param_2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_retain(uVar1);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 10001b748; end: 10001b7bf;  */

void FUN_10001b748(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040);
  func_0x00010003b1e0();
  func_0x00010003b160();
  _objc_release(puVar2);
  uVar3 = *param_1;
  lVar1 = param_1[1];
  _swift_getObjectType(uVar3);
  (**(code **)(lVar1 + 0x18))(param_1[2],param_1[3],uVar3,lVar1);
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])();
  }
  return;
}



/* Entry: 10001b7c0; end: 10001ba5f;  */

void FUN_10001b7c0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 **ppuVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  undefined1 auStack_2b0 [8];
  long lStack_2a8;
  undefined4 uStack_29c;
  undefined8 *puStack_298;
  undefined1 auStack_290 [96];
  undefined1 *puStack_230;
  undefined1 **ppuStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 **ppuStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  undefined1 **ppuStack_188;
  undefined1 uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined1 **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined1 **ppuStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  lVar3 = 0;
  puStack_298 = param_1;
  __s7SwiftUI4FontV6DesignOMa();
  lVar12 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar12 + 0x40));
  puVar7 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_e0 = *(undefined1 **)(param_3 + 0x10);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  ppuStack_d8 = (undefined1 **)uVar8;
  func_0x00010001c030();
  _swift_bridgeObjectRetain(uVar8);
  ppuVar5 = &puStack_e0;
  puVar9 = PTR___sSSN_10004ccd0;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  __s7SwiftUI4FontV6WeightV7regularAEvgZ();
  (**(code **)(lVar12 + 0x68))
            (puVar7,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_10004c5d8,lVar3);
  puVar6 = puVar7;
  __s7SwiftUI4FontV6system4size6weight6designAC12CoreGraphics7CGFloatV_AC6WeightVAC6DesignOtFZ
            (0x4039000000000000,param_2);
  (**(code **)(lVar12 + 8))(puVar7,lVar3);
  puVar7 = puVar6;
  ppuVar10 = ppuVar5;
  puVar11 = puVar9;
  lVar3 = lVar4;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  uStack_29c = SUB84(puVar11,0);
  lStack_2a8 = lVar3;
  _swift_release(puVar6);
  FUN_10001c070(ppuVar5,puVar9,lVar4);
  _swift_bridgeObjectRelease(param_6);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&puStack_140,uVar8,0,uVar1,0,param_6,puVar9);
  __s7SwiftUI5ColorV7primaryACvgZ();
  lVar4 = lStack_2a8;
  uVar2 = (undefined1)uStack_29c;
  lStack_1c8 = lStack_2a8;
  uStack_1b8 = ppuStack_138;
  puStack_1c0 = puStack_140;
  uStack_1a8 = lStack_128;
  uStack_1b0 = uStack_130;
  uStack_198 = uStack_118;
  uStack_1a0 = puStack_120;
  puVar9 = &UNK_10003c7b0;
  puStack_1e0 = puVar7;
  ppuStack_1d8 = ppuVar10;
  uStack_1d0 = uVar2;
  _swift_getKeyPath();
  uStack_208 = uStack_1b8;
  puStack_210 = puStack_1c0;
  uStack_1f8 = uStack_1a8;
  uStack_200 = uStack_1b0;
  uStack_1e8 = uStack_198;
  uStack_1f0 = uStack_1a0;
  uStack_220 = CONCAT71(uStack_1cf,uStack_1d0);
  ppuStack_228 = ppuStack_1d8;
  puStack_230 = puStack_1e0;
  lStack_218 = lStack_1c8;
  lStack_178 = lVar4;
  uStack_158 = lStack_128;
  uStack_160 = uStack_130;
  uStack_148 = uStack_118;
  uStack_150 = puStack_120;
  uStack_168 = ppuStack_138;
  puStack_170 = puStack_140;
  puStack_190 = puVar7;
  ppuStack_188 = ppuVar10;
  uStack_180 = uVar2;
  func_0x00010001c0d8(&puStack_1e0,&puStack_e0,0x100051f90,&UNK_10003c7a0);
  func_0x00010001c120(&puStack_190,0x100051f90,&UNK_10003c7a0);
  uStack_118 = uStack_208;
  puStack_120 = puStack_210;
  uStack_108 = uStack_1f8;
  uStack_110 = uStack_200;
  uStack_f8 = uStack_1e8;
  uStack_100 = uStack_1f0;
  ppuStack_138 = ppuStack_228;
  puStack_140 = puStack_230;
  lStack_128 = lStack_218;
  uStack_130 = uStack_220;
  uStack_a8 = uStack_1f8;
  uStack_b0 = uStack_200;
  uStack_98 = uStack_1e8;
  uStack_a0 = uStack_1f0;
  lStack_c8 = lStack_218;
  uStack_d0 = uStack_220;
  uStack_b8 = uStack_208;
  puStack_c0 = puStack_210;
  ppuStack_d8 = ppuStack_228;
  puStack_e0 = puStack_230;
  puStack_f0 = puVar9;
  uStack_e8 = uVar8;
  puStack_90 = puVar9;
  uStack_88 = uVar8;
  func_0x00010001c0d8(&puStack_140,auStack_290,0x100051f78,&UNK_10003c798);
  func_0x00010001c120(&puStack_e0,0x100051f78,&UNK_10003c798);
  puStack_298[5] = uStack_118;
  puStack_298[4] = puStack_120;
  puStack_298[7] = uStack_108;
  puStack_298[6] = uStack_110;
  puStack_298[9] = uStack_f8;
  puStack_298[8] = uStack_100;
  puStack_298[0xb] = uStack_e8;
  puStack_298[10] = puStack_f0;
  puStack_298[1] = ppuStack_138;
  *puStack_298 = puStack_140;
  puStack_298[3] = lStack_128;
  puStack_298[2] = uStack_130;
  return;
}



/* Entry: 10001ba60; end: 10001ba6b;  */

void FUN_10001ba60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 10001ba6c; end: 10001bb4f;  */

void FUN_10001ba6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined8 *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = unaff_x20[1];
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uVar5 = unaff_x20[7];
  uVar3 = unaff_x20[6];
  puVar1 = &UNK_10004ddb0;
  uStack_90 = uVar2;
  uStack_60 = uVar3;
  uStack_58 = uVar5;
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  _swift_allocObject(&UNK_10004ddb0,0x50,7);
  uVar4 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x28) = uVar7;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  uVar4 = unaff_x20[4];
  uVar7 = unaff_x20[7];
  uVar6 = unaff_x20[6];
  *(undefined8 *)(puVar1 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined8 *)(puVar1 + 0x48) = uVar7;
  *(undefined8 *)(puVar1 + 0x40) = uVar6;
  puStack_a0 = &uStack_90;
  _swift_unknownObjectRetain(uVar2);
  FUN_10001bedc(&uStack_50,auStack_c0);
  FUN_10001bf18(uVar3,uVar5);
  uVar2 = 0x100051f78;
  FUN_100010860(0x100051f78,&UNK_10003c798);
  uVar3 = uVar2;
  FUN_10001bf28();
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (param_1,FUN_10001becc,puVar1,0x10001bed4,auStack_b0,uVar2,uVar3);
  return;
}



/* Entry: 10001bb50; end: 10001bb63;  */

void FUN_10001bb50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  *param_1 = param_4;
  param_1[1] = param_10;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_7;
  param_1[7] = param_8;
  return;
}



/* Entry: 10001bb64; end: 10001bbd3;  */

long FUN_10001bb64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10001bbd4; end: 10001bc53;  */

undefined8 * FUN_10001bbd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  lVar2 = param_2[6];
  _swift_unknownObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar2 == 0) {
    lVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar2;
  }
  else {
    uVar1 = param_2[7];
    param_1[6] = lVar2;
    param_1[7] = uVar1;
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10001bc54; end: 10001bd23;  */

undefined8 * FUN_10001bc54(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar3;
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  lVar1 = param_2[6];
  if (param_1[6] == 0) {
    if (lVar1 != 0) {
      uVar3 = param_2[7];
      param_1[6] = lVar1;
      param_1[7] = uVar3;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar3 = param_2[7];
      uVar2 = param_1[7];
      param_1[6] = lVar1;
      param_1[7] = uVar3;
      _swift_retain();
      _swift_release(uVar2);
      return param_1;
    }
    _swift_release(param_1[7]);
  }
  lVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar1;
  return param_1;
}



/* Entry: 10001bd24; end: 10001bd37;  */

void FUN_10001bd24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 10001bd38; end: 10001bdd7;  */

undefined8 * FUN_10001bd38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_unknownObjectRelease(*param_1);
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  lVar3 = param_2[6];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  if (param_1[6] == 0) {
    if (lVar3 != 0) {
      uVar2 = param_2[7];
      param_1[6] = lVar3;
      param_1[7] = uVar2;
      return param_1;
    }
  }
  else {
    if (lVar3 != 0) {
      uVar1 = param_2[7];
      uVar2 = param_1[7];
      param_1[6] = lVar3;
      param_1[7] = uVar1;
      _swift_release(uVar2);
      return param_1;
    }
    _swift_release(param_1[7]);
  }
  lVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar3;
  return param_1;
}



/* Entry: 10001bdd8; end: 10001be8f;  */

int FUN_10001bdd8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10001be90; end: 10001becb;  */

void FUN_10001be90(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001becc; end: 10001bedb;  */

void FUN_10001becc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040);
  func_0x00010003b1e0();
  func_0x00010003b160();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar3);
  (**(code **)(lVar1 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),uVar3,lVar1);
  if (*(code **)(unaff_x20 + 0x40) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x40))();
  }
  return;
}



/* Entry: 10001bedc; end: 10001bf17;  */

undefined8 FUN_10001bedc(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___sSSN_10004ccd0 + -8) + 0x10))(param_2,param_1);
  return param_2;
}



/* Entry: 10001bf18; end: 10001bf27;  */

void FUN_10001bf18(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_10004cf40)(param_2);
    return;
  }
  return;
}



/* Entry: 10001bf28; end: 10001bfbf;  */

void FUN_10001bf28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100051f80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051f78;
  func_0x0001000118b8(0x100051f78,&UNK_10003c798);
  uVar2 = uVar1;
  FUN_10001bfc0();
  uVar3 = 0x100051f98;
  FUN_10001c194(0x100051f98,0x100051fa0,&UNK_10003c7a8,
                PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_10004c578);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100051f80 = puVar4;
  return;
}



/* Entry: 10001bfc0; end: 10001c06f;  */

void FUN_10001bfc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000100051f88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051f90;
  func_0x0001000118b8(0x100051f90,&UNK_10003c7a0);
  puStack_20 = PTR___s7SwiftUI4TextVAA4ViewAAWP_10004c608;
  puStack_18 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_10004c220;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &puStack_20);
  puRam0000000100051f88 = puVar2;
  return;
}



/* Entry: 10001c070; end: 10001c087;  */

void FUN_10001c070(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_10004cf38)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_10004ce50)(param_2);
  return;
}



/* Entry: 10001c088; end: 10001c15f;  */

void FUN_10001c088(undefined8 *param_1,undefined8 param_2)

{
  __s7SwiftUI17EnvironmentValuesV15foregroundColorAA0F0VSgvg();
  *param_1 = param_2;
  return;
}



/* Entry: 10001c160; end: 10001c193;  */

void FUN_10001c160(void)

{
  FUN_10001c194(0x100051fb0,0x100051fb8,&UNK_10003c7e0,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_10004c720);
  return;
}



/* Entry: 10001c194; end: 10001c1d7;  */

void FUN_10001c194(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x0001000118b8(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10001c1d8; end: 10001c1df;  */

void FUN_10001c1d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_10004ce58)(param_2);
  return;
}



/* Entry: 10001c1e0; end: 10001c233;  */

void FUN_10001c1e0(undefined8 *param_1)

{
  FUN_10001c234(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  if (param_1[5] != 0) {
    _swift_release(param_1[6]);
  }
  if (param_1[7] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_10004cf38)(param_1[8]);
    return;
  }
  return;
}



/* Entry: 10001c234; end: 10001c23b;  */

void FUN_10001c234(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_10004ce50)(param_2);
  return;
}



/* Entry: 10001c23c; end: 10001c413;  */

undefined8 * FUN_10001c23c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar5 = param_2[2];
  uVar2 = *(undefined1 *)(param_2 + 3);
  FUN_10001c1d8(uVar3,uVar1,uVar5,uVar2);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  *(undefined1 *)(param_1 + 3) = uVar2;
  lVar4 = param_2[5];
  param_1[4] = param_2[4];
  if (lVar4 == 0) {
    lVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = lVar4;
  }
  else {
    uVar3 = param_2[6];
    param_1[5] = lVar4;
    param_1[6] = uVar3;
    _swift_retain();
  }
  lVar4 = param_2[7];
  if (lVar4 == 0) {
    lVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar4;
  }
  else {
    uVar3 = param_2[8];
    param_1[7] = lVar4;
    param_1[8] = uVar3;
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10001c414; end: 10001c437;  */

void FUN_10001c414(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10001c438; end: 10001c52b;  */

undefined8 * FUN_10001c438(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = param_2[2];
  uVar1 = *(undefined1 *)(param_2 + 3);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[2] = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  FUN_10001c234(uVar3,uVar4,uVar7,uVar2);
  lVar6 = param_2[5];
  param_1[4] = param_2[4];
  if (param_1[5] == 0) {
    if (lVar6 != 0) {
      uVar4 = param_2[6];
      param_1[5] = lVar6;
      param_1[6] = uVar4;
      goto LAB_10001c4cc;
    }
  }
  else {
    if (lVar6 != 0) {
      uVar7 = param_2[6];
      uVar4 = param_1[6];
      param_1[5] = lVar6;
      param_1[6] = uVar7;
      _swift_release(uVar4);
      goto LAB_10001c4cc;
    }
    _swift_release(param_1[6]);
  }
  lVar6 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar6;
LAB_10001c4cc:
  lVar6 = param_2[7];
  if (param_1[7] == 0) {
    if (lVar6 != 0) {
      uVar4 = param_2[8];
      param_1[7] = lVar6;
      param_1[8] = uVar4;
      return param_1;
    }
  }
  else {
    if (lVar6 != 0) {
      uVar7 = param_2[8];
      uVar4 = param_1[8];
      param_1[7] = lVar6;
      param_1[8] = uVar7;
      _swift_release(uVar4);
      return param_1;
    }
    _swift_release(param_1[8]);
  }
  lVar6 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = lVar6;
  return param_1;
}



/* Entry: 10001c52c; end: 10001c60b;  */

int FUN_10001c52c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10001c60c; end: 10001ca6f;  */

void FUN_10001c60c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  undefined8 *unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar2 = 0;
  uStack_c8 = param_1;
  __s7SwiftUI10TapGestureVMa();
  pcStack_100 = *(code **)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)((long)pcStack_100 + 0x40));
  lVar7 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100051fc0;
  FUN_100010860(0x100051fc0,&UNK_10003c858);
  lStack_e0 = *(long *)(lVar2 + -8);
  lStack_f8 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lStack_e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar7 - extraout_x8_00;
  lVar2 = 0x100051fc8;
  FUN_100010860(0x100051fc8,&UNK_10003c860);
  lStack_e8 = *(long *)(lVar2 + -8);
  lStack_f0 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lStack_e8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = lVar10 - extraout_x8_01;
  lVar2 = 0x100051fd0;
  FUN_100010860(0x100051fd0,&UNK_10003c868);
  lStack_d0 = *(long *)(lVar2 + -8);
  lStack_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lStack_c0 = lVar9 - extraout_x8_02;
  uVar13 = 0x100051fd8;
  FUN_100010860(0x100051fd8,&UNK_10003c870);
  uVar3 = uVar13;
  FUN_10001d29c();
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (lVar9,FUN_10001ca70,0,FUN_10001d294,&lStack_b0,uVar13,uVar3);
  __s7SwiftUI10TapGestureV5countACSi_tcfC(lVar7,2);
  uStack_90 = *unaff_x20;
  uStack_88 = (undefined1)unaff_x20[1];
  uStack_7f = *(undefined8 *)((long)unaff_x20 + 0x11);
  uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 9) >> 0x38);
  uVar13 = unaff_x20[5];
  uVar15 = unaff_x20[6];
  uVar3 = unaff_x20[7];
  uVar17 = unaff_x20[8];
  puVar4 = &UNK_10004dea0;
  uStack_120 = uVar15;
  uStack_118 = uVar13;
  uStack_110 = uVar17;
  uStack_108 = uVar3;
  _swift_allocObject(&UNK_10004dea0,0x58,7);
  uVar12 = unaff_x20[4];
  uVar16 = unaff_x20[7];
  uVar14 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = uVar16;
  *(undefined8 *)(puVar4 + 0x40) = uVar14;
  *(undefined8 *)(puVar4 + 0x50) = unaff_x20[8];
  uVar16 = *unaff_x20;
  uVar14 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar16;
  *(undefined8 *)(puVar4 + 0x28) = uVar14;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  puVar5 = &UNK_10004dec8;
  _swift_allocObject(&UNK_10004dec8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10001d570;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  FUN_10001d5bc(&uStack_90,&lStack_b0);
  FUN_10001bf18(uVar13,uVar15);
  FUN_10001bf18(uVar3,uVar17);
  lVar2 = lStack_b8;
  __s7SwiftUI7GesturePAAE7onEndedyAA01_eC0VyxGy5ValueQzcF
            (lVar10,FUN_10001d59c,puVar5,lStack_b8,PTR___s7SwiftUI10TapGestureVAA0D0AAWP_10004c140);
  _swift_release(puVar5);
  pcStack_100 = *(code **)((long)pcStack_100 + 8);
  lVar6 = lVar7;
  (*pcStack_100)(lVar7,lVar2);
  __s7SwiftUI11GestureMaskV3allACvgZ();
  uVar13 = 0x100052048;
  FUN_10001d618(0x100052048,0x100051fc8,&UNK_10003c860,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_10004c720);
  uVar3 = 0x100052050;
  FUN_10001d618(0x100052050,0x100051fc0,&UNK_10003c858,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_10004c278);
  lVar1 = lStack_f0;
  lVar2 = lStack_f8;
  __s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lF
            (lStack_c0,lVar10,lVar6,lStack_f0,lStack_f8,uVar13,uVar3);
  pcVar11 = *(code **)(lStack_e0 + 8);
  (*pcVar11)(lVar10,lVar2);
  (**(code **)(lStack_e8 + 8))(lVar9,lVar1);
  __s7SwiftUI10TapGestureV5countACSi_tcfC(lVar7,1);
  puVar4 = &UNK_10004def0;
  _swift_allocObject(&UNK_10004def0,0x58,7);
  uVar13 = unaff_x20[4];
  uVar17 = unaff_x20[7];
  uVar15 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar13;
  *(undefined8 *)(puVar4 + 0x48) = uVar17;
  *(undefined8 *)(puVar4 + 0x40) = uVar15;
  *(undefined8 *)(puVar4 + 0x50) = unaff_x20[8];
  uVar17 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar17;
  *(undefined8 *)(puVar4 + 0x28) = uVar15;
  *(undefined8 *)(puVar4 + 0x20) = uVar13;
  puVar5 = &UNK_10004df18;
  _swift_allocObject(&UNK_10004df18,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10001d6a8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  FUN_10001d5bc(&uStack_90,&lStack_b0);
  FUN_10001bf18(uStack_118,uStack_120);
  FUN_10001bf18(uStack_108,uStack_110);
  lVar6 = lStack_b8;
  __s7SwiftUI7GesturePAAE7onEndedyAA01_eC0VyxGy5ValueQzcF
            (lVar10,0x10001dab0,puVar5,lStack_b8,PTR___s7SwiftUI10TapGestureVAA0D0AAWP_10004c140);
  _swift_release(puVar5);
  (*pcStack_100)(lVar7,lVar6);
  __s7SwiftUI11GestureMaskV3allACvgZ();
  lStack_b0 = lVar1;
  lStack_a8 = lVar2;
  plVar8 = &lStack_b0;
  _swift_getOpaqueTypeConformance
            (plVar8,
             PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_10004c660
             ,1);
  lVar6 = lStack_c0;
  lVar1 = lStack_d8;
  __s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lF
            (uStack_c8,lVar10,lVar7,lStack_d8,lVar2,plVar8,uVar3);
  (*pcVar11)(lVar10,lVar2);
  (**(code **)(lStack_d0 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 10001ca70; end: 10001ca73;  */

void FUN_10001ca70(void)

{
  return;
}



/* Entry: 10001ca74; end: 10001cd97;  */

void FUN_10001ca74(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_630 [240];
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_2;
  FUN_10001cd98(&uStack_260);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_148 = uStack_238;
  uStack_150 = uStack_240;
  uStack_138 = uStack_228;
  uStack_140 = uStack_230;
  uStack_12f = uStack_21f;
  uStack_128 = uStack_218;
  uStack_137 = uStack_227;
  uStack_130 = uStack_220;
  uStack_158 = uStack_248;
  uStack_160 = uStack_250;
  uStack_168 = uStack_258;
  uStack_170 = uStack_260;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_290,0,1,uVar2,0,lVar1,param_3);
  uStack_2b8 = uStack_148;
  uStack_2c0 = uStack_150;
  uStack_2a8 = uStack_138;
  uStack_2b0 = uStack_140;
  uStack_29f = uStack_12f;
  uStack_298 = uStack_128;
  uStack_2a7 = uStack_137;
  uStack_2a0 = uStack_130;
  uStack_2d8 = uStack_168;
  uStack_2e0 = uStack_170;
  uStack_2c8 = uStack_158;
  uStack_2d0 = uStack_160;
  uStack_f8 = uStack_238;
  uStack_100 = uStack_240;
  uStack_f0 = uStack_230;
  uStack_108 = uStack_248;
  uStack_110 = uStack_250;
  uStack_118 = uStack_258;
  uStack_120 = uStack_260;
  FUN_10001d6b0(&uStack_170,&uStack_3d0,0x100052000,&UNK_10003c880);
  func_0x00010001d6f8(&uStack_120,0x100052000,&UNK_10003c880);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_78 = uStack_288;
  uStack_80 = uStack_290;
  uStack_68 = uStack_278;
  uStack_70 = uStack_280;
  uStack_58 = uStack_268;
  uStack_60 = uStack_270;
  uStack_c8 = uStack_2d8;
  uStack_d0 = uStack_2e0;
  uStack_b8 = uStack_2c8;
  uStack_c0 = uStack_2d0;
  uStack_a8 = uStack_2b8;
  uStack_b0 = uStack_2c0;
  uStack_a0 = uStack_2b0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_1e0,0x4044000000000000,0,0,1,0x7ff0000000000000,0,0,1,0,1);
  uStack_218 = uStack_298;
  uStack_217 = uStack_297;
  uStack_220 = uStack_2a0;
  uStack_21f = uStack_29f;
  uStack_208 = uStack_288;
  uStack_210 = uStack_290;
  uStack_1f8 = uStack_278;
  uStack_200 = uStack_280;
  uStack_1e8 = uStack_268;
  uStack_1f0 = uStack_270;
  uStack_258 = uStack_2d8;
  uStack_260 = uStack_2e0;
  uStack_248 = uStack_2c8;
  uStack_250 = uStack_2d0;
  uStack_238 = uStack_2b8;
  uStack_240 = uStack_2c0;
  uStack_228 = uStack_2a8;
  uStack_227 = uStack_2a7;
  uStack_230 = uStack_2b0;
  uStack_538 = uStack_2d8;
  uStack_540 = uStack_2e0;
  uStack_528 = uStack_2c8;
  uStack_530 = uStack_2d0;
  uStack_518 = uStack_2b8;
  uStack_520 = uStack_2c0;
  uStack_510 = uStack_2b0;
  uStack_4e8 = uStack_288;
  uStack_4f0 = uStack_290;
  uStack_4d8 = uStack_278;
  uStack_4e0 = uStack_280;
  uStack_4c8 = uStack_268;
  uStack_4d0 = uStack_270;
  FUN_10001d6b0(&uStack_d0,&uStack_3d0,0x100051ff0,&UNK_10003c878);
  func_0x00010001d6f8(&uStack_540,0x100051ff0,&UNK_10003c878);
  uStack_3f8 = uStack_198;
  uStack_400 = uStack_1a0;
  uStack_3e8 = uStack_188;
  uStack_3f0 = uStack_190;
  uStack_3d8 = uStack_178;
  uStack_3e0 = uStack_180;
  uStack_438 = uStack_1d8;
  uStack_440 = uStack_1e0;
  uStack_428 = uStack_1c8;
  uStack_430 = uStack_1d0;
  uStack_418 = uStack_1b8;
  uStack_420 = uStack_1c0;
  uStack_408 = uStack_1a8;
  uStack_410 = uStack_1b0;
  uStack_478 = CONCAT71(uStack_217,uStack_218);
  uStack_480 = CONCAT71(uStack_21f,uStack_220);
  uStack_468 = uStack_208;
  uStack_470 = uStack_210;
  uStack_458 = uStack_1f8;
  uStack_460 = uStack_200;
  uStack_448 = uStack_1e8;
  uStack_450 = uStack_1f0;
  uStack_4b8 = uStack_258;
  uStack_4c0 = uStack_260;
  uStack_4a8 = uStack_248;
  uStack_4b0 = uStack_250;
  uStack_488 = CONCAT71(uStack_227,uStack_228);
  uStack_498 = uStack_238;
  uStack_4a0 = uStack_240;
  uStack_490 = uStack_230;
  uStack_308 = uStack_198;
  uStack_310 = uStack_1a0;
  uStack_2f8 = uStack_188;
  uStack_300 = uStack_190;
  uStack_2e8 = uStack_178;
  uStack_2f0 = uStack_180;
  uStack_348 = uStack_1d8;
  uStack_350 = uStack_1e0;
  uStack_338 = uStack_1c8;
  uStack_340 = uStack_1d0;
  uStack_328 = uStack_1b8;
  uStack_330 = uStack_1c0;
  uStack_318 = uStack_1a8;
  uStack_320 = uStack_1b0;
  uStack_378 = uStack_208;
  uStack_380 = uStack_210;
  uStack_368 = uStack_1f8;
  uStack_370 = uStack_200;
  uStack_358 = uStack_1e8;
  uStack_360 = uStack_1f0;
  uStack_3c8 = uStack_258;
  uStack_3d0 = uStack_260;
  uStack_3b8 = uStack_248;
  uStack_3c0 = uStack_250;
  uStack_3a8 = uStack_238;
  uStack_3b0 = uStack_240;
  uStack_3a0 = uStack_230;
  FUN_10001d6b0(&uStack_4c0,auStack_630,0x100051fd8,&UNK_10003c870);
  func_0x00010001d6f8(&uStack_3d0,0x100051fd8,&UNK_10003c870);
  param_1[0x19] = uStack_3f8;
  param_1[0x18] = uStack_400;
  param_1[0x1b] = uStack_3e8;
  param_1[0x1a] = uStack_3f0;
  param_1[0x1d] = uStack_3d8;
  param_1[0x1c] = uStack_3e0;
  param_1[0x11] = uStack_438;
  param_1[0x10] = uStack_440;
  param_1[0x13] = uStack_428;
  param_1[0x12] = uStack_430;
  param_1[0x15] = uStack_418;
  param_1[0x14] = uStack_420;
  param_1[0x17] = uStack_408;
  param_1[0x16] = uStack_410;
  param_1[9] = uStack_478;
  param_1[8] = uStack_480;
  param_1[0xb] = uStack_468;
  param_1[10] = uStack_470;
  param_1[0xd] = uStack_458;
  param_1[0xc] = uStack_460;
  param_1[0xf] = uStack_448;
  param_1[0xe] = uStack_450;
  param_1[1] = uStack_4b8;
  *param_1 = uStack_4c0;
  param_1[3] = uStack_4a8;
  param_1[2] = uStack_4b0;
  param_1[5] = uStack_498;
  param_1[4] = uStack_4a0;
  param_1[7] = uStack_488;
  param_1[6] = uStack_490;
  return;
}



/* Entry: 10001cd98; end: 10001d1a7;  */

void FUN_10001cd98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_200 [8];
  long *plStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined1 *puStack_1a0;
  long lStack_198;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined6 uStack_166;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  undefined1 uStack_158;
  undefined6 uStack_150;
  undefined2 uStack_14a;
  undefined6 uStack_148;
  undefined2 uStack_142;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined1 auStack_b0 [64];
  
  lVar1 = 0;
  plStack_1f8 = param_1;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar13 + 0x40));
  puVar4 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s7SwiftUI4FontV6DesignOMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *unaff_x20;
  uVar7 = unaff_x20[1];
  dVar10 = (double)unaff_x20[2];
  dVar14 = (double)unaff_x20[4] + -12.0;
  if (dVar14 < 0.0) {
    dVar14 = 0.0;
  }
  if (dVar10 <= dVar14) {
    dVar14 = dVar10;
  }
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    _swift_bridgeObjectRetain(uVar7);
    __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(uVar8,uVar7,0);
    (**(code **)(lVar13 + 0x68))
              (puVar4,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_10004c6b8
               ,lVar1);
    puVar3 = puVar4;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,puVar4,uVar8);
    _swift_release(uVar8);
    (**(code **)(lVar13 + 8))(puVar4,lVar1);
    __s7SwiftUI9AlignmentV6centerACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (auStack_b0,0,1,dVar14,0,puVar4,lVar1);
    uStack_142 = (undefined2)auStack_b0._8_8_;
    uStack_140 = SUB86(auStack_b0._8_8_,2);
    uStack_14a = (undefined2)auStack_b0._0_8_;
    uStack_148 = SUB86(auStack_b0._0_8_,2);
    uStack_132 = (undefined2)auStack_b0._24_8_;
    uStack_130 = SUB86(auStack_b0._24_8_,2);
    uStack_13a = (undefined2)auStack_b0._16_8_;
    uStack_138 = SUB86(auStack_b0._16_8_,2);
    uStack_122 = (undefined2)auStack_b0._40_8_;
    uStack_120 = SUB86(auStack_b0._40_8_,2);
    uStack_12a = (undefined2)auStack_b0._32_8_;
    uStack_128 = SUB86(auStack_b0._32_8_,2);
    uStack_1d6 = uStack_148;
    uStack_1d0 = uStack_142;
    uStack_1de = uStack_150;
    uStack_1d8 = uStack_14a;
    uStack_1c6 = uStack_138;
    uStack_1c0 = uStack_132;
    uStack_1ce = uStack_140;
    uStack_1c8 = uStack_13a;
    uStack_1b6 = uStack_128;
    uStack_1be = uStack_130;
    uStack_1b8 = uStack_12a;
    uStack_1e8 = 0;
    uStack_1e0 = 1;
    lStack_198 = 0;
    uStack_190 = 1;
    uStack_166 = uStack_128;
    uStack_160 = (undefined1)auStack_b0._40_8_;
    uStack_15f = SUB81(auStack_b0._40_8_,1);
    uStack_16e = uStack_130;
    uStack_168 = (undefined1)auStack_b0._32_8_;
    uStack_167 = SUB81(auStack_b0._32_8_,1);
    uStack_176 = uStack_138;
    uStack_170 = uStack_132;
    uStack_17e = uStack_140;
    uStack_178 = uStack_13a;
    uStack_186 = uStack_148;
    uStack_180 = uStack_142;
    uStack_188 = uStack_14a;
    uVar8 = 0x100051cf0;
    puStack_1f0 = puVar3;
    uStack_1b0 = uStack_122;
    uStack_1ae = uStack_120;
    puStack_1a0 = puVar3;
    uStack_15e = uStack_120;
    FUN_10001d6b0(&puStack_1f0,&puStack_100,0x100051cf0,&UNK_10003c3c0);
    func_0x00010001d6f8(&puStack_1a0,0x100051cf0,&UNK_10003c3c0);
    uStack_128 = (undefined6)CONCAT62(uStack_1c6,uStack_1c8);
    uStack_122 = (undefined2)((uint6)uStack_1c6 >> 0x20);
    uStack_130 = (undefined6)CONCAT62(uStack_1ce,uStack_1d0);
    uStack_12a = (undefined2)((uint6)uStack_1ce >> 0x20);
    uStack_118 = (undefined1)uStack_1b8;
    uStack_117 = (undefined7)(CONCAT62(uStack_1b6,uStack_1b8) >> 8);
    uStack_120 = (undefined6)CONCAT62(uStack_1be,uStack_1c0);
    uStack_11a = (undefined2)((uint6)uStack_1be >> 0x20);
    uStack_110 = (undefined1)uStack_1b0;
    uStack_10f = (undefined7)(CONCAT62(uStack_1ae,uStack_1b0) >> 8);
    uStack_148 = (undefined6)uStack_1e8;
    uStack_142 = (undefined2)((ulong)uStack_1e8 >> 0x30);
    uStack_150 = SUB86(puStack_1f0,0);
    uStack_14a = (undefined2)((ulong)puStack_1f0 >> 0x30);
    uStack_138 = (undefined6)CONCAT62(uStack_1d6,uStack_1d8);
    uStack_132 = (undefined2)((uint6)uStack_1d6 >> 0x20);
    uStack_140 = (undefined6)CONCAT62(uStack_1de,uStack_1e0);
    uStack_13a = (undefined2)((uint6)uStack_1de >> 0x20);
    uStack_108 = 1;
    uVar7 = 0x100052010;
    FUN_100010860(0x100052010,&UNK_10003c888);
    FUN_100010860(0x100051cf0,&UNK_10003c3c0);
    uVar9 = uVar8;
    func_0x00010001d3cc();
    uVar5 = 0x100051ce8;
    FUN_10001d4fc(0x100051ce8,0x100051cf0,&UNK_10003c3c0,FUN_100016040);
  }
  else {
    FUN_10001c1d8(uVar8,uVar7);
    _swift_bridgeObjectRetain(uVar7);
    uVar5 = uVar8;
    __s7SwiftUI5ImageV10systemNameACSS_tcfC(uVar8,uVar7);
    __s7SwiftUI4FontV6WeightV7regularAEvgZ();
    (**(code **)(lVar12 + 0x68))
              (lVar11,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_10004c5d8,lVar2);
    lVar1 = lVar11;
    __s7SwiftUI4FontV6system4size6weight6designAC12CoreGraphics7CGFloatV_AC6WeightVAC6DesignOtFZ
              (dVar14,dVar10);
    (**(code **)(lVar12 + 8))(lVar11,lVar2);
    puVar6 = &UNK_10003c8b8;
    _swift_getKeyPath();
    uStack_150 = (undefined6)uVar5;
    uStack_14a = (undefined2)((ulong)uVar5 >> 0x30);
    uStack_148 = 0;
    uStack_142 = 0;
    uStack_140 = (undefined6)uVar8;
    uStack_13a = (undefined2)((ulong)uVar8 >> 0x30);
    uStack_138 = (undefined6)uVar7;
    uStack_132 = (undefined2)((ulong)uVar7 >> 0x30);
    uStack_130 = SUB86(puVar6,0);
    uStack_12a = (undefined2)((ulong)puVar6 >> 0x30);
    uStack_128 = (undefined6)lVar1;
    uStack_122 = (undefined2)((ulong)lVar1 >> 0x30);
    uStack_108 = 0;
    uVar7 = 0x100052010;
    FUN_100010860(0x100052010,&UNK_10003c888);
    uVar8 = 0x100051cf0;
    FUN_100010860(0x100051cf0,&UNK_10003c3c0);
    uVar9 = uVar8;
    func_0x00010001d3cc();
    uVar5 = 0x100051ce8;
    FUN_10001d4fc(0x100051ce8,0x100051cf0,&UNK_10003c3c0,FUN_100016040);
  }
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (&puStack_100,&uStack_150,uVar7,uVar8,uVar9,uVar5);
  uStack_178 = (undefined2)lStack_d8;
  uStack_176 = (undefined6)((ulong)lStack_d8 >> 0x10);
  uStack_180 = (undefined2)lStack_e0;
  uStack_17e = (undefined6)((ulong)lStack_e0 >> 0x10);
  uStack_170 = (undefined2)lStack_d0;
  uStack_16e = (undefined6)((ulong)lStack_d0 >> 0x10);
  uStack_15f = (undefined1)uStack_bf;
  uStack_15e = (undefined6)((ulong)uStack_bf >> 8);
  uStack_158 = (undefined1)((ulong)uStack_bf >> 0x38);
  uStack_167 = (undefined1)uStack_c7;
  uStack_166 = (undefined6)((uint7)uStack_c7 >> 8);
  lStack_198 = lStack_f8;
  puStack_1a0 = puStack_100;
  uStack_188 = (undefined2)lStack_e8;
  uStack_186 = (undefined6)((ulong)lStack_e8 >> 0x10);
  uStack_190 = (undefined2)lStack_f0;
  uStack_18e = (undefined6)((ulong)lStack_f0 >> 0x10);
  plStack_1f8[5] = lStack_d8;
  plStack_1f8[4] = lStack_e0;
  plStack_1f8[7] = CONCAT71(uStack_c7,uStack_c8);
  plStack_1f8[6] = lStack_d0;
  *(undefined8 *)((long)plStack_1f8 + 0x41) = uStack_bf;
  *(ulong *)((long)plStack_1f8 + 0x39) = CONCAT17(uStack_c0,uStack_c7);
  plStack_1f8[1] = lStack_f8;
  *plStack_1f8 = (long)puStack_100;
  plStack_1f8[3] = lStack_e8;
  plStack_1f8[2] = lStack_f0;
  uStack_128 = (undefined6)lStack_d8;
  uStack_122 = (undefined2)((ulong)lStack_d8 >> 0x30);
  uStack_130 = (undefined6)lStack_e0;
  uStack_12a = (undefined2)((ulong)lStack_e0 >> 0x30);
  uStack_120 = (undefined6)lStack_d0;
  uStack_11a = (undefined2)((ulong)lStack_d0 >> 0x30);
  uStack_148 = (undefined6)lStack_f8;
  uStack_142 = (undefined2)((ulong)lStack_f8 >> 0x30);
  uStack_150 = SUB86(puStack_100,0);
  uStack_14a = (undefined2)((ulong)puStack_100 >> 0x30);
  uStack_138 = (undefined6)lStack_e8;
  uStack_132 = (undefined2)((ulong)lStack_e8 >> 0x30);
  uStack_140 = (undefined6)lStack_f0;
  uStack_13a = (undefined2)((ulong)lStack_f0 >> 0x30);
  uStack_10f = (undefined7)uStack_bf;
  uStack_108 = uStack_158;
  FUN_10001d6b0(&puStack_1a0,&puStack_1f0,0x100052000,&UNK_10003c880);
  func_0x00010001d6f8(&uStack_150,0x100052000,&UNK_10003c880);
  return;
}



/* Entry: 10001d1a8; end: 10001d247;  */

void FUN_10001d1a8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040);
  func_0x00010003b1e0();
  func_0x00010003b160();
  _objc_release(puVar1);
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))();
  }
  return;
}



/* Entry: 10001d248; end: 10001d253;  */

void FUN_10001d248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 10001d254; end: 10001d293;  */

void FUN_10001d254(void)

{
  FUN_10001c60c();
  return;
}



/* Entry: 10001d294; end: 10001d29b;  */

void FUN_10001d294(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_630 [240];
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar2;
  FUN_10001cd98(&uStack_260);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_148 = uStack_238;
  uStack_150 = uStack_240;
  uStack_138 = uStack_228;
  uStack_140 = uStack_230;
  uStack_12f = uStack_21f;
  uStack_128 = uStack_218;
  uStack_137 = uStack_227;
  uStack_130 = uStack_220;
  uStack_158 = uStack_248;
  uStack_160 = uStack_250;
  uStack_168 = uStack_258;
  uStack_170 = uStack_260;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_290,0,1,uVar3,0,lVar1,param_3);
  uStack_2b8 = uStack_148;
  uStack_2c0 = uStack_150;
  uStack_2a8 = uStack_138;
  uStack_2b0 = uStack_140;
  uStack_29f = uStack_12f;
  uStack_298 = uStack_128;
  uStack_2a7 = uStack_137;
  uStack_2a0 = uStack_130;
  uStack_2d8 = uStack_168;
  uStack_2e0 = uStack_170;
  uStack_2c8 = uStack_158;
  uStack_2d0 = uStack_160;
  uStack_f8 = uStack_238;
  uStack_100 = uStack_240;
  uStack_f0 = uStack_230;
  uStack_108 = uStack_248;
  uStack_110 = uStack_250;
  uStack_118 = uStack_258;
  uStack_120 = uStack_260;
  FUN_10001d6b0(&uStack_170,&uStack_3d0,0x100052000,&UNK_10003c880);
  func_0x00010001d6f8(&uStack_120,0x100052000,&UNK_10003c880);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_78 = uStack_288;
  uStack_80 = uStack_290;
  uStack_68 = uStack_278;
  uStack_70 = uStack_280;
  uStack_58 = uStack_268;
  uStack_60 = uStack_270;
  uStack_c8 = uStack_2d8;
  uStack_d0 = uStack_2e0;
  uStack_b8 = uStack_2c8;
  uStack_c0 = uStack_2d0;
  uStack_a8 = uStack_2b8;
  uStack_b0 = uStack_2c0;
  uStack_a0 = uStack_2b0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_1e0,0x4044000000000000,0,0,1,0x7ff0000000000000,0,0,1,0,1);
  uStack_218 = uStack_298;
  uStack_217 = uStack_297;
  uStack_220 = uStack_2a0;
  uStack_21f = uStack_29f;
  uStack_208 = uStack_288;
  uStack_210 = uStack_290;
  uStack_1f8 = uStack_278;
  uStack_200 = uStack_280;
  uStack_1e8 = uStack_268;
  uStack_1f0 = uStack_270;
  uStack_258 = uStack_2d8;
  uStack_260 = uStack_2e0;
  uStack_248 = uStack_2c8;
  uStack_250 = uStack_2d0;
  uStack_238 = uStack_2b8;
  uStack_240 = uStack_2c0;
  uStack_228 = uStack_2a8;
  uStack_227 = uStack_2a7;
  uStack_230 = uStack_2b0;
  uStack_538 = uStack_2d8;
  uStack_540 = uStack_2e0;
  uStack_528 = uStack_2c8;
  uStack_530 = uStack_2d0;
  uStack_518 = uStack_2b8;
  uStack_520 = uStack_2c0;
  uStack_510 = uStack_2b0;
  uStack_4e8 = uStack_288;
  uStack_4f0 = uStack_290;
  uStack_4d8 = uStack_278;
  uStack_4e0 = uStack_280;
  uStack_4c8 = uStack_268;
  uStack_4d0 = uStack_270;
  FUN_10001d6b0(&uStack_d0,&uStack_3d0,0x100051ff0,&UNK_10003c878);
  func_0x00010001d6f8(&uStack_540,0x100051ff0,&UNK_10003c878);
  uStack_3f8 = uStack_198;
  uStack_400 = uStack_1a0;
  uStack_3e8 = uStack_188;
  uStack_3f0 = uStack_190;
  uStack_3d8 = uStack_178;
  uStack_3e0 = uStack_180;
  uStack_438 = uStack_1d8;
  uStack_440 = uStack_1e0;
  uStack_428 = uStack_1c8;
  uStack_430 = uStack_1d0;
  uStack_418 = uStack_1b8;
  uStack_420 = uStack_1c0;
  uStack_408 = uStack_1a8;
  uStack_410 = uStack_1b0;
  uStack_478 = CONCAT71(uStack_217,uStack_218);
  uStack_480 = CONCAT71(uStack_21f,uStack_220);
  uStack_468 = uStack_208;
  uStack_470 = uStack_210;
  uStack_458 = uStack_1f8;
  uStack_460 = uStack_200;
  uStack_448 = uStack_1e8;
  uStack_450 = uStack_1f0;
  uStack_4b8 = uStack_258;
  uStack_4c0 = uStack_260;
  uStack_4a8 = uStack_248;
  uStack_4b0 = uStack_250;
  uStack_488 = CONCAT71(uStack_227,uStack_228);
  uStack_498 = uStack_238;
  uStack_4a0 = uStack_240;
  uStack_490 = uStack_230;
  uStack_308 = uStack_198;
  uStack_310 = uStack_1a0;
  uStack_2f8 = uStack_188;
  uStack_300 = uStack_190;
  uStack_2e8 = uStack_178;
  uStack_2f0 = uStack_180;
  uStack_348 = uStack_1d8;
  uStack_350 = uStack_1e0;
  uStack_338 = uStack_1c8;
  uStack_340 = uStack_1d0;
  uStack_328 = uStack_1b8;
  uStack_330 = uStack_1c0;
  uStack_318 = uStack_1a8;
  uStack_320 = uStack_1b0;
  uStack_378 = uStack_208;
  uStack_380 = uStack_210;
  uStack_368 = uStack_1f8;
  uStack_370 = uStack_200;
  uStack_358 = uStack_1e8;
  uStack_360 = uStack_1f0;
  uStack_3c8 = uStack_258;
  uStack_3d0 = uStack_260;
  uStack_3b8 = uStack_248;
  uStack_3c0 = uStack_250;
  uStack_3a8 = uStack_238;
  uStack_3b0 = uStack_240;
  uStack_3a0 = uStack_230;
  FUN_10001d6b0(&uStack_4c0,auStack_630,0x100051fd8,&UNK_10003c870);
  func_0x00010001d6f8(&uStack_3d0,0x100051fd8,&UNK_10003c870);
  param_1[0x19] = uStack_3f8;
  param_1[0x18] = uStack_400;
  param_1[0x1b] = uStack_3e8;
  param_1[0x1a] = uStack_3f0;
  param_1[0x1d] = uStack_3d8;
  param_1[0x1c] = uStack_3e0;
  param_1[0x11] = uStack_438;
  param_1[0x10] = uStack_440;
  param_1[0x13] = uStack_428;
  param_1[0x12] = uStack_430;
  param_1[0x15] = uStack_418;
  param_1[0x14] = uStack_420;
  param_1[0x17] = uStack_408;
  param_1[0x16] = uStack_410;
  param_1[9] = uStack_478;
  param_1[8] = uStack_480;
  param_1[0xb] = uStack_468;
  param_1[10] = uStack_470;
  param_1[0xd] = uStack_458;
  param_1[0xc] = uStack_460;
  param_1[0xf] = uStack_448;
  param_1[0xe] = uStack_450;
  param_1[1] = uStack_4b8;
  *param_1 = uStack_4c0;
  param_1[3] = uStack_4a8;
  param_1[2] = uStack_4b0;
  param_1[5] = uStack_498;
  param_1[4] = uStack_4a0;
  param_1[7] = uStack_488;
  param_1[6] = uStack_490;
  return;
}



/* Entry: 10001d29c; end: 10001d4fb;  */

void FUN_10001d29c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100051fe0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051fd8;
  func_0x0001000118b8(0x100051fd8,&UNK_10003c870);
  uVar2 = 0x100051fe8;
  FUN_10001d4fc(0x100051fe8,0x100051ff0,&UNK_10003c878,0x10001d334);
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_10004c3b8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100051fe0 = puVar3;
  return;
}



/* Entry: 10001d4fc; end: 10001d56b;  */

void FUN_10001d4fc(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x0001000118b8(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_10004c220;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
    uStack_40 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 10001d56c; end: 10001d577;  */

void FUN_10001d56c(void)

{
  long unaff_x20;
  
  FUN_10001c234(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001d578; end: 10001d59b;  */

void FUN_10001d578(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001d59c; end: 10001d5bb;  */

void FUN_10001d59c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10001d5bc; end: 10001d617;  */

undefined8 * FUN_10001d5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = *(undefined1 *)(param_1 + 3);
  FUN_10001c1d8(uVar1,uVar2,uVar4,uVar3);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar4;
  *(undefined1 *)(param_2 + 3) = uVar3;
  return param_2;
}



/* Entry: 10001d618; end: 10001d65b;  */

void FUN_10001d618(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x0001000118b8(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10001d65c; end: 10001d6a7;  */

void FUN_10001d65c(void)

{
  long unaff_x20;
  
  FUN_10001c234(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001d6a8; end: 10001d6af;  */

void FUN_10001d6a8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040);
  func_0x00010003b1e0();
  func_0x00010003b160();
  _objc_release(puVar1);
  if (*(code **)(unaff_x20 + 0x38) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x38))();
  }
  return;
}



/* Entry: 10001d6b0; end: 10001d7b3;  */

undefined8 FUN_10001d6b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10001d7b4; end: 10001d7c7;  */

void FUN_10001d7b4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_10004ce50)
            (*param_1,param_1[1],param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Entry: 10001d7c8; end: 10001d88f;  */

undefined8 * FUN_10001d7c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_10001c1d8(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 10001d890; end: 10001d8a3;  */

void FUN_10001d890(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10001d8a4; end: 10001d8ef;  */

undefined8 * FUN_10001d8a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_10001c234(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10001d8f0; end: 10001d9a3;  */

int FUN_10001d8f0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10001d9a4; end: 10001daab;  */

void FUN_10001d9a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar7 = &uStack_70;
  uVar2 = 0x100051fd0;
  func_0x0001000118b8(0x100051fd0,&UNK_10003c868);
  uVar3 = 0x100051fc0;
  func_0x0001000118b8(0x100051fc0,&UNK_10003c858);
  uVar4 = 0x100051fc8;
  func_0x0001000118b8(0x100051fc8,&UNK_10003c860);
  uVar5 = 0x100052048;
  FUN_10001d618(0x100052048,0x100051fc8,&UNK_10003c860,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_10004c720);
  uVar6 = 0x100052050;
  FUN_10001d618(0x100052050,0x100051fc0,&UNK_10003c858,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_10004c278);
  puVar1 = 
  PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_10004c660
  ;
  uStack_70 = uVar4;
  uStack_68 = uVar3;
  puStack_60 = (undefined1 *)uVar5;
  uStack_58 = uVar6;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_10004c660
             ,1);
  uStack_70 = uVar2;
  uStack_68 = uVar3;
  puStack_60 = (undefined1 *)puVar7;
  uStack_58 = uVar6;
  _swift_getOpaqueTypeConformance(&uStack_70,puVar1,1);
  return;
}



/* Entry: 10001daac; end: 10001dabf;  */

void FUN_10001daac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001dac0; end: 10001db93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10001dac0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_100052058) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100052060) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100052068) = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x8000000100045db0);
  _objc_release();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _swift_bridgeObjectRelease();
  }
  FUN_10001eac8();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_initWithNibName_bundle__100050c08,param_1,
                      param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10001db94; end: 10001dbf3; -[KeyboardHomeViewController initWithNibName:bundle:] */

void FUN_10001db94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_4);
  FUN_10001dac0(param_3,param_2,param_4);
  return;
}



/* Entry: 10001dbf4; end: 10001dc6f; -[KeyboardHomeViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001dbf4(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_100052058) = 0;
  *(undefined8 *)(param_1 + _DAT_100052060) = 0;
  *(undefined8 *)(param_1 + _DAT_100052068) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x8000000100045d80,
             "SnapchatKeyboardExtension_lib/KeyboardHomeViewController.swift",0x3e,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001dc70);
  (*pcVar1)();
}



/* Entry: 10001dc70; end: 10001e247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001dc70(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  long unaff_x20;
  undefined8 ***apppuStack_88 [2];
  undefined1 uStack_78;
  
  FUN_10001eac8();
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_viewDidLoad_100050c00);
  FUN_10001e768();
  lVar2 = unaff_x20;
  func_0x00010003b120();
  lVar3 = unaff_x20;
  func_0x00010003b300();
  puVar4 = &UNK_10004e060;
  _swift_allocObject(&UNK_10004e060,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  _swift_retain(puVar4);
  lVar5 = unaff_x20;
  func_0x00010003b580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  FUN_100023588();
  _swift_allocObject();
  FUN_10001f140(param_1,lVar2,lVar3,FUN_10001eb5c,puVar4,lVar5,uVar6);
  _swift_release(puVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_100052068);
  *(long *)(unaff_x20 + _DAT_100052068) = lVar2;
  _swift_retain(lVar2);
  _swift_release(uVar6);
  apppuStack_88[0] = (undefined8 ***)0x10001eb64;
  uStack_78 = 0;
  FUN_10001eb6c();
  _swift_retain(lVar2);
  ppppuVar7 = apppuStack_88;
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(ppppuVar7,&UNK_10004e550,uVar6);
  apppuStack_88[0] = ppppuVar7;
  FUN_100010860(0x1000520a0,&UNK_10003c988);
  _objc_allocWithZone();
  _swift_retain(ppppuVar7);
  ppppuVar8 = apppuStack_88;
  __s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_100052060);
  *(undefined8 *****)(unaff_x20 + _DAT_100052060) = ppppuVar8;
  _objc_retain();
  _objc_release(uVar6);
  _objc_retain();
  ppppuVar9 = ppppuVar8;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (ppppuVar9 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e218);
    (*pcVar1)();
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_100051030;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100051030);
  func_0x00010003b640();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010003b020(0x3f50624dd2f1a9fc);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010003b3e0(ppppuVar9);
  _objc_release(ppppuVar9);
  _objc_release(puVar10);
  ppppuVar9 = ppppuVar8;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (ppppuVar9 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e21c);
    (*pcVar1)();
  }
  func_0x00010003b460();
  _objc_release(ppppuVar9);
  func_0x00010003af60();
  lVar3 = unaff_x20;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e220);
    (*pcVar1)();
  }
  ppppuVar9 = ppppuVar8;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (ppppuVar9 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e224);
    (*pcVar1)();
  }
  func_0x00010003af80(lVar3);
  _objc_release(lVar3);
  _objc_release(ppppuVar9);
  func_0x00010003b0a0(ppppuVar8);
  ppppuVar9 = ppppuVar8;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (ppppuVar9 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e228);
    (*pcVar1)();
  }
  func_0x00010003b4a0();
  _objc_release();
  func_0x00010001ebac();
  _swift_allocObject();
  ppppuVar9[3] = (undefined8 ***)0x9;
  ppppuVar9[2] = (undefined8 ***)0x4;
  ppppuVar11 = ppppuVar8;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e22c);
    (*pcVar1)();
  }
  ppppuVar12 = ppppuVar11;
  func_0x00010003b5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar11);
  lVar3 = unaff_x20;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e230);
    (*pcVar1)();
  }
  lVar5 = lVar3;
  func_0x00010003b5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  ppppuVar11 = ppppuVar12;
  func_0x00010003b040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar12);
  _objc_release(lVar5);
  ppppuVar9[4] = ppppuVar11;
  ppppuVar11 = ppppuVar8;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (ppppuVar11 != (undefined8 ****)0x0) {
    ppppuVar12 = ppppuVar11;
    func_0x00010003b2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar11);
    lVar3 = unaff_x20;
    func_0x00010003b620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e238);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x00010003b2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    ppppuVar11 = ppppuVar12;
    func_0x00010003b040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar12);
    _objc_release(lVar5);
    ppppuVar9[5] = ppppuVar11;
    ppppuVar11 = ppppuVar8;
    func_0x00010003b620();
    _objc_retainAutoreleasedReturnValue();
    if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e23c);
      (*pcVar1)();
    }
    ppppuVar12 = ppppuVar11;
    func_0x00010003b5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar11);
    lVar3 = unaff_x20;
    func_0x00010003b620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e240);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x00010003b5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    ppppuVar11 = ppppuVar12;
    func_0x00010003b040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar12);
    _objc_release(lVar5);
    ppppuVar9[6] = ppppuVar11;
    ppppuVar11 = ppppuVar8;
    func_0x00010003b620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar8);
    if (ppppuVar11 != (undefined8 ****)0x0) {
      ppppuVar12 = ppppuVar11;
      func_0x00010003afe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppppuVar11);
      func_0x00010003b620();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x20 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_100051050;
        _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_100051050);
        lVar3 = unaff_x20;
        func_0x00010003afe0(unaff_x20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x20);
        ppppuVar11 = ppppuVar12;
        func_0x00010003b040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar12);
        _objc_release(lVar3);
        ppppuVar9[7] = ppppuVar11;
        uVar6 = 0;
        func_0x00010001ec08(0);
        ppppuVar11 = ppppuVar9;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(ppppuVar9,uVar6);
        _swift_release(ppppuVar9);
        func_0x00010003af40(puVar4);
        _swift_release(lVar2);
        _swift_release(ppppuVar7);
        _objc_release(ppppuVar8);
        _objc_release(ppppuVar11);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e248);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e244);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e234);
  (*pcVar1)();
}



/* Entry: 10001e248; end: 10001e29b;  */

void FUN_10001e248(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00010003afa0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10001e29c; end: 10001e2c3; -[KeyboardHomeViewController viewDidLoad] */

void FUN_10001e29c(undefined8 param_1)

{
  _objc_retain();
  FUN_10001dc70();
                    /* WARNING: Could not recover jumptable at 0x00010003ac14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10004cc58)(param_1);
  return;
}



/* Entry: 10001e2c4; end: 10001e32b; -[KeyboardHomeViewController viewWillAppear:] */

void FUN_10001e2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  FUN_10001eac8();
  puVar1 = PTR_s_viewWillAppear__100050bf8;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  FUN_10001e974();
  _objc_release(param_1);
  return;
}



/* Entry: 10001e32c; end: 10001e40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e32c(double param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dStack_38;
  
  lVar2 = *(long *)(param_3 + _DAT_100052058);
  if (lVar2 != 0) {
    _objc_retain();
    FUN_10001e768();
    param_1 = param_1 + 110.0;
    func_0x00010003b400(lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010003b620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010003b2a0();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_3 + _DAT_100052068);
    if (lVar2 != 0) {
      _swift_retain(lVar2);
      FUN_10001e768();
      puVar3 = &UNK_10003c940;
      _swift_getKeyPath(&UNK_10003c940);
      puVar4 = &UNK_10003c968;
      _swift_getKeyPath(&UNK_10003c968);
      dStack_38 = param_1;
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
                (&dStack_38,lVar2,puVar3,puVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001e410);
  (*pcVar1)();
}



/* Entry: 10001e410; end: 10001e457;  */

void FUN_10001e410(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_10004cf78)(param_2);
  return;
}



/* Entry: 10001e458; end: 10001e56f; -[KeyboardHomeViewController viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_10001e458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_80;
  uVar1 = param_3;
  FUN_10001eac8();
  puVar2 = PTR_s_viewWillTransitionToSize_withTra_100050bf0;
  uStack_50 = param_3;
  uStack_48 = uVar1;
  _swift_unknownObjectRetain(param_5);
  _objc_retain();
  _objc_msgSendSuper2(param_1,param_2,&uStack_50,puVar2,param_5);
  puVar2 = &UNK_10004e010;
  _swift_allocObject(&UNK_10004e010,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  pcStack_60 = FUN_10001eb0c;
  puStack_80 = PTR___NSConcreteStackBlock_10004c8a0;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10001e410;
  puStack_68 = &UNK_10004e028;
  puStack_58 = puVar2;
  __Block_copy(&puStack_80);
  puVar2 = puStack_58;
  _objc_retain(param_3);
  _swift_release(puVar2);
  func_0x00010003afc0(param_5);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_3);
  __Block_release(ppuVar3);
  return;
}



/* Entry: 10001e570; end: 10001e647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e570(uint param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  FUN_10001eac8();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_viewWillDisappear__100050be8,param_1 & 1);
  lVar3 = _DAT_100052068;
  lVar1 = *(long *)(unaff_x20 + _DAT_100052068);
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_100052130);
    if (lVar2 != 0) {
      _swift_retain(lVar1);
      _swift_retain(lVar2);
      __s23ExtensionsStickerPicker22StickersGrapheneLoggerC5flush10completionyyyc_tF
                (FUN_1000232e0,0);
      _swift_release(lVar2);
      _swift_release(lVar1);
      lVar1 = *(long *)(unaff_x20 + lVar3);
      if (lVar1 == 0) {
        return;
      }
    }
    lVar3 = *(long *)(lVar1 + _DAT_100052138);
    if (lVar3 != 0) {
      _swift_retain(lVar1);
      _swift_retain(lVar3);
      __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC017logExtensionCloseF0yyF();
      _swift_release(lVar3);
      _swift_release(lVar1);
    }
  }
  return;
}



/* Entry: 10001e648; end: 10001e677; -[KeyboardHomeViewController viewWillDisappear:] */

void FUN_10001e648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_10001e570(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010003ac14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10004cc58)(param_1);
  return;
}


