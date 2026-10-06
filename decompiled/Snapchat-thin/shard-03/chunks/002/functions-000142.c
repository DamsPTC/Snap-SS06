/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025e3300; end: 1025e331f;  */

void FUN_1025e3300(void)

{
  func_0x0001025e2f00();
  return;
}



/* Entry: 1025e3320; end: 1025e341b;  */

void FUN_1025e3320(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar1 = 0xea0000000000544e;
  uVar2 = 0x454d484341545441;
  if (param_1 != 3) {
    uVar1 = 0xea00000000005353;
    uVar2 = 0x4552505f474e4f4c;
  }
  uVar3 = 0xed0000454c49464f;
  uVar4 = 0x52505f444e415242;
  if (param_1 != 2) {
    uVar3 = uVar1;
    uVar4 = uVar2;
  }
  uVar1 = 0x5445534e55;
  if (param_1 != 0) {
    uVar1 = 0x44415f50414e53;
  }
  uVar2 = 0xe500000000000000;
  if (param_1 != 0) {
    uVar2 = 0xe700000000000000;
  }
  if (param_1 < 2) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000105ed9f40(uVar5,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1025e341c; end: 1025e343b;  */

void FUN_1025e341c(void)

{
  func_0x000107c61168(&PTR_PTR_112ead1e0);
  return;
}



/* Entry: 1025e343c; end: 1025e3497;  */

void FUN_1025e343c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x10))(param_1,param_2,uVar1,lVar2);
  return;
}



/* Entry: 1025e3498; end: 1025e350f; -[_TtC25MapAdsPromotedPlaceLogger25MapAdsPromotedPlaceLogger logTrackFiredWithIsSuccess:triggerType:] */

void FUN_1025e3498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x0001000a8868(param_1 + 0x10,uVar1);
  pcVar3 = *(code **)(lVar2 + 0x10);
  func_0x000107c6157c(param_1);
  (*pcVar3)(param_3,param_4,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1025e3510; end: 1025e355b;  */

void FUN_1025e3510(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 8))(param_1,uVar1,lVar2);
  return;
}



/* Entry: 1025e355c; end: 1025e35bf; -[_TtC25MapAdsPromotedPlaceLogger25MapAdsPromotedPlaceLogger logTrackableEventAddedWithIsSuccess:] */

void FUN_1025e355c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x0001000a8868(param_1 + 0x10,uVar1);
  pcVar3 = *(code **)(lVar2 + 8);
  func_0x000107c6157c(param_1);
  (*pcVar3)(param_3,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1025e35c0; end: 1025e360f;  */

void FUN_1025e35c0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x20))(1,param_1,uVar1,lVar2);
  return;
}



/* Entry: 1025e3610; end: 1025e3677; -[_TtC25MapAdsPromotedPlaceLogger25MapAdsPromotedPlaceLogger logAdResponseParseSuccessWithTrackType:] */

void FUN_1025e3610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x0001000a8868(param_1 + 0x10,uVar1);
  pcVar3 = *(code **)(lVar2 + 0x20);
  func_0x000107c6157c(param_1);
  (*pcVar3)(1,param_3,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1025e3678; end: 1025e395b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e3678(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long alStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = 0xd000000000000017;
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a0 + lVar1;
  uStack_98 = param_2;
  if (((int)param_4 == 4) && (param_3 != 0)) {
    if (*(int *)(param_3 + _DAT_113815200) == 7) {
      return;
    }
LAB_1025e3718:
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    lVar3 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c602fc(0x14);
    func_0x000107c5fb78(0xd000000000000012,0x800000010f0b2ba0);
    func_0x000107c61174(lVar3);
    func_0x0001047b6fb0(puVar8);
    func_0x000107c603d0(puVar8,&uStack_88,lVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x00010168561c(puVar8);
    func_0x000107c61170(lVar3);
    uVar7 = uStack_80;
    uVar9 = uStack_88;
  }
  else {
    if (param_3 != 0) goto LAB_1025e3718;
    uVar7 = 0x800000010f0b2ae0;
    uVar9 = 0xd000000000000018;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar10);
  (**(code **)(lVar2 + 0x20))(0,0,uVar10,lVar2);
  FUN_1025e395c(unaff_x20 + 0x38,&uStack_88);
  func_0x0001000a8868(&uStack_88,uStack_70);
  if (param_3 == 0) {
LAB_1025e3850:
    uVar10 = 0;
    lVar2 = -0x2000000000000000;
  }
  else {
    lVar2 = ((undefined8 *)(param_3 + _DAT_11308f138))[1];
    if (lVar2 == 0) goto LAB_1025e3850;
    uVar10 = *(undefined8 *)(param_3 + _DAT_11308f138);
    func_0x000107c61434(lVar2);
  }
  if (param_4 < 2) {
    if (param_4 == 0) {
      pcVar6 = "Ad Render Data Parsing Failed";
    }
    else {
      if (param_4 != 1) {
LAB_1025e3938:
        lStack_90 = param_4;
        func_0x000107c60614(&UNK_110528900,&lStack_90,&UNK_110528900,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1025e395c);
        (*pcVar4)();
      }
      pcVar6 = "Empty Serve Item Id";
      uVar5 = 0xd00000000000001d;
    }
  }
  else if (param_4 == 2) {
    pcVar6 = "Ad Render Data Parse API Failed";
    uVar5 = 0xd000000000000013;
  }
  else if (param_4 == 3) {
    pcVar6 = "Invalid Banner Metadata";
    uVar5 = 0xd00000000000001f;
  }
  else {
    if (param_4 != 4) goto LAB_1025e3938;
    pcVar6 = "No AdResponse is present";
  }
  pcVar4 = *(code **)(lStack_68 + 8);
  *(undefined8 *)((long)alStack_b0 + lVar1) = uStack_70;
  *(long *)((long)alStack_b0 + lVar1 + 8) = lStack_68;
  (*pcVar4)(uVar10,lVar2,param_1,uStack_98,uVar5,(ulong)pcVar6 | 0x8000000000000000,uVar9,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c((ulong)pcVar6 | 0x8000000000000000);
  func_0x0001000834e4(&uStack_88);
  return;
}



/* Entry: 1025e395c; end: 1025e399f;  */

long FUN_1025e395c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1025e39a0; end: 1025e39ab; -[_TtC25MapAdsPromotedPlaceLogger25MapAdsPromotedPlaceLogger logAdResponseParseFailureWithPlaceId:adResponse:error:] */

void FUN_1025e39a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_1025e3678(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025e39ac; end: 1025e3cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e39ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  code *pcVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long alStack_c0 [2];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&lStack_b0 + lVar1;
  uStack_a0 = param_1;
  if (param_3 == 0) {
    uVar7 = 0xd00000000000001c;
    uVar10 = 0x800000010f0b2bc0;
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + _DAT_113815200);
    if ((int)uVar7 == 7) {
      return;
    }
    uVar5 = ((undefined8 *)(param_3 + _DAT_113815248))[1];
    lStack_a8 = lVar2;
    if (uVar5 >> 0x3c < 0xf) {
      uVar7 = *(undefined8 *)(param_3 + _DAT_113815248);
      lVar2 = param_3;
      func_0x000107c61174();
      lStack_b0 = lVar2;
      func_0x000100de78a0(uVar7,uVar5);
      uVar8 = 0;
      uVar10 = uVar7;
      func_0x000107c5ee24(0,uVar7,uVar5);
      func_0x0001000b44c0(uVar7,uVar5);
      uVar7 = *(undefined8 *)(lStack_b0 + _DAT_113815200);
    }
    else {
      func_0x000107c61174(param_3);
      uVar8 = 0;
      uVar10 = 0;
    }
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x40);
    func_0x000107c5fb78(0xd00000000000001c,0x800000010f0b2be0);
    uVar9 = 0x112d35ff8;
    uStack_98 = uVar8;
    uStack_90 = uVar10;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c5fb18(&uStack_98,uVar9);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0x657079546441202c,0xea0000000000203a);
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_98 = uVar7;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000107c5fb78(0xd000000000000014,0x800000010f0b2c00);
    lVar2 = param_3;
    func_0x000107c61174(param_3);
    func_0x0001047b6fb0(lVar6);
    func_0x000107c603d0(lVar6,&uStack_88,lStack_a8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x00010168561c(lVar6);
    func_0x000107c61170(lVar2);
    uVar7 = uStack_88;
    uVar10 = uStack_80;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar8);
  (**(code **)(lVar2 + 0x28))(param_4,uVar8,lVar2);
  FUN_1025e395c(unaff_x20 + 0x38,&uStack_88);
  uVar8 = uStack_70;
  func_0x0001000a8868(&uStack_88,uStack_70);
  if (param_3 != 0) {
    lVar2 = ((undefined8 *)(param_3 + _DAT_11308f138))[1];
    if (lVar2 != 0) {
      uVar9 = *(undefined8 *)(param_3 + _DAT_11308f138);
      func_0x000107c61434(lVar2);
      goto LAB_1025e3c70;
    }
  }
  uVar9 = 0;
  lVar2 = -0x2000000000000000;
LAB_1025e3c70:
  FUN_1025f57ec(param_4);
  pcVar4 = *(code **)(lStack_68 + 0x10);
  *(undefined8 *)((long)alStack_c0 + lVar1) = uStack_70;
  *(long *)((long)alStack_c0 + lVar1 + 8) = lStack_68;
  (*pcVar4)(uVar9,lVar2,uStack_a0,param_2,param_4,uVar8,uVar7,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c(uVar8);
  func_0x0001000834e4(&uStack_88);
  return;
}



/* Entry: 1025e3cf0; end: 1025e3cfb; -[_TtC25MapAdsPromotedPlaceLogger25MapAdsPromotedPlaceLogger logNonCriticalFailureWithPlaceId:adResponse:error:] */

void FUN_1025e3cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_1025e39ac(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025e3cfc; end: 1025e3d8b;  */

void FUN_1025e3cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  (*param_6)(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025e3d8c; end: 1025e3def;  */

void FUN_1025e3d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x18))(param_1,param_2,param_3,uVar1,lVar2);
  return;
}



/* Entry: 1025e3df0; end: 1025e3e7f; -[_TtC25MapAdsPromotedPlaceLogger25MapAdsPromotedPlaceLogger logFinalTrackFiredWithId:isSuccess:] */

void FUN_1025e3df0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  func_0x000107c5faec(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x0001000a8868(param_1 + 0x10,uVar1);
  pcVar3 = *(code **)(lVar2 + 0x18);
  func_0x000107c6157c(param_1);
  (*pcVar3)(param_3,param_2,param_4,uVar1,lVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1025e3e80; end: 1025e3ed3;  */

void FUN_1025e3e80(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61174(param_1);
  func_0x0001042fa7cc();
  (**(code **)(lVar1 + 0x30))();
  return;
}



/* Entry: 1025e3ed4; end: 1025e3f53; -[_TtC25MapAdsPromotedPlaceLogger25MapAdsPromotedPlaceLogger logPlaceActionWithAction:] */

void FUN_1025e3ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x0001000a8868(param_1 + 0x10,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x0001042fa7cc(param_3);
  (**(code **)(lVar1 + 0x30))();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1025e3f54; end: 1025e3fa7;  */

void FUN_1025e3f54(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61174(param_1);
  func_0x0001043060c4();
  (**(code **)(lVar1 + 0x38))();
  return;
}



/* Entry: 1025e3fa8; end: 1025e4027; -[_TtC25MapAdsPromotedPlaceLogger25MapAdsPromotedPlaceLogger logPlaceBannerActionWithAction:] */

void FUN_1025e3fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x0001000a8868(param_1 + 0x10,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x0001043060c4(param_3);
  (**(code **)(lVar1 + 0x38))();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1025e4028; end: 1025e4073;  */

void FUN_1025e4028(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025e4074; end: 1025e40cf;  */

void FUN_1025e4074(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1025e40d0; end: 1025e41a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1025e40d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  func_0x000107c61174(uVar1);
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112ead360,&UNK_10dac1e58);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  pcVar3 = FUN_1025e4284;
  func_0x0001000bdd8c(FUN_1025e4284,uVar2);
  uVar1 = 0;
  FUN_1025f57a0(0);
  func_0x000107c610f8();
  func_0x0001025f56e4(pcVar3,uVar1);
  func_0x000107c61574(uVar2);
  return pcVar3;
}



/* Entry: 1025e41a4; end: 1025e4283;  */

void FUN_1025e41a4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  long alStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  FUN_1025e341c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aaba0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  lVar4 = 0;
  FUN_1025e2b6c();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = param_2;
  ppuStack_48 = &PTR_DAT_1105279d0;
  ppuStack_70 = &PTR_DAT_1105279b8;
  lVar6 = 0;
  alStack_90[0] = lVar5;
  lStack_78 = lVar4;
  alStack_68[0] = lVar2;
  lStack_50 = lVar1;
  func_0x0001025e4054();
  func_0x000107c613fc();
  func_0x000100cfb92c(alStack_68,lVar6 + 0x10);
  func_0x000100cfb92c(alStack_90,lVar6 + 0x38);
  *param_1 = lVar6;
  func_0x000107c6157c(param_2);
  return;
}



/* Entry: 1025e4284; end: 1025e4293;  */

void FUN_1025e4284(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x20;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  long alStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  FUN_1025e341c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aaba0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  lVar4 = 0;
  FUN_1025e2b6c();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = unaff_x20;
  ppuStack_48 = &PTR_DAT_1105279d0;
  ppuStack_70 = &PTR_DAT_1105279b8;
  lVar6 = 0;
  alStack_90[0] = lVar5;
  lStack_78 = lVar4;
  alStack_68[0] = lVar2;
  lStack_50 = lVar1;
  func_0x0001025e4054();
  func_0x000107c613fc();
  func_0x000100cfb92c(alStack_68,lVar6 + 0x10);
  func_0x000100cfb92c(alStack_90,lVar6 + 0x38);
  *param_1 = lVar6;
  func_0x000107c6157c();
  return;
}



/* Entry: 1025e4294; end: 1025e4333;  */

void FUN_1025e4294(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025e4334; end: 1025e440b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e4334(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  func_0x000107c61174(uVar1);
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112ead360,&UNK_10dac1e58);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  pcVar3 = FUN_1025e440c;
  func_0x0001000bdd8c(FUN_1025e440c,uVar2);
  uVar1 = 0;
  FUN_1025f57a0(0);
  func_0x000107c610f8();
  func_0x0001025f56e4(pcVar3,uVar1);
  func_0x000107c61574(uVar2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 1025e440c; end: 1025e440f;  */

void FUN_1025e440c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x20;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  long alStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  FUN_1025e341c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aaba0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  lVar4 = 0;
  FUN_1025e2b6c();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = unaff_x20;
  ppuStack_48 = &PTR_DAT_1105279d0;
  ppuStack_70 = &PTR_DAT_1105279b8;
  lVar6 = 0;
  alStack_90[0] = lVar5;
  lStack_78 = lVar4;
  alStack_68[0] = lVar2;
  lStack_50 = lVar1;
  func_0x0001025e4054();
  func_0x000107c613fc();
  func_0x000100cfb92c(alStack_68,lVar6 + 0x10);
  func_0x000100cfb92c(alStack_90,lVar6 + 0x38);
  *param_1 = lVar6;
  func_0x000107c6157c();
  return;
}



/* Entry: 1025e4410; end: 1025e4d27;  */

void FUN_1025e4410(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  func_0x0001000d224c(auStack_78);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 0x20))(plVar2,lVar1);
  puVar9 = &UNK_110527af0;
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_110527af0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  FUN_1025e5e28(auStack_78,auStack_a0);
  puVar4 = &UNK_110527b18;
  func_0x000107c613fc(&UNK_110527b18,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  FUN_1025e5c78(auStack_a0,puVar4 + 0x18);
  uVar5 = 0x1025e5c90;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))(0x1025e5c90);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x88);
  (**(code **)(puVar3 + 0x10))(uVar10,uVar6,puVar3);
  func_0x000107c615e8(uVar5);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 0x30))(plVar2,lVar1);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_110527af0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  FUN_1025e5e28(auStack_78,auStack_a0);
  puVar4 = &UNK_110527b40;
  func_0x000107c613fc(&UNK_110527b40,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  FUN_1025e5c78(auStack_a0,puVar4 + 0x18);
  uVar5 = 0x1025e5c9c;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))(0x1025e5c9c);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(puVar3 + 0x10))(uVar10,uVar6,puVar3);
  func_0x000107c615e8(uVar5);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 0x28))(plVar2,lVar1);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_110527af0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  FUN_1025e5e28(auStack_78,auStack_a0);
  puVar4 = &UNK_110527b68;
  func_0x000107c613fc(&UNK_110527b68,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  FUN_1025e5c78(auStack_a0,puVar4 + 0x18);
  uVar5 = 0x1025e5ca8;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))(0x1025e5ca8);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(puVar3 + 0x10))(uVar10,uVar6,puVar3);
  func_0x000107c615e8(uVar5);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 0x18))(plVar2,lVar1);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_110527af0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  FUN_1025e5e28(auStack_78,auStack_a0);
  puVar4 = &UNK_110527b90;
  func_0x000107c613fc(&UNK_110527b90,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  FUN_1025e5c78(auStack_a0,puVar4 + 0x18);
  uVar5 = 0x1025e5cb4;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))(0x1025e5cb4);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(puVar3 + 0x10))(uVar10,uVar6,puVar3);
  func_0x000107c615e8(uVar5);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 8))(plVar2,lVar1);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_110527af0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  FUN_1025e5e28(auStack_78,auStack_a0);
  puVar4 = &UNK_110527bb8;
  func_0x000107c613fc(&UNK_110527bb8,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  FUN_1025e5c78(auStack_a0,puVar4 + 0x18);
  uVar5 = 0x1025e5cc0;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))(0x1025e5cc0);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(puVar3 + 0x10))(uVar10,uVar6,puVar3);
  func_0x000107c615e8(uVar5);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 0x38))(plVar2,lVar1);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_110527af0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  FUN_1025e5e28(auStack_78,auStack_a0);
  puVar4 = &UNK_110527be0;
  func_0x000107c613fc(&UNK_110527be0,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  FUN_1025e5c78(auStack_a0,puVar4 + 0x18);
  uVar5 = 0x1025e5ccc;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))(0x1025e5ccc);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(puVar3 + 0x10))(uVar10,uVar6,puVar3);
  func_0x000107c615e8(uVar5);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 0x10))(plVar2,lVar1);
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_110527af0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  FUN_1025e5e28(auStack_78,auStack_a0);
  puVar4 = &UNK_110527c08;
  func_0x000107c613fc(&UNK_110527c08,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  FUN_1025e5c78(auStack_a0,puVar4 + 0x18);
  pcVar7 = FUN_1025e5d04;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  pcVar8 = pcVar7;
  func_0x000107c614f0();
  (**(code **)(puVar3 + 0x10))(uVar10,pcVar8,puVar3);
  func_0x000107c615e8(pcVar7);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 0x40))(plVar2,lVar1);
  FUN_1025e5e28(auStack_78,auStack_a0);
  puVar4 = &UNK_110527c30;
  func_0x000107c613fc(&UNK_110527c30,0x38,7);
  FUN_1025e5c78(auStack_a0,puVar4 + 0x10);
  uVar5 = 0x1025e5d10;
  puVar3 = puVar4;
  (**(code **)(*plVar2 + 0x60))(0x1025e5d10);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar4);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(puVar3 + 0x10))(uVar10,uVar6,puVar3);
  func_0x000107c615e8(uVar5);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,plVar2);
  (**(code **)(lVar1 + 0x48))(plVar2,lVar1);
  func_0x000107c613fc(&UNK_110527af0,0x18,7);
  func_0x000107c61644(puVar9 + 0x10);
  uVar5 = 0x1025e5d18;
  puVar4 = puVar9;
  (**(code **)(*plVar2 + 0x60))(0x1025e5d18);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar9);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(puVar4 + 0x10))(uVar10,uVar6,puVar4);
  func_0x000107c615e8(uVar5);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 1025e4d28; end: 1025e507f;  */

void FUN_1025e4d28(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long alStack_b0 [3];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar8 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar15 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  func_0x0001042e75b8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar14 = (undefined8 *)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar16 = *(long *)(unaff_x20 + 0x70);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x000107c61434(uVar3);
  uVar10 = uVar2;
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c4f428();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  lVar11 = lVar16;
  if (lVar16 != 0) {
LAB_1025e4e0c:
    uVar13 = param_2[5];
    if ((long)(param_2[4] << 0x22 | param_2[3] * 0x20 | uVar13) < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1025e507c);
      (*pcVar7)();
    }
    uVar1 = (param_2[4] << 0x22) + param_2[3] * 0x20;
    lVar12 = uVar1 + uVar13;
    if (!CARRY8(uVar1,uVar13)) {
      uStack_68 = param_2[2];
      bVar6 = *(byte *)(param_2 + 8);
      alStack_b0[1] = *(undefined8 *)(unaff_x20 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x98);
      func_0x000107c61434(uVar3);
      func_0x000107c61174(lVar16);
      func_0x0001025e5f00(&uStack_68,auStack_70,0x112d38270,&UNK_10d905a20);
      func_0x000107c61434(uVar10);
      func_0x000107c61174(lVar11);
      func_0x0001047b6fb0(lVar15);
      *(long *)((long)puVar14 + (long)*(int *)(lVar9 + 0x20)) = lVar12;
      alStack_b0[2] = lVar12;
      *puVar14 = uVar2;
      puVar14[1] = uVar3;
      lVar16 = (long)puVar14 + (long)*(int *)(lVar9 + 0x18);
      func_0x0001025e5f48(lVar15,lVar16,&SUB_100b91d00);
      puVar14[2] = alStack_b0[1];
      puVar14[3] = uVar10;
      iVar5 = *(int *)(lVar16 + *(int *)(lVar8 + 0x48));
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar11);
      func_0x0001025e5f8c(lVar15,&SUB_100b91d00);
      *(bool *)((long)puVar14 + (long)*(int *)(lVar9 + 0x1c)) = iVar5 == 7;
      *param_1 = uVar2;
      param_1[1] = uVar3;
      lVar11 = 0;
      func_0x0001042e769c();
      func_0x0001025e5f48(puVar14,(long)param_1 + (long)*(int *)(lVar11 + 0x24),&SUB_1042e75b8);
      *(char *)(param_1 + 2) = (char)(0x2010201 >> (ulong)((bVar6 & 3) << 3));
      param_1[3] = uStack_68;
      func_0x0001025e5f8c(puVar14,&SUB_1042e75b8);
      param_1[4] = alStack_b0[2];
      param_1[5] = uVar13;
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(param_1,0,1,lVar11);
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1025e5080);
    (*pcVar7)();
  }
  lVar12 = param_2[6];
  uVar13 = param_2[7];
  func_0x000107c5ee08(lVar12,uVar13,0);
  if (uVar13 >> 0x3c < 0xf) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar4 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar10);
    lVar11 = lVar12;
    (**(code **)(lVar4 + 8))(lVar12,uVar13,uVar2,uVar3,uVar10,lVar4);
    func_0x0001000b44c0(lVar12,uVar13);
    if (lVar11 != 0) {
      func_0x000107c61174(lVar11);
      goto LAB_1025e4e0c;
    }
  }
  func_0x000107c6142c(uVar3);
  lVar11 = 0;
  func_0x0001042e769c();
                    /* WARNING: Could not recover jumptable at 0x0001025e5074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(param_1,1,1,lVar11);
  return;
}



/* Entry: 1025e5080; end: 1025e5143;  */

void FUN_1025e5080(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  cVar4 = *(char *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar6 = 1;
    if (cVar4 == '\0') {
      uVar6 = 2;
    }
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    lVar3 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar5);
    (**(code **)(lVar3 + 0x30))(uVar5,lVar3);
    uStack_6f = 0;
    uStack_80 = uVar1;
    uStack_78 = uVar2;
    uStack_70 = uVar6;
    func_0x0001002a64a8(&uStack_80);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1025e5144; end: 1025e5273;  */

void FUN_1025e5144(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  puVar4 = (undefined *)param_1[3];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar4 == (undefined *)0x6) {
      uStack_8f = 0;
    }
    else if (puVar4 < (undefined *)0x6) {
      uStack_8f = (undefined1)(0x60405030100 >> (((ulong)puVar4 & 7) << 3));
    }
    else {
      FUN_1025e5e6c(puVar4);
      uStack_8f = 2;
      puVar7 = puVar4;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    lVar5 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar6);
    pcVar8 = *(code **)(lVar5 + 0x10);
    func_0x000107c61434(uVar3);
    (*pcVar8)(uVar6,lVar5);
    uStack_a0 = uVar1;
    uStack_98 = uVar3;
    uStack_90 = puVar4 == (undefined *)0x6;
    puStack_88 = puVar7;
    uStack_80 = uVar2;
    func_0x0001002a64a8(&uStack_a0);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(uVar3);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1025e5274; end: 1025e55e7;  */

void FUN_1025e5274(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  bVar4 = *(byte *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar6 = (ulong)(bVar4 + 1);
    func_0x0001000d224c(&uStack_80);
    func_0x0001042fbb28(0);
    func_0x0001042fa7ac(uVar6);
    func_0x000107c4bd7c(uStack_80);
    func_0x000107c615e8(uStack_80);
    func_0x000107c61170(uVar6);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    lVar3 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar5);
    (**(code **)(lVar3 + 0x18))(uVar5,lVar3);
    uStack_70 = (undefined1)(bVar4 + 1);
    uStack_80 = uVar1;
    uStack_78 = uVar2;
    func_0x0001002a64a8(&uStack_80);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1025e55e8; end: 1025e568b;  */

void FUN_1025e55e8(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar1 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar2);
    (**(code **)(lVar1 + 8))(uVar2,lVar1);
    uStack_60 = uVar3;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1025e568c; end: 1025e5703;  */

void FUN_1025e568c(char *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  cVar2 = *param_1;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar3);
  (**(code **)(lVar1 + 0x60))(uVar3,lVar1);
  uStack_38 = 0x101;
  if (cVar2 == '\0') {
    uStack_38 = 0x102;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x0001007d6d78(&uStack_48);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 1025e5704; end: 1025e576b;  */

void FUN_1025e5704(undefined8 *param_1,long param_2)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1025e576c(&uStack_60);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1025e576c; end: 1025e5ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e576c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long alStack_108 [3];
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  long *aplStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  func_0x000107c61428(unaff_x20 + 0xa0,auStack_a8,0,0);
  func_0x0001025e5f00(unaff_x20 + 0xa0,aplStack_90,0x112ead568,&UNK_10dac1f90);
  func_0x0001025e5e7c(aplStack_90,0x112ead568,&UNK_10dac1f90);
  if (lStack_78 == 0) {
    lVar13 = *(long *)(unaff_x20 + 0x70);
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar5 = uVar2;
    func_0x000107c5fadc(uVar2,uVar3);
    func_0x000107c4f428();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (lVar13 != 0) {
      uVar5 = param_1[2];
      uVar12 = param_1[3];
      lVar6 = 0;
      func_0x0001025ec388();
      func_0x000107c613fc();
      func_0x000107c61614(lVar6 + 0x10,0);
      func_0x000107c61604(lVar6 + 0x10,uVar5);
      uVar14 = *(undefined8 *)(unaff_x20 + 0x78);
      uVar16 = *(undefined8 *)(unaff_x20 + 0x80);
      lVar7 = 0;
      FUN_1025eb578();
      lVar15 = lVar7;
      func_0x000107c610f8();
      *(undefined8 *)(lVar15 + _DAT_112eada98) = 0;
      func_0x000107c61614(lVar15 + _DAT_112eadaa0,0);
      puVar1 = (undefined8 *)(lVar15 + _DAT_112eadaa8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar15 + _DAT_112eadab0);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(long *)(lVar15 + _DAT_112eada80) = lVar6;
      *(undefined8 *)(lVar15 + _DAT_112eada88) = uVar14;
      *(undefined8 *)(lVar15 + _DAT_112eada90) = uVar16;
      puVar9 = PTR_s_init_1125d9248;
      lStack_b8 = lVar15;
      lStack_b0 = lVar7;
      func_0x000107c6157c(lVar6);
      func_0x000107c61174(uVar14);
      func_0x000107c61174(uVar16);
      plVar8 = &lStack_b8;
      func_0x000107c61154(plVar8,puVar9);
      ppuStack_70 = &PTR_DAT_110528278;
      aplStack_90[0] = plVar8;
      lStack_78 = lVar7;
      func_0x000107c61428(unaff_x20 + 0xa0,&uStack_e0,0x21,0);
      FUN_1025e5d20(aplStack_90,unaff_x20 + 0xa0);
      func_0x000107c614a8(&uStack_e0);
      uVar14 = param_1[5];
      uVar16 = param_1[7];
      puVar9 = &UNK_110527c58;
      func_0x000107c613fc(&UNK_110527c58,0x50,7);
      uVar17 = *param_1;
      uVar19 = param_1[3];
      uVar18 = param_1[2];
      *(undefined8 *)(puVar9 + 0x18) = param_1[1];
      *(undefined8 *)(puVar9 + 0x10) = uVar17;
      *(undefined8 *)(puVar9 + 0x28) = uVar19;
      *(undefined8 *)(puVar9 + 0x20) = uVar18;
      uVar17 = param_1[4];
      uVar19 = param_1[7];
      uVar18 = param_1[6];
      *(undefined8 *)(puVar9 + 0x38) = param_1[5];
      *(undefined8 *)(puVar9 + 0x30) = uVar17;
      *(undefined8 *)(puVar9 + 0x48) = uVar19;
      *(undefined8 *)(puVar9 + 0x40) = uVar18;
      puVar10 = &UNK_110527af0;
      func_0x000107c613fc(&UNK_110527af0,0x18,7);
      func_0x000107c61644(puVar10 + 0x10);
      puVar11 = &UNK_110527c80;
      func_0x000107c613fc(&UNK_110527c80,0x58,7);
      uVar17 = *param_1;
      uVar19 = param_1[3];
      uVar18 = param_1[2];
      *(undefined8 *)(puVar11 + 0x18) = param_1[1];
      *(undefined8 *)(puVar11 + 0x10) = uVar17;
      *(undefined8 *)(puVar11 + 0x28) = uVar19;
      *(undefined8 *)(puVar11 + 0x20) = uVar18;
      uVar17 = param_1[4];
      uVar19 = param_1[7];
      uVar18 = param_1[6];
      *(undefined8 *)(puVar11 + 0x38) = param_1[5];
      *(undefined8 *)(puVar11 + 0x30) = uVar17;
      *(undefined8 *)(puVar11 + 0x48) = uVar19;
      *(undefined8 *)(puVar11 + 0x40) = uVar18;
      *(undefined **)(puVar11 + 0x50) = puVar10;
      func_0x000107c61438(uVar3,2);
      func_0x000107c615f4(uVar5,2);
      func_0x000107c61174();
      func_0x000107c61580(uVar14,2);
      func_0x000107c61580(uVar16,2);
      func_0x000107c61174();
      func_0x0001000d224c(aplStack_90);
      ppuVar4 = ppuStack_70;
      lVar15 = lStack_78;
      func_0x0001000a8868(aplStack_90,lStack_78);
      (*(code *)ppuVar4[4])(lVar15,ppuVar4);
      uStack_d0 = 1;
      uStack_e0 = uVar2;
      uStack_d8 = uVar3;
      func_0x0001002a64a8(&uStack_e0);
      func_0x000107c61574(lVar15);
      func_0x0001025e5f00(unaff_x20 + 0xa0,&uStack_e0,0x112ead568,&UNK_10dac1f90);
      if (lStack_c8 == 0) {
        func_0x000107c61170(lVar13);
        func_0x000107c61574(puVar9);
        func_0x000107c61574(puVar11);
        func_0x000107c61574(lVar6);
        func_0x0001025e5e7c(&uStack_e0,0x112ead568,&UNK_10dac1f90);
      }
      else {
        FUN_1025e5e28(&uStack_e0,alStack_108);
        func_0x0001025e5e7c(&uStack_e0,0x112ead568,&UNK_10dac1f90);
        plVar8 = alStack_108;
        func_0x0001000a8868(plVar8,uStack_f0);
        lVar15 = *plVar8;
        puVar1 = (undefined8 *)(lVar15 + _DAT_112eadaa8);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        *puVar1 = 0x1025e5d70;
        puVar1[1] = puVar9;
        func_0x00010058d43c(uVar2,uVar3);
        puVar1 = (undefined8 *)(lVar15 + _DAT_112eadab0);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        *puVar1 = FUN_1025e5e1c;
        puVar1[1] = puVar11;
        func_0x000107c6157c(puVar9);
        func_0x00010058d43c(uVar2,uVar3);
        func_0x000107c6157c(puVar11);
        FUN_1025eb1b0(lVar13,uVar12);
        func_0x000107c61170(lVar13);
        func_0x000107c61574(puVar9);
        func_0x000107c61574(puVar11);
        func_0x000107c61574(lVar6);
        func_0x0001000834e4(alStack_108);
      }
      func_0x0001000834e4(aplStack_90);
    }
  }
  return;
}



/* Entry: 1025e5ba4; end: 1025e5c57;  */

void FUN_1025e5ba4(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  FUN_1025e5e7c(unaff_x20 + 0xa0,0x112ead568,&UNK_10dac1f90);
  return;
}



/* Entry: 1025e5c58; end: 1025e5c77;  */

void FUN_1025e5c58(void)

{
  FUN_1025e4410();
  return;
}



/* Entry: 1025e5c78; end: 1025e5cd7;  */

undefined8 * FUN_1025e5c78(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1025e5cd8; end: 1025e5d03;  */

void FUN_1025e5cd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025e5d04; end: 1025e5d1f;  */

void FUN_1025e5d04(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar1 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,uVar2);
    (**(code **)(lVar1 + 8))(uVar2,lVar1);
    uStack_60 = uVar4;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1025e5d20; end: 1025e5e1b;  */

undefined8 FUN_1025e5d20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ead568;
  func_0x0001000285a8(0x112ead568,&UNK_10dac1f90);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1025e5e1c; end: 1025e5e27;  */

void FUN_1025e5e1c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x50);
  (**(code **)(unaff_x20 + 0x40))();
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x000107c61428(lVar1 + 0xa0,auStack_78,0x21,0);
    FUN_1025e5d20(&uStack_60,lVar1 + 0xa0);
    func_0x000107c614a8(auStack_78);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1025e5e28; end: 1025e5e6b;  */

long FUN_1025e5e28(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1025e5e6c; end: 1025e5e7b;  */

void FUN_1025e5e6c(ulong param_1)

{
  if (param_1 < 6) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1025e5e7c; end: 1025e5fc7;  */

undefined8 FUN_1025e5e7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1025e5fc8; end: 1025e638f;  */

long FUN_1025e5fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  
  func_0x000107c61170(param_5);
  func_0x000107c613fc();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  *(undefined8 *)(unaff_x20 + 0x60) = param_6;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x70) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  return unaff_x20;
}



/* Entry: 1025e6390; end: 1025e640b;  */

void FUN_1025e6390(void)

{
  long unaff_x20;
  
  func_0x0001025e64c8(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1025e640c; end: 1025e642b;  */

void FUN_1025e640c(void)

{
  func_0x0001025e60e8();
  return;
}



/* Entry: 1025e642c; end: 1025e6433;  */

undefined8 FUN_1025e642c(void)

{
  return 0;
}



/* Entry: 1025e6434; end: 1025e650f;  */

undefined8 FUN_1025e6434(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ead578;
  func_0x0001000285a8(0x112ead578,&UNK_10dac1fa0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1025e6510; end: 1025e652f;  */

void FUN_1025e6510(void)

{
  func_0x000107c61168(&PTR_PTR_112ead5c0);
  return;
}



/* Entry: 1025e6530; end: 1025e666f;  */

void FUN_1025e6530(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  puVar4 = &UNK_10dac2060;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x48) = puVar4;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1025e7324(PTR___swiftEmptyArrayStorage_11034f1c8,0x112ead780,&UNK_10dac2088);
  *(undefined **)(unaff_x20 + 0x50) = puVar5;
  FUN_1025e7324(puVar4,0x112ead788,&UNK_10dac2090);
  *(undefined **)(unaff_x20 + 0x58) = puVar4;
  FUN_1025e6d54(param_1,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  uVar3 = param_3;
  func_0x000107c615f0();
  iVar2 = (int)uVar3;
  func_0x000107c49cd8();
  if (iVar2 == 0) {
    func_0x0001000834e4(param_1);
    func_0x000107c615e8(param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,uVar3);
    (**(code **)(lVar1 + 0x20))(uVar3,lVar1);
    FUN_1025e6670();
    func_0x000107c615e8(param_3);
    func_0x000107c61574(uVar3);
    func_0x0001000834e4(param_1);
  }
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 1025e6670; end: 1025e6777;  */

void FUN_1025e6670(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *plVar6;
  undefined1 auStack_68 [40];
  
  plVar6 = *(long **)(unaff_x20 + 0x48);
  plVar1 = plVar6;
  func_0x000107c615f0();
  func_0x000100471e0c();
  func_0x000107c615e8(plVar6);
  puVar2 = &UNK_110527cc8;
  func_0x000107c613fc(&UNK_110527cc8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  FUN_1025e6d54(unaff_x20 + 0x10,auStack_68);
  puVar3 = &UNK_110527cf0;
  func_0x000107c613fc(&UNK_110527cf0,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  FUN_1025e6d98(auStack_68,puVar3 + 0x18);
  uVar4 = 0x1025e6db0;
  puVar2 = puVar3;
  (**(code **)(*plVar1 + 0x60))(0x1025e6db0);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar3);
  uVar5 = uVar4;
  func_0x000107c614f0(uVar4);
  (**(code **)(puVar2 + 0x10))(*(undefined8 *)(unaff_x20 + 0x40),uVar5,puVar2);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 1025e6778; end: 1025e6b47;  */

void FUN_1025e6778(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [3];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  lVar9 = param_1[6];
  uVar6 = param_1[7];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar10 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar10 == 0) {
LAB_1025e6850:
    func_0x000107c5ee08(lVar9,uVar6,0);
    if (0xe < uVar6 >> 0x3c) {
      return;
    }
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    lVar10 = *(long *)(param_3 + 0x20);
    func_0x0001000a8868(param_3,uVar4);
    lVar3 = lVar9;
    (**(code **)(lVar10 + 8))(lVar9,uVar6,lVar1,uVar2,uVar4,lVar10);
    func_0x0001000b44c0(lVar9,uVar6);
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    func_0x000107c61428(lVar10 + 0x58,auStack_90,0,0);
    lVar8 = *(long *)(lVar10 + 0x58);
    if (*(long *)(lVar8 + 0x10) == 0) {
      func_0x000107c61574(lVar10);
      goto LAB_1025e6850;
    }
    func_0x000107c61438(lVar8,2);
    lVar3 = lVar1;
    uVar5 = uVar2;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      func_0x000107c61574(lVar10);
      func_0x000107c61430(lVar8,2);
      goto LAB_1025e6850;
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + lVar3 * 8);
    func_0x000107c61174(lVar3);
    func_0x000107c61574(lVar10);
    func_0x000107c61430(lVar8,2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  lVar10 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar10 != 0) {
    func_0x000107c61428(lVar10 + 0x58,auStack_c0,0,0);
    lVar9 = *(long *)(lVar10 + 0x58);
    if (*(long *)(lVar9 + 0x10) != 0) {
      func_0x000107c61434(lVar9);
      uVar6 = uVar2;
      func_0x000100029284(lVar1);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61574(lVar10);
        func_0x000107c6142c(lVar9);
        goto LAB_1025e69bc;
      }
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c61428(lVar10 + 0x58,auStack_d8,0x21,0);
    func_0x000107c61434(uVar2);
    lVar9 = lVar3;
    func_0x000107c61174(lVar3);
    uVar4 = *(undefined8 *)(lVar10 + 0x58);
    func_0x000107c61558(uVar4);
    auStack_f0[0] = *(undefined8 *)(lVar10 + 0x58);
    *(undefined8 *)(lVar10 + 0x58) = 0x8000000000000000;
    FUN_1025e6dbc(lVar9,lVar1,uVar2,uVar4,0x112ead788,&UNK_10dac2090);
    func_0x000107c6142c(uVar2);
    *(undefined8 *)(lVar10 + 0x58) = auStack_f0[0];
    func_0x000107c614a8(auStack_d8);
    func_0x000107c61574(lVar10);
  }
LAB_1025e69bc:
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar10 = *(long *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar4);
  lVar9 = lVar1;
  (**(code **)(lVar10 + 0x10))(lVar1,uVar2,lVar3,uVar4,lVar10);
  if (lVar9 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_d8,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c61428(param_2 + 0x50,auStack_f0,0,0);
      lVar10 = *(long *)(param_2 + 0x50);
      if (*(long *)(lVar10 + 0x10) != 0) {
        func_0x000107c61434(lVar10);
        uVar6 = uVar2;
        func_0x000100029284(lVar1);
        if ((uVar6 & 1) != 0) {
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar9);
          func_0x000107c61574(param_2);
          func_0x000107c6142c(lVar10);
          return;
        }
        func_0x000107c6142c(lVar10);
      }
      func_0x000107c61428(param_2 + 0x50,auStack_108,0x21,0);
      func_0x000107c61434(uVar2);
      func_0x000107c61174(lVar9);
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      func_0x000107c61558(uVar4);
      uVar7 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x50) = 0x8000000000000000;
      FUN_1025e6dbc(lVar9,lVar1,uVar2,uVar4,0x112ead780,&UNK_10dac2088);
      func_0x000107c6142c(uVar2);
      *(undefined8 *)(param_2 + 0x50) = uVar7;
      func_0x000107c614a8(auStack_108);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar9);
      func_0x000107c61574(param_2);
      return;
    }
    func_0x000107c61170(lVar9);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1025e6b48; end: 1025e6bbf;  */

undefined8 FUN_1025e6b48(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar1);
    }
    func_0x000107c6142c(param_3);
  }
  return uVar1;
}



/* Entry: 1025e6bc0; end: 1025e6c53; -[_TtC31MapAdsPromotedPlaceWorkflowImpl37MapAdsPromotedPlaceWorkflowRepository promotedPlaceBannerMetadataWithPlaceId:] */

void FUN_1025e6bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec(param_3);
  func_0x000107c61428(param_1 + 0x50,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c6157c(param_1);
  func_0x000107c61434(uVar1);
  FUN_1025e6b48(param_3,param_2,uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1025e6c54; end: 1025e6ce7; -[_TtC31MapAdsPromotedPlaceWorkflowImpl37MapAdsPromotedPlaceWorkflowRepository promotedPlaceAdResponseWithPlaceId:] */

void FUN_1025e6c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec(param_3);
  func_0x000107c61428(param_1 + 0x58,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c6157c(param_1);
  func_0x000107c61434(uVar1);
  FUN_1025e6b48(param_3,param_2,uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1025e6ce8; end: 1025e6d53;  */

void FUN_1025e6ce8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025e6d54; end: 1025e6d97;  */

long FUN_1025e6d54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1025e6d98; end: 1025e6dbb;  */

undefined8 * FUN_1025e6d98(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1025e6dbc; end: 1025e6f2f;  */

void FUN_1025e6dbc(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025e6eac);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1025e7090(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1025e6e70);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1025e6f30(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x0001025e6ec8;
  }
  lVar6 = *unaff_x20;
joined_r0x0001025e6ec8:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025e6f30);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1025e6f30; end: 1025e708f;  */

void FUN_1025e6f30(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1025e6ffc;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1025e6ffc:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1025e7090);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1025e7068;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1025e7068:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1025e7090; end: 1025e7323;  */

void FUN_1025e7090(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1025e72f0:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1025e7320);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1025e72f0;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1025e7324);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1025e7324; end: 1025e741b;  */

undefined * FUN_1025e7324(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1025e7418);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1025e741c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1025e741c; end: 1025e74a3;  */

void FUN_1025e741c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1025e74a4(param_2,param_3,*(undefined8 *)(param_5 + 0x88),*(undefined8 *)(param_5 + 0x90),
                  param_4 & 1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1025e74a4; end: 1025e7673;  */

/* WARNING: Possible PIC construction at 0x0001025e761c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e7644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e7620) */
/* WARNING: Removing unreachable block (ram,0x0001025e7648) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e74a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ead7a0;
  if (*(long *)(unaff_x20 + _DAT_112ead7a0) == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ead790) + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar3 = 0;
      func_0x000104316d84(0);
      uVar4 = 0x36;
      func_0x000104316bcc(0x36,0,0,0,uVar3);
      func_0x000104318244();
      func_0x000107c5fb1c(param_1,param_2);
      func_0x000107c61174(uVar4);
      func_0x000107c61434(param_4);
      func_0x000104317c64(param_1,param_2,uVar4,0,0,1,0,0,0,param_5 & 1);
      func_0x0001003378b0(0);
      func_0x000107c610f8();
      func_0x000107c615f0(lVar2);
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x0001043160ec(lVar2,param_1);
      uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
      *(long *)(unaff_x20 + lVar1) = lVar2;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 1025e7674; end: 1025e76d3; -[_TtC31MapAdsPromotedPlaceWorkflowImpl43MapAdsPromotedPlaceBannerActionBrandProfile init] */

void FUN_1025e7674(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdsPromotedPlaceWorkflowImpl.MapAdsPromotedPlaceBannerActionBrandProfile",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e76a0);
  (*pcVar1)();
}



/* Entry: 1025e76d4; end: 1025e771b; -[_TtC31MapAdsPromotedPlaceWorkflowImpl43MapAdsPromotedPlaceBannerActionBrandProfile .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025e7700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e7704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e76d4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ead790));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ead798));
  return;
}



/* Entry: 1025e771c; end: 1025e773b;  */

void FUN_1025e771c(void)

{
  func_0x000107c61168(&PTR_PTR_112852e78);
  return;
}



/* Entry: 1025e773c; end: 1025e775b;  */

void FUN_1025e773c(void)

{
  FUN_1025e77d0();
  return;
}



/* Entry: 1025e775c; end: 1025e77cf; -[_TtC31MapAdsPromotedPlaceWorkflowImpl43MapAdsPromotedPlaceBannerActionBrandProfile unifiedPublicProfilesPresenterScopeDidComplete] */

/* WARNING: Possible PIC construction at 0x0001025e77b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e77bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e775c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112ead7a0;
  lVar2 = *(long *)(param_1 + _DAT_112ead7a0);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ead798);
    func_0x000107c61174(param_1);
    func_0x000107c42848(uVar3,param_2,lVar2);
  }
  *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025e77d0; end: 1025e792b;  */

void FUN_1025e77d0(undefined8 *param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_118 [152];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar6 = param_1[0xe];
  if (lVar6 != 0) {
    bVar1 = *(byte *)(param_1 + 0xf);
    uVar7 = param_1[0xd];
    func_0x000107c61434(lVar6);
    pcVar2 = "triggerBannerAction(bannerMetadata:baseview:)";
    func_0x0001000c10c0("triggerBannerAction(bannerMetadata:baseview:)");
    func_0x000107c61180();
    puVar3 = &UNK_110527d28;
    func_0x000107c613fc(&UNK_110527d28,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110527d50;
    func_0x000107c613fc(&UNK_110527d50,200,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar7;
    *(long *)(puVar4 + 0x20) = lVar6;
    puVar4[0x28] = bVar1 & 1;
    uVar7 = param_1[0xc];
    uVar9 = param_1[0xf];
    uVar8 = param_1[0xe];
    *(undefined8 *)(puVar4 + 0x98) = param_1[0xd];
    *(undefined8 *)(puVar4 + 0x90) = uVar7;
    *(undefined8 *)(puVar4 + 0xa8) = uVar9;
    *(undefined8 *)(puVar4 + 0xa0) = uVar8;
    uVar7 = param_1[0x10];
    *(undefined8 *)(puVar4 + 0xb8) = param_1[0x11];
    *(undefined8 *)(puVar4 + 0xb0) = uVar7;
    *(undefined8 *)(puVar4 + 0xc0) = param_1[0x12];
    uVar7 = param_1[4];
    uVar9 = param_1[7];
    uVar8 = param_1[6];
    *(undefined8 *)(puVar4 + 0x58) = param_1[5];
    *(undefined8 *)(puVar4 + 0x50) = uVar7;
    *(undefined8 *)(puVar4 + 0x68) = uVar9;
    *(undefined8 *)(puVar4 + 0x60) = uVar8;
    uVar7 = param_1[8];
    uVar9 = param_1[0xb];
    uVar8 = param_1[10];
    *(undefined8 *)(puVar4 + 0x78) = param_1[9];
    *(undefined8 *)(puVar4 + 0x70) = uVar7;
    *(undefined8 *)(puVar4 + 0x88) = uVar9;
    *(undefined8 *)(puVar4 + 0x80) = uVar8;
    uVar7 = *param_1;
    uVar9 = param_1[3];
    uVar8 = param_1[2];
    *(undefined8 *)(puVar4 + 0x38) = param_1[1];
    *(undefined8 *)(puVar4 + 0x30) = uVar7;
    *(undefined8 *)(puVar4 + 0x48) = uVar9;
    *(undefined8 *)(puVar4 + 0x40) = uVar8;
    pcStack_60 = FUN_1025e792c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110527d68;
    ppuVar5 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_58;
    FUN_1025e795c(param_1,auStack_118);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1025e792c; end: 1025e795b;  */

void FUN_1025e792c(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_1025e74a4(uVar1,uVar4,*(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                  bVar2 & 1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1025e795c; end: 1025e7997;  */

undefined8 FUN_1025e795c(undefined8 param_1,undefined8 param_2)

{
  FUN_102688cb4(param_2,param_1);
  return param_2;
}



/* Entry: 1025e7998; end: 1025e7a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e7998(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112ead7e0);
    lVar2 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) goto LAB_1025e7a30;
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  FUN_1025e7a50(*param_2,param_2[1]);
LAB_1025e7a30:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1025e7a50; end: 1025e8593;  */

/* WARNING: Possible PIC construction at 0x0001025e7aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e7c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e7d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e7d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e7d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e7fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e800c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e80dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e80ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e80fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e810c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e82b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e82f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e8388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e83e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e8420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e8490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e84b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e84e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e84f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e8504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e8514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e8524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e82c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e8508) */
/* WARNING: Removing unreachable block (ram,0x0001025e84f8) */
/* WARNING: Removing unreachable block (ram,0x0001025e84e8) */
/* WARNING: Removing unreachable block (ram,0x0001025e84b8) */
/* WARNING: Removing unreachable block (ram,0x0001025e8494) */
/* WARNING: Removing unreachable block (ram,0x0001025e8424) */
/* WARNING: Removing unreachable block (ram,0x0001025e858c) */
/* WARNING: Removing unreachable block (ram,0x0001025e8460) */
/* WARNING: Removing unreachable block (ram,0x0001025e83ec) */
/* WARNING: Removing unreachable block (ram,0x0001025e838c) */
/* WARNING: Removing unreachable block (ram,0x0001025e82fc) */
/* WARNING: Removing unreachable block (ram,0x0001025e82b8) */
/* WARNING: Removing unreachable block (ram,0x0001025e8110) */
/* WARNING: Removing unreachable block (ram,0x0001025e82c8) */
/* WARNING: Removing unreachable block (ram,0x0001025e8588) */
/* WARNING: Removing unreachable block (ram,0x0001025e82d8) */
/* WARNING: Removing unreachable block (ram,0x0001025e8220) */
/* WARNING: Removing unreachable block (ram,0x0001025e82c0) */
/* WARNING: Removing unreachable block (ram,0x0001025e8238) */
/* WARNING: Removing unreachable block (ram,0x0001025e8260) */
/* WARNING: Removing unreachable block (ram,0x0001025e8264) */
/* WARNING: Removing unreachable block (ram,0x0001025e8268) */
/* WARNING: Removing unreachable block (ram,0x0001025e8570) */
/* WARNING: Removing unreachable block (ram,0x0001025e8578) */
/* WARNING: Removing unreachable block (ram,0x0001025e8270) */
/* WARNING: Removing unreachable block (ram,0x0001025e8278) */
/* WARNING: Removing unreachable block (ram,0x0001025e8290) */
/* WARNING: Removing unreachable block (ram,0x0001025e854c) */
/* WARNING: Removing unreachable block (ram,0x0001025e82a4) */
/* WARNING: Removing unreachable block (ram,0x0001025e8100) */
/* WARNING: Removing unreachable block (ram,0x0001025e80f0) */
/* WARNING: Removing unreachable block (ram,0x0001025e80e0) */
/* WARNING: Removing unreachable block (ram,0x0001025e8010) */
/* WARNING: Removing unreachable block (ram,0x0001025e7fc4) */
/* WARNING: Removing unreachable block (ram,0x0001025e7d68) */
/* WARNING: Removing unreachable block (ram,0x0001025e7f98) */
/* WARNING: Removing unreachable block (ram,0x0001025e7f40) */
/* WARNING: Removing unreachable block (ram,0x0001025e7f9c) */
/* WARNING: Removing unreachable block (ram,0x0001025e8590) */
/* WARNING: Removing unreachable block (ram,0x0001025e7f5c) */
/* WARNING: Removing unreachable block (ram,0x0001025e7fac) */
/* WARNING: Removing unreachable block (ram,0x0001025e7f6c) */
/* WARNING: Removing unreachable block (ram,0x0001025e7d58) */
/* WARNING: Removing unreachable block (ram,0x0001025e7d48) */
/* WARNING: Removing unreachable block (ram,0x0001025e7c70) */
/* WARNING: Removing unreachable block (ram,0x0001025e7aac) */
/* WARNING: Removing unreachable block (ram,0x0001025e8528) */
/* WARNING: Removing unreachable block (ram,0x0001025e7ab0) */
/* WARNING: Removing unreachable block (ram,0x0001025e7f70) */
/* WARNING: Removing unreachable block (ram,0x0001025e7ac8) */
/* WARNING: Removing unreachable block (ram,0x0001025e8584) */
/* WARNING: Removing unreachable block (ram,0x0001025e7c40) */
/* WARNING: Removing unreachable block (ram,0x0001025e8518) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e7a50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ead7d8);
  func_0x000107c5fadc();
  func_0x000107c4f428(uVar1,param_2,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025e8594; end: 1025e867f;  */

void FUN_1025e8594(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_1025e8b3c(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1025e8bec(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e867c);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e8680);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e8678);
  (*pcVar1)();
}



/* Entry: 1025e8680; end: 1025e871f;  */

void FUN_1025e8680(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_60;
    uStack_40 = 0x1025e8f18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110527ee8;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c42010(param_1);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 1025e8720; end: 1025e8773;  */

void FUN_1025e8720(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1025e8f20();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1025e8774; end: 1025e87d3; -[_TtC31MapAdsPromotedPlaceWorkflowImpl42MapAdsPromotedPlaceBannerActionContextMenu init] */

void FUN_1025e8774(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdsPromotedPlaceWorkflowImpl.MapAdsPromotedPlaceBannerActionContextMenu",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e87a0);
  (*pcVar1)();
}



/* Entry: 1025e87d4; end: 1025e88fb; -[_TtC31MapAdsPromotedPlaceWorkflowImpl42MapAdsPromotedPlaceBannerActionContextMenu .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e87d4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ead7d0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ead7d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead7e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead7e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead7f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead7f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead800));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead808));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead810));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ead818));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead820));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ead828));
  FUN_1025e8f88(param_1 + _DAT_112ead830);
  FUN_1025e8f88(param_1 + _DAT_112ead838);
  FUN_1025e8f88(param_1 + _DAT_112ead840);
  FUN_1025e8f88(param_1 + _DAT_112ead848);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ead850);
  return;
}



/* Entry: 1025e88fc; end: 1025e891b;  */

void FUN_1025e88fc(void)

{
  func_0x000107c61168(&PTR_PTR_112852f48);
  return;
}



/* Entry: 1025e891c; end: 1025e893b;  */

void FUN_1025e891c(void)

{
  FUN_1025e8d44();
  return;
}



/* Entry: 1025e893c; end: 1025e8b3b; -[_TtC31MapAdsPromotedPlaceWorkflowImpl42MapAdsPromotedPlaceBannerActionContextMenu actionSheetDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001025e8970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e8974) */

void FUN_1025e893c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1025e8f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1025e8b3c; end: 1025e8beb;  */

void FUN_1025e8b3c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x000101136b6c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1025e8bec; end: 1025e8d43;  */

ulong FUN_1025e8bec(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e8d44);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e8d38);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000101054fb8(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e8d3c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e8d40);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x0001025e8988(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1025e8d44; end: 1025e8e87;  */

void FUN_1025e8d44(undefined8 *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [152];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  pcVar1 = "triggerBannerAction(bannerMetadata:baseview:)";
  func_0x0001000c10c0("triggerBannerAction(bannerMetadata:baseview:)");
  func_0x000107c61180();
  puVar2 = &UNK_110527db8;
  func_0x000107c613fc(&UNK_110527db8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110527de0;
  func_0x000107c613fc(&UNK_110527de0,0xb0,7);
  uVar5 = param_1[0xc];
  uVar7 = param_1[0xf];
  uVar6 = param_1[0xe];
  *(undefined8 *)(puVar3 + 0x80) = param_1[0xd];
  *(undefined8 *)(puVar3 + 0x78) = uVar5;
  *(undefined8 *)(puVar3 + 0x90) = uVar7;
  *(undefined8 *)(puVar3 + 0x88) = uVar6;
  uVar5 = param_1[0x10];
  *(undefined8 *)(puVar3 + 0xa0) = param_1[0x11];
  *(undefined8 *)(puVar3 + 0x98) = uVar5;
  uVar5 = param_1[4];
  uVar7 = param_1[7];
  uVar6 = param_1[6];
  *(undefined8 *)(puVar3 + 0x40) = param_1[5];
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar6;
  uVar5 = param_1[8];
  uVar7 = param_1[0xb];
  uVar6 = param_1[10];
  *(undefined8 *)(puVar3 + 0x60) = param_1[9];
  *(undefined8 *)(puVar3 + 0x58) = uVar5;
  *(undefined8 *)(puVar3 + 0x70) = uVar7;
  *(undefined8 *)(puVar3 + 0x68) = uVar6;
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar3 + 0x20) = param_1[1];
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0xa8) = param_1[0x12];
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  pcStack_50 = FUN_1025e8e88;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110527df8;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_48;
  FUN_1025e795c(param_1,auStack_108);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1025e8e88; end: 1025e8eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e8e88(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar1 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112ead7e0);
    lVar2 = lVar4;
    func_0x000107c61174(lVar4);
    func_0x000107c61170(lVar1);
    if (lVar4 != 0) goto LAB_1025e7a30;
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  FUN_1025e7a50(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
LAB_1025e7a30:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1025e8eb0; end: 1025e8eff;  */

undefined8 FUN_1025e8eb0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ead880;
  func_0x0001000285a8(0x112ead880,&UNK_10dac2160);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1025e8f00; end: 1025e8f1f;  */

void FUN_1025e8f00(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1025e9060();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1025e8f20; end: 1025e8f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e8f20(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ead7e0);
  *(undefined8 *)(unaff_x20 + _DAT_112ead7e0) = 0;
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112ead850;
  lVar3 = unaff_x20 + _DAT_112ead850;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c420a8();
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + lVar1,0);
  return;
}



/* Entry: 1025e8f88; end: 1025e8fcf;  */

undefined8 FUN_1025e8f88(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ead880;
  func_0x0001000285a8(0x112ead880,&UNK_10dac2160);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1025e8fd0; end: 1025e8fef;  */

void FUN_1025e8fd0(long param_1,long param_2)

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



/* Entry: 1025e8ff0; end: 1025e905f;  */

void FUN_1025e8ff0(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c61174(param_1);
      FUN_1025e9060();
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1025e9060; end: 1025e928f;  */

/* WARNING: Possible PIC construction at 0x0001025e91e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e920c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e9240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e9254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e9284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e919c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e9288) */
/* WARNING: Removing unreachable block (ram,0x0001025e9258) */
/* WARNING: Removing unreachable block (ram,0x0001025e9244) */
/* WARNING: Removing unreachable block (ram,0x0001025e9210) */
/* WARNING: Removing unreachable block (ram,0x0001025e91ec) */
/* WARNING: Removing unreachable block (ram,0x0001025e91a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e9060(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112ead890);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 != 0) goto code_r0x000107c61170;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  lVar6 = *(long *)(unaff_x20 + _DAT_112ead888);
  lVar4 = *(long *)(lVar6 + _DAT_11308f138 + 8);
  if (lVar4 == 0) goto code_r0x000107c61170;
  lVar5 = *(long *)(unaff_x20 + _DAT_112ead8a0);
  func_0x000107c61434(lVar4);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) goto code_r0x000107c61170;
  func_0x000107c3d428();
  func_0x000107c61180();
  func_0x000107c615e8(lVar5);
  uVar8 = *(ulong *)(lVar6 + _DAT_113815208);
  if (uVar8 == 0) {
LAB_1025e91d0:
    uVar3 = 0;
  }
  else {
    uVar7 = uVar8 & 0xffffffffffffff8;
    if (uVar8 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      uVar2 = uVar8;
      if (-1 < (long)uVar8) {
        uVar2 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) goto LAB_1025e91d0;
    if ((uVar8 & 0xc000000000000001) != 0) {
      func_0x000107c61434(uVar8);
      func_0x000100e471e4(0,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
      return;
    }
    if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e9290);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(uVar8 + 0x20);
    func_0x000107c61174(uVar3);
  }
  func_0x0001084c6bf4(lVar6,uVar3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1025e9290; end: 1025e92ef; -[_TtC31MapAdsPromotedPlaceWorkflowImpl55MapAdsPromotedPlaceBannerActionContextMenuNotInterested init] */

void FUN_1025e9290(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdsPromotedPlaceWorkflowImpl.MapAdsPromotedPlaceBannerActionContextMenuNotInterested"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025e92bc);
  (*pcVar1)();
}



/* Entry: 1025e92f0; end: 1025e9357; -[_TtC31MapAdsPromotedPlaceWorkflowImpl55MapAdsPromotedPlaceBannerActionContextMenuNotInterested .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025e930c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025e932c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025e9310) */
/* WARNING: Removing unreachable block (ram,0x0001025e9330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025e92f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ead888));
  return;
}


