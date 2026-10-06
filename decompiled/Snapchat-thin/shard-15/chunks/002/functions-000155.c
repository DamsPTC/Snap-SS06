/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b94293c; end: 10b942943;  */

long * FUN_10b94293c(long param_1,undefined8 param_2,int param_3,int param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  long *plStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  long *plStack_d0;
  long lStack_c8;
  long alStack_c0 [5];
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_68;
  
  func_0x00010b944de4(param_1 + -0x18);
  func_0x00010b944c94();
  plStack_108 = (long *)0x0;
  uStack_68 = extraout_x8;
  if (param_4 == 0) {
    func_0x00010b8d77b8(&plStack_d0,unaff_x20 + 0x80,*(undefined4 *)(*unaff_x19 + 0x18));
  }
  else {
    func_0x00010b8d799c(&plStack_d0,unaff_x20 + 0x80);
  }
  FUN_10b8d498c(&plStack_108,&plStack_d0);
  func_0x0001080d26d8(plStack_d0);
  plStack_d0 = plStack_108;
  if ((plStack_108 != (long *)0x0) && (plStack_108[2] != 0)) {
    do {
      func_0x00010b944d40();
      plStack_d0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_c8 = *param_5;
  plVar3 = alStack_c0;
  (**(code **)(param_5[1] + 0x10))(plVar3,param_5 + 1);
  pcStack_98 = FUN_10b9443b4;
  ppuStack_90 = &PTR_FUN_110d78288;
  func_0x00010b944f14();
  lVar2 = lStack_c8;
  plVar1 = plStack_d0;
  plStack_d0 = (long *)0x0;
  *plVar3 = (long)plVar1;
  plVar3[1] = lVar2;
  (**(code **)(alStack_c0[0] + 0x10))(plVar3 + 2,alStack_c0);
  plStack_88 = plVar3;
  FUN_10b942910(&plStack_d0);
  if ((param_3 == 0) || (in_ZR = *(char *)((long)plStack_108 + 0x1d9) == '\x01', !(bool)in_ZR)) {
    FUN_10b9443b4(&pcStack_98);
  }
  else {
    pcStack_100 = FUN_10b9443b4;
    ppuStack_f8 = &PTR_FUN_110d78288;
    plStack_88 = (long *)0x0;
    plStack_f0 = plVar3;
    func_0x00010b94b6f8(*(undefined8 *)(unaff_x20 + 0x110));
    func_0x00010b944cf8(ppuStack_f8);
  }
  FUN_10b944404(&ppuStack_90);
  plVar3 = plStack_108;
  func_0x0001080d26d8();
  func_0x00010b944c58(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (**(code **)plVar3[2])();
    func_0x000108100e0c(plVar3);
    func_0x0001080d26d8();
    return unaff_x19;
  }
  return plVar3;
}



/* Entry: 10b942944; end: 10b94296f;  */

void FUN_10b942944(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010b944f1c();
  FUN_10b913270();
  *param_1 = param_2;
  return;
}



/* Entry: 10b942970; end: 10b942977;  */

/* WARNING: Possible PIC construction at 0x00010b8f18bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8f19d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f18c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1918) */
/* WARNING: Removing unreachable block (ram,0x00010b8f195c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1930) */
/* WARNING: Removing unreachable block (ram,0x00010b8f196c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f193c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1978) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ac) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19a0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f194c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1964) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fdc78) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a1c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a24) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd444) */

void FUN_10b942970(long param_1,ulong *param_2,long *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  ulong *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar7 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010b8fd430();
  lStack_70 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b8fdb28();
      lStack_70 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_60 = *param_2;
  if (uStack_60 != 0) {
    piVar1 = (int *)(uStack_60 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_58 = FUN_10b8f8f10;
  ppuStack_50 = &PTR_DAT_110d73860;
  uStack_48 = 0;
  uStack_68 = uVar7;
  if (lStack_70 != 0) {
    do {
      func_0x00010b8fdb28();
      uStack_48 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  uStack_40 = uStack_68;
  if (uStack_60 != 0) {
    piVar1 = (int *)(uStack_60 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_38 = uStack_60;
  func_0x00010b8fe6bc();
  func_0x00010b8fd728(ppuStack_50);
  FUN_10b8f2f78(&lStack_70);
  func_0x00010b8fd3a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b8f1794;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b8fd474();
  func_0x00010b8f1bbc(&lStack_d0);
  if (lStack_d0 != 0) {
    uVar7 = 0;
    puVar5 = param_2;
    FUN_10b8e5ce4();
    plVar6 = (long *)*param_2;
    puStack_c8 = puVar5;
    uStack_c0 = uVar7;
    (**(code **)(*plVar6 + 400))(plVar6,&puStack_c8);
    if (((ulong)plVar6 & 1) == 0) {
      FUN_10b99f5f8(&puStack_110,&UNK_10f7cc218);
      func_0x00010b8fdab0();
      func_0x000104bda960(puStack_110);
      goto LAB_10b8f18b8;
    }
    uVar8 = *param_2;
    func_0x00010b8fdcbc();
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    func_0x000107c31088(auStack_148,&UNK_10f686181);
    puStack_110 = auStack_140;
    uStack_108 = 0;
    uStack_100 = 2;
    uStack_f0 = 0;
    uStack_e8 = 0;
    puStack_f8 = auStack_148;
    FUN_10b8e143c(&uStack_e0,uVar8,&puStack_c8,&puStack_110,param_2[3]);
    func_0x00010b8fdbd0();
    bVar2 = *(byte *)(param_2[3] + 8);
    if ((bVar2 & 1) == 0) {
      func_0x00010b8fd458(*param_2);
    }
    else {
      uStack_158 = uStack_d8;
      uStack_160 = uStack_e0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      func_0x00010b910b80(lStack_d0,&uStack_160);
      FUN_10b8e552c(&uStack_160);
    }
    FUN_10b8e552c(&uStack_e0);
    if (bVar2 == 0) goto LAB_10b8f18b8;
  }
  func_0x00010b8fd458(*param_2);
LAB_10b8f18b8:
  if (lStack_d0 == 0) {
    return;
  }
  uStack_168 = 0x10b8f18c0;
  uStack_178 = *(undefined8 *)(lStack_d0 + 0x10);
  uStack_180 = *(undefined8 *)(lStack_d0 + 8);
  ppuStack_170 = &puStack_80;
  func_0x0001003a90c4(&uStack_180);
  return;
}



/* Entry: 10b942978; end: 10b9429ff;  */

void FUN_10b942978(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  
  func_0x00010b944de4();
  func_0x00010b93d938(*(undefined8 *)(param_1 + 0x40));
  lVar3 = *(long *)(unaff_x20 + 0x148);
  if (lVar3 != 0) {
    lVar2 = *unaff_x19;
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      FUN_10b94d3a8();
      uVar1 = (undefined1)lVar2;
    }
    *(undefined1 *)(lVar3 + 0x369) = uVar1;
    lVar2 = *(long *)(unaff_x20 + 0x148);
    lVar3 = *unaff_x19;
    if (lVar3 == 0) {
      uVar1 = 1;
    }
    else {
      func_0x00010b94d3e0();
      uVar1 = (undefined1)lVar3;
    }
    *(undefined1 *)(lVar2 + 0x36a) = uVar1;
    lVar2 = *(long *)(unaff_x20 + 0x148);
    lVar3 = *unaff_x19;
    if (lVar3 == 0) {
      uVar1 = 1;
    }
    else {
      func_0x00010b94d418();
      uVar1 = (undefined1)lVar3;
    }
    *(undefined1 *)(lVar2 + 0x36b) = uVar1;
  }
  return;
}



/* Entry: 10b942a00; end: 10b942a1b;  */

void FUN_10b942a00(long param_1)

{
  long unaff_x20;
  
  func_0x00010b93f56c(*(undefined8 *)(param_1 + 0x40));
  func_0x00010b93f564();
  func_0x0001089af5ac(unaff_x20 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0xe8);
  return;
}



/* Entry: 10b942a1c; end: 10b942a6b;  */

long FUN_10b942a1c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010b93d8b4(&lStack_28,*(undefined8 *)(param_1 + 0x40));
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    FUN_10b94d488();
  }
  func_0x00010b8fb1f8(lStack_28);
  return lVar1;
}



/* Entry: 10b942a6c; end: 10b942b6f;  */

void FUN_10b942a6c(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b944c94(param_1);
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    uVar1 = 0;
    if ((char)param_3[1] == '\b') {
      func_0x00010b944de4();
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined **)((long)register0x00000008 + -0x78) = &UNK_10dd5b8b0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      unaff_x21 = *param_3;
      lVar2 = unaff_x21 + 0x10;
      func_0x00010527d444();
      *(long *)((long)register0x00000008 + -0xb8) = lVar2;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = param_2;
      unaff_x23 = *(long *)(unaff_x21 + 0x10) + *(long *)(unaff_x21 + 0x28);
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x90);
      while (uVar1 = lVar2 == unaff_x23, !(bool)uVar1) {
        unaff_x21 = *(long *)((long)register0x00000008 + -0xb0);
        FUN_10b8b20b0((undefined1 *)((long)register0x00000008 + -0x90),unaff_x21 + 8);
        if (*(long *)((long)register0x00000008 + -0x90) == 1) {
          unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x88);
          FUN_10b9a9588();
          FUN_10b9446b0((undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0x78),unaff_x21);
          *(undefined1 **)(*(long *)((long)register0x00000008 + -0xa0) + 8) = unaff_x22;
        }
        func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0x90));
        func_0x00010527d4cc((undefined1 *)((long)register0x00000008 + -0xb8));
        lVar2 = *(long *)((long)register0x00000008 + -0xb8);
      }
      param_3 = (long *)((long)register0x00000008 + -0x78);
      param_2 = unaff_x19;
      FUN_10b98b46c(*(undefined8 *)(unaff_x20 + 0x118));
      param_1 = (undefined1 *)((long)register0x00000008 + -0x78);
      func_0x00010b944498();
    }
    func_0x00010b944c58(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar1) break;
    unaff_x30 = FUN_10b942b70;
    ___stack_chk_fail();
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10b942b70; end: 10b942b87;  */

void FUN_10b942b70(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -0x18;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b944c94(param_1);
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    uVar1 = 0;
    if ((char)param_3[1] == '\b') {
      func_0x00010b944de4();
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined **)((long)register0x00000008 + -0x78) = &UNK_10dd5b8b0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      unaff_x21 = *param_3;
      lVar2 = unaff_x21 + 0x10;
      func_0x00010527d444();
      *(long *)((long)register0x00000008 + -0xb8) = lVar2;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = param_2;
      unaff_x23 = *(long *)(unaff_x21 + 0x10) + *(long *)(unaff_x21 + 0x28);
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x90);
      while (uVar1 = lVar2 == unaff_x23, !(bool)uVar1) {
        unaff_x21 = *(long *)((long)register0x00000008 + -0xb0);
        FUN_10b8b20b0((undefined1 *)((long)register0x00000008 + -0x90),unaff_x21 + 8);
        if (*(long *)((long)register0x00000008 + -0x90) == 1) {
          unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x88);
          FUN_10b9a9588();
          FUN_10b9446b0((undefined1 *)((long)register0x00000008 + -0xa8),
                        (undefined1 *)((long)register0x00000008 + -0x78),unaff_x21);
          *(undefined1 **)(*(long *)((long)register0x00000008 + -0xa0) + 8) = unaff_x22;
        }
        func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0x90));
        func_0x00010527d4cc((undefined1 *)((long)register0x00000008 + -0xb8));
        lVar2 = *(long *)((long)register0x00000008 + -0xb8);
      }
      param_3 = (long *)((long)register0x00000008 + -0x78);
      param_2 = unaff_x19;
      FUN_10b98b46c(*(undefined8 *)(unaff_x20 + 0x118));
      param_1 = (undefined1 *)((long)register0x00000008 + -0x78);
      func_0x00010b944498();
    }
    func_0x00010b944c58(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar1) break;
    unaff_x30 = FUN_10b942b70;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10b942b88; end: 10b942c37;  */

void FUN_10b942b88(long param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  long *plVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x168) != 0) {
    plVar1 = param_3;
    func_0x00010b944de4();
    FUN_10b99fc44(&uStack_38,plVar1);
    plVar1 = *(long **)(unaff_x20 + 0x168);
    if (*param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*param_3 + 0x28);
    }
    FUN_10b99f828(&uStack_38);
    FUN_10b9a5e5c(auStack_50);
    func_0x00010b99f83c(&uStack_38);
    FUN_10b9a5e5c(auStack_68);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
    func_0x00010b944f0c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    func_0x000104bda960(uStack_38);
  }
  return;
}



/* Entry: 10b942c38; end: 10b942c3f;  */

void FUN_10b942c38(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long unaff_x20;
  undefined4 uVar2;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x150) != 0) {
    plVar1 = param_3;
    func_0x00010b944de4();
    FUN_10b99fc44(&uStack_38,plVar1);
    plVar1 = *(long **)(unaff_x20 + 0x168);
    if (*param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*param_3 + 0x28);
    }
    FUN_10b99f828(&uStack_38);
    FUN_10b9a5e5c(auStack_50);
    func_0x00010b99f83c(&uStack_38);
    FUN_10b9a5e5c(auStack_68);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
    func_0x00010b944f0c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    func_0x000104bda960(uStack_38);
  }
  return;
}



/* Entry: 10b942c40; end: 10b942c8b;  */

void FUN_10b942c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  plVar1 = *(long **)(param_1 + 0x168);
  if (plVar1 != (long *)0x0) {
    FUN_10b9a5e5c(auStack_38,param_3);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2,auStack_38);
    func_0x00010b944f0c();
  }
  return;
}



/* Entry: 10b942c8c; end: 10b942cbb;  */

void FUN_10b942c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  plVar1 = *(long **)(param_1 + 0x150);
  if (plVar1 != (long *)0x0) {
    FUN_10b9a5e5c(auStack_38,param_3);
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2,auStack_38);
    func_0x00010b944f0c();
  }
  return;
}



/* Entry: 10b942cbc; end: 10b942d17;  */

void FUN_10b942cbc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 400);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2);
    lVar2 = *(long *)(param_1 + 0x78);
    FUN_10b8c43f8();
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b942d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 400) + 0x20))(*(long **)(param_1 + 400),param_1);
      return;
    }
  }
  return;
}



/* Entry: 10b942d18; end: 10b942d1f;  */

void FUN_10b942d18(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x170);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + -0x20,param_2);
    lVar2 = *(long *)(param_1 + 0x58);
    FUN_10b8c43f8();
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b942d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x170) + 0x20))
                (*(long **)(param_1 + 0x170),param_1 + -0x20);
      return;
    }
  }
  return;
}



/* Entry: 10b942d20; end: 10b942d73;  */

undefined8 * FUN_10b942d20(undefined8 *param_1,undefined8 *param_2)

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
      func_0x00010b944c84();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001080d5b74(&uStack_30);
  return param_1;
}



/* Entry: 10b942d74; end: 10b942e27;  */

void FUN_10b942d74(long param_1)

{
  undefined1 in_ZR;
  code *pcVar1;
  long lVar2;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  long *plVar3;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x00010b944c94();
  plVar3 = *(long **)(*(long *)(lVar2 + 0x40) + 0x50);
  uStack_38 = extraout_x8;
  if (plVar3 != (long *)0x0) {
    do {
      func_0x00010b944dac();
    } while (extraout_w10 != 0);
    pcVar1 = *(code **)(param_1 + 0x28);
    if (pcVar1 != (code *)0x0) {
      func_0x000107c28148();
      pcStack_68 = pcVar1;
      func_0x00010b944edc(*(undefined8 *)(*plVar3 + 0xa0));
    }
  }
  pcStack_68 = FUN_10b944504;
  ppuStack_60 = &PTR_FUN_110d782a8;
  lStack_58 = param_1;
  func_0x00010b9421c8(param_1,&pcStack_68);
  func_0x00010b944ce0(ppuStack_60);
  func_0x000104bd474c();
  func_0x00010b944c58(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8c2a68();
    lVar2 = 0;
    if (plVar3 != (long *)0x0) {
      lVar2 = plVar3[0x23];
      func_0x00010b8c3698();
    }
    *extraout_x8_00 = lVar2;
    return;
  }
  return;
}



/* Entry: 10b942e28; end: 10b942e87;  */

void FUN_10b942e28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010b8c2a68();
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x118);
    func_0x00010b8c3698();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10b942e88; end: 10b942f5f;  */

void FUN_10b942e88(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        func_0x0001081002dc(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    func_0x00010b944d28();
  }
  return;
}



/* Entry: 10b942f60; end: 10b942fcf;  */

void FUN_10b942f60(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  puStack_38 = (undefined8 *)0x0;
  puStack_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  func_0x00010b93f564();
  lVar2 = lVar3 + 0x90;
  FUN_10b93da58();
  lStack_40 = param_2;
  while (lStack_48 = lVar2, lVar2 = lStack_48, func_0x00010b93f688(), lVar2 != extraout_x8) {
    if ((*(long *)(lStack_40 + 8) == 0) || (*(long *)(*(long *)(lStack_40 + 8) + 8) != 1)) {
      FUN_10b93e59c(&puStack_38,lStack_40 + 8);
      FUN_10b93dad4(&lStack_48);
      lVar2 = lStack_48;
    }
    else {
      lVar2 = lVar3 + 0x90;
      FUN_10b93da84();
      lStack_40 = lStack_48;
    }
  }
  func_0x00010b93f5a4();
  puVar1 = puStack_30;
  for (puVar4 = puStack_38; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    func_0x00010b92d8f8(*puVar4);
  }
  func_0x00010b93e808(&puStack_38);
  return;
}



/* Entry: 10b942fd0; end: 10b942fef;  */

void FUN_10b942fd0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b941c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b942ff0; end: 10b942ff3;  */

void FUN_10b942ff0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b942ff4; end: 10b9430bf;  */

void FUN_10b942ff4(undefined8 *param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b944e6c();
  *param_1 = &PTR_FUN_110d78188;
  func_0x00010b944f04();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  param_1[1] = unaff_x20[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b944c84();
    } while (extraout_w10 != 0);
  }
  lVar1 = unaff_x20[2];
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b944d40();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[2] = lVar1;
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b9430c0; end: 10b9430cb;  */

void FUN_10b9430c0(void)

{
  return;
}



/* Entry: 10b9430cc; end: 10b943797;  */

void FUN_10b9430cc(long *param_1,long *param_2,long param_3,uint param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint extraout_w8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lStack_70;
  long lStack_68;
  
  do {
    plVar8 = param_1;
LAB_10b943110:
    while( true ) {
      param_1 = plVar8;
      uVar17 = (long)param_2 - (long)param_1 >> 3;
      bVar4 = 4 < uVar17;
      switch(uVar17) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x00010b944ca4(param_2[-1]);
        if (bVar4) {
          return;
        }
        FUN_10b8f0f78(param_1,param_2 + -1);
        return;
      case 3:
        func_0x00010b944e4c(param_1,param_1 + 1);
        return;
      case 4:
        func_0x00010b943838(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
        return;
      case 5:
        FUN_10b9438a4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
        return;
      }
      if ((long)uVar17 < 0x18) {
        if ((param_4 & 1) == 0) {
          if (param_1 == param_2) {
            return;
          }
          while (plVar8 = param_1, param_1 = plVar8 + 1, param_1 != param_2) {
            lStack_68 = plVar8[1];
            if (*(uint *)(lStack_68 + 0x18) < *(uint *)(*plVar8 + 0x18)) {
              *param_1 = 0;
              do {
                plVar6 = plVar8;
                func_0x00010b944ee4();
                plVar8 = plVar6 + -1;
              } while (*(uint *)(lStack_68 + 0x18) < *(uint *)(*plVar8 + 0x18));
              func_0x0001080d04a4(plVar6,&lStack_68);
              func_0x00010b944dc8();
            }
          }
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        lVar9 = 0;
        plVar8 = param_1;
        goto LAB_10b943440;
      }
      if (param_3 == 0) {
        if (param_1 == param_2) {
          return;
        }
        uVar12 = uVar17 - 2 >> 1;
        uVar15 = uVar12;
        goto LAB_10b9434d4;
      }
      plVar8 = param_1 + (uVar17 >> 1);
      if (uVar17 < 0x81) {
        func_0x00010b944e4c(plVar8,param_1);
      }
      else {
        func_0x00010b944e4c(param_1,plVar8);
        FUN_10b943798(param_1 + 1,plVar8 + -1,param_2 + -2);
        FUN_10b943798(param_1 + 2,plVar8 + 1,param_2 + -3);
        FUN_10b943798(plVar8 + -1,plVar8,plVar8 + 1);
        FUN_10b8f0f78(param_1,plVar8);
      }
      param_3 = param_3 + -1;
      lStack_68 = *param_1;
      if (((param_4 & 1) != 0) ||
         (bVar4 = *(uint *)(lStack_68 + 0x18) <= *(uint *)(param_1[-1] + 0x18), !bVar4)) break;
      *param_1 = 0;
      func_0x00010b944ca4(lStack_68);
      plVar8 = param_1;
      if (bVar4) {
        do {
          plVar8 = plVar8 + 1;
          if (param_2 <= plVar8) break;
        } while (*(uint *)(*plVar8 + 0x18) <= extraout_w8);
      }
      else {
        bVar4 = false;
        do {
          bVar1 = bVar4;
          plVar8 = plVar8 + 1;
          func_0x00010b944d04();
          bVar4 = true;
        } while (bVar1);
      }
      uVar5 = param_2 <= plVar8;
      plVar6 = param_2;
      while (!(bool)uVar5) {
        plVar6 = plVar6 + -1;
        func_0x00010b944d04();
      }
      while (uVar5 = plVar6 <= plVar8, !(bool)uVar5) {
        FUN_10b8f0f78(plVar8,plVar6);
        do {
          uVar2 = uVar5;
          plVar8 = plVar8 + 1;
          func_0x00010b944d04();
          uVar3 = 0;
          uVar5 = 1;
        } while ((bool)uVar2);
        do {
          plVar6 = plVar6 + -1;
          func_0x00010b944d04();
        } while (!(bool)uVar3);
      }
      plVar6 = plVar8 + -1;
      if (param_1 != plVar6) {
        func_0x0001080d04a4(param_1,plVar6);
      }
      func_0x0001080d04a4(plVar6,&lStack_68);
      func_0x00010b944dc8();
      param_4 = 0;
    }
    uVar17 = 0;
    *param_1 = 0;
    do {
      lVar9 = uVar17 + 8;
      uVar17 = uVar17 + 8;
    } while (*(uint *)(*(long *)((long)param_1 + lVar9) + 0x18) < *(uint *)(lStack_68 + 0x18));
    plVar6 = (long *)((long)param_1 + uVar17);
    bVar4 = 7 < uVar17;
    plVar10 = param_2;
    plVar8 = plVar6;
    if (uVar17 == 8) {
      do {
        bVar4 = plVar10 <= plVar6;
        plVar7 = plVar10;
        if (bVar4) break;
        plVar10 = plVar10 + -1;
        func_0x00010b944f38();
        plVar7 = plVar10;
      } while (bVar4);
    }
    else {
      do {
        bVar1 = bVar4;
        plVar10 = plVar10 + -1;
        func_0x00010b944f38();
        bVar4 = true;
        plVar7 = plVar10;
      } while (bVar1);
    }
    while (uVar5 = plVar10 <= plVar8, !(bool)uVar5) {
      FUN_10b8f0f78(plVar8,plVar10);
      do {
        plVar8 = plVar8 + 1;
        func_0x00010b944f38();
      } while (!(bool)uVar5);
      do {
        uVar3 = uVar5;
        plVar10 = plVar10 + -1;
        func_0x00010b944f38();
        uVar5 = 1;
      } while ((bool)uVar3);
    }
    plVar10 = plVar8 + -1;
    if (param_1 != plVar10) {
      func_0x0001080d04a4(param_1,plVar10);
    }
    func_0x0001080d04a4(plVar10,&lStack_68);
    func_0x00010b944dc8();
    if (plVar6 < plVar7) goto LAB_10b9432b4;
    plVar6 = param_1;
    FUN_10b94394c(param_1,plVar10);
    plVar7 = plVar8;
    FUN_10b94394c(plVar8,param_2);
    if ((int)plVar7 == 0) goto code_r0x00010b9432b0;
    param_2 = plVar10;
    if (((ulong)plVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b943440:
  plVar6 = plVar8 + 1;
  if (plVar6 == param_2) {
    return;
  }
  lStack_68 = plVar8[1];
  if (*(uint *)(lStack_68 + 0x18) < *(uint *)(*plVar8 + 0x18)) {
    *plVar6 = 0;
    lVar16 = lVar9;
    do {
      lVar14 = lVar16;
      func_0x00010b944ee4();
      plVar8 = param_1;
      if (lVar14 == 0) goto LAB_10b9434a4;
      lVar16 = lVar14 + -8;
    } while (*(uint *)(lStack_68 + 0x18) < *(uint *)(*(long *)((long)param_1 + lVar14 + -8) + 0x18))
    ;
    plVar8 = (long *)((long)param_1 + lVar14);
LAB_10b9434a4:
    func_0x0001080d04a4(plVar8,&lStack_68);
    func_0x00010b944dc8();
  }
  lVar9 = lVar9 + 8;
  plVar8 = plVar6;
  goto LAB_10b943440;
LAB_10b9434d4:
  do {
    if ((long)uVar15 <= (long)uVar12) {
      uVar13 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      plVar8 = param_1 + uVar13;
      uVar11 = uVar15 * 2 + 2;
      if ((long)uVar11 < (long)uVar17) {
        lVar9 = plVar8[1];
        plVar6 = plVar8 + 1;
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(*plVar8 + 0x18)) {
          plVar6 = plVar8;
          lVar9 = *plVar8;
          uVar11 = uVar13;
        }
      }
      else {
        plVar6 = plVar8;
        lVar9 = *plVar8;
        uVar11 = uVar13;
      }
      plVar8 = param_1 + uVar15;
      lVar16 = *plVar8;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar9 + 0x18)) {
        *plVar8 = 0;
        lStack_68 = lVar16;
        do {
          plVar10 = plVar6;
          func_0x0001080d04a4(plVar8,plVar10);
          if ((long)uVar12 < (long)uVar11) break;
          uVar13 = uVar11 << 1 | 1;
          plVar8 = param_1 + uVar13;
          uVar11 = uVar11 * 2 + 2;
          if ((long)uVar11 < (long)uVar17) {
            lVar9 = plVar8[1];
            plVar6 = plVar8 + 1;
            if (*(uint *)(lVar9 + 0x18) <= *(uint *)(*plVar8 + 0x18)) {
              plVar6 = plVar8;
              lVar9 = *plVar8;
              uVar11 = uVar13;
            }
          }
          else {
            plVar6 = plVar8;
            lVar9 = *plVar8;
            uVar11 = uVar13;
          }
          plVar8 = plVar10;
        } while (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar9 + 0x18));
        func_0x0001080d04a4(plVar10,&lStack_68);
        func_0x00010b944dc8();
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  do {
    if ((long)uVar17 < 2) {
      return;
    }
    lStack_70 = *param_1;
    *param_1 = 0;
    plVar8 = param_1;
    uVar15 = 0;
    do {
      uVar11 = uVar15 << 1 | 1;
      uVar12 = uVar15 * 2 + 2;
      plVar6 = plVar8 + uVar15 + 1;
      uVar13 = uVar11;
      if (((long)uVar12 < (long)uVar17) &&
         (plVar6 = plVar8 + uVar15 + 2, uVar13 = uVar12,
         *(uint *)(plVar8[uVar15 + 2] + 0x18) <= *(uint *)(plVar8[uVar15 + 1] + 0x18))) {
        plVar6 = plVar8 + uVar15 + 1;
        uVar13 = uVar11;
      }
      func_0x0001080d04a4(plVar8,plVar6);
      plVar8 = plVar6;
      uVar15 = uVar13;
    } while ((long)uVar13 <= (long)(uVar17 - 2 >> 1));
    param_2 = param_2 + -1;
    if (plVar6 == param_2) {
      func_0x0001080d04a4(plVar6,&lStack_70);
    }
    else {
      func_0x0001080d04a4(plVar6,param_2);
      func_0x0001080d04a4(param_2,&lStack_70);
      lVar9 = (long)plVar6 + (8 - (long)param_1) >> 3;
      if (1 < lVar9) {
        uVar15 = lVar9 - 2U >> 1;
        lVar9 = *plVar6;
        if (*(uint *)(param_1[uVar15] + 0x18) < *(uint *)(lVar9 + 0x18)) {
          *plVar6 = 0;
          plVar8 = param_1 + uVar15;
          lStack_68 = lVar9;
          do {
            plVar10 = plVar8;
            func_0x0001080d04a4(plVar6,plVar10);
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            plVar8 = param_1 + uVar15;
            plVar6 = plVar10;
          } while (*(uint *)(param_1[uVar15] + 0x18) < *(uint *)(lStack_68 + 0x18));
          func_0x0001080d04a4(plVar10,&lStack_68);
          func_0x00010b944dc8();
        }
      }
    }
    func_0x000105276914(lStack_70);
    uVar17 = uVar17 - 1;
  } while( true );
code_r0x00010b9432b0:
  if (((ulong)plVar6 & 1) == 0) {
LAB_10b9432b4:
    FUN_10b9430cc(param_1,plVar10,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b943110;
}



/* Entry: 10b943798; end: 10b9438a3;  */

void FUN_10b943798(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = *(uint *)(*param_2 + 0x18);
  if (uVar1 < *(uint *)(*param_1 + 0x18)) {
    uVar2 = uVar1 <= *(uint *)(*param_3 + 0x18);
    if ((bool)uVar2) {
      FUN_10b8f0f78(param_1,param_2);
      func_0x00010b944ca4(*param_3);
      param_1 = param_2;
      if ((bool)uVar2) {
        return;
      }
    }
LAB_10b943828:
    func_0x00010b8fea28(param_1,param_3);
    func_0x0001080d04a4();
    func_0x00010b8fdcc8();
    func_0x0001080d04a4();
    func_0x00010b8fe108();
    return;
  }
  uVar2 = uVar1 <= *(uint *)(*param_3 + 0x18);
  if (!(bool)uVar2) {
    func_0x00010b944ec4();
    func_0x00010b944ca4(*param_2);
    param_3 = param_2;
    if (!(bool)uVar2) goto LAB_10b943828;
  }
  return;
}



/* Entry: 10b9438a4; end: 10b94394b;  */

void FUN_10b9438a4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x00010b944de4();
  func_0x00010b943838();
  func_0x00010b944ca4(*param_5);
  if (!(bool)in_CY) {
    FUN_10b8f0f78(param_4,param_5);
    func_0x00010b944ca4(*param_4);
    if (!(bool)in_CY) {
      func_0x00010b944e98();
      func_0x00010b944ca4(*param_3);
      if (!(bool)in_CY) {
        func_0x00010b944ed0();
        func_0x00010b944ca4(*unaff_x19);
        if (!(bool)in_CY) {
          func_0x00010b944f44();
          func_0x00010b8fea28();
          func_0x0001080d04a4();
          func_0x00010b8fdcc8();
          func_0x0001080d04a4();
          func_0x00010b8fe108();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10b94394c; end: 10b943adf;  */

void FUN_10b94394c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  func_0x00010b944f50();
  uVar4 = param_2 - param_1 >> 3;
  bVar3 = 4 < uVar4;
  switch(uVar4) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010b944ca4(unaff_x20[-1],1);
    if (!bVar3) {
      func_0x00010b944ec4();
    }
    break;
  case 3:
    func_0x00010b943798();
    break;
  case 4:
    func_0x00010b943838();
    break;
  case 5:
    FUN_10b9438a4();
    break;
  default:
    func_0x00010b944e4c();
    lVar9 = 0;
    iVar10 = 0;
    plVar2 = (long *)(unaff_x19 + 0x18);
    plVar7 = (long *)(unaff_x19 + 0x10);
    while (plVar5 = plVar2, plVar5 != unaff_x20) {
      lVar6 = *plVar5;
      if (*(uint *)(lVar6 + 0x18) < *(uint *)(*plVar7 + 0x18)) {
        *plVar5 = 0;
        lVar8 = lVar9;
        do {
          lVar1 = unaff_x19 + lVar8;
          func_0x0001080d04a4(lVar1 + 0x18,lVar1 + 0x10);
          if (lVar8 == -0x10) break;
          lVar8 = lVar8 + -8;
        } while (*(uint *)(lVar6 + 0x18) < *(uint *)(*(long *)(lVar1 + 8) + 0x18));
        func_0x0001080d04a4();
        iVar10 = iVar10 + 1;
        func_0x000105276914(lVar6);
        if (iVar10 == 8) {
          return;
        }
      }
      lVar9 = lVar9 + 8;
      plVar7 = plVar5;
      plVar2 = plVar5 + 1;
    }
  }
  return;
}



/* Entry: 10b943ae0; end: 10b943b73;  */

long * FUN_10b943ae0(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  undefined8 uStack_98;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar10 = (long *)*param_2;
  plVar13 = (long *)param_2[1];
  lVar11 = (long)plVar13 - (long)plVar10;
  if (lVar11 != 0) {
    uVar9 = lVar11 >> 4;
    if (uVar9 >> 0x3c != 0) {
      FUN_10b8da7a4();
      func_0x00010b944c94();
      plVar13 = (long *)param_1[2];
      lVar11 = *plVar13;
      uStack_98 = extraout_x8;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_d0 = 0;
      uStack_c8 = 0;
      lStack_d8 = 0;
      plVar10 = (long *)plVar13[1];
      plVar13 = (long *)plVar13[2];
      do {
        uVar6 = plVar10 == plVar13;
        if ((bool)uVar6) {
          plVar10 = &lStack_d8;
          plVar13 = (long *)0x1;
          FUN_10b8f2c10(*(undefined8 *)(lVar11 + 0x148));
          piVar1 = (int *)(lVar11 + 0x188);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar8 = &lStack_d8;
          func_0x00010b8f8308();
          func_0x00010b944c58(uStack_98);
          if ((bool)uVar6) {
            return plVar8;
          }
          ___stack_chk_fail();
          if (plVar10 != (long *)0x0) {
            plVar2 = plVar10 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar11 = *plVar13;
          if (lVar11 != 0) {
            piVar1 = (int *)(lVar11 + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          *plVar8 = (long)plVar10;
          plVar8[1] = lVar11;
          func_0x000107c278f8(0);
          func_0x000107c278f8(0);
          return plVar8;
        }
        lVar14 = *plVar10;
        FUN_10b93c510(&uStack_e0,*(undefined8 *)(lVar11 + 0x40),lVar14);
        lVar7 = lVar14 + 8;
        FUN_10b9a6170(lVar7,&UNK_10f7ce69c);
        if ((int)lVar7 == 0) {
          lVar7 = lVar14 + 8;
          FUN_10b9a6170(lVar7,&DAT_10f2f41e7);
          if ((int)lVar7 == 0) {
            lVar7 = lVar14 + 8;
            FUN_10b9a6170(lVar7,&UNK_10f7cdf31);
            if ((int)lVar7 == 0) {
              lVar7 = lVar14 + 8;
              FUN_10b9a6170(lVar7,&UNK_10f7ce6a6);
              if ((int)lVar7 == 0) {
                uVar9 = lVar14 + 8;
                FUN_10b9a6170(uVar9,&UNK_10f409c0c);
                if ((uVar9 & 1) == 0) {
                  lVar7 = lVar14 + 8;
                  FUN_10b9a6170(lVar7,&UNK_10f409c11);
                  if ((int)lVar7 == 0) {
                    lVar7 = lVar14 + 8;
                    FUN_10b9a6170(lVar7,&UNK_10f7ce6b1);
                    if ((int)lVar7 != 0) {
                      FUN_10b93c328(*(undefined8 *)(lVar11 + 0x40),&uStack_e0,*plVar10 + 0x10);
                      goto LAB_10b943d94;
                    }
                    FUN_10b9a6170(lVar14 + 8,&DAT_10f3af86f);
                    goto LAB_10b943ca0;
                  }
                }
                func_0x00010b93c1b0(*(undefined8 *)(lVar11 + 0x40),&uStack_e0,lVar14 + 8,
                                    *plVar10 + 0x10);
              }
              else {
LAB_10b943ca0:
                uVar5 = uStack_e0;
                FUN_10b92ca44(&lStack_c0,*plVar10 + 0x10);
                FUN_10b92d494(uVar5,lVar14 + 8,&lStack_c0);
                FUN_10b92ca5c(&lStack_c0);
              }
              goto LAB_10b943d94;
            }
            func_0x00010b944e78();
            FUN_10b923ab4(&lStack_c0,*(undefined8 *)(*plVar10 + 0x18),
                          *(undefined8 *)(*plVar10 + 0x20));
            if (lStack_c0 != 1) {
              func_0x00010b8fc3ac(&lStack_c0);
              func_0x000107c278f8(uStack_e8);
              goto LAB_10b943da8;
            }
            func_0x00010b92db8c(uStack_e0,&uStack_e8,auStack_b8);
            FUN_10b93c464(*(undefined8 *)(lVar11 + 0x40),&uStack_e0);
            func_0x00010b8fc3ac(&lStack_c0);
          }
          else {
            func_0x00010b944e78();
            uVar5 = uStack_e0;
            lVar12 = *plVar10;
            FUN_10b9a6a00();
            func_0x00010b92dde8(&lStack_c0,lVar12 + 0x10,lVar7);
            FUN_10b92d358(uVar5,&uStack_e8,&lStack_c0);
            func_0x00010b92ddb8(&lStack_c0);
            if (uStack_d0 < uStack_c8) {
              func_0x00010b944eb8();
              uStack_d0 = uStack_d0 + 0x10;
            }
            else {
              plVar8 = &lStack_d8;
              FUN_10b8f8120(plVar8,((long)(uStack_d0 - lStack_d8) >> 4) + 1);
              FUN_10b8f81b8(&lStack_c0,plVar8,(long)(uStack_d0 - lStack_d8) >> 4,&uStack_c8);
              func_0x00010b944eb8(lStack_b0);
              lStack_b0 = lStack_b0 + 0x10;
              FUN_10b8f8160(&lStack_d8,&lStack_c0);
              uVar9 = uStack_d0;
              func_0x00010b8f82a0(&lStack_c0);
              uStack_d0 = uVar9;
            }
          }
          func_0x000107c278f8(uStack_e8);
LAB_10b943d94:
          FUN_10b92d034(uStack_e0,lVar14 + 8,*plVar10 + 0x10);
        }
        else {
          lVar7 = *plVar10;
          FUN_10b8bc278(&lStack_c0,lVar7,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20)
                        ,*(undefined8 *)(lVar11 + 0x30));
          if (lStack_c0 == 1) {
            FUN_10b92d6d0(uStack_e0,lVar14 + 8,auStack_b8);
            func_0x00010b8fbea4(&lStack_c0);
            goto LAB_10b943d94;
          }
          func_0x00010b8fbea4(&lStack_c0);
        }
LAB_10b943da8:
        func_0x0001080d5af4(uStack_e0);
        plVar10 = plVar10 + 2;
      } while( true );
    }
    plVar8 = param_1 + 2;
    func_0x00010b8da7f8();
    *param_1 = (long)plVar8;
    param_1[1] = (long)plVar8;
    param_1[2] = (long)(plVar8 + uVar9 * 2);
    for (; plVar10 != plVar13; plVar10 = plVar10 + 2) {
      lVar11 = plVar10[1];
      lVar7 = *plVar10;
      plVar8[1] = plVar10[1];
      *plVar8 = lVar7;
      if (lVar11 != 0) {
        do {
          func_0x00010b944c84();
        } while (extraout_w10 != 0);
      }
      plVar8 = plVar8 + 2;
    }
    param_1[1] = (long)plVar8;
  }
  return param_1;
}



/* Entry: 10b943b74; end: 10b943ef7;  */

long * FUN_10b943b74(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined8 uStack_68;
  
  func_0x00010b944c94();
  plVar12 = *(long **)(param_1 + 0x10);
  lVar13 = *plVar12;
  uStack_68 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  plVar10 = (long *)plVar12[1];
  plVar12 = (long *)plVar12[2];
  do {
    uVar6 = plVar10 == plVar12;
    if ((bool)uVar6) {
      plVar10 = &lStack_a8;
      plVar12 = (long *)0x1;
      FUN_10b8f2c10(*(undefined8 *)(lVar13 + 0x148));
      piVar1 = (int *)(lVar13 + 0x188);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar9 = &lStack_a8;
      func_0x00010b8f8308();
      func_0x00010b944c58(uStack_68);
      if ((bool)uVar6) {
        return plVar9;
      }
      ___stack_chk_fail();
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar13 = *plVar12;
      if (lVar13 != 0) {
        piVar1 = (int *)(lVar13 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *plVar9 = (long)plVar10;
      plVar9[1] = lVar13;
      func_0x000107c278f8(0);
      func_0x000107c278f8(0);
      return plVar9;
    }
    lVar14 = *plVar10;
    FUN_10b93c510(&uStack_b0,*(undefined8 *)(lVar13 + 0x40),lVar14);
    lVar7 = lVar14 + 8;
    FUN_10b9a6170(lVar7,&UNK_10f7ce69c);
    if ((int)lVar7 == 0) {
      lVar7 = lVar14 + 8;
      FUN_10b9a6170(lVar7,&DAT_10f2f41e7);
      if ((int)lVar7 == 0) {
        lVar7 = lVar14 + 8;
        FUN_10b9a6170(lVar7,&UNK_10f7cdf31);
        if ((int)lVar7 == 0) {
          lVar7 = lVar14 + 8;
          FUN_10b9a6170(lVar7,&UNK_10f7ce6a6);
          if ((int)lVar7 == 0) {
            uVar8 = lVar14 + 8;
            FUN_10b9a6170(uVar8,&UNK_10f409c0c);
            if ((uVar8 & 1) == 0) {
              lVar7 = lVar14 + 8;
              FUN_10b9a6170(lVar7,&UNK_10f409c11);
              if ((int)lVar7 == 0) {
                lVar7 = lVar14 + 8;
                FUN_10b9a6170(lVar7,&UNK_10f7ce6b1);
                if ((int)lVar7 != 0) {
                  FUN_10b93c328(*(undefined8 *)(lVar13 + 0x40),&uStack_b0,*plVar10 + 0x10);
                  goto LAB_10b943d94;
                }
                FUN_10b9a6170(lVar14 + 8,&DAT_10f3af86f);
                goto LAB_10b943ca0;
              }
            }
            func_0x00010b93c1b0(*(undefined8 *)(lVar13 + 0x40),&uStack_b0,lVar14 + 8,*plVar10 + 0x10
                               );
          }
          else {
LAB_10b943ca0:
            uVar5 = uStack_b0;
            FUN_10b92ca44(&lStack_90,*plVar10 + 0x10);
            FUN_10b92d494(uVar5,lVar14 + 8,&lStack_90);
            FUN_10b92ca5c(&lStack_90);
          }
          goto LAB_10b943d94;
        }
        func_0x00010b944e78();
        FUN_10b923ab4(&lStack_90,*(undefined8 *)(*plVar10 + 0x18),*(undefined8 *)(*plVar10 + 0x20));
        if (lStack_90 != 1) {
          func_0x00010b8fc3ac(&lStack_90);
          func_0x000107c278f8(uStack_b8);
          goto LAB_10b943da8;
        }
        func_0x00010b92db8c(uStack_b0,&uStack_b8,auStack_88);
        FUN_10b93c464(*(undefined8 *)(lVar13 + 0x40),&uStack_b0);
        func_0x00010b8fc3ac(&lStack_90);
      }
      else {
        func_0x00010b944e78();
        uVar5 = uStack_b0;
        lVar11 = *plVar10;
        FUN_10b9a6a00();
        func_0x00010b92dde8(&lStack_90,lVar11 + 0x10,lVar7);
        FUN_10b92d358(uVar5,&uStack_b8,&lStack_90);
        func_0x00010b92ddb8(&lStack_90);
        if (uStack_a0 < uStack_98) {
          func_0x00010b944eb8();
          uStack_a0 = uStack_a0 + 0x10;
        }
        else {
          plVar9 = &lStack_a8;
          FUN_10b8f8120(plVar9,((long)(uStack_a0 - lStack_a8) >> 4) + 1);
          FUN_10b8f81b8(&lStack_90,plVar9,(long)(uStack_a0 - lStack_a8) >> 4,&uStack_98);
          func_0x00010b944eb8(lStack_80);
          lStack_80 = lStack_80 + 0x10;
          FUN_10b8f8160(&lStack_a8,&lStack_90);
          uVar8 = uStack_a0;
          func_0x00010b8f82a0(&lStack_90);
          uStack_a0 = uVar8;
        }
      }
      func_0x000107c278f8(uStack_b8);
LAB_10b943d94:
      FUN_10b92d034(uStack_b0,lVar14 + 8,*plVar10 + 0x10);
    }
    else {
      lVar7 = *plVar10;
      FUN_10b8bc278(&lStack_90,lVar7,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20),
                    *(undefined8 *)(lVar13 + 0x30));
      if (lStack_90 == 1) {
        FUN_10b92d6d0(uStack_b0,lVar14 + 8,auStack_88);
        func_0x00010b8fbea4(&lStack_90);
        goto LAB_10b943d94;
      }
      func_0x00010b8fbea4(&lStack_90);
    }
LAB_10b943da8:
    func_0x0001080d5af4(uStack_b0);
    plVar10 = plVar10 + 2;
  } while( true );
}



/* Entry: 10b943ef8; end: 10b943f8f;  */

long * FUN_10b943ef8(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = param_2;
  param_1[1] = lVar4;
  func_0x000107c278f8(0);
  func_0x000107c278f8(0);
  return param_1;
}



/* Entry: 10b943f90; end: 10b943f93;  */

void FUN_10b943f90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b943f94; end: 10b943fd7;  */

void FUN_10b943f94(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b944e6c();
  *param_1 = &PTR_DAT_110d781c8;
  func_0x00010b944f1c();
  *param_1 = *unaff_x20;
  FUN_10b943ae0(param_1 + 1,unaff_x20 + 1);
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b943fd8; end: 10b943fe3;  */

void FUN_10b943fd8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b943fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_2 + 0x10))();
  return;
}



/* Entry: 10b943fe4; end: 10b94401f;  */

void FUN_10b943fe4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b944020; end: 10b944023;  */

void FUN_10b944020(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b944024; end: 10b94406f;  */

void FUN_10b944024(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b944e6c();
  *param_1 = &PTR_FUN_110d781e8;
  func_0x00010b944e64();
  *param_1 = *unaff_x20;
  (**(code **)(unaff_x20[1] + 0x18))(param_1 + 1,unaff_x20 + 1);
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b944070; end: 10b94407b;  */

undefined8 FUN_10b944070(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  lVar1 = **(long **)(param_1 + 0x10);
  func_0x00010b8c37a0(lVar1 + 0x70);
  uVar2 = 0;
  while (*(long *)(lVar1 + 0x1e8) != 0) {
    func_0x00010b8c38e0();
    func_0x00010b8c215c(auStack_30);
    uVar2 = 1;
  }
  func_0x00010b8c3870();
  return uVar2;
}



/* Entry: 10b94407c; end: 10b94409b;  */

void FUN_10b94407c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001052768f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b94409c; end: 10b94409f;  */

void FUN_10b94409c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9440a0; end: 10b9440ef;  */

void FUN_10b9440a0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010b944e6c();
  *param_1 = &PTR_FUN_110d78208;
  plVar1 = (long *)0x8;
  __Znwm();
  lVar2 = *unaff_x20;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b944d40();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *plVar1 = lVar2;
  *(long **)(unaff_x19 + 8) = plVar1;
  return;
}



/* Entry: 10b9440f0; end: 10b944157;  */

undefined8 FUN_10b9440f0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  func_0x00010b8c37a0(lVar2 + 0x70);
  if ((((*(byte *)(lVar2 + 0x1f1) & 1) == 0) && (*(long *)(lVar2 + 0x1e8) != 0)) &&
     (iVar1 == *(int *)(*(long *)(*(long *)(lVar2 + 0x1c8) + (*(ulong *)(lVar2 + 0x1e0) >> 8) * 8) +
                       (*(ulong *)(lVar2 + 0x1e0) & 0xff) * 0x10))) {
    func_0x00010b8c38e0();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  func_0x00010b8c3870();
  return uVar3;
}



/* Entry: 10b944158; end: 10b944297;  */

void FUN_10b944158(long param_1)

{
  undefined1 uVar1;
  long ***ppplVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_f8 [48];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined1 auStack_98 [88];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b944c94();
  plVar6 = *(long **)(param_1 + 0x10);
  lVar4 = plVar6[2];
  auStack_98[0] = 0;
  uStack_40 = 0;
  uStack_38 = extraout_x8;
  func_0x000105c3b044();
  if ((int)param_1 != 0) {
    __ZNSt3__19to_stringEm(&pplStack_b0,*(undefined8 *)(*plVar6 + 0x60));
    ppplVar2 = (long ***)pplStack_b0;
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppplVar2 = &pplStack_b0;
    }
    FUN_10b9a7544(auStack_f8,&UNK_10f7ce6bf,0x1a,ppplVar2,uStack_a8);
    func_0x00010b8a6ed0(auStack_98,auStack_f8);
    func_0x00010b944f0c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_b0);
  }
  FUN_10b921f9c(auStack_f8,plVar6[1],*(undefined8 *)(*(long *)(plVar6[1] + 0x20) + 0xf8),
                *(undefined1 *)(lVar4 + 0x183));
  func_0x00010b922004(auStack_f8,*plVar6);
  uVar1 = *(ulong *)(*plVar6 + 0x60) == 0x14;
  if ((0x13 < *(ulong *)(*plVar6 + 0x60)) &&
     (plVar5 = *(long **)(*(long *)(lVar4 + 0x40) + 0x50), plVar5 != (long *)0x0)) {
    lVar4 = *(long *)(plVar6[1] + 0x20);
    ppplVar2 = (long ***)(plVar6 + 3);
    func_0x000107c28148();
    pplStack_b0 = (long **)ppplVar2;
    (**(code **)(*plVar5 + 0x68))(plVar5,lVar4 + 0x38,&pplStack_b0);
  }
  func_0x00010b8c1d84(*(undefined8 *)(plVar6[1] + 0x20));
  func_0x0001080d289c(uStack_c0);
  func_0x0001080d289c(uStack_c8);
  puVar3 = auStack_98;
  func_0x0001080e8dd4();
  func_0x00010b944c58(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (*(long *)(puVar3 + 8) == 0) {
      return;
    }
    FUN_10b9426c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b944298; end: 10b9442b7;  */

void FUN_10b944298(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b9426c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9442b8; end: 10b9442bb;  */

void FUN_10b9442b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9442bc; end: 10b94432f;  */

void FUN_10b9442bc(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long lVar1;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010b944e6c();
  *param_1 = &PTR_FUN_110d78248;
  func_0x00010b944e64();
  uVar3 = 0;
  if (*unaff_x20 != 0) {
    do {
      func_0x00010b944cc0();
      uVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar3;
  lVar1 = unaff_x20[1];
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b944d40();
      lVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[1] = lVar1;
  lVar2 = unaff_x20[3];
  lVar1 = unaff_x20[2];
  uVar3 = *(undefined8 *)((long)unaff_x20 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)unaff_x20 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar3;
  param_1[3] = lVar2;
  param_1[2] = lVar1;
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b944330; end: 10b9443b3;  */

void FUN_10b944330(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 400);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b944350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,*(long *)(param_1 + 0x10),*(long *)(param_1 + 0x18) + 0x20)
    ;
    return;
  }
  return;
}



/* Entry: 10b9443b4; end: 10b944403;  */

void FUN_10b9443b4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    FUN_10b9a8974(&uStack_38,lVar1 + 0x140);
  }
  func_0x00010b944edc(plVar2[1]);
  func_0x00010b9a8a24(&uStack_38);
  return;
}



/* Entry: 10b944404; end: 10b944423;  */

void FUN_10b944404(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b942910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b944424; end: 10b944427;  */

void FUN_10b944424(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b944428; end: 10b944503;  */

void FUN_10b944428(long *param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010b944e6c();
  *param_1 = (long)&PTR_FUN_110d78288;
  func_0x00010b944f14();
  lVar1 = *unaff_x20;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b944d40();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = lVar1;
  param_1[1] = unaff_x20[1];
  (**(code **)(unaff_x20[2] + 0x18))(param_1 + 2,unaff_x20 + 2);
  *(long **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b944504; end: 10b94456f;  */

void FUN_10b944504(long param_1)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long *plVar3;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  plVar3 = *(long **)(*(long *)(lVar2 + 0x40) + 0x50);
  lStack_28 = lVar1;
  if (plVar3 != (long *)0x0) {
    do {
      func_0x00010b944dac();
    } while (extraout_w10 != 0);
    if (lVar1 != 0) {
      func_0x000107c28148();
      func_0x00010b944edc(*(undefined8 *)(*plVar3 + 0xa8));
    }
  }
  func_0x000104bd474c(plVar3);
  FUN_10b94457c(&lStack_28);
  return;
}



/* Entry: 10b944570; end: 10b94457b;  */

void FUN_10b944570(void)

{
  return;
}



/* Entry: 10b94457c; end: 10b94459f;  */

undefined8 FUN_10b94457c(undefined8 param_1)

{
  FUN_10b9445a0(param_1,0);
  return param_1;
}



/* Entry: 10b9445a0; end: 10b9445bb;  */

void FUN_10b9445a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9445bc; end: 10b9445cf;  */

void FUN_10b9445bc(void)

{
  func_0x00010b9445d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9445d0; end: 10b9445e7;  */

void FUN_10b9445d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b944de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9445e8; end: 10b9445fb;  */

void FUN_10b9445e8(void)

{
  func_0x00010b944604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9445fc; end: 10b944613;  */

void FUN_10b9445fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b944de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b944614; end: 10b944627;  */

void FUN_10b944614(void)

{
  func_0x00010b944630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b944628; end: 10b94463b;  */

void FUN_10b944628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b944de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b94463c; end: 10b944683;  */

long * FUN_10b94463c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10b944684; end: 10b9446af;  */

void FUN_10b944684(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9446a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b9446b0; end: 10b944747;  */

void FUN_10b9446b0(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = param_2;
  FUN_10b944748();
  plVar5 = param_2;
  plVar7 = param_3;
  func_0x00010b94476c(param_2,param_3,plVar4);
  uVar6 = SUB81(plVar7,0);
  if (((ulong)plVar7 & 1) != 0) {
    plVar7 = (long *)(param_2[1] + (long)plVar5 * 0x10);
    lVar8 = *param_3;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar7 = lVar8;
    plVar7[1] = 0;
    *(byte *)(*param_2 + (long)plVar5) = (byte)plVar4 & 0x7f;
    func_0x00010b944d10();
  }
  lVar8 = param_2[1];
  *param_1 = *param_2 + (long)plVar5;
  param_1[1] = lVar8 + (long)plVar5 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10b944748; end: 10b94483f;  */

void FUN_10b944748(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b944828(&lStack_18);
  return;
}



/* Entry: 10b944840; end: 10b9448b7;  */

void FUN_10b944840(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x00010b944f50();
  FUN_10b9448b8();
  lVar2 = unaff_x19[5];
  lVar1 = *unaff_x19;
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + (long)param_1) == -2) {
      lVar2 = 0;
    }
    else {
      func_0x00010b944904();
      param_1 = unaff_x19;
      FUN_10b9448b8();
      lVar1 = *unaff_x19;
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar1 + (long)param_1) == -0x80);
  return;
}



/* Entry: 10b9448b8; end: 10b944933;  */

ulong FUN_10b9448b8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_2 = param_2 >> 7;
  while( true ) {
    param_2 = param_2 & param_1[3];
    uVar1 = *(ulong *)(*param_1 + param_2) & ~*(ulong *)(*param_1 + param_2) << 7 &
            0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_2 = lVar2 + param_2;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3];
}



/* Entry: 10b944934; end: 10b9449ff;  */

void FUN_10b944934(long *param_1,long param_2)

{
  long lVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_58;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[3];
  FUN_10b944ba8();
  param_1[3] = param_2;
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      pplVar2 = &plStack_58;
      plStack_58 = param_1 + 5;
      func_0x00010b944c20(pplVar2,lVar4);
      plVar3 = param_1;
      FUN_10b9448b8(param_1,pplVar2);
      *(byte *)(*param_1 + (long)plVar3) = (byte)pplVar2 & 0x7f;
      func_0x00010b944d10();
      func_0x00010b944c40(param_1 + 5,param_1[1] + (long)plVar3 * 0x10,lVar4);
    }
    lVar4 = lVar4 + 0x10;
  }
  if (lVar5 != 0) {
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10b944a00; end: 10b944ba7;  */

void FUN_10b944a00(ulong *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong **ppuVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  ulong *apuStack_60 [3];
  undefined8 uStack_48;
  
  puVar5 = param_1;
  func_0x00010b944c94();
  uVar6 = *puVar5;
  puVar9 = (undefined1 *)param_1[3];
  uStack_48 = extraout_x8;
  func_0x000104bda340();
  puVar5 = param_1 + 5;
  for (uVar10 = 0; uVar10 != param_1[3]; uVar10 = uVar10 + 1) {
    if (*(char *)(*param_1 + uVar10) == -2) {
      ppuVar7 = apuStack_60;
      apuStack_60[0] = puVar5;
      func_0x00010b944c20(apuStack_60,param_1[1] + uVar10 * 0x10);
      puVar8 = param_1;
      puVar9 = (undefined1 *)ppuVar7;
      FUN_10b9448b8();
      uVar6 = param_1[3] & (ulong)ppuVar7 >> 7;
      if ((((long)puVar8 - uVar6 ^ uVar10 - uVar6) & param_1[3]) < 8) {
        *(byte *)(*param_1 + uVar10) = (byte)ppuVar7 & 0x7f;
        func_0x00010b944d10();
        uVar6 = (ulong)puVar8;
      }
      else {
        cVar2 = *(char *)(*param_1 + (long)puVar8);
        bVar3 = (byte)ppuVar7 & 0x7f;
        *(byte *)(*param_1 + (long)puVar8) = bVar3;
        *(byte *)(*param_1 + (param_1[3] & 7) + (param_1[3] & (long)puVar8 - 8U) + 1) = bVar3;
        if (cVar2 == -0x80) {
          puVar9 = (undefined1 *)(param_1[1] + (long)puVar8 * 0x10);
          func_0x00010b944e44();
          *(undefined1 *)(*param_1 + uVar10) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar10 - 8) + (param_1[3] & 7) + 1) = 0x80;
          uVar6 = (ulong)puVar8;
        }
        else {
          uVar6 = (ulong)puVar8;
          func_0x00010b944e44();
          func_0x00010b944e44();
          puVar9 = (undefined1 *)(param_1[1] + (long)puVar8 * 0x10);
          func_0x00010b944e44();
          uVar10 = uVar10 - 1;
        }
      }
    }
  }
  bVar4 = uVar10 == 7;
  lVar1 = 6;
  if (!bVar4) {
    lVar1 = uVar10 - (uVar10 >> 3);
  }
  param_1[5] = lVar1 - param_1[2];
  func_0x00010b944c58(uStack_48);
  if (bVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b944de4();
  lVar1 = ((ulong)puVar9 & 0xfffffffffffffff8) + 0x10;
  uVar6 = uVar6 + 0x28;
  func_0x00010b944c14(uVar6,lVar1 + (long)puVar9 * 0x10);
  *puVar5 = uVar6;
  param_1[6] = uVar6 + lVar1;
  _memset();
  *(undefined1 *)(*puVar5 + (long)param_1) = 0xff;
  lVar1 = 6;
  if (param_1 != (ulong *)0x7) {
    lVar1 = (long)param_1 - ((ulong)param_1 >> 3);
  }
  param_1[10] = lVar1 - param_1[7];
  return;
}



/* Entry: 10b944ba8; end: 10b944c13;  */

void FUN_10b944ba8(long param_1,ulong param_2)

{
  long lVar1;
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x00010b944de4();
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  param_1 = param_1 + 0x28;
  FUN_10b944c14(param_1,lVar1 + param_2 * 0x10);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_1 + lVar1;
  _memset();
  *(undefined1 *)(*unaff_x20 + unaff_x19) = 0xff;
  lVar1 = 6;
  if (unaff_x19 != 7) {
    lVar1 = unaff_x19 - (unaff_x19 >> 3);
  }
  unaff_x20[5] = lVar1 - unaff_x20[2];
  return;
}



/* Entry: 10b944c14; end: 10b944c27;  */

void FUN_10b944c14(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 + 7U & 0xfffffffffffffff8);
  return;
}



/* Entry: 10b944c28; end: 10b944c3f;  */

void FUN_10b944c28(void)

{
  func_0x00010b944dbc();
  return;
}



/* Entry: 10b944c40; end: 10b944d4f;  */

void FUN_10b944c40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3[1];
  *param_2 = *param_3;
  *param_3 = 0;
  param_2[1] = uVar1;
  func_0x00010007e5d0(param_3);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b944d50; end: 10b944d6f;  */

void FUN_10b944d50(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x29;
  
  *(long **)(unaff_x29 + -0x40) = unaff_x20;
  FUN_10b941798();
  if (unaff_x20 != (long *)0x0) {
    plVar1 = unaff_x20 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8fd960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b944d70; end: 10b944f5b;  */

void FUN_10b944d70(void)

{
  return;
}



/* Entry: 10b944f5c; end: 10b94537b;  */

undefined8 *
FUN_10b944f5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined8 *param_5,long *param_6,undefined4 param_7,undefined1 param_8,long *param_9)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d78410;
  *param_1 = &PTR_FUN_110d783c8;
  puVar5 = (undefined8 *)0x30;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar7 = puVar5 + 3;
  *puVar5 = &PTR_FUN_110d78488;
  func_0x00010b9214bc();
  param_1[4] = puVar7;
  param_1[5] = puVar5;
  func_0x00010b8b7608(param_1 + 6,0);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_10b8a3a40(param_1 + 10);
  param_1[0x1b] = 0;
  uVar6 = 0x120;
  __Znwm();
  func_0x00010b94b484();
  param_1[0x1c] = uVar6;
  uVar6 = 0xb8;
  __Znwm();
  FUN_10b924678();
  param_1[0x1d] = uVar6;
  if (param_1[8] == 0) {
    lVar10 = *param_9;
  }
  else {
    lVar10 = *(long *)(param_1[8] + 0x50);
  }
  if (lVar10 != 0) {
    do {
      func_0x00010b948484();
    } while (extraout_w10 != 0);
  }
  param_1[0x1e] = lVar10;
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  *puVar5 = &PTR_DAT_110d78848;
  puVar5[1] = 1;
  if (lVar10 != 0) {
    do {
      func_0x00010b948484();
    } while (extraout_w10_00 != 0);
  }
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[2] = lVar10;
  param_1[0x1f] = puVar5;
  param_1[0x20] = param_3;
  param_1[0x21] = 0;
  uVar6 = 0;
  if (*param_4 != 0) {
    do {
      func_0x00010b948530();
      uVar6 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[0x22] = uVar6;
  uVar6 = *param_5;
  param_1[0x24] = param_5[1];
  param_1[0x23] = uVar6;
  *param_5 = 0;
  param_5[1] = 0;
  param_1[0x25] = *param_6;
  lVar10 = param_6[1];
  param_1[0x26] = lVar10;
  if (lVar10 != 0) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10_01 != 0);
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0x32aaaba7;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  *puVar5 = &PTR_DAT_110d78528;
  puVar5[2] = 0x32aaaba7;
  puVar5[1] = 1;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  param_1[0x31] = puVar5;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  puVar7 = (undefined8 *)0xb8;
  __Znwm();
  plVar9 = puVar7 + 1;
  *plVar9 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110d784d8;
  puVar5 = puVar7 + 3;
  FUN_10b98b17c(puVar5);
  if ((puVar7[5] == 0) || (func_0x00010b948674(), (bool)in_ZR)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_70 = puVar5;
    puStack_68 = puVar7;
    func_0x000107c278e4(puVar7 + 4,&puStack_70);
    func_0x000107c284e8(&puStack_70);
  }
  param_1[0x41] = puVar5;
  param_1[0x42] = 0;
  func_0x000105275d6c(param_1 + 0x43);
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4d) = param_7;
  *(undefined1 *)((long)param_1 + 0x26c) = param_8;
  *(undefined2 *)((long)param_1 + 0x26d) = 0;
  uVar4 = param_1[8] == 0;
  *(bool *)((long)param_1 + 0x26f) = !(bool)uVar4;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  func_0x00010b94b6a8(param_1[0x1c]);
  func_0x000107c31088(&uStack_78,&UNK_10f7ce6da);
  func_0x000107c31034(&puStack_70,&uStack_78,3);
  FUN_10b8da99c(param_1 + 0x21,&puStack_70);
  func_0x000107c278fc(puStack_70);
  func_0x000107c278f8(uStack_78);
  puVar7 = (undefined8 *)param_1[0x1f];
  puVar5 = (undefined8 *)0xe8;
  __Znwm();
  plVar9 = puVar5 + 1;
  *plVar9 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110d78570;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      func_0x00010b948484();
    } while (extraout_w10_02 != 0);
  }
  puVar1 = puVar5 + 3;
  puStack_70 = puVar7;
  FUN_10b8e188c(puVar1,&puStack_70);
  func_0x0001080d85dc(puStack_70);
  if ((puVar5[5] == 0) || (func_0x00010b948674(), (bool)uVar4)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_70 = puVar1;
    puStack_68 = puVar5;
    func_0x000107c278e4(puVar5 + 4,&puStack_70);
    func_0x000107c284e8(&puStack_70);
  }
  uVar6 = param_1[0x4c];
  param_1[0x4c] = puVar1;
  FUN_10b8fb184(uVar6);
  FUN_10b8fb184(0);
  lVar10 = *param_6;
  if (lVar10 != 0) {
    uVar6 = param_1[0x4c];
    lVar8 = param_6[1];
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    puVar5[1] = 1;
    *puVar5 = &PTR_DAT_110d785c0;
    puVar5[2] = lVar10;
    puVar5[3] = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x00010b94863c();
      } while (extraout_w11_00 != 0);
    }
    *(undefined1 *)(puVar5 + 4) = 0;
    do {
      func_0x00010b948484();
    } while (extraout_w10_03 != 0);
    puStack_70 = puVar5;
    FUN_10b8e1dec(uVar6,&puStack_70);
    func_0x00010b8e2b74(puStack_70);
    FUN_10b947e8c(puVar5);
  }
  FUN_10b98b5f0(param_1[0x41],param_1 + 3);
  return param_1;
}



/* Entry: 10b94537c; end: 10b94549f;  */

undefined8 * FUN_10b94537c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d783c8;
  param_1[3] = &PTR_DAT_110d78410;
  FUN_10b9454a0();
  func_0x00010b8fb164(param_1 + 0x4c);
  func_0x0001080c9d44(param_1 + 0x49);
  func_0x000104bd4728(param_1 + 0x45);
  func_0x00010b93e8b4(param_1 + 0x44);
  func_0x0001052750b0(param_1 + 0x43);
  func_0x000104bd46e0(param_1 + 0x42);
  FUN_10b8a6380(param_1 + 0x41);
  func_0x00010b947034(param_1 + 0x3e);
  func_0x0001080d82a0(param_1 + 0x3b);
  func_0x00010b9470a0(param_1 + 0x38);
  func_0x00010b947144(param_1 + 0x35);
  if (param_1[0x32] != 0) {
    FUN_10b9457e0(param_1 + 0x32);
    __ZdlPv(param_1[0x32]);
  }
  func_0x00010b935dd4(param_1 + 0x31);
  FUN_10b9a1f08(param_1 + 0x28);
  FUN_10b947d48(param_1[0x27]);
  func_0x0001080d8600(param_1 + 0x25);
  func_0x0001080d8598(param_1 + 0x23);
  func_0x0001080e6aa4(param_1 + 0x22);
  func_0x000104bd5214(param_1 + 0x21);
  func_0x00010b8c2c74(param_1 + 0x1f);
  func_0x000108129394(param_1 + 0x1e);
  FUN_10b929fcc(param_1 + 0x1d);
  func_0x000104bd56f4(param_1 + 0x1c);
  FUN_10b8a3c10(param_1 + 10);
  func_0x00010b8db04c(param_1 + 8);
  func_0x00010b8c5888(param_1 + 6);
  FUN_10b947ca0(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9454a0; end: 10b94555b;  */

void FUN_10b9454a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  FUN_10b98b5f0(*(undefined8 *)(param_1 + 0x208),0);
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN_10b8e1b5c();
    FUN_10b9456ec(param_1 + 0x260,0);
  }
  FUN_10b945728(param_1);
  puStack_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  func_0x00010b948590();
  FUN_10b94574c(&uStack_60,param_1);
  func_0x00010b948458();
  func_0x00010b9485dc();
  FUN_10b9457e0(param_1 + 400);
  func_0x00010b948448();
  puVar1 = puStack_40;
  for (puVar2 = puStack_48; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    func_0x00010b94123c(*puVar2);
  }
  func_0x00010b94bb98(*(undefined8 *)(param_1 + 0xe0));
  FUN_10b998efc(*(undefined8 *)(param_1 + 0x108));
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10b9457e8(param_1 + 0x40,&uStack_60);
  func_0x00010b8db04c(&uStack_60);
  func_0x00010b9485e4();
  return;
}



/* Entry: 10b94555c; end: 10b945567;  */

undefined8 * FUN_10b94555c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d783c8;
  param_1[3] = &PTR_DAT_110d78410;
  FUN_10b9454a0();
  func_0x00010b8fb164(param_1 + 0x4c);
  func_0x0001080c9d44(param_1 + 0x49);
  func_0x000104bd4728(param_1 + 0x45);
  func_0x00010b93e8b4(param_1 + 0x44);
  func_0x0001052750b0(param_1 + 0x43);
  func_0x000104bd46e0(param_1 + 0x42);
  FUN_10b8a6380(param_1 + 0x41);
  func_0x00010b947034(param_1 + 0x3e);
  func_0x0001080d82a0(param_1 + 0x3b);
  func_0x00010b9470a0(param_1 + 0x38);
  func_0x00010b947144(param_1 + 0x35);
  if (param_1[0x32] != 0) {
    FUN_10b9457e0(param_1 + 0x32);
    __ZdlPv(param_1[0x32]);
  }
  func_0x00010b935dd4(param_1 + 0x31);
  FUN_10b9a1f08(param_1 + 0x28);
  FUN_10b947d48(param_1[0x27]);
  func_0x0001080d8600(param_1 + 0x25);
  func_0x0001080d8598(param_1 + 0x23);
  func_0x0001080e6aa4(param_1 + 0x22);
  func_0x000104bd5214(param_1 + 0x21);
  func_0x00010b8c2c74(param_1 + 0x1f);
  func_0x000108129394(param_1 + 0x1e);
  FUN_10b929fcc(param_1 + 0x1d);
  func_0x000104bd56f4(param_1 + 0x1c);
  FUN_10b8a3c10(param_1 + 10);
  func_0x00010b8db04c(param_1 + 8);
  func_0x00010b8c5888(param_1 + 6);
  FUN_10b947ca0(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b945568; end: 10b94557b;  */

void FUN_10b945568(void)

{
  FUN_10b94537c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b94557c; end: 10b945583;  */

void FUN_10b94557c(long param_1)

{
  FUN_10b94537c(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b945584; end: 10b9455d3;  */

void FUN_10b945584(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  FUN_10b98e048();
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  if (puVar1[1] != 0) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10 != 0);
  }
  FUN_10b9455d4(param_1,&uStack_30);
  func_0x000107c28518(&uStack_30);
  return;
}



/* Entry: 10b9455d4; end: 10b9456eb;  */

void FUN_10b9455d4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long alStack_78 [3];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  
  plVar5 = (long *)*param_2;
  lVar2 = param_1;
  func_0x000104bd46b0();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10 != 0);
  }
  alStack_78[0] = lVar2;
  func_0x00010b9a8f78(&puStack_60,alStack_78);
  (**(code **)(*plVar5 + 0x10))(&lStack_48,plVar5,&puStack_60);
  FUN_10b9a8d98(&puStack_60);
  func_0x000104bddf04(lVar2);
  func_0x000104bd57fc(lVar2);
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  func_0x00010b948590();
  lVar3 = lStack_40;
  for (lVar2 = lStack_48; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    func_0x00010b945f8c(param_1 + 0x1c0,lVar2);
  }
  func_0x00010b9483e8();
  func_0x00010b947188(&puStack_60,alStack_78);
  func_0x00010b948440();
  func_0x00010b948448();
  puVar1 = puStack_58;
  for (puVar4 = puStack_60; lVar2 = lStack_40, lVar3 = lStack_48, puVar4 != puVar1;
      puVar4 = puVar4 + 1) {
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
      FUN_10b94173c(*puVar4,lVar3);
    }
  }
  func_0x0001080d83b0(&puStack_60);
  func_0x00010b9470a0(&lStack_48);
  return;
}



/* Entry: 10b9456ec; end: 10b945727;  */

long * FUN_10b9456ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    FUN_10b947eb8();
    *param_1 = param_2;
    FUN_10b8fb184(lVar1);
  }
  return param_1;
}



/* Entry: 10b945728; end: 10b94574b;  */

void FUN_10b945728(long param_1)

{
  if ((*(char *)(param_1 + 0x26f) == '\x01') && (*(long **)(param_1 + 0x100) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b945744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x100) + 0x40))();
    return;
  }
  return;
}



/* Entry: 10b94574c; end: 10b9457df;  */

void FUN_10b94574c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long alStack_40 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010b9463b4(param_1,*(long *)(param_2 + 0x198) - *(long *)(param_2 + 400) >> 4);
  lVar2 = *(long *)(param_2 + 400);
  while (lVar2 != *(long *)(param_2 + 0x198)) {
    func_0x0001080d3dcc(alStack_40,lVar2);
    if (alStack_40[0] == 0) {
      lVar1 = param_2 + 400;
      func_0x00010b946380(lVar1,lVar2);
    }
    else {
      func_0x00010b946418(param_1,alStack_40);
      lVar1 = lVar2 + 0x10;
    }
    func_0x0001080d2668(alStack_40);
    lVar2 = lVar1;
  }
  return;
}



/* Entry: 10b9457e0; end: 10b9457e7;  */

void FUN_10b9457e0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b94842c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001080d5ab0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b9457e8; end: 10b945823;  */

undefined8 * FUN_10b9457e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b8db04c(&uStack_30);
  return param_1;
}



/* Entry: 10b945824; end: 10b945e33;  */

void FUN_10b945824(undefined8 *****param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long *param_5,ulong param_6)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  undefined8 *****pppppuVar9;
  long lVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ****extraout_x8;
  ulong uVar16;
  ulong uVar17;
  undefined8 ***pppuVar18;
  int extraout_w10;
  int extraout_w11;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  undefined8 ***pppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 ****ppppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined8 ****ppppuStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  long lStack_80;
  
  plStack_e0 = (long *)(param_3 + 0xe0);
  if (*param_5 != 0) {
    plStack_e0 = param_5;
  }
  if ((param_6 >> 0x20 & 1) == 0) {
    param_6 = (ulong)*(uint *)(param_3 + 0x268);
  }
  lStack_e8 = param_3 + 0x118;
  lStack_f8 = param_3 + 0xe8;
  lStack_100 = param_3 + 0x188;
  lStack_108 = param_3 + 0x208;
  lVar22 = *(long *)(param_3 + 0x40);
  lStack_110 = param_3 + 0x110;
  uStack_f0 = *(undefined8 *)(param_3 + 0x100);
  ppppuVar12 = *(undefined8 *****)(param_3 + 0x108);
  puVar8 = (undefined8 *)0x1b8;
  uStack_d8 = param_4;
  __Znwm();
  plVar23 = puVar8 + 1;
  *plVar23 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110d78628;
  if ((ppppuVar12 != (undefined8 ****)0x0) && (ppppuVar12[2] != (undefined8 ***)0x0)) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10 != 0);
  }
  ppppuStack_a8 = (undefined8 ****)0x0;
  pppuStack_90 = ppppuVar12;
  if (*(long *)(param_3 + 0xf8) != 0) {
    do {
      func_0x00010b948530();
      ppppuStack_a8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar5 = lVar22 == 0;
  uStack_128 = !(bool)uVar5;
  ppppuVar12 = (undefined8 ****)(puVar8 + 3);
  ppppuStack_120 = &ppppuStack_a8;
  lStack_148 = lStack_110;
  lStack_158 = lStack_100;
  lStack_150 = lStack_108;
  uStack_168 = uStack_d8;
  lStack_160 = lStack_f8;
  lStack_170 = lStack_e8;
  lStack_140 = param_3 + 0x30;
  lStack_138 = param_3 + 0x128;
  lStack_130 = param_3 + 0x260;
  FUN_10b940e24(param_2,ppppuVar12,param_3 + 0x50,param_6,plStack_e0,uStack_f0,&pppuStack_90);
  func_0x0001080d85dc(ppppuStack_a8);
  func_0x000107c278fc(pppuStack_90);
  if ((puVar8[5] == 0) || (func_0x00010b948674(), (bool)uVar5)) {
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = *plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppuStack_90 = ppppuVar12;
    pppuStack_88 = (undefined8 ***)puVar8;
    func_0x000107c278e4(puVar8 + 4,&pppuStack_90);
    func_0x000107c284e8(&pppuStack_90);
  }
  *param_1 = ppppuVar12;
  pppuStack_90 = (undefined8 ****)0x0;
  pppuStack_88 = (undefined8 ****)0x0;
  lStack_80 = 0;
  ppppuStack_a8 = (undefined8 *****)0x0;
  ppppuStack_a0 = (undefined8 *****)0x0;
  ppppuStack_98 = (undefined8 *****)0x0;
  ppppuStack_c0 = (undefined8 *****)0x0;
  ppppuStack_b8 = (undefined8 *****)0x0;
  ppppuStack_b0 = (undefined8 *****)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  pppppuVar9 = (undefined8 *****)(param_3 + 0x140);
  __ZNSt3__15mutex4lockEv();
  pppppuVar20 = *(undefined8 ******)(param_3 + 400);
  while( true ) {
    pppppuVar19 = *(undefined8 ******)(param_3 + 0x198);
    bVar6 = pppppuVar20 == pppppuVar19;
    if (bVar6) break;
    if ((pppppuVar20[1] == (undefined8 ****)0x0) || (func_0x00010b948674(), bVar6)) {
      pppppuVar9 = (undefined8 *****)(param_3 + 400);
      func_0x00010b946380();
      pppppuVar20 = pppppuVar9;
    }
    else {
      pppppuVar20 = pppppuVar20 + 2;
    }
  }
  pppppuVar11 = param_1;
  if (*(undefined8 ******)(param_3 + 0x1a0) <= pppppuVar20) {
    lVar22 = (long)pppppuVar20 - *(long *)(param_3 + 400);
    uVar17 = (lVar22 >> 4) + 1;
    if (uVar17 >> 0x3c == 0) {
      uVar16 = (long)*(undefined8 ******)(param_3 + 0x1a0) - *(long *)(param_3 + 400);
      uVar21 = (long)uVar16 >> 3;
      if (uVar21 <= uVar17) {
        uVar21 = uVar17;
      }
      if (0x7fffffffffffffef < uVar16) {
        uVar21 = 0xfffffffffffffff;
      }
      if (uVar21 == 0) {
        lVar10 = 0;
LAB_10b945a78:
        lVar22 = lVar10 + lVar22;
        func_0x0001080d5a60(lVar22,param_1);
        pppppuVar19 = (undefined8 *****)(lVar22 + 0x10);
        pppppuVar9 = *(undefined8 ******)(param_3 + 400);
        lVar1 = *(long *)(param_3 + 0x198);
        func_0x00010b948524();
        _memcpy();
        *(long *)(param_3 + 400) = lVar22 - (lVar1 - (long)pppppuVar9);
        *(undefined8 ******)(param_3 + 0x198) = pppppuVar19;
        *(ulong *)(param_3 + 0x1a0) = lVar10 + uVar21 * 0x10;
        if (pppppuVar9 != (undefined8 *****)0x0) {
          __ZdlPv(pppppuVar9);
          pppppuVar11 = pppppuVar9;
        }
        goto LAB_10b945ab8;
      }
      if (uVar21 >> 0x3c == 0) {
        lVar10 = uVar21 << 4;
        __Znwm();
        goto LAB_10b945a78;
      }
    }
    else {
      func_0x00010bdb3fec();
LAB_10b945e28:
      func_0x0001080d8440();
    }
    func_0x000104bfe188();
    goto LAB_10b945e30;
  }
  func_0x0001080d5a60(pppppuVar19,param_1);
  pppppuVar19 = pppppuVar19 + 2;
LAB_10b945ab8:
  *(undefined8 ******)(param_3 + 0x198) = pppppuVar19;
  bVar3 = *(byte *)(param_3 + 0x26d);
  pppppuVar9 = pppppuVar11;
  if (&pppuStack_90 != (undefined8 ****)(param_3 + 0x1c0)) {
    lVar22 = *(long *)(param_3 + 0x1c0);
    lVar10 = *(long *)(param_3 + 0x1c8);
    uVar17 = lVar10 - lVar22;
    if ((ulong)(lStack_80 - (long)pppuStack_90) < uVar17) {
      if ((undefined8 ****)pppuStack_90 != (undefined8 ****)0x0) {
        FUN_10b947108(&pppuStack_90);
        __ZdlPv(pppuStack_90);
        pppuStack_90 = (undefined8 ****)0x0;
        pppuStack_88 = (undefined8 ****)0x0;
        lStack_80 = 0;
      }
      ppppuVar12 = &pppuStack_90;
      FUN_10b947264(ppppuVar12,(long)uVar17 >> 4);
      func_0x000108101454(&pppuStack_90,ppppuVar12);
    }
    else {
      uVar21 = (long)pppuStack_88 - (long)pppuStack_90;
      if (uVar17 <= uVar21) {
        func_0x00010b948524();
        FUN_10b9472a4();
        pppppuVar9 = (undefined8 *****)&pppuStack_90;
        FUN_10b947110(pppppuVar9,pppppuVar11);
        goto LAB_10b945b74;
      }
      FUN_10b9472a4(lVar22,lVar22 + uVar21);
      lVar22 = lVar22 + uVar21;
    }
    pppppuVar9 = (undefined8 *****)&pppuStack_90;
    FUN_10b947224(pppppuVar9,lVar22,lVar10);
  }
LAB_10b945b74:
  pppppuVar20 = pppppuVar9;
  if (&ppppuStack_a8 != (undefined8 *****)(param_3 + 0x1d8)) {
    puVar8 = *(undefined8 **)(param_3 + 0x1d8);
    lVar22 = *(long *)(param_3 + 0x1e0);
    uVar17 = lVar22 - (long)puVar8;
    if ((ulong)((long)ppppuStack_98 - (long)ppppuStack_a8) < uVar17) {
      pppppuVar20 = (undefined8 *****)((long)uVar17 >> 4);
      if ((undefined8 *****)ppppuStack_a8 != (undefined8 *****)0x0) {
        func_0x0001080d82f4(&ppppuStack_a8);
        __ZdlPv(ppppuStack_a8);
        ppppuStack_a8 = (undefined8 *****)0x0;
        ppppuStack_a0 = (undefined8 *****)0x0;
        ppppuStack_98 = (undefined8 *****)0x0;
      }
      pppppuVar9 = &ppppuStack_a8;
      func_0x000107c28504();
      if ((ulong)pppppuVar9 >> 0x3c != 0) goto LAB_10b945e28;
      pppppuVar20 = &ppppuStack_98;
      func_0x000107c28510();
      ppppuStack_98 = pppppuVar20 + (long)pppppuVar9 * 2;
      ppppuStack_a8 = pppppuVar20;
      ppppuStack_a0 = pppppuVar20;
    }
    else {
      uVar21 = (long)ppppuStack_a0 - (long)ppppuStack_a8;
      if (uVar17 <= uVar21) {
        func_0x00010b948524();
        FUN_10b947374();
        pppppuVar20 = &ppppuStack_a8;
        func_0x0001080d82fc(pppppuVar20,pppppuVar9);
        goto LAB_10b945c3c;
      }
      FUN_10b947374(puVar8,(long)puVar8 + uVar21);
      puVar8 = (undefined8 *)((long)puVar8 + uVar21);
    }
    pppppuVar20 = &ppppuStack_a8;
    FUN_10b947318(pppppuVar20,puVar8,lVar22);
  }
LAB_10b945c3c:
  if (&ppppuStack_c0 != (undefined8 *****)(param_3 + 0x1f0)) {
    puVar8 = *(undefined8 **)(param_3 + 0x1f0);
    lVar22 = *(long *)(param_3 + 0x1f8);
    uVar17 = lVar22 - (long)puVar8;
    if ((ulong)((long)ppppuStack_b0 - (long)ppppuStack_c0) < uVar17) {
      pppppuVar20 = (undefined8 *****)((long)uVar17 >> 3);
      if ((undefined8 *****)ppppuStack_c0 != (undefined8 *****)0x0) {
        FUN_10b947064(&ppppuStack_c0);
        __ZdlPv(ppppuStack_c0);
        ppppuStack_c0 = (undefined8 *****)0x0;
        ppppuStack_b8 = (undefined8 *****)0x0;
        ppppuStack_b0 = (undefined8 *****)0x0;
      }
      pppppuVar9 = &ppppuStack_c0;
      FUN_10b9473f4();
      if ((ulong)pppppuVar9 >> 0x3d != 0) {
LAB_10b945e30:
        FUN_10b947478();
        ppppuVar12 = pppppuVar9[8];
        if (ppppuVar12 == (undefined8 ****)0x0) {
          return;
        }
        ppppuVar14 = *pppppuVar20;
        pcStack_178 = FUN_10b945e34;
        puStack_1a0 = puVar8;
        lStack_198 = lVar22;
        lStack_190 = param_3;
        ppppuStack_188 = param_1;
        puStack_180 = &stack0xfffffffffffffff0;
        __ZNSt3__15mutex4lockEv(ppppuVar12 + 0x18);
        func_0x00010b8dab38(&pppuStack_1b8,ppppuVar14);
        func_0x00010b8daaf4(ppppuVar12 + 0xf,&pppuStack_1b8);
        func_0x00010b8db028(&pppuStack_1b8);
        pppuVar13 = ppppuVar12[0x14];
        if (pppuVar13 != (undefined8 ***)0x0) {
          pppuStack_1b8 = (undefined8 ****)0x0;
          ppuStack_1b0 = (undefined8 ***)0x0;
          uStack_1a8 = 0;
          func_0x00010b8dab80(&pppuStack_1b8);
          ppppuVar7 = ppppuVar12 + 0x12;
          func_0x00010b8dabe8();
          pppuVar15 = ppppuVar12[0x12];
          pppuVar18 = ppppuVar12[0x15];
          pppuStack_1c8 = ppppuVar7;
          ppuStack_1c0 = pppuVar13;
          while ((undefined8 ****)pppuStack_1c8 !=
                 (undefined8 ****)((long)pppuVar15 + (long)pppuVar18)) {
            func_0x00010b8dac14(&pppuStack_1b8,ppuStack_1c0 + 2);
            func_0x00010b8dac50(&pppuStack_1c8);
          }
          func_0x00010b8db1fc((*ppppuVar14)[4]);
          func_0x00010b8da8a0(&pppuStack_1b8);
        }
        pppuVar15 = ppppuVar12[0xd];
        for (pppuVar13 = ppppuVar12[0xc]; pppuVar13 != pppuVar15; pppuVar13 = pppuVar13 + 1) {
          func_0x00010b8dac84(&pppuStack_1c8,pppuVar13);
          pppuStack_1b8 = (undefined8 ****)0x0;
          if ((undefined8 ****)pppuStack_1c8 != (undefined8 ****)0x0) {
            pppuStack_1b8 = pppuStack_1c8 + 3;
          }
          ppuStack_1b0 = ppuStack_1c0;
          pppuStack_1c8 = (undefined8 ****)0x0;
          ppuStack_1c0 = (undefined8 ***)0x0;
          func_0x00010b8db1fc((*ppppuVar14)[5]);
          func_0x00010b8db14c(&pppuStack_1b8);
          func_0x00010b8db004(&pppuStack_1c8);
        }
        __ZNSt3__15mutex6unlockEv(ppppuVar12 + 0x18);
        return;
      }
      pppppuVar20 = &ppppuStack_b0;
      FUN_10b947484();
      ppppuStack_b0 = pppppuVar20 + (long)pppppuVar9;
      ppppuStack_c0 = pppppuVar20;
      ppppuStack_b8 = pppppuVar20;
    }
    else {
      uVar21 = (long)ppppuStack_b8 - (long)ppppuStack_c0;
      if (uVar17 <= uVar21) {
        func_0x00010b948524();
        FUN_10b94741c();
        func_0x00010b94706c(&ppppuStack_c0,pppppuVar20);
        goto LAB_10b945d04;
      }
      FUN_10b94741c(puVar8,(long)puVar8 + uVar21);
      puVar8 = (undefined8 *)((long)puVar8 + uVar21);
    }
    FUN_10b9473bc(&ppppuStack_c0,puVar8,lVar22);
  }
LAB_10b945d04:
  func_0x00010b8c4454(&uStack_c8,param_3 + 0x210);
  func_0x00010b8c1ca8(&uStack_d0,param_3 + 0x228);
  iVar2 = *(int *)(param_3 + 0x270);
  FUN_10b942a00(*param_1,param_3 + 0x248);
  FUN_10b942978(*param_1,param_3 + 0x220);
  func_0x00010b948588();
  FUN_10b942338(*param_1,0 < iVar2);
  func_0x00010b942a08(*param_1,&uStack_d0);
  func_0x00010b8c4424((*param_1)[0xf],&uStack_c8);
  ppppuVar14 = (undefined8 ****)pppuStack_90;
  ppppuVar12 = (undefined8 ****)pppuStack_88;
  if ((bVar3 & 1) == 0) {
    FUN_10b9412b0(*param_1);
    ppppuVar14 = (undefined8 ****)pppuStack_90;
    ppppuVar12 = (undefined8 ****)pppuStack_88;
  }
  for (; ppppuVar7 = ppppuStack_a0, pppppuVar9 = (undefined8 *****)ppppuStack_a8,
      ppppuVar14 != ppppuVar12; ppppuVar14 = ppppuVar14 + 2) {
    FUN_10b94173c(*param_1,ppppuVar14);
  }
  for (; ppppuVar12 = ppppuStack_b8, pppppuVar20 = (undefined8 *****)ppppuStack_c0,
      pppppuVar9 != (undefined8 *****)ppppuVar7; pppppuVar9 = pppppuVar9 + 2) {
    FUN_10b942970(*param_1,pppppuVar9,pppppuVar9 + 1);
  }
  for (; pppppuVar20 != (undefined8 *****)ppppuVar12; pppppuVar20 = pppppuVar20 + 1) {
    func_0x00010b948610(*pppppuVar20,*param_1);
  }
  func_0x000104bd474c(uStack_d0);
  func_0x000104bd4704(uStack_c8);
  func_0x00010b947034(&ppppuStack_c0);
  func_0x0001080d82a0(&ppppuStack_a8);
  func_0x00010b9470a0(&pppuStack_90);
  return;
}



/* Entry: 10b945e34; end: 10b945e47;  */

void FUN_10b945e34(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    plVar4 = (long *)*param_2;
    __ZNSt3__15mutex4lockEv(lVar2 + 0xc0);
    func_0x00010b8dab38(&lStack_48,plVar4);
    func_0x00010b8daaf4(lVar2 + 0x78,&lStack_48);
    func_0x00010b8db028(&lStack_48);
    lVar3 = *(long *)(lVar2 + 0xa0);
    if (lVar3 != 0) {
      lStack_48 = 0;
      lStack_40 = 0;
      uStack_38 = 0;
      func_0x00010b8dab80(&lStack_48);
      lVar1 = lVar2 + 0x90;
      func_0x00010b8dabe8();
      lVar5 = *(long *)(lVar2 + 0x90);
      lVar6 = *(long *)(lVar2 + 0xa8);
      lStack_58 = lVar1;
      lStack_50 = lVar3;
      while (lStack_58 != lVar5 + lVar6) {
        func_0x00010b8dac14(&lStack_48,lStack_50 + 0x10);
        func_0x00010b8dac50(&lStack_58);
      }
      func_0x00010b8db1fc(*(undefined8 *)(*plVar4 + 0x20));
      func_0x00010b8da8a0(&lStack_48);
    }
    lVar1 = *(long *)(lVar2 + 0x68);
    for (lVar3 = *(long *)(lVar2 + 0x60); lVar3 != lVar1; lVar3 = lVar3 + 8) {
      func_0x00010b8dac84(&lStack_58,lVar3);
      lStack_48 = 0;
      if (lStack_58 != 0) {
        lStack_48 = lStack_58 + 0x18;
      }
      lStack_40 = lStack_50;
      lStack_58 = 0;
      lStack_50 = 0;
      func_0x00010b8db1fc(*(undefined8 *)(*plVar4 + 0x28));
      func_0x00010b8db14c(&lStack_48);
      func_0x00010b8db004(&lStack_58);
    }
    __ZNSt3__15mutex6unlockEv(lVar2 + 0xc0);
    return;
  }
  return;
}



/* Entry: 10b945e48; end: 10b945ec7;  */

void FUN_10b945e48(long *param_1,long param_2,undefined8 param_3,undefined1 param_4,long *param_5)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_21;
  
  plVar1 = (long *)(param_2 + 0xe0);
  if (*param_5 != 0) {
    plVar1 = param_5;
  }
  uStack_21 = param_4;
  FUN_10b945ec8(param_1,param_3,param_2 + 0x50,param_2 + 0x208,param_2 + 0x30,&uStack_21,plVar1,
                *(undefined8 *)(param_2 + 0xf8));
  FUN_10b945f44(param_2 + 0x1a8,param_1);
  lVar4 = *param_1;
  lVar3 = *(long *)(param_2 + 0x220);
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010b94d450();
    uVar2 = (undefined1)lVar3;
  }
  *(undefined1 *)(lVar4 + 0x131) = uVar2;
  return;
}



/* Entry: 10b945ec8; end: 10b945f43;  */

void FUN_10b945ec8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x138;
  __Znwm();
  func_0x00010b8c5530();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b945f44; end: 10b945fc7;  */

undefined8 * FUN_10b945f44(undefined8 *param_1,long *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b9484dc();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10b9474bc();
  }
  else {
    uVar2 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b948530();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar1 = param_1 + 1;
    *param_1 = uVar2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10b945fc8; end: 10b94604f;  */

void FUN_10b945fc8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x21;
  undefined8 *puVar3;
  undefined1 auStack_60 [24];
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010b9484cc();
  puStack_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  func_0x00010b948438();
  lVar2 = unaff_x21 + 0x1d8;
  FUN_10b946050(lVar2);
  func_0x000107c31068();
  func_0x000107c31068(lVar2 + 8);
  FUN_10b94574c(auStack_60);
  func_0x00010b948458();
  func_0x00010b9485dc();
  __ZNSt3__15mutex6unlockEv(unaff_x21 + 0x140);
  puVar1 = puStack_40;
  for (puVar3 = puStack_48; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    FUN_10b942970(*puVar3);
  }
  func_0x00010b9485e4();
  return;
}



/* Entry: 10b946050; end: 10b94608f;  */

undefined8 * FUN_10b946050(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    func_0x00010b947710();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10b946090; end: 10b9460bb;  */

void FUN_10b946090(long param_1)

{
  long *plVar1;
  
  if ((*(char *)(param_1 + 0x26f) == '\x01') &&
     (plVar1 = *(long **)(param_1 + 0x100), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b9460b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0xf8));
    return;
  }
  return;
}



/* Entry: 10b9460bc; end: 10b9461ff;  */

void FUN_10b9460bc(long param_1)

{
  long *plStack_38;
  long *plStack_30;
  
  func_0x00010b8e1be4(*(undefined8 *)(param_1 + 0x260));
  FUN_10b946090(param_1);
  func_0x00010b946120(param_1);
  func_0x00010b948494();
  for (; plStack_38 != plStack_30; plStack_38 = plStack_38 + 1) {
    if (*(long *)(*(long *)(*plStack_38 + 0x40) + 0x38) != 0) {
      func_0x00010b929404();
    }
  }
  func_0x00010b948440();
  return;
}



/* Entry: 10b946200; end: 10b9462eb;  */

void FUN_10b946200(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  code *pcStack_68;
  undefined **appuStack_60 [5];
  undefined8 uStack_38;
  
  func_0x00010b94836c();
  uStack_38 = extraout_x8;
  func_0x00010810150c(auStack_80);
  plVar1 = *(long **)(param_1 + 0x108);
  if (lStack_78 != 0) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10 != 0);
  }
  pcStack_68 = FUN_10b947a68;
  appuStack_60[0] = &PTR_FUN_110d78458;
  uStack_90 = 0;
  uStack_88 = 0;
  (**(code **)(*plVar1 + 0x30))();
  (*(code *)*appuStack_60[0])(appuStack_60);
  func_0x000108101604(&uStack_90);
  lVar2 = param_1;
  FUN_10b946b34(param_1,plVar1);
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x38))(*(long **)(param_1 + 0x108),lVar2);
  }
  func_0x000108101604(auStack_80);
  func_0x00010b94834c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b9461d4();
    func_0x00010b948494();
    for (; puStack_c8 != puStack_c0; puStack_c8 = puStack_c8 + 1) {
      FUN_10b9417a0(*puStack_c8);
    }
    func_0x00010b948440();
    return;
  }
  return;
}



/* Entry: 10b9462ec; end: 10b946453;  */

void FUN_10b9462ec(void)

{
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  func_0x00010b9461d4();
  func_0x00010b948494();
  for (; puStack_38 != puStack_30; puStack_38 = puStack_38 + 1) {
    FUN_10b9417a0(*puStack_38);
  }
  func_0x00010b948440();
  return;
}



/* Entry: 10b946454; end: 10b94650b;  */

void FUN_10b946454(void)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long lVar1;
  long lStack_38;
  
  func_0x00010b9483f4();
  lVar1 = *(long *)(unaff_x19 + 0x138);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      do {
        func_0x00010b9483b0();
      } while (extraout_w10 != 0);
    }
    lStack_38 = lVar1;
    FUN_10b9249b4();
    func_0x000104bd54b0(lVar1);
  }
  FUN_10b94650c(&lStack_38);
  func_0x00010b946550(unaff_x19 + 0x138,&lStack_38);
  FUN_10b947d48(lStack_38);
  lVar1 = *(long *)(unaff_x19 + 0x138);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b94863c();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  lStack_38 = lVar1;
  FUN_10b9247ac();
  func_0x000104bd54b0(lStack_38);
  func_0x00010b948448();
  return;
}



/* Entry: 10b94650c; end: 10b946587;  */

undefined8 * FUN_10b94650c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b94836c();
  uStack_28 = extraout_x8;
  FUN_10b947f18(auStack_38);
  *param_1 = auStack_38[0];
  func_0x00010b94834c(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  if (param_2 != param_3) {
    uVar2 = *param_3;
    *param_3 = 0;
    uVar1 = *param_2;
    *param_2 = uVar2;
    FUN_10b947d48(uVar1);
  }
  return param_2;
}


