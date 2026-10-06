/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10455a804; end: 10455a81b;  */

undefined8 FUN_10455a804(void)

{
  return 1;
}



/* Entry: 10455a81c; end: 10455a83f;  */

void FUN_10455a81c(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_10455a064);
  return;
}



/* Entry: 10455a840; end: 10455a873;  */

uint FUN_10455a840(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = *(long *)(param_3 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar3,uVar1,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(lVar3,uVar1,uVar2,&UNK_10e814078,&UNK_10e814080);
  __sSQ2eeoiySbx_xtFZTj(param_1,param_2,uVar2,*(undefined8 *)(lVar3 + 8));
  return (uint)param_1 & 1;
}



/* Entry: 10455a874; end: 10455a897;  */

void FUN_10455a874(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_10455e06c);
  return;
}



/* Entry: 10455a898; end: 10455a8a3;  */

uint FUN_10455a898(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint unaff_w20;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_10455d55c(param_1,auStack_88);
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_60,auStack_88,uVar1,param_2,7);
  (*(code *)0x10455e8a0)();
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_60,param_2);
  return unaff_w20 & 1;
}



/* Entry: 10455a8a4; end: 10455a987;  */

void FUN_10455a8a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,&UNK_10e814078,&UNK_10e814088);
  lVar5 = lVar6;
  __sSa5countSivg(lVar6,uVar4);
  if (0 < lVar5) {
    lVar5 = unaff_x20[4];
    lVar3 = unaff_x20[5];
    func_0x0001000a8868(unaff_x20 + 1,lVar5);
    (**(code **)(lVar3 + 8))(lVar5,lVar3);
    (**(code **)(lVar2 + 0x38))(lVar6,lVar5,param_1,param_3,param_4,uVar1,lVar2);
  }
  return;
}



/* Entry: 10455a988; end: 10455a9ab;  */

void FUN_10455a988(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_10455e99c(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455a9ac; end: 10455a9cf;  */

void FUN_10455a9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455a8a4(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455a9d0; end: 10455a9e7;  */

undefined8 FUN_10455a9d0(void)

{
  return 1;
}



/* Entry: 10455a9e8; end: 10455aa0b;  */

void FUN_10455a9e8(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_10455e06c);
  return;
}



/* Entry: 10455aa0c; end: 10455aa13;  */

void FUN_10455aa0c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*unaff_x20);
  return;
}



/* Entry: 10455aa14; end: 10455aa3b;  */

void FUN_10455aa14(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10455aa3c; end: 10455aa4f;  */

undefined8 FUN_10455aa3c(void)

{
  return 0x10455aa4c;
}



/* Entry: 10455aa50; end: 10455aa6b;  */

void FUN_10455aa50(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10455d55c(unaff_x20 + 8,param_1);
  return;
}



/* Entry: 10455aa6c; end: 10455aa97;  */

undefined8 * FUN_10455aa6c(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001000834e4(unaff_x20 + 8);
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[4];
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 8) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  return (undefined8 *)(unaff_x20 + 8);
}



/* Entry: 10455aa98; end: 10455aaaf;  */

undefined1  [16] FUN_10455aa98(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10455aaa8;
  return auVar1;
}



/* Entry: 10455aab0; end: 10455ab37;  */

void FUN_10455aab0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_4,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(param_4,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSQRzlE2eeoiySbSayxG_ABtFZ_11034dcc8)
            (uVar2,uVar3,uVar1,*(undefined8 *)(param_4 + 8));
  return;
}



/* Entry: 10455ab38; end: 10455ab5b;  */

void FUN_10455ab38(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0x10455e078);
  return;
}



/* Entry: 10455ab5c; end: 10455ab5f;  */

void FUN_10455ab5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,uVar1,uVar2,&UNK_10e814078,&UNK_10e814080);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_11034dcb8)(param_1,uVar4,uVar2,uVar3);
  return;
}



/* Entry: 10455ab60; end: 10455abe7;  */

void FUN_10455ab60(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar1,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,uVar1,uVar2,&UNK_10e814078,&UNK_10e814080);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_11034dcb8)(param_1,uVar4,uVar2,uVar3);
  return;
}



/* Entry: 10455abe8; end: 10455abf3;  */

uint FUN_10455abe8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint unaff_w20;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_10455d55c(param_1,auStack_88);
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_60,auStack_88,uVar1,param_2,7);
  (*(code *)0x10455aaac)();
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_60,param_2);
  return unaff_w20 & 1;
}



/* Entry: 10455abf4; end: 10455ac83;  */

uint FUN_10455abf4(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  uint unaff_w20;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_10455d55c(param_1,auStack_88);
  uVar1 = 0x113085040;
  func_0x0001000285a8(0x113085040,&UNK_10dd16f30);
  _swift_dynamicCast(auStack_60,auStack_88,uVar1,param_2,7);
  (*param_3)();
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_60,param_2);
  return unaff_w20 & 1;
}



/* Entry: 10455ac84; end: 10455acb7;  */

void FUN_10455ac84(undefined8 param_1,long param_2)

{
  (**(code **)(*(long *)(param_2 + 0x18) + 0x28))();
  return;
}



/* Entry: 10455acb8; end: 10455accb;  */

void FUN_10455acb8(void)

{
  FUN_10455accc();
  return;
}



/* Entry: 10455accc; end: 10455adbf;  */

void FUN_10455accc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_6,param_4,&UNK_10e814078,&UNK_10e814088);
  uVar2 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar1);
  auStack_88[0] = uVar2;
  (**(code **)(param_6 + 0x28))(auStack_88,param_3,param_5,param_7,param_4,param_6);
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



/* Entry: 10455adc0; end: 10455aea3;  */

void FUN_10455adc0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,&UNK_10e814078,&UNK_10e814088);
  lVar5 = lVar6;
  __sSa5countSivg(lVar6,uVar4);
  if (0 < lVar5) {
    lVar5 = unaff_x20[4];
    lVar3 = unaff_x20[5];
    func_0x0001000a8868(unaff_x20 + 1,lVar5);
    (**(code **)(lVar3 + 8))(lVar5,lVar3);
    (**(code **)(lVar2 + 0x40))(lVar6,lVar5,param_1,param_3,param_4,uVar1,lVar2);
  }
  return;
}



/* Entry: 10455aea4; end: 10455aeaf;  */

void FUN_10455aea4(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_10455ab5c(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455aeb0; end: 10455aeff;  */

void FUN_10455aeb0(undefined8 param_1,code *param_2)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  (*param_2)(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455af00; end: 10455af17;  */

undefined8 FUN_10455af00(void)

{
  return 0x10455af10;
}



/* Entry: 10455af18; end: 10455af3b;  */

void FUN_10455af18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455adc0(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455af3c; end: 10455af53;  */

undefined8 FUN_10455af3c(void)

{
  return 1;
}



/* Entry: 10455af54; end: 10455af9f;  */

void FUN_10455af54(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*param_4)(auStack_78,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455afa0; end: 10455afc3;  */

void FUN_10455afa0(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0x10455e078);
  return;
}



/* Entry: 10455afc4; end: 10455b00b;  */

void FUN_10455afc4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010455afd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))(param_1);
  return;
}



/* Entry: 10455b00c; end: 10455b043;  */

undefined8 * FUN_10455b00c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x24);
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



/* Entry: 10455b044; end: 10455b05b;  */

undefined1  [16] FUN_10455b044(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x24);
  auVar1._0_8_ = 0x10455b058;
  return auVar1;
}



/* Entry: 10455b05c; end: 10455b087;  */

uint FUN_10455b05c(uint param_1)

{
  __sSQ2eeoiySbx_xtFZTj();
  return param_1 & 1;
}



/* Entry: 10455b088; end: 10455b0eb;  */

void FUN_10455b088(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10455d5a0(0,param_4,param_5);
  FUN_1045574a0(param_2,param_1 + *(int *)(lVar1 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x00010455b0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 10455b0ec; end: 10455b10f;  */

void FUN_10455b0ec(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_10455d5a0);
  return;
}



/* Entry: 10455b110; end: 10455b11f;  */

void FUN_10455b110(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb758c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSH4hash4intoys6HasherVz_tFTj_11034d7c0)
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(*(long *)(param_2 + 0x18) + 8))
  ;
  return;
}



/* Entry: 10455b120; end: 10455b1df;  */

uint FUN_10455b120(undefined8 param_1,long param_2)

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



/* Entry: 10455b1e0; end: 10455b37f;  */

void FUN_10455b1e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
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



/* Entry: 10455b380; end: 10455b5db;  */

void FUN_10455b380(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar3 = 0;
  puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSqMa(0,lVar5);
  lStack_80 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar11 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar11 - extraout_x12;
  lVar4 = 0;
  FUN_10455d5a0(0,param_4,param_6);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
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
      FUN_1045574a0(param_2,lStack_78 + *(int *)(lVar4 + 0x24));
      (*pcVar6)(lVar5,puVar1,param_4);
      uVar7 = uStack_90;
      (**(code **)(lVar10 + 0x20))(uStack_90,lVar5,lVar4);
    }
    else {
      func_0x0001000834e4(param_2);
      (**(code **)(lVar5 + 8))(lVar11,lVar3);
      uVar7 = uStack_90;
    }
    (**(code **)(lVar10 + 0x38))(uVar7,!bVar2,1,lVar4);
  }
  else {
    func_0x0001000834e4(param_2);
    (**(code **)(lStack_80 + 8))(lVar8,lVar3);
  }
  return;
}



/* Entry: 10455b5dc; end: 10455b677;  */

void FUN_10455b5dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + *(int *)(param_2 + 0x24);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  (**(code **)(param_4 + 0x80))();
  return;
}



/* Entry: 10455b678; end: 10455b6bf;  */

void FUN_10455b678(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSH4hash4intoys6HasherVz_tFTj
            (auStack_68,*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(*(long *)(param_1 + 0x18) + 8));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455b6c0; end: 10455b6df;  */

undefined8 FUN_10455b6c0(void)

{
  return 0x10455b6d0;
}



/* Entry: 10455b6e0; end: 10455b6ff;  */

void FUN_10455b6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  FUN_10455b380(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
                *(undefined8 *)(param_5 + 0x18),param_4);
  return;
}



/* Entry: 10455b700; end: 10455b703;  */

uint FUN_10455b700(undefined8 param_1,long param_2)

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



/* Entry: 10455b704; end: 10455b74b;  */

void FUN_10455b704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455b1e0(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455b74c; end: 10455b763;  */

undefined8 FUN_10455b74c(void)

{
  return 1;
}



/* Entry: 10455b764; end: 10455b787;  */

void FUN_10455b764(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_10455d5a0);
  return;
}



/* Entry: 10455b788; end: 10455b7bb;  */

uint FUN_10455b788(undefined8 param_1,undefined8 param_2,long param_3)

{
  __sSQ2eeoiySbx_xtFZTj
            (param_1,param_2,*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + 8));
  return (uint)param_1 & 1;
}



/* Entry: 10455b7bc; end: 10455b7df;  */

void FUN_10455b7bc(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_10455e0f8);
  return;
}



/* Entry: 10455b7e0; end: 10455b89f;  */

void FUN_10455b7e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
    (**(code **)(param_4 + 0x110))
              (lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  }
  return;
}



/* Entry: 10455b8a0; end: 10455b8b3;  */

undefined8 FUN_10455b8a0(void)

{
  return 0x10455b8b0;
}



/* Entry: 10455b8b4; end: 10455b8d7;  */

void FUN_10455b8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455b7e0(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455b8d8; end: 10455b8eb;  */

undefined8 FUN_10455b8d8(void)

{
  return 1;
}



/* Entry: 10455b8ec; end: 10455b90f;  */

void FUN_10455b8ec(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),FUN_10455e0f8);
  return;
}



/* Entry: 10455b910; end: 10455b94b;  */

undefined8 FUN_10455b910(void)

{
  return 0x10455b920;
}



/* Entry: 10455b94c; end: 10455b96f;  */

void FUN_10455b94c(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0x10455e104);
  return;
}



/* Entry: 10455b970; end: 10455b987;  */

void FUN_10455b970(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSasSHRzlE4hash4intoys6HasherVz_tF_11034dcb8)
            (param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),
             *(undefined8 *)(*(long *)(param_2 + 0x18) + 8));
  return;
}



/* Entry: 10455b988; end: 10455ba13;  */

uint FUN_10455b988(undefined8 param_1,long param_2)

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
             *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 10455ba14; end: 10455ba4f;  */

void FUN_10455ba14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 400))(param_1);
  return;
}



/* Entry: 10455ba50; end: 10455ba63;  */

void FUN_10455ba50(void)

{
  FUN_10455ba64();
  return;
}



/* Entry: 10455ba64; end: 10455bb37;  */

void FUN_10455ba64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 10455bb38; end: 10455bbf7;  */

void FUN_10455bb38(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
    (**(code **)(param_4 + 400))(lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
  }
  return;
}



/* Entry: 10455bbf8; end: 10455bbfb;  */

void FUN_10455bbf8(long param_1)

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



/* Entry: 10455bbfc; end: 10455bc47;  */

void FUN_10455bbfc(long param_1)

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



/* Entry: 10455bc48; end: 10455bc5b;  */

undefined8 FUN_10455bc48(void)

{
  return 0x10455bc58;
}



/* Entry: 10455bc5c; end: 10455bc7f;  */

void FUN_10455bc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455bb38(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455bc80; end: 10455bc93;  */

undefined8 FUN_10455bc80(void)

{
  return 1;
}



/* Entry: 10455bc94; end: 10455bcb7;  */

void FUN_10455bc94(long param_1)

{
  FUN_10455d5ac(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0x10455e104);
  return;
}



/* Entry: 10455bcb8; end: 10455bce3;  */

undefined8 FUN_10455bcb8(void)

{
  return 0x10455bcc8;
}



/* Entry: 10455bce4; end: 10455bd07;  */

uint FUN_10455bce4(uint param_1)

{
  __sSQ2eeoiySbx_xtFZTj();
  return param_1 & 1;
}



/* Entry: 10455bd08; end: 10455bd13;  */

void FUN_10455bd08(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10455d5ec(0,param_4,param_5,param_6);
  FUN_1045574a0(param_2,param_1 + *(int *)(lVar1 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x00010455c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_3,param_4);
  return;
}



/* Entry: 10455bd14; end: 10455bd3b;  */

void FUN_10455bd14(long param_1)

{
  FUN_10455d604(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),FUN_10455d5ec);
  return;
}



/* Entry: 10455bd3c; end: 10455bd4b;  */

void FUN_10455bd3c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010455bd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x50))(param_1,*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 10455bd4c; end: 10455be03;  */

uint FUN_10455bd4c(undefined8 param_1,long param_2)

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



/* Entry: 10455be04; end: 10455bfb7;  */

void FUN_10455be04(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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



/* Entry: 10455bfb8; end: 10455c227;  */

void FUN_10455bfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
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
  FUN_10455d5ec(0,param_4,param_6,param_7);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
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



/* Entry: 10455c228; end: 10455c2c7;  */

void FUN_10455c228(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  (**(code **)(param_4 + 0x88))();
  return;
}



/* Entry: 10455c2c8; end: 10455c313;  */

void FUN_10455c2c8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x50))(auStack_68,*(undefined8 *)(param_1 + 0x10));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455c314; end: 10455c337;  */

undefined8 FUN_10455c314(void)

{
  return 0x10455c324;
}



/* Entry: 10455c338; end: 10455c35f;  */

void FUN_10455c338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  FUN_10455bfb8(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,
                *(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x20),param_4);
  return;
}



/* Entry: 10455c360; end: 10455c363;  */

uint FUN_10455c360(undefined8 param_1,long param_2)

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



/* Entry: 10455c364; end: 10455c3ab;  */

void FUN_10455c364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455be04(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455c3ac; end: 10455c3bb;  */

void FUN_10455c3ac(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x50))(auStack_68,*(undefined8 *)(param_1 + 0x10));
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455c3bc; end: 10455c3e3;  */

void FUN_10455c3bc(long param_1)

{
  FUN_10455d604(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),FUN_10455d5ec);
  return;
}



/* Entry: 10455c3e4; end: 10455c423;  */

uint FUN_10455c3e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  __sSQ2eeoiySbx_xtFZTj
            (param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 10455c424; end: 10455c44b;  */

void FUN_10455c424(long param_1)

{
  FUN_10455d604(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),0x10455e110);
  return;
}



/* Entry: 10455c44c; end: 10455c59f;  */

void FUN_10455c44c(undefined8 param_1,long param_2)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = *unaff_x20;
  lVar5 = lVar4;
  _swift_bridgeObjectRetain();
  __sSa8endIndexSivg();
  if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
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
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10455c5a0);
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



/* Entry: 10455c5a0; end: 10455c623;  */

uint FUN_10455c5a0(undefined8 param_1,long param_2)

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
            (uVar1,auStack_50[0],*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 10455c624; end: 10455c663;  */

void FUN_10455c624(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x1a0))(param_1);
  return;
}



/* Entry: 10455c664; end: 10455c737;  */

void FUN_10455c664(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 10455c738; end: 10455c7f7;  */

void FUN_10455c738(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
    (**(code **)(param_4 + 0x118))
              (lVar4,lVar2,uVar3,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  }
  return;
}



/* Entry: 10455c7f8; end: 10455c817;  */

void FUN_10455c7f8(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_10455c44c(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10455c818; end: 10455c83b;  */

void FUN_10455c818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  FUN_10455c664(param_1,param_2,*(undefined8 *)(param_5 + 0x10),param_3,param_5,
                *(undefined8 *)(param_5 + 0x20),param_4);
  return;
}



/* Entry: 10455c83c; end: 10455c83f;  */

uint FUN_10455c83c(undefined8 param_1,long param_2)

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
            (uVar1,auStack_50[0],*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  (**(code **)(*(long *)(param_2 + -8) + 8))(auStack_50,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 10455c840; end: 10455c887;  */

void FUN_10455c840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10455c624(param_1,param_4,param_2,param_3);
  return;
}



/* Entry: 10455c888; end: 10455c897;  */

void FUN_10455c888(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_10455c44c(auStack_78,param_1);
  __ss6HasherV9_finalizeSiyF();
  return;
}


