/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100562300; end: 100562387;  */

undefined8 * FUN_100562300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_100555764(param_1 + 0xb,param_2 + 0xb);
  return param_1;
}



/* Entry: 100562388; end: 100562393;  */

long FUN_100562388(long param_1)

{
  return param_1 + 0x58;
}



/* Entry: 100562394; end: 1005623bb;  */

void FUN_100562394(void)

{
  long unaff_x19;
  
  FUN_100562388();
  FUN_100555800();
  FUN_1005623bc(unaff_x19 + 0x10);
  return;
}



/* Entry: 1005623bc; end: 1005623db;  */

void FUN_1005623bc(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10055aeac();
  }
  return;
}



/* Entry: 1005623dc; end: 1005623ff;  */

void FUN_1005623dc(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100562400; end: 10056240b;  */

undefined8 FUN_100562400(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10056240c; end: 10056242f;  */

void FUN_10056240c(long param_1)

{
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100562430; end: 100562437;  */

void FUN_100562430(void)

{
  return;
}



/* Entry: 100562438; end: 10056248b;  */

void FUN_100562438(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056248c; end: 1005624b7;  */

void FUN_10056248c(void)

{
  return;
}



/* Entry: 1005624b8; end: 100562567;  */

long FUN_1005624b8(long param_1)

{
  FUN_1004b55ac(param_1 + 0x90);
  func_0x00010056251c(param_1 + 0x80);
  FUN_10054f9c4(param_1 + 0x70);
  func_0x000100562540(param_1 + 0x60);
  FUN_10056240c(param_1 + 0x50);
  func_0x000100558934(param_1 + 0x40);
  FUN_100562570(param_1 + 0x30);
  func_0x00010055890c(param_1 + 0x20);
  func_0x00010055c4cc(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100562568; end: 10056256f;  */

void FUN_100562568(void)

{
  return;
}



/* Entry: 100562570; end: 100562597;  */

long FUN_100562570(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100562598; end: 1005625db;  */

void FUN_100562598(void)

{
  return;
}



/* Entry: 1005625dc; end: 100562673;  */

void FUN_1005625dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  func_0x0001005625c8();
  uStack_48 = extraout_x8;
  FUN_10056274c(auStack_60,1);
  FUN_1005627d0(uStack_50,param_2,param_3,param_4,param_5);
  uVar1 = uStack_50;
  uStack_50 = 0;
  FUN_1005628bc(uVar1);
  func_0x0001005628c8(auStack_60);
  func_0x0001005628d8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001005628c8(auStack_60);
  func_0x000107c33734();
  pcStack_68 = FUN_100562674;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_1005625dc(&uStack_71,puVar2,param_2,param_3,param_4);
  return;
}



/* Entry: 100562674; end: 10056269f;  */

void FUN_100562674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_1005625dc(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1005626a0; end: 10056273f;  */

void FUN_1005626a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  FUN_100562674(auStack_50,&UNK_10df5b3b8,&UNK_10df5b3c0,&UNK_10df5b3c8,&UNK_10df5b3d0);
  FUN_100562924(auStack_60,param_1,param_2,auStack_50,param_3,&UNK_10df5b3d8,param_4);
  func_0x000100562c44();
  FUN_100562c64();
  func_0x000100562c88(auStack_50);
  return;
}



/* Entry: 100562740; end: 10056274b;  */

void FUN_100562740(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10056274c; end: 10056276b;  */

void FUN_10056274c(void)

{
  FUN_100562740();
  FUN_10056276c();
  FUN_10056279c();
  return;
}



/* Entry: 10056276c; end: 10056279b;  */

void FUN_10056276c(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 10056279c; end: 1005627cf;  */

void FUN_10056279c(undefined8 param_1)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1005627d0; end: 100562807;  */

undefined8 * FUN_1005627d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a73768;
  func_0x0001005627b0(param_1 + 3);
  return param_1;
}



/* Entry: 100562808; end: 100562867;  */

long FUN_100562808(uint param_1,long param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 < 2) {
    return -1;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_3 / param_2;
  }
  dVar2 = (double)lVar1;
  func_0x000107c61054(dVar2);
  dVar3 = (double)param_1;
  func_0x000107c61054(dVar3);
  return (long)((double)(long)(dVar2 / dVar3) + 1.0);
}



/* Entry: 100562868; end: 1005628bb;  */

undefined8 *
FUN_100562868(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  
  *(char *)(param_1 + 1) = (char)param_2;
  *param_1 = &PTR_DAT_110a61210;
  lVar1 = param_4;
  if (param_3 <= param_4) {
    lVar1 = param_3;
  }
  param_1[2] = lVar1;
  param_1[3] = param_4;
  param_1[4] = param_5;
  FUN_100562808(param_2,param_3,param_4);
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 1005628bc; end: 100562923;  */

void FUN_1005628bc(long param_1)

{
  long *unaff_x19;
  
  *unaff_x19 = param_1 + 0x18;
  unaff_x19[1] = param_1;
  return;
}



/* Entry: 100562924; end: 100562943;  */

void FUN_100562924(void)

{
  undefined1 uStack_11;
  
  func_0x000100562908();
  FUN_100562944(&uStack_11);
  return;
}



/* Entry: 100562944; end: 100562a03;  */

void FUN_100562944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001005625c8();
  uStack_58 = extraout_x8;
  FUN_100562a04(auStack_70,1);
  FUN_100562bbc(uStack_60,param_2,param_3,param_4,param_5,param_6,param_7);
  uVar1 = uStack_60;
  uStack_60 = 0;
  FUN_1005628bc(uVar1);
  func_0x000100562c34();
  func_0x0001005628d8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100562c34(auStack_70);
  func_0x000107c33734();
  FUN_100562740();
  FUN_100562a24();
  FUN_10056279c();
  return;
}



/* Entry: 100562a04; end: 100562a23;  */

void FUN_100562a04(void)

{
  FUN_100562740();
  FUN_100562a24();
  FUN_10056279c();
  return;
}



/* Entry: 100562a24; end: 100562a4f;  */

undefined8 *
FUN_100562a24(undefined8 *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  if (0x111111111111111 < param_2) {
    func_0x000104bd35f4();
    *param_1 = &PTR_DAT_110a60a60;
    param_1[1] = param_6;
    FUN_10002b838(auStack_68,&UNK_10f4bc39d);
    FUN_1005549b0(param_1 + 2,param_2,auStack_68);
    func_0x000107c60ca0(auStack_68);
    lVar2 = param_3[1];
    uVar3 = *param_3;
    param_1[0xf] = param_3[1];
    param_1[0xe] = uVar3;
    if (lVar2 != 0) {
      do {
        FUN_100562bf4();
      } while (extraout_w10 != 0);
    }
    lVar2 = param_4[1];
    uVar3 = *param_4;
    param_1[0x11] = param_4[1];
    param_1[0x10] = uVar3;
    if (lVar2 != 0) {
      do {
        FUN_100562bf4();
      } while (extraout_w10_00 != 0);
    }
    lVar2 = param_5[1];
    uVar3 = *param_5;
    param_1[0x13] = param_5[1];
    param_1[0x12] = uVar3;
    if (lVar2 != 0) {
      do {
        FUN_100562bf4();
      } while (extraout_w10_01 != 0);
    }
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    lVar2 = param_7[1];
    uVar3 = *param_7;
    param_1[0x1a] = param_7[1];
    param_1[0x19] = uVar3;
    if (lVar2 != 0) {
      do {
        FUN_100562bf4();
      } while (extraout_w10_02 != 0);
    }
    return param_1;
  }
  puVar1 = (undefined8 *)(param_2 * 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(puVar1);
  return puVar1;
}



/* Entry: 100562a50; end: 100562b63;  */

undefined8 *
FUN_100562a50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_DAT_110a60a60;
  param_1[1] = param_6;
  FUN_10002b838(auStack_58,&UNK_10f4bc39d);
  FUN_1005549b0(param_1 + 2,param_2,auStack_58);
  func_0x000107c60ca0(auStack_58);
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[0xf] = param_3[1];
  param_1[0xe] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100562bf4();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[0x11] = param_4[1];
  param_1[0x10] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100562bf4();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_5[1];
  uVar2 = *param_5;
  param_1[0x13] = param_5[1];
  param_1[0x12] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100562bf4();
    } while (extraout_w10_01 != 0);
  }
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  lVar1 = param_7[1];
  uVar2 = *param_7;
  param_1[0x1a] = param_7[1];
  param_1[0x19] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100562bf4();
    } while (extraout_w10_02 != 0);
  }
  return param_1;
}



/* Entry: 100562b64; end: 100562bbb;  */

undefined8
FUN_100562b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_100562a50();
  FUN_100562c04(&uStack_30);
  return param_1;
}



/* Entry: 100562bbc; end: 100562bf3;  */

undefined8 * FUN_100562bbc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a737b8;
  FUN_100562b64(param_1 + 3);
  return param_1;
}



/* Entry: 100562bf4; end: 100562c03;  */

void FUN_100562bf4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100562c04; end: 100562c27;  */

void FUN_100562c04(long param_1)

{
  func_0x0001004b55a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100562c28; end: 100562c63;  */

void FUN_100562c28(void)

{
  return;
}



/* Entry: 100562c64; end: 100562ccf;  */

void FUN_100562c64(long param_1)

{
  func_0x000100562c58();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100562cd0; end: 10056305f;  */

void FUN_100562cd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined1 auStack_140 [24];
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte bStack_100;
  undefined1 auStack_f8 [24];
  undefined1 uStack_e0;
  undefined8 ***pppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  char cStack_c0;
  undefined1 auStack_b8 [40];
  byte bStack_90;
  long lStack_88;
  long lStack_80;
  char cStack_70;
  ulong auStack_68 [2];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  auStack_b8[0] = 0;
  bStack_90 = 0;
  auStack_f8[0] = 0;
  uStack_e0 = 0;
  func_0x0001004b547c(&pppuStack_d8,param_3,0xa4,auStack_f8);
  FUN_1001148fc(auStack_f8);
  if (cStack_c0 == '\x01') {
    ppuStack_128 = &PTR_DAT_110d11970;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    if (-1 < (char)bStack_c1) {
      uStack_d0 = (ulong)bStack_c1;
      pppuStack_d8 = &pppuStack_d8;
    }
    FUN_100651b10(&ppuStack_58,pppuStack_d8,uStack_d0);
    FUN_10006369c(&ppuStack_128,ppuStack_58,(int)uStack_50 - (int)ppuStack_58);
    if (bStack_90 == 1) {
      func_0x000107c305f8(auStack_b8,&ppuStack_128);
    }
    else {
      func_0x000107c305f0(auStack_b8,0,&ppuStack_128);
      bStack_90 = 1;
    }
    FUN_100100fec(&ppuStack_58);
    func_0x000107c305f4(&ppuStack_128);
  }
  else {
    plVar4 = (long *)*param_2;
    FUN_10002b838(auStack_140,&UNK_10f4bd3bc);
    (**(code **)(*plVar4 + 0x38))(auStack_68,plVar4);
    if ((auStack_68[0] == 0) ||
       (uVar1 = auStack_68[0], FUN_1004a6058(auStack_68[0],auStack_140), (int)uVar1 == 0)) {
      (**(code **)(*plVar4 + 0x20))(&lStack_88,plVar4,auStack_140);
      if ((cStack_70 == '\x01') && (lStack_88 != lStack_80)) {
        ppuStack_58 = &PTR_DAT_110d11970;
        uStack_50 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_48 = 0;
        pppuVar3 = &ppuStack_58;
        FUN_10006369c(pppuVar3,lStack_88,(int)lStack_80 - (int)lStack_88);
        if (((ulong)pppuVar3 & 1) == 0) {
          FUN_100563060();
        }
        else {
          func_0x000107c33f4c();
        }
        func_0x000107c33f44();
      }
      else {
        FUN_100563060();
      }
      FUN_1002a2294(&lStack_88);
    }
    else {
      FUN_1004a6058(auStack_68[0],auStack_140);
      if ((auStack_68[0] & 1) == 0) {
        FUN_100563060();
      }
      else {
        ppuStack_58 = &PTR_DAT_110d11970;
        uStack_50 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_48 = 0;
        func_0x000107c33f48();
        ppuVar2 = *(undefined ***)(auStack_68[0] + 0x10);
        if (*(int *)(auStack_68[0] + 0x1c) != 6) {
          ppuVar2 = &PTR_PTR_1134051b0;
        }
        ppuVar2 = ppuVar2 + 5;
        func_0x000107c30240(ppuVar2,&UNK_10f4bd3d1,0x29,&ppuStack_58);
        if (((ulong)ppuVar2 & 1) == 0) {
          func_0x000107c30330(&lStack_88,&ppuStack_58);
          func_0x000107c33f48();
          func_0x000107c60ca0(&lStack_88);
          FUN_100563060();
        }
        else {
          func_0x000107c33f4c();
        }
        func_0x000107c33f44();
      }
    }
    FUN_1004a65f8(auStack_68);
    if (bStack_90 == bStack_100) {
      if (bStack_90 != 0) {
        func_0x000107c29dd0(auStack_b8,&ppuStack_128);
      }
    }
    else if (bStack_90 == 0) {
      func_0x000107c29dd4(auStack_b8,&ppuStack_128);
      bStack_90 = 1;
    }
    else {
      func_0x000107c305f4();
      bStack_90 = 0;
    }
    FUN_10056306c(&ppuStack_128);
    func_0x000107c60ca0(auStack_140);
  }
  if ((bStack_90 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    FUN_10056308c(param_1);
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    *(undefined1 *)((long)param_1 + 0x27) = 0;
  }
  else {
    func_0x000107c29324(param_1,auStack_b8);
  }
  FUN_1001148fc(&pppuStack_d8);
  FUN_10056306c(auStack_b8);
  return;
}



/* Entry: 100563060; end: 10056306b;  */

void FUN_100563060(void)

{
  return;
}



/* Entry: 10056306c; end: 10056308b;  */

void FUN_10056306c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c305f4();
  }
  return;
}



/* Entry: 10056308c; end: 1005630cf;  */

void FUN_10056308c(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1005630d0; end: 1005630f3;  */

void FUN_1005630d0(long param_1)

{
  func_0x0001005630c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005630f4; end: 10056310b;  */

void FUN_1005630f4(void)

{
  return;
}



/* Entry: 10056310c; end: 1005631e7;  */

undefined8 *
FUN_10056310c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a613e0;
  uVar2 = *param_2;
  uVar1 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = uVar2;
  uStack_48 = uVar1;
  FUN_10002b838(&uStack_68,&UNK_10f4afe70);
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[6] = uStack_60;
  param_1[5] = uStack_68;
  param_1[7] = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x42) = 0;
  func_0x000107c60ca0(&uStack_68);
  FUN_10054f94c(&uStack_50);
  uVar2 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *param_4;
  param_1[0xc] = param_4[1];
  param_1[0xb] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  return param_1;
}



/* Entry: 1005631e8; end: 10056322f;  */

void FUN_1005631e8(long param_1)

{
  func_0x00010054e364();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100563230; end: 100563243;  */

void FUN_100563230(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 100563244; end: 10056337b;  */

long * FUN_100563244(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar5;
  long lVar6;
  long lVar7;
  long alStack_c8 [2];
  long *plStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  plVar3 = param_1;
  FUN_100563230();
  func_0x0001005633d0();
  if ((int)plVar3 != 0) {
    plVar3 = (long *)*param_2;
    lVar7 = param_1[2];
    lVar6 = param_1[1];
    plStack_b8 = plVar3;
    if (param_1[2] != 0) {
      do {
        func_0x000107c31ee8();
      } while (extraout_w10 != 0);
      plStack_b8 = (long *)*param_2;
    }
    lStack_b0 = param_2[1];
    if (lStack_b0 != 0) {
      plVar5 = (long *)(lStack_b0 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_a8 = *param_3;
    lStack_a0 = param_3[1];
    if (lStack_a0 != 0) {
      plVar5 = (long *)(lStack_a0 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puStack_98 = &UNK_108669a1c;
    ppuStack_90 = &PTR_DAT_110a61470;
    alStack_c8[0] = 0;
    alStack_c8[1] = 0;
    if (lStack_b0 != 0) {
      plVar5 = (long *)(lStack_b0 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_88 = lVar6;
    lStack_80 = lVar7;
    plStack_78 = plStack_b8;
    lStack_70 = lStack_b0;
    uStack_68 = uStack_a8;
    lStack_60 = lStack_a0;
    if (lStack_a0 != 0) {
      do {
        func_0x000107c31ee8();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x000107c31edc(ppuStack_90);
    plVar3 = alStack_c8;
    func_0x000107c289ec();
  }
  FUN_100563414();
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c31edc(ppuStack_90);
    plVar3 = alStack_c8;
    func_0x000107c289ec();
    func_0x000107c31ee0();
    plVar5 = (long *)((long)plVar3 + 0x29);
    if ((*(byte *)((long)plVar3 + 0x2a) & 1) == 0) {
      plVar4 = (long *)*plVar3;
      if (plVar4 == (long *)0x0) {
        plVar5 = plVar3 + 5;
      }
      else {
        (**(code **)(*plVar4 + 0x10))(plVar4,plVar3 + 2,(char)plVar3[5]);
        *(ushort *)((long)plVar3 + 0x29) = (ushort)plVar4 | 0x100;
      }
    }
    return plVar5;
  }
  return plVar3;
}



/* Entry: 10056337c; end: 100563413;  */

long * FUN_10056337c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)((long)param_1 + 0x29);
  if ((*(byte *)((long)param_1 + 0x2a) & 1) == 0) {
    plVar1 = (long *)*param_1;
    if (plVar1 == (long *)0x0) {
      plVar2 = param_1 + 5;
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 2,(char)param_1[5]);
      *(ushort *)((long)param_1 + 0x29) = (ushort)plVar1 | 0x100;
    }
  }
  return plVar2;
}



/* Entry: 100563414; end: 10056342b;  */

void FUN_100563414(void)

{
  return;
}



/* Entry: 10056342c; end: 10056362f;  */

void FUN_10056342c(long param_1)

{
  func_0x0001005630c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100563630; end: 10056363b;  */

undefined8 FUN_100563630(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10056363c; end: 10056365f;  */

void FUN_10056363c(long param_1)

{
  FUN_100563630();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100563660; end: 100563673;  */

void FUN_100563660(void)

{
  return;
}



/* Entry: 100563674; end: 1005636cf;  */

undefined8 FUN_100563674(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10055c568();
  func_0x0001005636ac();
  return param_1;
}



/* Entry: 1005636d0; end: 1005636df;  */

void FUN_1005636d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_x9;
  
  param_2[3] = in_x9;
  *param_2 = param_1;
  return;
}



/* Entry: 1005636e0; end: 10056375f;  */

void FUN_1005636e0(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100563760; end: 10056376f;  */

void FUN_100563760(void)

{
  bool bVar1;
  long *unaff_x23;
  
  bVar1 = (bool)ExclusiveMonitorPass(unaff_x23,0x10);
  if (bVar1) {
    *unaff_x23 = *unaff_x23 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100563770; end: 1005637cb;  */

void FUN_100563770(long param_1)

{
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005637cc; end: 1005637db;  */

void FUN_1005637cc(void)

{
  bool bVar1;
  long *unaff_x21;
  
  bVar1 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
  if (bVar1) {
    *unaff_x21 = *unaff_x21 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1005637dc; end: 100563813;  */

undefined8 FUN_1005637dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10055c568();
  func_0x000100555e3c();
  return param_1;
}



/* Entry: 100563814; end: 10056381f;  */

void FUN_100563814(void)

{
  return;
}



/* Entry: 100563820; end: 1005638c7;  */

undefined8 *
FUN_100563820(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110a6a640;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10054f8dc(param_1 + 5,param_4);
  return param_1;
}



/* Entry: 1005638c8; end: 10056390f;  */

void FUN_1005638c8(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100563910; end: 10056391f;  */

void FUN_100563910(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100563920; end: 100563c4f;  */

undefined8 * FUN_100563920(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 uVar3;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = &PTR_DAT_110a6ef40;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_100563910();
    } while (extraout_w10 != 0);
    lVar1 = *param_2;
  }
  lVar2 = *(long *)(lVar1 + 0xf8);
  uVar3 = *(undefined8 *)(lVar1 + 0xf0);
  param_1[4] = *(undefined8 *)(lVar1 + 0xf8);
  param_1[3] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_100563910();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_1[1];
  lVar1 = *(long *)(lVar2 + 0x1c0);
  if (lVar1 != 0) {
    FUN_100563c50();
    (*extraout_x8)();
    lVar2 = param_1[1];
  }
  *(char *)(param_1 + 5) = (char)lVar1;
  lVar1 = *(long *)(lVar2 + 0x1b0);
  if (lVar1 != 0) {
    FUN_100563c50();
    (*extraout_x8_00)();
  }
  *(char *)((long)param_1 + 0x29) = (char)lVar1;
  func_0x000100563c6c();
  if (unaff_x24 != 0) {
    do {
      FUN_100563910();
    } while (extraout_w10_01 != 0);
  }
  FUN_10002b838(&uStack_78,&UNK_10f4ba4de);
  param_1[6] = unaff_x23;
  param_1[7] = unaff_x24;
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[10] = uStack_68;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  func_0x000107c60ca0();
  FUN_10054f94c(&stack0xffffffffffffffa0);
  func_0x000100563c6c();
  if (unaff_x24 != 0) {
    do {
      FUN_100563910();
    } while (extraout_w10_02 != 0);
  }
  FUN_10002b838(&uStack_a0,&UNK_10f4ba515);
  param_1[0xc] = unaff_x23;
  param_1[0xd] = unaff_x24;
  param_1[0xf] = uStack_98;
  param_1[0xe] = uStack_a0;
  param_1[0x10] = uStack_90;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((long)param_1 + 0x8a) = 0;
  func_0x000107c60ca0(&uStack_a0);
  FUN_10054f94c(&stack0xffffffffffffff78);
  func_0x000100563c6c();
  if (unaff_x24 != 0) {
    do {
      FUN_100563910();
    } while (extraout_w10_03 != 0);
  }
  FUN_10002b838(&uStack_c8,&UNK_10f4ba53f);
  param_1[0x12] = unaff_x23;
  param_1[0x13] = unaff_x24;
  param_1[0x15] = uStack_c0;
  param_1[0x14] = uStack_c8;
  param_1[0x16] = uStack_b8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xba) = 0;
  func_0x000107c60ca0(&uStack_c8);
  FUN_10054f94c(&stack0xffffffffffffff50);
  func_0x000100563c6c();
  if (unaff_x24 != 0) {
    do {
      FUN_100563910();
    } while (extraout_w10_04 != 0);
  }
  FUN_10002b838(&uStack_f0,&UNK_10f4ba569);
  param_1[0x18] = unaff_x23;
  param_1[0x19] = unaff_x24;
  param_1[0x1b] = uStack_e8;
  param_1[0x1a] = uStack_f0;
  param_1[0x1c] = uStack_e0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xea) = 0;
  func_0x000107c60ca0(&uStack_f0);
  FUN_10054f94c(&stack0xffffffffffffff28);
  uVar3 = *(undefined8 *)(*param_2 + 0x1f0);
  lVar1 = *(long *)(*param_2 + 0x1f8);
  uStack_100 = uVar3;
  lStack_f8 = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100563910();
    } while (extraout_w10_05 != 0);
  }
  func_0x000100563c78();
  param_1[0x1e] = uVar3;
  param_1[0x1f] = lVar1;
  uStack_100 = 0;
  lStack_f8 = 0;
  param_1[0x21] = uStack_110;
  param_1[0x20] = uStack_118;
  param_1[0x22] = uStack_108;
  *(undefined2 *)(param_1 + 0x23) = 1;
  *(undefined1 *)((long)param_1 + 0x11a) = 0;
  func_0x000100563c80();
  FUN_10054f94c(&uStack_100);
  return param_1;
}



/* Entry: 100563c50; end: 100563c87;  */

void FUN_100563c50(void)

{
  return;
}



/* Entry: 100563c88; end: 100563d9b;  */

undefined8 * FUN_100563c88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a6d700;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  *(undefined8 *)((long)param_1 + 0x31) = 0;
  FUN_10054eaf8(param_1 + 9);
  FUN_10054ec9c(param_1 + 10);
  uVar1 = *param_2;
  param_1[0xc] = param_2[1];
  param_1[0xb] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = *param_3;
  param_1[0x10] = param_3[1];
  param_1[0xf] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_100563e2c(auStack_60);
  FUN_100564044(param_1 + 0xd,auStack_60);
  FUN_100563fd8();
  return param_1;
}



/* Entry: 100563d9c; end: 100563dab;  */

void FUN_100563d9c(void)

{
  return;
}



/* Entry: 100563dac; end: 100563e2b;  */

void FUN_100563dac(undefined8 param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_100563d9c();
  uStack_28 = extraout_x8;
  FUN_100563e78(auStack_40,1);
  FUN_100563ee0(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  FUN_100563f10(param_1,lVar1 + 0x18);
  func_0x000100564018(auStack_40);
  func_0x000100564028(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c33370();
  func_0x000100564018();
  func_0x000107c33350();
  pcStack_48 = FUN_100563e2c;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100563dac(&uStack_51);
  return;
}



/* Entry: 100563e2c; end: 100563e77;  */

void FUN_100563e2c(void)

{
  undefined1 uStack_11;
  
  FUN_100563dac(&uStack_11);
  return;
}



/* Entry: 100563e78; end: 100563e9f;  */

long FUN_100563e78(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100563e48();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100563ea0; end: 100563edf;  */

void FUN_100563ea0(void)

{
  return;
}



/* Entry: 100563ee0; end: 100563f0f;  */

undefined8 * FUN_100563ee0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a6d8d0;
  func_0x000100563ea8(param_1 + 3);
  return param_1;
}



/* Entry: 100563f10; end: 100563f23;  */

void FUN_100563f10(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != (long *)0x0) &&
     ((plVar1 = param_2, param_2[1] == 0 || (func_0x000107c333e0(), (bool)in_ZR)))) {
    lVar2 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_100563f98();
      } while (extraout_w11 != 0);
      do {
        FUN_100563f98();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = param_2[1];
    lStack_20 = *param_2;
    *param_2 = (long)plVar1;
    param_2[1] = lVar2;
    FUN_100563fb4(&lStack_20);
    FUN_100563fd8();
    return;
  }
  return;
}



/* Entry: 100563f24; end: 100563f97;  */

void FUN_100563f24(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (func_0x000107c333e0(), (bool)in_ZR))))
  {
    uVar1 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      do {
        FUN_100563f98();
      } while (extraout_w11 != 0);
      do {
        FUN_100563f98();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_100563fb4(&uStack_20);
    FUN_100563fd8();
    return;
  }
  return;
}



/* Entry: 100563f98; end: 100563fb3;  */

void FUN_100563f98(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100563fb4; end: 100563fd7;  */

void FUN_100563fb4(long param_1)

{
  func_0x000100563fa8();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100563fd8; end: 100563feb;  */

void FUN_100563fd8(void)

{
  func_0x000100563fe0();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100563fec; end: 10056400f;  */

void FUN_100563fec(long param_1)

{
  func_0x000100563fe0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100564010; end: 100564043;  */

void FUN_100564010(void)

{
  return;
}



/* Entry: 100564044; end: 10056407b;  */

undefined8 * FUN_100564044(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_100563fd8();
  return param_1;
}



/* Entry: 10056407c; end: 100564087;  */

void FUN_10056407c(void)

{
  return;
}



/* Entry: 100564088; end: 1005640ab;  */

void FUN_100564088(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005640ac; end: 1005640b7;  */

undefined8 FUN_1005640ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005640b8; end: 1005640db;  */

void FUN_1005640b8(long param_1)

{
  FUN_1005640ac();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1005640dc; end: 1005640e3;  */

void FUN_1005640dc(void)

{
  return;
}



/* Entry: 1005640e4; end: 100564107;  */

void FUN_1005640e4(long param_1)

{
  FUN_100563630();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100564108; end: 100564117;  */

void FUN_100564108(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100564118; end: 1005641bf;  */

undefined8 * FUN_100564118(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_100564108();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000100564164(&uStack_30);
  return param_1;
}



/* Entry: 1005641c0; end: 1005641fb;  */

void FUN_1005641c0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1005641fc; end: 10056420f;  */

void FUN_1005641fc(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar2 = plVar1;
    func_0x000100552990();
    *plVar1 = *plVar1 + (long)plVar2;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 100564210; end: 100564277;  */

void FUN_100564210(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x88;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110d9ab28;
  FUN_1004501b0(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 100564278; end: 10056431f;  */

void FUN_100564278(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_100564210(&uStack_40,param_5);
  FUN_100554b74();
  FUN_100554db8(&uStack_50,auStack_60,&uStack_40,&uStack_30);
  uVar5 = uStack_48;
  uVar4 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = lStack_38;
  param_1[2] = uStack_40;
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000100564c18(&uStack_50);
  func_0x000100554e8c();
  FUN_100450518(&uStack_40);
  return;
}



/* Entry: 100564320; end: 1005644af;  */

void FUN_100564320(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x48;
  func_0x000107c61148(lVar1);
  func_0x000107c3be5c(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c61170(lVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1005647e8;
  puStack_80 = &UNK_110a194e0;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174(uVar3);
  uStack_68 = uVar3;
  func_0x000107c6111c(auStack_58,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar3);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar3;
  func_0x000107c61174(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar4;
  func_0x000107c61174(uVar3);
  ppuVar2 = &puStack_98;
  uStack_60 = uVar3;
  func_0x000107c61184();
  if (*(long *)(param_1 + 0x30) == 0) {
    (*(code *)ppuVar2[2])(ppuVar2,param_2,0);
  }
  else {
    param_1 = param_1 + 0x48;
    func_0x000107c61148(param_1);
    func_0x000107c3b690();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1005644b0; end: 10056451b; -[SCStoriesProtobufRequestManager _logLatencyWithRequestSource:fetchStartTime:step:] */

/* WARNING: Possible PIC construction at 0x000100564500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100564504) */

void FUN_1005644b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  dVar2 = param_1;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c6071c();
  func_0x000107c4bd00(dVar2 - param_1,uVar1,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10056451c; end: 100564583; -[SCStoriesGrapheneMetricsEmitter logNetworkLatencyWithClassIdentifier:step:latency:] */

void FUN_10056451c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110db9f38);
  func_0x000107c61180();
  FUN_100564584(param_1,*(undefined8 *)(param_2 + 8),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100564584; end: 1005645ef;  */

void FUN_100564584(double param_1,long param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  if (param_2 != 0) {
    FUN_1005645f0(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005645f0; end: 100564783;  */

void FUN_1005645f0(long param_1,undefined *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = &UNK_110a03808;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar2 = &UNK_10f44f7d9;
      }
      else {
        puVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110a03808;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a03808,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  puVar3 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(puVar3);
  func_0x000107c61174(*(undefined8 *)(puVar2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(puVar2 + 0x28));
  func_0x000107c60bc8(puVar3 + 0x30,*(undefined8 *)(puVar2 + 0x30),7);
  func_0x000107c60bc8(puVar3 + 0x38,*(undefined8 *)(puVar2 + 0x38),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(puVar3 + 0x40,puVar2 + 0x40);
  return;
}



/* Entry: 100564784; end: 1005647db;  */

void FUN_100564784(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60bc8(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  func_0x000107c60bc8(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 1005647dc; end: 1005647e7;  */

void FUN_1005647dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005647e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1005647e8; end: 1005648e3;  */

/* WARNING: Possible PIC construction at 0x000100564838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100564864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010056483c) */
/* WARNING: Removing unreachable block (ram,0x000100564868) */

void FUN_1005647e8(long param_1)

{
  long lVar1;
  
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  func_0x000107c61180();
  lVar1 = param_1 + 0x40;
  func_0x000107c61148(lVar1);
  func_0x000107c3be5c(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


