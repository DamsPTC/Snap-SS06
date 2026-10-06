/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016340c8; end: 10163421b;  */

void FUN_1016340c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  lVar1 = param_1;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    FUN_101637648();
    (*pcVar3)(lVar2,1,&UNK_1103ec750,lVar1,param_2,param_3);
    lVar1 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar2 = unaff_x20[1];
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    func_0x000101637688();
    (*pcVar3)(lVar2,2,&UNK_1103ec800,lVar1,param_2,param_3);
    lVar1 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar2 = unaff_x20[2];
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    func_0x0001016376c8();
    (*pcVar3)(lVar2,3,&UNK_1103ec898,lVar1,param_2,param_3);
    lVar1 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar2 = unaff_x20[3];
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    func_0x000101637708();
    (*pcVar3)(lVar2,4,&UNK_1103ec9c8,lVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  return;
}



/* Entry: 10163421c; end: 101634263;  */

uint FUN_10163421c(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_288 [184];
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_1c8 = puVar7[1];
        uStack_1d0 = *puVar7;
        uStack_1b8 = puVar7[3];
        uStack_1c0 = puVar7[2];
        uStack_1a8 = puVar7[5];
        uStack_1b0 = puVar7[4];
        uStack_198 = puVar7[7];
        uStack_1a0 = puVar7[6];
        uStack_188 = puVar7[9];
        uStack_190 = puVar7[8];
        uStack_178 = puVar7[0xb];
        uStack_180 = puVar7[10];
        uStack_168 = puVar7[0xd];
        uStack_170 = puVar7[0xc];
        uStack_158 = puVar7[0xf];
        uStack_160 = puVar7[0xe];
        uStack_148 = puVar7[0x11];
        uStack_150 = puVar7[0x10];
        uStack_138 = puVar7[0x13];
        uStack_140 = puVar7[0x12];
        uStack_128 = puVar7[0x15];
        uStack_130 = puVar7[0x14];
        uStack_120 = puVar7[0x16];
        uStack_108 = puVar8[1];
        uStack_110 = *puVar8;
        uStack_f8 = puVar8[3];
        uStack_100 = puVar8[2];
        uStack_e8 = puVar8[5];
        uStack_f0 = puVar8[4];
        uStack_d8 = puVar8[7];
        uStack_e0 = puVar8[6];
        uStack_c8 = puVar8[9];
        uStack_d0 = puVar8[8];
        uStack_b8 = puVar8[0xb];
        uStack_c0 = puVar8[10];
        uStack_a8 = puVar8[0xd];
        uStack_b0 = puVar8[0xc];
        uStack_98 = puVar8[0xf];
        uStack_a0 = puVar8[0xe];
        uStack_88 = puVar8[0x11];
        uStack_90 = puVar8[0x10];
        uStack_78 = puVar8[0x13];
        uStack_80 = puVar8[0x12];
        uStack_68 = puVar8[0x15];
        uStack_70 = puVar8[0x14];
        uStack_60 = puVar8[0x16];
        func_0x000101639b9c(&uStack_1d0,auStack_288);
        func_0x000101639b9c(&uStack_110,auStack_288);
        puVar2 = &uStack_1d0;
        func_0x000101637934(puVar2,&uStack_110);
        func_0x000101639bd0(&uStack_110);
        func_0x000101639bd0(&uStack_1d0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_101637e78;
        puVar8 = puVar8 + 0x17;
        puVar7 = puVar7 + 0x17;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    FUN_101636868(uVar3,param_2[1]);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[2];
      FUN_101636d88(uVar3,param_2[2]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[3];
        FUN_101636f50(uVar3,param_2[3]);
        if ((uVar3 & 1) != 0) {
          lVar6 = param_1[4];
          FUN_100e25fcc(lVar6,param_1[5],param_2[4],param_2[5]);
          uVar1 = (uint)lVar6;
          goto LAB_101637e7c;
        }
      }
    }
  }
LAB_101637e78:
  uVar1 = 0;
LAB_101637e7c:
  return uVar1 & 1;
}



/* Entry: 101634264; end: 101634293;  */

undefined1  [16] FUN_101634264(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 101634294; end: 1016342c7;  */

void FUN_101634294(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1016342c8; end: 1016342db;  */

undefined1  [16] FUN_1016342c8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1016342d8;
  return auVar1;
}



/* Entry: 1016342dc; end: 101634303;  */

void FUN_1016342dc(void)

{
  FUN_101633f8c();
  return;
}



/* Entry: 101634304; end: 101634307;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101634304(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101634308; end: 10163433f;  */

uint FUN_101634308(long param_1,long param_2)

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
  func_0x000101639afc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 101634340; end: 101634387;  */

uint FUN_101634340(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_101637d28(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101634388; end: 101634427;  */

/* WARNING: Possible PIC construction at 0x0001016343d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016343e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016343d8) */
/* WARNING: Removing unreachable block (ram,0x0001016343e8) */

void FUN_101634388(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbb58 != -1) {
    func_0x000107c61568(0x112dbbb58,FUN_101633f44);
  }
  uVar5 = uRam0000000113801fa0;
  uVar4 = uRam0000000113801f98;
  uVar3 = uRam0000000113801f90;
  uVar2 = uRam0000000113801f88;
  uVar1 = uRam0000000113801f80;
  *param_1 = uRam0000000113801f78;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101634428; end: 101634463;  */

void FUN_101634428(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbbcf0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbbcf0,&UNK_10d9727b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101634464; end: 101634567;  */

void FUN_101634464(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101634568; end: 1016345f3;  */

uint FUN_101634568(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_101637d28(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1016345f4; end: 101634767;  */

/* WARNING: Removing unreachable block (ram,0x000101634764) */
/* WARNING: Removing unreachable block (ram,0x0001016346fc) */

void FUN_1016345f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000101637edc();
        (*pcVar3)(unaff_x20 + 0x30,&UNK_1103ec648,uVar1,param_2,param_3);
        goto LAB_101634754;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x138);
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x138);
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 0xb:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 0xc:
        pcVar3 = *(code **)(param_3 + 0x150);
        break;
      case 0xd:
        pcVar3 = *(code **)(param_3 + 0x138);
        break;
      default:
        goto LAB_101634754;
      }
      (*pcVar3)();
LAB_101634754:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101634768; end: 101634a2b;  */

void FUN_101634768(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar3,1,param_2,param_3), unaff_x21 == 0)) {
    uVar3 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar3,2,param_2,param_3), unaff_x21 == 0)) {
      uVar3 = unaff_x20[4];
      uVar2 = unaff_x20[5];
      uVar1 = uVar3 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(uVar3,uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        if (unaff_x20[6] != 0) {
          uStack_48 = (undefined1)unaff_x20[7];
          pcVar4 = *(code **)(param_3 + 0x80);
          uStack_50 = unaff_x20[6];
          func_0x000101637edc();
          (*pcVar4)(&uStack_50,4,&UNK_1103ec648,uVar3,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        if (((*(char *)((long)unaff_x20 + 0x39) != '\x01') ||
            ((**(code **)(param_3 + 0x68))(1,5,param_2,param_3), unaff_x21 == 0)) &&
           ((*(char *)((long)unaff_x20 + 0x3a) != '\x01' ||
            ((**(code **)(param_3 + 0x68))(1,6,param_2,param_3), unaff_x21 == 0)))) {
          uVar3 = unaff_x20[9];
          uVar1 = unaff_x20[8] & 0xffffffffffff;
          if ((uVar3 & 0x2000000000000000) != 0) {
            uVar1 = uVar3 >> 0x38 & 0xf;
          }
          if ((uVar1 == 0) ||
             ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar3,7,param_2,param_3), unaff_x21 == 0))
          {
            uVar3 = unaff_x20[0xb];
            uVar1 = unaff_x20[10] & 0xffffffffffff;
            if ((uVar3 & 0x2000000000000000) != 0) {
              uVar1 = uVar3 >> 0x38 & 0xf;
            }
            if ((uVar1 == 0) ||
               ((**(code **)(param_3 + 0x70))(unaff_x20[10],uVar3,8,param_2,param_3), unaff_x21 == 0
               )) {
              uVar3 = unaff_x20[0xd];
              uVar1 = unaff_x20[0xc] & 0xffffffffffff;
              if ((uVar3 & 0x2000000000000000) != 0) {
                uVar1 = uVar3 >> 0x38 & 0xf;
              }
              if ((uVar1 == 0) ||
                 ((**(code **)(param_3 + 0x70))(unaff_x20[0xc],uVar3,9,param_2,param_3),
                 unaff_x21 == 0)) {
                uVar3 = unaff_x20[0xf];
                uVar1 = unaff_x20[0xe] & 0xffffffffffff;
                if ((uVar3 & 0x2000000000000000) != 0) {
                  uVar1 = uVar3 >> 0x38 & 0xf;
                }
                if ((uVar1 == 0) ||
                   ((**(code **)(param_3 + 0x70))(unaff_x20[0xe],uVar3,10,param_2,param_3),
                   unaff_x21 == 0)) {
                  uVar3 = unaff_x20[0x11];
                  uVar1 = unaff_x20[0x10] & 0xffffffffffff;
                  if ((uVar3 & 0x2000000000000000) != 0) {
                    uVar1 = uVar3 >> 0x38 & 0xf;
                  }
                  if ((uVar1 == 0) ||
                     ((**(code **)(param_3 + 0x70))(unaff_x20[0x10],uVar3,0xb,param_2,param_3),
                     unaff_x21 == 0)) {
                    uVar3 = unaff_x20[0x13];
                    uVar1 = unaff_x20[0x12] & 0xffffffffffff;
                    if ((uVar3 & 0x2000000000000000) != 0) {
                      uVar1 = uVar3 >> 0x38 & 0xf;
                    }
                    if (((uVar1 == 0) ||
                        ((**(code **)(param_3 + 0x70))(unaff_x20[0x12],uVar3,0xc,param_2,param_3),
                        unaff_x21 == 0)) &&
                       (((char)unaff_x20[0x14] != '\x01' ||
                        ((**(code **)(param_3 + 0x68))(1,0xd,param_2,param_3), unaff_x21 == 0)))) {
                      func_0x000100076224(param_1,unaff_x20[0x15],unaff_x20[0x16],param_2,param_3);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 101634a2c; end: 101634a9b;  */

void FUN_101634a2c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 1;
  *(undefined1 *)((long)param_1 + 0x3a) = 0;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0xe000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0xe000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0xe000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0xe000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0xc000000000000000;
  param_1[0x15] = 0;
  return;
}



/* Entry: 101634a9c; end: 101634acb;  */

undefined1  [16] FUN_101634a9c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xa8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0));
  return auVar1;
}



/* Entry: 101634acc; end: 101634aff;  */

void FUN_101634acc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0));
  *(undefined8 *)(unaff_x20 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_2;
  return;
}



/* Entry: 101634b00; end: 101634b13;  */

undefined1  [16] FUN_101634b00(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xa8;
  auVar1._0_8_ = 0x101634b10;
  return auVar1;
}



/* Entry: 101634b14; end: 101634b3b;  */

void FUN_101634b14(void)

{
  FUN_1016345f4();
  return;
}



/* Entry: 101634b3c; end: 101634b3f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101634b3c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101634b40; end: 101634b77;  */

uint FUN_101634b40(long param_1,long param_2)

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
  func_0x000101639abc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 101634b78; end: 101634c17;  */

uint FUN_101634b78(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  func_0x000101637934(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 101634c18; end: 101634cb7;  */

/* WARNING: Possible PIC construction at 0x000101634c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101634c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101634c68) */
/* WARNING: Removing unreachable block (ram,0x000101634c78) */

void FUN_101634c18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbb88 != -1) {
    func_0x000107c61568(0x112dbbb88,0x1016345ac);
  }
  uVar5 = uRam0000000113801fd0;
  uVar4 = uRam0000000113801fc8;
  uVar3 = uRam0000000113801fc0;
  uVar2 = uRam0000000113801fb8;
  uVar1 = uRam0000000113801fb0;
  *param_1 = uRam0000000113801fa8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101634cb8; end: 101634cf3;  */

void FUN_101634cb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbbce0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbbce0,&UNK_10d9727b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101634cf4; end: 101634e4f;  */

void FUN_101634cf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101634e50; end: 101634eef;  */

uint FUN_101634e50(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  func_0x000101637934(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 101634ef0; end: 101634f37;  */

void FUN_101634ef0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d972930,0x71,2);
  uRam0000000113801fe0 = uStack_38;
  uRam0000000113801fd8 = uStack_40;
  uRam0000000113801ff0 = uStack_28;
  uRam0000000113801fe8 = uStack_30;
  uRam0000000113802000 = uStack_18;
  uRam0000000113801ff8 = uStack_20;
  return;
}



/* Entry: 101634f38; end: 10163502b;  */

void FUN_101634f38(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_101634ff8;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_101634ff8;
        }
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_101634ff8;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 6) goto LAB_101635008;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
LAB_101634ff8:
        (*pcVar3)();
      }
LAB_101635008:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10163502c; end: 10163517f;  */

void FUN_10163502c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[7];
        uVar1 = unaff_x20[6] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((((uVar1 == 0) ||
             ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,4,param_2,param_3), unaff_x21 == 0))
            && (((char)unaff_x20[8] != '\x01' ||
                ((**(code **)(param_3 + 0x68))(1,5,param_2,param_3), unaff_x21 == 0)))) &&
           ((*(char *)((long)unaff_x20 + 0x41) != '\x01' ||
            ((**(code **)(param_3 + 0x68))(1,6,param_2,param_3), unaff_x21 == 0)))) {
          func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 101635180; end: 1016351df;  */

void FUN_101635180(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  return;
}



/* Entry: 1016351e0; end: 101635207;  */

void FUN_1016351e0(void)

{
  FUN_101634f38();
  return;
}



/* Entry: 101635208; end: 10163523f;  */

uint FUN_101635208(long param_1,long param_2)

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
  func_0x000101639a7c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 101635240; end: 1016352a7;  */

uint FUN_101635240(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000101637b70(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1016352a8; end: 101635347;  */

/* WARNING: Possible PIC construction at 0x0001016352f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101635304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016352f8) */
/* WARNING: Removing unreachable block (ram,0x000101635308) */

void FUN_1016352a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbba0 != -1) {
    func_0x000107c61568(0x112dbbba0,FUN_101634ef0);
  }
  uVar5 = uRam0000000113802000;
  uVar4 = uRam0000000113801ff8;
  uVar3 = uRam0000000113801ff0;
  uVar2 = uRam0000000113801fe8;
  uVar1 = uRam0000000113801fe0;
  *param_1 = uRam0000000113801fd8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101635348; end: 10163535b;  */

void FUN_101635348(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbbcd0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbbcd0,&UNK_10d9727a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10163535c; end: 10163547f;  */

void FUN_10163535c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101635480; end: 10163552f;  */

uint FUN_101635480(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x000101637b70(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101635530; end: 101635647;  */

/* WARNING: Removing unreachable block (ram,0x000101635610) */

void FUN_101635530(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_1016355a8;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_101635598:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_101635598;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_101635598;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x000101637f9c();
          (*pcVar4)(unaff_x20 + 0x40,&UNK_1103ec928,lVar1,param_2,param_3);
        }
      }
LAB_1016355a8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101635648; end: 10163579b;  */

void FUN_101635648(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar3 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar3 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar3 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar3 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar3 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar3 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[6];
        uVar1 = unaff_x20[7];
        uVar3 = uVar2 & 0xffffffffffff;
        if ((uVar1 & 0x2000000000000000) != 0) {
          uVar3 = uVar1 >> 0x38 & 0xf;
        }
        if ((uVar3 == 0) ||
           ((**(code **)(param_3 + 0x70))(uVar2,uVar1,4,param_2,param_3), unaff_x21 == 0)) {
          uVar3 = unaff_x20[8];
          if (*(long *)(uVar3 + 0x10) != 0) {
            pcVar4 = *(code **)(param_3 + 0x118);
            func_0x000101637f9c();
            (*pcVar4)(uVar3,5,&UNK_1103ec928,uVar2,param_2,param_3);
            if (unaff_x21 != 0) {
              return;
            }
          }
          func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 10163579c; end: 101635803;  */

void FUN_10163579c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  return;
}



/* Entry: 101635804; end: 10163582b;  */

void FUN_101635804(void)

{
  FUN_101635530();
  return;
}



/* Entry: 10163582c; end: 101635863;  */

uint FUN_10163582c(long param_1,long param_2)

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
  func_0x000101639a3c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 101635864; end: 1016358cb;  */

uint FUN_101635864(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000101637c54(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1016358cc; end: 10163596b;  */

/* WARNING: Possible PIC construction at 0x000101635918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101635928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163591c) */
/* WARNING: Removing unreachable block (ram,0x00010163592c) */

void FUN_1016358cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbbb0 != -1) {
    func_0x000107c61568(0x112dbbbb0,0x1016354e8);
  }
  uVar5 = uRam0000000113802030;
  uVar4 = uRam0000000113802028;
  uVar3 = uRam0000000113802020;
  uVar2 = uRam0000000113802018;
  uVar1 = uRam0000000113802010;
  *param_1 = uRam0000000113802008;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10163596c; end: 10163597f;  */

void FUN_10163596c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbbcc0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbbcc0,&UNK_10d9727a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101635980; end: 1016359b3;  */

void FUN_101635980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1016359b4; end: 101635ad7;  */

void FUN_1016359b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101635ad8; end: 101635b87;  */

uint FUN_101635ad8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x000101637c54(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101635b88; end: 101635cc7;  */

void FUN_101635b88(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x138);
          }
          else {
            if (lVar1 != 4) goto LAB_101635ca4;
            pcVar3 = *(code **)(param_3 + 0x138);
          }
          goto LAB_101635c94;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_101635c94;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x138);
          goto LAB_101635c94;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 6) goto LAB_101635ca4;
            pcVar3 = *(code **)(param_3 + 0x150);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 8) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 9) goto LAB_101635ca4;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
LAB_101635c94:
        (*pcVar3)();
      }
LAB_101635ca4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101635cc8; end: 101635e9b;  */

void FUN_101635cc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
      (((char)unaff_x20[2] != '\x01' ||
       ((**(code **)(param_3 + 0x68))(1,2,param_2,param_3), unaff_x21 == 0)))) &&
     (((*(char *)((long)unaff_x20 + 0x11) != '\x01' ||
       ((**(code **)(param_3 + 0x68))(1,3,param_2,param_3), unaff_x21 == 0)) &&
      ((*(char *)((long)unaff_x20 + 0x12) != '\x01' ||
       ((**(code **)(param_3 + 0x68))(1,4,param_2,param_3), unaff_x21 == 0)))))) {
    uVar2 = unaff_x20[4];
    uVar1 = unaff_x20[3] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[6];
      uVar1 = unaff_x20[5] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[5],uVar2,6,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[8];
        uVar1 = unaff_x20[7] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[7],uVar2,7,param_2,param_3), unaff_x21 == 0)) {
          uVar2 = unaff_x20[10];
          uVar1 = unaff_x20[9] & 0xffffffffffff;
          if ((uVar2 & 0x2000000000000000) != 0) {
            uVar1 = uVar2 >> 0x38 & 0xf;
          }
          if (((uVar1 == 0) ||
              ((**(code **)(param_3 + 0x70))(unaff_x20[9],uVar2,8,param_2,param_3), unaff_x21 == 0))
             && (((char)unaff_x20[0xb] != '\x01' ||
                 ((**(code **)(param_3 + 0x68))(1,9,param_2,param_3), unaff_x21 == 0)))) {
            func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 101635e9c; end: 101635ef3;  */

void FUN_101635e9c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  param_1[9] = 0;
  param_1[10] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  return;
}



/* Entry: 101635ef4; end: 101635f23;  */

undefined1  [16] FUN_101635ef4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 101635f24; end: 101635f57;  */

void FUN_101635f24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 101635f58; end: 101635f6b;  */

undefined1  [16] FUN_101635f58(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x101635f68;
  return auVar1;
}



/* Entry: 101635f6c; end: 101635f93;  */

void FUN_101635f6c(void)

{
  FUN_101635b88();
  return;
}



/* Entry: 101635f94; end: 101635f97;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101635f94(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101635f98; end: 101635fcf;  */

uint FUN_101635f98(long param_1,long param_2)

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
  func_0x0001016399fc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 101635fd0; end: 101636037;  */

uint FUN_101635fd0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_101637748(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101636038; end: 1016360d7;  */

/* WARNING: Possible PIC construction at 0x000101636084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101636094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101636088) */
/* WARNING: Removing unreachable block (ram,0x000101636098) */

void FUN_101636038(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbbc8 != -1) {
    func_0x000107c61568(0x112dbbbc8,0x101635b40);
  }
  uVar5 = uRam0000000113802060;
  uVar4 = uRam0000000113802058;
  uVar3 = uRam0000000113802050;
  uVar2 = uRam0000000113802048;
  uVar1 = uRam0000000113802040;
  *param_1 = uRam0000000113802038;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1016360d8; end: 101636113;  */

void FUN_1016360d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbbcb0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbbcb0,&UNK_10d972798);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101636114; end: 10163623f;  */

void FUN_101636114(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101636240; end: 1016362eb;  */

uint FUN_101636240(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_101637748(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1016362ec; end: 1016363d3;  */

/* WARNING: Removing unreachable block (ram,0x0001016363d0) */

void FUN_1016362ec(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x00010163805c();
        (*pcVar3)(unaff_x20 + 0x20,&UNK_1103ec5b8,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 1) goto LAB_101636378;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_101636378:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1016363d4; end: 1016364cf;  */

void FUN_1016363d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar3,1,param_2,param_3), unaff_x21 == 0)) {
    uVar3 = unaff_x20[2];
    uVar2 = unaff_x20[3];
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar3,uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      if (unaff_x20[4] != 0) {
        uStack_48 = (undefined1)unaff_x20[5];
        pcVar4 = *(code **)(param_3 + 0x80);
        uStack_50 = unaff_x20[4];
        func_0x00010163805c();
        (*pcVar4)(&uStack_50,3,&UNK_1103ec5b8,uVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1016364d0; end: 10163651b;  */

void FUN_1016364d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 10163651c; end: 10163654b;  */

undefined1  [16] FUN_10163651c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 10163654c; end: 10163657f;  */

void FUN_10163654c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 101636580; end: 101636593;  */

undefined1  [16] FUN_101636580(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x101636590;
  return auVar1;
}



/* Entry: 101636594; end: 1016365bb;  */

void FUN_101636594(void)

{
  FUN_1016362ec();
  return;
}



/* Entry: 1016365bc; end: 1016365bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1016365bc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1016365c0; end: 1016365f7;  */

uint FUN_1016365c0(long param_1,long param_2)

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
  FUN_1016399bc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 1016365f8; end: 10163663f;  */

uint FUN_1016365f8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  func_0x000101637874(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101636640; end: 1016366df;  */

/* WARNING: Possible PIC construction at 0x00010163668c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010163669c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101636690) */
/* WARNING: Removing unreachable block (ram,0x0001016366a0) */

void FUN_101636640(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbbd8 != -1) {
    func_0x000107c61568(0x112dbbbd8,0x1016362a4);
  }
  uVar5 = uRam0000000113802090;
  uVar4 = uRam0000000113802088;
  uVar3 = uRam0000000113802080;
  uVar2 = uRam0000000113802078;
  uVar1 = uRam0000000113802070;
  *param_1 = uRam0000000113802068;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1016366e0; end: 10163671b;  */

void FUN_1016366e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbbca0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbbca0,&UNK_10d972790);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10163671c; end: 10163681f;  */

void FUN_10163671c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101636820; end: 101636867;  */

uint FUN_101636820(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x000101637874(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101636868; end: 101636d87;  */

undefined1 * FUN_101636868(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar14;
  ulong unaff_x22;
  ulong uVar15;
  ulong *puVar16;
  ulong *unaff_x23;
  ulong *unaff_x24;
  ulong *unaff_x27;
  ulong unaff_x28;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_318 [88];
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  ulong uStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  undefined1 auStack_1a0 [24];
  byte abStack_188 [88];
  ulong uStack_130;
  undefined1 *puStack_128;
  ulong uStack_120;
  undefined1 *puStack_118;
  ulong uStack_110;
  undefined1 *puStack_108;
  ulong uStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  undefined1 *puStack_c8;
  ulong uStack_c0;
  undefined1 *puStack_b8;
  ulong uStack_b0;
  undefined1 *puStack_a8;
  ulong uStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x10);
  uVar18 = unaff_x19;
  uVar15 = unaff_x22;
  uVar17 = unaff_x28;
  if (lVar8 == *(long *)(param_2 + 0x10)) {
    if ((lVar8 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x24 = (ulong *)(param_1 + 0x20);
      puVar16 = (ulong *)(param_2 + 0x20);
      do {
        lVar8 = lVar8 + -1;
        unaff_x23 = (ulong *)0xc000000000000000;
        puStack_108 = (undefined1 *)unaff_x24[5];
        uStack_110 = unaff_x24[4];
        puStack_f8 = (undefined1 *)unaff_x24[7];
        uStack_100 = unaff_x24[6];
        uStack_e8 = unaff_x24[9];
        uStack_f0 = unaff_x24[8];
        uStack_e0 = unaff_x24[10];
        param_2 = (undefined1 *)unaff_x24[1];
        uVar11 = *unaff_x24;
        puStack_118 = (undefined1 *)unaff_x24[3];
        uStack_120 = unaff_x24[2];
        puStack_a8 = (undefined1 *)puVar16[5];
        uStack_b0 = puVar16[4];
        puStack_98 = (undefined1 *)puVar16[7];
        uStack_a0 = puVar16[6];
        uStack_88 = puVar16[9];
        uStack_90 = puVar16[8];
        uStack_80 = puVar16[10];
        puStack_c8 = (undefined1 *)puVar16[1];
        uStack_d0 = *puVar16;
        puStack_b8 = (undefined1 *)puVar16[3];
        uStack_c0 = puVar16[2];
        uStack_130 = uVar11;
        puStack_128 = param_2;
        if (((((uVar11 != uStack_d0) || (param_2 != puStack_c8)) &&
             (func_0x000107c605b8(), (uVar11 & 1) == 0)) ||
            ((((uStack_120 != uStack_c0 || (puStack_118 != puStack_b8)) &&
              (uVar11 = uStack_120, param_2 = puStack_118, func_0x000107c605b8(), (uVar11 & 1) == 0)
              ) || (((uStack_110 != uStack_b0 || (puStack_108 != puStack_a8)) &&
                    (uVar11 = uStack_110, param_2 = puStack_108, func_0x000107c605b8(),
                    (uVar11 & 1) == 0)))))) ||
           (((param_2 = puStack_f8, uStack_100 != uStack_a0 || (puStack_f8 != puStack_98)) &&
            (uVar11 = uStack_100, func_0x000107c605b8(), (uVar11 & 1) == 0)))) goto LAB_101636d28;
        unaff_x19 = uStack_80;
        unaff_x22 = uStack_88;
        unaff_x28 = uStack_e0;
        if ((char)uStack_f0 != (char)uStack_90) goto LAB_101636d28;
        if (uStack_f0._1_1_ != uStack_90._1_1_) goto LAB_101636d28;
        uVar1 = (uint)(uStack_e0 >> 0x20);
        uVar9 = uVar1 >> 0x1e;
        uVar2 = (uint)(uStack_80 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        iVar7 = (int)uStack_e8;
        uVar18 = unaff_x19;
        uVar15 = unaff_x22;
        uVar17 = unaff_x28;
        if (uStack_e0 >> 0x3e == 3) {
          uVar11 = 0;
          if (((uStack_e8 != 0) || (uStack_e0 != 0xc000000000000000)) ||
             ((uStack_80 >> 0x3e < 3 ||
              ((uVar11 = 0, uStack_88 != 0 || (uStack_80 != 0xc000000000000000))))))
          goto joined_r0x000101636ba8;
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar9 == 0) {
              uVar11 = uStack_e0 >> 0x30 & 0xff;
            }
            else {
              iVar10 = (int)(uStack_e8 >> 0x20);
              if (SBORROW4(iVar10,iVar7)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101636d74);
                (*pcVar3)();
              }
              uVar11 = (ulong)(iVar10 - iVar7);
            }
joined_r0x000101636ba8:
            if (1 < uVar2 >> 0x1e) goto LAB_101636a14;
LAB_101636a48:
            if (uVar12 == 0) {
              uVar13 = uStack_80 >> 0x30 & 0xff;
            }
            else {
              iVar10 = (int)(uStack_88 >> 0x20);
              if (SBORROW4(iVar10,(int)uStack_88)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101636d6c);
                (*pcVar3)();
              }
              uVar13 = (ulong)(iVar10 - (int)uStack_88);
            }
          }
          else {
            if (uVar9 == 2) {
              uVar11 = *(long *)(uStack_e8 + 0x18) - *(long *)(uStack_e8 + 0x10);
              if (SBORROW8(*(long *)(uStack_e8 + 0x18),*(long *)(uStack_e8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101636d70);
                (*pcVar3)();
              }
              goto joined_r0x000101636ba8;
            }
            uVar11 = 0;
            if (uVar12 < 2) goto LAB_101636a48;
LAB_101636a14:
            if (uVar12 != 2) {
              if (uVar11 == 0) goto joined_r0x000101636d1c;
              goto LAB_101636d28;
            }
            uVar13 = *(long *)(uStack_88 + 0x18) - *(long *)(uStack_88 + 0x10);
            if (SBORROW8(*(long *)(uStack_88 + 0x18),*(long *)(uStack_88 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101636d68);
              (*pcVar3)();
            }
          }
          if (uVar11 != uVar13) goto LAB_101636d28;
          if (0 < (long)uVar11) {
            if (uVar9 < 2) {
              if (uVar9 == 0) {
                auStack_1a0[0] = (undefined1)uStack_e8;
                auStack_1a0[1] = (undefined1)(uStack_e8 >> 8);
                auStack_1a0[2] = (undefined1)(uStack_e8 >> 0x10);
                auStack_1a0[3] = (undefined1)(uStack_e8 >> 0x18);
                auStack_1a0[4] = (undefined1)(uStack_e8 >> 0x20);
                auStack_1a0[5] = (undefined1)(uStack_e8 >> 0x28);
                auStack_1a0[6] = (undefined1)(uStack_e8 >> 0x30);
                auStack_1a0[7] = (undefined1)(uStack_e8 >> 0x38);
                auStack_1a0[8] = (undefined1)uStack_e0;
                auStack_1a0[9] = (undefined1)(uStack_e0 >> 8);
                auStack_1a0[10] = (undefined1)(uStack_e0 >> 0x10);
                auStack_1a0[0xb] = (undefined1)(uStack_e0 >> 0x18);
                auStack_1a0[0xc] = (undefined1)(uStack_e0 >> 0x20);
                auStack_1a0[0xd] = (undefined1)(uStack_e0 >> 0x28);
                param_2 = auStack_1a0 + (uStack_e0 >> 0x30 & 0xff);
                func_0x000101639cbc(&uStack_130,abStack_188);
                func_0x000101639cbc(&uStack_d0,abStack_188);
                unaff_x20 = param_2;
                goto LAB_101636c64;
              }
              lVar14 = (long)iVar7;
              unaff_x27 = (ulong *)(((long)uStack_e8 >> 0x20) - lVar14);
              lStack_1a8 = lVar8;
              if ((long)uStack_e8 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101636d78);
                (*pcVar3)();
              }
              func_0x000101639cbc(&uStack_130,abStack_188);
              puVar4 = &uStack_d0;
              func_0x000101639cbc(puVar4,abStack_188);
              func_0x000107c5ec30();
              if (puVar4 == (ulong *)0x0) {
                func_0x000107c5ec38();
                lVar8 = 0;
LAB_101636ca8:
                param_2 = (undefined1 *)0x0;
              }
              else {
                puVar5 = puVar4;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar14,(long)puVar5)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101636d84);
                  (*pcVar3)();
                }
                lVar8 = (lVar14 - (long)puVar5) + (long)puVar4;
                func_0x000107c5ec38();
                if (lVar8 == 0) goto LAB_101636ca8;
                if ((long)unaff_x27 <= (long)puVar5) {
                  puVar5 = unaff_x27;
                }
                param_2 = (undefined1 *)((long)puVar5 + lVar8);
              }
              unaff_x23 = (ulong *)0xc000000000000000;
              FUN_100e25bdc(abStack_188,lVar8,param_2,unaff_x22,unaff_x19);
              func_0x000101639cf0(&uStack_d0);
              func_0x000101639cf0(&uStack_130);
              lVar8 = lStack_1a8;
            }
            else {
              if (uVar9 != 2) {
                auStack_1a0[8] = 0;
                auStack_1a0[9] = 0;
                auStack_1a0[10] = 0;
                auStack_1a0[0xb] = 0;
                auStack_1a0[0xc] = 0;
                auStack_1a0[0xd] = 0;
                auStack_1a0[0] = 0;
                auStack_1a0[1] = 0;
                auStack_1a0[2] = 0;
                auStack_1a0[3] = 0;
                auStack_1a0[4] = 0;
                auStack_1a0[5] = 0;
                auStack_1a0[6] = 0;
                auStack_1a0[7] = 0;
                func_0x000101639cbc(&uStack_130,abStack_188);
                func_0x000101639cbc(&uStack_d0,abStack_188);
                param_2 = auStack_1a0;
LAB_101636c64:
                FUN_100e25bdc(abStack_188,auStack_1a0,param_2,unaff_x22,unaff_x19);
                func_0x000101639cf0(&uStack_d0);
                func_0x000101639cf0(&uStack_130);
                if ((abStack_188[0] & 1) != 0) goto joined_r0x000101636d1c;
                goto LAB_101636d28;
              }
              unaff_x27 = *(ulong **)(uStack_e8 + 0x10);
              lVar14 = *(long *)(uStack_e8 + 0x18);
              lStack_1a8 = unaff_x21;
              func_0x000101639cbc(&uStack_130,abStack_188);
              unaff_x23 = &uStack_d0;
              func_0x000101639cbc(unaff_x23,abStack_188);
              func_0x000107c5ec30();
              puVar4 = unaff_x23;
              if (unaff_x23 != (ulong *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x27,(long)puVar4)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101636d80);
                  (*pcVar3)();
                }
                unaff_x23 = (ulong *)(((long)unaff_x27 - (long)puVar4) + (long)unaff_x23);
              }
              puVar5 = (ulong *)(lVar14 - (long)unaff_x27);
              if (SBORROW8(lVar14,(long)unaff_x27)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101636d7c);
                (*pcVar3)();
              }
              func_0x000107c5ec38();
              unaff_x21 = lStack_1a8;
              if (unaff_x23 == (ulong *)0x0) {
                param_2 = (undefined1 *)0x0;
              }
              else {
                if ((long)puVar5 <= (long)puVar4) {
                  puVar4 = puVar5;
                }
                param_2 = (undefined1 *)((long)puVar4 + (long)unaff_x23);
              }
              FUN_100e25bdc(abStack_188,unaff_x23,param_2,unaff_x22,unaff_x19);
              func_0x000101639cf0(&uStack_d0);
              func_0x000101639cf0(&uStack_130);
            }
            unaff_x20 = (undefined1 *)(unaff_x28 & 0x3fffffffffffffff);
            if ((abStack_188[0] & 1) == 0) goto LAB_101636d28;
          }
        }
joined_r0x000101636d1c:
        unaff_x23 = (ulong *)0xc000000000000000;
        if (lVar8 == 0) break;
        unaff_x24 = unaff_x24 + 0xb;
        puVar16 = puVar16 + 0xb;
      } while( true );
    }
    puVar6 = (undefined1 *)0x1;
    uVar18 = unaff_x19;
    uVar15 = unaff_x22;
    uVar17 = unaff_x28;
  }
  else {
LAB_101636d28:
    puVar6 = (undefined1 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar6;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)(puVar6 + 0x10);
  if (lVar8 == *(long *)(param_2 + 0x10)) {
    if ((lVar8 == 0) || (puVar6 == param_2)) {
      return (undefined1 *)0x1;
    }
    pcStack_1b8 = FUN_101636d88;
    puVar16 = (ulong *)(puVar6 + 0x20);
    puVar4 = (ulong *)(param_2 + 0x20);
    uStack_200 = uVar17;
    puStack_1f8 = unaff_x27;
    puStack_1f0 = unaff_x24;
    puStack_1e8 = unaff_x23;
    uStack_1e0 = uVar15;
    lStack_1d8 = unaff_x21;
    puStack_1d0 = unaff_x20;
    uStack_1c8 = uVar18;
    puStack_1c0 = &stack0xfffffffffffffff0;
    while( true ) {
      lVar8 = lVar8 + -1;
      uStack_298 = puVar16[5];
      uStack_2a0 = puVar16[4];
      uStack_288 = puVar16[7];
      uStack_290 = puVar16[6];
      uStack_278 = puVar16[9];
      uStack_280 = puVar16[8];
      uStack_270 = puVar16[10];
      uStack_2b8 = puVar16[1];
      uVar18 = *puVar16;
      uStack_2a8 = puVar16[3];
      uStack_2b0 = puVar16[2];
      uStack_238 = puVar4[5];
      uStack_240 = puVar4[4];
      uStack_228 = puVar4[7];
      uStack_230 = puVar4[6];
      uStack_218 = puVar4[9];
      uStack_220 = puVar4[8];
      uStack_210 = puVar4[10];
      uStack_258 = puVar4[1];
      uStack_260 = *puVar4;
      uStack_248 = puVar4[3];
      uStack_250 = puVar4[2];
      uStack_2c0 = uVar18;
      if (((((uVar18 != uStack_260) || (uStack_2b8 != uStack_258)) &&
           (func_0x000107c605b8(), (uVar18 & 1) == 0)) ||
          (((uStack_2b0 != uStack_250 || (uStack_2a8 != uStack_248)) &&
           (uVar18 = uStack_2b0, func_0x000107c605b8(), (uVar18 & 1) == 0)))) ||
         ((((uStack_2a0 != uStack_240 || (uStack_298 != uStack_238)) &&
           (uVar18 = uStack_2a0, func_0x000107c605b8(), (uVar18 & 1) == 0)) ||
          (((uStack_290 != uStack_230 || (uStack_288 != uStack_228)) &&
           (uVar18 = uStack_290, func_0x000107c605b8(), (uVar18 & 1) == 0)))))) {
        return (undefined1 *)0x0;
      }
      uVar15 = uStack_220;
      uVar18 = uStack_280;
      func_0x000101639c5c(&uStack_2c0,auStack_318);
      func_0x000101639c5c(&uStack_260,auStack_318);
      FUN_1016370dc(uVar18,uVar15);
      if ((uVar18 & 1) == 0) {
        func_0x000101639c90(&uStack_260);
        func_0x000101639c90(&uStack_2c0);
        return (undefined1 *)0x0;
      }
      uVar18 = uStack_278;
      FUN_100e25fcc(uStack_278,uStack_270,uStack_218,uStack_210);
      func_0x000101639c90(&uStack_260);
      func_0x000101639c90(&uStack_2c0);
      if ((uVar18 & 1) == 0) break;
      if (lVar8 == 0) {
        return (undefined1 *)0x1;
      }
      puVar16 = puVar16 + 0xb;
      puVar4 = puVar4 + 0xb;
    }
    return (undefined1 *)0x0;
  }
  return (undefined1 *)0x0;
}



/* Entry: 101636d88; end: 101636f4f;  */

undefined8 FUN_101636d88(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_168 [88];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 != 0) && (param_1 != param_2)) {
    puVar3 = (ulong *)(param_1 + 0x20);
    puVar4 = (ulong *)(param_2 + 0x20);
    while( true ) {
      lVar2 = lVar2 + -1;
      uStack_e8 = puVar3[5];
      uStack_f0 = puVar3[4];
      uStack_d8 = puVar3[7];
      uStack_e0 = puVar3[6];
      uStack_c8 = puVar3[9];
      uStack_d0 = puVar3[8];
      uStack_c0 = puVar3[10];
      uStack_108 = puVar3[1];
      uVar5 = *puVar3;
      uStack_f8 = puVar3[3];
      uStack_100 = puVar3[2];
      uStack_88 = puVar4[5];
      uStack_90 = puVar4[4];
      uStack_78 = puVar4[7];
      uStack_80 = puVar4[6];
      uStack_68 = puVar4[9];
      uStack_70 = puVar4[8];
      uStack_60 = puVar4[10];
      uStack_a8 = puVar4[1];
      uStack_b0 = *puVar4;
      uStack_98 = puVar4[3];
      uStack_a0 = puVar4[2];
      uStack_110 = uVar5;
      if (((((uVar5 != uStack_b0) || (uStack_108 != uStack_a8)) &&
           (func_0x000107c605b8(), (uVar5 & 1) == 0)) ||
          ((((uStack_100 != uStack_a0 || (uStack_f8 != uStack_98)) &&
            (uVar5 = uStack_100, func_0x000107c605b8(), (uVar5 & 1) == 0)) ||
           (((uStack_f0 != uStack_90 || (uStack_e8 != uStack_88)) &&
            (uVar5 = uStack_f0, func_0x000107c605b8(), (uVar5 & 1) == 0)))))) ||
         (((uStack_e0 != uStack_80 || (uStack_d8 != uStack_78)) &&
          (uVar5 = uStack_e0, func_0x000107c605b8(), (uVar5 & 1) == 0)))) {
        return 0;
      }
      uVar1 = uStack_70;
      uVar5 = uStack_d0;
      func_0x000101639c5c(&uStack_110,auStack_168);
      func_0x000101639c5c(&uStack_b0,auStack_168);
      FUN_1016370dc(uVar5,uVar1);
      if ((uVar5 & 1) == 0) {
        func_0x000101639c90(&uStack_b0);
        func_0x000101639c90(&uStack_110);
        return 0;
      }
      uVar5 = uStack_c8;
      FUN_100e25fcc(uStack_c8,uStack_c0,uStack_68,uStack_60);
      func_0x000101639c90(&uStack_b0);
      func_0x000101639c90(&uStack_110);
      if ((uVar5 & 1) == 0) break;
      if (lVar2 == 0) {
        return 1;
      }
      puVar3 = puVar3 + 0xb;
      puVar4 = puVar4 + 0xb;
    }
    return 0;
  }
  return 1;
}



/* Entry: 101636f50; end: 1016370db;  */

undefined8 FUN_101636f50(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auStack_110 [64];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    puVar5 = (ulong *)(param_1 + 0x20);
    puVar6 = (ulong *)(param_2 + 0x20);
    while( true ) {
      lVar4 = lVar4 + -1;
      uStack_c8 = puVar5[1];
      uVar7 = *puVar5;
      uStack_b8 = puVar5[3];
      uStack_c0 = puVar5[2];
      uStack_a8 = puVar5[5];
      uStack_b0 = puVar5[4];
      uStack_98 = puVar5[7];
      uStack_a0 = puVar5[6];
      uStack_88 = puVar6[1];
      uStack_90 = *puVar6;
      uStack_78 = puVar6[3];
      uStack_80 = puVar6[2];
      uStack_68 = puVar6[5];
      uStack_70 = puVar6[4];
      uStack_58 = puVar6[7];
      uStack_60 = puVar6[6];
      uStack_d0 = uVar7;
      if ((((uVar7 != uStack_90) || (uStack_c8 != uStack_88)) &&
          (func_0x000107c605b8(), (uVar7 & 1) == 0)) ||
         (((uStack_c0 != uStack_80 || (uStack_b8 != uStack_78)) &&
          (uVar7 = uStack_c0, func_0x000107c605b8(), (uVar7 & 1) == 0)))) {
        return 0;
      }
      uVar3 = uStack_58;
      uVar2 = uStack_60;
      uVar1 = uStack_98;
      uVar7 = uStack_a0;
      if ((char)uStack_68 == '\x01') {
        if (uStack_70 == 0) {
          if (uStack_b0 != 0) {
            return 0;
          }
        }
        else if (uStack_70 == 1) {
          if (uStack_b0 != 1) {
            return 0;
          }
        }
        else if (uStack_b0 != 2) {
          return 0;
        }
      }
      else if (uStack_b0 != uStack_70) {
        return 0;
      }
      func_0x000101639bfc(&uStack_d0,auStack_110);
      func_0x000101639bfc(&uStack_90,auStack_110);
      FUN_100e25fcc(uVar7,uVar1,uVar2,uVar3);
      func_0x000101639c30(&uStack_90);
      func_0x000101639c30(&uStack_d0);
      if ((uVar7 & 1) == 0) break;
      if (lVar4 == 0) {
        return 1;
      }
      puVar5 = puVar5 + 8;
      puVar6 = puVar6 + 8;
    }
    return 0;
  }
  return 1;
}



/* Entry: 1016370dc; end: 10163763b;  */

void FUN_1016370dc(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined1 auStack_1e8 [24];
  byte abStack_1d0 [112];
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    if ((lVar12 != 0) && (param_1 != param_2)) {
      puVar19 = (ulong *)(param_1 + 0x20);
      puVar20 = (ulong *)(param_2 + 0x20);
      do {
        lVar12 = lVar12 + -1;
        uStack_118 = puVar19[9];
        uStack_120 = puVar19[8];
        uStack_108 = puVar19[0xb];
        uStack_110 = puVar19[10];
        uStack_f8 = puVar19[0xd];
        uStack_100 = puVar19[0xc];
        uStack_158 = puVar19[1];
        uVar21 = *puVar19;
        uStack_148 = puVar19[3];
        uStack_150 = puVar19[2];
        uStack_138 = puVar19[5];
        uStack_140 = puVar19[4];
        uStack_128 = puVar19[7];
        uStack_130 = puVar19[6];
        uStack_e8 = puVar20[1];
        uStack_f0 = *puVar20;
        uStack_d8 = puVar20[3];
        uStack_e0 = puVar20[2];
        uStack_c8 = puVar20[5];
        uStack_d0 = puVar20[4];
        uStack_b8 = puVar20[7];
        uStack_c0 = puVar20[6];
        uStack_a8 = puVar20[9];
        uStack_b0 = puVar20[8];
        uStack_98 = puVar20[0xb];
        uStack_a0 = puVar20[10];
        uStack_88 = puVar20[0xd];
        uStack_90 = puVar20[0xc];
        uStack_160 = uVar21;
        if (((uVar21 != uStack_f0) || (uStack_158 != uStack_e8)) &&
           (func_0x000107c605b8(), (uVar21 & 1) == 0)) goto LAB_1016375dc;
        if ((char)uStack_150 != (char)uStack_e0) goto LAB_1016375dc;
        if (uStack_150._1_1_ != uStack_e0._1_1_) goto LAB_1016375dc;
        if (((((uStack_150._2_1_ != uStack_e0._2_1_) ||
              (((uStack_148 != uStack_d8 || (uStack_140 != uStack_d0)) &&
               (uVar21 = uStack_148, func_0x000107c605b8(), (uVar21 & 1) == 0)))) ||
             (((uStack_138 != uStack_c8 || (uStack_130 != uStack_c0)) &&
              (uVar21 = uStack_138, func_0x000107c605b8(), (uVar21 & 1) == 0)))) ||
            (((uStack_128 != uStack_b8 || (uStack_120 != uStack_b0)) &&
             (uVar21 = uStack_128, func_0x000107c605b8(), (uVar21 & 1) == 0)))) ||
           (((uStack_118 != uStack_a8 || (uStack_110 != uStack_a0)) &&
            (uVar21 = uStack_118, func_0x000107c605b8(), (uVar21 & 1) == 0)))) goto LAB_1016375dc;
        uVar3 = uStack_88;
        uVar21 = uStack_90;
        if ((char)uStack_108 != (char)uStack_98) goto LAB_1016375dc;
        uVar1 = (uint)(uStack_f8 >> 0x20);
        uVar13 = uVar1 >> 0x1e;
        uVar2 = (uint)(uStack_88 >> 0x20);
        uVar16 = uVar2 >> 0x1e;
        iVar11 = (int)uStack_100;
        if (uStack_f8 >> 0x3e == 3) {
          uVar15 = 0;
          if (((uStack_100 != 0) || (uStack_f8 != 0xc000000000000000)) ||
             ((uStack_88 >> 0x3e < 3 ||
              ((uVar15 = 0, uStack_90 != 0 || (uStack_88 != 0xc000000000000000))))))
          goto joined_r0x000101637464;
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = uStack_f8 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(uStack_100 >> 0x20);
              if (SBORROW4(iVar14,iVar11)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101637624);
                (*pcVar4)();
              }
              uVar15 = (ulong)(iVar14 - iVar11);
            }
joined_r0x000101637464:
            if (1 < uVar2 >> 0x1e) goto LAB_1016372cc;
LAB_101637300:
            if (uVar16 == 0) {
              uVar17 = uStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)(uStack_90 >> 0x20);
              if (SBORROW4(iVar14,(int)uStack_90)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10163761c);
                (*pcVar4)();
              }
              uVar17 = (ulong)(iVar14 - (int)uStack_90);
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(uStack_100 + 0x18) - *(long *)(uStack_100 + 0x10);
              if (SBORROW8(*(long *)(uStack_100 + 0x18),*(long *)(uStack_100 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101637628);
                (*pcVar4)();
              }
              goto joined_r0x000101637464;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_101637300;
LAB_1016372cc:
            if (uVar16 != 2) {
              if (uVar15 == 0) goto joined_r0x0001016375d0;
              goto LAB_1016375dc;
            }
            uVar17 = *(long *)(uStack_90 + 0x18) - *(long *)(uStack_90 + 0x10);
            if (SBORROW8(*(long *)(uStack_90 + 0x18),*(long *)(uStack_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101637620);
              (*pcVar4)();
            }
          }
          if (uVar15 != uVar17) goto LAB_1016375dc;
          if (0 < (long)uVar15) {
            if (uVar13 < 2) {
              if (uVar13 == 0) {
                auStack_1e8[0] = (undefined1)uStack_100;
                auStack_1e8[1] = (undefined1)(uStack_100 >> 8);
                auStack_1e8[2] = (undefined1)(uStack_100 >> 0x10);
                auStack_1e8[3] = (undefined1)(uStack_100 >> 0x18);
                auStack_1e8[4] = (undefined1)(uStack_100 >> 0x20);
                auStack_1e8[5] = (undefined1)(uStack_100 >> 0x28);
                auStack_1e8[6] = (undefined1)(uStack_100 >> 0x30);
                auStack_1e8[7] = (undefined1)(uStack_100 >> 0x38);
                auStack_1e8[8] = (undefined1)uStack_f8;
                auStack_1e8[9] = (undefined1)(uStack_f8 >> 8);
                auStack_1e8[10] = (undefined1)(uStack_f8 >> 0x10);
                auStack_1e8[0xb] = (undefined1)(uStack_f8 >> 0x18);
                auStack_1e8[0xc] = (undefined1)(uStack_f8 >> 0x20);
                auStack_1e8[0xd] = (undefined1)(uStack_f8 >> 0x28);
                puVar9 = auStack_1e8 + (uStack_f8 >> 0x30 & 0xff);
                FUN_101639b3c(&uStack_160,abStack_1d0);
                FUN_101639b3c(&uStack_f0,abStack_1d0);
                goto LAB_10163751c;
              }
              lVar18 = (long)iVar11;
              puVar5 = (ulong *)(((long)uStack_100 >> 0x20) - lVar18);
              if ((long)uStack_100 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10163762c);
                (*pcVar4)();
              }
              FUN_101639b3c(&uStack_160,abStack_1d0);
              puVar6 = &uStack_f0;
              FUN_101639b3c(puVar6,abStack_1d0);
              func_0x000107c5ec30();
              if (puVar6 == (ulong *)0x0) {
                func_0x000107c5ec38();
                lVar18 = 0;
LAB_101637560:
                lVar10 = 0;
              }
              else {
                puVar7 = puVar6;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar18,(long)puVar7)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101637638);
                  (*pcVar4)();
                }
                lVar18 = (lVar18 - (long)puVar7) + (long)puVar6;
                func_0x000107c5ec38();
                if (lVar18 == 0) goto LAB_101637560;
                if ((long)puVar5 <= (long)puVar7) {
                  puVar7 = puVar5;
                }
                lVar10 = (long)puVar7 + lVar18;
              }
              FUN_100e25bdc(abStack_1d0,lVar18,lVar10,uVar21,uVar3);
              func_0x000101639b70(&uStack_f0);
              func_0x000101639b70(&uStack_160);
            }
            else {
              if (uVar13 != 2) {
                auStack_1e8[8] = 0;
                auStack_1e8[9] = 0;
                auStack_1e8[10] = 0;
                auStack_1e8[0xb] = 0;
                auStack_1e8[0xc] = 0;
                auStack_1e8[0xd] = 0;
                auStack_1e8[0] = 0;
                auStack_1e8[1] = 0;
                auStack_1e8[2] = 0;
                auStack_1e8[3] = 0;
                auStack_1e8[4] = 0;
                auStack_1e8[5] = 0;
                auStack_1e8[6] = 0;
                auStack_1e8[7] = 0;
                FUN_101639b3c(&uStack_160,abStack_1d0);
                FUN_101639b3c(&uStack_f0,abStack_1d0);
                puVar9 = auStack_1e8;
LAB_10163751c:
                FUN_100e25bdc(abStack_1d0,auStack_1e8,puVar9,uVar21,uVar3);
                func_0x000101639b70(&uStack_f0);
                func_0x000101639b70(&uStack_160);
                if ((abStack_1d0[0] & 1) != 0) goto joined_r0x0001016375d0;
                goto LAB_1016375dc;
              }
              lVar18 = *(long *)(uStack_100 + 0x10);
              lVar10 = *(long *)(uStack_100 + 0x18);
              FUN_101639b3c(&uStack_160,abStack_1d0);
              puVar5 = &uStack_f0;
              FUN_101639b3c(puVar5,abStack_1d0);
              func_0x000107c5ec30();
              puVar6 = puVar5;
              if (puVar5 != (ulong *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar18,(long)puVar6)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101637634);
                  (*pcVar4)();
                }
                puVar5 = (ulong *)((lVar18 - (long)puVar6) + (long)puVar5);
              }
              puVar7 = (ulong *)(lVar10 - lVar18);
              if (SBORROW8(lVar10,lVar18)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101637630);
                (*pcVar4)();
              }
              func_0x000107c5ec38();
              if (puVar5 == (ulong *)0x0) {
                lVar18 = 0;
              }
              else {
                if ((long)puVar7 <= (long)puVar6) {
                  puVar6 = puVar7;
                }
                lVar18 = (long)puVar6 + (long)puVar5;
              }
              FUN_100e25bdc(abStack_1d0,puVar5,lVar18,uVar21,uVar3);
              func_0x000101639b70(&uStack_f0);
              func_0x000101639b70(&uStack_160);
            }
            if ((abStack_1d0[0] & 1) == 0) goto LAB_1016375dc;
          }
        }
joined_r0x0001016375d0:
        if (lVar12 == 0) break;
        puVar19 = puVar19 + 0xe;
        puVar20 = puVar20 + 0xe;
      } while( true );
    }
    uVar8 = 1;
  }
  else {
LAB_1016375dc:
    uVar8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78(uVar8);
  return;
}



/* Entry: 10163763c; end: 101637647;  */

void FUN_10163763c(void)

{
  return;
}



/* Entry: 101637648; end: 101637747;  */

void FUN_101637648(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbb60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d972198;
  func_0x000107c61520(&DAT_10d972198,&UNK_1103ec750);
  puRam0000000112dbbb60 = puVar1;
  return;
}



/* Entry: 101637748; end: 101637d27;  */

/* WARNING: Possible PIC construction at 0x000101637778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101637800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101637848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010163784c) */
/* WARNING: Removing unreachable block (ram,0x000101637804) */
/* WARNING: Removing unreachable block (ram,0x00010163777c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101637748(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
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
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar13 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1])
  goto code_r0x000107c605b8;
  if (((((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) == 0) &&
      (((*(byte *)((long)param_1 + 0x11) ^ *(byte *)((long)param_2 + 0x11)) & 1) == 0)) &&
     (((*(byte *)((long)param_1 + 0x12) ^ *(byte *)((long)param_2 + 0x12)) & 1) == 0)) {
    uVar14 = param_1[3];
    if (((uVar14 == param_2[3]) && (param_1[4] == param_2[4])) ||
       (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
      pbVar12 = (byte *)param_1[5];
      pbVar16 = (byte *)param_1[6];
      pbVar17 = (byte *)param_2[5];
      pbVar13 = (byte *)param_2[6];
      if ((pbVar12 != pbVar17) || (pbVar16 != pbVar13)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar12,pbVar16,pbVar17,pbVar13,0);
        return pbVar12;
      }
      uVar14 = param_1[7];
      if (((uVar14 == param_2[7]) && (param_1[8] == param_2[8])) ||
         (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
        pbVar12 = (byte *)param_1[9];
        pbVar16 = (byte *)param_1[10];
        pbVar17 = (byte *)param_2[9];
        pbVar13 = (byte *)param_2[10];
        if ((pbVar12 != pbVar17) || (pbVar16 != pbVar13)) goto code_r0x000107c605b8;
        if (((*(byte *)(param_1 + 0xb) ^ *(byte *)(param_2 + 0xb)) & 1) == 0) {
          pbVar10 = (byte *)param_1[0xc];
          pbVar25 = (byte *)param_1[0xd];
          lVar24 = param_2[0xc];
          uVar14 = param_2[0xd];
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
            uVar4 = (uint)((ulong)pbVar25 >> 0x20);
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar14 >> 0x20);
            uVar21 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar15 = pbVar25;
            if ((ulong)pbVar25 >> 0x3e == 3) {
              uVar20 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                  (uVar14 >> 0x3e < 3)) ||
                 ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
LAB_100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
              }
              else {
                iVar19 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar20 = (ulong)(iVar19 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
              if (uVar21 == 0) {
                uVar22 = uVar14 >> 0x30 & 0xff;
                goto LAB_100e2608c;
              }
              iVar19 = (int)((ulong)lVar24 >> 0x20);
              if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar20 = 0;
              if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
              if (uVar21 == 2) {
                uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
                if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
LAB_100e2608c:
                if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
                if ((long)uVar20 < 1) goto LAB_100e26128;
                if (uVar18 < 2) {
                  if (uVar18 == 0) {
                    puVar7[-0x70] = (char)pbVar10;
                    puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                    puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                    puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                    puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                    puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                    puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                    puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                    puVar7[-0x68] = (char)pbVar25;
                    puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                    pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
                    unaff_x21 = 0;
                    FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                    pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                    goto LAB_100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar15 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar15) {
                        pbVar15 = unaff_x23;
                      }
                      pbVar15 = pbVar15 + (long)pbVar10;
                      goto LAB_100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto LAB_100e26260;
                  }
                  lVar26 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar15 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
                  }
                  unaff_x23 = unaff_x24 + -lVar26;
                  if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar15 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                  }
                }
LAB_100e262a4:
                unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar20 == 0);
              }
            }
LAB_100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)(puVar7 + -0xc0) = unaff_x24;
            *(byte **)(puVar7 + -0xb8) = unaff_x23;
            *(ulong *)(puVar7 + -0xb0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
            *(ulong *)(puVar7 + -0xa0) = unaff_x20;
            *(byte **)(puVar7 + -0x98) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
            *(code **)(puVar7 + -0x88) = FUN_100e26304;
            pbVar12 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar23 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar16 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar24 = *(long *)pbVar15;
                  uVar11 = 0;
                  FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar24,uVar11);
                  return (byte *)(ulong)((uint)pbVar12 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar15[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar13 = *(byte **)(pbVar15 + 0x10);
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar24,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 == pbVar17) && (pbVar25 == pbVar13)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar13 = *(byte **)(pbVar15 + 8);
                lVar24 = *(long *)(pbVar15 + 0x18);
                if ((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (lVar24 == 0) {
                      return (byte *)0x0;
                    }
                    FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar24);
                    func_0x000107c61174();
                    pbVar13 = pbVar23;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar23);
                    func_0x000107c61170(lVar24);
                    pbVar23 = pbVar13;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar24 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar26 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar13 = *(byte **)(pbVar15 + 8);
                if (((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) &&
                   (pbVar12 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar13 = *(byte **)(pbVar15 + 0x18),
                   pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar12 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)(pbVar15 + 0x20);
              if (pbVar25 == (byte *)0x0) {
                if (pbVar13 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar13 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar12 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 != pbVar17) || (pbVar25 != pbVar13)) goto code_r0x000107c605b8;
              }
              if (lVar26 != 0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar23 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  lVar26 == 0) && pbVar25 == (byte *)0x0) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar26 = *(long *)(pbVar15 + 0x20);
                lVar24 = *(long *)(pbVar15 + 0x18);
                bVar27 = pbVar15[8] | (byte)lVar24;
                bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
                bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
                bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
                bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
                bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
                bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
                bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
                bVar35 = pbVar15[0x10] | (byte)lVar26;
                bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
                bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
                bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
                bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
                bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
                bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
                bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
                auVar43[1] = bVar28;
                auVar43[0] = bVar27;
                auVar43[2] = bVar29;
                auVar43[3] = bVar30;
                auVar43[4] = bVar31;
                auVar43[5] = bVar32;
                auVar43[6] = bVar33;
                auVar43[7] = bVar34;
                auVar43[8] = bVar35;
                auVar43[9] = bVar36;
                auVar43[10] = bVar37;
                auVar43[0xb] = bVar38;
                auVar43[0xc] = bVar39;
                auVar43[0xd] = bVar40;
                auVar43[0xe] = bVar41;
                auVar43[0xf] = bVar42;
                auVar3[1] = bVar28;
                auVar3[0] = bVar27;
                auVar3[2] = bVar29;
                auVar3[3] = bVar30;
                auVar3[4] = bVar31;
                auVar3[5] = bVar32;
                auVar3[6] = bVar33;
                auVar3[7] = bVar34;
                auVar3[8] = bVar35;
                auVar3[9] = bVar36;
                auVar3[10] = bVar37;
                auVar3[0xb] = bVar38;
                auVar3[0xc] = bVar39;
                auVar3[0xd] = bVar40;
                auVar3[0xe] = bVar41;
                auVar3[0xf] = bVar42;
                auVar43 = NEON_ext(auVar43,auVar3,8,1);
                if (CONCAT17(bVar34 | auVar43[7],
                             CONCAT16(bVar33 | auVar43[6],
                                      CONCAT15(bVar32 | auVar43[5],
                                               CONCAT14(bVar31 | auVar43[4],
                                                        CONCAT13(bVar30 | auVar43[3],
                                                                 CONCAT12(bVar29 | auVar43[2],
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                  lVar26 == 0)) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar24 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar24;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar26;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
              auVar1[1] = bVar28;
              auVar1[0] = bVar27;
              auVar1[2] = bVar29;
              auVar1[3] = bVar30;
              auVar1[4] = bVar31;
              auVar1[5] = bVar32;
              auVar1[6] = bVar33;
              auVar1[7] = bVar34;
              auVar1[8] = bVar35;
              auVar1[9] = bVar36;
              auVar1[10] = bVar37;
              auVar1[0xb] = bVar38;
              auVar1[0xc] = bVar39;
              auVar1[0xd] = bVar40;
              auVar1[0xe] = bVar41;
              auVar1[0xf] = bVar42;
              auVar2[1] = bVar28;
              auVar2[0] = bVar27;
              auVar2[2] = bVar29;
              auVar2[3] = bVar30;
              auVar2[4] = bVar31;
              auVar2[5] = bVar32;
              auVar2[6] = bVar33;
              auVar2[7] = bVar34;
              auVar2[8] = bVar35;
              auVar2[9] = bVar36;
              auVar2[10] = bVar37;
              auVar2[0xb] = bVar38;
              auVar2[0xc] = bVar39;
              auVar2[0xd] = bVar40;
              auVar2[0xe] = bVar41;
              auVar2[0xf] = bVar42;
              auVar43 = NEON_ext(auVar1,auVar2,8,1);
              lVar24 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar26 = *(long *)pbVar15;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
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
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 101637d28; end: 101637e9b;  */

uint FUN_101637d28(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_288 [184];
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_1c8 = puVar7[1];
        uStack_1d0 = *puVar7;
        uStack_1b8 = puVar7[3];
        uStack_1c0 = puVar7[2];
        uStack_1a8 = puVar7[5];
        uStack_1b0 = puVar7[4];
        uStack_198 = puVar7[7];
        uStack_1a0 = puVar7[6];
        uStack_188 = puVar7[9];
        uStack_190 = puVar7[8];
        uStack_178 = puVar7[0xb];
        uStack_180 = puVar7[10];
        uStack_168 = puVar7[0xd];
        uStack_170 = puVar7[0xc];
        uStack_158 = puVar7[0xf];
        uStack_160 = puVar7[0xe];
        uStack_148 = puVar7[0x11];
        uStack_150 = puVar7[0x10];
        uStack_138 = puVar7[0x13];
        uStack_140 = puVar7[0x12];
        uStack_128 = puVar7[0x15];
        uStack_130 = puVar7[0x14];
        uStack_120 = puVar7[0x16];
        uStack_108 = puVar8[1];
        uStack_110 = *puVar8;
        uStack_f8 = puVar8[3];
        uStack_100 = puVar8[2];
        uStack_e8 = puVar8[5];
        uStack_f0 = puVar8[4];
        uStack_d8 = puVar8[7];
        uStack_e0 = puVar8[6];
        uStack_c8 = puVar8[9];
        uStack_d0 = puVar8[8];
        uStack_b8 = puVar8[0xb];
        uStack_c0 = puVar8[10];
        uStack_a8 = puVar8[0xd];
        uStack_b0 = puVar8[0xc];
        uStack_98 = puVar8[0xf];
        uStack_a0 = puVar8[0xe];
        uStack_88 = puVar8[0x11];
        uStack_90 = puVar8[0x10];
        uStack_78 = puVar8[0x13];
        uStack_80 = puVar8[0x12];
        uStack_68 = puVar8[0x15];
        uStack_70 = puVar8[0x14];
        uStack_60 = puVar8[0x16];
        func_0x000101639b9c(&uStack_1d0,auStack_288);
        func_0x000101639b9c(&uStack_110,auStack_288);
        puVar2 = &uStack_1d0;
        func_0x000101637934(puVar2,&uStack_110);
        func_0x000101639bd0(&uStack_110);
        func_0x000101639bd0(&uStack_1d0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_101637e78;
        puVar8 = puVar8 + 0x17;
        puVar7 = puVar7 + 0x17;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    FUN_101636868(uVar3,param_2[1]);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[2];
      FUN_101636d88(uVar3,param_2[2]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[3];
        FUN_101636f50(uVar3,param_2[3]);
        if ((uVar3 & 1) != 0) {
          lVar6 = param_1[4];
          FUN_100e25fcc(lVar6,param_1[5],param_2[4],param_2[5]);
          uVar1 = (uint)lVar6;
          goto LAB_101637e7c;
        }
      }
    }
  }
LAB_101637e78:
  uVar1 = 0;
LAB_101637e7c:
  return uVar1 & 1;
}



/* Entry: 101637e9c; end: 1016380db;  */

void FUN_101637e9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972130;
  func_0x000107c61520(&UNK_10d972130,&UNK_1103ec6c0);
  puRam0000000112dbbb80 = puVar1;
  return;
}



/* Entry: 1016380dc; end: 1016380ef;  */

void FUN_1016380dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016380f0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101638130)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016380f0; end: 10163819b;  */

void FUN_1016380f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d971f38;
  func_0x000107c61520(&UNK_10d971f38,&UNK_1103ec5b8);
  puRam0000000112dbbbf0 = puVar1;
  return;
}



/* Entry: 10163819c; end: 10163819f;  */

void FUN_10163819c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbc10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d971f78;
  func_0x000107c61520(&UNK_10d971f78,&UNK_1103ec5b8);
  puRam0000000112dbbc10 = puVar1;
  return;
}



/* Entry: 1016381a0; end: 1016381df;  */

void FUN_1016381a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbc10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d971f78;
  func_0x000107c61520(&UNK_10d971f78,&UNK_1103ec5b8);
  puRam0000000112dbbc10 = puVar1;
  return;
}



/* Entry: 1016381e0; end: 1016381f3;  */

void FUN_1016381e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016381f4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101638234)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016381f4; end: 10163829f;  */

void FUN_1016381f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972038;
  func_0x000107c61520(&UNK_10d972038,&UNK_1103ec648);
  puRam0000000112dbbc18 = puVar1;
  return;
}



/* Entry: 1016382a0; end: 1016382e3;  */

void FUN_1016382a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1016382e4; end: 1016382e7;  */

void FUN_1016382e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbc38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972078;
  func_0x000107c61520(&UNK_10d972078,&UNK_1103ec648);
  puRam0000000112dbbc38 = puVar1;
  return;
}



/* Entry: 1016382e8; end: 101638327;  */

void FUN_1016382e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbc38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972078;
  func_0x000107c61520(&UNK_10d972078,&UNK_1103ec648);
  puRam0000000112dbbc38 = puVar1;
  return;
}



/* Entry: 101638328; end: 10163834b;  */

void FUN_101638328(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10163834c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10163834c; end: 10163838b;  */

void FUN_10163834c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbc40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972108;
  func_0x000107c61520(&UNK_10d972108,&UNK_1103ec6c0);
  puRam0000000112dbbc40 = puVar1;
  return;
}



/* Entry: 10163838c; end: 1016383a3;  */

void FUN_10163838c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101637e9c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101568d84)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016383a4; end: 1016383e3;  */

void FUN_1016383a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbbc48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d972170;
  func_0x000107c61520(&UNK_10d972170,&UNK_1103ec6c0);
  puRam0000000112dbbc48 = puVar1;
  return;
}



/* Entry: 1016383e4; end: 101638407;  */

void FUN_1016383e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101638408();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


