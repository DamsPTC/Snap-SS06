/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000e6458; end: 000e647f;  */

void FUN_000e6458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  FUN_000e60d0(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
               *(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x20),param_4);
  return;
}



/* Entry: 000e6480; end: 000e6483;  */

void FUN_000e6480(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00778344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_0099af10)
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Entry: 000e6484; end: 000e64a3;  */

void FUN_000e6484(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_000e69d0(unaff_x20 + *(int *)(param_2 + 0x2c),param_1);
  return;
}



/* Entry: 000e64a4; end: 000e64a7;  */

uint FUN_000e64a4(undefined8 param_1,long param_2)

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



/* Entry: 000e64a8; end: 000e64ef;  */

void FUN_000e64a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e5f1c(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e64f0; end: 000e6503;  */

void FUN_000e64f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000e63ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x20))(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 000e6504; end: 000e654f;  */

void FUN_000e6504(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*param_4)(auStack_78,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000e6550; end: 000e6577;  */

void FUN_000e6550(long param_1)

{
  FUN_000e6a78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),0xe6a6c);
  return;
}



/* Entry: 000e6578; end: 000e65bb;  */

uint FUN_000e6578(undefined8 param_1,undefined8 param_2,long param_3)

{
  __sSQ2eeoiySbx_xtFZTj
            (param_1,param_2,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(*(long *)(param_3 + 0x18) + 8));
  return (uint)param_1 & 1;
}



/* Entry: 000e65bc; end: 000e65e3;  */

void FUN_000e65bc(long param_1)

{
  FUN_000e6a78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),0xe7d40);
  return;
}



/* Entry: 000e65e4; end: 000e65f3;  */

void FUN_000e65e4(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00778710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_0099b1c0)
            (param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Entry: 000e65f4; end: 000e667b;  */

uint FUN_000e65f4(undefined8 param_1,long param_2)

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
             *(undefined8 *)(*(long *)(param_2 + 0x18) + 8));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 000e667c; end: 000e66bb;  */

void FUN_000e667c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x1b0))(param_1);
  return;
}



/* Entry: 000e66bc; end: 000e678f;  */

void FUN_000e66bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 000e6790; end: 000e684f;  */

void FUN_000e6790(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
    (**(code **)(param_4 + 0x120))
              (lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  }
  return;
}



/* Entry: 000e6850; end: 000e6853;  */

uint FUN_000e6850(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  __ss15_arrayForceCastySayq_GSayxGr0_lF(uVar2,uVar3,uVar1);
  uVar1 = uVar2;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 000e6854; end: 000e68f7;  */

uint FUN_000e6854(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  __ss15_arrayForceCastySayq_GSayxGr0_lF(uVar2,uVar3,uVar1);
  uVar1 = uVar2;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 000e68f8; end: 000e6913;  */

undefined8 FUN_000e68f8(void)

{
  return 0xe6908;
}



/* Entry: 000e6914; end: 000e6937;  */

void FUN_000e6914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  FUN_000e66bc(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,param_5,
               *(undefined8 *)(param_5 + 0x20),param_4);
  return;
}



/* Entry: 000e6938; end: 000e693f;  */

void FUN_000e6938(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00778710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_0099b1c0)
            (param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Entry: 000e6940; end: 000e6987;  */

void FUN_000e6940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000e667c(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 000e6988; end: 000e699b;  */

uint FUN_000e6988(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  __ss15_arrayForceCastySayq_GSayxGr0_lF(uVar2,uVar3,uVar1);
  uVar1 = uVar2;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 000e699c; end: 000e69c3;  */

void FUN_000e699c(long param_1)

{
  FUN_000e6a78(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),0xe7d40);
  return;
}



/* Entry: 000e69c4; end: 000e69cf;  */

void FUN_000e69c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_0099b1c8)
            (*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(*(long *)(param_3 + 0x18) + 8));
  return;
}



/* Entry: 000e69d0; end: 000e6a13;  */

long FUN_000e69d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000e6a14; end: 000e6a1f;  */

void FUN_000e6a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00843f98);
  return;
}



/* Entry: 000e6a20; end: 000e6a5f;  */

void FUN_000e6a20(undefined8 param_1,undefined8 param_2,code *param_3)

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



/* Entry: 000e6a60; end: 000e6a77;  */

void FUN_000e6a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00844070);
  return;
}



/* Entry: 000e6a78; end: 000e6abb;  */

void FUN_000e6a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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



/* Entry: 000e6abc; end: 000e6acf;  */

void FUN_000e6abc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_007d8178;
  puVar2 = &DAT_007d815c;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  _swift_getWitnessTable(&DAT_007d815c,param_2);
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}



/* Entry: 000e6ad0; end: 000e6afb;  */

void FUN_000e6ad0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d81b8;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6afc; end: 000e6b1f;  */

void FUN_000e6afc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d81e0,param_1);
  return;
}



/* Entry: 000e6b20; end: 000e6b4b;  */

void FUN_000e6b20(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d8280;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6b4c; end: 000e6b6f;  */

void FUN_000e6b4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d82a8,param_1);
  return;
}



/* Entry: 000e6b70; end: 000e6b9b;  */

void FUN_000e6b70(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d8348;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6b9c; end: 000e6bbf;  */

void FUN_000e6b9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d8370,param_1);
  return;
}



/* Entry: 000e6bc0; end: 000e6beb;  */

void FUN_000e6bc0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d8410;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6bec; end: 000e6c0f;  */

void FUN_000e6bec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d8438,param_1);
  return;
}



/* Entry: 000e6c10; end: 000e6c3b;  */

void FUN_000e6c10(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d84d8;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6c3c; end: 000e6c5f;  */

void FUN_000e6c3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d8500,param_1);
  return;
}



/* Entry: 000e6c60; end: 000e6c8b;  */

void FUN_000e6c60(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d85a0;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6c8c; end: 000e6caf;  */

void FUN_000e6c8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d85c8,param_1);
  return;
}



/* Entry: 000e6cb0; end: 000e6cdb;  */

void FUN_000e6cb0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d8668;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6cdc; end: 000e6cff;  */

void FUN_000e6cdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d8690,param_1);
  return;
}



/* Entry: 000e6d00; end: 000e6d2b;  */

void FUN_000e6d00(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d8730;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6d2c; end: 000e6d4f;  */

void FUN_000e6d2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d8758,param_1);
  return;
}



/* Entry: 000e6d50; end: 000e6d7b;  */

void FUN_000e6d50(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d87f8;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6d7c; end: 000e6d9f;  */

void FUN_000e6d7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d8820,param_1);
  return;
}



/* Entry: 000e6da0; end: 000e6de7;  */

void FUN_000e6da0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  _swift_getWitnessTable();
  *(undefined8 *)(param_1 + 8) = param_4;
  _swift_getWitnessTable(param_5,param_2);
  *(undefined8 *)(param_1 + 0x10) = param_5;
  return;
}



/* Entry: 000e6de8; end: 000e6e13;  */

void FUN_000e6de8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_007d88c0;
  _swift_getWitnessTable();
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 000e6e14; end: 000e6e2b;  */

void FUN_000e6e14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d88e8,param_1);
  return;
}



/* Entry: 000e6e2c; end: 000e6eaf;  */

void FUN_000e6e2c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),&UNK_008441f0,&UNK_00844200);
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_007d8968;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 000e6eb0; end: 000e6f8f;  */

long * FUN_000e6eb0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_008441f0,
             &UNK_00844200);
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



/* Entry: 000e6f90; end: 000e6fef;  */

void FUN_000e6f90(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),&UNK_008441f0,
             &UNK_00844200);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  puVar2 = (undefined8 *)(param_1 + *(long *)(lVar3 + 0x40) + 7U & 0xfffffffffffffff8);
  lVar1 = *(long *)(puVar2[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*puVar2);
  return;
}



/* Entry: 000e6ff0; end: 000e7217;  */

long FUN_000e6ff0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_008441f0,
             &UNK_00844200);
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



/* Entry: 000e7218; end: 000e7353;  */

int * FUN_000e7218(int *param_1,uint param_2,long param_3)

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
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_008441f0,
             &UNK_00844200);
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
      goto LAB_000e72d4;
    }
    else if (uVar2 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_000e72d4:
        iVar5 = uVar9 - 1;
        if ((uVar7 & 0xfffffff8) != 0) {
          iVar5 = *param_1;
        }
        return (int *)(ulong)(uVar1 + iVar5 + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_000e72d4;
    }
  }
  if (uVar4 < 0x7fffffff) {
    uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xffffffffffffff8U) + 0x18);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (int *)(ulong)((int)uVar7 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000e7310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x30))(param_1,uVar4,lVar6);
  return param_1;
}



/* Entry: 000e7354; end: 000e74e7;  */

void FUN_000e7354(int *param_1,undefined8 param_2,uint param_3,long param_4)

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
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),&UNK_008441f0,
             &UNK_00844200);
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
                    /* WARNING: Could not recover jumptable at 0x000e748c. Too many branches */
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



/* Entry: 000e74e8; end: 000e7507;  */

void FUN_000e74e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 000e7508; end: 000e755b;  */

long FUN_000e7508(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000e755c; end: 000e757b;  */

undefined8 * FUN_000e755c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 000e757c; end: 000e75ef;  */

void FUN_000e757c(long param_1)

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
    puStack_28 = &UNK_007d8968;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 000e75f0; end: 000e763f;  */

long * FUN_000e75f0(long *param_1,long *param_2,long param_3)

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



/* Entry: 000e7640; end: 000e76b3;  */

void FUN_000e7640(long param_1)

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
    puStack_28 = &UNK_007d8968;
    _swift_initStructMetadata(param_1,0,2,&lStack_30,param_1 + 0x28);
  }
  return;
}



/* Entry: 000e76b4; end: 000e7773;  */

long * FUN_000e76b4(long *param_1,long *param_2,long param_3)

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



/* Entry: 000e7774; end: 000e77af;  */

void FUN_000e7774(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar2 + 8))();
  puVar1 = (undefined8 *)(param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8);
  lVar2 = *(long *)(puVar1[3] + -8);
  if ((*(byte *)(lVar2 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*puVar1);
  return;
}



/* Entry: 000e77b0; end: 000e7947;  */

long FUN_000e77b0(long param_1,long param_2,long param_3)

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



/* Entry: 000e7948; end: 000e7a3b;  */

uint * FUN_000e7948(uint *param_1,uint param_2,long param_3)

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
      goto LAB_000e79d8;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_000e79d8:
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
      if (uVar9 != 0) goto LAB_000e79d8;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000e7a14. Too many branches */
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



/* Entry: 000e7a3c; end: 000e7ba7;  */

void FUN_000e7a3c(int *param_1,uint param_2,uint param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x000e7b4c. Too many branches */
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



/* Entry: 000e7ba8; end: 000e7c57;  */

undefined8 * FUN_000e7ba8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 000e7c58; end: 000e7cab;  */

undefined8 * FUN_000e7c58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  FUN_00011670(param_1 + 1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 000e7cac; end: 000e7e97;  */

int FUN_000e7cac(ulong *param_1,int param_2)

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



/* Entry: 000e7e98; end: 000e7ebf;  */

void FUN_000e7e98(void)

{
  FUN_000e3f78();
  return;
}



/* Entry: 000e7ec0; end: 000e7fcb;  */

void FUN_000e7ec0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_0099b1c8)
            (*param_1,*param_2,param_3,*(undefined8 *)(*(long *)(param_4 + 8) + 8));
  return;
}



/* Entry: 000e7fcc; end: 000e801b;  */

void FUN_000e7fcc(void)

{
  FUN_000e4288();
  return;
}



/* Entry: 000e801c; end: 000e803f;  */

void FUN_000e801c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000e4a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))(param_1);
  return;
}



/* Entry: 000e8040; end: 000e8067;  */

void FUN_000e8040(void)

{
  FUN_000e3fac();
  return;
}



/* Entry: 000e8068; end: 000e80cb;  */

void FUN_000e8068(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_1;
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 000e80cc; end: 000e811b;  */

void FUN_000e80cc(void)

{
  FUN_000e4244();
  return;
}



/* Entry: 000e811c; end: 000e8143;  */

uint FUN_000e811c(int param_1,uint param_2)

{
  return param_2 & 0xff | param_1 << 3;
}



/* Entry: 000e8144; end: 000e815b;  */

ulong FUN_000e8144(ulong param_1)

{
  func_0x000e81d8();
  return param_1 & 0xffffffffff;
}



/* Entry: 000e815c; end: 000e819b;  */

undefined8 FUN_000e815c(ulong param_1)

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



/* Entry: 000e819c; end: 000e81cb;  */

void FUN_000e819c(undefined4 *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  func_0x000e81d8();
  *param_1 = (int)uVar1;
  *(char *)(param_1 + 1) = (char)(uVar1 >> 0x20);
  return;
}



/* Entry: 000e81cc; end: 000e8203;  */

void FUN_000e81cc(undefined4 *param_1)

{
  undefined4 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 000e8204; end: 000e8263;  */

uint FUN_000e8204(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 8),param_3,&UNK_008441f0,&UNK_00844200);
  __sSL1loiySbx_xtFZTj(param_1,param_2,uVar1,param_5);
  return (uint)param_1 & 1;
}



/* Entry: 000e8264; end: 000e826b;  */

undefined8 FUN_000e8264(void)

{
  return 0;
}



/* Entry: 000e826c; end: 000e8297;  */

void FUN_000e826c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e8298; end: 000e82c3;  */

void FUN_000e8298(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x28))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e82c4; end: 000e82ef;  */

void FUN_000e82c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 8))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e82f0; end: 000e831b;  */

void FUN_000e82f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  (**(code **)(param_5 + 0x98))(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 000e831c; end: 000e8347;  */

void FUN_000e831c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  (**(code **)(param_5 + 0x128))(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 000e8348; end: 000e834f;  */

void FUN_000e8348(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 000e8350; end: 000e83c7;  */

void FUN_000e8350(void)

{
  FUN_000e826c();
  return;
}



/* Entry: 000e83c8; end: 000e83cf;  */

undefined8 FUN_000e83c8(void)

{
  return 0;
}



/* Entry: 000e83d0; end: 000e83fb;  */

void FUN_000e83d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x38))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e83fc; end: 000e8427;  */

void FUN_000e83fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x40))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e8428; end: 000e8453;  */

void FUN_000e8428(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x10))(param_1,param_3,param_4);
  return;
}



/* Entry: 000e8454; end: 000e847f;  */

void FUN_000e8454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  (**(code **)(param_5 + 0xa0))(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 000e8480; end: 000e84ab;  */

void FUN_000e8480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  (**(code **)(param_5 + 0x130))(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 000e84ac; end: 000e84b3;  */

void FUN_000e84ac(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 000e84b4; end: 000e852b;  */

void FUN_000e84b4(void)

{
  FUN_000e83d0();
  return;
}


