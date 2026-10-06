/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000e4198; end: 000e41a3;  */

void FUN_000e4198(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_000e3e50(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e41a4; end: 000e41f3;  */

void FUN_000e41a4(undefined8 param_1,code *param_2)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  (*param_2)(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e41f4; end: 000e41ff;  */

void FUN_000e41f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)();
  return;
}



/* Entry: 000e4200; end: 000e4227;  */

void FUN_000e4200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_1;
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 000e4228; end: 000e4243;  */

undefined8 FUN_000e4228(void)

{
  return 0xe4238;
}



/* Entry: 000e4244; end: 000e4263;  */

void FUN_000e4244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  FUN_000e3fac(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
               *(undefined8 *)(param_5 + 0x18),param_4);
  return;
}



/* Entry: 000e4264; end: 000e4267;  */

void FUN_000e4264(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar4 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,uVar1,uVar2,&UNK_008441f0,&UNK_008441f8);
                    /* WARNING: Could not recover jumptable at 0x00778710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_0099b1c0)(param_1,uVar4,uVar2,uVar3);
  return;
}



/* Entry: 000e4268; end: 000e4283;  */

void FUN_000e4268(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_000e69d0(unaff_x20 + 8,param_1);
  return;
}



/* Entry: 000e4284; end: 000e4287;  */

uint FUN_000e4284(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint unaff_w20;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_000e69d0(param_1,auStack_88);
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60,auStack_88,uVar1,param_2,7);
  (*(code *)0xe3da0)();
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_60,param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e4288; end: 000e42cf;  */

void FUN_000e4288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e3f78(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e42d0; end: 000e42e7;  */

undefined8 FUN_000e42d0(void)

{
  return 1;
}



/* Entry: 000e42e8; end: 000e4333;  */

void FUN_000e42e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*param_4)(auStack_78,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e4334; end: 000e4357;  */

void FUN_000e4334(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0xe7570);
  return;
}



/* Entry: 000e4358; end: 000e43ab;  */

void FUN_000e4358(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  uVar4 = *param_1;
  uVar5 = *param_2;
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar3,uVar1,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(lVar3,uVar1,uVar2,&UNK_008441f0,&UNK_008441f8);
                    /* WARNING: Could not recover jumptable at 0x0077871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_0099b1c8)
            (uVar4,uVar5,uVar2,*(undefined8 *)(lVar3 + 8));
  return;
}



/* Entry: 000e43ac; end: 000e43e3;  */

undefined8 * FUN_000e43ac(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x24);
  FUN_00011670(unaff_x20 + iVar2);
  puVar1 = (undefined8 *)(unaff_x20 + iVar2);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  puVar1[4] = param_1[4];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  return puVar1;
}



/* Entry: 000e43e4; end: 000e43fb;  */

undefined1  [16] FUN_000e43e4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x24);
  auVar1._0_8_ = 0xe43f8;
  return auVar1;
}



/* Entry: 000e43fc; end: 000e4427;  */

uint FUN_000e43fc(uint param_1)

{
  __sSQ2eeoiySbx_xtFZTj();
  return param_1 & 1;
}



/* Entry: 000e4428; end: 000e448b;  */

void FUN_000e4428(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  long lVar1;
  
  lVar1 = 0;
  FUN_000e6a14(0,param_4,param_5);
  FUN_000dfbb8(param_2,param_1 + *(int *)(lVar1 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x000e4488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e448c; end: 000e44af;  */

void FUN_000e448c(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_000e6a14);
  return;
}



/* Entry: 000e44b0; end: 000e44bf;  */

void FUN_000e44b0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00778344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_0099af10)
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(*(long *)(param_2 + 0x18) + 8))
  ;
  return;
}



/* Entry: 000e44c0; end: 000e457f;  */

uint FUN_000e44c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  FUN_000e69d0();
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  __sSQ2eeoiySbx_xtFZTj();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e4580; end: 000e471f;  */

void FUN_000e4580(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar2;
  long extraout_x12;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar3 = lVar6 - extraout_x12;
  (**(code **)(lVar7 + 0x38))(lVar3,1,1,lVar4);
  (**(code **)(param_4 + 0x188))(lVar3,lVar4,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar3,lVar1);
    lVar3 = lVar6;
    (**(code **)(lVar7 + 0x30))(lVar6,1,lVar4);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar7 + 0x20))(puVar5,lVar6,lVar4);
      (**(code **)(lVar7 + 0x28))(unaff_x20,puVar5,lVar4);
      return;
    }
    pcVar2 = *(code **)(lVar8 + 8);
  }
  else {
    pcVar2 = *(code **)(lVar8 + 8);
    lVar6 = lVar3;
  }
  (*pcVar2)(lVar6,lVar1);
  return;
}



/* Entry: 000e4720; end: 000e497b;  */

void FUN_000e4720(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar9 = *(long *)(param_4 + -8);
  lVar5 = param_4;
  uStack_90 = param_1;
  uStack_88 = param_3;
  lStack_78 = param_5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar3 = 0;
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSqMa(0,lVar5);
  lStack_80 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_80 + 0x40));
  lVar11 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar11 - extraout_x12;
  lVar4 = 0;
  FUN_000e6a14(0,param_4,param_6);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x38))(lVar8,1,1,param_4);
  (**(code **)(param_7 + 0x188))(lVar8,param_4,param_6,lStack_78,param_7);
  lVar5 = lStack_80;
  if (unaff_x21 == 0) {
    lStack_78 = lVar8 - extraout_x8_01;
    (**(code **)(lStack_80 + 0x20))(lVar11,lVar8,lVar3);
    lVar8 = lVar11;
    (**(code **)(lVar9 + 0x30))(lVar11,1,param_4);
    puVar1 = puStack_98;
    bVar2 = (int)lVar8 != 1;
    if (bVar2) {
      pcVar6 = *(code **)(lVar9 + 0x20);
      (*pcVar6)(puStack_98,lVar11,param_4);
      lVar5 = lStack_78;
      FUN_000dfbb8(param_2,lStack_78 + *(int *)(lVar4 + 0x24));
      (*pcVar6)(lVar5,puVar1,param_4);
      uVar7 = uStack_90;
      (**(code **)(lVar10 + 0x20))(uStack_90,lVar5,lVar4);
    }
    else {
      FUN_00011670(param_2);
      (**(code **)(lVar5 + 8))(lVar11,lVar3);
      uVar7 = uStack_90;
    }
    (**(code **)(lVar10 + 0x38))(uVar7,!bVar2,1,lVar4);
  }
  else {
    FUN_00011670(param_2);
    (**(code **)(lStack_80 + 8))(lVar8,lVar3);
  }
  return;
}



/* Entry: 000e497c; end: 000e4a17;  */

void FUN_000e497c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + *(int *)(param_2 + 0x24);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  FUN_0001393c(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  (**(code **)(param_4 + 0x80))();
  return;
}



/* Entry: 000e4a18; end: 000e4a5f;  */

void FUN_000e4a18(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSH4hash4intoys6HasherVz_tFTj
            (auStack_68,*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e4a60; end: 000e4ab3;  */

void FUN_000e4a60(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000e4a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))(param_1);
  return;
}



/* Entry: 000e4ab4; end: 000e4ad3;  */

void FUN_000e4ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  FUN_000e4720(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
               *(undefined8 *)(param_5 + 0x18),param_4);
  return;
}



/* Entry: 000e4ad4; end: 000e4adb;  */

void FUN_000e4ad4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00778344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_0099af10)
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(*(long *)(param_2 + 0x18) + 8))
  ;
  return;
}



/* Entry: 000e4adc; end: 000e4b23;  */

void FUN_000e4adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e4580(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e4b24; end: 000e4b3b;  */

undefined8 FUN_000e4b24(void)

{
  return 1;
}



/* Entry: 000e4b3c; end: 000e4b5f;  */

void FUN_000e4b3c(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_000e6a14);
  return;
}



/* Entry: 000e4b60; end: 000e4b93;  */

uint FUN_000e4b60(undefined8 param_1,undefined8 param_2,long param_3)

{
  __sSQ2eeoiySbx_xtFZTj
            (param_1,param_2,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + 8));
  return (uint)param_1 & 1;
}



/* Entry: 000e4b94; end: 000e4bb7;  */

void FUN_000e4b94(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0xe7610);
  return;
}



/* Entry: 000e4bb8; end: 000e4c77;  */

void FUN_000e4bb8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = lVar4;
  __sSa5countSivg(lVar4,uVar3);
  if (0 < lVar2) {
    lVar2 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    FUN_0001393c(unaff_x20 + 1,lVar2);
    (**(code **)(lVar1 + 8))(lVar2,lVar1);
    (**(code **)(param_4 + 0x110))
              (lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  }
  return;
}



/* Entry: 000e4c78; end: 000e4c8f;  */

undefined8 FUN_000e4c78(void)

{
  return 0xe4c88;
}



/* Entry: 000e4c90; end: 000e4cb3;  */

void FUN_000e4c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e4bb8(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e4cb4; end: 000e4cc7;  */

undefined8 FUN_000e4cb4(void)

{
  return 1;
}



/* Entry: 000e4cc8; end: 000e4ceb;  */

void FUN_000e4cc8(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0xe7610);
  return;
}



/* Entry: 000e4cec; end: 000e4d27;  */

undefined8 FUN_000e4cec(void)

{
  return 0xe4cfc;
}



/* Entry: 000e4d28; end: 000e4d4b;  */

void FUN_000e4d28(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0xe761c);
  return;
}



/* Entry: 000e4d4c; end: 000e4d63;  */

void FUN_000e4d4c(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00778710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_0099b1c0)
            (param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),
             *(undefined8 *)(*(long *)(param_2 + 0x18) + 8));
  return;
}



/* Entry: 000e4d64; end: 000e4def;  */

uint FUN_000e4d64(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [40];
  undefined8 auStack_50 [6];
  
  FUN_000e69d0(param_1,auStack_78);
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_50,auStack_78,uVar1,param_2,7);
  uVar1 = *unaff_x20;
  __sSasSQRzlE2eeoiySbSayxG_ABtFZ
            (uVar1,auStack_50[0],*(undefined8 *)(param_2 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 000e4df0; end: 000e4e2b;  */

void FUN_000e4df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 400))(param_1);
  return;
}



/* Entry: 000e4e2c; end: 000e4e3f;  */

void FUN_000e4e2c(void)

{
  FUN_000e4e40();
  return;
}



/* Entry: 000e4e40; end: 000e4f13;  */

void FUN_000e4e40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_4);
  auStack_88[0] = uVar1;
  (**(code **)(param_7 + 400))(auStack_88,param_4,param_6,param_5,param_7);
  uVar1 = auStack_88[0];
  if (unaff_x21 == 0) {
    FUN_000dfbb8(param_2,&uStack_78);
    param_1[1] = uStack_78;
    *param_1 = uVar1;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
  }
  else {
    FUN_00011670(param_2);
    _swift_bridgeObjectRelease(auStack_88[0]);
  }
  return;
}



/* Entry: 000e4f14; end: 000e4fd3;  */

void FUN_000e4f14(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = lVar4;
  __sSa5countSivg(lVar4,uVar3);
  if (0 < lVar2) {
    lVar2 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    FUN_0001393c(unaff_x20 + 1,lVar2);
    (**(code **)(lVar1 + 8))(lVar2,lVar1);
    (**(code **)(param_4 + 400))(lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  }
  return;
}



/* Entry: 000e4fd4; end: 000e4fd7;  */

void FUN_000e4fd4(long param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSasSHRzlE4hash4intoys6HasherVz_tF
            (auStack_68,*unaff_x20,*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e4fd8; end: 000e5023;  */

void FUN_000e4fd8(long param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSasSHRzlE4hash4intoys6HasherVz_tF
            (auStack_68,*unaff_x20,*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e5024; end: 000e5037;  */

undefined8 FUN_000e5024(void)

{
  return 0xe5034;
}



/* Entry: 000e5038; end: 000e5057;  */

void FUN_000e5038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  FUN_000e4e2c(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
               *(undefined8 *)(param_5 + 0x18),param_4);
  return;
}



/* Entry: 000e5058; end: 000e505b;  */

uint FUN_000e5058(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [40];
  undefined8 auStack_50 [6];
  
  FUN_000e69d0(param_1,auStack_78);
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_50,auStack_78,uVar1,param_2,7);
  uVar1 = *unaff_x20;
  __sSasSQRzlE2eeoiySbSayxG_ABtFZ
            (uVar1,auStack_50[0],*(undefined8 *)(param_2 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 000e505c; end: 000e50a3;  */

void FUN_000e505c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e4df0(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e50a4; end: 000e50bb;  */

undefined8 FUN_000e50a4(void)

{
  return 1;
}



/* Entry: 000e50bc; end: 000e50df;  */

void FUN_000e50bc(long param_1)

{
  FUN_000e6a20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0xe761c);
  return;
}



/* Entry: 000e50e0; end: 000e5117;  */

void FUN_000e50e0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_0099b1c8)
            (*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + 8));
  return;
}



/* Entry: 000e5118; end: 000e513b;  */

uint FUN_000e5118(uint param_1)

{
  __sSQ2eeoiySbx_xtFZTj();
  return param_1 & 1;
}



/* Entry: 000e513c; end: 000e5147;  */

void FUN_000e513c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_000e6a60(0,param_4,param_5,param_6);
  FUN_000dfbb8(param_2,param_1 + *(int *)(lVar1 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x000e5e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e5148; end: 000e516f;  */

void FUN_000e5148(long param_1)

{
  FUN_000e6a78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),FUN_000e6a60);
  return;
}



/* Entry: 000e5170; end: 000e517f;  */

void FUN_000e5170(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000e517c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x50))(param_1,*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 000e5180; end: 000e5237;  */

uint FUN_000e5180(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  FUN_000e69d0();
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  __sSQ2eeoiySbx_xtFZTj();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e5238; end: 000e53eb;  */

void FUN_000e5238(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar3;
  long extraout_x12;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_80;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_80 = lVar6;
  __sSqMa(0,lVar4);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar6 - extraout_x12;
  (**(code **)(lVar7 + 0x10))(lVar5);
  (**(code **)(lVar7 + 0x38))(lVar5,0,1,lVar4);
  (**(code **)(param_4 + 0x198))(lVar5,lVar4,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  lVar1 = lStack_80;
  if (unaff_x21 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar5,lVar2);
    lVar5 = lVar6;
    (**(code **)(lVar7 + 0x30))(lVar6,1,lVar4);
    if ((int)lVar5 != 1) {
      (**(code **)(lVar7 + 0x20))(lVar1,lVar6,lVar4);
      (**(code **)(lVar7 + 0x28))(unaff_x20,lVar1,lVar4);
      return;
    }
    pcVar3 = *(code **)(lVar8 + 8);
  }
  else {
    pcVar3 = *(code **)(lVar8 + 8);
    lVar6 = lVar5;
  }
  (*pcVar3)(lVar6,lVar2);
  return;
}



/* Entry: 000e53ec; end: 000e565b;  */

void FUN_000e53ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar10 = *(long *)(param_4 + -8);
  lVar5 = param_4;
  uStack_90 = param_1;
  uStack_80 = param_3;
  lStack_78 = param_5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = 0;
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSqMa(0,lVar5);
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_88 + 0x40));
  lVar11 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar11 - extraout_x12;
  lVar4 = 0;
  FUN_000e6a60(0,param_4,param_6,param_7);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x38))(lVar8,1,1,param_4);
  (**(code **)(param_8 + 0x198))(lVar8,param_4,param_7,lStack_78,param_8);
  lVar5 = lStack_88;
  if (unaff_x21 == 0) {
    lStack_78 = lVar8 - extraout_x8_01;
    (**(code **)(lStack_88 + 0x20))(lVar11,lVar8,lVar3);
    lVar8 = lVar11;
    (**(code **)(lVar10 + 0x30))(lVar11,1,param_4);
    puVar1 = puStack_98;
    bVar2 = (int)lVar8 != 1;
    if (bVar2) {
      pcVar9 = *(code **)(lVar10 + 0x20);
      (*pcVar9)(puStack_98,lVar11,param_4);
      lVar5 = lStack_78;
      FUN_000dfbb8(param_2,lStack_78 + *(int *)(lVar4 + 0x2c));
      (*pcVar9)(lVar5,puVar1,param_4);
      uVar7 = uStack_90;
      (**(code **)(lVar6 + 0x20))(uStack_90,lVar5,lVar4);
    }
    else {
      FUN_00011670(param_2);
      (**(code **)(lVar5 + 8))(lVar11,lVar3);
      uVar7 = uStack_90;
    }
    (**(code **)(lVar6 + 0x38))(uVar7,!bVar2,1,lVar4);
  }
  else {
    FUN_00011670(param_2);
    (**(code **)(lStack_88 + 8))(lVar8,lVar3);
  }
  return;
}



/* Entry: 000e565c; end: 000e56fb;  */

void FUN_000e565c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  FUN_0001393c(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  (**(code **)(param_4 + 0x88))();
  return;
}



/* Entry: 000e56fc; end: 000e5747;  */

void FUN_000e56fc(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x50))(auStack_68,*(undefined8 *)(param_1 + 0x10));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e5748; end: 000e576b;  */

undefined8 FUN_000e5748(void)

{
  return 0xe5758;
}



/* Entry: 000e576c; end: 000e5793;  */

void FUN_000e576c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  FUN_000e53ec(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
               *(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x20),param_4);
  return;
}



/* Entry: 000e5794; end: 000e579b;  */

void FUN_000e5794(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000e517c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x50))(param_1,*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 000e579c; end: 000e57e3;  */

void FUN_000e579c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e5238(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e57e4; end: 000e57f3;  */

void FUN_000e57e4(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x50))(auStack_68,*(undefined8 *)(param_1 + 0x10));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e57f4; end: 000e581b;  */

void FUN_000e57f4(long param_1)

{
  FUN_000e6a78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),FUN_000e6a60);
  return;
}



/* Entry: 000e581c; end: 000e585b;  */

uint FUN_000e581c(undefined8 param_1,undefined8 param_2,long param_3)

{
  __sSQ2eeoiySbx_xtFZTj
            (param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 000e585c; end: 000e5883;  */

void FUN_000e585c(long param_1)

{
  FUN_000e6a78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),0xe7630);
  return;
}



/* Entry: 000e5884; end: 000e59d7;  */

void FUN_000e5884(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar3 + -8);
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = *unaff_x20;
  lVar5 = lVar4;
  _swift_bridgeObjectRetain();
  __sSa8endIndexSivg();
  if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar4);
    return;
  }
  lVar5 = 0;
  lVar6 = *(long *)(param_2 + 0x20);
  pcVar9 = *(code **)(lVar6 + 0x50);
  do {
    __sSayxSicig((long)puVar7 - extraout_x12,lVar5,lVar4,lVar3);
    lVar1 = lVar5 + 1;
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0xe59d8);
      (*pcVar9)();
    }
    (**(code **)(lVar8 + 0x20))(puVar7,(long)puVar7 - extraout_x12,lVar3);
    (*pcVar9)(uStack_68,lVar3,lVar6);
    (**(code **)(lVar8 + 8))(puVar7,lVar3);
    lVar2 = lVar4;
    __sSa8endIndexSivg(lVar4,lVar3);
    lVar5 = lVar5 + 1;
  } while (lVar1 != lVar2);
  _swift_bridgeObjectRelease(lVar4);
  return;
}



/* Entry: 000e59d8; end: 000e5a5b;  */

uint FUN_000e59d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [40];
  undefined8 auStack_50 [6];
  
  FUN_000e69d0(param_1,auStack_78);
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_50,auStack_78,uVar1,param_2,7);
  uVar1 = *unaff_x20;
  __sSasSQRzlE2eeoiySbSayxG_ABtFZ
            (uVar1,auStack_50[0],*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 000e5a5c; end: 000e5a9b;  */

void FUN_000e5a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x1a0))(param_1);
  return;
}



/* Entry: 000e5a9c; end: 000e5b6f;  */

void FUN_000e5a9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_4);
  auStack_88[0] = uVar1;
  (**(code **)(param_8 + 0x1a0))(auStack_88,param_4,param_7,param_5,param_8);
  uVar1 = auStack_88[0];
  if (unaff_x21 == 0) {
    FUN_000dfbb8(param_2,&uStack_78);
    param_1[1] = uStack_78;
    *param_1 = uVar1;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
  }
  else {
    FUN_00011670(param_2);
    _swift_bridgeObjectRelease(auStack_88[0]);
  }
  return;
}



/* Entry: 000e5b70; end: 000e5c2f;  */

void FUN_000e5b70(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = lVar4;
  __sSa5countSivg(lVar4,uVar3);
  if (0 < lVar2) {
    lVar2 = unaff_x20[4];
    lVar1 = unaff_x20[5];
    FUN_0001393c(unaff_x20 + 1,lVar2);
    (**(code **)(lVar1 + 8))(lVar2,lVar1);
    (**(code **)(param_4 + 0x118))
              (lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  }
  return;
}



/* Entry: 000e5c30; end: 000e5c4f;  */

void FUN_000e5c30(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_000e5884(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e5c50; end: 000e5c73;  */

void FUN_000e5c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  FUN_000e5a9c(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,param_5,
               *(undefined8 *)(param_5 + 0x20),param_4);
  return;
}



/* Entry: 000e5c74; end: 000e5c7b;  */

void FUN_000e5c74(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar3 + -8);
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = *unaff_x20;
  lVar5 = lVar4;
  _swift_bridgeObjectRetain();
  __sSa8endIndexSivg();
  if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(lVar4);
    return;
  }
  lVar5 = 0;
  lVar6 = *(long *)(param_2 + 0x20);
  pcVar9 = *(code **)(lVar6 + 0x50);
  do {
    __sSayxSicig((long)puVar7 - extraout_x12,lVar5,lVar4,lVar3);
    lVar1 = lVar5 + 1;
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0xe59d8);
      (*pcVar9)();
    }
    (**(code **)(lVar8 + 0x20))(puVar7,(long)puVar7 - extraout_x12,lVar3);
    (*pcVar9)(uStack_68,lVar3,lVar6);
    (**(code **)(lVar8 + 8))(puVar7,lVar3);
    lVar2 = lVar4;
    __sSa8endIndexSivg(lVar4,lVar3);
    lVar5 = lVar5 + 1;
  } while (lVar1 != lVar2);
  _swift_bridgeObjectRelease(lVar4);
  return;
}



/* Entry: 000e5c7c; end: 000e5cc3;  */

void FUN_000e5c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e5a5c(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e5cc4; end: 000e5cd3;  */

void FUN_000e5cc4(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_000e5884(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e5cd4; end: 000e5cfb;  */

void FUN_000e5cd4(long param_1)

{
  FUN_000e6a78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),0xe7630);
  return;
}



/* Entry: 000e5cfc; end: 000e5d1b;  */

void FUN_000e5cfc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_0099b1c8)
            (*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 000e5d1c; end: 000e5d3b;  */

void FUN_000e5d1c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_000e69d0(unaff_x20 + *(int *)(param_2 + 0x2c),param_1);
  return;
}



/* Entry: 000e5d3c; end: 000e5d3f;  */

undefined8 * FUN_000e5d3c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x2c);
  FUN_00011670(unaff_x20 + iVar2);
  puVar1 = (undefined8 *)(unaff_x20 + iVar2);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  puVar1[4] = param_1[4];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  return puVar1;
}



/* Entry: 000e5d40; end: 000e5d77;  */

undefined8 * FUN_000e5d40(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x2c);
  FUN_00011670(unaff_x20 + iVar2);
  puVar1 = (undefined8 *)(unaff_x20 + iVar2);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  puVar1[4] = param_1[4];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  return puVar1;
}



/* Entry: 000e5d78; end: 000e5d8f;  */

undefined1  [16] FUN_000e5d78(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x2c);
  auVar1._0_8_ = 0xe5d8c;
  return auVar1;
}



/* Entry: 000e5d90; end: 000e5db7;  */

uint FUN_000e5d90(uint param_1)

{
  __sSQ2eeoiySbx_xtFZTj();
  return param_1 & 1;
}



/* Entry: 000e5db8; end: 000e5dc3;  */

void FUN_000e5db8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  (*(code *)0xe6a6c)(0,param_4,param_5,param_6);
  FUN_000dfbb8(param_2,param_1 + *(int *)(lVar1 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x000e5e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e5dc4; end: 000e5e2b;  */

void FUN_000e5dc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,code *param_7)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_7)(0,param_4,param_5,param_6);
  FUN_000dfbb8(param_2,param_1 + *(int *)(lVar1 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x000e5e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e5e2c; end: 000e5e53;  */

void FUN_000e5e2c(long param_1)

{
  FUN_000e6a78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),0xe6a6c);
  return;
}



/* Entry: 000e5e54; end: 000e5e5f;  */

void FUN_000e5e54(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00778344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_0099af10)
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Entry: 000e5e60; end: 000e5f1b;  */

uint FUN_000e5e60(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  FUN_000e69d0();
  uVar1 = 0xaede00;
  func_0x000115a8(0xaede00,&UNK_007d8130);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  __sSQ2eeoiySbx_xtFZTj();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 000e5f1c; end: 000e60cf;  */

void FUN_000e5f1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar3;
  long extraout_x12;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_80;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_80 = lVar6;
  __sSqMa(0,lVar4);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar6 - extraout_x12;
  (**(code **)(lVar7 + 0x10))(lVar5);
  (**(code **)(lVar7 + 0x38))(lVar5,0,1,lVar4);
  (**(code **)(param_4 + 0x1a8))(lVar5,lVar4,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  lVar1 = lStack_80;
  if (unaff_x21 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar5,lVar2);
    lVar5 = lVar6;
    (**(code **)(lVar7 + 0x30))(lVar6,1,lVar4);
    if ((int)lVar5 != 1) {
      (**(code **)(lVar7 + 0x20))(lVar1,lVar6,lVar4);
      (**(code **)(lVar7 + 0x28))(unaff_x20,lVar1,lVar4);
      return;
    }
    pcVar3 = *(code **)(lVar8 + 8);
  }
  else {
    pcVar3 = *(code **)(lVar8 + 8);
    lVar6 = lVar5;
  }
  (*pcVar3)(lVar6,lVar2);
  return;
}



/* Entry: 000e60d0; end: 000e633f;  */

void FUN_000e60d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar10 = *(long *)(param_4 + -8);
  lVar5 = param_4;
  uStack_90 = param_1;
  uStack_80 = param_3;
  lStack_78 = param_5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = 0;
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSqMa(0,lVar5);
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_88 + 0x40));
  lVar11 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar11 - extraout_x12;
  lVar4 = 0;
  func_0x000e6a6c(0,param_4,param_6,param_7);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x38))(lVar8,1,1,param_4);
  (**(code **)(param_8 + 0x1a8))(lVar8,param_4,param_7,lStack_78,param_8);
  lVar5 = lStack_88;
  if (unaff_x21 == 0) {
    lStack_78 = lVar8 - extraout_x8_01;
    (**(code **)(lStack_88 + 0x20))(lVar11,lVar8,lVar3);
    lVar8 = lVar11;
    (**(code **)(lVar10 + 0x30))(lVar11,1,param_4);
    puVar1 = puStack_98;
    bVar2 = (int)lVar8 != 1;
    if (bVar2) {
      pcVar9 = *(code **)(lVar10 + 0x20);
      (*pcVar9)(puStack_98,lVar11,param_4);
      lVar5 = lStack_78;
      FUN_000dfbb8(param_2,lStack_78 + *(int *)(lVar4 + 0x2c));
      (*pcVar9)(lVar5,puVar1,param_4);
      uVar7 = uStack_90;
      (**(code **)(lVar6 + 0x20))(uStack_90,lVar5,lVar4);
    }
    else {
      FUN_00011670(param_2);
      (**(code **)(lVar5 + 8))(lVar11,lVar3);
      uVar7 = uStack_90;
    }
    (**(code **)(lVar6 + 0x38))(uVar7,!bVar2,1,lVar4);
  }
  else {
    FUN_00011670(param_2);
    (**(code **)(lStack_88 + 8))(lVar8,lVar3);
  }
  return;
}



/* Entry: 000e6340; end: 000e63df;  */

void FUN_000e6340(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  FUN_0001393c(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  (**(code **)(param_4 + 0x90))();
  return;
}



/* Entry: 000e63e0; end: 000e63ef;  */

void FUN_000e63e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000e63ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x20))(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 000e63f0; end: 000e6433;  */

void FUN_000e63f0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSH4hash4intoys6HasherVz_tFTj
            (auStack_68,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e6434; end: 000e6457;  */

undefined8 FUN_000e6434(void)

{
  return 0xe6444;
}


