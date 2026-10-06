/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100555248; end: 10055524b;  */

long * FUN_100555248(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1006baa44(param_1);
  }
  return param_1;
}



/* Entry: 10055524c; end: 100555277;  */

long * FUN_10055524c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1006baa44(param_1);
  }
  return param_1;
}



/* Entry: 100555278; end: 100555283;  */

void FUN_100555278(void)

{
  return;
}



/* Entry: 100555284; end: 1005552af;  */

void FUN_100555284(long *param_1)

{
  FUN_100555278();
  if (*param_1 != 0) {
    FUN_1006baa44();
  }
  FUN_1005552b0();
  return;
}



/* Entry: 1005552b0; end: 1005552c3;  */

void FUN_1005552b0(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *unaff_x19 = *unaff_x20;
  *unaff_x20 = 0;
  return;
}



/* Entry: 1005552c4; end: 1005552ef;  */

void FUN_1005552c4(long *param_1)

{
  FUN_100555278();
  if (*param_1 != 0) {
    func_0x000107c28a34();
  }
  FUN_1005552b0();
  return;
}



/* Entry: 1005552f0; end: 100555303;  */

void FUN_1005552f0(void)

{
  return;
}



/* Entry: 100555304; end: 100555327;  */

void FUN_100555304(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100555328; end: 100555333;  */

void FUN_100555328(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00001240;
  func_0x0001004b55a0();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100555334; end: 100555357;  */

void FUN_100555334(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100555358; end: 100555377;  */

void FUN_100555358(void)

{
  bool bVar1;
  long *unaff_x22;
  
  bVar1 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
  if (bVar1) {
    *unaff_x22 = *unaff_x22 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100555378; end: 10055545b;  */

void FUN_100555378(ulong param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  undefined8 *extraout_x8_00;
  undefined8 *puVar3;
  undefined8 extraout_x9;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  if (*param_2 != 0) {
    func_0x0001004a6390();
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 < *(undefined8 **)(param_1 + 0x18)) {
      lVar5 = unaff_x20[1];
      *puVar2 = extraout_x9;
      puVar2[1] = lVar5;
      if (lVar5 != 0) {
        do {
          FUN_10054e424();
          puVar2 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puVar2 = puVar2 + 2;
    }
    else {
      lVar5 = (long)puVar2 - *(long *)(unaff_x19 + 8);
      uVar1 = (lVar5 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        func_0x000107c29b64();
        if (param_1 >> 0x3c == 0) {
          func_0x000107c60e20(param_1 << 4);
        }
        else {
          func_0x000104bd35f4();
        }
        return;
      }
      uVar4 = (long)*(undefined8 **)(param_1 + 0x18) - *(long *)(unaff_x19 + 8);
      uVar6 = (long)uVar4 >> 3;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7fffffffffffffef < uVar4) {
        uVar6 = 0xfffffffffffffff;
      }
      FUN_10055545c();
      puVar3 = (undefined8 *)(uVar6 + lVar5);
      lVar5 = unaff_x20[1];
      uVar8 = *unaff_x20;
      puVar3[1] = unaff_x20[1];
      *puVar3 = uVar8;
      if (lVar5 != 0) {
        do {
          FUN_10054e424();
          puVar3 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      puVar2 = puVar3 + 2;
      lVar7 = (long)puVar3 - (*(long *)(unaff_x19 + 0x10) - *(long *)(unaff_x19 + 8));
      func_0x000107c610b4(lVar7);
      lVar5 = *(long *)(unaff_x19 + 8);
      *(long *)(unaff_x19 + 8) = lVar7;
      *(undefined8 **)(unaff_x19 + 0x10) = puVar2;
      *(ulong *)(unaff_x19 + 0x18) = uVar6 + (long)param_2 * 0x10;
      if (lVar5 != 0) {
        func_0x000107c60e14();
      }
    }
    *(undefined8 **)(unaff_x19 + 0x10) = puVar2;
  }
  return;
}



/* Entry: 10055545c; end: 10055548b;  */

void FUN_10055545c(ulong param_1)

{
  if (param_1 >> 0x3c == 0) {
    func_0x000107c60e20(param_1 << 4);
  }
  else {
    func_0x000104bd35f4();
  }
  return;
}



/* Entry: 10055548c; end: 100555493;  */

void FUN_10055548c(void)

{
  return;
}



/* Entry: 100555494; end: 1005554b7;  */

void FUN_100555494(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005554b8; end: 1005554df;  */

void FUN_1005554b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[3] = 0x32aaaba7;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[0xc] = 0;
  return;
}



/* Entry: 1005554e0; end: 10055550f;  */

long FUN_1005554e0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xc7ce0c7ce0c7cf) {
    lVar1 = param_2 * 0x148;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005554e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100555510; end: 100555537;  */

long FUN_100555510(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005554e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100555538; end: 10055554f;  */

void FUN_100555538(void)

{
  return;
}



/* Entry: 100555550; end: 10055559f;  */

void FUN_100555550(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd151);
  func_0x0001005555b8();
  func_0x0001005555dc();
  func_0x0001005555ec();
  return;
}



/* Entry: 1005555a0; end: 10055560f;  */

void FUN_1005555a0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100555610; end: 10055565f;  */

void FUN_100555610(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd17b);
  func_0x0001005555b8();
  func_0x0001005555dc();
  func_0x0001005555ec();
  return;
}



/* Entry: 100555660; end: 1005556af;  */

void FUN_100555660(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd223);
  func_0x0001005555b8();
  func_0x0001005555dc();
  func_0x0001005555ec();
  return;
}



/* Entry: 1005556b0; end: 1005556ff;  */

void FUN_1005556b0(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd19c);
  func_0x0001005555b8();
  func_0x0001005555dc();
  func_0x0001005555ec();
  return;
}



/* Entry: 100555700; end: 10055574f;  */

void FUN_100555700(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd1b2);
  func_0x0001005555b8();
  func_0x0001005555dc();
  func_0x0001005555ec();
  return;
}



/* Entry: 100555750; end: 100555763;  */

void FUN_100555750(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    uVar1 = *(undefined2 *)(param_2 + 5);
    *(undefined1 *)((long)param_1 + 0x2a) = *(undefined1 *)((long)param_2 + 0x2a);
    *(undefined2 *)(param_1 + 5) = uVar1;
    *(undefined1 *)(param_1 + 6) = 1;
    return;
  }
  return;
}



/* Entry: 100555764; end: 10055578f;  */

undefined1 * FUN_100555764(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_100555750();
  return param_1;
}



/* Entry: 100555790; end: 1005557d7;  */

void FUN_100555790(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  uVar1 = *(undefined2 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2a) = *(undefined1 *)((long)param_2 + 0x2a);
  *(undefined2 *)(param_1 + 5) = uVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



/* Entry: 1005557d8; end: 1005557ff;  */

undefined8 FUN_1005557d8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c60ca0(param_1 + 0x10);
  func_0x00010054e364();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100555800; end: 10055581f;  */

void FUN_100555800(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1005557d8();
  }
  return;
}



/* Entry: 100555820; end: 10055584b;  */

undefined8 FUN_100555820(void)

{
  undefined1 *puVar1;
  undefined8 unaff_x19;
  
  puVar1 = &stack0x000011c0;
  func_0x000107c60ca0(&stack0x000011d0);
  func_0x00010054e364();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10055584c; end: 1005558b3;  */

/* WARNING: Possible PIC construction at 0x000100555860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005558a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100555894) */
/* WARNING: Removing unreachable block (ram,0x000100555884) */
/* WARNING: Removing unreachable block (ram,0x000100555874) */
/* WARNING: Removing unreachable block (ram,0x000100555864) */
/* WARNING: Removing unreachable block (ram,0x0001005558a4) */

void FUN_10055584c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 1005558b4; end: 100555bc7; -[SCBlizzardEventLogger logSpectrumEvent:] */

/* WARNING: Possible PIC construction at 0x000100555938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005559a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005559e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100555b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100555b50) */
/* WARNING: Removing unreachable block (ram,0x000100555b70) */
/* WARNING: Removing unreachable block (ram,0x000100555b54) */
/* WARNING: Removing unreachable block (ram,0x000100555b40) */
/* WARNING: Removing unreachable block (ram,0x000100555ad8) */
/* WARNING: Removing unreachable block (ram,0x000100555b78) */
/* WARNING: Removing unreachable block (ram,0x000100555a9c) */
/* WARNING: Removing unreachable block (ram,0x000100555adc) */
/* WARNING: Removing unreachable block (ram,0x000100555b58) */
/* WARNING: Removing unreachable block (ram,0x000100555b28) */
/* WARNING: Removing unreachable block (ram,0x000100555aac) */
/* WARNING: Removing unreachable block (ram,0x000100555a38) */
/* WARNING: Removing unreachable block (ram,0x000100555a78) */
/* WARNING: Removing unreachable block (ram,0x000100555a48) */
/* WARNING: Removing unreachable block (ram,0x0001005559ec) */
/* WARNING: Removing unreachable block (ram,0x0001005559f8) */
/* WARNING: Removing unreachable block (ram,0x000100555a00) */
/* WARNING: Removing unreachable block (ram,0x0001005559ac) */
/* WARNING: Removing unreachable block (ram,0x0001005559b8) */
/* WARNING: Removing unreachable block (ram,0x000100555978) */
/* WARNING: Removing unreachable block (ram,0x000100555a08) */
/* WARNING: Removing unreachable block (ram,0x000100555a0c) */
/* WARNING: Removing unreachable block (ram,0x000100555984) */
/* WARNING: Removing unreachable block (ram,0x00010055593c) */
/* WARNING: Removing unreachable block (ram,0x000100555b60) */

void FUN_1005558b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c611a4(param_1);
    puVar1 = PTR_PTR_1126d04c8;
    func_0x000107c610f4(PTR_PTR_1126d04c8);
    uVar2 = param_1;
    func_0x000107c4be04(param_1);
    func_0x000107c61180();
    func_0x000107c4fb9c(param_1);
    func_0x000107c45438(puVar1,param_2,param_3,uVar2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100555bc8; end: 100555d77; -[SCSpectrumFrameStart initFromSpectrumEvent:queueName:region:] */

undefined1 *
FUN_100555bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4b90;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c52060();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c5d970();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c3dd80();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c3dec4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c4e0d0();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c3fb8c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c4b840();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41924();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c3cf24();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x000107c3de64();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100555d78; end: 100555e0f;  */

void FUN_100555d78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  return;
}



/* Entry: 100555e10; end: 100555e17; -[SCSpectrumEvent sessionId] */

undefined8 FUN_100555e10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100555e18; end: 100555e83;  */

void FUN_100555e18(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100555e84; end: 100555e8f;  */

undefined8 FUN_100555e84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100555e90; end: 100555eb3;  */

void FUN_100555e90(long param_1)

{
  FUN_100555e84();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100555eb4; end: 100555ebb;  */

void FUN_100555eb4(void)

{
  return;
}



/* Entry: 100555ebc; end: 100555edf;  */

void FUN_100555ebc(long param_1)

{
  FUN_100554364();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100555ee0; end: 100555f47;  */

undefined1 * FUN_100555ee0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  char cStack_28;
  
  puVar1 = auStack_40;
  FUN_1004b5428(auStack_40,param_1,0x38);
  if (cStack_28 == '\x01') {
    func_0x000107c60d84(auStack_40,0,10);
  }
  else {
    puVar1 = (undefined1 *)0x1;
  }
  func_0x0001004b5574();
  return puVar1;
}



/* Entry: 100555f48; end: 100555f4f; -[SCSpectrumEvent userGuid] */

undefined8 FUN_100555f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100555f50; end: 100555f57; -[SCSpectrumEvent appBuild] */

undefined8 FUN_100555f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100555f58; end: 100555f77; -[SCSpectrumEvent appVersion] */

undefined8 FUN_100555f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100555f78; end: 100555f7f; -[SCSpectrumEvent osVersion] */

undefined8 FUN_100555f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100555f80; end: 100555fa3;  */

void FUN_100555f80(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100555fa4; end: 100555fbf;  */

void FUN_100555fa4(void)

{
  return;
}



/* Entry: 100555fc0; end: 100555fe3;  */

void FUN_100555fc0(long param_1)

{
  func_0x000100555fb4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100555fe4; end: 100555feb;  */

void FUN_100555fe4(void)

{
  return;
}



/* Entry: 100555fec; end: 100556017;  */

long FUN_100555fec(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x555555555555556) {
    lVar1 = param_2 * 0x30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100555fec();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100556018; end: 100556043;  */

long FUN_100556018(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100555fec();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100556044; end: 1005560db;  */

void FUN_100556044(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100556018(auStack_40,1);
  FUN_100556100(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010055613c(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010055613c(auStack_40);
  func_0x000107c60bd8(puVar2);
  pcStack_48 = FUN_1005560dc;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100556044(&uStack_51,puVar2);
  return;
}



/* Entry: 1005560dc; end: 1005560ff;  */

void FUN_1005560dc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100556044(&uStack_11,param_1);
  return;
}



/* Entry: 100556100; end: 100556157;  */

void FUN_100556100(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a66e08;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
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
  param_1[5] = 0;
  return;
}



/* Entry: 100556158; end: 10055615f; -[SCSpectrumEvent clientId] */

undefined8 FUN_100556158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100556160; end: 100556187; -[SCSpectrumEvent locale] */

undefined8 FUN_100556160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100556188; end: 10055618f; -[SCSpectrumEvent deviceModel] */

undefined8 FUN_100556188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100556190; end: 100556197; -[SCSpectrumEvent accountAgeDays] */

undefined8 FUN_100556190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100556198; end: 10055619f; -[SCSpectrumEvent appStartupType] */

undefined4 FUN_100556198(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1005561a0; end: 1005561a7; -[SCBlizzardEventLogger spectrumEventList] */

undefined8 FUN_1005561a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1005561a8; end: 1005561af; -[SCSpectrumEventList spectrumFrameStart] */

undefined8 FUN_1005561a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005561b0; end: 1005564ef; -[SCSpectrumFrameStart isEqualToFrameStart:] */

bool FUN_1005561b0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x000107c52060();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c52060();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar2);
    if (lVar2 == lVar3) {
      lVar2 = param_1;
      func_0x000107c5d970();
      func_0x000107c61180();
      lVar3 = param_3;
      func_0x000107c5d970(param_3);
      func_0x000107c61180();
      lVar4 = lVar2;
      func_0x000107c49d0c(lVar2,param_2,lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      if ((int)lVar4 != 0) {
        lVar2 = param_1;
        func_0x000107c3cf24();
        lVar3 = param_3;
        func_0x000107c3cf24();
        if (lVar2 == lVar3) {
          lVar2 = param_1;
          func_0x000107c3dd80();
          func_0x000107c61180();
          lVar3 = param_3;
          func_0x000107c3dd80(param_3);
          func_0x000107c61180();
          lVar4 = lVar2;
          func_0x000107c49d0c(lVar2,param_2,lVar3);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar2);
          if ((int)lVar4 != 0) {
            lVar2 = param_1;
            func_0x000107c3dec4();
            func_0x000107c61180();
            lVar3 = param_3;
            func_0x000107c3dec4(param_3);
            func_0x000107c61180();
            lVar4 = lVar2;
            func_0x000107c49d0c(lVar2,param_2,lVar3);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar2);
            if ((int)lVar4 != 0) {
              lVar2 = param_1;
              func_0x000107c4e0d0();
              func_0x000107c61180();
              lVar3 = param_3;
              func_0x000107c4e0d0(param_3);
              func_0x000107c61180();
              lVar4 = lVar2;
              func_0x000107c49d0c(lVar2,param_2,lVar3);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar2);
              if ((int)lVar4 != 0) {
                lVar2 = param_1;
                func_0x000107c3fb8c();
                func_0x000107c61180();
                lVar3 = param_3;
                func_0x000107c3fb8c(param_3);
                func_0x000107c61180();
                lVar4 = lVar2;
                func_0x000107c49d0c(lVar2,param_2,lVar3);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar2);
                if ((int)lVar4 != 0) {
                  lVar2 = param_1;
                  func_0x000107c4b840();
                  func_0x000107c61180();
                  lVar3 = param_3;
                  func_0x000107c4b840(param_3);
                  func_0x000107c61180();
                  lVar4 = lVar2;
                  func_0x000107c49d0c(lVar2,param_2,lVar3);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar2);
                  if ((int)lVar4 != 0) {
                    lVar2 = param_1;
                    func_0x000107c41924();
                    func_0x000107c61180();
                    lVar3 = param_3;
                    func_0x000107c41924(param_3);
                    func_0x000107c61180();
                    lVar4 = lVar2;
                    func_0x000107c49d0c(lVar2,param_2,lVar3);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(lVar2);
                    if ((int)lVar4 != 0) {
                      lVar2 = param_1;
                      func_0x000107c3de64();
                      lVar3 = param_3;
                      func_0x000107c3de64();
                      if ((int)lVar2 == (int)lVar3) {
                        lVar2 = param_1;
                        func_0x000107c4f7dc();
                        func_0x000107c61180();
                        lVar3 = param_3;
                        func_0x000107c4f7dc(param_3);
                        func_0x000107c61180();
                        lVar4 = lVar2;
                        func_0x000107c49d0c(lVar2,param_2,lVar3);
                        func_0x000107c61170(lVar3);
                        func_0x000107c61170(lVar2);
                        if ((int)lVar4 != 0) {
                          func_0x000107c4fb9c(param_1);
                          lVar2 = param_3;
                          func_0x000107c4fb9c(param_3);
                          bVar1 = (int)param_1 == (int)lVar2;
                          goto LAB_1005564d0;
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
    }
  }
  bVar1 = false;
LAB_1005564d0:
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 1005564f0; end: 100556533; -[SCBlizzardEventLogger _logSpectrumHeaderStatusGrapheneEvents:] */

void FUN_1005564f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x000107c44490();
  func_0x000107c61180();
  if (param_3 == 0) {
    FUN_10055653c();
  }
  else {
    func_0x000106ac56c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100556534; end: 10055653b; -[SCBlizzardEventLogger graphene] */

undefined8 FUN_100556534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10055653c; end: 1005565b3;  */

void FUN_10055653c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095b520,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1005565b4; end: 1005565e3; -[SCSpectrumEventList setSpectrumFrameStart:] */

void FUN_1005565b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005565e4; end: 100556633; -[SCSpectrumEventList addEvent:] */

/* WARNING: Possible PIC construction at 0x000100556620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100556624) */

void FUN_1005565e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4d2d8(param_1);
  func_0x000107c61180();
  func_0x000107c3d798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100556634; end: 10055663b; -[SCSpectrumEventList mutableEvents] */

undefined8 FUN_100556634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10055663c; end: 1005566c3; -[SCBlizzardEventLogger _shouldPersistAndUploadSpectrumEventImmediately:] */

ulong FUN_10055663c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3bb9c(param_1,param_2,param_3);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = param_1, func_0x000107c3bad4(param_1,param_2,param_3), (uVar1 & 1) == 0)) &&
     ((uVar1 = param_1, func_0x000107c3bbb0(param_1,param_2,param_3), (int)uVar1 == 0 ||
      (uVar1 = param_1, func_0x000107c3bb2c(), (uVar1 & 1) == 0)))) {
    func_0x000107c3bb38(param_1,param_2,param_3);
  }
  else {
    param_1 = 1;
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1005566c4; end: 1005569df; -[SCCustomStoriesObserver _updateCustomStoryMetadataDictionaryWithFetchedResult:] */

undefined * FUN_1005566c4(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar2 = *(undefined **)(param_1 + 0x28);
  func_0x000107c40794();
  puVar14 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar3 = puVar2;
  func_0x000107c3db60();
  func_0x000107c61180();
  func_0x000107c5a74c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar4 = param_3;
  FUN_10050471c(param_3,&PTR___NSConcreteGlobalBlock_110a19100,
                &PTR___NSConcreteGlobalBlock_110a19120);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar3 = puVar4;
  func_0x000107c3db60();
  func_0x000107c61180();
  func_0x000107c5a74c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61174(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar4;
  func_0x000107c61170(uVar6);
  func_0x000107c4d664(*(undefined8 *)(param_1 + 0x38));
  puVar7 = puVar2;
  func_0x000107c3db60();
  func_0x000107c61180();
  puVar3 = puVar7;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c61170(puVar7);
      puVar3 = puVar5;
      func_0x000107c5d25c(puVar14);
      uVar11 = param_1 + 0x48;
      func_0x000107c61148();
      uVar12 = uVar11;
      func_0x000107c61164();
      func_0x000107c61170(uVar11);
      if ((uVar12 & 1) != 0) {
        param_1 = param_1 + 0x48;
        func_0x000107c61148();
        puVar7 = puVar14;
        func_0x000107c3db80();
        func_0x000107c61180();
        puVar3 = puVar7;
        func_0x000107c41134(param_1);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(param_1);
      }
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return param_3;
      }
      func_0x000107c60e78();
      func_0x000107c61174(puVar3);
      puVar14 = puVar3;
      func_0x000107c5b75c();
      func_0x000107c61180();
      puVar5 = puVar14;
      func_0x000107c42ad4();
      func_0x000107c61170(puVar14);
      if ((int)puVar5 == 4) {
        puVar14 = puVar3;
        func_0x000107c5b75c();
        func_0x000107c61180();
        puVar5 = puVar14;
        func_0x000107c3daa0();
        func_0x000107c61180();
        puVar4 = puVar5;
        func_0x000107c3daa4();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar14);
        puVar14 = puVar4;
        func_0x000107c502a8();
        if ((int)puVar14 == 2) {
          puVar5 = PTR_PTR_1126d04a0;
          func_0x000107c3abf0(PTR_PTR_1126d04a0);
          func_0x000107c61180();
          puVar7 = puVar4;
          func_0x000107c5c25c(puVar4);
          func_0x000107c61180();
          puVar2 = puVar7;
          func_0x000107c4c10c();
          func_0x000107c61180();
          puVar14 = puVar5;
          func_0x000107c40404(puVar5);
          func_0x000107c61170(puVar2);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar5);
        }
        else {
          puVar14 = (undefined *)0x1;
        }
        func_0x000107c61170(puVar4);
      }
      else {
        puVar14 = (undefined *)0x0;
      }
      func_0x000107c61170(puVar3);
      return puVar14;
    }
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(puVar7);
      }
      puVar8 = puVar2;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      puVar9 = puVar4;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61174(puVar8);
      func_0x000107c61174(puVar9);
      if (puVar8 == puVar9) {
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
LAB_1005568a8:
        func_0x000107c4ff80(puVar14);
        func_0x000107c4ff80(puVar5);
      }
      else if (puVar9 == (undefined *)0x0) {
        func_0x000107c61170();
      }
      else {
        puVar10 = puVar8;
        func_0x000107c49cec();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        if ((int)puVar10 != 0) goto LAB_1005568a8;
      }
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      puVar15 = puVar15 + 1;
    } while (puVar3 != puVar15);
    puVar3 = puVar7;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 1005569e0; end: 100556b1b; -[SCBlizzardEventLogger _isSnapAirHighPriorityEvent:] */

undefined * FUN_1005569e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5b75c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42ad4();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 4) {
    uVar1 = param_3;
    func_0x000107c5b75c();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c3daa0();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3daa4();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    uVar1 = uVar3;
    func_0x000107c502a8();
    if ((int)uVar1 == 2) {
      puVar4 = PTR_PTR_1126d04a0;
      func_0x000107c3abf0(PTR_PTR_1126d04a0);
      func_0x000107c61180();
      uVar1 = uVar3;
      func_0x000107c5c25c(uVar3);
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c4c10c();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c40404(puVar4,param_2,uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(puVar4);
    }
    else {
      puVar5 = (undefined *)0x1;
    }
    func_0x000107c61170(uVar3);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x000107c61170(param_3);
  return puVar5;
}



/* Entry: 100556b1c; end: 100556b23; -[SCSpectrumEvent spectrumEvent] */

undefined8 FUN_100556b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100556b24; end: 100556b63;  */

undefined8 FUN_100556b24(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x18))();
  return param_1;
}



/* Entry: 100556b64; end: 100556b8b;  */

undefined8 * FUN_100556b64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_100556b24(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 100556b8c; end: 100556ba7;  */

void FUN_100556b8c(long param_1)

{
  FUN_100556b64();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 100556ba8; end: 100556bcf;  */

void FUN_100556ba8(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_110a7c8c8;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  return;
}



/* Entry: 100556bd0; end: 100556c0f;  */

void FUN_100556bd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100556bc4(&PTR_DAT_110a7c8e8);
  FUN_100556c10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100556c10; end: 100556c23;  */

void FUN_100556c10(void)

{
  func_0x00010054f8c8();
  FUN_100292164();
  return;
}



/* Entry: 100556c24; end: 100556c63;  */

void FUN_100556c24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100556bc4(&PTR_DAT_110a7c908);
  FUN_100556c10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100556c64; end: 100556cb7; +[SCBlizzardEventLogger SnapAirFatalCrashTypes] */

void FUN_100556c64(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4ae8 != -1) {
    FUN_10002a2fc(0x1136c4ae8,&PTR___NSConcreteGlobalBlock_11095f0a8);
  }
  uVar1 = uRam00000001136c4ae0;
  func_0x000107c61174(uRam00000001136c4ae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100556cb8; end: 100556cf3;  */

void FUN_100556cb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a74c(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180f68);
  func_0x000107c61180();
  uVar1 = puRam00000001136c4ae0;
  puRam00000001136c4ae0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100556cf4; end: 100556d33;  */

void FUN_100556cf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100556bc4(&PTR_FUN_110a7c928);
  FUN_100556c10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100556d34; end: 100556d37;  */

void FUN_100556d34(void)

{
  return;
}



/* Entry: 100556d38; end: 100556d97;  */

void FUN_100556d38(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100100fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100556d98; end: 100556dbb;  */

void FUN_100556d98(void)

{
  return;
}



/* Entry: 100556dbc; end: 100557ab7;  */

void FUN_100556dbc(undefined8 param_1,undefined8 **param_2,uint *param_3,int param_4,
                  undefined8 param_5,int param_6)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  long lVar13;
  long unaff_x19;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined1 *puVar18;
  uint *puVar19;
  byte bVar20;
  uint *puVar21;
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  uint uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  byte bStack_3c4;
  undefined8 uStack_3c0;
  ulong uStack_3b8;
  undefined1 uStack_3b0;
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined4 auStack_360 [2];
  undefined8 uStack_358;
  undefined8 **ppuStack_350;
  undefined1 uStack_348;
  undefined4 auStack_340 [2];
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  undefined1 auStack_320 [24];
  undefined8 **ppuStack_308;
  undefined8 *puStack_300;
  undefined8 **ppuStack_2f8;
  ulong uStack_2f0;
  undefined1 auStack_2e8 [24];
  byte bStack_2d0;
  undefined8 **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined1 auStack_2a0 [24];
  char cStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 ***pppuStack_238;
  int aiStack_230 [16];
  int iStack_1f0;
  undefined **ppuStack_a8;
  undefined8 uStack_78;
  undefined8 uStack_10;
  
  func_0x000100556da4();
  ppuVar7 = param_2;
  FUN_100557ab8();
  ppuStack_308 = ppuVar7;
  uStack_10 = extraout_x8;
  FUN_10007847c(auStack_320,&UNK_10f4d336a);
  puVar6 = &uStack_250;
  FUN_10002b838(puVar6,param_2);
  uVar12 = CONCAT44(uStack_244,uStack_248);
  if (-1 < (char)uStack_240._7_1_) {
    uVar12 = (ulong)uStack_240._7_1_;
  }
  if (uVar12 == 0) {
    func_0x000100557ad4();
LAB_100556ee4:
    bVar4 = false;
  }
  else {
    func_0x000100557acc();
    func_0x000100557ad4();
    if (((ulong)puVar6 & 1) != 0) goto LAB_100556ee4;
    uStack_78 = 0;
    uStack_250._0_4_ = 0x1087cf48;
    uStack_250._4_4_ = 1;
    ppuStack_a8 = &PTR_DAT_11087cf70;
    FUN_1000daf80(&uStack_250,&PTR_PTR_11087cf88,&uStack_240);
    uStack_250._0_4_ = 0x1087cf48;
    uStack_250._4_4_ = 1;
    ppuStack_a8 = &PTR_DAT_11087cf70;
    FUN_1000daff0(&uStack_240);
    puVar6 = &uStack_240;
    FUN_1000db35c(puVar6,param_2,8);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x000100456940((long)&uStack_250 +
                          *(long *)(CONCAT44(uStack_250._4_4_,(undefined4)uStack_250) + -0x18),4);
    }
    bVar4 = *(int *)((long)aiStack_230 +
                    *(long *)(CONCAT44(uStack_250._4_4_,(undefined4)uStack_250) + -0x18)) == 0;
    func_0x000100557e14(&uStack_250);
  }
  plVar17 = *(long **)(unaff_x19 + 0x340);
  if (plVar17 == (long *)0x0) {
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    FUN_10055806c();
    (**(code **)(*plVar17 + 0x10))(plVar17,&uStack_250,0);
    *(char *)(unaff_x19 + 0x10) = (char)plVar17;
    func_0x000100557ad4();
  }
  auStack_340[0] = 0x20;
  uStack_250._0_4_ = 0x55823c;
  uStack_250._4_4_ = 1;
  uStack_248 = 0x10a7cb68;
  uStack_244 = 1;
  pppuStack_238 = &ppuStack_308;
  uStack_240._0_4_ = (undefined4)unaff_x19;
  uStack_240._4_4_ = (undefined4)((ulong)unaff_x19 >> 0x20);
  ppuVar7 = (undefined8 **)&uStack_250;
  FUN_1005581fc(&puStack_300);
  uStack_330 = ppuStack_2f8;
  puStack_338 = puStack_300;
  uStack_328 = (undefined1)uStack_2f0;
  func_0x0001005e33dc();
  puStack_280 = &UNK_108870410;
  ppuStack_278 = &PTR_FUN_110a7cb80;
  if (param_6 != 0) {
    ppuVar7 = *(undefined8 ***)(unaff_x19 + 0x18);
    func_0x000107c31368(ppuVar7,1,0xb);
  }
  auStack_360[0] = 0x21;
  uStack_358 = 0;
  ppuStack_350 = (undefined8 **)0x0;
  uStack_348 = 0;
  FUN_1004b4e98();
  uStack_348 = 1;
  ppuStack_350 = ppuVar7;
  if (bVar4 == false) {
LAB_1005570b0:
    bVar20 = 0;
LAB_100557300:
    bVar3 = false;
    plVar17 = (long *)(ulong)*param_3;
  }
  else {
    plVar17 = *(long **)(unaff_x19 + 0x340);
    if (plVar17 != (long *)0x0) {
      FUN_10055806c();
      uVar12 = 0;
      plVar8 = plVar17;
      (**(code **)(*plVar17 + 0x18))();
      if ((uVar12 & 1) == 0) {
        plVar8 = (long *)0x0;
      }
      func_0x000100557ad4();
      if ((((long)plVar8 < 1) ||
          (ppuVar7 = ppuStack_308, func_0x000107c613b8(ppuStack_308,&uStack_250), (int)ppuVar7 != 0)
          ) || ((long)iStack_1f0 <= (long)plVar8)) goto LAB_10055702c;
      func_0x000107c345c8(4);
      func_0x000107c342d0();
LAB_1005572fc:
      bVar20 = 1;
      goto LAB_100557300;
    }
LAB_10055702c:
    ppuVar7 = *(undefined8 ***)(unaff_x19 + 0x18);
    FUN_10045e950();
    if ((int)ppuVar7 != 0) {
      func_0x000107c345c8(3);
      func_0x000107c342d0();
      goto LAB_1005572fc;
    }
    FUN_10007847c(&puStack_300,&UNK_10f4d33d9);
    FUN_10054b908(&uStack_250,*(undefined8 *)(unaff_x19 + 0x18),&UNK_10f4d33fe,0x13);
    FUN_10054bec8(&ppuStack_2b8,&uStack_250);
    FUN_10054c948(&ppuStack_2b8);
    func_0x0001005e33f0();
    func_0x0001005e33fc();
    ppuVar7 = &puStack_300;
    FUN_100078bd8();
    if ((((ulong)plVar17 >> 0x20 & 1) == 0) || (iVar15 = (int)plVar17, iVar15 == 0)) {
      func_0x000107c345c8(1);
      func_0x000107c342d0();
      goto LAB_1005572fc;
    }
    if (iVar15 < 1 || (int)*param_3 <= iVar15) goto LAB_1005570b0;
    FUN_10054b908(&uStack_250,*(undefined8 *)(unaff_x19 + 0x18),&UNK_10f4d5744,0x50);
    FUN_10054bec8(&puStack_300,&uStack_250);
    ppuVar9 = &puStack_300;
    FUN_10054c948();
    ppuVar7 = &puStack_300;
    FUN_10054cb18();
    func_0x0001005e33fc();
    bVar3 = false;
    if ((((ulong)ppuVar9 >> 0x20 & 1) == 0) || (((ulong)ppuVar9 & 0xffffffff) == 0)) {
      bVar20 = 0;
    }
    else {
      FUN_1005eb488(&uStack_250,*(undefined8 *)(unaff_x19 + 0x18),&UNK_10f4d5795,0x42);
      puVar6 = &uStack_250;
      FUN_1005ecc88(puVar6);
      FUN_1005ece10(&puStack_300,puVar6);
      FUN_1005ecfd8(&ppuStack_2b8,&puStack_300);
      FUN_1005ed190(&puStack_300);
      if (cStack_288 == '\x01') {
        puVar18 = auStack_2a0;
        func_0x000107c60d84(puVar18,0,10);
        iVar15 = (int)puVar18;
      }
      else {
        iVar15 = 0;
      }
      FUN_1005ed148(&ppuStack_2b8);
      ppuVar7 = (undefined8 **)&uStack_250;
      func_0x000107c2a070();
      if (iVar15 < 1) {
        func_0x0001005ebb2c(&uStack_250,*(undefined8 *)(unaff_x19 + 0x18),&UNK_10f4d3412);
        func_0x000107c60ddc(&puStack_300,iVar15 + 1);
        func_0x000105653850(&uStack_250,&puStack_300);
        ppuVar7 = &puStack_300;
        func_0x000107c60ca0();
        func_0x000107c34744();
        bVar20 = 0;
        bVar3 = true;
      }
      else {
        func_0x000107c345c8(1);
        func_0x000107c342d0();
        bVar3 = false;
        bVar20 = 1;
      }
    }
  }
  puStack_300 = (undefined8 *)0x0;
  ppuStack_2f8 = (undefined8 **)0x0;
  uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
  FUN_1004b4e98();
  uStack_2f0 = CONCAT71(uStack_2f0._1_7_,1);
  ppuStack_2f8 = ppuVar7;
  func_0x0001005e3404();
  uStack_240._0_4_ = 0;
  uStack_240._4_4_ = 0;
  pppuStack_238 = (undefined8 ***)0x0;
  uStack_250._0_4_ = 0x10a609a8;
  uStack_250._4_4_ = 1;
  uStack_248 = 0;
  uStack_244 = 0;
  aiStack_230[0] = 0x26;
  FUN_10002b838(auStack_378,&UNK_10f4d3461);
  puVar6 = &uStack_250;
  FUN_1005e340c(puVar6,auStack_378,*param_3 - (int)plVar17);
  FUN_10002b838(auStack_390,&DAT_10f3af94a);
  FUN_1005e340c(puVar6,auStack_390,*param_3);
  FUN_10002b838(auStack_3a8,"success");
  FUN_1005e34cc(puVar6,auStack_3a8,(int)ppuVar7 != -1);
  ppuVar9 = &puStack_300;
  FUN_1005e3518();
  ppuStack_2b8 = ppuVar9;
  FUN_1005e3554(puVar6,&ppuStack_2b8);
  func_0x0001005e7020();
  func_0x0001005e7028();
  func_0x000107c60ca0(auStack_378);
  func_0x0001005e7030();
  if ((int)ppuVar7 == -1) {
    iVar15 = 0x22;
    FUN_100693a40(0x22,1);
    uStack_250._0_4_ = 1;
    uStack_244 = 0;
    uStack_240._0_4_ = 0;
    uStack_250._4_4_ = 0;
    uStack_248 = 0;
    func_0x000107c342d0();
    func_0x0001005e3404();
    if (iVar15 == -1) {
      uVar16 = *(undefined8 *)(unaff_x19 + 0x18);
      FUN_10055806c();
      func_0x000107c34564(uVar16);
      func_0x000100557ad4();
    }
    bVar20 = 1;
  }
  func_0x0001005529b4(&uStack_358);
  uVar10 = *(ulong *)(*(long *)(unaff_x19 + 0x18) + 0x188);
  ppuVar7 = (undefined8 **)0x9;
  func_0x000107c61398(uVar10,9,0xffffffff);
  *(long *)(unaff_x19 + 0x70) = (long)(int)uVar10 + -100;
  uVar12 = *(ulong *)(param_3 + 4);
  puVar21 = *(uint **)(param_3 + 2);
  if (-1 < (char)*(byte *)((long)param_3 + 0x1f)) {
    uVar12 = (ulong)*(byte *)((long)param_3 + 0x1f);
    puVar21 = param_3 + 2;
  }
  puVar1 = (uint *)((long)puVar21 + uVar12);
LAB_1005574ac:
  lVar13 = (long)puVar1 - (long)puVar21;
  uVar5 = lVar13 == 0xc;
  if (0xb < lVar13) {
    puVar19 = (uint *)((long)puVar21 + lVar13 + -0xb);
    for (; uVar5 = puVar21 == puVar19, !(bool)uVar5; puVar21 = (uint *)((long)puVar21 + 1)) {
      uVar10 = (ulong)(byte)*puVar21;
      ppuVar7 = (undefined8 **)0x63;
      FUN_1005e7038();
      if ((int)uVar10 != 0) {
        lVar13 = 1;
        do {
          if (lVar13 == 0xc) {
            uVar5 = true;
            if (puVar21 == puVar1) goto LAB_100557514;
            puVar21 = puVar21 + 3;
            goto LAB_1005574ac;
          }
          uVar10 = (ulong)*(byte *)((long)puVar21 + lVar13);
          ppuVar7 = (undefined8 **)(ulong)(byte)(&UNK_10f4d57d8)[lVar13];
          FUN_1005e7038();
          lVar13 = lVar13 + 1;
        } while ((uVar10 & 1) != 0);
      }
    }
  }
LAB_100557514:
  if (param_4 == 0) goto joined_r0x00010055759c;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  FUN_1004b4e98();
  uStack_3b0 = 1;
  uStack_3b8 = uVar10;
  func_0x0001005e7930();
  bVar2 = bVar20 | bVar4 ^ 1U;
  if (bVar20 == 0 && (uVar10 & 1) == 0) {
    uStack_250._0_4_ = 3;
    uStack_244 = 0;
    uStack_240._0_4_ = 0;
    uStack_250._4_4_ = 0;
    uStack_248 = 0;
    func_0x000107c342d0();
    func_0x0001005e3404();
    uVar5 = (int)uVar10 == -1;
    if ((bool)uVar5) {
      FUN_10055806c();
      func_0x000107c34354();
      func_0x000100557ad4();
    }
    func_0x0001005e7930();
    if ((uVar10 & 1) == 0) {
      FUN_10055806c();
      func_0x000107c34354();
      func_0x000100557ad4();
    }
    bVar20 = 1;
LAB_100557608:
    func_0x000107c3473c();
  }
  else {
    if (bVar2 != 0) goto LAB_100557608;
    uStack_3d8 = uStack_3d8 & 0xffffff00;
    bStack_3c4 = 0;
    FUN_10002b838(&ppuStack_2b8,&DAT_10f4d3667);
    func_0x0001005ecb80();
    func_0x0001005ecfb8();
    func_0x0001005ed17c();
    puVar6 = (undefined8 *)0x0;
    func_0x000107c60ca0();
    uVar5 = bStack_2d0 == 1;
    if ((bool)uVar5) {
      puVar6 = &uStack_250;
      func_0x000107c60c94(puVar6,auStack_2e8);
    }
    else {
      FUN_10055806c();
    }
    func_0x000100557acc();
    if ((((ulong)puVar6 & 1) == 0) && (func_0x000100557acc(), ((ulong)puVar6 & 1) == 0)) {
      func_0x000100557acc();
      if (((ulong)puVar6 & 1) == 0) {
        bVar4 = false;
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        uVar14 = 1;
      }
      else {
        uVar14 = 0;
        bVar4 = false;
      }
    }
    else {
      uVar14 = 0;
      bVar4 = true;
    }
    func_0x000100557ad4();
    FUN_1005ed210();
    uStack_3cc = (undefined4)uStack_3e0;
    uStack_3c8 = (undefined4)((ulong)uStack_3e0 >> 0x20);
    uStack_3d4 = (undefined4)uStack_3e8;
    uStack_3d0 = (undefined4)((ulong)uStack_3e8 >> 0x20);
    bStack_3c4 = (byte)uVar14;
    uStack_3d8 = uVar14;
    FUN_10002b838(&ppuStack_2b8,&UNK_10f4d366c);
    func_0x0001005ecb80();
    func_0x0001005ecfb8();
    func_0x0001005ed17c();
    func_0x000107c60ca0(&ppuStack_2b8);
    if ((bStack_2d0 & 1) == 0) {
      puVar18 = (undefined1 *)0x0;
    }
    else {
      FUN_1005ed240(&uStack_250,unaff_x19 + 0x40);
      puVar18 = auStack_2e8;
      FUN_1000e107c(puVar18,&uStack_250);
      func_0x000100557ad4();
    }
    FUN_1005ed210();
    if (((ulong)puVar18 & 1) == 0) {
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      uStack_3d0 = 0;
      uStack_3cc = 0;
      uStack_3c8 = 0;
      if ((bStack_3c4 & 1) == 0) {
        bStack_3c4 = 1;
      }
LAB_10055783c:
      func_0x000107c29f3c();
      uVar12 = 0x23;
      FUN_100693a40(0x23,1);
      func_0x0001005e3404();
      uVar5 = (int)uVar12 == -1;
      if ((bool)uVar5) {
        FUN_10055806c();
        func_0x000107c34354();
        func_0x000100557ad4();
      }
      func_0x0001005e7930();
      if ((uVar12 & 1) == 0) {
        FUN_10055806c();
        func_0x000107c34354();
        func_0x000100557ad4();
      }
      func_0x000107c3473c();
      bVar20 = 1;
    }
    else {
      if (bStack_3c4 != 0) goto LAB_10055783c;
      bVar20 = 0;
      if (bVar4) {
        func_0x000107c3473c();
        bVar20 = 0;
      }
    }
  }
  uStack_240._0_4_ = 0;
  uStack_240._4_4_ = 0;
  pppuStack_238 = (undefined8 ***)0x0;
  uStack_250._0_4_ = 0x10a609a8;
  uStack_250._4_4_ = 1;
  uStack_248 = 0;
  uStack_244 = 0;
  aiStack_230[0] = 0x27;
  func_0x0001005ed2d0();
  puVar6 = &uStack_250;
  FUN_1005e34cc(puVar6,auStack_400,bVar2);
  FUN_10002b838(auStack_418,&UNK_10f4d3506);
  FUN_1005e34cc(puVar6,auStack_418,0);
  puVar11 = &uStack_3c0;
  FUN_1005e3518();
  ppuVar7 = &puStack_300;
  puStack_300 = puVar11;
  FUN_1005e3554(puVar6);
  func_0x0001005eb600();
  func_0x0001005ed2d8();
  func_0x0001005e7030();
joined_r0x00010055759c:
  if (bVar20 == 0) {
    uStack_250._0_4_ = 0x25;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_240._0_4_ = 0;
    uStack_240._4_4_ = 0;
    pppuStack_238 = (undefined8 ***)((ulong)pppuStack_238 & 0xffffffffffffff00);
    FUN_1005ed2e0(&uStack_250);
  }
  if (bVar3) {
    ppuVar7 = *(undefined8 ***)(unaff_x19 + 0x18);
    FUN_10054bfa4(&uStack_250,ppuVar7,&UNK_10f4d3511,0x40);
    FUN_1006204e0(&uStack_250);
    func_0x000107c34744();
  }
  puStack_300 = (undefined8 *)CONCAT44(puStack_300._4_4_,3);
  uStack_250._0_4_ = 0x5ed394;
  uStack_250._4_4_ = 1;
  uStack_248 = 0x10a7cb98;
  uStack_244 = 1;
  uStack_240 = auStack_340;
  FUN_1005581fc(&ppuStack_2b8,&uStack_250);
  uStack_2f0 = uStack_2b0;
  ppuStack_2f8 = ppuStack_2b8;
  auStack_2e8[0] = uStack_2a8;
  FUN_1005ed3c8();
  FUN_1005ed2e0(&puStack_300);
  FUN_1005ed2e0(auStack_360);
  FUN_1005ed440(&puStack_280);
  FUN_1005ed4a0(&puStack_280);
  FUN_100078bd8(auStack_320);
  func_0x0001005ed474(uStack_10);
  if ((bool)uVar5) {
    return;
  }
  func_0x000107c60e78();
  while( true ) {
    FUN_1005ed4a0(&puStack_280);
    FUN_100078bd8(auStack_320);
    func_0x000107c34360();
    if ((int)ppuVar7 == 0) break;
    func_0x000104bd46a0();
    func_0x000107c2a070(&uStack_250);
  }
  func_0x000107c60bd8();
  return;
}



/* Entry: 100557ab8; end: 100557adb;  */

void FUN_100557ab8(void)

{
  return;
}



/* Entry: 100557adc; end: 100557c1b; -[SCBlizzardEventLogger _isCriticalAdsTrackEvent:] */

bool FUN_100557adc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x000107c5b75c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c42ad4();
  func_0x000107c61170(uVar2);
  if ((int)uVar3 == 0x12) {
    uVar2 = param_3;
    func_0x000107c5b75c();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3d4f4();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5ce04();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = uVar4;
    func_0x000107c49928();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c43638();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c4a7d8();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    if (uVar6 == 0) {
      bVar1 = false;
    }
    else {
      uVar2 = uVar6;
      func_0x000107c3d504(uVar6);
      bVar1 = (uVar2 & 0xfffffffd) == 0;
    }
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
  }
  else {
    bVar1 = false;
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100557c1c; end: 100557c5f; -[SCBlizzardEventLogger _isTraceEvent:] */

bool FUN_100557c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5b75c(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c42ad4();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 2;
}



/* Entry: 100557c60; end: 100557ca3; -[SCBlizzardEventLogger _isLeadGenAdPreviewEvent:] */

bool FUN_100557c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5b75c(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c42ad4();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 0x35;
}



/* Entry: 100557ca4; end: 100557cab; -[SCSpectrumEventList allEvents] */

void FUN_100557ca4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc53d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getEvents__1125cee98,0xffffffffffffffff);
  return;
}



/* Entry: 100557cac; end: 100557d0f; -[SCSpectrumEventList getEvents:] */

void FUN_100557cac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c40808();
  func_0x000107c4d2d8(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5c274();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100557d10; end: 100557d4b; -[SCSpectrumEventList count] */

undefined8 FUN_100557d10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4d2d8();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c40808();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100557d4c; end: 100557d53; -[SCBlizzardLogQueueConfigAdapter spectrumMinEventsOnDisk] */

undefined8 FUN_100557d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100557d54; end: 100557d83; -[SCBlizzardEventLogger _shouldPersistSpectrumEventImmediately:] */

void FUN_100557d54(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3bbb0();
  if ((int)uVar1 != 0) {
    func_0x000107c3bb2c(param_1);
  }
  return;
}



/* Entry: 100557d84; end: 100557d87; -[SCBlizzardEventLoggerAdapter _appendToSpectrumLogViewerIfLoggingEnabled:region:] */

void FUN_100557d84(void)

{
  return;
}



/* Entry: 100557d88; end: 100557daf; -[SCBlizzardEventLoggerAdapter _outputSepectrumLogToFlipperIfFlipperEnabled:] */

void FUN_100557d88(long param_1)

{
  func_0x000107c436d4();
  func_0x000107c61180();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 100557db0; end: 100557dd7; -[SCBlizzardEventLoggerAdapter flipper] */

void FUN_100557db0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100557dd8; end: 100557ddb; -[SCBlizzardEventLoggerAdapter _exposeToEventObserver:wrappedEvent:region:] */

void FUN_100557dd8(void)

{
  return;
}


