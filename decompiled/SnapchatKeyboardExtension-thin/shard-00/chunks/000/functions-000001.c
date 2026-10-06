/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100013f04; end: 100013f0b;  */

void FUN_100013f04(void)

{
  if (lRam00000001000516c8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10003dee8);
  return;
}



/* Entry: 100013f0c; end: 100013f43;  */

void FUN_100013f0c(undefined8 param_1)

{
  if (lRam00000001000516c8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10003dee8);
  return;
}



/* Entry: 100013f44; end: 10001403f;  */

void FUN_100013f44(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBbWV_10004cc70 + 0x40;
  uVar2 = 0x1000516d8;
  lVar1 = 0x13f;
  puStack_38 = puStack_40;
  func_0x000100013ffc(0x13f,0x1000516d8,&UNK_10004d728);
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x1000516e0;
    lVar1 = 0x13f;
    func_0x000100013ffc(0x13f,0x1000516e0,&UNK_10004d698);
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_updateClassMetadata2(param_1,0x100,4,&puStack_40,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100014040; end: 100014307;  */

void FUN_100014040(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 100014308; end: 100014347;  */

void FUN_100014308(void)

{
  undefined *puVar1;
  
  if (puRam0000000100051828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003c180;
  _swift_getWitnessTable(&UNK_10003c180,&UNK_10004d728);
  puRam0000000100051828 = puVar1;
  return;
}



/* Entry: 100014348; end: 1000144db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014348(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x100051838;
  FUN_100010860(0x100051838,&UNK_10003c248);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar3 = 0x100051840;
  FUN_100010860(0x100051840,&UNK_10003c250);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000100051848 != -1) {
    _swift_once(0x100051848,0x100014630);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = uRam0000000100054320;
  lVar1 = lRam0000000100051850;
  _swift_bridgeObjectRetain();
  if (lVar1 != -1) {
    _swift_once(0x100051850,0x100014654);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = uRam0000000100054328;
  lVar1 = _DAT_100051690;
  uStack_51 = 0;
  _swift_bridgeObjectRetain();
  __s7Combine9PublishedV12initialValueACyxGx_tcfC
            ((long)puVar4 - extraout_x8_00,&uStack_51,&UNK_10004d728);
  (**(code **)(lVar6 + 0x20))(unaff_x20 + lVar1,(long)puVar4 - extraout_x8_00,lVar3);
  lVar3 = _DAT_100051698;
  uStack_52 = 0;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(puVar4,&uStack_52,&UNK_10004d698);
  (**(code **)(lVar5 + 0x20))(unaff_x20 + lVar3,puVar4,lVar2);
  return;
}



/* Entry: 1000144dc; end: 100014517;  */

void FUN_1000144dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100013f0c();
  __s7Combine16ObservableObjectPA2A0bC9PublisherC0c10WillChangeD0RtzrlE06objecteF0AEvg();
  *param_1 = uVar1;
  return;
}



/* Entry: 100014518; end: 10001452f;  */

bool FUN_100014518(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100014530; end: 100014557;  */

void FUN_100014530(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 100014558; end: 10001455f;  */

void FUN_100014558(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100014560; end: 10001459f;  */

void FUN_100014560(void)

{
  undefined *puVar1;
  
  if (puRam0000000100051830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10003c1e8;
  _swift_getWitnessTable(&UNK_10003c1e8,&UNK_10004d698);
  puRam0000000100051830 = puVar1;
  return;
}



/* Entry: 1000145a0; end: 100014623;  */

void FUN_1000145a0(void)

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



/* Entry: 100014624; end: 100014677;  */

undefined * FUN_100014624(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_10004c0e0;
}



/* Entry: 100014678; end: 100014727;  */

void FUN_100014678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x100051858;
  FUN_100010860(0x100051858,&UNK_10003c258);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 6;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  uVar2 = 0x100051928;
  FUN_100010860(0x100051928,&UNK_10003c260);
  uVar3 = uVar2;
  _swift_initStaticObject();
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  uVar3 = uVar2;
  _swift_initStaticObject(uVar2,param_3);
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  _swift_initStaticObject(uVar2,param_4);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *param_5 = lVar1;
  return;
}



/* Entry: 100014728; end: 100014737;  */

void FUN_100014728(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_10003c560;
  puVar2 = &UNK_10003c588;
  uVar3 = *param_2;
  _swift_getKeyPath(&UNK_10003c560);
  _swift_getKeyPath(&UNK_10003c588);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 100014738; end: 10001476f;  */

void FUN_100014738(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100014770();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100014770; end: 10001489f;  */

undefined * FUN_100014770(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000148a0);
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
  puVar3 = PTR___swiftEmptyArrayStorage_10004ce00;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x100051858;
    FUN_100010860(0x100051858,&UNK_10003c258);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x100051c88;
    FUN_100010860(0x100051c88,&UNK_10003c710);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1000148a0; end: 1000149a7;  */

undefined * FUN_1000148a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000149a8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_10004ce00;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x100051928;
    FUN_100010860(0x100051928,&UNK_10003c260);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSSN_10004ccd0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1000149a8; end: 1000149d7;  */

undefined1 FUN_1000149a8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1000149d8; end: 100014fbb;  */

void FUN_1000149d8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_90 [16];
  
  lVar2 = 0;
  lStack_f8 = param_1;
  __s7SwiftUI15CoordinateSpaceOMa();
  lStack_150 = *(long *)(lVar2 + -8);
  lStack_148 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_150 + 0x40));
  lVar9 = (long)&lStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s7SwiftUI11DragGestureVMa();
  lStack_138 = *(long *)(lVar2 + -8);
  lStack_140 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_138 + 0x40));
  lVar7 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100051c98;
  FUN_100010860(0x100051c98,&UNK_10003c388);
  lStack_110 = *(long *)(lVar2 + -8);
  lStack_120 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(lStack_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_01;
  lVar2 = 0x100051ca0;
  FUN_100010860(0x100051ca0,&UNK_10003c390);
  lStack_100 = *(long *)(lVar2 + -8);
  lStack_108 = lVar2;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(lStack_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100051ca8;
  lStack_130 = lVar10 - extraout_x8_02;
  FUN_100010860(0x100051ca8,&UNK_10003c398);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (lVar10 - extraout_x8_02) - extraout_x8_03;
  lVar3 = 0x100051cb0;
  FUN_100010860(0x100051cb0,&UNK_10003c3a0);
  lStack_118 = *(long *)(lVar3 + -8);
  lStack_128 = lVar3;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_10004d838;
  _swift_allocObject(&UNK_10004d838,0x70,7);
  uVar11 = unaff_x20[4];
  uVar13 = unaff_x20[7];
  uVar12 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar11;
  *(undefined8 *)(puVar4 + 0x48) = uVar13;
  *(undefined8 *)(puVar4 + 0x40) = uVar12;
  uVar11 = unaff_x20[8];
  uVar13 = unaff_x20[0xb];
  uVar12 = unaff_x20[10];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar11;
  *(undefined8 *)(puVar4 + 0x68) = uVar13;
  *(undefined8 *)(puVar4 + 0x60) = uVar12;
  uVar11 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar11;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  FUN_100015e4c();
  uVar11 = 0x100051cb8;
  FUN_100010860(0x100051cb8,&UNK_10003c3a8);
  uVar12 = uVar11;
  func_0x000100015e80();
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (lVar6,0x100015e3c,puVar4,0x100015e44,auStack_90,uVar11,uVar12);
  uVar14 = unaff_x20[6];
  puVar4 = &UNK_10004d860;
  _swift_allocObject(&UNK_10004d860,0x70,7);
  uVar11 = unaff_x20[4];
  uVar13 = unaff_x20[7];
  uVar12 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar11;
  *(undefined8 *)(puVar4 + 0x48) = uVar13;
  *(undefined8 *)(puVar4 + 0x40) = uVar12;
  uVar11 = unaff_x20[8];
  uVar13 = unaff_x20[0xb];
  uVar12 = unaff_x20[10];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar11;
  *(undefined8 *)(puVar4 + 0x68) = uVar13;
  *(undefined8 *)(puVar4 + 0x60) = uVar12;
  uVar11 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar11;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  FUN_100015e4c();
  uVar11 = 0x100051d18;
  FUN_10001612c(0x100051d18,0x100051ca8,&UNK_10003c398,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_10004c720);
  __s7SwiftUI4ViewPAAE18onLongPressGesture15minimumDuration15maximumDistance8pressing7performQrSd_12CoreGraphics7CGFloatVySbcSgyyctF
            (lVar6 - extraout_x8_04,uVar14,0x4034000000000000,FUN_1000160b0,puVar4,FUN_1000157dc,0,
             lVar2,uVar11);
  _swift_release(puVar4);
  (**(code **)(lVar8 + 8))(lVar6,lVar2);
  (**(code **)(lStack_150 + 0x68))
            (lVar9,*(undefined4 *)PTR___s7SwiftUI15CoordinateSpaceO5localyA2CmFWC_10004c328,
             lStack_148);
  __s7SwiftUI11DragGestureV15minimumDistance15coordinateSpaceAC12CoreGraphics7CGFloatV_AA010CoordinateH0OtcfC
            (lVar7,0,lVar9);
  puVar4 = &UNK_10004d888;
  _swift_allocObject(&UNK_10004d888,0x70,7);
  uVar12 = unaff_x20[4];
  uVar14 = unaff_x20[7];
  uVar13 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = uVar14;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  uVar12 = unaff_x20[8];
  uVar14 = unaff_x20[0xb];
  uVar13 = unaff_x20[10];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar12;
  *(undefined8 *)(puVar4 + 0x68) = uVar14;
  *(undefined8 *)(puVar4 + 0x60) = uVar13;
  uVar12 = *unaff_x20;
  uVar14 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar12;
  *(undefined8 *)(puVar4 + 0x28) = uVar14;
  *(undefined8 *)(puVar4 + 0x20) = uVar13;
  FUN_100015e4c();
  uVar12 = 0x100051d20;
  FUN_1000160e4(0x100051d20,PTR___s7SwiftUI11DragGestureVMa_10004c1a8,
                PTR___s7SwiftUI11DragGestureVAA0D0AAMc_10004c1a0);
  uVar13 = 0x100051d28;
  FUN_1000160e4(0x100051d28,PTR___s7SwiftUI11DragGestureV5ValueVMa_10004c190,
                PTR___s7SwiftUI11DragGestureV5ValueVSQAAMc_10004c198);
  lVar3 = lStack_140;
  __s7SwiftUI7GesturePAASQ5ValueRpzrlE9onChangedyAA01_fC0VyxGyAEcF
            (lVar10,FUN_1000160dc,puVar4,lStack_140,uVar12,uVar13);
  _swift_release(puVar4);
  (**(code **)(lStack_138 + 8))(lVar7,lVar3);
  puVar4 = &UNK_10004d8b0;
  _swift_allocObject(&UNK_10004d8b0,0x70,7);
  uVar12 = unaff_x20[4];
  uVar14 = unaff_x20[7];
  uVar13 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = uVar14;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  uVar12 = unaff_x20[8];
  uVar14 = unaff_x20[0xb];
  uVar13 = unaff_x20[10];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar12;
  *(undefined8 *)(puVar4 + 0x68) = uVar14;
  *(undefined8 *)(puVar4 + 0x60) = uVar13;
  uVar12 = *unaff_x20;
  uVar14 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar12;
  *(undefined8 *)(puVar4 + 0x28) = uVar14;
  *(undefined8 *)(puVar4 + 0x20) = uVar13;
  FUN_100015e4c();
  uVar12 = 0x100051d30;
  FUN_10001612c(0x100051d30,0x100051c98,&UNK_10003c388,
                PTR___s7SwiftUI15_ChangedGestureVyxGAA0D0AAMc_10004c378);
  lVar7 = lStack_120;
  lVar3 = lStack_130;
  __s7SwiftUI7GesturePAAE7onEndedyAA01_eC0VyxGy5ValueQzcF
            (lStack_130,FUN_100016124,puVar4,lStack_120,uVar12);
  _swift_release(puVar4);
  (**(code **)(lStack_110 + 8))(lVar10,lVar7);
  __s7SwiftUI11GestureMaskV3allACvgZ();
  plVar5 = &lStack_f0;
  lStack_f0 = lVar2;
  uStack_e8 = uVar11;
  _swift_getOpaqueTypeConformance
            (plVar5,
             PTR___s7SwiftUI4ViewPAAE18onLongPressGesture15minimumDuration15maximumDistance8pressing7performQrSd_12CoreGraphics7CGFloatVySbcSgyyctFQOMQ_10004c650
             ,1);
  uVar11 = 0x100051d38;
  FUN_10001612c(0x100051d38,0x100051ca0,&UNK_10003c390,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_10004c278);
  lVar8 = lStack_f8;
  lVar7 = lStack_108;
  lVar2 = lStack_128;
  __s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lF
            (lStack_f8,lVar3,lVar10,lStack_128,lStack_108,plVar5,uVar11);
  (**(code **)(lStack_100 + 8))(lVar3,lVar7);
  (**(code **)(lStack_118 + 8))(lVar6 - extraout_x8_04,lVar2);
  puVar4 = &UNK_10004d8d8;
  _swift_allocObject(&UNK_10004d8d8,0x70,7);
  uVar11 = unaff_x20[4];
  uVar13 = unaff_x20[7];
  uVar12 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar11;
  *(undefined8 *)(puVar4 + 0x48) = uVar13;
  *(undefined8 *)(puVar4 + 0x40) = uVar12;
  uVar11 = unaff_x20[8];
  uVar13 = unaff_x20[0xb];
  uVar12 = unaff_x20[10];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar11;
  *(undefined8 *)(puVar4 + 0x68) = uVar13;
  *(undefined8 *)(puVar4 + 0x60) = uVar12;
  uVar11 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar11;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  lVar2 = 0x100051d40;
  FUN_100010860(0x100051d40,&UNK_10003c3d8);
  puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar2 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = FUN_100016170;
  puVar1[3] = puVar4;
  FUN_100015e4c();
  return;
}



/* Entry: 100014fbc; end: 100015013;  */

void FUN_100014fbc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040);
  func_0x00010003b1e0();
  func_0x00010003b160();
  _objc_release(puVar2);
  lVar1 = param_1[1];
  _swift_getObjectType(*param_1);
  (**(code **)(lVar1 + 0x20))();
  return;
}



/* Entry: 100015014; end: 1000154e3;  */

void FUN_100015014(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  long extraout_x8;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_7d0;
  undefined1 auStack_7c8 [8];
  undefined8 uStack_7c0;
  undefined1 auStack_7b8 [8];
  long alStack_7b0 [2];
  undefined1 auStack_7a0 [8];
  undefined1 auStack_798 [248];
  undefined1 *puStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined6 uStack_610;
  undefined2 uStack_60a;
  undefined6 uStack_608;
  undefined2 uStack_602;
  undefined6 uStack_600;
  undefined2 uStack_5fa;
  undefined6 uStack_5f8;
  undefined2 uStack_5f2;
  undefined6 uStack_5f0;
  undefined2 uStack_5ea;
  undefined6 uStack_5e8;
  undefined2 uStack_5e2;
  undefined6 uStack_5e0;
  undefined2 uStack_5da;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
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
  undefined1 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_380;
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
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_280 [48];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined2 uStack_240;
  undefined2 uStack_238;
  undefined6 uStack_236;
  undefined2 uStack_230;
  undefined6 uStack_22e;
  undefined2 uStack_228;
  undefined6 uStack_226;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 uStack_216;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined1 *puStack_208;
  undefined8 uStack_200;
  undefined2 uStack_1f8;
  undefined8 uStack_1f6;
  undefined8 uStack_1ee;
  undefined8 uStack_1e6;
  undefined8 uStack_1de;
  undefined8 uStack_1d6;
  undefined6 uStack_1ce;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar3 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_7a0 + lVar1;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  _swift_bridgeObjectRetain(uVar8);
  __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(uVar7,uVar8,0);
  (**(code **)(lVar9 + 0x68))
            (puVar5,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_10004c6b8,
             lVar3);
  puVar4 = puVar5;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar5,uVar7);
  _swift_release(uVar7);
  (**(code **)(lVar9 + 8))(puVar5,lVar3);
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_280,0,1,uVar7,0,puVar5,lVar3);
  uStack_602 = (undefined2)auStack_280._8_8_;
  uStack_600 = SUB86(auStack_280._8_8_,2);
  uStack_60a = (undefined2)auStack_280._0_8_;
  uStack_608 = SUB86(auStack_280._0_8_,2);
  uStack_5f2 = (undefined2)auStack_280._24_8_;
  uStack_5f0 = SUB86(auStack_280._24_8_,2);
  uStack_5fa = (undefined2)auStack_280._16_8_;
  uStack_5f8 = SUB86(auStack_280._16_8_,2);
  uStack_5e2 = (undefined2)auStack_280._40_8_;
  uStack_5e0 = SUB86(auStack_280._40_8_,2);
  uStack_5ea = (undefined2)auStack_280._32_8_;
  uStack_5e8 = SUB86(auStack_280._32_8_,2);
  uStack_378 = *(undefined8 *)(param_2 + 0x28);
  puStack_380 = *(undefined1 **)(param_2 + 0x20);
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvg(&puStack_510);
  uVar2 = puStack_510._0_1_;
  uStack_248 = 0;
  uStack_240 = 1;
  uStack_236 = uStack_608;
  uStack_230 = uStack_602;
  uStack_238 = uStack_60a;
  uStack_1ee = CONCAT26(uStack_602,uStack_608);
  uStack_1f6 = CONCAT26(uStack_60a,uStack_610);
  uStack_1de = CONCAT26(uStack_5f2,uStack_5f8);
  uStack_1e6 = CONCAT26(uStack_5fa,uStack_600);
  uStack_226 = uStack_5f8;
  uStack_220 = uStack_5f2;
  uStack_22e = uStack_600;
  uStack_228 = uStack_5fa;
  uStack_216 = uStack_5e8;
  uStack_21e = uStack_5f0;
  uStack_218 = uStack_5ea;
  uStack_4d0 = CONCAT62(uStack_5e0,uStack_5e2);
  uStack_210 = uStack_5e2;
  uStack_20e = uStack_5e0;
  uStack_4e8 = CONCAT62(uStack_5f8,uStack_5fa);
  uStack_4f0 = CONCAT62(uStack_600,uStack_602);
  uStack_4d8 = CONCAT62(uStack_5e8,uStack_5ea);
  uStack_4e0 = CONCAT62(uStack_5f0,uStack_5f2);
  uStack_4f8 = CONCAT62(uStack_608,uStack_60a);
  uStack_500 = CONCAT62(uStack_610,1);
  uStack_508 = 0;
  uStack_200 = 0;
  uStack_1f8 = 1;
  uStack_1d6 = CONCAT26(uStack_5ea,uStack_5f0);
  uStack_1c6 = uStack_5e0;
  uStack_1ce = uStack_5e8;
  uStack_1c8 = uStack_5e2;
  uVar7 = 0x100051cf0;
  puStack_510 = puVar4;
  puStack_250 = puVar4;
  puStack_208 = puVar4;
  FUN_1000161e0(&puStack_250,&puStack_380,0x100051cf0,&UNK_10003c3c0);
  ppuVar6 = &puStack_208;
  func_0x000100016228(ppuVar6,0x100051cf0,&UNK_10003c3c0);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_198 = uStack_4e8;
  uStack_1a0 = uStack_4f0;
  uStack_188 = uStack_4d8;
  uStack_190 = uStack_4e0;
  uStack_1b8 = uStack_508;
  puStack_1c0 = puStack_510;
  uStack_1a8 = uStack_4f8;
  uStack_1b0 = uStack_500;
  uStack_180 = uStack_4d0;
  uStack_178 = 0;
  uStack_170 = uVar2;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_3b8,0,1,uVar8,0,ppuVar6,uVar7);
  uStack_3e8 = uStack_198;
  uStack_3f0 = uStack_1a0;
  uStack_3d8 = uStack_188;
  uStack_3e0 = uStack_190;
  uStack_3c8 = uStack_178;
  uStack_3d0 = uStack_180;
  uStack_3c0 = uStack_170;
  uStack_408 = uStack_1b8;
  puStack_410 = puStack_1c0;
  uStack_3f8 = uStack_1a8;
  uStack_400 = uStack_1b0;
  uStack_138 = uStack_4e8;
  uStack_140 = uStack_4f0;
  uStack_128 = uStack_4d8;
  uStack_130 = uStack_4e0;
  uStack_158 = uStack_508;
  puStack_160 = puStack_510;
  uStack_148 = uStack_4f8;
  uStack_150 = uStack_500;
  uStack_120 = uStack_4d0;
  uStack_118 = 0;
  uStack_110 = uVar2;
  uVar7 = 0x100051ce0;
  FUN_1000161e0(&puStack_1c0,&puStack_380,0x100051ce0,&UNK_10003c3b8);
  ppuVar6 = &puStack_160;
  func_0x000100016228(ppuVar6,0x100051ce0,&UNK_10003c3b8);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_98 = uStack_3a8;
  uStack_a0 = uStack_3b0;
  uStack_88 = uStack_398;
  uStack_90 = uStack_3a0;
  uStack_80 = uStack_390;
  uStack_d8 = uStack_3e8;
  uStack_e0 = uStack_3f0;
  uStack_c8 = uStack_3d8;
  uStack_d0 = uStack_3e0;
  uStack_b0 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_b8 = uStack_3c8;
  uStack_c0 = uStack_3d0;
  uStack_a8 = uStack_3b8;
  uStack_f8 = uStack_408;
  puStack_100 = puStack_410;
  uStack_e8 = uStack_3f8;
  uStack_f0 = uStack_400;
  *(undefined1 ***)((long)alStack_7b0 + lVar1) = ppuVar6;
  *(undefined8 *)((long)alStack_7b0 + lVar1 + 8) = uVar7;
  auStack_7b8[lVar1] = 1;
  *(undefined8 *)((long)&uStack_7c0 + lVar1) = 0;
  auStack_7c8[lVar1] = 1;
  *(undefined8 *)((long)&uStack_7d0 + lVar1) = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_2f8,0x4044000000000000,0,0,1,0x7ff0000000000000,0,0,1);
  uStack_650 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_318 = uStack_3a8;
  uStack_320 = uStack_3b0;
  uStack_308 = uStack_398;
  uStack_310 = uStack_3a0;
  uStack_358 = uStack_3e8;
  uStack_360 = uStack_3f0;
  uStack_348 = uStack_3d8;
  uStack_350 = uStack_3e0;
  uStack_330 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_338 = uStack_3c8;
  uStack_340 = uStack_3d0;
  uStack_328 = uStack_3b8;
  uStack_378 = uStack_408;
  puStack_380 = puStack_410;
  uStack_368 = uStack_3f8;
  uStack_370 = uStack_400;
  uStack_638 = uStack_3a8;
  uStack_640 = uStack_3b0;
  uStack_628 = uStack_398;
  uStack_630 = uStack_3a0;
  uStack_678 = uStack_3e8;
  uStack_680 = uStack_3f0;
  uStack_668 = uStack_3d8;
  uStack_670 = uStack_3e0;
  uStack_658 = uStack_3c8;
  uStack_660 = uStack_3d0;
  uStack_648 = uStack_3b8;
  uStack_300 = uStack_390;
  uStack_620 = uStack_390;
  uStack_698 = uStack_408;
  puStack_6a0 = puStack_410;
  uStack_688 = uStack_3f8;
  uStack_690 = uStack_400;
  FUN_1000161e0(&puStack_100,&puStack_510,0x100051cd0,&UNK_10003c3b0);
  func_0x000100016228(&puStack_6a0,0x100051cd0,&UNK_10003c3b0);
  uStack_548 = uStack_2b8;
  uStack_550 = uStack_2c0;
  uStack_538 = uStack_2a8;
  uStack_540 = uStack_2b0;
  uStack_528 = uStack_298;
  uStack_530 = uStack_2a0;
  uStack_588 = uStack_2f8;
  uStack_590 = uStack_300;
  uStack_578 = uStack_2e8;
  uStack_580 = uStack_2f0;
  uStack_568 = uStack_2d8;
  uStack_570 = uStack_2e0;
  uStack_558 = uStack_2c8;
  uStack_560 = uStack_2d0;
  uStack_5c8 = uStack_338;
  uStack_5d0 = uStack_340;
  uStack_5b8 = uStack_328;
  uStack_5c0 = uStack_330;
  uStack_5a8 = uStack_318;
  uStack_5b0 = uStack_320;
  uStack_598 = uStack_308;
  uStack_5a0 = uStack_310;
  uStack_608 = (undefined6)uStack_378;
  uStack_602 = (undefined2)((ulong)uStack_378 >> 0x30);
  uStack_610 = SUB86(puStack_380,0);
  uStack_60a = (undefined2)((ulong)puStack_380 >> 0x30);
  uStack_5f8 = (undefined6)uStack_368;
  uStack_5f2 = (undefined2)((ulong)uStack_368 >> 0x30);
  uStack_600 = (undefined6)uStack_370;
  uStack_5fa = (undefined2)((ulong)uStack_370 >> 0x30);
  uStack_5e8 = (undefined6)uStack_358;
  uStack_5e2 = (undefined2)((ulong)uStack_358 >> 0x30);
  uStack_5f0 = (undefined6)uStack_360;
  uStack_5ea = (undefined2)((ulong)uStack_360 >> 0x30);
  uStack_5d8 = uStack_348;
  uStack_5e0 = (undefined6)uStack_350;
  uStack_5da = (undefined2)((ulong)uStack_350 >> 0x30);
  uStack_448 = uStack_2b8;
  uStack_450 = uStack_2c0;
  uStack_438 = uStack_2a8;
  uStack_440 = uStack_2b0;
  uStack_428 = uStack_298;
  uStack_430 = uStack_2a0;
  uStack_488 = uStack_2f8;
  uStack_490 = uStack_300;
  uStack_478 = uStack_2e8;
  uStack_480 = uStack_2f0;
  uStack_468 = uStack_2d8;
  uStack_470 = uStack_2e0;
  uStack_458 = uStack_2c8;
  uStack_460 = uStack_2d0;
  uStack_4c8 = uStack_338;
  uStack_4d0 = uStack_340;
  uStack_4b8 = uStack_328;
  uStack_4c0 = uStack_330;
  uStack_4a8 = uStack_318;
  uStack_4b0 = uStack_320;
  uStack_498 = uStack_308;
  uStack_4a0 = uStack_310;
  uStack_508 = uStack_378;
  puStack_510 = puStack_380;
  uStack_4f8 = uStack_368;
  uStack_500 = uStack_370;
  uStack_520 = uStack_290;
  uStack_420 = uStack_290;
  uStack_4e8 = uStack_358;
  uStack_4f0 = uStack_360;
  uStack_4d8 = uStack_348;
  uStack_4e0 = uStack_350;
  FUN_1000161e0(&uStack_610,auStack_798,0x100051cb8,&UNK_10003c3a8);
  func_0x000100016228(&puStack_510,0x100051cb8,&UNK_10003c3a8);
  param_1[0x19] = uStack_548;
  param_1[0x18] = uStack_550;
  param_1[0x1b] = uStack_538;
  param_1[0x1a] = uStack_540;
  param_1[0x1d] = uStack_528;
  param_1[0x1c] = uStack_530;
  param_1[0x1e] = uStack_520;
  param_1[0x11] = uStack_588;
  param_1[0x10] = uStack_590;
  param_1[0x13] = uStack_578;
  param_1[0x12] = uStack_580;
  param_1[0x15] = uStack_568;
  param_1[0x14] = uStack_570;
  param_1[0x17] = uStack_558;
  param_1[0x16] = uStack_560;
  param_1[9] = uStack_5c8;
  param_1[8] = uStack_5d0;
  param_1[0xb] = uStack_5b8;
  param_1[10] = uStack_5c0;
  param_1[0xd] = uStack_5a8;
  param_1[0xc] = uStack_5b0;
  param_1[0xf] = uStack_598;
  param_1[0xe] = uStack_5a0;
  param_1[1] = CONCAT26(uStack_602,uStack_608);
  *param_1 = CONCAT26(uStack_60a,uStack_610);
  param_1[3] = CONCAT26(uStack_5f2,uStack_5f8);
  param_1[2] = CONCAT26(uStack_5fa,uStack_600);
  param_1[5] = CONCAT26(uStack_5e2,uStack_5e8);
  param_1[4] = CONCAT26(uStack_5ea,uStack_5f0);
  param_1[7] = uStack_5d8;
  param_1[6] = CONCAT26(uStack_5da,uStack_5e0);
  return;
}



/* Entry: 1000154e4; end: 1000156df;  */

void FUN_1000154e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = unaff_x20[2];
  uStack_70 = unaff_x20[3];
  FUN_1000161e0(&uStack_68,&puStack_a0,0x100051c90,&UNK_10003c310);
  FUN_1000161e0(&uStack_70,&puStack_a0,0x100051d48,&UNK_10003c3e8);
  uVar1 = 0x100051d50;
  FUN_100010860(0x100051d50,&UNK_10003c3f0);
  __s7SwiftUI5StateV12wrappedValuexvg(&puStack_a0);
  if (puStack_a0 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSTimer_100051038;
    _objc_opt_self();
    uVar8 = unaff_x20[7];
    puVar3 = &UNK_10004d900;
    _swift_allocObject(&UNK_10004d900,0x70,7);
    uVar5 = unaff_x20[4];
    uVar7 = unaff_x20[7];
    uVar6 = unaff_x20[6];
    *(undefined8 *)(puVar3 + 0x38) = unaff_x20[5];
    *(undefined8 *)(puVar3 + 0x30) = uVar5;
    *(undefined8 *)(puVar3 + 0x48) = uVar7;
    *(undefined8 *)(puVar3 + 0x40) = uVar6;
    uVar5 = unaff_x20[8];
    uVar7 = unaff_x20[0xb];
    uVar6 = unaff_x20[10];
    *(undefined8 *)(puVar3 + 0x58) = unaff_x20[9];
    *(undefined8 *)(puVar3 + 0x50) = uVar5;
    *(undefined8 *)(puVar3 + 0x68) = uVar7;
    *(undefined8 *)(puVar3 + 0x60) = uVar6;
    uVar5 = *unaff_x20;
    uVar7 = unaff_x20[3];
    uVar6 = unaff_x20[2];
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20[1];
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    *(undefined8 *)(puVar3 + 0x28) = uVar7;
    *(undefined8 *)(puVar3 + 0x20) = uVar6;
    pcStack_80 = FUN_1000161bc;
    puStack_a0 = PTR___NSConcreteStackBlock_10004c8a0;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1000159b0;
    puStack_88 = &UNK_10004d918;
    ppuVar4 = &puStack_a0;
    puStack_78 = puVar3;
    __Block_copy(ppuVar4);
    puVar3 = puStack_78;
    FUN_100015e4c();
    _swift_release(puVar3);
    func_0x00010003b380(uVar8);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar4);
    puStack_a0 = puVar2;
    __s7SwiftUI5StateV12wrappedValuexvs(&puStack_a0,uVar1);
    func_0x000100016228(&uStack_68,0x100051c90,&UNK_10003c310);
    func_0x000100016228(&uStack_70,0x100051d48,&UNK_10003c3e8);
  }
  else {
    func_0x000100016228(&uStack_68,0x100051c90,&UNK_10003c310);
    func_0x000100016228(&uStack_70,0x100051d48,&UNK_10003c3e8);
    _objc_release(puStack_a0);
  }
  return;
}



/* Entry: 1000156e0; end: 1000157db;  */

void FUN_1000156e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  uStack_60 = uVar2;
  uStack_58 = uVar1;
  FUN_1000161e0(&uStack_58,&uStack_78,0x100051c90,&UNK_10003c310);
  FUN_1000161e0(&uStack_60,&uStack_78,0x100051d48,&UNK_10003c3e8);
  uVar3 = 0x100051d50;
  FUN_100010860(0x100051d50,&UNK_10003c3f0);
  __s7SwiftUI5StateV12wrappedValuexvg(&uStack_78);
  func_0x00010003b280(uStack_78);
  _objc_release(uStack_78);
  uStack_78 = 0;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_78,uVar3);
  func_0x000100016228(&uStack_58,0x100051c90,&UNK_10003c310);
  func_0x000100016228(&uStack_60,0x100051d48,&UNK_10003c3e8);
  return;
}



/* Entry: 1000157dc; end: 1000157df;  */

void FUN_1000157dc(void)

{
  return;
}



/* Entry: 1000157e0; end: 10001589f;  */

void FUN_1000157e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  byte abStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_48 = *(undefined8 *)(param_2 + 0x28);
  uStack_50 = *(undefined8 *)(param_2 + 0x20);
  uStack_58 = *(undefined8 *)(param_2 + 0x28);
  uStack_60 = *(undefined8 *)(param_2 + 0x20);
  uStack_38 = uStack_48;
  FUN_1000161e0(&uStack_38,abStack_68,0x100051d58,&UNK_10003c3f8);
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvg(abStack_68);
  if ((abStack_68[0] & 1) == 0) {
    uStack_58 = *(undefined8 *)(param_2 + 0x28);
    uStack_60 = *(undefined8 *)(param_2 + 0x20);
    abStack_68[0] = 1;
    __s7SwiftUI5StateV12wrappedValuexvs(abStack_68,uVar1);
  }
  func_0x000100016228(&uStack_50,0x1000513d8,&UNK_10003c3e0);
  return;
}



/* Entry: 1000158a0; end: 1000159af;  */

void FUN_1000158a0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x28);
  uStack_30 = *(undefined8 *)(param_2 + 0x20);
  uStack_31 = 0;
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_31,uVar1);
  FUN_1000156e0();
  return;
}



/* Entry: 1000159b0; end: 1000159fb;  */

void FUN_1000159b0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003ac14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_10004cc58)(param_2);
  return;
}



/* Entry: 1000159fc; end: 100015a07;  */

void FUN_1000159fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 100015a08; end: 100015a47;  */

void FUN_100015a08(void)

{
  FUN_1000149d8();
  return;
}



/* Entry: 100015a48; end: 100015b13;  */

void FUN_100015a48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  uVar2 = 0x100051c90;
  FUN_100010860(0x100051c90,&UNK_10003c310);
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_70,&uStack_78,uVar2);
  uVar1 = uStack_68;
  uVar2 = CONCAT71(uStack_6f,uStack_70);
  uStack_78 = uStack_78 & 0xffffffffffffff00;
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(&uStack_70,&uStack_78,PTR___sSbN_10004ccf0);
  *param_1 = param_4;
  param_1[1] = param_8;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = uStack_70;
  param_1[5] = uStack_68;
  param_1[7] = 0x3fc3333333333333;
  param_1[6] = 0x3fd999999999999a;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  return;
}



/* Entry: 100015b14; end: 100015b7f;  */

long FUN_100015b14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100015b80; end: 100015c07;  */

undefined8 * FUN_100015b80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[5];
  param_1[5] = uVar3;
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  _swift_unknownObjectRetain(uVar4);
  _objc_retain(uVar1);
  _swift_retain(uVar2);
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Entry: 100015c08; end: 100015cdf;  */

undefined8 * FUN_100015c08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar1);
  param_1[1] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _objc_retain();
  _objc_release(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_retain();
  _swift_release(uVar2);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 100015ce0; end: 100015cfb;  */

void FUN_100015ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Entry: 100015cfc; end: 100015d77;  */

undefined8 * FUN_100015cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_unknownObjectRelease(*param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  _objc_release(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_release(uVar1);
  uVar1 = param_2[6];
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 100015d78; end: 100015e4b;  */

int FUN_100015d78(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100015e4c; end: 100015fcf;  */

undefined8 FUN_100015e4c(undefined8 param_1,undefined8 param_2)

{
  FUN_100015b80(param_2,param_1,&UNK_10004d7f8);
  return param_2;
}



/* Entry: 100015fd0; end: 10001603f;  */

void FUN_100015fd0(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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



/* Entry: 100016040; end: 1000160af;  */

void FUN_100016040(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000100051cf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051d00;
  func_0x0001000118b8(0x100051d00,&UNK_10003c8b0);
  puStack_20 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_10004c6d0;
  puStack_18 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_10004c470;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &puStack_20);
  puRam0000000100051cf8 = puVar2;
  return;
}



/* Entry: 1000160b0; end: 1000160db;  */

void FUN_1000160b0(uint param_1)

{
  if ((param_1 & 1) == 0) {
    FUN_1000156e0();
  }
  else {
    FUN_1000154e4();
  }
  return;
}



/* Entry: 1000160dc; end: 1000160e3;  */

void FUN_1000160dc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  byte abStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_38 = uStack_48;
  FUN_1000161e0(&uStack_38,abStack_68,0x100051d58,&UNK_10003c3f8);
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvg(abStack_68);
  if ((abStack_68[0] & 1) == 0) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x30);
    abStack_68[0] = 1;
    __s7SwiftUI5StateV12wrappedValuexvs(abStack_68,uVar1);
  }
  func_0x000100016228(&uStack_50,0x1000513d8,&UNK_10003c3e0);
  return;
}



/* Entry: 1000160e4; end: 100016123;  */

void FUN_1000160e4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100016124; end: 10001612b;  */

void FUN_100016124(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_31 = 0;
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_31,uVar1);
  FUN_1000156e0();
  return;
}



/* Entry: 10001612c; end: 10001616f;  */

void FUN_10001612c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x0001000118b8(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100016170; end: 100016177;  */

void FUN_100016170(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_31 = 0;
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_31,uVar1);
  FUN_1000156e0();
  return;
}



/* Entry: 100016178; end: 1000161bb;  */

void FUN_100016178(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 1000161bc; end: 1000161df;  */

void FUN_1000161bc(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_100051040);
  func_0x00010003b1e0();
  func_0x00010003b160();
  _objc_release(puVar2);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x20))();
  return;
}



/* Entry: 1000161e0; end: 100016267;  */

undefined8 FUN_1000161e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010860(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100016268; end: 10001626b;  */

void FUN_100016268(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  if (puRam0000000100051d60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051d40;
  func_0x0001000118b8(0x100051d40,&UNK_10003c3d8);
  uVar2 = 0x100051cb0;
  func_0x0001000118b8(0x100051cb0,&UNK_10003c3a0);
  uVar3 = 0x100051ca0;
  func_0x0001000118b8(0x100051ca0,&UNK_10003c390);
  uVar4 = 0x100051ca8;
  func_0x0001000118b8(0x100051ca8,&UNK_10003c398);
  uVar5 = 0x100051d18;
  FUN_10001612c(0x100051d18,0x100051ca8,&UNK_10003c398,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_10004c720);
  puVar6 = &uStack_70;
  uStack_70 = uVar4;
  uStack_68 = uVar5;
  _swift_getOpaqueTypeConformance
            (puVar6,
             PTR___s7SwiftUI4ViewPAAE18onLongPressGesture15minimumDuration15maximumDistance8pressing7performQrSd_12CoreGraphics7CGFloatVySbcSgyyctFQOMQ_10004c650
             ,1);
  uVar4 = 0x100051d38;
  FUN_10001612c(0x100051d38,0x100051ca0,&UNK_10003c390,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_10004c278);
  puVar7 = &uStack_70;
  uStack_70 = uVar2;
  uStack_68 = uVar3;
  puStack_60 = puVar6;
  uStack_58 = uVar4;
  _swift_getOpaqueTypeConformance
            (puVar7,
             PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_10004c660
             ,1);
  puStack_78 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_10004c560;
  puVar8 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  puStack_80 = puVar7;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &puStack_80);
  puRam0000000100051d60 = puVar8;
  return;
}



/* Entry: 10001626c; end: 1000163bf;  */

void FUN_10001626c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  if (puRam0000000100051d60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100051d40;
  func_0x0001000118b8(0x100051d40,&UNK_10003c3d8);
  uVar2 = 0x100051cb0;
  func_0x0001000118b8(0x100051cb0,&UNK_10003c3a0);
  uVar3 = 0x100051ca0;
  func_0x0001000118b8(0x100051ca0,&UNK_10003c390);
  uVar4 = 0x100051ca8;
  func_0x0001000118b8(0x100051ca8,&UNK_10003c398);
  uVar5 = 0x100051d18;
  FUN_10001612c(0x100051d18,0x100051ca8,&UNK_10003c398,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_10004c720);
  puVar6 = &uStack_70;
  uStack_70 = uVar4;
  uStack_68 = uVar5;
  _swift_getOpaqueTypeConformance
            (puVar6,
             PTR___s7SwiftUI4ViewPAAE18onLongPressGesture15minimumDuration15maximumDistance8pressing7performQrSd_12CoreGraphics7CGFloatVySbcSgyyctFQOMQ_10004c650
             ,1);
  uVar4 = 0x100051d38;
  FUN_10001612c(0x100051d38,0x100051ca0,&UNK_10003c390,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_10004c278);
  puVar7 = &uStack_70;
  uStack_70 = uVar2;
  uStack_68 = uVar3;
  puStack_60 = puVar6;
  uStack_58 = uVar4;
  _swift_getOpaqueTypeConformance
            (puVar7,
             PTR___s7SwiftUI4ViewPAAE19simultaneousGesture_9includingQrqd___AA0E4MaskVtAA0E0Rd__lFQOMQ_10004c660
             ,1);
  puStack_78 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_10004c560;
  puVar8 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  puStack_80 = puVar7;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &puStack_80);
  puRam0000000100051d60 = puVar8;
  return;
}



/* Entry: 1000163c0; end: 1000163db;  */

void FUN_1000163c0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 1000163dc; end: 100016487;  */

void FUN_1000163dc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = &UNK_10003c458;
  puStack_50 = &UNK_10003c470;
  puStack_48 = PTR___sBi64_WV_10004cc78 + 0x40;
  puStack_40 = &UNK_10003c488;
  lVar1 = 0x13f;
  FUN_100016cf8();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10003c4a0;
    puStack_28 = PTR___syycWV_10004cdf8 + 0x40;
    _swift_initStructMetadata(param_1,0,7,&puStack_58,param_1 + 0x20);
  }
  return;
}



/* Entry: 100016488; end: 1000165d3;  */

long * FUN_100016488(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar8 = param_2[2];
    lVar7 = param_2[3];
    lVar5 = param_2[4];
    _swift_unknownObjectRetain();
    FUN_1000165d4(lVar8,lVar7,(char)lVar5);
    param_1[2] = lVar8;
    param_1[3] = lVar7;
    *(char *)(param_1 + 4) = (char)lVar5;
    lVar8 = param_2[6];
    param_1[5] = param_2[5];
    if (lVar8 == 0) {
      lVar8 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = lVar8;
    }
    else {
      lVar7 = param_2[7];
      param_1[6] = lVar8;
      param_1[7] = lVar7;
      _swift_retain();
    }
    lVar7 = (long)*(int *)(param_3 + 0x30);
    uVar10 = 0x100051d68;
    FUN_100010860(0x100051d68,&UNK_10003c420);
    lVar8 = (long)param_2 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar8,uVar10);
    bVar6 = (int)lVar8 != 1;
    if (bVar6) {
      *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
      _swift_retain();
    }
    else {
      lVar8 = 0;
      __s7SwiftUI11ColorSchemeOMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar8)
      ;
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,uVar10,!bVar6);
    iVar2 = *(int *)(param_3 + 0x38);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar2);
    lVar8 = puVar1[1];
    uVar10 = *puVar1;
    puVar4 = (undefined8 *)((long)param_1 + (long)iVar2);
    puVar4[1] = puVar1[1];
    *puVar4 = uVar10;
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar8);
  return param_1;
}



/* Entry: 1000165d4; end: 1000165db;  */

void FUN_1000165d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_10004cf40)(param_2);
  return;
}



/* Entry: 1000165dc; end: 100016687;  */

void FUN_1000165dc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 8));
  FUN_100016688(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined1 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x38));
  }
  lVar3 = (long)*(int *)(param_2 + 0x30);
  uVar1 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar2 = param_1 + lVar3;
  _swift_getEnumCaseMultiPayload(lVar2,uVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar3,lVar2);
  }
  else {
    _swift_release(*(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  return;
}



/* Entry: 100016688; end: 10001668f;  */

void FUN_100016688(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(param_2);
  return;
}



/* Entry: 100016690; end: 100016bc7;  */

undefined8 * FUN_100016690(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[2];
  uVar8 = param_2[3];
  uVar2 = *(undefined1 *)(param_2 + 4);
  _swift_unknownObjectRetain();
  FUN_1000165d4(uVar5,uVar8,uVar2);
  param_1[2] = uVar5;
  param_1[3] = uVar8;
  *(undefined1 *)(param_1 + 4) = uVar2;
  lVar6 = param_2[6];
  param_1[5] = param_2[5];
  if (lVar6 == 0) {
    lVar6 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar6;
  }
  else {
    uVar5 = param_2[7];
    param_1[6] = lVar6;
    param_1[7] = uVar5;
    _swift_retain();
  }
  lVar7 = (long)*(int *)(param_3 + 0x30);
  uVar5 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  lVar6 = (long)param_2 + lVar7;
  _swift_getEnumCaseMultiPayload(lVar6,uVar5);
  bVar4 = (int)lVar6 != 1;
  if (bVar4) {
    *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
    _swift_retain();
  }
  else {
    lVar6 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar6);
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,uVar5,!bVar4);
  iVar1 = *(int *)(param_3 + 0x38);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar5 = param_2[1];
  uVar8 = *param_2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = param_2[1];
  *puVar3 = uVar8;
  _swift_retain(uVar5);
  return param_1;
}



/* Entry: 100016bc8; end: 100016bd3;  */

void FUN_100016bc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_10004cea8)();
  return;
}



/* Entry: 100016bd4; end: 100016c5f;  */

ulong FUN_100016bd4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0x100051d78;
  FUN_100010860(0x100051d78,&UNK_10003c430);
  uVar2 = param_1 + *(int *)(param_3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000100016c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100016c60; end: 100016c6b;  */

void FUN_100016c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_10004cf70)();
  return;
}



/* Entry: 100016c6c; end: 100016ceb;  */

void FUN_100016c6c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0x100051d78;
  FUN_100010860(0x100051d78,&UNK_10003c430);
                    /* WARNING: Could not recover jumptable at 0x000100016ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x30),param_2,param_2,lVar1);
  return;
}



/* Entry: 100016cec; end: 100016cf7;  */

void FUN_100016cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_10003e05c);
  return;
}



/* Entry: 100016cf8; end: 100016d4b;  */

void FUN_100016cf8(long param_1)

{
  long lVar1;
  
  if (lRam0000000100051e00 == 0) {
    lVar1 = 0xff;
    __s7SwiftUI11ColorSchemeOMa();
    __s7SwiftUI11EnvironmentV7ContentOMa();
    if (lVar1 == 0) {
      lRam0000000100051e00 = param_1;
    }
  }
  return;
}



/* Entry: 100016d4c; end: 100016d7f;  */

void FUN_100016d4c(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_10003e0b4,1);
  return;
}



/* Entry: 100016d80; end: 100016db3;  */

void FUN_100016d80(void)

{
  FUN_100013f0c();
  _swift_allocObject();
  FUN_100014348();
  return;
}



/* Entry: 100016db4; end: 100016e5b;  */

void FUN_100016db4(undefined8 *param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100027f2c(lVar1);
  FUN_100012198(&uStack_d0,lVar1);
  param_1[0xd] = uStack_68;
  param_1[0xc] = uStack_70;
  param_1[0xf] = uStack_58;
  param_1[0xe] = uStack_60;
  param_1[0x11] = uStack_48;
  param_1[0x10] = uStack_50;
  param_1[0x13] = uStack_38;
  param_1[0x12] = uStack_40;
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 100016e5c; end: 100016efb;  */

double FUN_100016e5c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auStack_218 [16];
  long lStack_208;
  undefined1 auStack_178 [8];
  double dStack_170;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  
  FUN_100016db4(auStack_218);
  FUN_10001a864(auStack_218);
  if (!SBORROW8(lStack_208,1)) {
    FUN_100016db4(auStack_178,param_1);
    FUN_10001a864(auStack_178);
    dVar2 = *(double *)(unaff_x20 + 0x28) - dStack_170 * (double)(lStack_208 + -1);
    if (dVar2 < 0.0) {
      dVar2 = 0.0;
    }
    FUN_100016db4(auStack_d8,param_1);
    FUN_10001a864(auStack_d8);
    return dVar2 / (double)lStack_c8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100016efc);
  (*pcVar1)();
}



/* Entry: 100016efc; end: 1000170ef;  */

void FUN_100016efc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_388 [168];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  __s7SwiftUI9AlignmentV6centerACvgZ();
  FUN_1000170f0(&uStack_f8);
  uStack_278 = uStack_90;
  uStack_280 = uStack_98;
  uStack_268 = uStack_80;
  uStack_270 = uStack_88;
  uStack_258 = uStack_70;
  uStack_260 = uStack_78;
  uStack_2b8 = uStack_d0;
  uStack_2c0 = uStack_d8;
  uStack_2a8 = uStack_c0;
  uStack_2b0 = uStack_c8;
  uStack_298 = uStack_b0;
  uStack_2a0 = uStack_b8;
  uStack_288 = uStack_a0;
  uStack_290 = uStack_a8;
  uStack_2d8 = uStack_f0;
  uStack_2e0 = uStack_f8;
  uStack_2c8 = uStack_e0;
  uStack_2d0 = uStack_e8;
  uStack_1d8 = uStack_90;
  uStack_1e0 = uStack_98;
  uStack_1c8 = uStack_80;
  uStack_1d0 = uStack_88;
  uStack_1b8 = uStack_70;
  uStack_1c0 = uStack_78;
  uStack_218 = uStack_d0;
  uStack_220 = uStack_d8;
  uStack_208 = uStack_c0;
  uStack_210 = uStack_c8;
  uStack_1f8 = uStack_b0;
  uStack_200 = uStack_b8;
  uStack_1e8 = uStack_a0;
  uStack_1f0 = uStack_a8;
  uStack_250 = uStack_68;
  uStack_1b0 = uStack_68;
  uStack_238 = uStack_f0;
  uStack_240 = uStack_f8;
  uStack_228 = uStack_e0;
  uStack_230 = uStack_e8;
  FUN_10001ae68(&uStack_2e0,&uStack_1a0,0x100051e08,&UNK_10003c548);
  func_0x00010001b050(&uStack_240,0x100051e08,&UNK_10003c548);
  uStack_80 = uStack_278;
  uStack_88 = uStack_280;
  uStack_70 = uStack_268;
  uStack_78 = uStack_270;
  uStack_60 = uStack_258;
  uStack_68 = uStack_260;
  uStack_c0 = uStack_2b8;
  uStack_c8 = uStack_2c0;
  uStack_b0 = uStack_2a8;
  uStack_b8 = uStack_2b0;
  uStack_a0 = uStack_298;
  uStack_a8 = uStack_2a0;
  uStack_90 = uStack_288;
  uStack_98 = uStack_290;
  uStack_e0 = uStack_2d8;
  uStack_e8 = uStack_2e0;
  uStack_d0 = uStack_2c8;
  uStack_d8 = uStack_2d0;
  uStack_128 = uStack_278;
  uStack_130 = uStack_280;
  uStack_118 = uStack_268;
  uStack_120 = uStack_270;
  uStack_108 = uStack_258;
  uStack_110 = uStack_260;
  uStack_168 = uStack_2b8;
  uStack_170 = uStack_2c0;
  uStack_158 = uStack_2a8;
  uStack_160 = uStack_2b0;
  uStack_148 = uStack_298;
  uStack_150 = uStack_2a0;
  uStack_138 = uStack_288;
  uStack_140 = uStack_290;
  uStack_58 = uStack_250;
  uStack_100 = uStack_250;
  uStack_188 = uStack_2d8;
  uStack_190 = uStack_2e0;
  uStack_178 = uStack_2c8;
  uStack_180 = uStack_2d0;
  uStack_1a0 = param_2;
  uStack_198 = param_3;
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  FUN_10001ae68(&uStack_1a0,auStack_388,0x100051e10,&UNK_10003c550);
  func_0x00010001b050(&uStack_f8,0x100051e10,&UNK_10003c550);
  param_1[0x11] = uStack_118;
  param_1[0x10] = uStack_120;
  param_1[0x13] = uStack_108;
  param_1[0x12] = uStack_110;
  param_1[0x14] = uStack_100;
  param_1[9] = uStack_158;
  param_1[8] = uStack_160;
  param_1[0xb] = uStack_148;
  param_1[10] = uStack_150;
  param_1[0xd] = uStack_138;
  param_1[0xc] = uStack_140;
  param_1[0xf] = uStack_128;
  param_1[0xe] = uStack_130;
  param_1[1] = uStack_198;
  *param_1 = uStack_1a0;
  param_1[3] = uStack_188;
  param_1[2] = uStack_190;
  param_1[5] = uStack_178;
  param_1[4] = uStack_180;
  param_1[7] = uStack_168;
  param_1[6] = uStack_170;
  return;
}



/* Entry: 1000170f0; end: 10001764b;  */

void FUN_1000170f0(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  code *pcVar17;
  double dVar18;
  undefined1 auStack_560 [8];
  long lStack_558;
  ulong uStack_550;
  undefined *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  uint uStack_52c;
  undefined8 uStack_528;
  uint uStack_51c;
  undefined8 uStack_518;
  undefined *puStack_510;
  long lStack_508;
  undefined *puStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  code *pcStack_4d8;
  code *pcStack_4d0;
  ulong uStack_4c8;
  long lStack_4c0;
  undefined1 auStack_4b8 [152];
  code *pcStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  code *pcStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  byte bStack_398;
  undefined8 uStack_390;
  byte bStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined8 uStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  code *pcStack_128;
  undefined *puStack_120;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar4 = 0;
  puStack_4e8 = param_1;
  uStack_4e0 = param_3;
  FUN_100016cec();
  lVar13 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  lStack_4c0 = lVar11;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_560 + -extraout_x8;
  pcStack_4d0 = *(code **)(lVar13 + 0x10);
  (*pcStack_4d0)(puVar16,param_2,lVar4);
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar15 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  puVar5 = &UNK_10004d9e0;
  uStack_4c8 = uVar12;
  _swift_allocObject(&UNK_10004d9e0,uVar15 + lVar11,uVar12 | 7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(long *)(puVar5 + 0x18) = param_4;
  pcStack_4d8 = *(code **)(lVar13 + 0x20);
  puVar6 = puVar5 + uVar15;
  puVar10 = puVar16;
  puStack_510 = puVar5;
  (*pcStack_4d8)(puVar6,puVar16,lVar4);
  dVar18 = *(double *)(param_2 + 0x28);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_3a0,0,1,dVar18 + 4.0,0,puVar6,puVar10);
  pcVar3 = pcStack_4d0;
  uStack_518 = uStack_3a0;
  uStack_51c = (uint)bStack_398;
  uStack_528 = uStack_390;
  uStack_52c = (uint)bStack_388;
  uStack_540 = uStack_378;
  uStack_538 = uStack_380;
  lStack_558 = lVar4;
  (*pcStack_4d0)(puVar16,param_2,lVar4);
  puVar5 = &UNK_10004da08;
  uStack_550 = uVar15;
  _swift_allocObject(&UNK_10004da08,uVar15 + lStack_4c0,uVar12 | 7);
  pcVar2 = pcStack_4d8;
  uVar9 = uStack_4e0;
  *(undefined8 *)(puVar5 + 0x10) = uStack_4e0;
  *(long *)(puVar5 + 0x18) = param_4;
  puStack_548 = puVar5;
  (*pcStack_4d8)(puVar5 + uVar15,puVar16,lVar4);
  uVar14 = *(undefined8 *)(param_2 + 8);
  pcVar17 = *(code **)(param_4 + 0x10);
  _swift_unknownObjectRetain(uVar14);
  uVar7 = uVar9;
  lVar4 = param_4;
  lStack_508 = param_4;
  (*pcVar17)();
  lStack_4f8 = lVar4;
  uStack_4f0 = uVar7;
  _swift_unknownObjectRelease(uVar14);
  lVar4 = lStack_558;
  (*pcVar3)(puVar16,param_2,lStack_558);
  uVar12 = uStack_550;
  puVar5 = &UNK_10004da30;
  _swift_allocObject(&UNK_10004da30,uStack_550 + lStack_4c0,uStack_4c8 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(long *)(puVar5 + 0x18) = param_4;
  puStack_500 = puVar5;
  (*pcVar2)(puVar5 + uVar12,puVar16,lVar4);
  pcStack_370 = FUN_10001a4c4;
  puStack_368 = puStack_510;
  uStack_360 = uStack_518;
  uStack_358 = (undefined1)uStack_51c;
  uStack_350 = uStack_528;
  uStack_348 = (undefined1)uStack_52c;
  uStack_340 = uStack_538;
  uStack_338 = uStack_540;
  pcStack_330 = FUN_10001a52c;
  puStack_328 = puStack_548;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_188 = CONCAT71(uStack_347,uStack_348);
  uStack_190 = uStack_528;
  uStack_178 = uStack_540;
  uStack_180 = uStack_538;
  puStack_168 = puStack_548;
  pcStack_170 = FUN_10001a52c;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_198 = CONCAT71(uStack_357,uStack_358);
  puStack_1a8 = puStack_510;
  pcStack_1b0 = FUN_10001a4c4;
  uStack_1a0 = uStack_518;
  pcStack_310 = FUN_10001a4c4;
  puStack_308 = puStack_510;
  uStack_300 = uStack_518;
  uStack_2f0 = uStack_528;
  uStack_2e0 = uStack_538;
  uStack_2d8 = uStack_540;
  pcStack_2d0 = FUN_10001a52c;
  puStack_2c8 = puStack_548;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2f8 = uStack_358;
  uStack_2e8 = uStack_348;
  FUN_10001ae68(&pcStack_370,&pcStack_110,0x100051e18,&UNK_10003c558);
  func_0x00010001b050(&pcStack_310,0x100051e18,&UNK_10003c558);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  uVar8 = 0;
  FUN_100013f0c(0);
  uVar14 = uVar8;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar9,uVar7,uVar1,uVar8,uVar14);
  puVar5 = &UNK_10003c560;
  _swift_getKeyPath(&UNK_10003c560);
  puVar6 = &UNK_10003c588;
  _swift_getKeyPath(&UNK_10003c588);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&pcStack_110,uVar9,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(uVar9);
  uVar1 = pcStack_110._0_1_;
  (*pcStack_4d0)(puVar16,param_2,lVar4);
  puVar5 = &UNK_10004da58;
  _swift_allocObject(&UNK_10004da58,uVar12 + lStack_4c0,uStack_4c8 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uStack_4e0;
  *(long *)(puVar5 + 0x18) = lStack_508;
  (*pcStack_4d8)(puVar5 + uVar12,puVar16,lVar4);
  puStack_268 = puStack_168;
  pcStack_270 = pcStack_170;
  uStack_258 = uStack_158;
  uStack_260 = uStack_160;
  puStack_2a8 = puStack_1a8;
  pcStack_2b0 = pcStack_1b0;
  uStack_298 = uStack_198;
  uStack_2a0 = uStack_1a0;
  uStack_250 = uStack_4f0;
  lStack_248 = lStack_4f8;
  pcStack_240 = FUN_10001a728;
  puStack_238 = puStack_500;
  puStack_3d8 = puStack_168;
  pcStack_3e0 = pcStack_170;
  uStack_3c8 = uStack_158;
  uStack_3d0 = uStack_160;
  lStack_3b8 = lStack_4f8;
  uStack_3c0 = uStack_4f0;
  puStack_3a8 = puStack_500;
  pcStack_3b0 = FUN_10001a728;
  uStack_288 = uStack_188;
  uStack_290 = uStack_190;
  uStack_278 = uStack_178;
  uStack_280 = uStack_180;
  uStack_3f8 = uStack_188;
  uStack_400 = uStack_190;
  uStack_3e8 = uStack_178;
  uStack_3f0 = uStack_180;
  puStack_418 = puStack_1a8;
  pcStack_420 = pcStack_1b0;
  uStack_408 = uStack_198;
  uStack_410 = uStack_1a0;
  puStack_228 = puStack_1a8;
  pcStack_230 = pcStack_1b0;
  uStack_218 = uStack_198;
  uStack_220 = uStack_1a0;
  puStack_1e8 = puStack_168;
  pcStack_1f0 = pcStack_170;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  uStack_208 = uStack_188;
  uStack_210 = uStack_190;
  uStack_1f8 = uStack_178;
  uStack_200 = uStack_180;
  uStack_1d0 = uStack_4f0;
  lStack_1c8 = lStack_4f8;
  pcStack_1c0 = FUN_10001a728;
  puStack_1b8 = puStack_500;
  FUN_10001ae68(&pcStack_2b0,&pcStack_110,0x100051e28,&UNK_10003c5a8);
  func_0x00010001b050(&pcStack_230,0x100051e28,&UNK_10003c5a8);
  puStack_168 = puStack_3d8;
  pcStack_170 = pcStack_3e0;
  uStack_158 = uStack_3c8;
  uStack_160 = uStack_3d0;
  lStack_148 = lStack_3b8;
  uStack_150 = uStack_3c0;
  puStack_138 = puStack_3a8;
  pcStack_140 = pcStack_3b0;
  puStack_1a8 = puStack_418;
  pcStack_1b0 = pcStack_420;
  uStack_198 = uStack_408;
  uStack_1a0 = uStack_410;
  uStack_188 = uStack_3f8;
  uStack_190 = uStack_400;
  uStack_178 = uStack_3e8;
  uStack_180 = uStack_3f0;
  puStack_c8 = puStack_3d8;
  pcStack_d0 = pcStack_3e0;
  uStack_b8 = uStack_3c8;
  uStack_c0 = uStack_3d0;
  lStack_a8 = lStack_3b8;
  uStack_b0 = uStack_3c0;
  puStack_98 = puStack_3a8;
  pcStack_a0 = pcStack_3b0;
  puStack_108 = puStack_418;
  pcStack_110 = pcStack_420;
  uStack_f8 = uStack_408;
  uStack_100 = uStack_410;
  uStack_130 = uVar1;
  pcStack_128 = FUN_10001a80c;
  uStack_e8 = uStack_3f8;
  uStack_f0 = uStack_400;
  uStack_d8 = uStack_3e8;
  uStack_e0 = uStack_3f0;
  uStack_90 = uVar1;
  pcStack_88 = FUN_10001a80c;
  puStack_120 = puVar5;
  puStack_80 = puVar5;
  FUN_10001ae68(&pcStack_1b0,auStack_4b8,0x100051e08,&UNK_10003c548);
  func_0x00010001b050(&pcStack_110,0x100051e08,&UNK_10003c548);
  puStack_4e8[0xd] = lStack_148;
  puStack_4e8[0xc] = uStack_150;
  puStack_4e8[0xf] = puStack_138;
  puStack_4e8[0xe] = pcStack_140;
  puStack_4e8[0x11] = pcStack_128;
  puStack_4e8[0x10] = CONCAT71(uStack_12f,uStack_130);
  puStack_4e8[0x12] = puStack_120;
  puStack_4e8[5] = uStack_188;
  puStack_4e8[4] = uStack_190;
  puStack_4e8[7] = uStack_178;
  puStack_4e8[6] = uStack_180;
  puStack_4e8[9] = puStack_168;
  puStack_4e8[8] = pcStack_170;
  puStack_4e8[0xb] = uStack_158;
  puStack_4e8[10] = uStack_160;
  puStack_4e8[1] = puStack_1a8;
  *puStack_4e8 = pcStack_1b0;
  puStack_4e8[3] = uStack_198;
  puStack_4e8[2] = uStack_1a0;
  return;
}



/* Entry: 10001764c; end: 100017a03;  */

void FUN_10001764c(long param_1,double param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double adStack_318 [20];
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
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
  double adStack_138 [5];
  undefined8 uStack_110;
  
  uVar5 = 0;
  FUN_100016cec(0,param_5,param_6);
  FUN_100016db4(adStack_318);
  FUN_10001a864(adStack_318);
  FUN_100016db4(auStack_278,uVar5);
  FUN_10001a864(auStack_278);
  FUN_100016db4(adStack_138,uVar5);
  FUN_10001a864(adStack_138);
  lVar9 = *(long *)(param_4 + 0x10);
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  uVar4 = *(undefined1 *)(param_4 + 0x20);
  uVar6 = 0;
  FUN_100013f0c(0);
  uVar15 = uVar6;
  FUN_10001a780();
  lVar7 = lVar9;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar9,uVar10,uVar4,uVar6,uVar15);
  lVar8 = lVar7;
  FUN_1000136c0();
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar12 = 1;
  }
  else {
    lVar11 = *(long *)(lVar8 + 0x20);
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRelease(lVar8);
    uVar12 = *(ulong *)(lVar11 + 0x10);
    lVar8 = lVar11;
  }
  _swift_bridgeObjectRelease(lVar8);
  _swift_release(lVar7);
  dVar16 = adStack_138[0] + adStack_138[0];
  lVar7 = lVar9;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar9,uVar10,uVar4,uVar6,uVar15);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  _swift_release(lVar7);
  uVar3 = 0;
  if (uVar12 != 0) {
    uVar3 = uVar12 - 1;
  }
  dVar13 = (param_2 + -4.0) - adStack_318[0] * (double)uVar3;
  if (uVar12 == 0 || uVar12 - 1 == 0) {
    uVar12 = 1;
  }
  if (dVar13 < 0.0) {
    dVar13 = 0.0;
  }
  dVar13 = dVar13 / (double)uVar12;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar9,uVar10,uVar4,uVar6,uVar15);
  _swift_release();
  dVar14 = dVar13 * 5.0;
  dVar17 = adStack_318[0] * 4.0 + dVar14;
  FUN_100016e5c(uVar5);
  uVar15 = uVar5;
  FUN_100017a04(param_1,uStack_270,adStack_318[0],dVar16,dVar13,dVar17,dVar14,uVar5);
  uVar6 = *(undefined8 *)(param_4 + 0x28);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_1d8,0,1,uVar6,0,uVar15,uVar10);
  lVar9 = 0x100051e30;
  FUN_100010860(0x100051e30,&UNK_10003c5b0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x24));
  puVar1[1] = uStack_1d0;
  *puVar1 = uStack_1d8;
  puVar1[3] = uStack_1c0;
  puVar1[2] = uStack_1c8;
  puVar1[5] = uStack_1b0;
  puVar1[4] = uStack_1b8;
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uVar15 = 0x4010000000000000;
  uVar10 = uStack_1c8;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar7 = 0x100051e38;
  FUN_100010860(0x100051e38,&UNK_10003c5b8);
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar2 = (char)lVar9;
  *(undefined8 *)(puVar2 + 8) = uVar15;
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  *(double *)(puVar2 + 0x18) = dVar16;
  *(double *)(puVar2 + 0x20) = dVar13;
  puVar2[0x28] = 0;
  FUN_100016db4(adStack_138,uVar5);
  _swift_retain(uStack_110);
  uVar4 = SUB81(adStack_138,0);
  FUN_10001a864();
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar9 = 0x100051e40;
  FUN_100010860();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x24));
  *puVar1 = uStack_110;
  *(undefined1 *)(puVar1 + 1) = uVar4;
  __s7SwiftUI9AlignmentV6bottomACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_1a8,0,1,0,1,0,1,0,1,0,1);
  lVar9 = 0x100051e48;
  FUN_100010860(0x100051e48,&UNK_10003c5c8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x24));
  puVar1[9] = uStack_160;
  puVar1[8] = uStack_168;
  puVar1[0xb] = uStack_150;
  puVar1[10] = uStack_158;
  puVar1[0xd] = uStack_140;
  puVar1[0xc] = uStack_148;
  puVar1[1] = uStack_1a0;
  *puVar1 = uStack_1a8;
  puVar1[3] = uStack_190;
  puVar1[2] = uStack_198;
  puVar1[5] = uStack_180;
  puVar1[4] = uStack_188;
  puVar1[7] = uStack_170;
  puVar1[6] = uStack_178;
  return;
}



/* Entry: 100017a04; end: 100017af3;  */

void FUN_100017a04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 unaff_w20;
  undefined8 uVar3;
  
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = param_8;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x100051e50;
  FUN_100010860(0x100051e50,&UNK_10003c5d0);
  FUN_100017e10((long)param_1 + (long)*(int *)(lVar2 + 0x2c),param_3);
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar3 = 0x4000000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar2 = 0x100051e58;
  FUN_100010860(0x100051e58,&UNK_10003c5d8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  *puVar1 = unaff_w20;
  *(undefined8 *)(puVar1 + 8) = uVar3;
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 100017af4; end: 100017d1b;  */

void FUN_100017af4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  uVar2 = 0;
  FUN_100013f0c(0);
  uVar3 = uVar2;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar4,uVar5,uVar1,uVar2,uVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  pcVar6 = *(code **)(param_3 + 0x10);
  _swift_unknownObjectRetain(uVar5);
  (*pcVar6)(param_2,param_3);
  _swift_unknownObjectRelease(uVar5);
  func_0x000100013bec(param_2,param_3);
  _swift_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010003acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_10004ce50)(param_3);
  return;
}



/* Entry: 100017d1c; end: 100017dff;  */

void FUN_100017d1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = param_9;
  __s7SwiftUI14ObservedObjectV12wrappedValueACyxGx_tcfC
            (param_3,param_9,*(undefined8 *)(param_10 + 8));
  *param_1 = param_3;
  param_1[1] = uVar4;
  param_1[2] = FUN_100016d80;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  param_1[6] = param_4;
  param_1[7] = param_5;
  lVar2 = 0;
  FUN_100016cec(0,param_9,param_10);
  iVar1 = *(int *)(lVar2 + 0x30);
  puVar3 = &UNK_10003c518;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar1) = puVar3;
  uVar4 = 0x100051d68;
  FUN_100010860(0x100051d68,&UNK_10003c420);
  _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar1,uVar4,0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x34)) = param_6;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x38));
  *param_1 = param_7;
  param_1[1] = param_8;
  return;
}



/* Entry: 100017e00; end: 100017e0f;  */

void FUN_100017e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 100017e10; end: 1000181df;  */

void FUN_100017e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 auStack_100 [2];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar3 = 0x100051e60;
  uStack_e8 = param_8;
  uStack_e0 = param_9;
  lStack_a8 = param_1;
  FUN_100010860(0x100051e60,&UNK_10003c5e0);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)&puStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar10;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar10 = lVar10 - extraout_x12;
  lVar4 = 0;
  lStack_b8 = lVar10;
  FUN_100016cec(0,param_8,param_9);
  lVar18 = *(long *)(lVar4 + -8);
  lVar15 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  lVar3 = 0x100051e68;
  FUN_100010860(0x100051e68,&UNK_10003c5e8);
  lStack_c8 = *(long *)(lVar3 + -8);
  lStack_c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar12;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar12 = lVar12 - extraout_x12_00;
  lVar3 = *(long *)(param_7 + 0x10);
  uVar14 = *(undefined8 *)(param_7 + 0x18);
  uVar1 = *(undefined1 *)(param_7 + 0x20);
  uVar5 = 0;
  lStack_d8 = lVar12;
  FUN_100013f0c(0);
  uVar6 = uVar5;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar3,uVar14,uVar1,uVar5,uVar6);
  lVar7 = lVar3;
  FUN_1000136c0();
  _swift_release(lVar3);
  uVar14 = *(undefined8 *)(lVar7 + 0x10);
  _swift_bridgeObjectRelease(lVar7);
  uStack_a0 = 0;
  puVar8 = &UNK_10003c5f8;
  uStack_98 = uVar14;
  _swift_getKeyPath();
  puStack_f0 = puVar8;
  (**(code **)(lVar18 + 0x10))(lVar10,param_7,lVar4);
  uVar11 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar17 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  uVar16 = lVar15 + uVar17 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_10004da80;
  _swift_allocObject(&UNK_10004da80,uVar16 + 0x20,uVar11 | 7);
  *(undefined8 *)(puVar8 + 0x10) = uStack_e8;
  *(undefined8 *)(puVar8 + 0x18) = uStack_e0;
  (**(code **)(lVar18 + 0x20))(puVar8 + uVar17,lVar10,lVar4);
  *(undefined8 *)(puVar8 + uVar16) = param_2;
  *(undefined8 *)(puVar8 + uVar16 + 8) = param_3;
  *(undefined8 *)(puVar8 + uVar16 + 0x10) = param_4;
  *(undefined8 *)(puVar8 + uVar16 + 0x18) = param_5;
  uVar14 = 0x100051e70;
  FUN_100010860(0x100051e70,&UNK_10003c610);
  uVar6 = 0x100051e78;
  FUN_100010860(0x100051e78,&UNK_10003c618);
  uVar5 = uVar6;
  FUN_10001aa48();
  uVar9 = uVar5;
  FUN_10001ab00();
  *(undefined8 *)(lVar12 + -0x10) = uVar9;
  lVar7 = lStack_d8;
  __s7SwiftUI7ForEachVA2A4ViewR0_rlE_2id7contentACyxq_q0_Gx_s7KeyPathCy7ElementQzq_Gq0_AKctcfC
            (lStack_d8,&uStack_a0,puStack_f0,FUN_10001a9a8,puVar8,uVar14,uVar6,uVar5,
             PTR___sSiSHsWP_10004cd00);
  lVar15 = lStack_b8;
  FUN_1000188e8(lStack_b8,param_2,param_6,param_5,lVar4);
  lVar12 = lStack_c0;
  lVar10 = lStack_c8;
  lVar4 = lStack_d0;
  pcVar13 = *(code **)(lStack_c8 + 0x10);
  (*pcVar13)(lStack_d0,lVar7,lStack_c0);
  lVar18 = lStack_b0;
  func_0x00010001b008(lVar15,lStack_b0,0x100051e60,&UNK_10003c5e0);
  lVar2 = lStack_a8;
  (*pcVar13)(lStack_a8,lVar4,lVar12);
  lVar3 = 0x100051ec0;
  FUN_100010860(0x100051ec0,&UNK_10003c630);
  func_0x00010001b008(lVar18,lVar2 + *(int *)(lVar3 + 0x30),0x100051e60,&UNK_10003c5e0);
  func_0x00010001b050(lVar15,0x100051e60,&UNK_10003c5e0);
  pcVar13 = *(code **)(lVar10 + 8);
  (*pcVar13)(lVar7,lVar12);
  func_0x00010001b050(lVar18,0x100051e60,&UNK_10003c5e0);
  (*pcVar13)(lVar4,lVar12);
  return;
}



/* Entry: 1000181e0; end: 1000185bf;  */

void FUN_1000181e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong *param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
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
  
  lVar4 = 0x100051f08;
  uStack_c8 = param_8;
  uStack_c0 = param_9;
  uStack_b0 = param_1;
  FUN_100010860(0x100051f08,&UNK_10003c668);
  lStack_d0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = (long)&lStack_d0 - extraout_x8;
  lVar4 = 0x100051f10;
  FUN_100010860(0x100051f10,&UNK_10003c670);
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar14 - extraout_x8_00;
  lVar5 = 0x100051ea0;
  FUN_100010860(0x100051ea0,&UNK_10003c620);
  lStack_b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar12 - extraout_x8_01;
  uVar11 = *param_6;
  lVar5 = *(long *)(param_7 + 0x10);
  uVar8 = *(undefined8 *)(param_7 + 0x18);
  uVar1 = *(undefined1 *)(param_7 + 0x20);
  uVar6 = 0;
  FUN_100013f0c(0);
  uVar13 = uVar6;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar5,uVar8,uVar1,uVar6,uVar13);
  lVar7 = lVar5;
  FUN_1000136c0();
  _swift_release(lVar5);
  if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000185bc);
    (*pcVar3)();
  }
  if (uVar11 < *(ulong *)(lVar7 + 0x10)) {
    uVar13 = *(undefined8 *)(lVar7 + uVar11 * 8 + 0x20);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRelease(lVar7);
    uVar8 = 0;
    FUN_100016cec(0,uStack_c8,uStack_c0);
    if (uVar11 == 2) {
      FUN_1000185c0(lVar15,param_2,param_3,param_4,param_5,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      FUN_10001ae68(lVar15,lVar12,0x100051ea0,&UNK_10003c620);
      _swift_storeEnumTagMultiPayload(lVar12,lVar4,0);
      puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730;
      uVar8 = 0x100051e98;
      FUN_10001b6cc(0x100051e98,0x100051ea0,&UNK_10003c620,
                    PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730);
      uVar13 = 0x100051ea8;
      func_0x0001000118b8(0x100051ea8,&UNK_10003c628);
      uVar6 = 0x100051eb0;
      FUN_10001b6cc(0x100051eb0,0x100051ea8,&UNK_10003c628,puVar2);
      uVar9 = uVar6;
      FUN_10001ac0c();
      puStack_98 = &UNK_10004d278;
      puVar10 = &uStack_a0;
      uStack_a0 = uVar13;
      uStack_90 = uVar6;
      uStack_88 = uVar9;
      _swift_getOpaqueTypeConformance
                (puVar10,
                 PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_10004c638,1);
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_b0,lVar12,lStack_b8,lStack_a8,uVar8,puVar10);
      func_0x00010001b050(lVar15,0x100051ea0,&UNK_10003c620);
    }
    else {
      FUN_100018740(lVar14,param_4,param_2,param_5,uVar13,uVar8);
      _swift_bridgeObjectRelease(uVar13);
      lVar7 = lStack_a8;
      lVar5 = lStack_d0;
      (**(code **)(lStack_d0 + 0x10))(lVar12,lVar14,lStack_a8);
      _swift_storeEnumTagMultiPayload(lVar12,lVar4,1);
      puVar2 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730;
      uVar8 = 0x100051e98;
      FUN_10001b6cc(0x100051e98,0x100051ea0,&UNK_10003c620,
                    PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730);
      uVar13 = 0x100051ea8;
      func_0x0001000118b8(0x100051ea8,&UNK_10003c628);
      uVar6 = 0x100051eb0;
      FUN_10001b6cc(0x100051eb0,0x100051ea8,&UNK_10003c628,puVar2);
      uVar9 = uVar6;
      FUN_10001ac0c();
      puStack_98 = &UNK_10004d278;
      puVar10 = &uStack_a0;
      uStack_a0 = uVar13;
      uStack_90 = uVar6;
      uStack_88 = uVar9;
      _swift_getOpaqueTypeConformance
                (puVar10,
                 PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_10004c638,1);
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_b0,lVar12,lStack_b8,lVar7,uVar8,puVar10);
      (**(code **)(lVar5 + 8))(lVar14,lVar7);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000185c0);
  (*pcVar3)();
}



/* Entry: 1000185c0; end: 10001873f;  */

void FUN_1000185c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  char acStack_118 [128];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar2 = 0;
  FUN_100013f0c(0);
  uVar3 = uVar2;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar4,uVar9,uVar1,uVar2,uVar3);
  puVar5 = &UNK_10003c678;
  _swift_getKeyPath(&UNK_10003c678);
  puVar6 = &UNK_10003c6a0;
  _swift_getKeyPath(&UNK_10003c6a0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (acStack_118,uVar4,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(uVar4);
  if (acStack_118[0] == '\0') {
    FUN_100016db4(acStack_118,param_7);
    uVar4 = uStack_90;
    uVar9 = uStack_98;
  }
  else {
    FUN_100016db4(acStack_118,param_7);
    uVar4 = uStack_80;
    uVar9 = uStack_88;
  }
  pcVar7 = acStack_118;
  _swift_bridgeObjectRetain(uVar4);
  FUN_10001a864();
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = pcVar7;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar8 = 0x100051f18;
  FUN_100010860(0x100051f18,&UNK_10003c6c0);
  FUN_100018b14((long)param_1 + (long)*(int *)(lVar8 + 0x2c),param_5,param_3,param_2,param_4,uVar9,
                uVar4);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Entry: 100018740; end: 1000188e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100018740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long *plVar6;
  long alStack_1e0 [2];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [48];
  undefined8 uStack_190;
  undefined1 auStack_120 [56];
  undefined8 uStack_e8;
  
  lVar1 = 0x100051ea8;
  FUN_100010860(0x100051ea8,&UNK_10003c628);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  plVar6 = (long *)((long)alStack_1e0 + lVar3);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar6 = lVar2;
  *(undefined8 *)((long)alStack_1e0 + lVar3 + 8U) = param_3;
  *(undefined1 *)((long)&uStack_1d0 + lVar3) = 0;
  lVar3 = 0x100051f38;
  FUN_100010860(0x100051f38,&UNK_10003c6e0);
  FUN_10001896c((long)plVar6 + (long)*(int *)(lVar3 + 0x2c),param_2,param_4,param_5);
  FUN_100016db4(auStack_1c0,param_6);
  _swift_retain(uStack_190);
  FUN_10001a864(auStack_1c0);
  FUN_100016db4(auStack_120,param_6);
  _swift_retain(uStack_e8);
  FUN_10001a864(auStack_120);
  alStack_1e0[1] = uStack_190;
  uStack_1d0 = uStack_e8;
  uStack_1c8 = 0;
  uVar4 = 0x100051eb0;
  FUN_10001b6cc(0x100051eb0,0x100051ea8,&UNK_10003c628,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730);
  uVar5 = uVar4;
  FUN_10001ac0c();
  __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lF
            (param_1,alStack_1e0 + 1,lVar1,&UNK_10004d278,uVar4,uVar5);
  _swift_release(uStack_e8);
  _swift_release(uStack_190);
  FUN_10001afc8(plVar6,0x100051ea8,&UNK_10003c628);
  return;
}



/* Entry: 1000188e8; end: 10001896b;  */

void FUN_1000188e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = param_5;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = 0x100051ec8;
  FUN_100010860(0x100051ec8,&UNK_10003c638);
  FUN_100019900((long)param_1 + (long)*(int *)(lVar1 + 0x2c),param_4,param_2,param_3);
  return;
}



/* Entry: 10001896c; end: 100018b13;  */

void FUN_10001896c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  uStack_80 = param_1;
  FUN_100016cec(0,param_6,param_7);
  lVar10 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(lVar8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_10003c6f8;
  uStack_78 = param_4;
  _swift_getKeyPath();
  puStack_88 = puVar2;
  (**(code **)(lVar10 + 0x10))(auStack_90 + -extraout_x8,param_5,lVar1);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar2 = &UNK_10004dbe8;
  _swift_allocObject(&UNK_10004dbe8,uVar9 + 0x10,uVar6 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  (**(code **)(lVar10 + 0x20))(puVar2 + uVar7,auStack_90 + -extraout_x8,lVar1);
  *(undefined8 *)(puVar2 + uVar9) = param_2;
  *(undefined8 *)(puVar2 + uVar9 + 8) = param_3;
  _swift_bridgeObjectRetain(param_4);
  uVar3 = 0x100051c88;
  FUN_100010860(0x100051c88,&UNK_10003c710);
  uVar4 = 0x100051f60;
  FUN_10001b6cc(0x100051f60,0x100051c88,&UNK_10003c710,PTR___sSayxGSksMc_10004cce8);
  uVar5 = uVar4;
  FUN_10001b0a8();
  *(undefined8 *)((long)auStack_a0 + -extraout_x8) = uVar5;
  __s7SwiftUI7ForEachVA2A4ViewR0_rlE_2id7contentACyxq_q0_Gx_s7KeyPathCy7ElementQzq_Gq0_AKctcfC
            (uStack_80,&uStack_78,puStack_88,FUN_10001b240,puVar2,uVar3,&UNK_10004dd78,uVar4,
             PTR___sSSSHsWP_10004ccd8);
  return;
}



/* Entry: 100018b14; end: 1000194bf;  */

void FUN_100018b14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  undefined8 *puVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  code *pcVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  code *apcStack_680 [4];
  long lStack_660;
  long lStack_658;
  ulong uStack_650;
  long lStack_648;
  long lStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  undefined *puStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 auStack_598 [96];
  undefined1 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 uStack_510;
  undefined1 auStack_508 [32];
  undefined8 uStack_4e8;
  undefined8 auStack_468 [20];
  undefined1 auStack_3c8 [48];
  undefined8 uStack_398;
  undefined1 auStack_328 [56];
  undefined8 uStack_2f0;
  undefined1 auStack_288 [160];
  undefined8 auStack_1e8 [10];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  
  lVar17 = 0x100051f20;
  uVar25 = param_3;
  uVar26 = param_4;
  uVar27 = param_5;
  apcStack_680[3] = (code *)param_7;
  uStack_650 = param_6;
  uStack_630 = param_9;
  lStack_5f8 = param_1;
  uStack_5c8 = param_11;
  uStack_5b8 = param_10;
  FUN_100010860(0x100051f20,&UNK_10003c6c8);
  lStack_5d0 = *(long *)(lVar17 + -8);
  lStack_600 = lVar17;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_5d0 + 0x40));
  lVar15 = (long)apcStack_680 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_608 = lVar15;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar15 = lVar15 - extraout_x12;
  lVar17 = 0x100051ea8;
  lStack_610 = lVar15;
  FUN_100010860(0x100051ea8,&UNK_10003c628);
  lStack_628 = lVar17;
  (*(code *)PTR____chkstk_darwin_10004c8a8)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)(lVar15 - extraout_x8_00);
  lVar17 = 0x100051f08;
  puStack_638 = puVar16;
  FUN_100010860(0x100051f08,&UNK_10003c668);
  lStack_5d8 = *(long *)(lVar17 + -8);
  lStack_618 = lVar17;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_5d8 + 0x40));
  lVar15 = (long)puVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_620 = lVar15;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar15 = lVar15 - extraout_x12_00;
  lVar7 = 0;
  lStack_5e8 = lVar15;
  FUN_100016cec(0,param_10,param_11);
  lVar22 = *(long *)(lVar7 + -8);
  lStack_660 = *(long *)(lVar22 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar15 = lVar15 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_658 = lVar15;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar15 = lVar15 - extraout_x12_01;
  lVar17 = 0x100051f28;
  FUN_100010860(0x100051f28,&UNK_10003c6d0);
  lStack_640 = lVar17;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar17 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_5e0 = lVar17;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lStack_5c0 = lVar17 - extraout_x12_02;
  _swift_bridgeObjectRetain(param_7);
  FUN_100016db4(auStack_508,lVar7);
  FUN_10001a864(auStack_508);
  apcStack_680[2] = (code *)uStack_4e8;
  apcStack_680[0] = *(code **)(lVar22 + 0x10);
  lStack_5f0 = param_8;
  (*apcStack_680[0])(lVar15,param_8,lVar7);
  lVar17 = lStack_660;
  uVar24 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar19 = uVar24 + 0x20 & (uVar24 ^ 0xffffffffffffffff);
  puVar8 = &UNK_10004db48;
  _swift_allocObject(&UNK_10004db48,uVar19 + lStack_660,uVar24 | 7);
  uVar14 = uStack_5b8;
  uVar20 = uStack_5c8;
  *(undefined8 *)(puVar8 + 0x10) = uStack_5b8;
  *(undefined8 *)(puVar8 + 0x18) = uStack_5c8;
  pcVar23 = *(code **)(lVar22 + 0x20);
  apcStack_680[1] = (code *)puVar8;
  (*pcVar23)(puVar8 + uVar19,lVar15,lVar7);
  lVar15 = lStack_658;
  (*apcStack_680[0])(lStack_658,param_8,lVar7);
  puVar8 = &UNK_10004db70;
  _swift_allocObject(&UNK_10004db70,uVar19 + lVar17,uVar24 | 7);
  *(undefined8 *)(puVar8 + 0x10) = uVar14;
  *(undefined8 *)(puVar8 + 0x18) = uVar20;
  lStack_648 = lVar7;
  (*pcVar23)(puVar8 + uVar19,lVar15,lVar7);
  lVar17 = lStack_5f0;
  pcVar18 = apcStack_680[3];
  pcVar23 = apcStack_680[1];
  uStack_148 = uStack_650;
  uStack_140 = apcStack_680[3];
  uStack_138 = apcStack_680[2];
  uStack_130 = 1;
  pcStack_120 = FUN_10001aef8;
  puStack_118 = apcStack_680[1];
  uStack_110 = 0x10001af04;
  uStack_128 = param_2;
  puStack_108 = puVar8;
  FUN_100016db4(auStack_468,lVar7);
  uVar20 = *(undefined8 *)(lVar17 + 0x10);
  uVar14 = *(undefined8 *)(lVar17 + 0x18);
  bVar2 = *(byte *)(lVar17 + 0x20);
  uStack_650 = CONCAT44(uStack_650._4_4_,(uint)bVar2);
  uVar9 = 0;
  FUN_100013f0c();
  uVar10 = uVar9;
  lStack_658 = uVar9;
  FUN_10001a780();
  uVar21 = uVar20;
  lStack_660 = uVar10;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar20,uVar14,bVar2,uVar9,uVar10);
  puVar11 = &UNK_10003c678;
  _swift_getKeyPath();
  puVar12 = &UNK_10003c6a0;
  _swift_getKeyPath();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (auStack_1e8,uVar21,puVar11,puVar12);
  _swift_release(puVar11);
  _swift_release(puVar12);
  _swift_release(uVar21);
  lVar17 = 0x30;
  if ((char)auStack_1e8[0] != '\x01') {
    lVar17 = 0x40;
  }
  uVar21 = *(undefined8 *)((long)auStack_468 + lVar17);
  _swift_retain(uVar21);
  puVar16 = auStack_468;
  FUN_10001a864(puVar16);
  auStack_1e8[0] = uVar21;
  FUN_10001acb4();
  puVar13 = puVar16;
  func_0x00010001acf4();
  lVar22 = lStack_5c0;
  __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lF
            (lStack_5c0,auStack_1e8,&UNK_10004de70,&UNK_10004d480,puVar16,puVar13);
  _swift_release(puVar8);
  _swift_release(pcVar23);
  _swift_bridgeObjectRelease(pcVar18);
  _swift_release();
  uVar6 = (undefined1)uVar21;
  __s7SwiftUI4EdgeO3SetV8trailingAEvgZ();
  uVar21 = param_3;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar17 = 0x100051ee8;
  uVar10 = uVar27;
  FUN_100010860(0x100051ee8,&UNK_10003c658);
  lVar7 = lStack_658;
  lVar15 = lStack_660;
  puVar1 = (undefined1 *)(lVar22 + *(int *)(lVar17 + 0x24));
  *puVar1 = uVar6;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = uVar25;
  *(undefined8 *)(puVar1 + 0x18) = uVar26;
  *(undefined8 *)(puVar1 + 0x20) = uVar27;
  puVar1[0x28] = 0;
  uVar19 = uStack_650 & 0xffffffff;
  uVar21 = uVar20;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar20,uVar14,uVar19,lStack_658,lStack_660);
  puVar8 = &UNK_10003c560;
  _swift_getKeyPath(&UNK_10003c560);
  puVar11 = &UNK_10003c588;
  _swift_getKeyPath(&UNK_10003c588);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_148,uVar21,puVar8,puVar11);
  _swift_release(puVar8);
  _swift_release(puVar11);
  _swift_release(uVar21);
  uVar21 = 0x3ff0000000000000;
  if ((char)uStack_148 != '\0') {
    uVar21 = 0;
  }
  lVar17 = 0x100051f30;
  FUN_100010860(0x100051f30,&UNK_10003c6d8);
  *(undefined8 *)(lVar22 + *(int *)(lVar17 + 0x24)) = uVar21;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar20,uVar14,uVar19,lVar7,lVar15);
  puVar8 = &UNK_10003c560;
  _swift_getKeyPath(&UNK_10003c560);
  puVar11 = &UNK_10003c588;
  _swift_getKeyPath(&UNK_10003c588);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_148,uVar20,puVar8,puVar11);
  _swift_release(puVar8);
  _swift_release(puVar11);
  _swift_release();
  *(bool *)(lVar22 + *(int *)(lStack_640 + 0x24)) = (char)uStack_148 == '\0';
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  puVar16 = puStack_638;
  *puStack_638 = uVar20;
  puVar16[1] = param_4;
  *(undefined1 *)(puVar16 + 2) = 0;
  lVar17 = 0x100051f38;
  FUN_100010860(0x100051f38,&UNK_10003c6e0);
  lVar15 = lStack_5f0;
  uVar21 = param_2;
  FUN_1000194c0((long)puVar16 + (long)*(int *)(lVar17 + 0x2c),param_5,param_4,lStack_5f0,uStack_630,
                uStack_5b8,uStack_5c8);
  lVar17 = lStack_648;
  FUN_100016db4(auStack_3c8,lStack_648);
  _swift_retain(uStack_398);
  FUN_10001a864(auStack_3c8);
  FUN_100016db4(auStack_328,lVar17);
  _swift_retain(uStack_2f0);
  FUN_10001a864(auStack_328);
  uStack_148 = uStack_398;
  uStack_140 = uStack_2f0;
  uStack_138 = 0;
  uVar20 = 0x100051eb0;
  FUN_10001b6cc(0x100051eb0,0x100051ea8,&UNK_10003c628,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_10004c730);
  uVar14 = uVar20;
  FUN_10001ac0c();
  lVar3 = lStack_5e8;
  uStack_630 = uVar14;
  __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lF
            (lStack_5e8,&uStack_148,lStack_628,&UNK_10004d278,uVar20,uVar14);
  _swift_release(uStack_2f0);
  _swift_release(uStack_398);
  FUN_10001afc8(puVar16,0x100051ea8,&UNK_10003c628);
  uVar20 = *(undefined8 *)(lVar15 + 8);
  _swift_unknownObjectRetain(uVar20);
  FUN_100016db4(auStack_288,lVar17);
  FUN_10001a864(auStack_288);
  FUN_100016db4(auStack_1e8,lVar17);
  _swift_bridgeObjectRetain(uStack_190);
  FUN_10001a864(auStack_1e8);
  FUN_100015a48(auStack_598,param_2,uVar20,uStack_198,uStack_190,uStack_5b8,uStack_5c8);
  uVar6 = (undefined1)uVar20;
  __s7SwiftUI4EdgeO3SetV7leadingAEvgZ();
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_510 = 0;
  uStack_538 = uVar6;
  uStack_530 = param_3;
  uStack_520 = uVar21;
  uStack_518 = uVar10;
  FUN_100016db4(&uStack_148,lVar17);
  puVar8 = puStack_108;
  _swift_retain(puStack_108);
  FUN_10001a864(&uStack_148);
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  puStack_5b0 = puVar8;
  uVar20 = 0x100051f40;
  FUN_100010860(0x100051f40,&UNK_10003c6e8);
  uVar14 = uVar20;
  FUN_10001af10();
  lVar22 = lStack_610;
  __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lF
            (lStack_610,&puStack_5b0,uVar20,&UNK_10004d278,uVar14,uStack_630);
  _swift_release(puVar8);
  FUN_10001afc8(auStack_598,0x100051f40,&UNK_10003c6e8);
  lVar17 = lStack_5e0;
  func_0x00010001b008(lStack_5c0,lStack_5e0,0x100051f28,&UNK_10003c6d0);
  lVar7 = lStack_618;
  lVar15 = lStack_620;
  pcVar23 = *(code **)(lStack_5d8 + 0x10);
  (*pcVar23)(lStack_620,lVar3,lStack_618);
  lVar4 = lStack_600;
  lVar3 = lStack_608;
  pcVar18 = *(code **)(lStack_5d0 + 0x10);
  (*pcVar18)(lStack_608,lVar22,lStack_600);
  lVar5 = lStack_5f8;
  func_0x00010001b008(lVar17,lStack_5f8,0x100051f28,&UNK_10003c6d0);
  lVar17 = 0x100051f58;
  FUN_100010860(0x100051f58,&UNK_10003c6f0);
  (*pcVar23)(lVar5 + *(int *)(lVar17 + 0x30),lVar15,lVar7);
  (*pcVar18)(lVar5 + *(int *)(lVar17 + 0x40),lVar3,lVar4);
  pcVar23 = *(code **)(lStack_5d0 + 8);
  (*pcVar23)(lVar22,lVar4);
  pcVar18 = *(code **)(lStack_5d8 + 8);
  (*pcVar18)(lStack_5e8,lVar7);
  func_0x00010001b050(lStack_5c0,0x100051f28,&UNK_10003c6d0);
  (*pcVar23)(lVar3,lVar4);
  (*pcVar18)(lVar15,lVar7);
  func_0x00010001b050(lStack_5e0,0x100051f28,&UNK_10003c6d0);
  return;
}



/* Entry: 1000194c0; end: 1000196c7;  */

void FUN_1000194c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar2 = 0;
  uStack_a0 = param_6;
  uStack_98 = param_8;
  uStack_90 = param_1;
  FUN_100016cec(0,param_7,param_8);
  lVar11 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_a0 + -extraout_x8;
  uVar5 = *(undefined8 *)(param_5 + 0x10);
  uVar8 = *(undefined8 *)(param_5 + 0x18);
  uVar1 = *(undefined1 *)(param_5 + 0x20);
  uVar3 = 0;
  FUN_100013f0c(0);
  uVar4 = uVar3;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uVar8,uVar1,uVar3,uVar4);
  FUN_100013d18(param_2,param_3);
  _swift_release(uVar5);
  uVar5 = uStack_a0;
  uStack_88 = uStack_a0;
  puVar6 = &UNK_10003c6f8;
  _swift_getKeyPath(&UNK_10003c6f8);
  (**(code **)(lVar11 + 0x10))(lVar12,param_5,lVar2);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  uVar13 = lVar14 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar7 = &UNK_10004db98;
  _swift_allocObject(&UNK_10004db98,uVar13 + 0x10,uVar9 | 7);
  *(undefined8 *)(puVar7 + 0x10) = param_7;
  *(undefined8 *)(puVar7 + 0x18) = uStack_98;
  (**(code **)(lVar11 + 0x20))(puVar7 + uVar10,lVar12,lVar2);
  *(undefined8 *)(puVar7 + uVar13) = param_2;
  *(undefined8 *)(puVar7 + uVar13 + 8) = param_4;
  _swift_bridgeObjectRetain(uVar5);
  uVar5 = 0x100051c88;
  FUN_100010860(0x100051c88,&UNK_10003c710);
  uVar8 = 0x100051f60;
  FUN_10001b6cc(0x100051f60,0x100051c88,&UNK_10003c710,PTR___sSayxGSksMc_10004cce8);
  uVar4 = uVar8;
  FUN_10001b0a8();
  *(undefined8 *)((long)auStack_b0 + -extraout_x8) = uVar4;
  __s7SwiftUI7ForEachVA2A4ViewR0_rlE_2id7contentACyxq_q0_Gx_s7KeyPathCy7ElementQzq_Gq0_AKctcfC
            (uStack_90,&uStack_88,puVar6,0x10001b094,puVar7,uVar5,&UNK_10004dd78,uVar8,
             PTR___sSSSHsWP_10004ccd8);
  return;
}



/* Entry: 1000196c8; end: 100019813;  */

void FUN_1000196c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = 0;
  lStack_c0 = param_8;
  uStack_b8 = param_9;
  FUN_100016cec(0,param_6,param_7);
  lVar5 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(lVar8 + 0xfU & 0xfffffffffffffff0);
  uStack_c8 = *param_4;
  uStack_d0 = param_4[1];
  uVar7 = *(undefined8 *)(param_5 + 8);
  (**(code **)(lVar5 + 0x10))((long)&uStack_d0 - extraout_x8,param_5,lVar2);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  lVar3 = lStack_c0;
  _swift_allocObject(lStack_c0,uVar6 + lVar8,uVar4 | 7);
  *(undefined8 *)(lVar3 + 0x10) = param_6;
  *(undefined8 *)(lVar3 + 0x18) = param_7;
  (**(code **)(lVar5 + 0x20))(lVar3 + uVar6,(long)&uStack_d0 - extraout_x8,lVar2);
  uVar1 = uStack_d0;
  FUN_10001bb50(&uStack_b0,param_2,param_3,uVar7,uStack_c8,uStack_d0,uStack_b8,lVar3,param_6,param_7
               );
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  _swift_unknownObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  return;
}



/* Entry: 100019814; end: 1000198ff;  */

void FUN_100019814(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uStack_32;
  char cStack_31;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x20);
  uVar3 = 0;
  FUN_100013f0c(0);
  uVar4 = uVar3;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uVar1,uVar2,uVar3,uVar4);
  puVar6 = &UNK_10003c678;
  _swift_getKeyPath(&UNK_10003c678);
  puVar7 = &UNK_10003c6a0;
  _swift_getKeyPath(&UNK_10003c6a0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&cStack_31,uVar5,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  if (cStack_31 == '\x01') {
    puVar6 = &UNK_10003c678;
    _swift_getKeyPath(&UNK_10003c678);
    puVar7 = &UNK_10003c6a0;
    _swift_getKeyPath(&UNK_10003c6a0);
    uStack_32 = 0;
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (&uStack_32,uVar5,puVar6,puVar7);
  }
  else {
    _swift_release(uVar5);
  }
  return;
}



/* Entry: 100019900; end: 10001a397;  */

void FUN_100019900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lStack_8b0;
  long lStack_8a8;
  long lStack_8a0;
  long lStack_898;
  long lStack_890;
  long lStack_888;
  long lStack_880;
  long lStack_878;
  long lStack_870;
  code *pcStack_868;
  ulong uStack_860;
  code *pcStack_858;
  ulong uStack_850;
  undefined1 *puStack_848;
  long lStack_840;
  long lStack_838;
  long lStack_830;
  long lStack_828;
  long lStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  long lStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined1 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  long lStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 auStack_7a0 [24];
  undefined8 uStack_788;
  undefined1 auStack_700 [64];
  undefined8 uStack_6c0;
  undefined1 auStack_660 [24];
  undefined8 uStack_648;
  undefined1 auStack_5c0 [64];
  undefined8 uStack_580;
  undefined1 auStack_520 [56];
  undefined8 uStack_4e8;
  undefined1 auStack_480 [24];
  undefined8 uStack_468;
  undefined1 auStack_3e0 [72];
  undefined8 uStack_398;
  undefined1 auStack_340 [64];
  undefined8 uStack_300;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 auStack_270 [20];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  lVar16 = 0x100051ed0;
  uVar18 = param_3;
  uVar21 = param_4;
  lStack_878 = param_1;
  uStack_818 = param_7;
  uStack_810 = param_8;
  FUN_100010860(0x100051ed0,&UNK_10003c640);
  lStack_8a0 = *(long *)(lVar16 + -8);
  lStack_828 = lVar16;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(lStack_8a0 + 0x40));
  lVar15 = (long)&lStack_8b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_870 = lVar15;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar15 = lVar15 - extraout_x12;
  lVar16 = 0x100051ed8;
  lStack_888 = lVar15;
  FUN_100010860(0x100051ed8,&UNK_10003c648);
  lStack_898 = lVar16;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_880 = lVar15;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar15 = lVar15 - extraout_x12_00;
  lVar16 = 0x100051ee0;
  lStack_830 = lVar15;
  FUN_100010860(0x100051ee0,&UNK_10003c650);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_890 = lVar15;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar15 = lVar15 - extraout_x12_01;
  lVar7 = 0;
  lStack_808 = lVar15;
  FUN_100016cec(0,param_7,param_8);
  lVar17 = *(long *)(lVar7 + -8);
  lStack_840 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(lStack_840 + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_02;
  lVar16 = 0x100051ee8;
  FUN_100010860(0x100051ee8,&UNK_10003c658);
  lStack_8a8 = lVar16;
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar16 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_838 = lVar16;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lStack_820 = lVar16 - extraout_x12_02;
  uVar9 = *(undefined8 *)(param_6 + 0x10);
  uVar19 = *(undefined8 *)(param_6 + 0x18);
  uVar6 = *(undefined1 *)(param_6 + 0x20);
  uVar8 = 0;
  FUN_100013f0c(0);
  uVar14 = uVar8;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar9,uVar19,uVar6,uVar8,uVar14);
  puVar10 = &UNK_10003c560;
  _swift_getKeyPath(&UNK_10003c560);
  puVar11 = &UNK_10003c588;
  _swift_getKeyPath(&UNK_10003c588);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_130,uVar9,puVar10,puVar11);
  _swift_release(puVar10);
  _swift_release(puVar11);
  _swift_release(uVar9);
  bVar5 = (char)uStack_130 != '\0';
  uStack_130 = 0x6d726f6674786574;
  if (bVar5) {
    uStack_130 = 0xd000000000000014;
  }
  uVar9 = 0xee003332312e7461;
  if (bVar5) {
    uVar9 = 0x8000000100045d10;
  }
  FUN_100016db4(auStack_7a0,lVar7);
  FUN_10001a864(auStack_7a0);
  pcStack_858 = *(code **)(lVar17 + 0x10);
  lStack_8b0 = lVar15;
  (*pcStack_858)(lVar15,param_6,lVar7);
  uStack_860 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar20 = uStack_860 + 0x20 & (uStack_860 ^ 0xffffffffffffffff);
  puVar10 = &UNK_10004daa8;
  _swift_allocObject(&UNK_10004daa8,uVar20 + lStack_840,uStack_860 | 7);
  *(undefined8 *)(puVar10 + 0x10) = uStack_818;
  *(undefined8 *)(puVar10 + 0x18) = uStack_810;
  pcStack_868 = *(code **)(lVar17 + 0x20);
  uStack_850 = uVar20;
  (*pcStack_868)(puVar10 + uVar20,lVar15,lVar7);
  uStack_120 = uStack_788;
  uStack_118 = 0;
  pcStack_108 = FUN_10001ac4c;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_128 = uVar9;
  uStack_110 = param_2;
  puStack_100 = puVar10;
  FUN_100016db4(auStack_700,lVar7);
  _swift_retain(uStack_6c0);
  puVar12 = auStack_700;
  FUN_10001a864();
  uStack_1d0 = uStack_6c0;
  FUN_10001acb4();
  puVar13 = puVar12;
  func_0x00010001acf4();
  lVar17 = lStack_820;
  puStack_848 = puVar12;
  __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lF
            (lStack_820,&uStack_1d0,&UNK_10004de70,&UNK_10004d480,puVar12,puVar13);
  _swift_release(puVar10);
  _swift_bridgeObjectRelease(uVar9);
  _swift_release();
  uVar6 = (undefined1)uStack_6c0;
  __s7SwiftUI4EdgeO3SetV8trailingAEvgZ();
  uVar9 = param_3;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar15 = lStack_840;
  lVar16 = lStack_8b0;
  puVar12 = (undefined1 *)(lVar17 + *(int *)(lStack_8a8 + 0x24));
  *puVar12 = uVar6;
  *(undefined8 *)(puVar12 + 8) = uVar9;
  *(undefined8 *)(puVar12 + 0x10) = uVar18;
  *(undefined8 *)(puVar12 + 0x18) = uVar21;
  *(undefined8 *)(puVar12 + 0x20) = param_5;
  puVar12[0x28] = 0;
  bVar5 = *(char *)(param_6 + *(int *)(lVar7 + 0x34)) != '\x01';
  if (!bVar5) {
    FUN_100016db4(auStack_660,lVar7,1);
    FUN_10001a864(auStack_660);
    (*pcStack_858)(lVar16,param_6,lVar7);
    uVar20 = uStack_850;
    puVar10 = &UNK_10004daf8;
    _swift_allocObject(&UNK_10004daf8,uStack_850 + lVar15,uStack_860 | 7);
    *(undefined8 *)(puVar10 + 0x10) = uStack_818;
    *(undefined8 *)(puVar10 + 0x18) = uStack_810;
    (*pcStack_868)(puVar10 + uVar20,lVar16,lVar7);
    uStack_128 = 0xe500000000000000;
    uStack_130 = 0x65626f6c67;
    uStack_120 = uStack_648;
    uStack_118 = 0;
    pcStack_108 = FUN_10001ada4;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_110 = param_2;
    puStack_100 = puVar10;
    FUN_100016db4(auStack_5c0,lVar7);
    _swift_retain(uStack_580);
    FUN_10001a864(auStack_5c0);
    FUN_100016db4(auStack_520,lVar7);
    _swift_retain(uStack_4e8);
    puVar12 = auStack_520;
    FUN_10001a864(puVar12);
    uStack_1d0 = uStack_580;
    uStack_1c8 = uStack_4e8;
    uStack_1c0 = 0;
    FUN_10001ac0c();
    lVar17 = lStack_808;
    __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lF
              (lStack_808,&uStack_1d0,&UNK_10004de70,&UNK_10004d278,puStack_848,puVar12);
    _swift_release(puVar10);
    _swift_release(uStack_4e8);
    _swift_release();
    uVar6 = (undefined1)uStack_580;
    __s7SwiftUI4EdgeO3SetV8trailingAEvgZ();
    uVar9 = param_3;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    puVar12 = (undefined1 *)(lVar17 + *(int *)(lStack_828 + 0x24));
    *puVar12 = uVar6;
    *(undefined8 *)(puVar12 + 8) = uVar9;
    *(undefined8 *)(puVar12 + 0x10) = uVar18;
    *(undefined8 *)(puVar12 + 0x18) = uVar21;
    *(undefined8 *)(puVar12 + 0x20) = param_5;
    puVar12[0x28] = 0;
  }
  (**(code **)(lStack_8a0 + 0x38))(lStack_808,bVar5,1,lStack_828);
  FUN_100016db4(auStack_480,lVar7);
  FUN_10001a864(auStack_480);
  (*pcStack_858)(lVar16,param_6,lVar7);
  uVar20 = uStack_850;
  puVar10 = &UNK_10004dad0;
  _swift_allocObject(&UNK_10004dad0,uStack_850 + lVar15,uStack_860 | 7);
  *(undefined8 *)(puVar10 + 0x10) = uStack_818;
  *(undefined8 *)(puVar10 + 0x18) = uStack_810;
  (*pcStack_868)(puVar10 + uVar20,lVar16,lVar7);
  uStack_128 = 0xef6f676f4c6e6f74;
  uStack_130 = 0x7475426563617073;
  uStack_120 = uStack_468;
  uStack_118 = 1;
  pcStack_108 = FUN_10001ad34;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_110 = param_2;
  puStack_100 = puVar10;
  FUN_100016db4(auStack_3e0,lVar7);
  _swift_retain(uStack_398);
  FUN_10001a864(auStack_3e0);
  FUN_100016db4(auStack_340,lVar7);
  _swift_retain(uStack_300);
  puVar12 = auStack_340;
  FUN_10001a864(puVar12);
  uStack_1d0 = uStack_398;
  uStack_1c8 = 0;
  uStack_1c0 = uStack_300;
  FUN_10001ac0c();
  lVar16 = lStack_830;
  puVar13 = puStack_848;
  puVar11 = &UNK_10004de70;
  __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lF
            (&uStack_1d0,&UNK_10004de70,&UNK_10004d278,puStack_848,puVar12);
  _swift_release(puVar10);
  _swift_release(uStack_300);
  _swift_release(uStack_398);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_2a0,param_4,0,0,1,uStack_398,puVar11);
  puVar1 = (undefined8 *)(lVar16 + *(int *)(lStack_898 + 0x24));
  puVar1[1] = uStack_298;
  *puVar1 = uStack_2a0;
  puVar1[3] = uStack_288;
  puVar1[2] = uStack_290;
  puVar1[5] = uStack_278;
  puVar1[4] = uStack_280;
  lVar15 = *(long *)(param_6 + 0x30);
  uVar9 = *(undefined8 *)(param_6 + 0x38);
  FUN_100016db4(auStack_270,lVar7);
  lVar16 = 0x70;
  if (lVar15 != 0) {
    lVar16 = 0x60;
  }
  uVar19 = *(undefined8 *)((long)auStack_270 + lVar16);
  lVar16 = 0x78;
  if (lVar15 != 0) {
    lVar16 = 0x68;
  }
  uVar18 = *(undefined8 *)((long)auStack_270 + lVar16);
  _swift_bridgeObjectRetain(uVar18);
  FUN_10001a864(auStack_270);
  FUN_100016db4(&uStack_1d0,lVar7);
  FUN_10001a864(&uStack_1d0);
  uVar14 = *(undefined8 *)(param_6 + 8);
  FUN_10001a69c(uVar14,lVar15,uVar9,uStack_818,uStack_810);
  uStack_7d8 = uStack_1b8;
  uStack_7d0 = 1;
  uStack_7b0 = 0;
  uStack_7a8 = 0;
  uStack_7e8 = uVar19;
  uStack_7e0 = uVar18;
  uStack_7c8 = param_2;
  uStack_7c0 = uVar14;
  lStack_7b8 = lVar15;
  FUN_100016db4(&uStack_130,lVar7);
  uVar9 = uStack_f0;
  _swift_retain(uStack_f0);
  FUN_10001a864(&uStack_130);
  lVar17 = lStack_888;
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  uStack_800 = uVar9;
  __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lF
            (lStack_888,&uStack_800,&UNK_10004de70,&UNK_10004d278,puVar13,puVar12);
  _swift_release(lVar15);
  _swift_bridgeObjectRelease(uVar18);
  _swift_release();
  uVar6 = (undefined1)uVar9;
  __s7SwiftUI4EdgeO3SetV7leadingAEvgZ();
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar16 = lStack_838;
  puVar12 = (undefined1 *)(lVar17 + *(int *)(lStack_828 + 0x24));
  *puVar12 = uVar6;
  *(undefined8 *)(puVar12 + 8) = param_3;
  *(undefined8 *)(puVar12 + 0x10) = uStack_290;
  *(undefined8 *)(puVar12 + 0x18) = uVar21;
  *(undefined8 *)(puVar12 + 0x20) = param_5;
  puVar12[0x28] = 0;
  func_0x00010001b008(lStack_820,lStack_838,0x100051ee8,&UNK_10003c658);
  lVar7 = lStack_890;
  func_0x00010001b008(lStack_808,lStack_890,0x100051ee0,&UNK_10003c650);
  lVar4 = lStack_830;
  lVar15 = lStack_880;
  func_0x00010001b008(lStack_830,lStack_880,0x100051ed8,&UNK_10003c648);
  lVar3 = lStack_870;
  func_0x00010001b008(lVar17,lStack_870,0x100051ed0,&UNK_10003c640);
  lVar2 = lStack_878;
  func_0x00010001b008(lVar16,lStack_878,0x100051ee8,&UNK_10003c658);
  lVar16 = 0x100051f00;
  FUN_100010860(0x100051f00,&UNK_10003c660);
  func_0x00010001b008(lVar7,lVar2 + *(int *)(lVar16 + 0x30),0x100051ee0,&UNK_10003c650);
  func_0x00010001b008(lVar15,lVar2 + *(int *)(lVar16 + 0x40),0x100051ed8,&UNK_10003c648);
  func_0x00010001b008(lVar3,lVar2 + *(int *)(lVar16 + 0x50),0x100051ed0,&UNK_10003c640);
  func_0x00010001b050(lVar17,0x100051ed0,&UNK_10003c640);
  func_0x00010001b050(lVar4,0x100051ed8,&UNK_10003c648);
  func_0x00010001b050(lStack_808,0x100051ee0,&UNK_10003c650);
  func_0x00010001b050(lStack_820,0x100051ee8,&UNK_10003c658);
  func_0x00010001b050(lVar3,0x100051ed0,&UNK_10003c640);
  func_0x00010001b050(lVar15,0x100051ed8,&UNK_10003c648);
  func_0x00010001b050(lVar7,0x100051ee0,&UNK_10003c650);
  func_0x00010001b050(lStack_838,0x100051ee8,&UNK_10003c658);
  return;
}



/* Entry: 10001a398; end: 10001a3ff;  */

void FUN_10001a398(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x20);
  uVar3 = 0;
  FUN_100013f0c(0);
  uVar4 = uVar3;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uVar1,uVar2,uVar3,uVar4);
  (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(uVar5);
  return;
}



/* Entry: 10001a400; end: 10001a43f;  */

void FUN_10001a400(void)

{
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovg();
  return;
}



/* Entry: 10001a440; end: 10001a4bb;  */

void FUN_10001a440(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10001a4bc; end: 10001a4c3;  */

void FUN_10001a4bc(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10001a4c4; end: 10001a52b;  */

void FUN_10001a4c4(long param_1,double param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double adStack_318 [20];
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
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
  double adStack_138 [5];
  undefined8 uStack_110;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar10 = 0;
  FUN_100016cec(0,uVar11,uVar16);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  lVar10 = unaff_x20 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff));
  uVar5 = 0;
  FUN_100016cec(0,uVar11,uVar16);
  FUN_100016db4(adStack_318);
  FUN_10001a864(adStack_318);
  FUN_100016db4(auStack_278,uVar5);
  FUN_10001a864(auStack_278);
  FUN_100016db4(adStack_138,uVar5);
  FUN_10001a864(adStack_138);
  lVar9 = *(long *)(lVar10 + 0x10);
  uVar11 = *(undefined8 *)(lVar10 + 0x18);
  uVar4 = *(undefined1 *)(lVar10 + 0x20);
  uVar6 = 0;
  FUN_100013f0c(0);
  uVar16 = uVar6;
  FUN_10001a780();
  lVar7 = lVar9;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar9,uVar11,uVar4,uVar6,uVar16);
  lVar8 = lVar7;
  FUN_1000136c0();
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar12 = 1;
  }
  else {
    lVar13 = *(long *)(lVar8 + 0x20);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRelease(lVar8);
    uVar12 = *(ulong *)(lVar13 + 0x10);
    lVar8 = lVar13;
  }
  _swift_bridgeObjectRelease(lVar8);
  _swift_release(lVar7);
  dVar17 = adStack_138[0] + adStack_138[0];
  lVar7 = lVar9;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar9,uVar11,uVar4,uVar6,uVar16);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  _swift_release(lVar7);
  uVar3 = 0;
  if (uVar12 != 0) {
    uVar3 = uVar12 - 1;
  }
  dVar14 = (param_2 + -4.0) - adStack_318[0] * (double)uVar3;
  if (uVar12 == 0 || uVar12 - 1 == 0) {
    uVar12 = 1;
  }
  if (dVar14 < 0.0) {
    dVar14 = 0.0;
  }
  dVar14 = dVar14 / (double)uVar12;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(lVar9,uVar11,uVar4,uVar6,uVar16);
  _swift_release();
  dVar15 = dVar14 * 5.0;
  dVar18 = adStack_318[0] * 4.0 + dVar15;
  FUN_100016e5c(uVar5);
  uVar16 = uVar5;
  FUN_100017a04(param_1,uStack_270,adStack_318[0],dVar17,dVar14,dVar18,dVar15,uVar5);
  uVar6 = *(undefined8 *)(lVar10 + 0x28);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_1d8,0,1,uVar6,0,uVar16,uVar11);
  lVar10 = 0x100051e30;
  FUN_100010860(0x100051e30,&UNK_10003c5b0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  puVar1[1] = uStack_1d0;
  *puVar1 = uStack_1d8;
  puVar1[3] = uStack_1c0;
  puVar1[2] = uStack_1c8;
  puVar1[5] = uStack_1b0;
  puVar1[4] = uStack_1b8;
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uVar16 = 0x4010000000000000;
  uVar11 = uStack_1c8;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar9 = 0x100051e38;
  FUN_100010860(0x100051e38,&UNK_10003c5b8);
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar9 + 0x24));
  *puVar2 = (char)lVar10;
  *(undefined8 *)(puVar2 + 8) = uVar16;
  *(undefined8 *)(puVar2 + 0x10) = uVar11;
  *(double *)(puVar2 + 0x18) = dVar17;
  *(double *)(puVar2 + 0x20) = dVar14;
  puVar2[0x28] = 0;
  FUN_100016db4(adStack_138,uVar5);
  _swift_retain(uStack_110);
  uVar4 = SUB81(adStack_138,0);
  FUN_10001a864();
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar10 = 0x100051e40;
  FUN_100010860();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  *puVar1 = uStack_110;
  *(undefined1 *)(puVar1 + 1) = uVar4;
  __s7SwiftUI9AlignmentV6bottomACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_1a8,0,1,0,1,0,1,0,1,0,1);
  lVar10 = 0x100051e48;
  FUN_100010860(0x100051e48,&UNK_10003c5c8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  puVar1[9] = uStack_160;
  puVar1[8] = uStack_168;
  puVar1[0xb] = uStack_150;
  puVar1[10] = uStack_158;
  puVar1[0xd] = uStack_140;
  puVar1[0xc] = uStack_148;
  puVar1[1] = uStack_1a0;
  *puVar1 = uStack_1a8;
  puVar1[3] = uStack_190;
  puVar1[2] = uStack_198;
  puVar1[5] = uStack_180;
  puVar1[4] = uStack_188;
  puVar1[7] = uStack_170;
  puVar1[6] = uStack_178;
  return;
}



/* Entry: 10001a52c; end: 10001a57b;  */

void FUN_10001a52c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar6 = 0;
  FUN_100016cec(0,uVar5,lVar7);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = unaff_x20 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  uVar9 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined1 *)(lVar6 + 0x20);
  uVar2 = 0;
  FUN_100013f0c(0);
  uVar3 = uVar2;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar4,uVar9,uVar1,uVar2,uVar3);
  uVar9 = *(undefined8 *)(lVar6 + 8);
  pcVar10 = *(code **)(lVar7 + 0x10);
  _swift_unknownObjectRetain(uVar9);
  (*pcVar10)(uVar5,lVar7);
  _swift_unknownObjectRelease(uVar9);
  func_0x000100013bec(uVar5,lVar7);
  _swift_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010003acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_10004ce50)(lVar7);
  return;
}



/* Entry: 10001a57c; end: 10001a5b7;  */

void FUN_10001a57c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_10003c560;
  puVar2 = &UNK_10003c588;
  uVar3 = *param_2;
  _swift_getKeyPath(&UNK_10003c560);
  _swift_getKeyPath(&UNK_10003c588);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 10001a5b8; end: 10001a61b;  */

void FUN_10001a5b8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar1,param_5,param_6);
  _swift_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(param_6);
  return;
}



/* Entry: 10001a61c; end: 10001a62f;  */

void FUN_10001a61c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  puVar2 = &UNK_10003c678;
  puVar3 = &UNK_10003c6a0;
  uVar1 = *param_1;
  uVar4 = *param_2;
  _swift_getKeyPath(&UNK_10003c678);
  _swift_getKeyPath(&UNK_10003c6a0);
  uStack_31 = uVar1;
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_31,uVar4,puVar2,puVar3);
  return;
}



/* Entry: 10001a630; end: 10001a69b;  */

void FUN_10001a630(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 uStack_31;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  uStack_31 = uVar1;
  _swift_retain(uVar2);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_31,uVar2,param_5,param_6);
  return;
}



/* Entry: 10001a69c; end: 10001a727;  */

undefined1  [16]
FUN_10001a69c(undefined8 param_1,code *param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  puVar1 = param_3;
  pcVar2 = param_2;
  if (param_2 == (code *)0x0) {
    puVar1 = &UNK_10004db20;
    _swift_allocObject(&UNK_10004db20,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_5;
    _swift_unknownObjectRetain(param_1);
    pcVar2 = FUN_10001ae10;
  }
  FUN_10001ae58(param_2,param_3);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = pcVar2;
  return auVar3;
}



/* Entry: 10001a728; end: 10001a77f;  */

void FUN_10001a728(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar6 = 0;
  FUN_100016cec(0,uVar5,lVar7);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = unaff_x20 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  uVar9 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined1 *)(lVar6 + 0x20);
  uVar2 = 0;
  FUN_100013f0c(0);
  uVar3 = uVar2;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar4,uVar9,uVar1,uVar2,uVar3);
  uVar9 = *(undefined8 *)(lVar6 + 8);
  pcVar10 = *(code **)(lVar7 + 0x10);
  _swift_unknownObjectRetain(uVar9);
  (*pcVar10)(uVar5,lVar7);
  _swift_unknownObjectRelease(uVar9);
  func_0x000100013bec(uVar5,lVar7);
  _swift_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010003acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_10004ce50)(lVar7);
  return;
}



/* Entry: 10001a780; end: 10001a80b;  */

void FUN_10001a780(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000100051e20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100013f0c(0xff);
  puVar2 = &UNK_10003c210;
  _swift_getWitnessTable(&UNK_10003c210,uVar1);
  puRam0000000100051e20 = puVar2;
  return;
}



/* Entry: 10001a80c; end: 10001a863;  */

void FUN_10001a80c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar6 = 0;
  FUN_100016cec(0,uVar5,lVar7);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = unaff_x20 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  uVar9 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined1 *)(lVar6 + 0x20);
  uVar2 = 0;
  FUN_100013f0c(0);
  uVar3 = uVar2;
  FUN_10001a780();
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar4,uVar9,uVar1,uVar2,uVar3);
  uVar9 = *(undefined8 *)(lVar6 + 8);
  pcVar10 = *(code **)(lVar7 + 0x10);
  _swift_unknownObjectRetain(uVar9);
  (*pcVar10)(uVar5,lVar7);
  _swift_unknownObjectRelease(uVar9);
  func_0x000100013bec(uVar5,lVar7);
  _swift_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010003acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_10004ce50)(lVar7);
  return;
}


