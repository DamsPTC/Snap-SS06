/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006abecc; end: 1006abf5b;  */

void FUN_1006abecc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  FUN_1006abeb4();
  func_0x000107c3e170();
  func_0x000107c61180();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_1006abf5c(lVar2);
    func_0x000107c61180();
    FUN_1006ae24c();
    func_0x0001006ae25c();
  }
  func_0x000107c40794(param_1);
  FUN_10049eafc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1006abf5c; end: 1006ac08f;  */

void FUN_1006abf5c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126ba688;
  func_0x000107c610f4(PTR_PTR_1126ba688);
  lVar3 = param_1;
  func_0x000100101220(param_1);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  lVar4 = param_1 + 0x28;
  FUN_1001011a4(lVar4);
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar5 = param_1 + 0x40;
    func_0x000108646610(lVar5);
    func_0x000107c61180();
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x4c))
    ;
    func_0x000107c61180();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  func_0x000107c460e0(puVar2,param_2,lVar3,uVar6,(long)iVar1,lVar4,lVar5,puVar7);
  FUN_1006ae194();
  func_0x000107c61170(lVar5);
  func_0x0001006ae1a0();
  func_0x0001006ae1a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006ac090; end: 1006ac093;  */

void FUN_1006ac090(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1006ac094; end: 1006ac0b3;  */

void FUN_1006ac094(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1006ac0b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006ac0b4; end: 1006ac0d3;  */

long FUN_1006ac0b4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006a6250();
  FUN_1006a627c();
  lVar1 = unaff_x19;
  FUN_1000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1006ac0d4; end: 1006ac187;  */

void FUN_1006ac0d4(void)

{
  code *extraout_x8;
  long unaff_x20;
  
  FUN_1006ac188();
  FUN_1006342d8();
  FUN_100634368();
  func_0x000100634378();
  func_0x000100634384();
  FUN_1004b5564();
  func_0x0001006ac194();
  FUN_100634748();
  func_0x0001006ac19c();
  if ((**(byte **)(unaff_x20 + 0x90) & 1) == 0) {
    func_0x0001006ac1a4();
    FUN_10054fc78();
    (*extraout_x8)();
    func_0x0001006ac194();
    func_0x0001006a5d5c();
    FUN_1006b3b38();
    func_0x0001005529b4(unaff_x20 + 0x60);
  }
  func_0x0001006a5d80();
  func_0x0001006a5d88();
  return;
}



/* Entry: 1006ac188; end: 1006ac1cf;  */

long FUN_1006ac188(void)

{
  long unaff_x29;
  
  return unaff_x29 + -0x28;
}



/* Entry: 1006ac1d0; end: 1006ac573;  */

undefined1 * FUN_1006ac1d0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 auStack_168 [9];
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined4 auStack_100 [10];
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  FUN_100635400();
  uStack_70 = extraout_x8;
  FUN_10007847c(auStack_a8,&UNK_10f4b2048);
  uStack_120 = (ulong)uStack_120._4_4_ << 0x20;
  FUN_1005fde8c(&uStack_b0,*(long *)(param_1 + 0xb0) + 0xc0,&uStack_120);
  FUN_10002b838(&uStack_120,&DAT_10f4b05df);
  FUN_10002b838(&uStack_90,(&PTR_DAT_110a67660)[param_2]);
  FUN_1006ac574();
  func_0x0001006ac584();
  func_0x0001006ac58c();
  FUN_10002b838(&uStack_120,&DAT_10f3811b7);
  func_0x000100635410((long)*(int *)(param_1 + 0x7c));
  FUN_10002b838(&uStack_90);
  FUN_1006ac574();
  func_0x0001006ac584();
  func_0x0001006ac58c();
  uVar6 = uStack_b0;
  func_0x000100635480();
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = extraout_x8_00 + 0x10;
  lStack_118 = 0;
  auStack_100[0] = 0x39;
  FUN_10002b838(auStack_c8,&DAT_10f4b2075);
  FUN_1005f08fc(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0xb0));
  (*extraout_x8_01)();
  func_0x0001006ac59c();
  puVar3 = &uStack_120;
  FUN_1005504ac(puVar3,auStack_c8);
  func_0x0001006354a8(*(undefined4 *)(param_1 + 0x7c));
  FUN_1006354d8();
  FUN_1005fe148(uVar6,puVar3);
  func_0x000107c60ca0(auStack_c8);
  puVar3 = &uStack_120;
  FUN_1005505e4();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28);
  uStack_90 = uVar6;
  lStack_88 = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x00010054e67c();
    } while (extraout_w10 != 0);
  }
  FUN_1005f06e8();
  plVar8 = puVar3 + 1;
  *plVar8 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110a67780;
  puVar9 = puVar3 + 3;
  *puVar9 = &PTR_FUN_110a677d0;
  uStack_90 = 0;
  lStack_88 = 0;
  puVar3[4] = uVar6;
  puVar3[5] = lVar7;
  uStack_120 = 0;
  lStack_118 = 0;
  *(int *)(puVar3 + 6) = param_2;
  FUN_100606fd8(puVar3 + 7,param_4);
  func_0x0001006ac5b8();
  puStack_d8 = puVar9;
  puStack_d0 = puVar3;
  FUN_10057498c(&uStack_90);
  FUN_1006ac5c0();
  lStack_118 = lStack_88;
  uStack_120 = uStack_90;
  if (lStack_88 != 0) {
    do {
      func_0x00010054e67c();
    } while (extraout_w10_00 != 0);
  }
  uStack_108 = CONCAT44(uStack_108._4_4_,param_2);
  lStack_110 = param_1;
  FUN_10060e2d4(auStack_100,param_3);
  FUN_1006ac5fc();
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  puVar4 = auStack_168;
  FUN_1006ac674(puVar4,&uStack_120);
  puStack_78 = (undefined8 *)0x0;
  FUN_1006ac6b8();
  *puVar4 = &PTR_FUN_110a67818;
  FUN_1006ac674(puVar4 + 1,auStack_168);
  uStack_170 = uStack_b0;
  puStack_78 = puVar4;
  uStack_b0 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_180 = puVar9;
  puStack_178 = puVar3;
  FUN_1006ac6d4(uVar6,&uStack_90,&uStack_170,&puStack_180);
  FUN_1006b3a34(&puStack_180);
  func_0x0001006b3aa8();
  FUN_1006b3ab0(&uStack_90);
  func_0x0001006b3aec(auStack_168);
  func_0x0001006b3aec(&uStack_120);
  func_0x0001006b3b14(&puStack_d8);
  FUN_1005fe494(&uStack_b0);
  puVar5 = auStack_a8;
  FUN_100078bd8(puVar5);
  func_0x0001006a5d30(uStack_70);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c32ca8();
    FUN_1006b3a34();
    func_0x0001006b3aa8();
    FUN_1006b3ab0(&uStack_90);
    func_0x0001006b3aec(auStack_168);
    func_0x0001006b3aec(&uStack_120);
    func_0x0001006b3b14(&puStack_d8);
    FUN_1005fe494(&uStack_b0);
    FUN_100078bd8(auStack_a8);
    func_0x000107c32be4();
    lVar7 = puVar3[0x23];
    if (lVar7 != 3) {
      FUN_10060413c(puVar3 + 0x20,&uStack_120);
      func_0x000107c60ca4();
    }
    return (undefined1 *)(ulong)(lVar7 != 3);
  }
  return puVar5;
}



/* Entry: 1006ac574; end: 1006ac5bf;  */

bool FUN_1006ac574(void)

{
  long lVar1;
  long unaff_x23;
  
  lVar1 = *(long *)(unaff_x23 + 0x118);
  if (lVar1 != 3) {
    FUN_10060413c(unaff_x23 + 0x100,&stack0x00000060);
    func_0x000107c60ca4();
  }
  return lVar1 != 3;
}



/* Entry: 1006ac5c0; end: 1006ac5fb;  */

undefined8 * FUN_1006ac5c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_90 [80];
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = param_3;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  puVar1 = auStack_90;
  func_0x00010054e7b4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1006ac5fc; end: 1006ac673;  */

void FUN_1006ac5fc(void)

{
  long lVar1;
  long unaff_x29;
  
  lVar1 = unaff_x29 + -0x80;
  func_0x00010054e7b4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006ac674; end: 1006ac6b7;  */

undefined8 * FUN_1006ac674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = uVar1;
  func_0x0001006ac604(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 1006ac6b8; end: 1006ac6d3;  */

void FUN_1006ac6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x50);
  return;
}



/* Entry: 1006ac6d4; end: 1006ac9a7;  */

void FUN_1006ac6d4(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long lVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long unaff_x20;
  long *unaff_x24;
  long lVar9;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x0001006ac6c0();
  uVar5 = (char)param_1[0x18] == '\x01';
  if ((bool)uVar5) {
    param_4 = (long *)*param_4;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_4 + 8);
    FUN_1006b3a90();
    iVar7 = (int)param_2;
    if ((bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001006ac734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    param_1[0x17] = param_1[0x17] + 1;
    lVar8 = *param_1;
    lVar9 = param_1[1];
    lStack_b0 = lVar8;
    lStack_a8 = lVar9;
    if (lVar9 != 0) {
      do {
        FUN_100574708();
      } while (extraout_w10 != 0);
    }
    puVar6 = (undefined8 *)0xc8;
    plStack_a0 = param_1;
    func_0x000107c60e20();
    FUN_1006ac9a8();
    *puVar6 = &PTR_DAT_110a686f8;
    uStack_80 = *param_3;
    *param_3 = 0;
    lStack_98 = lVar8;
    if (lVar9 != 0) {
      do {
        FUN_100574708();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001006ac9bc();
    lVar1 = unaff_x20 + 0x18;
    *puVar6 = &PTR_FUN_110a68748;
    puVar6[1] = lVar8;
    lStack_98 = 0;
    puVar6[2] = lVar9;
    puVar6[3] = param_1;
    lVar8 = lVar1;
    func_0x0001006aca44(lVar1,&lStack_78,param_1 + 0x12);
    func_0x0001006acaf0(&PTR_DAT_110a68490);
    if (lVar8 == 0) {
      *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    }
    else {
      uVar5 = lVar8 == param_2;
      if ((bool)uVar5) {
        *(long *)(unaff_x20 + 0xa0) = unaff_x20 + 0x88;
        func_0x000107c32e40();
        (*extraout_x8)();
      }
      else {
        *(long *)(unaff_x20 + 0xa0) = lVar8;
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
    }
    uVar4 = uStack_80;
    uStack_80 = 0;
    *(undefined8 *)(unaff_x20 + 0xa8) = uVar4;
    lVar8 = param_4[1];
    lVar9 = *param_4;
    *(long *)(unaff_x20 + 0xb8) = param_4[1];
    *(long *)(unaff_x20 + 0xb0) = lVar9;
    if (lVar8 != 0) {
      do {
        FUN_100574708();
      } while (extraout_w10_01 != 0);
    }
    *(undefined1 *)(unaff_x20 + 0xc0) = 0;
    FUN_1006acb08(&lStack_78);
    FUN_1005747e0(&lStack_98);
    FUN_1005fe494(&uStack_80);
    lStack_c0 = lVar1;
    lVar8 = lVar1;
    if ((*(long *)(unaff_x20 + 0x80) == 0) ||
       (uVar5 = *(long *)(*(long *)(unaff_x20 + 0x80) + 8) == -1, (bool)uVar5)) {
      do {
        lStack_98 = lVar8;
        FUN_1006acba4();
        lVar8 = lStack_98;
      } while (extraout_w10_02 != 0);
      do {
        func_0x0001006acbb4();
      } while (extraout_w11 != 0);
      lStack_78 = *(long *)(unaff_x20 + 0x78);
      *(long *)(unaff_x20 + 0x78) = lVar1;
      *(long *)(unaff_x20 + 0x80) = unaff_x20;
      FUN_1006acbd0(&lStack_78);
      func_0x0001006acbf4(&lStack_98);
    }
    FUN_1006acc18(0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
      if (bVar3) {
        *unaff_x24 = *unaff_x24 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[2] = param_1[2] + 1;
    lStack_98 = lVar1;
    lStack_78 = lVar1;
    do {
      FUN_1006acba4();
    } while (extraout_w10_03 != 0);
    iVar7 = (int)&lStack_78;
    FUN_1006acc24(param_1 + 5);
    func_0x0001006ad07c(param_1 + 2);
    FUN_1006b3a6c(&lStack_78);
    FUN_1006b3a6c(&lStack_98);
    func_0x0001006acbf4(&lStack_c0);
    param_4 = &lStack_b0;
    FUN_1005747e0();
    FUN_1006b3a90();
    if ((bool)uVar5) {
      return;
    }
  }
  func_0x000107c60e78();
  if (iVar7 != 0) {
    func_0x000107c32e5c();
    FUN_1006acb08(&lStack_78);
    FUN_1005747e0(&lStack_98);
    FUN_1005fe494(&uStack_80);
    func_0x000107c60d70();
    FUN_1006acc18();
    param_4 = &lStack_b0;
    FUN_1005747e0();
  }
  func_0x000107c32e00();
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}



/* Entry: 1006ac9a8; end: 1006ac9c3;  */

void FUN_1006ac9a8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1006ac9c4; end: 1006acaa7;  */

void FUN_1006ac9c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001006ac9bc();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110a68748;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_100574708();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  return;
}



/* Entry: 1006acaa8; end: 1006acb07;  */

void FUN_1006acaa8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110a68748;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100574708();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  return;
}



/* Entry: 1006acb08; end: 1006acb4b;  */

long * FUN_1006acb08(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1006acb4c; end: 1006acb63;  */

void FUN_1006acb4c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006acb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 1006acb64; end: 1006acb8f;  */

undefined8 * FUN_1006acb64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a68748;
  FUN_1005747e0(param_1 + 1);
  return param_1;
}



/* Entry: 1006acb90; end: 1006acba3;  */

void FUN_1006acb90(void)

{
  FUN_1006acb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006acba4; end: 1006acbcf;  */

void FUN_1006acba4(void)

{
  bool bVar1;
  long *unaff_x24;
  
  bVar1 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
  if (bVar1) {
    *unaff_x24 = *unaff_x24 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1006acbd0; end: 1006acc17;  */

void FUN_1006acbd0(long param_1)

{
  func_0x0001006acbc4();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1006acc18; end: 1006acc23;  */

void FUN_1006acc18(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006acc24; end: 1006acf9b;  */

void FUN_1006acc24(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int extraout_w10;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  plVar15 = param_1 + 5;
  plVar18 = (long *)param_1[1];
  plVar2 = (long *)param_1[2];
  uVar3 = (long)plVar2 - (long)plVar18;
  lVar12 = 0;
  if (uVar3 != 0) {
    lVar12 = ((long)plVar2 - (long)plVar18 >> 3) * 0xaa + -1;
  }
  uVar10 = param_1[4];
  puVar8 = param_2;
  if (lVar12 != *plVar15 + uVar10) goto LAB_1006ace50;
  if (uVar10 < 0xaa) {
    plVar16 = param_1 + 3;
    plVar13 = (long *)*plVar16;
    plVar14 = (long *)*param_1;
    if ((ulong)((long)plVar13 - (long)plVar14) <= uVar3) {
      puVar6 = (undefined8 *)((long)plVar13 - (long)plVar14 >> 2);
      if (plVar13 == plVar14) {
        puVar6 = (undefined8 *)0x1;
      }
      puVar9 = param_2;
      plStack_98 = plVar16;
      FUN_1006acf9c();
      puVar19 = (undefined8 *)((long)puVar6 + uVar3);
      puVar20 = puVar6 + (long)puVar9;
      uVar7 = 0xff0;
      puVar8 = puVar9;
      puStack_b8 = puVar6;
      puStack_b0 = puVar19;
      puStack_a8 = puVar19;
      puStack_a0 = puVar20;
      func_0x000107c60e20();
      uStack_c0 = 0xaa;
      puVar17 = puVar19;
      plStack_c8 = plVar15;
      if (uVar3 == (long)puVar9 * 8) {
        if (plVar2 == plVar18) {
          puVar17 = (undefined8 *)0x1;
          uStack_d0 = uVar7;
          plStack_70 = plVar16;
          FUN_1006acf9c();
          puStack_78 = puVar17 + (long)puVar8;
          puVar8 = puVar19;
          puStack_90 = puVar17;
          puStack_88 = puVar17;
          puStack_80 = puVar17;
          func_0x000107c2963c(&puStack_90,puVar19,puVar19);
          puVar1 = puStack_78;
          puVar17 = puStack_80;
          puVar11 = puStack_88;
          puVar9 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar6;
          puStack_88 = puVar19;
          puStack_80 = puVar19;
          puStack_78 = puVar20;
          func_0x000107c32e60();
          puVar6 = puVar9;
          puVar19 = puVar11;
          puVar20 = puVar1;
        }
        else {
          puVar19 = puVar19 + (((long)puVar19 - (long)puVar6 >> 3) + 1) / -2;
          puVar17 = puVar19;
          puStack_b0 = puVar19;
        }
      }
      puVar9 = puVar17 + 1;
      *puVar17 = uVar7;
      uStack_d0 = 0;
      puVar17 = (undefined8 *)param_1[2];
      puStack_a8 = puVar9;
      while (puVar11 = (undefined8 *)param_1[1], puVar17 != puVar11) {
        puVar11 = puVar19;
        if (puVar19 == puVar6) {
          if (puVar9 < puVar20) {
            lVar12 = (long)puVar9 - (long)puVar6;
            puVar1 = puVar9 + (((long)puVar20 - (long)puVar9 >> 3) + 1) / 2;
            puVar11 = (undefined8 *)((long)puVar1 - ((long)puVar9 - (long)puVar6));
            puVar9 = puVar1;
            if (lVar12 != 0) {
              func_0x000107c610b8(puVar11,puVar19,lVar12);
              puVar8 = puVar19;
            }
          }
          else {
            lVar12 = (long)puVar20 - (long)puVar6 >> 2;
            if ((long)puVar20 - (long)puVar6 == 0) {
              lVar12 = 1;
            }
            plStack_70 = plVar16;
            FUN_1006acf9c(lVar12);
            func_0x000107c32e44(lVar12 * 2 + 6);
            puVar8 = puVar6;
            func_0x000107c2963c(&puStack_90,puVar6,puVar9);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar11 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar6;
            puStack_88 = puVar19;
            puStack_80 = puVar9;
            puStack_78 = puVar20;
            func_0x000107c32e60();
            puVar6 = puVar1;
            puVar9 = puVar4;
            puVar20 = puVar5;
          }
        }
        puVar17 = puVar17 + -1;
        puVar19 = puVar11 + -1;
        *puVar19 = *puVar17;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar19;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (long)puVar9;
      param_1[3] = (long)puVar20;
      puStack_b0 = puVar11;
      func_0x0001006acfd0(&uStack_d0);
      func_0x0001006acffc(&puStack_b8);
      goto LAB_1006ace50;
    }
    puVar6 = (undefined8 *)0xff0;
    func_0x000107c60e20();
    if (plVar13 != plVar2) {
      *plVar2 = (long)puVar6;
      param_1[2] = (long)(plVar2 + 1);
      goto LAB_1006ace50;
    }
    if (plVar18 == plVar14) {
      lVar12 = (long)plVar13 - (long)plVar18 >> 2;
      if (plVar2 == plVar18) {
        lVar12 = 1;
      }
      plStack_70 = plVar16;
      FUN_1006acf9c();
      func_0x000107c32e44(lVar12 * 2 + 6);
      func_0x000107c2963c(&puStack_90,param_1[1],param_1[2]);
      puVar19 = (undefined8 *)param_1[1];
      puVar8 = (undefined8 *)*param_1;
      puVar17 = (undefined8 *)param_1[3];
      puVar20 = (undefined8 *)param_1[2];
      param_1[1] = (long)puStack_88;
      *param_1 = (long)puStack_90;
      param_1[3] = (long)puStack_78;
      param_1[2] = (long)puStack_80;
      puStack_90 = puVar8;
      puStack_88 = puVar19;
      puStack_80 = puVar20;
      puStack_78 = puVar17;
      func_0x000107c32e60();
      plVar18 = (long *)param_1[1];
    }
    plVar18[-1] = (long)puVar6;
    param_1[1] = (long)plVar18;
    puVar8 = puVar6;
  }
  else {
    param_1[4] = uVar10 - 0xaa;
    puVar8 = (undefined8 *)*plVar18;
    param_1[1] = (long)(plVar18 + 1);
  }
  func_0x000107c29638(param_1);
LAB_1006ace50:
  FUN_1006ad03c(param_1);
  lVar12 = param_2[1];
  uVar7 = *param_2;
  puVar8[1] = param_2[1];
  *puVar8 = uVar7;
  if (lVar12 != 0) {
    do {
      FUN_100574708();
    } while (extraout_w10 != 0);
  }
  puVar8[2] = param_2[2];
  *plVar15 = *plVar15 + 1;
  return;
}



/* Entry: 1006acf9c; end: 1006ad03b;  */

undefined1  [16] FUN_1006acf9c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    func_0x000107c60e20(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1006ad03c; end: 1006ad097;  */

void FUN_1006ad03c(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 1006ad098; end: 1006ad133;  */

void FUN_1006ad098(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if ((param_1[8] != 0) || (param_1[0xe] != 0)) {
    puVar1 = param_1;
    FUN_1006ad1a4();
    plVar3 = (long *)param_1[1];
    uStack_38 = 0;
    uStack_30 = 0;
    ppuStack_48 = &PTR_DAT_110a609a8;
    uStack_40 = 0;
    uStack_28 = 100;
    uVar2 = *puVar1;
    FUN_1006ad1e0();
    uStack_50 = uVar2;
    (**(code **)(*plVar3 + 0x18))(plVar3,&ppuStack_48,&uStack_50);
    FUN_1006ad208();
    (**(code **)(*(long *)*puVar1 + 0x10))();
  }
  return;
}



/* Entry: 1006ad134; end: 1006ad1a3;  */

long FUN_1006ad134(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar2 = param_1 + 0x48;
  }
  else {
    lVar2 = param_1 + 0x18;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = param_1 + 0x48;
      if (*(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + (*(ulong *)(param_1 + 0x38) / 0xaa) * 8)
                     + (*(ulong *)(param_1 + 0x38) % 0xaa) * 0x18 + 0x10) <=
          *(ulong *)(*(long *)(*(long *)(param_1 + 0x50) + (*(ulong *)(param_1 + 0x68) / 0xaa) * 8)
                     + (*(ulong *)(param_1 + 0x68) % 0xaa) * 0x18 + 0x10)) {
        lVar1 = lVar2;
      }
      return lVar1;
    }
  }
  return lVar2;
}



/* Entry: 1006ad1a4; end: 1006ad1c7;  */

long FUN_1006ad1a4(long param_1)

{
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  FUN_1006ad134();
  FUN_1006ad1c8(*(undefined8 *)(param_1 + 8));
  return extraout_x8 + extraout_x9 * extraout_x10;
}



/* Entry: 1006ad1c8; end: 1006ad1df;  */

void FUN_1006ad1c8(void)

{
  return;
}



/* Entry: 1006ad1e0; end: 1006ad207;  */

long FUN_1006ad1e0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x0001005529b4(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x40);
  lVar2 = *plVar1;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000100552990();
    lVar2 = (long)plVar1 + lVar2;
  }
  return lVar2;
}



/* Entry: 1006ad208; end: 1006ad20f;  */

undefined1 * FUN_1006ad208(void)

{
  undefined **ppuStack0000000000000008;
  
  ppuStack0000000000000008 = &PTR_DAT_110a60a10;
  FUN_1000e30f4(&stack0x00000010);
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 1006ad210; end: 1006ad297;  */

void FUN_1006ad210(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  FUN_1006ad298();
  if ((param_1 == (long *)0x0) || (func_0x000107c60d6c(), param_1 == (long *)0x0)) {
    func_0x00010527822c();
  }
  else {
    func_0x0001006ad2b0();
    if (param_1 != (long *)0x0) {
      func_0x0001006ad2cc(*(undefined8 *)(*param_1 + 0x30));
      FUN_1006b3a34(auStack_38);
      func_0x0001006acbf4(auStack_48);
      FUN_1006b3a58();
      return;
    }
    func_0x000104bfeb48();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ad274);
  (*pcVar1)();
}



/* Entry: 1006ad298; end: 1006ad2d7;  */

undefined8 FUN_1006ad298(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = uVar1;
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1006ad2d8; end: 1006ad7fb;  */

void FUN_1006ad2d8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_220;
  undefined1 auStack_218 [32];
  undefined **ppuStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [32];
  undefined8 uStack_170;
  byte bStack_168;
  undefined1 auStack_160 [8];
  undefined1 uStack_158;
  undefined1 auStack_150 [24];
  undefined1 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 auStack_120 [40];
  char cStack_f8;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  byte bStack_70;
  undefined **ppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long alStack_18 [3];
  
  func_0x0001006349a8();
  uStack_220 = *param_2;
  *param_2 = 0;
  lVar8 = *(long *)(param_1 + 0x18);
  FUN_1006ad7fc(alStack_18,param_1 + 8);
  if (alStack_18[0] == 0) goto LAB_1006a5d44;
  ppuStack_68 = &PTR_DAT_110a8ada0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  puStack_38 = &DAT_11383d918;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  auStack_c8[0] = 0;
  bStack_70 = 0;
  FUN_1006ad838(&uStack_130,lVar8);
  FUN_10061fdf0(auStack_c8,&uStack_130);
  FUN_10061fd34(&uStack_130);
  auStack_160[0] = 0;
  uStack_158 = 0;
  auStack_150[0] = 0;
  uStack_138 = 0;
  if ((bStack_70 & 1) != 0) {
    FUN_1006ad92c(&uStack_130,uStack_c0,uStack_b8);
    uVar4 = uStack_60;
    if ((uStack_60 & 1) != 0) {
      uVar4 = *(ulong *)(uStack_60 & 0xfffffffffffffffe);
    }
    func_0x0001006ad9d4(&puStack_38,uVar4);
    FUN_100066230();
    func_0x000107c60ca0(&uStack_130);
    lStack_128 = lStack_a0;
    uStack_130 = uStack_a8;
    func_0x0001006ad9e8(auStack_c8);
    FUN_1006ad9f4(auStack_160,&uStack_130);
    FUN_1006ada28();
  }
  FUN_1005f6fa4(&uStack_130,lVar8 + 0x40);
  uStack_58 = uStack_58 | 1;
  if (uStack_30 == 0) {
    uVar4 = uStack_60;
    if ((uStack_60 & 1) != 0) {
      func_0x000107c32ce0();
    }
    func_0x0001005ff1bc();
    uStack_30 = uVar4;
  }
  FUN_1005ff214();
  FUN_1005f73a4(&uStack_130);
  iVar2 = *(int *)(lVar8 + 0x7c);
  if (iVar2 == 1) {
    uVar7 = 1;
    iVar1 = iVar2;
LAB_1006ad46c:
    uStack_20 = CONCAT44(uVar7,(undefined4)uStack_20);
    FUN_1006ada3c(&uStack_130,*(undefined8 *)(*(long *)(lVar8 + 0xb0) + 0x30),0x14,iVar1);
    lStack_198 = 0;
    auStack_190[0] = 0;
    bStack_168 = 0;
    if (cStack_f8 == '\0') {
      lVar6 = 0;
    }
    else {
      FUN_1006adda4(auStack_190,auStack_120);
      FUN_1006addd4(auStack_120);
      lVar6 = lStack_198;
    }
    uStack_1a0 = 0;
    lStack_198 = lStack_128;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    lStack_1d0 = 0;
    lStack_128 = lVar6;
    while ((((bStack_168 & 1) != 0 || ((uStack_1a0 & 1) != 0)) && (lStack_198 != lStack_1d0))) {
      if ((bStack_168 & 1) == 0) {
        uVar10 = *(undefined8 *)(lStack_198 + 8);
        func_0x000107c60c94(auStack_218,lStack_198 + 0x58);
        FUN_1004c3cd0(&ppuStack_1f8,&UNK_10f2e0451,auStack_218);
        func_0x000107c313a4(uVar10,0x65,&ppuStack_1f8);
        func_0x0001006a5c3c();
        func_0x000107c32c44();
      }
      ppuStack_1f8 = &PTR_DAT_110a8ad50;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = uStack_170;
      FUN_1005f6fa4(auStack_218,auStack_190);
      uStack_1e8 = uStack_1e8 | 1;
      if (uStack_1e0 == 0) {
        uVar4 = uStack_1f0;
        if ((uStack_1f0 & 1) != 0) {
          func_0x000107c32ce0();
        }
        func_0x0001005ff1bc();
        uStack_1e0 = uVar4;
      }
      FUN_1005ff214();
      FUN_1005f73a4(auStack_218);
      FUN_100627dec(&uStack_50,FUN_1006addf8);
      FUN_1006ade54();
      FUN_1006adf7c(&ppuStack_1f8);
      FUN_1006adc9c(&lStack_198);
    }
    func_0x0001006ae1b0();
    FUN_1006ae1bc(auStack_190);
    FUN_1006ae1dc(&uStack_130);
    uVar10 = 0;
  }
  else {
    if (iVar2 != 2) {
      iVar1 = 0;
      if (iVar2 == 3) {
        iVar1 = iVar2;
      }
      uVar7 = 0;
      if (iVar2 == 3) {
        uVar7 = 4;
      }
      goto LAB_1006ad46c;
    }
    uStack_20 = CONCAT44(3,(undefined4)uStack_20);
    uVar10 = 1;
  }
  plVar9 = (long *)(param_1 + 0x38);
  while (uVar11 = uStack_220, plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
    if (*(int *)(plVar9 + 2) == 1) {
      if (*(char *)(plVar9 + 8) == '\x01') {
        uVar11 = plVar9[7];
        pppuVar3 = &ppuStack_68;
        func_0x000107c29510();
        *(int *)(pppuVar3 + 3) = (int)uVar11;
      }
    }
    else if ((*(int *)(plVar9 + 2) == 0) && (*(char *)(plVar9 + 6) == '\x01')) {
      pppuVar3 = &ppuStack_68;
      func_0x000107c29510();
      ppuVar5 = pppuVar3[1];
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuVar5 = *(undefined ***)((ulong)ppuVar5 & 0xfffffffffffffffe);
      }
      func_0x0001006ad9d4(pppuVar3 + 2,ppuVar5);
      func_0x000107c60ca4();
    }
  }
  uStack_20 = CONCAT44(uStack_20._4_4_,1);
  plVar9 = *(long **)(*(long *)(lVar8 + 0xb0) + 0x70);
  uStack_220 = 0;
  uStack_130 = uVar11;
  (**(code **)(*plVar9 + 0x20))
            (plVar9,&ppuStack_68,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(lVar8 + 0x7c),
             &uStack_130,param_3,auStack_160,uVar10);
  FUN_1005fe494(&uStack_130);
  FUN_1005fce88(auStack_150);
  FUN_10061fd34(auStack_c8);
  FUN_1006b391c(&ppuStack_68);
LAB_1006a5d44:
  func_0x0001005749b0(alStack_18);
  FUN_1005fe494(&uStack_220);
  return;
}



/* Entry: 1006ad7fc; end: 1006ad837;  */

void FUN_1006ad7fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1006ad838; end: 1006ad92b;  */

void FUN_1006ad838(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  int aiStack_88 [2];
  undefined1 auStack_80 [80];
  
  FUN_10054e4e8();
  aiStack_88[0] = *(int *)(param_2 + 0x7c);
  if (2 < aiStack_88[0] - 1U) {
    aiStack_88[0] = 0;
  }
  FUN_10061ea5c(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 0x30),aiStack_88[0]);
  if (*(char *)(unaff_x19 + 0x58) == '\x01') {
    if (((*(char *)(unaff_x19 + 0x48) == '\x01') && ((*(byte *)(unaff_x19 + 0x28) & 1) != 0)) &&
       (*(long *)(unaff_x19 + 0x50) == *(long *)(unaff_x20 + 0x70))) {
      return;
    }
    func_0x000107c29fe0(*(undefined8 *)(*(long *)(unaff_x20 + 0xb0) + 0x30),aiStack_88[0]);
    func_0x000107c29540(auStack_80);
    func_0x000107c32c78();
    func_0x00010054e68c();
    FUN_10061fa70();
  }
  else {
    func_0x000107c29540(auStack_80);
    func_0x000107c32c78();
    func_0x00010054e68c();
    FUN_10061fa70();
  }
  FUN_10061fba0(aiStack_88);
  return;
}



/* Entry: 1006ad92c; end: 1006ad93f;  */

void FUN_1006ad92c(undefined8 param_1,long param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  uVar3 = (long)param_3 - param_2;
  if (uVar3 < 0x7ffffffffffffff7) {
    uVar2 = uVar3;
    func_0x0001006ad934();
    puVar1 = unaff_x20;
    if (uVar2 < 0x17) {
      *(char *)((long)unaff_x20 + 0x17) = (char)uVar3;
    }
    else {
      uVar2 = 0x19;
      if ((uVar3 | 7) != 0x17) {
        uVar2 = (uVar3 | 7) + 1;
      }
      FUN_100033e30();
      unaff_x20[1] = uVar3;
      unaff_x20[2] = uVar2 | 0x8000000000000000;
      *unaff_x20 = puVar1;
    }
    for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 1) {
      *(undefined1 *)puVar1 = *unaff_x21;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
    *(undefined1 *)puVar1 = 0;
  }
  else {
    func_0x000104bd47d4();
  }
  return;
}



/* Entry: 1006ad940; end: 1006ad9c7;  */

void FUN_1006ad940(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  if (param_4 < 0x7ffffffffffffff7) {
    uVar2 = param_4;
    func_0x0001006ad934();
    puVar1 = unaff_x20;
    if (uVar2 < 0x17) {
      *(char *)((long)unaff_x20 + 0x17) = (char)param_4;
    }
    else {
      uVar2 = 0x19;
      if ((param_4 | 7) != 0x17) {
        uVar2 = (param_4 | 7) + 1;
      }
      FUN_100033e30();
      unaff_x20[1] = param_4;
      unaff_x20[2] = uVar2 | 0x8000000000000000;
      *unaff_x20 = puVar1;
    }
    for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 1) {
      *(undefined1 *)puVar1 = *unaff_x21;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
    *(undefined1 *)puVar1 = 0;
  }
  else {
    func_0x000104bd47d4();
  }
  return;
}



/* Entry: 1006ad9c8; end: 1006ad9f3;  */

void FUN_1006ad9c8(void)

{
  return;
}



/* Entry: 1006ad9f4; end: 1006ada27;  */

undefined8 * FUN_1006ad9f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  FUN_1005fcf54(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1006ada28; end: 1006ada3b;  */

void FUN_1006ada28(void)

{
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x28) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006ada3c; end: 1006adad3;  */

void FUN_1006ada3c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  long unaff_x20;
  undefined4 uStack_4c;
  undefined8 auStack_48 [3];
  
  uStack_4c = param_3;
  func_0x0001006ada30();
  auStack_48[0] = param_2;
  FUN_100630c28();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1006adad4(*(long *)(unaff_x20 + 0x20) + 0x4c08,&uStack_4c,auStack_48);
  return;
}



/* Entry: 1006adad4; end: 1006adaff;  */

void FUN_1006adad4(void)

{
  func_0x000100693b34();
  FUN_1006adb00();
  FUN_100693c18();
  func_0x0001005edc5c();
  FUN_1006adc14();
  func_0x0001005edd60();
  FUN_1006adc48();
  return;
}



/* Entry: 1006adb00; end: 1006adba7;  */

long FUN_1006adb00(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1006adb74;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1006adb74:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  func_0x0001005edc5c();
  FUN_1006adc14();
  func_0x0001005edd60();
  FUN_1006adc48();
  return param_1;
}



/* Entry: 1006adba8; end: 1006adbff;  */

void FUN_1006adba8(void)

{
  func_0x0001005edc5c();
  FUN_1006adc14();
  func_0x0001005edd60();
  FUN_1006adc48();
  return;
}



/* Entry: 1006adc00; end: 1006adc13;  */

void FUN_1006adc00(void)

{
  return;
}



/* Entry: 1006adc14; end: 1006adc37;  */

void FUN_1006adc14(int param_1)

{
  FUN_1006adc00();
  func_0x0001005ef16c();
  FUN_1006adc38();
  FUN_1005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    FUN_1003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1006adc38; end: 1006adc47;  */

void FUN_1006adc38(void)

{
  return;
}



/* Entry: 1006adc48; end: 1006adc6b;  */

void FUN_1006adc48(void)

{
  FUN_1005ec7e4();
  FUN_1006adc6c();
  return;
}



/* Entry: 1006adc6c; end: 1006adc9b;  */

void FUN_1006adc6c(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1006adc9c();
  return;
}



/* Entry: 1006adc9c; end: 1006adcff;  */

void FUN_1006adc9c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [40];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_10054c3a4(), (int)lVar1 != 0)) {
    FUN_1006add00(auStack_48,*param_1);
    func_0x00010054e68c();
    FUN_1006add4c();
    FUN_1006addc0();
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[6] == '\x01') {
    FUN_1005fce88();
    *(undefined1 *)(plVar2 + 5) = 0;
  }
  return;
}



/* Entry: 1006add00; end: 1006add4b;  */

void FUN_1006add00(long param_1,undefined8 param_2)

{
  FUN_10054c7ec();
  FUN_10061f61c(param_1);
  FUN_10054c8f4(param_2,1);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



/* Entry: 1006add4c; end: 1006adda3;  */

long FUN_1006add4c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1006adfcc();
  }
  else {
    FUN_1006adda4();
  }
  return param_1;
}



/* Entry: 1006adda4; end: 1006addbf;  */

void FUN_1006adda4(long param_1)

{
  func_0x0001006add80();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1006addc0; end: 1006addd3;  */

void FUN_1006addc0(void)

{
  char in_stack_00000020;
  
  if (in_stack_00000020 == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006addd4; end: 1006addf7;  */

void FUN_1006addd4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1005fce88();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 1006addf8; end: 1006ade3f;  */

void FUN_1006addf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_1006ade40();
  }
  else {
    func_0x000107c303f0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110a8ad50;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1006ade40; end: 1006ade53;  */

void FUN_1006ade40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 1006ade54; end: 1006adecb;  */

void FUN_1006ade54(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001006ade48();
  func_0x0001006ade88();
  func_0x0001006aded4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10068e734();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x000107c2a2e8();
      puVar2 = puVar3;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c3480c();
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1006adecc; end: 1006adee3;  */

void FUN_1006adecc(void)

{
  return;
}



/* Entry: 1006adee4; end: 1006adf73;  */

void FUN_1006adee4(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001006aded4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10068e734();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x000107c2a2e8();
      puVar2 = puVar3;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c3480c();
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1006adf74; end: 1006adf7b;  */

void FUN_1006adf74(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 1006adf7c; end: 1006adfa7;  */

undefined8 FUN_1006adf7c(undefined8 param_1)

{
  FUN_1006adf74();
  FUN_1006adfa8(param_1);
  return param_1;
}



/* Entry: 1006adfa8; end: 1006adfc3;  */

void FUN_1006adfa8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1005f73a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006adfc4; end: 1006adfcb;  */

void FUN_1006adfc4(void)

{
  return;
}



/* Entry: 1006adfcc; end: 1006ae03b;  */

void FUN_1006adfcc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054e698();
  FUN_1005fcf54();
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1006ae03c; end: 1006ae193; -[SCNMessagingMediaReference initWithContentObject:mediaListId:mediaType:mediaReferenceKey:videoDescription:metadataType:] */

undefined1 *
FUN_1006ae03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_112707040;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ae194; end: 1006ae1bb;  */

void FUN_1006ae194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006ae1bc; end: 1006ae1db;  */

void FUN_1006ae1bc(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1005fce88();
  }
  return;
}



/* Entry: 1006ae1dc; end: 1006ae24b;  */

undefined8 * FUN_1006ae1dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_1006addd4(param_1 + 2);
  }
  FUN_1006ae1bc((ulong)&uStack_60 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_1006ae1bc(param_1 + 2);
  return param_1;
}



/* Entry: 1006ae24c; end: 1006ae26f;  */

void FUN_1006ae24c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1006ae270; end: 1006ae313; -[SCNMessagingMediaReferenceList initWithMediaReferences:] */

undefined1 * FUN_1006ae270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112707048;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006ae314; end: 1006ae34b;  */

void FUN_1006ae314(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006ae34c; end: 1006ae377;  */

void FUN_1006ae34c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010861bf78();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006ae378; end: 1006ae37f;  */

void FUN_1006ae378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1006ae380; end: 1006ae427;  */

void FUN_1006ae380(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x18);
  func_0x000107c61180();
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    FUN_1006ae428(lVar3);
    func_0x000107c61180();
    FUN_1006af640();
    func_0x0001006af67c();
  }
  func_0x000107c40794(puVar2);
  func_0x0001006af684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006ae428; end: 1006ae487;  */

void FUN_1006ae428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dac78;
  func_0x000107c610f4(PTR_PTR_1126dac78);
  FUN_1006af048(param_1);
  func_0x000107c61180();
  func_0x000107c46e64(puVar1,param_2,param_1);
  FUN_1006af4a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006ae488; end: 1006ae4a3;  */

void FUN_1006ae488(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1006ae4a4; end: 1006ae6bf;  */

void FUN_1006ae4a4(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined1 param_8)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  func_0x0001005fe598();
  FUN_1006ae6c0();
  lVar4 = 0x188;
  func_0x000107c60e20();
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x0001006ae6c8(&PTR_DAT_110a6d920);
  func_0x0001006ae6d4();
  func_0x0001006ae6e8();
  func_0x0001006ae6f0(*(undefined4 *)((long)param_2 + 0x4c));
  func_0x0001006ae71c();
  func_0x0001006ae728();
  func_0x0001006ae93c();
  func_0x0001006ae944();
  func_0x0001006ae94c();
  puVar7 = (undefined8 *)(lVar4 + 0xf0);
  *puVar7 = &PTR_DAT_110a8ada0;
  *(undefined ***)(lVar4 + 0x18) = &PTR_DAT_110a6f3c8;
  *(undefined4 *)(lVar4 + 0xe8) = param_3;
  *(undefined4 *)(lVar4 + 0xec) = param_4;
  *(undefined8 *)(lVar4 + 0xf8) = 0;
  *(undefined8 *)(lVar4 + 0x108) = 0;
  *(undefined8 *)(lVar4 + 0x100) = 0;
  *(undefined8 *)(lVar4 + 0x118) = 0;
  *(undefined8 *)(lVar4 + 0x110) = 0;
  *(undefined **)(lVar4 + 0x120) = &DAT_11383d918;
  *(undefined8 *)(lVar4 + 0x128) = 0;
  *(undefined8 *)(lVar4 + 0x130) = 0;
  *(undefined8 *)(lVar4 + 0x138) = 0;
  uVar2 = puVar7 == param_2;
  if (!(bool)uVar2) {
    uVar5 = param_2[1];
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    if (uVar5 == 0) {
      func_0x0001006ae954(puVar7,param_2);
    }
    else {
      func_0x000107c2a300(puVar7,param_2);
    }
  }
  lVar6 = param_6[1];
  uVar8 = *param_6;
  *(undefined8 *)(lVar4 + 0x148) = param_6[1];
  *(undefined8 *)(lVar4 + 0x140) = uVar8;
  if (lVar6 != 0) {
    do {
      FUN_100564108();
    } while (extraout_w10 != 0);
  }
  lVar6 = lVar4 + 0x150;
  func_0x0001006ae9b4(lVar6,param_7);
  *(undefined1 *)(lVar4 + 0x180) = param_8;
  FUN_1006ae9dc();
  in_stack_00000020 = param_5;
  in_stack_00000028 = lVar4;
  uVar8 = param_5;
  lVar1 = lVar4;
  if ((*(long *)(lVar4 + 0x28) == 0) || (func_0x000107c333e0(), uVar8 = param_5, (bool)uVar2)) {
    do {
      in_stack_00000058 = lVar1;
      in_stack_00000050 = uVar8;
      func_0x0001006ae9e4();
      uVar8 = in_stack_00000050;
      lVar1 = in_stack_00000058;
    } while (extraout_w9 != 0);
    func_0x0001005fe4d8();
    func_0x0001006ae9f4();
  }
  func_0x0001006ae9fc();
  in_stack_00000050 = param_5;
  in_stack_00000058 = lVar4;
  do {
    func_0x0001006ae9e4();
    iVar3 = (int)lVar6;
  } while (extraout_w9_00 != 0);
  func_0x0001005fe584();
  func_0x0001005fe590();
  func_0x0001006ae9f4();
  if (iVar3 != 0) {
    func_0x0001005febb0();
  }
  FUN_1006b39f4(&stack0x00000020);
  return;
}



/* Entry: 1006ae6c0; end: 1006ae73f;  */

undefined1 * FUN_1006ae6c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uStack0000000000000010;
  long in_stack_00000018;
  
  uStack0000000000000010 = param_2;
  if (param_3 == 0) {
    in_stack_00000018 = 0;
    puVar1 = (undefined1 *)&stack0x00000010;
  }
  else {
    func_0x000107c60d6c();
    puVar1 = (undefined1 *)0x0;
    in_stack_00000018 = param_3;
    if (param_3 != 0) {
      return (undefined1 *)&stack0x00000010;
    }
  }
  func_0x00010527822c();
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  return puVar1;
}



/* Entry: 1006ae740; end: 1006ae917;  */

undefined8 *
FUN_1006ae740(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar2;
  long lStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *param_3;
  *param_3 = 0;
  FUN_1005fe37c(param_1,param_4,param_2,&uStack_38);
  FUN_1005fe494(&uStack_38);
  *param_1 = &PTR_DAT_110a6ba48;
  FUN_1006ae918();
  lVar1 = *(long *)(lStack_48 + 0x58);
  uVar2 = *(undefined8 *)(lStack_48 + 0x50);
  param_1[0xe] = *(undefined8 *)(lStack_48 + 0x58);
  param_1[0xd] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001006ae924();
    } while (extraout_w10 != 0);
  }
  func_0x0001006ae934();
  FUN_1006ae918();
  lVar1 = *(long *)(lStack_48 + 0x10);
  uVar2 = *(undefined8 *)(lStack_48 + 8);
  param_1[0x10] = *(undefined8 *)(lStack_48 + 0x10);
  param_1[0xf] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001006ae924();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001006ae934();
  FUN_1006ae918();
  lVar1 = *(long *)(lStack_48 + 0xf8);
  uVar2 = *(undefined8 *)(lStack_48 + 0xf0);
  param_1[0x12] = *(undefined8 *)(lStack_48 + 0xf8);
  param_1[0x11] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001006ae924();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001006ae934();
  FUN_1006ae918();
  lVar1 = *(long *)(lStack_48 + 0xa8);
  uVar2 = *(undefined8 *)(lStack_48 + 0xa0);
  param_1[0x14] = *(undefined8 *)(lStack_48 + 0xa8);
  param_1[0x13] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001006ae924();
    } while (extraout_w10_02 != 0);
  }
  func_0x0001006ae934();
  FUN_1006ae918();
  lVar1 = *(long *)(lStack_48 + 0x68);
  uVar2 = *(undefined8 *)(lStack_48 + 0x60);
  param_1[0x16] = *(undefined8 *)(lStack_48 + 0x68);
  param_1[0x15] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001006ae924();
    } while (extraout_w10_03 != 0);
  }
  func_0x0001006ae934();
  FUN_1006ae918();
  lVar1 = *(long *)(lStack_48 + 0x108);
  uVar2 = *(undefined8 *)(lStack_48 + 0x100);
  param_1[0x18] = *(undefined8 *)(lStack_48 + 0x108);
  param_1[0x17] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001006ae924();
    } while (extraout_w10_04 != 0);
  }
  func_0x0001006ae934();
  param_1[0x19] = 0;
  return param_1;
}



/* Entry: 1006ae918; end: 1006ae953;  */

void FUN_1006ae918(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long unaff_x19;
  
  plVar3 = *(long **)(unaff_x19 + 0x30);
  (**(code **)(*plVar3 + 0x108))();
  if (plVar3[1] != 0) {
    plVar3 = (long *)(plVar3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 1006ae954; end: 1006ae9db;  */

undefined1  [16] FUN_1006ae954(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  func_0x0001006ade48();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  func_0x0001004a641c(param_1 + 0x18,param_2 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
  puVar4 = (undefined1 *)(unaff_x19 + 0x38);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(unaff_x20 + 0x38); puVar3 != (undefined1 *)(unaff_x20 + 0x50);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(unaff_x20 + 0x50);
  return auVar7;
}



/* Entry: 1006ae9dc; end: 1006aea03;  */

undefined1 * FUN_1006ae9dc(void)

{
  FUN_1005fe47c(&stack0x00000030,0);
  return &stack0x00000030;
}



/* Entry: 1006aea04; end: 1006aea5b;  */

void FUN_1006aea04(long param_1)

{
  FUN_1005fe558(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1006aea5c; end: 1006aea73;  */

void FUN_1006aea5c(void)

{
  return;
}



/* Entry: 1006aea74; end: 1006aee7f;  */

void FUN_1006aea74(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  code *pcVar6;
  undefined1 in_ZR;
  code **ppcVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined **ppuVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined8 *puStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a0;
  long lStack_198;
  code *pcStack_190;
  code *pcStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  code *pcStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  code *pcStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  code **ppcStack_c0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_70;
  
  func_0x0001006aea64();
  uStack_70 = extraout_x8;
  FUN_1006aee80(&uStack_1a0);
  pcStack_190 = param_1;
  FUN_1006aee80(&pcStack_1c0);
  pcStack_178 = pcStack_1b8;
  pcStack_180 = pcStack_1c0;
  pcStack_1b0 = param_1;
  if (pcStack_1b8 != (code *)0x0) {
    do {
      func_0x0001006aee88();
    } while (extraout_w10 != 0);
  }
  pcStack_170 = pcStack_1b0;
  func_0x0001006aee98(&pcStack_120);
  pcStack_160 = *(code **)(pcStack_120 + 600);
  pcStack_168 = *(code **)(pcStack_120 + 0x250);
  if (*(long *)(pcStack_120 + 600) != 0) {
    do {
      func_0x0001006aee88();
    } while (extraout_w10_00 != 0);
  }
  uStack_158 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  ppcVar7 = &pcStack_120;
  func_0x000100564164();
  puStack_d0 = &UNK_10878aaf4;
  ppuStack_c8 = &PTR_FUN_110a6f5d0;
  func_0x0001006aeea0();
  pcVar6 = pcStack_178;
  pcVar5 = pcStack_180;
  ppcVar7[1] = pcStack_178;
  *ppcVar7 = pcVar5;
  if (pcVar6 != (code *)0x0) {
    do {
      func_0x0001006aee88();
    } while (extraout_w10_01 != 0);
  }
  ppcVar7[3] = pcStack_168;
  ppcVar7[2] = pcStack_170;
  ppcVar7[4] = pcStack_160;
  if (pcStack_160 != (code *)0x0) {
    do {
      func_0x0001006aee88();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(ppcVar7 + 5) = uStack_158;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_130 = uVar1;
  lStack_128 = lVar2;
  ppcStack_c0 = ppcVar7;
  if (lVar2 == 0) {
    uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x0001006aee88();
    } while (extraout_w10_03 != 0);
    uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x0001006aee88();
    } while (extraout_w10_04 != 0);
  }
  puVar8 = (undefined8 *)0xb8;
  uStack_150 = uVar1;
  lStack_148 = lVar2;
  func_0x000107c60e20();
  plVar11 = puVar8 + 1;
  *plVar11 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110a6f438;
  pcStack_120 = FUN_100862e84;
  ppuStack_118 = &PTR_FUN_110a6f478;
  uStack_150 = 0;
  lStack_148 = 0;
  pcStack_a0 = FUN_100862f4c;
  ppuStack_98 = &PTR_DAT_110a6f4d0;
  if (lStack_198 == 0) {
    ppuVar9 = &PTR_FUN_110a6f5d0;
  }
  else {
    plVar10 = (long *)(lStack_198 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar9 = ppuStack_c8;
    } while (cVar3 != '\0');
  }
  pcStack_80 = pcStack_190;
  puVar8[3] = &PTR_DAT_110a6f580;
  puVar8[4] = FUN_100862f4c;
  puVar8[5] = &PTR_DAT_110a6f4d0;
  puVar8[7] = lStack_198;
  puVar8[6] = uStack_1a0;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar8[8] = pcStack_190;
  puVar8[10] = &UNK_10878aaf4;
  (*(code *)ppuVar9[2])(puVar8 + 0xb,&ppuStack_c8);
  puVar8[3] = &PTR_DAT_110a6f4f8;
  puVar8[0x10] = FUN_100862e84;
  puVar8[0x11] = &PTR_FUN_110a6f478;
  puVar8[0x12] = uVar1;
  puVar8[0x13] = lVar2;
  uStack_110 = 0;
  uStack_108 = 0;
  puVar8[0x16] = uStack_1d8;
  FUN_1005fe558(&uStack_90);
  func_0x0001005fe52c(&uStack_110);
  func_0x0001005fe52c(&uStack_150);
  uStack_140 = 0;
  uStack_138 = 0;
  pcStack_1d0 = (code *)(puVar8 + 3);
  puStack_1c8 = puVar8;
  FUN_1006aeec4(&uStack_140);
  func_0x0001005fe52c(&uStack_130);
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  FUN_1006aef0c(&pcStack_180);
  FUN_1006aef38(&pcStack_120,0,param_1 + 0xd8);
  plVar10 = *(long **)(param_1 + 0x68);
  FUN_10002b838(&pcStack_a0,(&PTR_DAT_110a6f5e8)[*(int *)(param_1 + 0xd0)]);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = *plVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pcStack_180 = (code *)(puVar8 + 3);
  pcStack_178 = (code *)puVar8;
  (**(code **)(*plVar10 + 0x58))(plVar10,&pcStack_120,&pcStack_a0,&pcStack_180);
  FUN_1006b30fc(&pcStack_180);
  func_0x000107c60ca0(&pcStack_a0);
  func_0x0001006aee98(&pcStack_a0);
  (**(code **)(**(long **)(pcStack_a0 + 0x130) + 0x90))
            (*(long **)(pcStack_a0 + 0x130),*(undefined4 *)(param_1 + 0xd0),
             *(undefined4 *)(param_1 + 0xd4));
  func_0x000100564164(&pcStack_a0);
  FUN_1006b391c(&pcStack_120);
  FUN_1006aeec4(&pcStack_1d0);
  FUN_1005fe558(&pcStack_1c0);
  FUN_1005fe558(&uStack_1a0);
  FUN_1006b39e0(uStack_70);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000100564164(&pcStack_a0);
    FUN_1006b391c(&pcStack_120);
    FUN_1006aeec4(&pcStack_1d0);
    FUN_1005fe558(&pcStack_1c0);
    do {
      FUN_1005fe558(&uStack_1a0);
      func_0x000107c3346c();
    } while( true );
  }
  return;
}



/* Entry: 1006aee80; end: 1006aeec3;  */

undefined8 * FUN_1006aee80(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  long *plStack_110;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_90;
  
  lVar5 = *(long *)(unaff_x19 + 0x10);
  *param_1 = *(undefined8 *)(unaff_x19 + 8);
  if (lVar5 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      return param_1;
    }
  }
  lVar5 = 0;
  func_0x00010527822c();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1005fec28(&uStack_1a0,lVar5 + 8);
  lStack_190 = lVar5;
  FUN_1005fec28(&puStack_1c0,lVar5 + 8);
  puStack_178 = (undefined8 *)lStack_1b8;
  puStack_180 = puStack_1c0;
  lStack_1b0 = lVar5;
  if (lStack_1b8 != 0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10 != 0);
  }
  lStack_170 = lStack_1b0;
  func_0x0001005ff0d0(&ppuStack_c0);
  puStack_160 = ppuStack_c0[0x4b];
  puStack_168 = ppuStack_c0[0x4a];
  if (ppuStack_c0[0x4b] != (undefined *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_00 != 0);
  }
  uStack_158 = *(undefined4 *)(*(long *)(lVar5 + 0x58) + 0xfc);
  func_0x000100564164(&ppuStack_c0);
  puStack_120 = &UNK_10876c748;
  ppuStack_118 = &PTR_FUN_110a6c428;
  plVar6 = (long *)0x30;
  func_0x000107c60e20();
  plVar6[1] = (long)puStack_178;
  *plVar6 = (long)puStack_180;
  if (puStack_178 != (undefined8 *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_01 != 0);
  }
  plVar6[3] = (long)puStack_168;
  plVar6[2] = lStack_170;
  plVar6[4] = (long)puStack_160;
  if (puStack_160 != (undefined *)0x0) {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(plVar6 + 5) = uStack_158;
  uVar1 = *(undefined8 *)(lVar5 + 8);
  lVar2 = *(long *)(lVar5 + 0x10);
  uStack_130 = uVar1;
  lStack_128 = lVar2;
  plStack_110 = plVar6;
  if (lVar2 == 0) {
    uStack_1d8 = *(undefined8 *)(lVar5 + 0x58);
  }
  else {
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_03 != 0);
    uStack_1d8 = *(undefined8 *)(lVar5 + 0x58);
    do {
      FUN_1005ff0c0();
    } while (extraout_w10_04 != 0);
  }
  puVar7 = (undefined8 *)0xb8;
  uStack_150 = uVar1;
  lStack_148 = lVar2;
  func_0x000107c60e20();
  plVar6 = puVar7 + 1;
  *plVar6 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110a6c2e8;
  ppuStack_c0 = (undefined **)FUN_10084faa8;
  ppuStack_b8 = &PTR_FUN_110a6c328;
  uStack_150 = 0;
  lStack_148 = 0;
  pcStack_f0 = FUN_10084fb6c;
  ppuStack_e8 = &PTR_FUN_110a6c340;
  if (lStack_198 == 0) {
    ppuVar8 = &PTR_FUN_110a6c428;
  }
  else {
    plVar9 = (long *)(lStack_198 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar8 = ppuStack_118;
    } while (cVar3 != '\0');
  }
  lStack_d0 = lStack_190;
  puVar7[3] = &PTR_DAT_110a6c3f0;
  puVar7[4] = FUN_10084fb6c;
  puVar7[5] = &PTR_FUN_110a6c340;
  puVar7[7] = lStack_198;
  puVar7[6] = uStack_1a0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puVar7[8] = lStack_190;
  puVar7[10] = &UNK_10876c748;
  (*(code *)ppuVar8[2])(puVar7 + 0xb,&ppuStack_118);
  puVar7[3] = &PTR_DAT_110a6c368;
  puVar7[0x10] = FUN_10084faa8;
  puVar7[0x11] = &PTR_FUN_110a6c328;
  puVar7[0x12] = uVar1;
  puVar7[0x13] = lVar2;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar7[0x16] = uStack_1d8;
  FUN_1005fe558(&uStack_e0);
  func_0x0001005fe52c(&uStack_b0);
  func_0x0001005fe52c(&uStack_150);
  uStack_140 = 0;
  uStack_138 = 0;
  puStack_1d0 = puVar7 + 3;
  puStack_1c8 = puVar7;
  FUN_1005ff144(&uStack_140);
  func_0x0001005fe52c(&uStack_130);
  (*(code *)*ppuStack_118)(&ppuStack_118);
  FUN_1005ff194(&puStack_180);
  ppuStack_c0 = &PTR_DAT_110a987f0;
  ppuStack_b8 = (undefined **)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0001005ff0d0(&puStack_180);
  FUN_1005f6fa4(&pcStack_f0,puStack_180 + 3);
  uStack_b0 = uStack_b0 | 1;
  if (uStack_a8 == 0) {
    ppuVar8 = ppuStack_b8;
    if (((ulong)ppuStack_b8 & 1) != 0) {
      ppuVar8 = *(undefined ***)((ulong)ppuStack_b8 & 0xfffffffffffffffe);
    }
    func_0x0001005ff1bc();
    uStack_a8 = (ulong)ppuVar8;
  }
  FUN_1005ff214();
  FUN_1005f73a4(&pcStack_f0);
  func_0x000100564164(&puStack_180);
  func_0x0001005ff0d0(&pcStack_f0);
  plVar9 = *(long **)(pcStack_f0 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = *plVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puStack_180 = puVar7 + 3;
  puStack_178 = puVar7;
  (**(code **)(*plVar9 + 0x88))(plVar9,&ppuStack_c0,&puStack_180);
  FUN_10061dd10(&puStack_180);
  func_0x000100564164(&pcStack_f0);
  FUN_10061dd40(&ppuStack_c0);
  FUN_1005ff144(&puStack_1d0);
  FUN_1005fe558(&puStack_1c0);
  puVar7 = &uStack_1a0;
  FUN_1005fe558(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    func_0x000107c60e78();
    FUN_1005f73a4(&pcStack_f0);
    func_0x000100564164(&puStack_180);
    FUN_10061dd40(&ppuStack_c0);
    FUN_1005ff144(&puStack_1d0);
    FUN_1005fe558(&puStack_1c0);
    do {
      FUN_1005fe558(&uStack_1a0);
      func_0x000107c332e4();
    } while( true );
  }
  return puVar7;
}



/* Entry: 1006aeec4; end: 1006aeeeb;  */

long FUN_1006aeec4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1006aeeec; end: 1006aef0b;  */

void FUN_1006aeeec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1006aef0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006aef0c; end: 1006aef2f;  */

undefined8 FUN_1006aef0c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_100563770(param_1 + 0x18);
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1006aef30; end: 1006aef37;  */

undefined8 FUN_1006aef30(long param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return in_stack_00000008;
}



/* Entry: 1006aef38; end: 1006aeffb;  */

undefined8 * FUN_1006aef38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a8ada0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c34840();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_1006af010(param_1 + 3,param_2,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x0001002a0e60(lVar2,param_2);
  param_1[6] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10068e734(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c2a324(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = param_2;
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  return param_1;
}



/* Entry: 1006aeffc; end: 1006af00f;  */

void FUN_1006aeffc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  return;
}



/* Entry: 1006af010; end: 1006af02f;  */

void FUN_1006af010(void)

{
  FUN_1006aeffc();
  FUN_1006af030();
  return;
}



/* Entry: 1006af030; end: 1006af047;  */

void FUN_1006af030(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1006af048; end: 1006af0f7;  */

void FUN_1006af048(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_1[1] - *param_1 >> 2)
  ;
  func_0x000107c61180();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 4) {
    lVar3 = lVar4;
    func_0x000108619710(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798(puVar2,param_2,lVar3);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c40794(puVar2);
  func_0x0001006af108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006af0f8; end: 1006af10f;  */

void FUN_1006af0f8(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001006aded4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10068e734();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x000107c2a2e8();
      puVar2 = puVar3;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c3480c();
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}


