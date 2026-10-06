/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10455c898; end: 10455c8bf;  */

void FUN_10455c898(long param_1)

{
  FUN_10455d604(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),0x10455e110);
  return;
}



/* Entry: 10455c8c0; end: 10455c8df;  */

void FUN_10455c8c0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_11034dcc8)
            (*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10455c8e0; end: 10455c8ff;  */

void FUN_10455c8e0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_10455d55c(unaff_x20 + *(int *)(param_2 + 0x2c),param_1);
  return;
}



/* Entry: 10455c900; end: 10455c903;  */

undefined8 * FUN_10455c900(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x2c);
  func_0x0001000834e4(unaff_x20 + iVar2);
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



/* Entry: 10455c904; end: 10455c93b;  */

undefined8 * FUN_10455c904(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x2c);
  func_0x0001000834e4(unaff_x20 + iVar2);
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



/* Entry: 10455c93c; end: 10455c953;  */

undefined1  [16] FUN_10455c93c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x2c);
  auVar1._0_8_ = 0x10455c950;
  return auVar1;
}



/* Entry: 10455c954; end: 10455c97b;  */

uint FUN_10455c954(uint param_1)

{
  __sSQ2eeoiySbx_xtFZTj();
  return param_1 & 1;
}



/* Entry: 10455c97c; end: 10455c987;  */

void FUN_10455c97c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  (*(code *)0x10455d5f8)(0,param_4,param_5,param_6);
  FUN_1045574a0(param_2,param_1 + *(int *)(lVar1 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x00010455c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 10455c988; end: 10455c9ef;  */

void FUN_10455c988(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_7)(0,param_4,param_5,param_6);
  FUN_1045574a0(param_2,param_1 + *(int *)(lVar1 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x00010455c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 10455c9f0; end: 10455ca17;  */

void FUN_10455c9f0(long param_1)

{
  FUN_10455d604(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),0x10455d5f8);
  return;
}



/* Entry: 10455ca18; end: 10455ca23;  */

void FUN_10455ca18(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb758c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_11034d7c0)
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Entry: 10455ca24; end: 10455cadf;  */

uint FUN_10455ca24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  FUN_10455d55c();
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  __sSQ2eeoiySbx_xtFZTj();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 10455cae0; end: 10455cc93;  */

void FUN_10455cae0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_80 = lVar6;
  __sSqMa(0,lVar4);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
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



/* Entry: 10455cc94; end: 10455cf03;  */

void FUN_10455cc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = 0;
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSqMa(0,lVar5);
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar11 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar11 - extraout_x12;
  lVar4 = 0;
  func_0x00010455d5f8(0,param_4,param_6,param_7);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
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
      FUN_1045574a0(param_2,lStack_78 + *(int *)(lVar4 + 0x2c));
      (*pcVar9)(lVar5,puVar1,param_4);
      uVar7 = uStack_90;
      (**(code **)(lVar6 + 0x20))(uStack_90,lVar5,lVar4);
    }
    else {
      func_0x0001000834e4(param_2);
      (**(code **)(lVar5 + 8))(lVar11,lVar3);
      uVar7 = uStack_90;
    }
    (**(code **)(lVar6 + 0x38))(uVar7,!bVar2,1,lVar4);
  }
  else {
    func_0x0001000834e4(param_2);
    (**(code **)(lStack_88 + 8))(lVar8,lVar3);
  }
  return;
}



/* Entry: 10455cf04; end: 10455cfa3;  */

void FUN_10455cf04(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  (**(code **)(param_4 + 0x90))();
  return;
}



/* Entry: 10455cfa4; end: 10455cfb3;  */

void FUN_10455cfa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010455cfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x20))(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10455cfb4; end: 10455cff7;  */

void FUN_10455cfb4(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSH4hash4intoys6HasherVz_tFTj
            (auStack_68,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455cff8; end: 10455d01b;  */

undefined8 FUN_10455cff8(void)

{
  return 0x10455d008;
}



/* Entry: 10455d01c; end: 10455d043;  */

void FUN_10455d01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  FUN_10455cc94(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
                *(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x20),param_4);
  return;
}



/* Entry: 10455d044; end: 10455d047;  */

uint FUN_10455d044(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint unaff_w20;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  FUN_10455d55c();
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_58,uVar1,
                     param_2,7);
  __sSQ2eeoiySbx_xtFZTj();
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
  return unaff_w20 & 1;
}



/* Entry: 10455d048; end: 10455d08f;  */

void FUN_10455d048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455cae0(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455d090; end: 10455d09f;  */

void FUN_10455d090(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSH4hash4intoys6HasherVz_tFTj
            (auStack_68,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455d0a0; end: 10455d0eb;  */

void FUN_10455d0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*param_4)(auStack_78,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455d0ec; end: 10455d113;  */

void FUN_10455d0ec(long param_1)

{
  FUN_10455d604(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),0x10455d5f8);
  return;
}



/* Entry: 10455d114; end: 10455d157;  */

uint FUN_10455d114(undefined8 param_1,undefined8 param_2,long param_3)

{
  __sSQ2eeoiySbx_xtFZTj
            (param_1,param_2,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(*(long *)(param_3 + 0x18) + 8));
  return (uint)param_1 & 1;
}



/* Entry: 10455d158; end: 10455d17f;  */

void FUN_10455d158(long param_1)

{
  FUN_10455d604(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),0x10455e81c);
  return;
}



/* Entry: 10455d180; end: 10455d18f;  */

void FUN_10455d180(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_11034dcb8)
            (param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Entry: 10455d190; end: 10455d217;  */

uint FUN_10455d190(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [40];
  undefined8 auStack_50 [6];
  
  FUN_10455d55c(param_1,auStack_78);
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_50,auStack_78,uVar1,param_2,7);
  uVar1 = *unaff_x20;
  __sSasSQRzlE2eeoiySbSayxG_ABtFZ
            (uVar1,auStack_50[0],*(undefined8 *)(param_2 + 0x10),
             *(undefined8 *)(*(long *)(param_2 + 0x18) + 8));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 10455d218; end: 10455d257;  */

void FUN_10455d218(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x1b0))(param_1);
  return;
}



/* Entry: 10455d258; end: 10455d32b;  */

void FUN_10455d258(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (**(code **)(param_8 + 0x1b0))(auStack_88,param_4,param_7,param_5,param_8);
  uVar1 = auStack_88[0];
  if (unaff_x21 == 0) {
    FUN_1045574a0(param_2,&uStack_78);
    param_1[1] = uStack_78;
    *param_1 = uVar1;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
  }
  else {
    func_0x0001000834e4(param_2);
    _swift_bridgeObjectRelease(auStack_88[0]);
  }
  return;
}



/* Entry: 10455d32c; end: 10455d3eb;  */

void FUN_10455d32c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
    func_0x0001000a8868(unaff_x20 + 1,lVar2);
    (**(code **)(lVar1 + 8))(lVar2,lVar1);
    (**(code **)(param_4 + 0x120))
              (lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  }
  return;
}



/* Entry: 10455d3ec; end: 10455d3ef;  */

uint FUN_10455d3ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  __ss15_arrayForceCastySayq_GSayxGr0_lF(uVar2,uVar3,uVar1);
  uVar1 = uVar2;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 10455d3f0; end: 10455d493;  */

uint FUN_10455d3f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  __ss15_arrayForceCastySayq_GSayxGr0_lF(uVar2,uVar3,uVar1);
  uVar1 = uVar2;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 10455d494; end: 10455d4a7;  */

undefined8 FUN_10455d494(void)

{
  return 0x10455d4a4;
}



/* Entry: 10455d4a8; end: 10455d4cb;  */

void FUN_10455d4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  FUN_10455d258(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,param_5,
                *(undefined8 *)(param_5 + 0x20),param_4);
  return;
}



/* Entry: 10455d4cc; end: 10455d4cf;  */

uint FUN_10455d4cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [40];
  undefined8 auStack_50 [6];
  
  FUN_10455d55c(param_1,auStack_78);
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_50,auStack_78,uVar1,param_2,7);
  uVar1 = *unaff_x20;
  __sSasSQRzlE2eeoiySbSayxG_ABtFZ
            (uVar1,auStack_50[0],*(undefined8 *)(param_2 + 0x10),
             *(undefined8 *)(*(long *)(param_2 + 0x18) + 8));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 10455d4d0; end: 10455d517;  */

void FUN_10455d4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455d218(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455d518; end: 10455d527;  */

void FUN_10455d518(long param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSasSHRzlE4hash4intoys6HasherVz_tF
            (auStack_68,*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455d528; end: 10455d54f;  */

void FUN_10455d528(long param_1)

{
  FUN_10455d604(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),0x10455e81c);
  return;
}



/* Entry: 10455d550; end: 10455d55b;  */

void FUN_10455d550(undefined8 *param_1,undefined8 *param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_11034dcc8)
            (*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(*(long *)(param_3 + 0x18) + 8));
  return;
}



/* Entry: 10455d55c; end: 10455d59f;  */

long FUN_10455d55c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10455d5a0; end: 10455d5ab;  */

void FUN_10455d5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e813e20);
  return;
}



/* Entry: 10455d5ac; end: 10455d5eb;  */

void FUN_10455d5ac(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0;
  (*param_3)(0,param_1,param_2);
  uStack_18 = uVar1;
  _swift_getMetatypeMetadata();
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10455d5ec; end: 10455d603;  */

void FUN_10455d5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e813ef8);
  return;
}



/* Entry: 10455d604; end: 10455d647;  */

void FUN_10455d604(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0;
  (*param_4)(0,param_1,param_2,param_3);
  uStack_18 = uVar1;
  _swift_getMetatypeMetadata();
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10455d648; end: 10455d65b;  */

void FUN_10455d648(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10dd16f78;
  puVar2 = &DAT_10dd16f5c;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  _swift_getWitnessTable(&DAT_10dd16f5c,param_2);
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}



/* Entry: 10455d65c; end: 10455d687;  */

void FUN_10455d65c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd16fb8;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d688; end: 10455d6ab;  */

void FUN_10455d688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd16fe0,param_1);
  return;
}



/* Entry: 10455d6ac; end: 10455d6d7;  */

void FUN_10455d6ac(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd17080;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d6d8; end: 10455d6fb;  */

void FUN_10455d6d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd170a8,param_1);
  return;
}



/* Entry: 10455d6fc; end: 10455d727;  */

void FUN_10455d6fc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd17148;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d728; end: 10455d74b;  */

void FUN_10455d728(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd17170,param_1);
  return;
}



/* Entry: 10455d74c; end: 10455d777;  */

void FUN_10455d74c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd17210;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d778; end: 10455d79b;  */

void FUN_10455d778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd17238,param_1);
  return;
}



/* Entry: 10455d79c; end: 10455d7c7;  */

void FUN_10455d79c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd172d8;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d7c8; end: 10455d7eb;  */

void FUN_10455d7c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd17300,param_1);
  return;
}



/* Entry: 10455d7ec; end: 10455d817;  */

void FUN_10455d7ec(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd173a0;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d818; end: 10455d83b;  */

void FUN_10455d818(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd173c8,param_1);
  return;
}



/* Entry: 10455d83c; end: 10455d867;  */

void FUN_10455d83c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd17468;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d868; end: 10455d88b;  */

void FUN_10455d868(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd17490,param_1);
  return;
}



/* Entry: 10455d88c; end: 10455d8b7;  */

void FUN_10455d88c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd17530;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d8b8; end: 10455d8db;  */

void FUN_10455d8b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd17558,param_1);
  return;
}



/* Entry: 10455d8dc; end: 10455d907;  */

void FUN_10455d8dc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd175f8;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d908; end: 10455d92b;  */

void FUN_10455d908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd17620,param_1);
  return;
}



/* Entry: 10455d92c; end: 10455d973;  */

void FUN_10455d92c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _swift_getWitnessTable();
  *(undefined8 *)(param_1 + 8) = param_4;
  _swift_getWitnessTable(param_5,param_2);
  *(undefined8 *)(param_1 + 0x10) = param_5;
  return;
}



/* Entry: 10455d974; end: 10455d99f;  */

void FUN_10455d974(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dd176c0;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10455d9a0; end: 10455d9af;  */

void FUN_10455d9a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dd176e8,param_1);
  return;
}



/* Entry: 10455d9b0; end: 10455da33;  */

void FUN_10455d9b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),&UNK_10e814078,&UNK_10e814088);
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd17768;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 10455da34; end: 10455db13;  */

long * FUN_10455da34(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e814078,
             &UNK_10e814088);
  lVar5 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) == 0 && (lVar6 + 7U & 0xfffffffffffffff8) + 0x28 < 0x19)
  {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar2);
    uVar3 = (long)param_1 + lVar6 + 7 & 0xfffffffffffffff8;
    uVar4 = (long)param_2 + lVar6 + 7 & 0xfffffffffffffff8;
    lVar2 = *(long *)(uVar4 + 0x18);
    *(long *)(uVar3 + 0x18) = lVar2;
    *(undefined8 *)(uVar3 + 0x20) = *(undefined8 *)(uVar4 + 0x20);
    (*(code *)**(undefined8 **)(lVar2 + -8))();
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10455db14; end: 10455db73;  */

void FUN_10455db14(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),&UNK_10e814078,
             &UNK_10e814088);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  puVar2 = (undefined8 *)(param_1 + *(long *)(lVar3 + 0x40) + 7U & 0xfffffffffffffff8);
  lVar1 = *(long *)(puVar2[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*puVar2);
  return;
}



/* Entry: 10455db74; end: 10455dd9b;  */

long FUN_10455db74(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e814078,
             &UNK_10e814088);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  uVar2 = lVar1 + param_1 & 0xfffffffffffffff8;
  uVar3 = lVar1 + param_2 & 0xfffffffffffffff8;
  lVar1 = *(long *)(uVar3 + 0x18);
  *(long *)(uVar2 + 0x18) = lVar1;
  *(undefined8 *)(uVar2 + 0x20) = *(undefined8 *)(uVar3 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Entry: 10455dd9c; end: 10455ded7;  */

int * FUN_10455dd9c(int *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e814078,
             &UNK_10e814088);
  lVar8 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar1 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x28;
    uVar9 = 2;
    uVar3 = uVar9;
    if ((uVar7 & 0xfffffff8) == 0) {
      uVar3 = (param_2 - uVar1) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar2 = 0;
    if (1 < uVar3) {
      uVar2 = uVar9;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_10455de58;
    }
    else if (uVar2 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_10455de58:
        iVar5 = uVar9 - 1;
        if ((uVar7 & 0xfffffff8) != 0) {
          iVar5 = *param_1;
        }
        return (int *)(ulong)(uVar1 + iVar5 + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_10455de58;
    }
  }
  if (uVar4 < 0x7fffffff) {
    uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8U) + 0x18);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (int *)(ulong)((int)uVar7 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010455de94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x30))(param_1,uVar4,lVar6);
  return param_1;
}



/* Entry: 10455ded8; end: 10455e06b;  */

void FUN_10455ded8(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),&UNK_10e814078,
             &UNK_10e814088);
  lVar7 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar7 + 0x40);
  lVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x28;
  uVar10 = 2;
  uVar11 = uVar10;
  if ((int)lVar1 == 0) {
    uVar11 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar11) {
    uVar10 = 4;
  }
  if (uVar11 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar11) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  uVar11 = (uint)param_2;
  iVar5 = uVar11 - uVar2;
  if (uVar11 < uVar2 || iVar5 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (uVar11 != 0) {
      if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010455e010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2,uVar4,lVar6);
        return;
      }
      puVar8 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)uVar11 < 0) {
        puVar8[2] = 0;
        puVar8[1] = 0;
        puVar8[4] = 0;
        puVar8[3] = 0;
        *puVar8 = (ulong)(uVar11 & 0x7fffffff);
      }
      else {
        puVar8[3] = (ulong)(uVar11 - 1);
      }
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar5 = 1;
      _bzero(param_1,lVar1);
      *param_1 = uVar11 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar5;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar5;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar5;
    }
  }
  return;
}



/* Entry: 10455e06c; end: 10455e083;  */

void FUN_10455e06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e813da8);
  return;
}



/* Entry: 10455e084; end: 10455e0f7;  */

void FUN_10455e084(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd17768;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 10455e0f8; end: 10455e11b;  */

void FUN_10455e0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e813e68);
  return;
}



/* Entry: 10455e11c; end: 10455e18f;  */

void FUN_10455e11c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd17768;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x28);
  }
  return;
}



/* Entry: 10455e190; end: 10455e24f;  */

long * FUN_10455e190(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if ((*(uint *)(lVar4 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x28 < 0x19)
  {
    (**(code **)(lVar4 + 0x10))(param_1);
    uVar2 = (long)param_1 + lVar5 + 7 & 0xfffffffffffffff8;
    uVar3 = (long)param_2 + lVar5 + 7 & 0xfffffffffffffff8;
    lVar4 = *(long *)(uVar3 + 0x18);
    *(long *)(uVar2 + 0x18) = lVar4;
    *(undefined8 *)(uVar2 + 0x20) = *(undefined8 *)(uVar3 + 0x20);
    (*(code *)**(undefined8 **)(lVar4 + -8))();
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0x50) & 0xf8;
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10455e250; end: 10455e28b;  */

void FUN_10455e250(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar2 + 8))();
  puVar1 = (undefined8 *)(param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8);
  lVar2 = *(long *)(puVar1[3] + -8);
  if ((*(byte *)(lVar2 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*puVar1);
  return;
}



/* Entry: 10455e28c; end: 10455e423;  */

long FUN_10455e28c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  uVar1 = lVar3 + param_1 & 0xfffffffffffffff8;
  uVar2 = lVar3 + param_2 & 0xfffffffffffffff8;
  lVar3 = *(long *)(uVar2 + 0x18);
  *(long *)(uVar1 + 0x18) = lVar3;
  *(undefined8 *)(uVar1 + 0x20) = *(undefined8 *)(uVar2 + 0x20);
  (*(code *)**(undefined8 **)(lVar3 + -8))();
  return param_1;
}



/* Entry: 10455e424; end: 10455e517;  */

uint * FUN_10455e424(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x28;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_10455e4b4;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_10455e4b4:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_10455e4b4;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010455e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8U) + 0x18);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Entry: 10455e518; end: 10455e683;  */

void FUN_10455e518(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x28;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)lVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar10 = 4;
  }
  if (uVar4 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010455e628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)param_2 < 0) {
        puVar7[2] = 0;
        puVar7[1] = 0;
        puVar7[4] = 0;
        puVar7[3] = 0;
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
      }
      else {
        puVar7[3] = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)lVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,lVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  return;
}



/* Entry: 10455e684; end: 10455e733;  */

undefined8 * FUN_10455e684(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar2;
  pcVar1 = (code *)**(undefined8 **)(lVar2 + -8);
  _swift_bridgeObjectRetain();
  (*pcVar1)(param_1 + 1,param_2 + 1,lVar2);
  return param_1;
}



/* Entry: 10455e734; end: 10455e787;  */

undefined8 * FUN_10455e734(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  func_0x0001000834e4(param_1 + 1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 10455e788; end: 10455e973;  */

int FUN_10455e788(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10455e974; end: 10455e99b;  */

void FUN_10455e974(void)

{
  FUN_10455ac84();
  return;
}



/* Entry: 10455e99c; end: 10455eaa7;  */

void FUN_10455e99c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_11034dcc8)
            (*param_1,*param_2,param_3,*(undefined8 *)(*(long *)(param_4 + 8) + 8));
  return;
}



/* Entry: 10455eaa8; end: 10455eaf7;  */

void FUN_10455eaa8(void)

{
  func_0x000100dbaacc();
  return;
}



/* Entry: 10455eaf8; end: 10455eb1b;  */

void FUN_10455eaf8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100dbab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))(param_1);
  return;
}



/* Entry: 10455eb1c; end: 10455eb43;  */

void FUN_10455eb1c(void)

{
  FUN_10455acb8();
  return;
}



/* Entry: 10455eb44; end: 10455eba7;  */

void FUN_10455eb44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_1;
  func_0x000107c6142c(*unaff_x20);
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10455eba8; end: 10455ebf7;  */

void FUN_10455eba8(void)

{
  func_0x000100dbaa8c();
  return;
}



/* Entry: 10455ebf8; end: 10455ec1f;  */

uint FUN_10455ebf8(int param_1,uint param_2)

{
  return param_2 & 0xff | param_1 << 3;
}



/* Entry: 10455ec20; end: 10455ec37;  */

ulong FUN_10455ec20(ulong param_1)

{
  func_0x00010455ecb4();
  return param_1 & 0xffffffffff;
}



/* Entry: 10455ec38; end: 10455ec77;  */

undefined8 FUN_10455ec38(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 4;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar1 = 5;
  }
  uVar2 = 3;
  if (0x1fffff < (uint)param_1) {
    uVar2 = uVar1;
  }
  if ((param_1 >> 0xe & 0x3ffff) == 0) {
    uVar2 = 2;
  }
  uVar1 = 1;
  if (0x7f < (uint)param_1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10455ec78; end: 10455eca7;  */

void FUN_10455ec78(undefined4 *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  func_0x00010455ecb4();
  *param_1 = (int)uVar1;
  *(char *)(param_1 + 1) = (char)(uVar1 >> 0x20);
  return;
}



/* Entry: 10455eca8; end: 10455ecdf;  */

void FUN_10455eca8(undefined4 *param_1)

{
  undefined4 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10455ece0; end: 10455ed3f;  */

uint FUN_10455ece0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 8),param_3,&UNK_10e814078,&UNK_10e814088);
  __sSL1loiySbx_xtFZTj(param_1,param_2,uVar1,param_5);
  return (uint)param_1 & 1;
}



/* Entry: 10455ed40; end: 10455ed47;  */

undefined8 FUN_10455ed40(void)

{
  return 0;
}



/* Entry: 10455ed48; end: 10455ed73;  */

void FUN_10455ed48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x20))(param_1,param_3,param_4);
  return;
}


