/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103cea0c4; end: 103cea177;  */

/* WARNING: Removing unreachable block (ram,0x000103cea174) */

void FUN_103cea0c4(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_103cf28e4();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1106fc6a8,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103cea178; end: 103cea1d3;  */

void FUN_103cea178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103cea1d4();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103cea1d4; end: 103cea27b;  */

void FUN_103cea1d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_280 [288];
  undefined1 auStack_160 [288];
  
  puVar2 = auStack_280;
  func_0x000107c610b4(auStack_160,param_1 + 0x10,0x120);
  iVar1 = (int)auStack_160;
  func_0x000100d6be5c();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_280,auStack_160,0x120);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_103cf28e4();
    (*pcVar3)(auStack_280,1,&UNK_1106fc6a8,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103cea27c; end: 103cea2c3;  */

void FUN_103cea27c(undefined8 *param_1)

{
  undefined1 auStack_140 [288];
  
  func_0x000103cef6c8(auStack_140);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  func_0x000107c610b4(param_1 + 2,auStack_140,0x120);
  return;
}



/* Entry: 103cea2c4; end: 103cea2e7;  */

undefined1  [16] FUN_103cea2c4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4cf0;
  auVar1._0_8_ = 0xd00000000000002f;
  return auVar1;
}



/* Entry: 103cea2e8; end: 103cea317;  */

undefined1  [16] FUN_103cea2e8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103cea318; end: 103cea34b;  */

void FUN_103cea318(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103cea34c; end: 103cea35f;  */

undefined8 FUN_103cea34c(void)

{
  return 0x103cea35c;
}



/* Entry: 103cea360; end: 103cea373;  */

void FUN_103cea360(void)

{
  FUN_103cea0c4();
  return;
}



/* Entry: 103cea374; end: 103cea3db;  */

void FUN_103cea374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_170 [304];
  
  func_0x000107c610b4(auStack_170);
  FUN_103cea178(param_1,param_2,param_3);
  return;
}



/* Entry: 103cea3dc; end: 103cea413;  */

uint FUN_103cea3dc(long param_1,long param_2)

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
  func_0x000103cf9e3c();
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



/* Entry: 103cea414; end: 103cea463;  */

uint FUN_103cea414(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_280 [304];
  undefined1 auStack_150 [304];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_150,param_1,0x130);
  func_0x000107c610b4(auStack_280);
  FUN_103cf1338(auStack_280,auStack_150);
  return uVar1 & 1;
}



/* Entry: 103cea464; end: 103cea503;  */

/* WARNING: Possible PIC construction at 0x000103cea4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cea4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cea4b4) */
/* WARNING: Removing unreachable block (ram,0x000103cea4c4) */

void FUN_103cea464(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001958 != -1) {
    func_0x000107c61568(0x113001958,FUN_103cea07c);
  }
  uVar5 = uRam000000011380edd8;
  uVar4 = uRam000000011380edd0;
  uVar3 = uRam000000011380edc8;
  uVar2 = uRam000000011380edc0;
  uVar1 = uRam000000011380edb8;
  *param_1 = uRam000000011380edb0;
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



/* Entry: 103cea504; end: 103cea517;  */

void FUN_103cea504(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001f70;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001f70,&UNK_10dc7a3e0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cea518; end: 103cea54b;  */

void FUN_103cea518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cea54c; end: 103cea657;  */

void FUN_103cea54c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [304];
  
  func_0x000107c610b4(auStack_160);
  func_0x000107c6068c(auStack_1a8,0);
  func_0x000107c5fa50(auStack_1a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cea658; end: 103cea6ab;  */

uint FUN_103cea658(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_280 [304];
  undefined1 auStack_150 [304];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_280,param_1,0x130);
  func_0x000107c610b4(auStack_150,param_2,0x130);
  FUN_103cf1338(auStack_280,auStack_150);
  return uVar1 & 1;
}



/* Entry: 103cea6ac; end: 103cea6f3;  */

void FUN_103cea6ac(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a6c0,0x86,2);
  uRam000000011380ede8 = uStack_38;
  uRam000000011380ede0 = uStack_40;
  uRam000000011380edf8 = uStack_28;
  uRam000000011380edf0 = uStack_30;
  uRam000000011380ee08 = uStack_18;
  uRam000000011380ee00 = uStack_20;
  return;
}



/* Entry: 103cea6f4; end: 103cea86b;  */

/* WARNING: Removing unreachable block (ram,0x000103cea85c) */

void FUN_103cea6f4(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 2) goto LAB_103cea76c;
            pcVar3 = *(code **)(param_3 + 0x150);
          }
        }
        else if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 4) goto LAB_103cea76c;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_103cea75c:
        (*pcVar3)();
      }
      else {
        if (6 < lVar1) {
          if (lVar1 == 7) {
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          else if (lVar1 == 8) {
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 9) goto LAB_103cea76c;
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          goto LAB_103cea75c;
        }
        if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103cf15a4();
          (*pcVar3)(unaff_x20 + 0x40,&UNK_1106fc9a0,lVar1,param_2,param_3);
        }
        else if (lVar1 == 6) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103cea75c;
        }
      }
LAB_103cea76c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103cea86c; end: 103ceaa87;  */

void FUN_103cea86c(undefined8 param_1,undefined8 param_2,long param_3)

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
      uVar3 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar1 = uVar3 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar3,3,param_2,param_3), unaff_x21 == 0)) {
        uVar3 = unaff_x20[6];
        uVar2 = unaff_x20[7];
        uVar1 = uVar3 & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(uVar3,uVar2,4,param_2,param_3), unaff_x21 == 0)) {
          if (unaff_x20[8] != 0) {
            uStack_48 = (undefined1)unaff_x20[9];
            pcVar4 = *(code **)(param_3 + 0x80);
            uStack_50 = unaff_x20[8];
            func_0x000103cf15a4();
            (*pcVar4)(&uStack_50,5,&UNK_1106fc9a0,uVar3,param_2,param_3);
            if (unaff_x21 != 0) {
              return;
            }
          }
          uVar3 = unaff_x20[0xb];
          uVar1 = unaff_x20[10] & 0xffffffffffff;
          if ((uVar3 & 0x2000000000000000) != 0) {
            uVar1 = uVar3 >> 0x38 & 0xf;
          }
          if ((uVar1 == 0) ||
             ((**(code **)(param_3 + 0x70))(unaff_x20[10],uVar3,6,param_2,param_3), unaff_x21 == 0))
          {
            uVar3 = unaff_x20[0xd];
            uVar1 = unaff_x20[0xc] & 0xffffffffffff;
            if ((uVar3 & 0x2000000000000000) != 0) {
              uVar1 = uVar3 >> 0x38 & 0xf;
            }
            if ((uVar1 == 0) ||
               ((**(code **)(param_3 + 0x70))(unaff_x20[0xc],uVar3,7,param_2,param_3),
               unaff_x21 == 0)) {
              uVar3 = unaff_x20[0xf];
              uVar1 = unaff_x20[0xe] & 0xffffffffffff;
              if ((uVar3 & 0x2000000000000000) != 0) {
                uVar1 = uVar3 >> 0x38 & 0xf;
              }
              if ((uVar1 == 0) ||
                 ((**(code **)(param_3 + 0x70))(unaff_x20[0xe],uVar3,8,param_2,param_3),
                 unaff_x21 == 0)) {
                uVar3 = unaff_x20[0x11];
                uVar1 = unaff_x20[0x10] & 0xffffffffffff;
                if ((uVar3 & 0x2000000000000000) != 0) {
                  uVar1 = uVar3 >> 0x38 & 0xf;
                }
                if ((uVar1 == 0) ||
                   ((**(code **)(param_3 + 0x70))(unaff_x20[0x10],uVar3,9,param_2,param_3),
                   unaff_x21 == 0)) {
                  func_0x000100076224(param_1,unaff_x20[0x12],unaff_x20[0x13],param_2,param_3);
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



/* Entry: 103ceaa88; end: 103ceaaeb;  */

void FUN_103ceaa88(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0xe000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0xe000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0xe000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0xe000000000000000;
  param_1[0x13] = 0xc000000000000000;
  param_1[0x12] = 0;
  return;
}



/* Entry: 103ceaaec; end: 103ceab1b;  */

undefined1  [16] FUN_103ceaaec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x90);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98));
  return auVar1;
}



/* Entry: 103ceab1c; end: 103ceab4f;  */

void FUN_103ceab1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  *(undefined8 *)(unaff_x20 + 0x90) = param_1;
  *(undefined8 *)(unaff_x20 + 0x98) = param_2;
  return;
}



/* Entry: 103ceab50; end: 103ceab63;  */

undefined1  [16] FUN_103ceab50(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x90;
  auVar1._0_8_ = 0x103ceab60;
  return auVar1;
}



/* Entry: 103ceab64; end: 103ceab8b;  */

void FUN_103ceab64(void)

{
  FUN_103cea6f4();
  return;
}



/* Entry: 103ceab8c; end: 103ceab8f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ceab8c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103ceab90; end: 103ceabc7;  */

uint FUN_103ceab90(long param_1,long param_2)

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
  func_0x000103cf9dfc();
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



/* Entry: 103ceabc8; end: 103ceac47;  */

uint FUN_103ceabc8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_28 = param_1[0x13];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_c8 = unaff_x20[0x13];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_103cf0c80(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103ceac48; end: 103ceace7;  */

/* WARNING: Possible PIC construction at 0x000103ceac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ceaca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ceac98) */
/* WARNING: Removing unreachable block (ram,0x000103ceaca8) */

void FUN_103ceac48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001968 != -1) {
    func_0x000107c61568(0x113001968,FUN_103cea6ac);
  }
  uVar5 = uRam000000011380ee08;
  uVar4 = uRam000000011380ee00;
  uVar3 = uRam000000011380edf8;
  uVar2 = uRam000000011380edf0;
  uVar1 = uRam000000011380ede8;
  *param_1 = uRam000000011380ede0;
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



/* Entry: 103ceace8; end: 103cead23;  */

void FUN_103ceace8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001f60;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001f60,&UNK_10dc7a3d8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cead24; end: 103ceae5f;  */

void FUN_103cead24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
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
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_38 = unaff_x20[0x13];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ceae60; end: 103ceaedf;  */

uint FUN_103ceae60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_103cf0c80(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103ceaee0; end: 103ceaf27;  */

void FUN_103ceaee0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a680,0x37,2);
  uRam000000011380ee18 = uStack_38;
  uRam000000011380ee10 = uStack_40;
  uRam000000011380ee28 = uStack_28;
  uRam000000011380ee20 = uStack_30;
  uRam000000011380ee38 = uStack_18;
  uRam000000011380ee30 = uStack_20;
  return;
}



/* Entry: 103ceaf28; end: 103ceafc7;  */

/* WARNING: Possible PIC construction at 0x000103ceaf74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ceaf84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ceaf78) */
/* WARNING: Removing unreachable block (ram,0x000103ceaf88) */

void FUN_103ceaf28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001980 != -1) {
    func_0x000107c61568(0x113001980,FUN_103ceaee0);
  }
  uVar5 = uRam000000011380ee38;
  uVar4 = uRam000000011380ee30;
  uVar3 = uRam000000011380ee28;
  uVar2 = uRam000000011380ee20;
  uVar1 = uRam000000011380ee18;
  *param_1 = uRam000000011380ee10;
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



/* Entry: 103ceafc8; end: 103ceb00f;  */

void FUN_103ceafc8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a640,0x36,2);
  uRam000000011380ee48 = uStack_38;
  uRam000000011380ee40 = uStack_40;
  uRam000000011380ee58 = uStack_28;
  uRam000000011380ee50 = uStack_30;
  uRam000000011380ee68 = uStack_18;
  uRam000000011380ee60 = uStack_20;
  return;
}



/* Entry: 103ceb010; end: 103ceb047;  */

undefined1  [16] FUN_103ceb010(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4d50;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 103ceb048; end: 103ceb07f;  */

uint FUN_103ceb048(long param_1,long param_2)

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
  func_0x000103cf9dbc();
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



/* Entry: 103ceb080; end: 103ceb11f;  */

/* WARNING: Possible PIC construction at 0x000103ceb0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ceb0dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ceb0d0) */
/* WARNING: Removing unreachable block (ram,0x000103ceb0e0) */

void FUN_103ceb080(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001988 != -1) {
    func_0x000107c61568(0x113001988,FUN_103ceafc8);
  }
  uVar5 = uRam000000011380ee68;
  uVar4 = uRam000000011380ee60;
  uVar3 = uRam000000011380ee58;
  uVar2 = uRam000000011380ee50;
  uVar1 = uRam000000011380ee48;
  *param_1 = uRam000000011380ee40;
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



/* Entry: 103ceb120; end: 103ceb133;  */

void FUN_103ceb120(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001f50;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001f50,&UNK_10dc7a3d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ceb134; end: 103ceb16b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ceb134(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103cf2cd4();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103ceb16c; end: 103ceb1b3;  */

void FUN_103ceb16c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a610,0x29,2);
  uRam000000011380ee78 = uStack_38;
  uRam000000011380ee70 = uStack_40;
  uRam000000011380ee88 = uStack_28;
  uRam000000011380ee80 = uStack_30;
  uRam000000011380ee98 = uStack_18;
  uRam000000011380ee90 = uStack_20;
  return;
}



/* Entry: 103ceb1b4; end: 103ceb2c3;  */

/* WARNING: Removing unreachable block (ram,0x000103ceb27c) */
/* WARNING: Removing unreachable block (ram,0x000103ceb2c0) */

void FUN_103ceb1b4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x180);
        func_0x000103ce0150();
        lVar2 = unaff_x20 + 0x20;
        puVar3 = &UNK_1106fc370;
LAB_103ceb2ac:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103cdfc00();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110700950;
          goto LAB_103ceb2ac;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x150))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103ceb2c4; end: 103ceb407;  */

void FUN_103ceb2c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  ulong *unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  code *pcVar7;
  undefined1 *puStack_60;
  undefined1 uStack_58;
  
  ppuVar5 = &puStack_60;
  uVar1 = unaff_x20[1];
  uVar2 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar2 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar2 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 == 0)) {
    puVar6 = (undefined1 *)unaff_x20[2];
    uVar2 = unaff_x20[3];
    puVar3 = puVar6;
    func_0x000103d1d830(puVar6,(char)uVar2);
    puVar4 = (undefined1 *)0x0;
    func_0x000103d1d830(0,1);
    if (puVar3 != puVar4) {
      pcVar7 = *(code **)(param_3 + 0x80);
      puStack_60 = puVar6;
      uStack_58 = (char)uVar2;
      func_0x000103cdfc00();
      (*pcVar7)(&puStack_60,2,&UNK_110700950,puVar4,param_2,param_3);
      puVar4 = (undefined1 *)ppuVar5;
      if (unaff_x21 != 0) {
        return;
      }
    }
    if ((undefined1 *)unaff_x20[4] != (undefined1 *)0x0) {
      uStack_58 = (undefined1)unaff_x20[5];
      pcVar7 = *(code **)(param_3 + 0x80);
      puStack_60 = (undefined1 *)unaff_x20[4];
      func_0x000103ce0150();
      (*pcVar7)(&puStack_60,3,&UNK_1106fc370,puVar4,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 103ceb408; end: 103ceb46b;  */

void FUN_103ceb408(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 103ceb46c; end: 103ceb493;  */

void FUN_103ceb46c(void)

{
  FUN_103ceb1b4();
  return;
}



/* Entry: 103ceb494; end: 103ceb4cb;  */

uint FUN_103ceb494(long param_1,long param_2)

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
  func_0x000103cf9d7c();
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



/* Entry: 103ceb4cc; end: 103ceb513;  */

uint FUN_103ceb4cc(undefined8 *param_1)

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
  FUN_103cf01f0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103ceb514; end: 103ceb5b3;  */

/* WARNING: Possible PIC construction at 0x000103ceb560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ceb570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ceb564) */
/* WARNING: Removing unreachable block (ram,0x000103ceb574) */

void FUN_103ceb514(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113001998 != -1) {
    func_0x000107c61568(0x113001998,FUN_103ceb16c);
  }
  uVar5 = uRam000000011380ee98;
  uVar4 = uRam000000011380ee90;
  uVar3 = uRam000000011380ee88;
  uVar2 = uRam000000011380ee80;
  uVar1 = uRam000000011380ee78;
  *param_1 = uRam000000011380ee70;
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



/* Entry: 103ceb5b4; end: 103ceb5c7;  */

void FUN_103ceb5b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001f40;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001f40,&UNK_10dc7a3c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ceb5c8; end: 103ceb6cb;  */

void FUN_103ceb5c8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103ceb6cc; end: 103ceb75b;  */

uint FUN_103ceb6cc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cf01f0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103ceb75c; end: 103ceb793;  */

undefined1  [16] FUN_103ceb75c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4db0;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 103ceb794; end: 103ceb7cb;  */

uint FUN_103ceb794(long param_1,long param_2)

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
  func_0x000103cf9d3c();
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



/* Entry: 103ceb7cc; end: 103ceb86b;  */

/* WARNING: Possible PIC construction at 0x000103ceb818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ceb828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ceb81c) */
/* WARNING: Removing unreachable block (ram,0x000103ceb82c) */

void FUN_103ceb7cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130019a8 != -1) {
    func_0x000107c61568(0x1130019a8,0x103ceb714);
  }
  uVar5 = uRam000000011380eec8;
  uVar4 = uRam000000011380eec0;
  uVar3 = uRam000000011380eeb8;
  uVar2 = uRam000000011380eeb0;
  uVar1 = uRam000000011380eea8;
  *param_1 = uRam000000011380eea0;
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



/* Entry: 103ceb86c; end: 103ceb87f;  */

void FUN_103ceb86c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001f30;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001f30,&UNK_10dc7a3c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103ceb880; end: 103ceb8b7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103ceb880(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103cf2ecc();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103ceb8b8; end: 103ceb8ff;  */

void FUN_103ceb8b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a5b0,0x39,2);
  uRam000000011380eed8 = uStack_38;
  uRam000000011380eed0 = uStack_40;
  uRam000000011380eee8 = uStack_28;
  uRam000000011380eee0 = uStack_30;
  uRam000000011380eef8 = uStack_18;
  uRam000000011380eef0 = uStack_20;
  return;
}



/* Entry: 103ceb900; end: 103ceb9ab;  */

void FUN_103ceb900(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_103ceb93c;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_103ceb93c:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_103ceb93c;
}



/* Entry: 103ceb9ac; end: 103ceba7f;  */

void FUN_103ceb9ac(undefined8 param_1,undefined8 param_2,long param_3)

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
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103ceba80; end: 103cebad7;  */

void FUN_103ceba80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 103cebad8; end: 103cebaff;  */

void FUN_103cebad8(void)

{
  FUN_103ceb900();
  return;
}



/* Entry: 103cebb00; end: 103cebb37;  */

uint FUN_103cebb00(long param_1,long param_2)

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
  func_0x000103cf9cfc();
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



/* Entry: 103cebb38; end: 103cebb7f;  */

uint FUN_103cebb38(undefined8 *param_1)

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
  FUN_103cf086c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103cebb80; end: 103cebc1f;  */

/* WARNING: Possible PIC construction at 0x000103cebbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cebbdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cebbd0) */
/* WARNING: Removing unreachable block (ram,0x000103cebbe0) */

void FUN_103cebb80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130019b8 != -1) {
    func_0x000107c61568(0x1130019b8,FUN_103ceb8b8);
  }
  uVar5 = uRam000000011380eef8;
  uVar4 = uRam000000011380eef0;
  uVar3 = uRam000000011380eee8;
  uVar2 = uRam000000011380eee0;
  uVar1 = uRam000000011380eed8;
  *param_1 = uRam000000011380eed0;
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



/* Entry: 103cebc20; end: 103cebc33;  */

void FUN_103cebc20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001f20;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001f20,&UNK_10dc7a3b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cebc34; end: 103cebc67;  */

void FUN_103cebc34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103cebc68; end: 103cebd6b;  */

void FUN_103cebc68(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103cebd6c; end: 103cebdfb;  */

uint FUN_103cebd6c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cf086c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103cebdfc; end: 103cebe33;  */

undefined1  [16] FUN_103cebdfc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4e20;
  auVar1._0_8_ = 0xd000000000000033;
  return auVar1;
}



/* Entry: 103cebe34; end: 103cebe9b;  */

void FUN_103cebe34(void)

{
  FUN_103cece40();
  return;
}



/* Entry: 103cebe9c; end: 103cebed3;  */

uint FUN_103cebe9c(long param_1,long param_2)

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
  func_0x000103cf9cbc();
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



/* Entry: 103cebed4; end: 103cebf73;  */

/* WARNING: Possible PIC construction at 0x000103cebf20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cebf30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cebf24) */
/* WARNING: Removing unreachable block (ram,0x000103cebf34) */

void FUN_103cebed4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130019c8 != -1) {
    func_0x000107c61568(0x1130019c8,0x103cebdb4);
  }
  uVar5 = uRam000000011380ef28;
  uVar4 = uRam000000011380ef20;
  uVar3 = uRam000000011380ef18;
  uVar2 = uRam000000011380ef10;
  uVar1 = uRam000000011380ef08;
  *param_1 = uRam000000011380ef00;
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



/* Entry: 103cebf74; end: 103cebf87;  */

void FUN_103cebf74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001f10;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001f10,&UNK_10dc7a3b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cebf88; end: 103cebfbf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cebf88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103cf30c4();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103cebfc0; end: 103cec007;  */

void FUN_103cebfc0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a580,0x26,2);
  uRam000000011380ef38 = uStack_38;
  uRam000000011380ef30 = uStack_40;
  uRam000000011380ef48 = uStack_28;
  uRam000000011380ef40 = uStack_30;
  uRam000000011380ef58 = uStack_18;
  uRam000000011380ef50 = uStack_20;
  return;
}



/* Entry: 103cec008; end: 103cec0a7;  */

/* WARNING: Possible PIC construction at 0x000103cec054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cec064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cec058) */
/* WARNING: Removing unreachable block (ram,0x000103cec068) */

void FUN_103cec008(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130019e0 != -1) {
    func_0x000107c61568(0x1130019e0,FUN_103cebfc0);
  }
  uVar5 = uRam000000011380ef58;
  uVar4 = uRam000000011380ef50;
  uVar3 = uRam000000011380ef48;
  uVar2 = uRam000000011380ef40;
  uVar1 = uRam000000011380ef38;
  *param_1 = uRam000000011380ef30;
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



/* Entry: 103cec0a8; end: 103cec0ef;  */

void FUN_103cec0a8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a560,0x1d,2);
  uRam000000011380ef68 = uStack_38;
  uRam000000011380ef60 = uStack_40;
  uRam000000011380ef78 = uStack_28;
  uRam000000011380ef70 = uStack_30;
  uRam000000011380ef88 = uStack_18;
  uRam000000011380ef80 = uStack_20;
  return;
}



/* Entry: 103cec0f0; end: 103cec127;  */

undefined1  [16] FUN_103cec0f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4e60;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 103cec128; end: 103cec15f;  */

uint FUN_103cec128(long param_1,long param_2)

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
  func_0x000103cf9c7c();
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



/* Entry: 103cec160; end: 103cec1ff;  */

/* WARNING: Possible PIC construction at 0x000103cec1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cec1bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cec1b0) */
/* WARNING: Removing unreachable block (ram,0x000103cec1c0) */

void FUN_103cec160(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130019e8 != -1) {
    func_0x000107c61568(0x1130019e8,FUN_103cec0a8);
  }
  uVar5 = uRam000000011380ef88;
  uVar4 = uRam000000011380ef80;
  uVar3 = uRam000000011380ef78;
  uVar2 = uRam000000011380ef70;
  uVar1 = uRam000000011380ef68;
  *param_1 = uRam000000011380ef60;
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



/* Entry: 103cec200; end: 103cec213;  */

void FUN_103cec200(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001f00;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001f00,&UNK_10dc7a3a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cec214; end: 103cec24b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cec214(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103cf31c0();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103cec24c; end: 103cec293;  */

void FUN_103cec24c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7a540,0x15,2);
  uRam000000011380ef98 = uStack_38;
  uRam000000011380ef90 = uStack_40;
  uRam000000011380efa8 = uStack_28;
  uRam000000011380efa0 = uStack_30;
  uRam000000011380efb8 = uStack_18;
  uRam000000011380efb0 = uStack_20;
  return;
}



/* Entry: 103cec294; end: 103cec367;  */

/* WARNING: Removing unreachable block (ram,0x000103cec364) */

void FUN_103cec294(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_103cf33b8();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_1106fce50,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103cec368; end: 103cec3f3;  */

void FUN_103cec368(undefined8 param_1,undefined8 param_2,long param_3)

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
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_103cec3f4(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103cec3f4; end: 103cec477;  */

void FUN_103cec3f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x28);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103cf33b8();
    (*pcVar1)(&uStack_70,2,&UNK_1106fce50,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103cec478; end: 103cec4bb;  */

void FUN_103cec478(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}



/* Entry: 103cec4bc; end: 103cec4eb;  */

undefined1  [16] FUN_103cec4bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103cec4ec; end: 103cec51f;  */

void FUN_103cec4ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103cec520; end: 103cec533;  */

undefined1  [16] FUN_103cec520(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103cec530;
  return auVar1;
}



/* Entry: 103cec534; end: 103cec547;  */

void FUN_103cec534(void)

{
  FUN_103cec294();
  return;
}



/* Entry: 103cec548; end: 103cec587;  */

void FUN_103cec548(void)

{
  FUN_103cec368();
  return;
}



/* Entry: 103cec588; end: 103cec58b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103cec588(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103cec58c; end: 103cec5c3;  */

uint FUN_103cec58c(long param_1,long param_2)

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
  func_0x000103cf9c3c();
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



/* Entry: 103cec5c4; end: 103cec61b;  */

uint FUN_103cec5c4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103cf090c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103cec61c; end: 103cec6bb;  */

/* WARNING: Possible PIC construction at 0x000103cec668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cec678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cec66c) */
/* WARNING: Removing unreachable block (ram,0x000103cec67c) */

void FUN_103cec61c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130019f8 != -1) {
    func_0x000107c61568(0x1130019f8,FUN_103cec24c);
  }
  uVar5 = uRam000000011380efb8;
  uVar4 = uRam000000011380efb0;
  uVar3 = uRam000000011380efa8;
  uVar2 = uRam000000011380efa0;
  uVar1 = uRam000000011380ef98;
  *param_1 = uRam000000011380ef90;
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



/* Entry: 103cec6bc; end: 103cec6f7;  */

void FUN_103cec6bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113001ef0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113001ef0,&UNK_10dc7a3a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103cec6f8; end: 103cec80b;  */

void FUN_103cec6f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103cec80c; end: 103cec8ab;  */

uint FUN_103cec80c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103cf090c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103cec8ac; end: 103cec8e3;  */

undefined1  [16] FUN_103cec8ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b4ec0;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}


