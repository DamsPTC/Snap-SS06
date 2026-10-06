/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10448b6cc; end: 10448b6ff;  */

void FUN_10448b6cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 10448b700; end: 10448b713;  */

undefined1  [16] FUN_10448b700(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x10448b710;
  return auVar1;
}



/* Entry: 10448b714; end: 10448b727;  */

void FUN_10448b714(void)

{
  FUN_10448b2e8();
  return;
}



/* Entry: 10448b728; end: 10448b76f;  */

void FUN_10448b728(void)

{
  FUN_10448b434();
  return;
}



/* Entry: 10448b770; end: 10448b773;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10448b770(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10448b774; end: 10448b7ab;  */

uint FUN_10448b774(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010448cc8c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10448b7ac; end: 10448b81b;  */

uint FUN_10448b7ac(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_28 = param_1[0xf];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  FUN_10448c0d8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10448b81c; end: 10448b8bb;  */

void FUN_10448b81c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam000000011307de18 != -1) {
    _swift_once(0x11307de18,FUN_10448b2a0);
  }
  uVar5 = uRam0000000113813910;
  uVar4 = uRam0000000113813908;
  uVar3 = uRam0000000113813900;
  uVar2 = uRam00000001138138f8;
  uVar1 = uRam00000001138138f0;
  *param_1 = uRam00000001138138e8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10448b8bc; end: 10448b8f7;  */

void FUN_10448b8bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x11307de78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x11307de78,&UNK_10dd07b78);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10448b8f8; end: 10448ba23;  */

void FUN_10448b8f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_38 = unaff_x20[0xf];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_f8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_f8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10448ba24; end: 10448ba93;  */

uint FUN_10448ba24(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  FUN_10448c0d8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10448ba94; end: 10448bb03;  */

void FUN_10448ba94(void)

{
  __sSS6appendyySSF(0x496e65657263532e,0xeb000000006f666e);
  uRam0000000113813918 = 0xd00000000000002f;
  uRam0000000113813920 = 0x800000010f2020c0;
  return;
}



/* Entry: 10448bb04; end: 10448bb4b;  */

void FUN_10448bb04(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd07b80,0x47,2);
  uRam0000000113813930 = uStack_38;
  uRam0000000113813928 = uStack_40;
  uRam0000000113813940 = uStack_28;
  uRam0000000113813938 = uStack_30;
  uRam0000000113813950 = uStack_18;
  uRam0000000113813948 = uStack_20;
  return;
}



/* Entry: 10448bb4c; end: 10448bc17;  */

void FUN_10448bb4c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x18);
          goto LAB_10448bbe4;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x18);
          goto LAB_10448bbe4;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 4) goto LAB_10448bbf4;
          pcVar3 = *(code **)(param_3 + 0x48);
        }
LAB_10448bbe4:
        (*pcVar3)();
      }
LAB_10448bbf4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10448bc18; end: 10448bce3;  */

void FUN_10448bc18(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if (((((*unaff_x20 == 0) || ((**(code **)(param_3 + 8))(1,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 8))(2,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[2] == 0 ||
       ((**(code **)(param_3 + 0x18))(unaff_x20[2],3,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[3] == 0 ||
      ((**(code **)(param_3 + 0x18))(unaff_x20[3],4,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 6),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10448bce4; end: 10448bd33;  */

undefined8 FUN_10448bce4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11307de10;
  func_0x0001000285a8(0x11307de10,&UNK_10dd07950);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10448bd34; end: 10448bd43;  */

void FUN_10448bd34(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 10448bd44; end: 10448bd9f;  */

undefined1  [16] FUN_10448bd44(void)

{
  undefined1 auVar1 [16];
  
  if (lRam000000011307de28 != -1) {
    _swift_once(0x11307de28,FUN_10448ba94);
  }
  auVar1._8_8_ = uRam0000000113813920;
  auVar1._0_8_ = uRam0000000113813918;
  _swift_bridgeObjectRetain(uRam0000000113813920);
  return auVar1;
}



/* Entry: 10448bda0; end: 10448bda7;  */

undefined8 FUN_10448bda0(void)

{
  return 1;
}



/* Entry: 10448bda8; end: 10448bdd7;  */

undefined1  [16] FUN_10448bda8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10448bdd8; end: 10448be0b;  */

void FUN_10448bdd8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10448be0c; end: 10448be1f;  */

undefined1  [16] FUN_10448be0c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10448be1c;
  return auVar1;
}



/* Entry: 10448be20; end: 10448be47;  */

void FUN_10448be20(void)

{
  FUN_10448bb4c();
  return;
}



/* Entry: 10448be48; end: 10448be4b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10448be48(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10448be4c; end: 10448be83;  */

uint FUN_10448be4c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10448cc4c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10448be84; end: 10448bebf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10448be84(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  float *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  
  bVar8 = false;
  if ((*unaff_x20 == *param_1) && (bVar8 = false, !NAN(unaff_x20[1]) && !NAN(param_1[1]))) {
    bVar8 = unaff_x20[1] == param_1[1];
  }
  if ((!bVar8 || unaff_x20[2] != param_1[2]) || unaff_x20[3] != param_1[3]) {
    return (byte *)0x0;
  }
  pbVar11 = *(byte **)(unaff_x20 + 4);
  pbVar26 = *(byte **)(unaff_x20 + 6);
  lVar25 = *(long *)(param_1 + 4);
  uVar17 = *(ulong *)(param_1 + 6);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(float **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (float *)((ulong)pbVar26 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar25,uVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(float **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(float **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10448bec0; end: 10448bf5f;  */

void FUN_10448bec0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam000000011307de30 != -1) {
    _swift_once(0x11307de30,FUN_10448bb04);
  }
  uVar5 = uRam0000000113813950;
  uVar4 = uRam0000000113813948;
  uVar3 = uRam0000000113813940;
  uVar2 = uRam0000000113813938;
  uVar1 = uRam0000000113813930;
  *param_1 = uRam0000000113813928;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10448bf60; end: 10448bf9b;  */

void FUN_10448bf60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x11307de68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x11307de68,&UNK_10dd07b70);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10448bf9c; end: 10448c09f;  */

void FUN_10448bf9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_98,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10448c0a0; end: 10448c0d7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10448c0a0(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  
  bVar8 = false;
  if ((*param_1 == *param_2) && (bVar8 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar8 = param_1[1] == param_2[1];
  }
  if ((!bVar8 || param_1[2] != param_2[2]) || param_1[3] != param_2[3]) {
    return (byte *)0x0;
  }
  lVar25 = *(long *)(param_2 + 4);
  uVar17 = *(ulong *)(param_2 + 6);
  pbVar11 = *(byte **)(param_1 + 4);
  pbVar26 = *(byte **)(param_1 + 6);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar25,uVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10448c0d8; end: 10448c3e7;  */

ulong FUN_10448c0d8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar5 = param_1[0xd];
    uVar2 = param_1[0xc];
    uVar9 = param_1[0xf];
    uVar7 = param_1[0xe];
    uVar6 = param_2[0xd];
    uVar4 = param_2[0xc];
    uVar10 = param_2[0xf];
    uVar8 = param_2[0xe];
    uStack_a0 = uVar4;
    uStack_98 = uVar6;
    uStack_90 = uVar8;
    uStack_88 = uVar10;
    uStack_80 = uVar2;
    uStack_78 = uVar5;
    uStack_70 = uVar7;
    uStack_68 = uVar9;
    if (uVar9 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_10448c20c;
      if (((((float)uVar2 == (float)uVar4) && ((float)(uVar2 >> 0x20) == (float)(uVar4 >> 0x20))) &&
          ((int)uVar5 == (int)uVar6)) && ((uVar6 ^ uVar5) >> 0x20 == 0)) {
        FUN_10448bce4(&uStack_80,auStack_c0);
        FUN_10448bce4(&uStack_a0,auStack_c0);
        uVar3 = uVar7;
        func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
        func_0x00010448b284(uVar4,uVar6,uVar8,uVar10);
        if ((uVar3 & 1) != 0) goto LAB_10448c174;
      }
      else {
        FUN_10448bce4(&uStack_80,auStack_c0);
        FUN_10448bce4(&uStack_a0,auStack_c0);
        func_0x00010448b284(uVar4,uVar6,uVar8,uVar10);
      }
    }
    else {
      if (0xe < uVar10 >> 0x3c) {
        FUN_10448bce4(&uStack_80,auStack_c0);
        FUN_10448bce4(&uStack_a0,auStack_c0);
LAB_10448c174:
        func_0x00010448b284(uVar2,uVar5,uVar7,uVar9);
        uVar2 = param_1[2];
        if (((uVar2 == param_2[2]) && (param_1[3] == param_2[3])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uVar2 = param_1[4];
          if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)) {
            if ((char)param_2[7] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010448c1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_10dd07940)[param_2[6]] * 4 + 0x10448c1fc))();
              return uVar2;
            }
            if (param_1[6] == param_2[6]) {
              uVar2 = param_1[8];
              if (((uVar2 == param_2[8]) && (param_1[9] == param_2[9])) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar2 & 1) != 0)) {
                uVar2 = param_1[10];
                func_0x000100e25fcc(uVar2,param_1[0xb],param_2[10],param_2[0xb]);
                uVar1 = (uint)uVar2;
                goto LAB_10448c31c;
              }
            }
          }
        }
        goto LAB_10448c318;
      }
LAB_10448c20c:
      FUN_10448bce4(&uStack_80,auStack_c0);
      FUN_10448bce4(&uStack_a0,auStack_c0);
      func_0x00010448b284(uVar2,uVar5,uVar7,uVar9);
      uVar2 = uVar4;
      uVar5 = uVar6;
      uVar7 = uVar8;
      uVar9 = uVar10;
    }
    func_0x00010448b284(uVar2,uVar5,uVar7,uVar9);
  }
LAB_10448c318:
  uVar1 = 0;
LAB_10448c31c:
  return (ulong)(uVar1 & 1);
}



/* Entry: 10448c3e8; end: 10448c467;  */

void FUN_10448c3e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307de20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd079c8;
  _swift_getWitnessTable(&UNK_10dd079c8,&UNK_1107789c8);
  puRam000000011307de20 = puVar1;
  return;
}



/* Entry: 10448c468; end: 10448c48b;  */

void FUN_10448c468(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10448c48c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10448c48c; end: 10448c4cb;  */

void FUN_10448c48c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307de40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd079a0;
  _swift_getWitnessTable(&UNK_10dd079a0,&UNK_1107789c8);
  puRam000000011307de40 = puVar1;
  return;
}



/* Entry: 10448c4cc; end: 10448c4e3;  */

void FUN_10448c4cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10448c3e8();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10448999c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10448c4e4; end: 10448c523;  */

void FUN_10448c4e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307de48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07a08;
  _swift_getWitnessTable(&UNK_10dd07a08,&UNK_1107789c8);
  puRam000000011307de48 = puVar1;
  return;
}



/* Entry: 10448c524; end: 10448c547;  */

void FUN_10448c524(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10448c548();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10448c548; end: 10448c587;  */

void FUN_10448c548(void)

{
  undefined *puVar1;
  
  if (puRam000000011307de50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07a78;
  _swift_getWitnessTable(&UNK_10dd07a78,&UNK_110778a60);
  puRam000000011307de50 = puVar1;
  return;
}



/* Entry: 10448c588; end: 10448c59b;  */

void FUN_10448c588(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10448c428)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10448c5cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10448c59c; end: 10448c5cb;  */

void FUN_10448c59c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10448c5cc; end: 10448c60b;  */

void FUN_10448c5cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011307de58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd07a30;
  _swift_getWitnessTable(&DAT_10dd07a30,&UNK_110778a60);
  puRam000000011307de58 = puVar1;
  return;
}



/* Entry: 10448c60c; end: 10448c60f;  */

void FUN_10448c60c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307de60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07ae0;
  _swift_getWitnessTable(&UNK_10dd07ae0,&UNK_110778a60);
  puRam000000011307de60 = puVar1;
  return;
}



/* Entry: 10448c610; end: 10448c64f;  */

void FUN_10448c610(void)

{
  undefined *puVar1;
  
  if (puRam000000011307de60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07ae0;
  _swift_getWitnessTable(&UNK_10dd07ae0,&UNK_110778a60);
  puRam000000011307de60 = puVar1;
  return;
}



/* Entry: 10448c650; end: 10448c6b3;  */

/* WARNING: Possible PIC construction at 0x00010448c684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010448c688) */
/* WARNING: Removing unreachable block (ram,0x00010448c6a4) */
/* WARNING: Removing unreachable block (ram,0x00010448c698) */

void FUN_10448c650(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(ulong *)(param_1 + 0x58);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10448c6b4; end: 10448c787;  */

undefined8 * FUN_10448c6b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar3 = param_2[10];
  uVar2 = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[10] = uVar3;
  param_1[0xb] = uVar2;
  uVar4 = param_2[0xf];
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    uVar3 = param_2[0xe];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
  }
  else {
    uVar3 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
  }
  return param_1;
}



/* Entry: 10448c788; end: 10448c91b;  */

undefined8 * FUN_10448c788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar2;
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[10];
  uVar4 = param_2[0xb];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[10];
  uVar1 = param_1[0xb];
  param_1[10] = uVar2;
  param_1[0xb] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)((long)param_2 + 100);
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x6c);
      uVar2 = param_2[0xe];
      uVar4 = param_2[0xf];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0xe];
      uVar1 = param_1[0xf];
      param_1[0xe] = uVar2;
      param_1[0xf] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_1044881fc(param_1 + 0xc);
      uVar4 = param_2[0xc];
      uVar3 = param_2[0xf];
      uVar2 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      param_1[0xf] = uVar3;
      param_1[0xe] = uVar2;
    }
  }
  else if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)((long)param_2 + 100);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x6c);
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
  }
  else {
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
  }
  return param_1;
}



/* Entry: 10448c91c; end: 10448c9eb;  */

undefined8 * FUN_10448c91c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  uVar4 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  uVar4 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar4 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  uVar4 = param_1[10];
  uVar1 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar4,uVar1);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar2 = param_2[0xf];
    if (uVar2 >> 0x3c < 0xf) {
      uVar4 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar4;
      uVar4 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar2;
      func_0x00010006c090(uVar4);
      return param_1;
    }
    FUN_1044881fc(param_1 + 0xc);
  }
  uVar4 = param_2[0xc];
  uVar3 = param_2[0xf];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar1;
  return param_1;
}



/* Entry: 10448c9ec; end: 10448caaf;  */

int FUN_10448c9ec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10448cab0; end: 10448cb57;  */

undefined8 * FUN_10448cab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 10448cb58; end: 10448cb97;  */

undefined8 * FUN_10448cb58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x00010006c090(uVar3,uVar1);
  return param_1;
}



/* Entry: 10448cb98; end: 10448cc4b;  */

int FUN_10448cb98(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10448cc4c; end: 10448cccb;  */

void FUN_10448cc4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307de70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd07a4c;
  _swift_getWitnessTable(&DAT_10dd07a4c,&UNK_110778a60);
  puRam000000011307de70 = puVar1;
  return;
}



/* Entry: 10448cccc; end: 10448cce7;  */

long FUN_10448cccc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10448cce8; end: 10448cd17;  */

void FUN_10448cce8(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10448cf48();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10448cd18; end: 10448cd1f;  */

undefined8 FUN_10448cd18(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10448cd20; end: 10448cd93;  */

void FUN_10448cd20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11307df50;
  func_0x0001000285a8(0x11307df50,&UNK_10dd07c30);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10448cd94; end: 10448cd9f;  */

void FUN_10448cd94(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10448cda0; end: 10448ce4b;  */

void FUN_10448cda0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10448ce4c; end: 10448ce5f;  */

bool FUN_10448ce4c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10448ce60; end: 10448cea7;  */

void FUN_10448ce60(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd07da0,0xea,2);
  uRam0000000113813960 = uStack_38;
  uRam0000000113813958 = uStack_40;
  uRam0000000113813970 = uStack_28;
  uRam0000000113813968 = uStack_30;
  uRam0000000113813980 = uStack_18;
  uRam0000000113813978 = uStack_20;
  return;
}



/* Entry: 10448cea8; end: 10448cf47;  */

void FUN_10448cea8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam000000011307df58 != -1) {
    _swift_once(0x11307df58,FUN_10448ce60);
  }
  uVar5 = uRam0000000113813980;
  uVar4 = uRam0000000113813978;
  uVar3 = uRam0000000113813970;
  uVar2 = uRam0000000113813968;
  uVar1 = uRam0000000113813960;
  *param_1 = uRam0000000113813958;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10448cf48; end: 10448cf53;  */

void FUN_10448cf48(void)

{
  return;
}



/* Entry: 10448cf54; end: 10448cf7f;  */

void FUN_10448cf54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10448cf80();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010448cfc0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10448cf80; end: 10448cfff;  */

void FUN_10448cf80(void)

{
  undefined *puVar1;
  
  if (puRam000000011307df60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07cd0;
  _swift_getWitnessTable(&UNK_10dd07cd0,&UNK_110778be0);
  puRam000000011307df60 = puVar1;
  return;
}



/* Entry: 10448d000; end: 10448d003;  */

void FUN_10448d000(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011307df70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11307df78;
  func_0x00010002969c(0x11307df78,&UNK_10dd07c58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011307df70 = puVar2;
  return;
}



/* Entry: 10448d004; end: 10448d053;  */

void FUN_10448d004(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011307df70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11307df78;
  func_0x00010002969c(0x11307df78,&UNK_10dd07c58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011307df70 = puVar2;
  return;
}



/* Entry: 10448d054; end: 10448d057;  */

void FUN_10448d054(void)

{
  undefined *puVar1;
  
  if (puRam000000011307df80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07d10;
  _swift_getWitnessTable(&UNK_10dd07d10,&UNK_110778be0);
  puRam000000011307df80 = puVar1;
  return;
}



/* Entry: 10448d058; end: 10448d097;  */

void FUN_10448d058(void)

{
  undefined *puVar1;
  
  if (puRam000000011307df80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07d10;
  _swift_getWitnessTable(&UNK_10dd07d10,&UNK_110778be0);
  puRam000000011307df80 = puVar1;
  return;
}



/* Entry: 10448d098; end: 10448d137;  */

int FUN_10448d098(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10448d138; end: 10448d177;  */

void FUN_10448d138(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "MEMORIES";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("MEMORIES",8,2);
  pcRam0000000113813990 = pcVar1;
  return;
}



/* Entry: 10448d178; end: 10448d193; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts memories] */

void FUN_10448d178(void)

{
  if (lRam000000011363c898 != -1) {
    func_0x000107c61568(0x11363c898,FUN_10448d138);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813990);
  return;
}



/* Entry: 10448d194; end: 10448d1d3;  */

undefined8 FUN_10448d194(void)

{
  if (lRam000000011363c8a0 != -1) {
    _swift_once(0x11363c8a0,&UNK_1000e2a00);
  }
  return 0x113813998;
}



/* Entry: 10448d1d4; end: 10448d213;  */

void FUN_10448d1d4(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "PROFILE";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("PROFILE",7,2);
  pcRam00000001138139b0 = pcVar1;
  return;
}



/* Entry: 10448d214; end: 10448d22f; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts profile] */

void FUN_10448d214(void)

{
  if (lRam000000011363c8b8 != -1) {
    func_0x000107c61568(0x11363c8b8,FUN_10448d1d4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139b0);
  return;
}



/* Entry: 10448d230; end: 10448d26f;  */

void FUN_10448d230(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "ADDEDME";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("ADDEDME",7,2);
  pcRam00000001138139b8 = pcVar1;
  return;
}



/* Entry: 10448d270; end: 10448d28b; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts addedMe] */

void FUN_10448d270(void)

{
  if (lRam000000011363c8c0 != -1) {
    func_0x000107c61568(0x11363c8c0,FUN_10448d230);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139b8);
  return;
}



/* Entry: 10448d28c; end: 10448d2cb;  */

void FUN_10448d28c(void)

{
  undefined *puVar1;
  
  func_0x0001000e2834(0);
  puVar1 = &DAT_10f32a0d1;
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC(&DAT_10f32a0d1,8,2);
  puRam00000001138139c0 = puVar1;
  return;
}



/* Entry: 10448d2cc; end: 10448d2e7; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts quickAdd] */

void FUN_10448d2cc(void)

{
  if (lRam000000011363c8c8 != -1) {
    func_0x000107c61568(0x11363c8c8,FUN_10448d28c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139c0);
  return;
}



/* Entry: 10448d2e8; end: 10448d327;  */

void FUN_10448d2e8(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "ADDNEARBY";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("ADDNEARBY",9,2);
  pcRam00000001138139c8 = pcVar1;
  return;
}



/* Entry: 10448d328; end: 10448d343; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts addNearby] */

void FUN_10448d328(void)

{
  if (lRam000000011363c8d0 != -1) {
    func_0x000107c61568(0x11363c8d0,FUN_10448d2e8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139c8);
  return;
}



/* Entry: 10448d344; end: 10448d383;  */

void FUN_10448d344(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "ADDBYUSERNAME";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("ADDBYUSERNAME",0xd,2);
  pcRam00000001138139d0 = pcVar1;
  return;
}



/* Entry: 10448d384; end: 10448d39f; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts addByUsername] */

void FUN_10448d384(void)

{
  if (lRam000000011363c8d8 != -1) {
    func_0x000107c61568(0x11363c8d8,FUN_10448d344);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139d0);
  return;
}



/* Entry: 10448d3a0; end: 10448d3df;  */

void FUN_10448d3a0(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "MYFRIENDS";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("MYFRIENDS",9,2);
  pcRam00000001138139d8 = pcVar1;
  return;
}



/* Entry: 10448d3e0; end: 10448d3fb; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts myFriends] */

void FUN_10448d3e0(void)

{
  if (lRam000000011363c8e0 != -1) {
    func_0x000107c61568(0x11363c8e0,FUN_10448d3a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139d8);
  return;
}



/* Entry: 10448d3fc; end: 10448d43b;  */

void FUN_10448d3fc(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "MINIPROFILE";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("MINIPROFILE",0xb,2);
  pcRam00000001138139e0 = pcVar1;
  return;
}



/* Entry: 10448d43c; end: 10448d457; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts miniProfile] */

void FUN_10448d43c(void)

{
  if (lRam000000011363c8e8 != -1) {
    func_0x000107c61568(0x11363c8e8,FUN_10448d3fc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139e0);
  return;
}



/* Entry: 10448d458; end: 10448d497;  */

void FUN_10448d458(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "CHATBURGER";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("CHATBURGER",10,2);
  pcRam00000001138139e8 = pcVar1;
  return;
}



/* Entry: 10448d498; end: 10448d4b3; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts chatburger] */

void FUN_10448d498(void)

{
  if (lRam000000011363c8f0 != -1) {
    func_0x000107c61568(0x11363c8f0,FUN_10448d458);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139e8);
  return;
}



/* Entry: 10448d4b4; end: 10448d4f3;  */

void FUN_10448d4b4(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "SNAPADS";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("SNAPADS",7,2);
  pcRam00000001138139f0 = pcVar1;
  return;
}



/* Entry: 10448d4f4; end: 10448d50f; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts snapAds] */

void FUN_10448d4f4(void)

{
  if (lRam000000011363c8f8 != -1) {
    func_0x000107c61568(0x11363c8f8,FUN_10448d4b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139f0);
  return;
}



/* Entry: 10448d510; end: 10448d54f;  */

void FUN_10448d510(void)

{
  undefined *puVar1;
  
  func_0x0001000e2834(0);
  puVar1 = &DAT_10f39a0d5;
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC(&DAT_10f39a0d5,0xc,2);
  puRam00000001138139f8 = puVar1;
  return;
}



/* Entry: 10448d550; end: 10448d56b; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts notification] */

void FUN_10448d550(void)

{
  if (lRam000000011363c900 != -1) {
    func_0x000107c61568(0x11363c900,FUN_10448d510);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138139f8);
  return;
}



/* Entry: 10448d56c; end: 10448d5ab;  */

void FUN_10448d56c(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "SENDTO";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("SENDTO",6,2);
  pcRam0000000113813a00 = pcVar1;
  return;
}



/* Entry: 10448d5ac; end: 10448d5c7; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts sendTo] */

void FUN_10448d5ac(void)

{
  if (lRam000000011363c908 != -1) {
    func_0x000107c61568(0x11363c908,FUN_10448d56c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813a00);
  return;
}



/* Entry: 10448d5c8; end: 10448d607;  */

void FUN_10448d5c8(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "SNAPODG";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("SNAPODG",7,2);
  pcRam0000000113813a08 = pcVar1;
  return;
}



/* Entry: 10448d608; end: 10448d623; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts onDemandGeofilter] */

void FUN_10448d608(void)

{
  if (lRam000000011363c910 != -1) {
    func_0x000107c61568(0x11363c910,FUN_10448d5c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813a08);
  return;
}



/* Entry: 10448d624; end: 10448d663;  */

void FUN_10448d624(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "CONTEXT";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("CONTEXT",7,2);
  pcRam0000000113813a18 = pcVar1;
  return;
}



/* Entry: 10448d664; end: 10448d67f; +[_TtC25SCNetworkingContextHelper27SCNetworkingRequestContexts contextMenu] */

void FUN_10448d664(void)

{
  if (lRam000000011363c920 != -1) {
    func_0x000107c61568(0x11363c920,FUN_10448d624);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813a18);
  return;
}



/* Entry: 10448d680; end: 10448d6bf;  */

void FUN_10448d680(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "MAP";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("MAP",3,2);
  pcRam0000000113813a20 = pcVar1;
  return;
}



/* Entry: 10448d6c0; end: 10448d6ff;  */

undefined8 FUN_10448d6c0(void)

{
  if (lRam000000011363c928 != -1) {
    _swift_once(0x11363c928,FUN_10448d680);
  }
  return 0x113813a20;
}


