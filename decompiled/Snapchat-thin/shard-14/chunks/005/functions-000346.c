/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2e2b70; end: 10b2e2d57;  */

void FUN_10b2e2b70(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar4 = param_1;
    func_0x00010b2e2eb8();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    uVar3 = puVar4[3];
    unaff_x21 = puVar4[4];
    func_0x000107c2fe8c();
    uVar2 = param_1[3];
    func_0x000107c2fe90();
    plVar5 = *(long **)(unaff_x21 + 0x90);
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar3;
    (**(code **)(*plVar5 + 0x20))(plVar5,(undefined1 *)((long)register0x00000008 + -0x90));
    uVar1 = plVar5 == (long *)0x1;
    if ((long)plVar5 < 1) {
      unaff_x20 = (undefined8 *)param_1[2];
      func_0x00010b479724(unaff_x20,&UNK_10f7437ca);
      unaff_x19 = param_1;
    }
    else {
      *(long *)(unaff_x21 + 0xa0) = *(long *)(unaff_x21 + 0xa0) + (long)plVar5;
      uVar3 = param_1[2];
      func_0x000107c2feac(uVar3,plVar5,0);
      uVar2 = *(undefined8 *)(unaff_x21 + 0x48);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(unaff_x21 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar2;
      lVar6 = *(long *)(unaff_x21 + 0x58);
      *(long *)((long)register0x00000008 + -0xb0) = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x00010b2e2ee0();
        } while (extraout_w10 != 0);
      }
      unaff_x19 = (undefined8 *)((ulong)((long)register0x00000008 + -0xc0) | 8);
      uVar2 = *(undefined8 *)(unaff_x21 + 0xa0);
      *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(unaff_x21 + 0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar2;
      func_0x000107c28150();
      unaff_x22 = *(long *)(unaff_x21 + 0x28);
      __ZNSt3__15mutex4lockEv(unaff_x22 + 8);
      unaff_x24 = *(long *)(unaff_x22 + 0x70);
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0x10b2e2d94;
      *(undefined ***)((long)register0x00000008 + -0x88) = &PTR_FUN_110cd36e8;
      puVar4 = (undefined8 *)0x28;
      __Znwm();
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x90);
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      puVar4[1] = *(undefined8 *)((long)register0x00000008 + -0xb8);
      *puVar4 = uVar2;
      puVar4[2] = *(undefined8 *)((long)register0x00000008 + -0xb0);
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      puVar4[4] = *(undefined8 *)((long)register0x00000008 + -0xa0);
      puVar4[3] = uVar2;
      *(undefined8 **)((long)register0x00000008 + -0x80) = puVar4;
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar3;
      func_0x000107c28154(unaff_x22 + 0x48,(undefined1 *)((long)register0x00000008 + -0x90));
      func_0x00010b2e2ef0();
      __ZNSt3__15mutex6unlockEv(unaff_x22 + 8);
      if (unaff_x24 == 0) {
        lVar6 = *(long *)(unaff_x21 + 0x30);
        uVar3 = *(undefined8 *)(unaff_x21 + 0x28);
        *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(unaff_x21 + 0x30);
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar3;
        if (lVar6 != 0) {
          do {
            func_0x00010b2e2ee0();
          } while (extraout_w10_00 != 0);
        }
        func_0x00010b2e2f20();
        (*extraout_x8_00)();
        func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x90));
      }
      unaff_x20 = unaff_x19;
      func_0x000107c2c804();
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xc0);
    }
    func_0x00010b2e2ea4(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x90));
    func_0x000107c2c804(unaff_x19);
    unaff_x30 = FUN_10b2e2d58;
    param_1 = unaff_x20;
    __Unwind_Resume();
    param_1 = param_1 + 2;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10b2e2d58; end: 10b2e2dab;  */

void FUN_10b2e2d58(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar7 = param_1 + 2;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar4 = puVar7;
    func_0x00010b2e2eb8();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    uVar3 = puVar4[3];
    unaff_x21 = puVar4[4];
    func_0x000107c2fe8c();
    uVar2 = param_1[5];
    func_0x000107c2fe90();
    plVar5 = *(long **)(unaff_x21 + 0x90);
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar3;
    (**(code **)(*plVar5 + 0x20))(plVar5,(undefined1 *)((long)register0x00000008 + -0x90));
    uVar1 = plVar5 == (long *)0x1;
    if ((long)plVar5 < 1) {
      unaff_x20 = (undefined8 *)param_1[4];
      func_0x00010b479724(unaff_x20,&UNK_10f7437ca);
    }
    else {
      *(long *)(unaff_x21 + 0xa0) = *(long *)(unaff_x21 + 0xa0) + (long)plVar5;
      uVar3 = param_1[4];
      func_0x000107c2feac(uVar3,plVar5,0);
      uVar2 = *(undefined8 *)(unaff_x21 + 0x48);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(unaff_x21 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar2;
      lVar6 = *(long *)(unaff_x21 + 0x58);
      *(long *)((long)register0x00000008 + -0xb0) = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x00010b2e2ee0();
        } while (extraout_w10 != 0);
      }
      puVar7 = (undefined8 *)((ulong)((long)register0x00000008 + -0xc0) | 8);
      uVar2 = *(undefined8 *)(unaff_x21 + 0xa0);
      *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(unaff_x21 + 0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar2;
      func_0x000107c28150();
      unaff_x22 = *(long *)(unaff_x21 + 0x28);
      __ZNSt3__15mutex4lockEv(unaff_x22 + 8);
      unaff_x24 = *(long *)(unaff_x22 + 0x70);
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0x10b2e2d94;
      *(undefined ***)((long)register0x00000008 + -0x88) = &PTR_FUN_110cd36e8;
      puVar4 = (undefined8 *)0x28;
      __Znwm();
      unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x90);
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      puVar4[1] = *(undefined8 *)((long)register0x00000008 + -0xb8);
      *puVar4 = uVar2;
      puVar4[2] = *(undefined8 *)((long)register0x00000008 + -0xb0);
      *puVar7 = 0;
      puVar7[1] = 0;
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      puVar4[4] = *(undefined8 *)((long)register0x00000008 + -0xa0);
      puVar4[3] = uVar2;
      *(undefined8 **)((long)register0x00000008 + -0x80) = puVar4;
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar3;
      func_0x000107c28154(unaff_x22 + 0x48,(undefined1 *)((long)register0x00000008 + -0x90));
      func_0x00010b2e2ef0();
      __ZNSt3__15mutex6unlockEv(unaff_x22 + 8);
      if (unaff_x24 == 0) {
        lVar6 = *(long *)(unaff_x21 + 0x30);
        uVar3 = *(undefined8 *)(unaff_x21 + 0x28);
        *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(unaff_x21 + 0x30);
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar3;
        if (lVar6 != 0) {
          do {
            func_0x00010b2e2ee0();
          } while (extraout_w10_00 != 0);
        }
        func_0x00010b2e2f20();
        (*extraout_x8_00)();
        func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x90));
      }
      unaff_x20 = puVar7;
      func_0x000107c2c804();
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xc0);
    }
    func_0x00010b2e2ea4(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x90));
    func_0x000107c2c804(puVar7);
    unaff_x30 = FUN_10b2e2d58;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar7;
  }
  return;
}



/* Entry: 10b2e2dac; end: 10b2e2de3;  */

void FUN_10b2e2dac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000107c2c804(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b2e2de4; end: 10b2e2dfb;  */

void FUN_10b2e2de4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2e2dfc; end: 10b2e2e4b;  */

void FUN_10b2e2dfc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1[1] + 0x90);
  (**(code **)(*plVar1 + 0x28))();
  plVar2 = (long *)*param_1;
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100787fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010088d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_10f7437e9);
  return;
}



/* Entry: 10b2e2e4c; end: 10b2e2f3f;  */

void FUN_10b2e2e4c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x90);
  (**(code **)(*plVar1 + 0x28))();
  plVar2 = *(long **)(param_1 + 0x10);
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100787fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010088d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_10f7437e9);
  return;
}



/* Entry: 10b2e2f40; end: 10b2e308b;  */

ulong FUN_10b2e2f40(long param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar7 = *param_2;
    if ((*(char *)(lVar5 + 0x28) == '\x01') && (*(int *)(lVar7 + 0x180) == 4)) {
      uVar4 = 0x100000000;
      uVar6 = 4;
    }
    else {
      uVar9 = 0;
      uVar8 = 0;
      uVar10 = 0;
      uVar4 = *(ulong *)(lVar5 + 0x10);
      puVar1 = (ulong *)(lVar5 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + 7);
      }
      for (lVar5 = (long)*(int *)(lVar5 + 0x18) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
        uVar6 = *puVar1;
        uVar4 = (ulong)*(uint *)(uVar6 + 0x24);
        func_0x000107c2c750();
        if ((uVar4 >> 0x20 != 0) && (uVar2 = *(uint *)(uVar6 + 0x20), uVar2 != 0)) {
          if (uVar2 < 6) {
            iVar3 = *(int *)(&UNK_10e573514 + (ulong)(uVar2 - 1) * 4);
          }
          else {
            iVar3 = 7;
          }
          if ((((*(int *)(lVar7 + 0xa8) == iVar3) && (*(int *)(lVar7 + 0x180) == (int)uVar4)) &&
              ((long)(ulong)*(uint *)(uVar6 + 0x28) <= *(long *)(lVar7 + 0x188))) &&
             ((*(byte *)(uVar6 + 0x10) & 1) != 0)) {
            uVar2 = *(uint *)(*(long *)(uVar6 + 0x18) + 0x10);
            if ((uVar9 == 0) || ((int)(uVar8 | uVar10 << 8) < (int)uVar2)) {
              uVar8 = uVar2 & 0xff;
              uVar10 = uVar2 >> 8;
            }
            uVar9 = 1;
          }
        }
        puVar1 = puVar1 + 1;
      }
      uVar4 = (ulong)uVar9 << 0x20;
      uVar6 = (ulong)uVar8 | (ulong)uVar10 << 8;
    }
  }
  return uVar4 | uVar6;
}



/* Entry: 10b2e308c; end: 10b2e308f;  */

void FUN_10b2e308c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd3740;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2e3090; end: 10b2e30a3;  */

void FUN_10b2e3090(void)

{
  func_0x00010b2e30c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e30a4; end: 10b2e30d7;  */

void FUN_10b2e30a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b2e30ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2e30d8; end: 10b2e318b;  */

void FUN_10b2e30d8(long param_1)

{
  long lVar1;
  
  func_0x000107c35b48();
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    func_0x000107c2c8d0(lVar1 + 0x330);
    func_0x000107c2c8d4(lVar1 + 0x328);
    func_0x000107c2c594(lVar1 + 0x310);
    func_0x000107c2c930(lVar1 + 0x300);
    FUN_10b2dfd7c(lVar1 + 0x148);
    FUN_10b2e145c(lVar1 + 0x138);
    func_0x00010b2e14b0(lVar1 + 0x128);
    FUN_10b2e1cf4(lVar1 + 0x118);
    FUN_10b2e4428(lVar1 + 0x110);
    FUN_10b2e1c34(lVar1 + 0xf8);
    func_0x000107c2c5a8(lVar1 + 0xe8);
    func_0x000107c278a8(lVar1 + 0xd0);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x88);
    func_0x00010bcce460(lVar1 + 0x30);
    func_0x000107c27c3c(lVar1 + 0x20);
    func_0x000107c2814c(lVar1 + 0x10);
    func_0x000107c27e70(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10b2e318c; end: 10b2e3197;  */

void FUN_10b2e318c(long param_1)

{
  long lVar1;
  
  func_0x000107c35b48();
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    func_0x000107c2c8d0(lVar1 + 0x330);
    func_0x000107c2c8d4(lVar1 + 0x328);
    func_0x000107c2c594(lVar1 + 0x310);
    func_0x000107c2c930(lVar1 + 0x300);
    FUN_10b2dfd7c(lVar1 + 0x148);
    FUN_10b2e145c(lVar1 + 0x138);
    func_0x00010b2e14b0(lVar1 + 0x128);
    FUN_10b2e1cf4(lVar1 + 0x118);
    FUN_10b2e4428(lVar1 + 0x110);
    FUN_10b2e1c34(lVar1 + 0xf8);
    func_0x000107c2c5a8(lVar1 + 0xe8);
    func_0x000107c278a8(lVar1 + 0xd0);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x88);
    func_0x00010bcce460(lVar1 + 0x30);
    func_0x000107c27c3c(lVar1 + 0x20);
    func_0x000107c2814c(lVar1 + 0x10);
    func_0x000107c27e70(lVar1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10b2e3198; end: 10b2e31ab;  */

void FUN_10b2e3198(void)

{
  FUN_10b2e30d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e31ac; end: 10b2e31b3;  */

void FUN_10b2e31ac(long param_1)

{
  FUN_10b2e30d8(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e31b4; end: 10b2e3203;  */

void FUN_10b2e31b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_10b2d8c18(auStack_30,param_2);
  func_0x000107c2c8b0(uVar1,auStack_30);
  func_0x000107c2c578(auStack_30);
  return;
}



/* Entry: 10b2e3204; end: 10b2e320f;  */

void FUN_10b2e3204(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar6;
  int extraout_w10;
  long lVar7;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = lVar6 + 0x148;
  puVar3 = &uStack_90;
  func_0x000107c35a4c();
  uVar2 = *(undefined8 *)(lVar1 + 200);
  uStack_90 = param_2;
  lStack_88 = lVar1;
  uStack_48 = extraout_x8;
  func_0x000107c35a8c();
  (*extraout_x8_00)();
  if ((int)uVar2 == 0) {
    unaff_x20 = *(long *)(lVar6 + 0x220);
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    func_0x000107c28150();
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    __ZNSt3__15mutex4lockEv(unaff_x21 + 8);
    unaff_x22 = *(long *)(unaff_x21 + 0x70);
    uStack_80 = 0x10b2e1590;
    ppuStack_78 = &PTR_DAT_110cd3430;
    uStack_50 = uVar2;
    func_0x000107c28154(unaff_x21 + 0x48,&uStack_80);
    func_0x00010b2e1b14();
    puVar3 = (undefined8 *)(unaff_x21 + 8);
    __ZNSt3__15mutex6unlockEv();
    if (unaff_x22 == 0) {
      ppuStack_78 = *(undefined ***)(unaff_x20 + 0x18);
      uStack_80 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(long *)(unaff_x20 + 0x18) != 0) {
        do {
          func_0x000107c359b8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c359f4();
      (*extraout_x8_01)();
      puVar3 = &uStack_80;
      func_0x000107c27e74();
    }
  }
  else {
    FUN_10b2e073c();
  }
  func_0x000107c359f8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar4 = &uStack_80;
    func_0x000107c27e74();
    func_0x00010b2e1a10();
    pcStack_98 = FUN_10b2e073c;
    lVar6 = puVar4[1];
    lVar1 = lVar6 + 0x50;
    lStack_c0 = unaff_x22;
    lStack_b8 = unaff_x21;
    lStack_b0 = unaff_x20;
    puStack_a8 = puVar3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000107c2c860(lVar1,puVar4);
    if (lVar1 != 0) {
      uStack_c8 = *(undefined8 *)(lVar1 + 0x18);
      lVar6 = lVar6 + 0x28;
      func_0x000107c2c864(lVar6,&uStack_c8);
      plVar5 = (long *)(lVar6 + 0x28);
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        *(undefined8 *)(lVar6 + 0x28) = 0;
        func_0x000107c2c80c(plVar5,0);
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((*(byte *)(lVar6 + 0x288) & 1) == 0) {
          *(undefined1 *)(lVar6 + 0x288) = 1;
        }
        *(long **)(lVar6 + 0x280) = plVar5;
        func_0x000107c2feb4(*(undefined8 *)(lVar1 + 0x18),lVar7);
      }
    }
    return;
  }
  return;
}



/* Entry: 10b2e3210; end: 10b2e3347;  */

undefined8 * FUN_10b2e3210(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  long *plVar5;
  code **ppcVar6;
  code **ppcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long lVar10;
  long unaff_x23;
  long lVar11;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  long *plStack_110;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  
  ppcVar6 = &pcStack_90;
  ppcVar7 = &pcStack_90;
  ppcVar4 = &pcStack_90;
  func_0x000107c35aec();
  func_0x00010b2e44d0();
  if ((int)param_1 == 0) {
    lVar9 = *(long *)(unaff_x23 + 0x10);
    func_0x000107c28150();
    lVar10 = *(long *)(lVar9 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar10 + 8);
    lVar11 = *(long *)(lVar10 + 0x70);
    pcStack_90 = FUN_10b2e3a28;
    ppuStack_88 = &PTR_DAT_110cd3a40;
    param_1 = (undefined8 *)(lVar10 + 0x48);
    func_0x000107c28154();
    func_0x00010b2e4470(ppuStack_88);
    func_0x00010b2e4548();
    param_2 = ppcVar6;
    if (lVar11 == 0) {
      ppuStack_88 = *(undefined ***)(lVar9 + 0x18);
      pcStack_90 = *(code **)(lVar9 + 0x10);
      if (*(long *)(lVar9 + 0x18) != 0) {
        do {
          func_0x000107c35ad4();
        } while (extraout_w10 != 0);
      }
      func_0x000107c35b04();
      (*extraout_x8_00)();
      func_0x000107c27e74();
      param_1 = ppcVar4;
      param_2 = ppcVar7;
    }
    func_0x000107c35ad8(extraout_x8);
    if ((bool)in_ZR) {
      return param_1;
    }
  }
  else {
    func_0x000107c35ad8(extraout_x8);
    if ((bool)in_ZR) {
      lVar9 = unaff_x23 + 0x148;
      func_0x00010b2e1a40();
      puVar8 = (undefined8 *)0x0;
      if (lVar9 != 0) {
        puVar8 = *(undefined8 **)(lVar9 + 0x18);
        if ((*(char *)(unaff_x23 + 0x281) == '\x01') && (func_0x00010b2e1b6c(), lVar9 != 0)) {
          *(undefined1 *)(*(long *)(lVar9 + 0x18) + 0x58) = 0;
        }
        func_0x00010b479734(puVar8);
      }
      return puVar8;
    }
  }
  uVar2 = 0;
  ___stack_chk_fail();
  func_0x00010b2e45fc();
  func_0x000107c27e74();
  func_0x00010b2e447c();
  pcStack_98 = FUN_10b2e3348;
  puVar8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c35aec();
  uStack_e8 = extraout_x8_01;
  func_0x00010b2e44d0();
  if ((int)param_1 == 0) {
    lVar10 = *(long *)(unaff_x23 + 0x10);
    lStack_138 = param_3[1];
    lStack_140 = *param_3;
    lStack_128 = param_3[3];
    lStack_130 = param_3[2];
    func_0x000107c28150();
    lVar9 = *(long *)(lVar10 + 0x10);
    func_0x00010b2e45b8();
    lVar11 = *(long *)(lVar9 + 0x70);
    uStack_120 = 0x10b2e3a50;
    ppuStack_118 = &PTR_DAT_110cd3a58;
    plVar5 = (long *)0x30;
    __Znwm();
    *plVar5 = unaff_x23;
    plVar5[1] = (long)param_2;
    plVar5[3] = lStack_138;
    plVar5[2] = lStack_140;
    plVar5[5] = lStack_128;
    plVar5[4] = lStack_130;
    puVar3 = (undefined8 *)(lVar9 + 0x48);
    puVar8 = &uStack_120;
    plStack_110 = plVar5;
    puStack_f0 = param_1;
    func_0x000107c28154(puVar3);
    func_0x00010b2e4470(ppuStack_118);
    func_0x00010b2e44c0();
    if (lVar11 == 0) {
      ppuStack_118 = *(undefined ***)(lVar10 + 0x18);
      uStack_120 = *(undefined8 *)(lVar10 + 0x10);
      if (*(long *)(lVar10 + 0x18) != 0) {
        do {
          func_0x000107c35ad4();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c35b04();
      puVar8 = &uStack_120;
      (*extraout_x8_02)();
      puVar3 = &uStack_120;
      func_0x000107c27e74(puVar3);
    }
    func_0x000107c35ad8(uStack_e8);
    if ((bool)uVar2) {
      return puVar3;
    }
  }
  else {
    func_0x000107c35ad8(uStack_e8);
    if ((bool)uVar2) {
      puVar8 = (undefined8 *)(unaff_x23 + 0x148);
      puVar3 = puVar8;
      if (((*(long *)(unaff_x23 + 0x2c8) != 0) &&
          (lVar9 = *(long *)(*(long *)(unaff_x23 + 0x2c8) + 0x1d8), lVar9 != 0)) &&
         (iVar1 = *(int *)(lVar9 + 4), iVar1 != 0)) {
        func_0x00010b2e1a40();
        puVar3 = (undefined8 *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          func_0x00010b2e1b6c();
          puVar3 = (undefined8 *)0x0;
          if ((puVar8 != (undefined8 *)0x0) &&
             ((puVar3 = (undefined8 *)puVar8[3], iVar1 != 1 ||
              (*(int *)(puVar3 + 0x30) != (int)param_3[1])))) {
            lVar9 = *param_3;
            lVar11 = param_3[3];
            lVar10 = param_3[2];
            puVar3[0x30] = param_3[1];
            puVar3[0x2f] = lVar9;
            puVar3[0x32] = lVar11;
            puVar3[0x31] = lVar10;
            func_0x000107c30134();
            puVar3 = *(undefined8 **)(unaff_x23 + 0x2c8);
            FUN_10b48c708(puVar3,param_2,*(undefined4 *)(puVar8[3] + 0x180));
          }
        }
      }
      return puVar3;
    }
  }
  ___stack_chk_fail();
  puVar3 = &uStack_120;
  func_0x000107c27e74();
  func_0x00010b2e447c();
  pcStack_148 = FUN_10b2e34ac;
  lVar9 = puVar3[2] + 0x198;
  puStack_158 = puVar8;
  ppuStack_150 = &puStack_a0;
  func_0x00010b2e14f4(lVar9,&puStack_158);
  return (undefined8 *)(ulong)(lVar9 != 0);
}



/* Entry: 10b2e3348; end: 10b2e34ab;  */

undefined8 * FUN_10b2e3348(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long lVar6;
  long unaff_x23;
  long lVar7;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = param_2;
  func_0x000107c35aec();
  uStack_58 = extraout_x8;
  func_0x00010b2e44d0();
  if ((int)param_1 == 0) {
    lVar6 = *(long *)(unaff_x23 + 0x10);
    lStack_a8 = param_3[1];
    lStack_b0 = *param_3;
    lStack_98 = param_3[3];
    lStack_a0 = param_3[2];
    func_0x000107c28150();
    lVar5 = *(long *)(lVar6 + 0x10);
    func_0x00010b2e45b8();
    lVar7 = *(long *)(lVar5 + 0x70);
    uStack_90 = 0x10b2e3a50;
    ppuStack_88 = &PTR_DAT_110cd3a58;
    plVar4 = (long *)0x30;
    __Znwm();
    *plVar4 = unaff_x23;
    plVar4[1] = (long)param_2;
    plVar4[3] = lStack_a8;
    plVar4[2] = lStack_b0;
    plVar4[5] = lStack_98;
    plVar4[4] = lStack_a0;
    puVar3 = (undefined8 *)(lVar5 + 0x48);
    puVar2 = &uStack_90;
    plStack_80 = plVar4;
    uStack_60 = param_1;
    func_0x000107c28154(puVar3);
    func_0x00010b2e4470(ppuStack_88);
    func_0x00010b2e44c0();
    if (lVar7 == 0) {
      ppuStack_88 = *(undefined ***)(lVar6 + 0x18);
      uStack_90 = *(undefined8 *)(lVar6 + 0x10);
      if (*(long *)(lVar6 + 0x18) != 0) {
        do {
          func_0x000107c35ad4();
        } while (extraout_w10 != 0);
      }
      func_0x000107c35b04();
      puVar2 = &uStack_90;
      (*extraout_x8_00)();
      puVar3 = &uStack_90;
      func_0x000107c27e74(puVar3);
    }
    func_0x000107c35ad8(uStack_58);
    if ((bool)in_ZR) {
      return puVar3;
    }
  }
  else {
    func_0x000107c35ad8(uStack_58);
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(unaff_x23 + 0x148);
      puVar3 = puVar2;
      if (((*(long *)(unaff_x23 + 0x2c8) != 0) &&
          (lVar5 = *(long *)(*(long *)(unaff_x23 + 0x2c8) + 0x1d8), lVar5 != 0)) &&
         (iVar1 = *(int *)(lVar5 + 4), iVar1 != 0)) {
        func_0x00010b2e1a40();
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          func_0x00010b2e1b6c();
          puVar3 = (undefined8 *)0x0;
          if ((puVar2 != (undefined8 *)0x0) &&
             ((puVar3 = (undefined8 *)puVar2[3], iVar1 != 1 ||
              (*(int *)(puVar3 + 0x30) != (int)param_3[1])))) {
            lVar5 = *param_3;
            lVar7 = param_3[3];
            lVar6 = param_3[2];
            puVar3[0x30] = param_3[1];
            puVar3[0x2f] = lVar5;
            puVar3[0x32] = lVar7;
            puVar3[0x31] = lVar6;
            func_0x000107c30134();
            puVar3 = *(undefined8 **)(unaff_x23 + 0x2c8);
            FUN_10b48c708(puVar3,param_2,*(undefined4 *)(puVar2[3] + 0x180));
          }
        }
      }
      return puVar3;
    }
  }
  ___stack_chk_fail();
  puVar3 = &uStack_90;
  func_0x000107c27e74();
  func_0x00010b2e447c();
  pcStack_b8 = FUN_10b2e34ac;
  lVar5 = puVar3[2] + 0x198;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010b2e14f4(lVar5,&puStack_c8);
  return (undefined8 *)(ulong)(lVar5 != 0);
}



/* Entry: 10b2e34ac; end: 10b2e34bf;  */

bool FUN_10b2e34ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(param_1 + 0x10) + 0x198;
  uStack_18 = param_2;
  func_0x00010b2e14f4(lVar1,&uStack_18);
  return lVar1 != 0;
}



/* Entry: 10b2e34c0; end: 10b2e3507;  */

void FUN_10b2e34c0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0xd0) != *(long *)(lVar1 + 0xd8)) {
    __ZNSt3__15mutex4lockEv(lVar1 + 0x88);
    *(undefined1 *)(lVar1 + 200) = 0;
    func_0x00010b479708(*(undefined8 *)(lVar1 + 0x2f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x88);
    return;
  }
  return;
}



/* Entry: 10b2e3508; end: 10b2e3593;  */

void FUN_10b2e3508(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_c0 [144];
  
  lVar5 = *(long *)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = *(undefined8 **)(lVar5 + 0xd8);
  for (puVar4 = *(undefined8 **)(lVar5 + 0xd0); puVar4 != puVar1; puVar4 = puVar4 + 3) {
    puVar3 = puVar4;
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*puVar4;
    }
    plVar2 = *(long **)(lVar5 + 0xe8);
    (**(code **)(*plVar2 + 0x40))(plVar2,puVar3,auStack_c0);
    if ((int)plVar2 == 0) {
      func_0x000107c35b80();
      func_0x000107c281e8();
    }
  }
  return;
}



/* Entry: 10b2e3594; end: 10b2e35af;  */

long ** FUN_10b2e3594(long param_1,int param_2,long param_3)

{
  ulong uVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int extraout_w8;
  long *plVar8;
  long lVar9;
  long **pplVar10;
  undefined **ppuVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  float fVar18;
  undefined *puVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined *puVar23;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_a0;
  
  pplVar2 = *(long ***)(*(long *)(param_1 + 0x10) + 0x128);
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(pplVar2 + 1) != '\x01') || (plVar12 = pplVar2[2], plVar12 == (long *)0x0)) {
    pplVar10 = (long **)0xffffffffffffffff;
    goto LAB_10b2e94dc;
  }
  uVar13 = (ulong)*(uint *)(pplVar2 + 5);
  if (*(char *)(param_3 + 0x18) == '\x01') {
    ppuStack_d0 = (undefined **)((ulong)ppuStack_d0 & 0xffffffffffffff00);
    ppuStack_b8 = (undefined **)((ulong)ppuStack_b8 & 0xffffffffffffff00);
    __ZNSt3__15mutex4lockEv(plVar12 + 0xc);
    plVar14 = (long *)plVar12[5];
    if ((plVar14 != (long *)0x0) && (plVar3 = plVar12 + 7, *plVar3 != 0)) {
      func_0x000107c278c4(plVar3,param_3);
      uVar15 = (long)plVar14 - 1;
      if (((ulong)plVar14 & uVar15) == 0) {
        plVar16 = (long *)((ulong)plVar3 & uVar15);
      }
      else {
        plVar16 = plVar3;
        if (plVar14 <= plVar3) {
          uVar1 = 0;
          if (plVar14 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar14;
          }
          plVar16 = (long *)((long)plVar3 - uVar1 * (long)plVar14);
        }
      }
      plVar17 = *(long **)(plVar12[4] + (long)plVar16 * 8);
      if (plVar17 != (long *)0x0) {
LAB_10b2e91e8:
        while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
          plVar8 = (long *)plVar17[1];
          if (plVar3 != plVar8) goto LAB_10b2e9210;
          lVar4 = (long)(plVar17 + 2);
          func_0x000107c278d0(lVar4,param_3);
          if ((int)lVar4 != 0) {
            plVar14 = (long *)plVar17[5];
            if (plVar12 + 1 != plVar14) {
              uVar15 = plVar14[0xe];
              if (uVar15 < uVar13) {
                func_0x00010b2eb09c();
              }
              else {
                if ((char)ppuStack_b8 == '\x01') {
                  if (ppuStack_d0 != (undefined **)0x0) {
                    __ZdlPv();
                  }
                  func_0x00010b2eb0a8();
                }
                else {
                  func_0x00010b2eb0a8();
                  ppuStack_b8 = (undefined **)CONCAT71(ppuStack_b8._1_7_,1);
                }
                FUN_10b2e8c48(&ppuStack_e8);
                if (plVar14[0xe] == 0) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = plVar14[0xc];
                }
                while (lVar4 != 0) {
                  if (*(int *)(lVar4 + 0xc) == 0) {
                    func_0x00010b2eb018();
                  }
                  lVar9 = lVar4 + 0x28;
                  if (lVar9 == plVar14[0xb]) {
                    lVar9 = plVar14[10];
                  }
                  lVar4 = 0;
                  if (lVar9 != plVar14[0xd]) {
                    lVar4 = lVar9;
                  }
                }
              }
              func_0x00010b2eafa8();
              if (uVar13 <= uVar15) {
                if ((char)ppuStack_b8 == '\x01') {
                  func_0x00010b2eb00c();
                }
                else {
                  func_0x00010b2eb09c();
                }
              }
              goto LAB_10b2e9268;
            }
            break;
          }
        }
      }
    }
LAB_10b2e9260:
    func_0x00010b2eb09c();
    func_0x00010b2eafa8();
LAB_10b2e9268:
    FUN_10b2e9754(&ppuStack_d0);
  }
  else {
    ppuStack_d0 = (undefined **)0x0;
    ppuStack_c8 = (undefined **)0x0;
    ppuStack_c0 = (undefined **)0x0;
    __ZNSt3__15mutex4lockEv(plVar12 + 0xc);
    for (plVar14 = plVar12 + 2; plVar14 = (long *)*plVar14, plVar14 != plVar12 + 1;
        plVar14 = plVar14 + 1) {
      if (plVar14[0xe] == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = plVar14[0xc];
      }
      while (lVar4 != 0) {
        if (*(int *)(lVar4 + 0xc) == 0) {
          func_0x00010b2eb018();
        }
        lVar9 = lVar4 + 0x28;
        if (lVar9 == plVar14[0xb]) {
          lVar9 = plVar14[10];
        }
        lVar4 = 0;
        if (lVar9 != plVar14[0xd]) {
          lVar4 = lVar9;
        }
      }
    }
    func_0x00010b2eafa8();
    if ((ulong)(((long)ppuStack_c8 - (long)ppuStack_d0) / 0x28) < uVar13) {
      func_0x00010b2eb09c();
    }
    else {
      if (ppuStack_d0 != ppuStack_c8) {
        func_0x00010b2eb088();
        FUN_10b2e9774();
      }
      func_0x00010b2eb00c();
    }
    FUN_10b2e8c48(&ppuStack_d0);
  }
  if (param_2 == 1) {
    if (1 < (ulong)(((long)plStack_f8 - (long)plStack_100) / 0x18)) {
      ppuVar7 = (undefined **)0x0;
      fVar18 = *(float *)(pplVar2 + 3);
      dVar20 = (double)(long)pplVar2[4];
      ppuStack_e8 = (undefined **)0x0;
      ppuStack_e0 = (undefined **)0x0;
      ppuStack_d8 = (undefined **)0x0;
      dVar21 = 0.0;
      for (plVar12 = plStack_100; plVar12 != plStack_f8; plVar12 = plVar12 + 3) {
        if (0.0 < (double)plVar12[2]) {
          puVar19 = (undefined *)
                    SQRT((double)plVar12[2] * ((double)(plVar12[1] - *plVar12) / 1000000000.0));
          dVar22 = dVar21 + (double)puVar19;
          puVar23 = (undefined *)((double)puVar19 - (dVar22 - dVar20));
          if (dVar22 <= dVar20) {
            puVar23 = puVar19;
          }
          if (ppuVar7 < ppuStack_d8) {
            *ppuVar7 = puVar23;
            ppuVar7[1] = (undefined *)plVar12[2];
            ppuVar7 = ppuVar7 + 2;
          }
          else {
            pppuVar5 = &ppuStack_e8;
            func_0x0001077badb4(pppuVar5,((long)ppuVar7 - (long)ppuStack_e8 >> 4) + 1);
            func_0x0001077bad1c(&ppuStack_d0,pppuVar5,(long)ppuStack_e0 - (long)ppuStack_e8 >> 4,
                                &ppuStack_d8);
            *ppuStack_c0 = puVar23;
            ppuStack_c0[1] = (undefined *)plVar12[2];
            ppuStack_c0 = ppuStack_c0 + 2;
            ppuVar11 = (undefined **)((long)ppuStack_c8 - ((long)ppuStack_e0 - (long)ppuStack_e8));
            _memcpy(ppuVar11);
            ppuVar7 = ppuStack_c0;
            ppuVar6 = ppuStack_d8;
            ppuStack_d8 = ppuStack_b8;
            ppuStack_e0 = ppuStack_c0;
            ppuStack_c0 = ppuStack_e8;
            ppuStack_b8 = ppuVar6;
            ppuStack_d0 = ppuStack_e8;
            ppuStack_c8 = ppuStack_e8;
            ppuStack_e8 = ppuVar11;
            func_0x0001077bad64(&ppuStack_d0);
          }
          dVar21 = dVar20;
          if (dVar22 <= dVar20) {
            dVar21 = dVar22;
          }
          ppuStack_e0 = ppuVar7;
          if (dVar20 <= dVar21) break;
        }
      }
      if (ppuStack_e8 != ppuVar7) {
        func_0x00010b2eb088((long)ppuVar7 - (long)ppuStack_e8 >> 4);
        FUN_10b2ea53c();
        ppuVar7 = ppuStack_e0;
      }
      dVar20 = 0.0;
      for (ppuVar6 = ppuStack_e8; ppuVar6 != ppuVar7; ppuVar6 = ppuVar6 + 2) {
        dVar20 = dVar20 + (double)*ppuVar6;
        if (dVar21 * (double)fVar18 <= dVar20) {
          pplVar10 = (long **)(long)(double)ppuVar6[1];
          goto LAB_10b2e9450;
        }
      }
      pplVar10 = (long **)0xffffffffffffffff;
LAB_10b2e9450:
      func_0x00010727d3c0(&ppuStack_e8);
      if (-1 < (long)pplVar10) goto LAB_10b2e94d4;
    }
LAB_10b2e945c:
    plVar12 = pplVar2[7];
    if (-1 < (char)*(byte *)((long)pplVar2 + 0x47)) {
      plVar12 = (long *)(ulong)*(byte *)((long)pplVar2 + 0x47);
    }
    if (plVar12 != (long *)0x0) {
      ppuVar7 = &PTR___tlv_bootstrap_11340d9f0;
      (*(code *)PTR___tlv_bootstrap_11340d9f0)();
      if (*(char *)ppuVar7 == '\0') {
        ppuStack_d0 = (undefined **)0x10b2ea4fc;
        ppuStack_c8 = &PTR_FUN_110cd4720;
        *(undefined1 *)ppuVar7 = 1;
        pplVar10 = (long **)pplVar2[6];
        if (-1 < extraout_w8) {
          pplVar10 = pplVar2 + 6;
        }
        func_0x000107c30184();
        func_0x000107c281f0(&ppuStack_d0);
        goto LAB_10b2e94d4;
      }
    }
    pplVar10 = (long **)0xffffffffffffffff;
  }
  else if (((param_2 != 0) || ((ulong)(((long)plStack_f8 - (long)plStack_100) / 0x18) < 2)) ||
          (pplVar10 = (long **)(long)(double)plStack_100[2], (long)pplVar10 < 0))
  goto LAB_10b2e945c;
LAB_10b2e94d4:
  pplVar2 = &plStack_100;
  FUN_10b2e8c04();
LAB_10b2e94dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    FUN_10b2e9754(&ppuStack_d0);
    __Unwind_Resume();
    *pplVar2 = (long *)&PTR_FUN_110cd4680;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar2 + 6);
    func_0x000107c2c9b4(pplVar2 + 2);
    return pplVar2;
  }
  return pplVar10;
LAB_10b2e9210:
  if (((ulong)plVar14 & uVar15) == 0) {
    plVar8 = (long *)((ulong)plVar8 & uVar15);
  }
  else if (plVar14 <= plVar8) {
    uVar1 = 0;
    if (plVar14 != (long *)0x0) {
      uVar1 = (ulong)plVar8 / (ulong)plVar14;
    }
    plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar14);
  }
  if (plVar8 != plVar16) goto LAB_10b2e9260;
  goto LAB_10b2e91e8;
}



/* Entry: 10b2e35b0; end: 10b2e35df;  */

void FUN_10b2e35b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000107c2c6d8(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b2e35e0; end: 10b2e35e3;  */

void FUN_10b2e35e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2e35e4; end: 10b2e3613;  */

void FUN_10b2e35e4(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c35b68();
  *param_1 = *param_2;
  func_0x000107c2c8bc(param_1 + 1,param_2 + 1);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10b2e3614; end: 10b2e37b3;  */

void FUN_10b2e3614(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_6f8 [24];
  undefined4 auStack_6e0 [2];
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined4 uStack_6b8;
  char cStack_6b0;
  undefined1 auStack_6a8 [32];
  undefined1 uStack_688;
  undefined1 auStack_680 [104];
  undefined1 auStack_618 [176];
  undefined1 uStack_568;
  undefined1 auStack_560 [160];
  undefined1 uStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined1 uStack_478;
  undefined1 auStack_3f8 [200];
  undefined1 auStack_330 [528];
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [56];
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  long *plStack_50;
  undefined8 uStack_48;
  
  ppuVar7 = &puStack_d0;
  ppuVar8 = &puStack_d0;
  puVar5 = param_1;
  func_0x000107c35aec();
  puStack_d0 = puVar5;
  lStack_c8 = param_2;
  lStack_c0 = param_3;
  uStack_48 = extraout_x8_01;
  if (param_3 != 0) {
    do {
      func_0x000107c35ad4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b2d8dcc(auStack_b8,param_4);
  plVar6 = (long *)*param_1;
  (**(code **)(*plVar6 + 0x20))();
  if ((int)plVar6 == 0) {
    lVar11 = param_1[2];
    func_0x000107c28150();
    lVar11 = *(long *)(lVar11 + 0x10);
    func_0x00010b2e45b8();
    lVar10 = *(long *)(lVar11 + 0x70);
    uStack_80 = 0x10b2e37c8;
    ppuStack_78 = &PTR_FUN_110cd38c0;
    unaff_x20 = (long *)0x48;
    __Znwm();
    unaff_x20[1] = lStack_c8;
    *unaff_x20 = (long)puStack_d0;
    unaff_x20[2] = lStack_c0;
    if (lStack_c0 != 0) {
      do {
        func_0x000107c35ad4();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b2d8dcc(unaff_x20 + 3,auStack_b8);
    plStack_70 = unaff_x20;
    plStack_50 = plVar6;
    func_0x000107c28154(lVar11 + 0x48,&uStack_80);
    func_0x00010b2e4538();
    func_0x00010b2e44c0();
    if (lVar10 == 0) {
      func_0x00010b2e45d4();
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c35ad4();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c35b04();
      (*extraout_x8_03)();
      func_0x00010b2e4530();
    }
  }
  else {
    FUN_10b2e37b4(&puStack_d0);
  }
  FUN_10b2e37f4();
  func_0x000107c35ad8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b2e4530();
    FUN_10b2e37f4();
    func_0x00010b2e447c();
    plVar6 = (long *)(ppuVar8 + 1);
    plVar9 = (long *)(ppuVar8 + 3);
    plVar3 = (long *)((long)*ppuVar8 + 0x148);
    func_0x000107c35a9c();
    lVar10 = *plVar6;
    func_0x000107c35a08(*(undefined1 *)(lVar10 + 0x120));
    lVar11 = 0xc0;
    if ((bool)in_ZR) {
      lVar11 = extraout_x8;
    }
    func_0x000107c316c4();
    func_0x000107c35a10(*ppuVar7);
    plVar6 = plVar3;
    func_0x000107c316ec();
    auStack_560[0] = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0xffffffffffffffff;
    plStack_4b8 = plVar3;
    plStack_4b0 = plVar6;
    func_0x000107c2c618(&uStack_4a0,auStack_560);
    func_0x000107c2c808(auStack_3f8,&plStack_4b8);
    auStack_618[0] = 0;
    uStack_568 = 0;
    func_0x000107c30170(auStack_680);
    auStack_6a8[0] = 0;
    uStack_688 = 0;
    func_0x000107c2c614(auStack_330,auStack_3f8,auStack_618,auStack_680,auStack_6a8);
    func_0x000107c27f14(auStack_6a8);
    func_0x000107c2c62c(auStack_680);
    func_0x000107c2c63c(auStack_618);
    func_0x000107c2c644(auStack_3f8);
    func_0x000107c2c648(&uStack_4a0);
    func_0x000107c2c648(auStack_560);
    func_0x000107c35a00(*ppuVar7);
    (*extraout_x9)(&plStack_4b8);
    puVar5 = (undefined8 *)(lVar10 + lVar11);
    func_0x000107c359f4(plStack_4b8);
    (*extraout_x8_00)();
    func_0x00010b2e1b78();
    plVar6 = (long *)unaff_x20[0x32];
    __ZNSt3__19to_stringEx(&plStack_4b8,*puVar5);
    uVar4 = *ppuVar7;
    func_0x000107c30138(uVar4);
    (**(code **)(*plVar6 + 0x10))(plVar6,&plStack_4b8,uVar4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_4b8);
    FUN_10b2d8d08(&plStack_4b8,plVar9);
    func_0x000107c2c7d4(unaff_x20,ppuVar7,auStack_330,&plStack_4b8);
    func_0x000107c2c6a0(&plStack_4b8);
    func_0x000107c35a00(*ppuVar7);
    (*extraout_x9_00)(&plStack_4b8);
    func_0x000107c35a04(*(undefined8 *)(*plStack_4b8 + 0x38),plStack_4b8,*puVar5,auStack_330,plVar9)
    ;
    func_0x00010b2e1b78();
    uVar1 = *(undefined4 *)(puVar5 + 7);
    FUN_10b2d8d08(auStack_6e0,plVar9);
    uVar4 = uStack_6c8;
    plStack_4b8 = (long *)0x0;
    plStack_4b0 = (long *)CONCAT44(plStack_4b0._4_4_,uVar1);
    uVar2 = uStack_4a8 >> 0x20;
    uStack_4a8 = uStack_4a8 & 0xffffffffffffff00;
    uStack_478 = cStack_6b0 == '\x01';
    if ((bool)uStack_478) {
      uStack_4a8 = CONCAT44((int)uVar2,auStack_6e0[0]);
      uStack_498 = uStack_6d0;
      uStack_4a0 = uStack_6d8;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6c8 = 0;
      uStack_490 = uVar4;
      uStack_488 = uStack_6c0;
      uStack_480 = uStack_6b8;
    }
    func_0x000107c2c6a0(auStack_6e0);
    plVar6 = (long *)unaff_x20[0x32];
    __ZNSt3__19to_stringEx(auStack_6f8,*puVar5);
    uVar4 = *ppuVar7;
    func_0x000107c30138(uVar4);
    func_0x000107c35a04(*(undefined8 *)(*plVar6 + 0x30),plVar6,auStack_6f8,uVar4,&plStack_4b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6f8);
    func_0x000107c2c6a0(&uStack_4a8);
    func_0x000107c2c67c(auStack_330);
    return;
  }
  return;
}



/* Entry: 10b2e37b4; end: 10b2e37cf;  */

void FUN_10b2e37b4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  undefined1 auStack_628 [24];
  undefined4 auStack_610 [2];
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined4 uStack_5e8;
  char cStack_5e0;
  undefined1 auStack_5d8 [32];
  undefined1 uStack_5b8;
  undefined1 auStack_5b0 [104];
  undefined1 auStack_548 [176];
  undefined1 uStack_498;
  undefined1 auStack_490 [160];
  undefined1 uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3a8;
  undefined1 auStack_328 [200];
  undefined1 auStack_260 [528];
  
  plVar9 = param_1 + 1;
  plVar7 = param_1 + 3;
  plVar5 = (long *)(*param_1 + 0x148);
  func_0x000107c35a9c();
  lVar8 = *plVar9;
  func_0x000107c35a08(*(undefined1 *)(lVar8 + 0x120));
  lVar2 = 0xc0;
  if ((bool)in_ZR) {
    lVar2 = extraout_x8;
  }
  func_0x000107c316c4();
  func_0x000107c35a10(*unaff_x19);
  plVar9 = plVar5;
  func_0x000107c316ec();
  auStack_490[0] = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0xffffffffffffffff;
  plStack_3e8 = plVar5;
  plStack_3e0 = plVar9;
  func_0x000107c2c618(&uStack_3d0,auStack_490);
  func_0x000107c2c808(auStack_328,&plStack_3e8);
  auStack_548[0] = 0;
  uStack_498 = 0;
  func_0x000107c30170(auStack_5b0);
  auStack_5d8[0] = 0;
  uStack_5b8 = 0;
  func_0x000107c2c614(auStack_260,auStack_328,auStack_548,auStack_5b0,auStack_5d8);
  func_0x000107c27f14(auStack_5d8);
  func_0x000107c2c62c(auStack_5b0);
  func_0x000107c2c63c(auStack_548);
  func_0x000107c2c644(auStack_328);
  func_0x000107c2c648(&uStack_3d0);
  func_0x000107c2c648(auStack_490);
  func_0x000107c35a00(*unaff_x19);
  (*extraout_x9)(&plStack_3e8);
  puVar1 = (undefined8 *)(lVar8 + lVar2);
  func_0x000107c359f4(plStack_3e8);
  (*extraout_x8_00)();
  func_0x00010b2e1b78();
  plVar9 = *(long **)(unaff_x20 + 400);
  __ZNSt3__19to_stringEx(&plStack_3e8,*puVar1);
  uVar6 = *unaff_x19;
  func_0x000107c30138(uVar6);
  (**(code **)(*plVar9 + 0x10))(plVar9,&plStack_3e8,uVar6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_3e8);
  FUN_10b2d8d08(&plStack_3e8,plVar7);
  func_0x000107c2c7d4();
  func_0x000107c2c6a0(&plStack_3e8);
  func_0x000107c35a00(*unaff_x19);
  (*extraout_x9_00)(&plStack_3e8);
  func_0x000107c35a04(*(undefined8 *)(*plStack_3e8 + 0x38),plStack_3e8,*puVar1,auStack_260,plVar7);
  func_0x00010b2e1b78();
  uVar3 = *(undefined4 *)(puVar1 + 7);
  FUN_10b2d8d08(auStack_610,plVar7);
  uVar6 = uStack_5f8;
  plStack_3e8 = (long *)0x0;
  plStack_3e0 = (long *)CONCAT44(plStack_3e0._4_4_,uVar3);
  uVar4 = uStack_3d8 >> 0x20;
  uStack_3d8 = uStack_3d8 & 0xffffffffffffff00;
  uStack_3a8 = cStack_5e0 == '\x01';
  if ((bool)uStack_3a8) {
    uStack_3d8 = CONCAT44((int)uVar4,auStack_610[0]);
    uStack_3c8 = uStack_600;
    uStack_3d0 = uStack_608;
    uStack_608 = 0;
    uStack_600 = 0;
    uStack_5f8 = 0;
    uStack_3c0 = uVar6;
    uStack_3b8 = uStack_5f0;
    uStack_3b0 = uStack_5e8;
  }
  func_0x000107c2c6a0(auStack_610);
  plVar9 = *(long **)(unaff_x20 + 400);
  __ZNSt3__19to_stringEx(auStack_628,*puVar1);
  uVar6 = *unaff_x19;
  func_0x000107c30138(uVar6);
  func_0x000107c35a04(*(undefined8 *)(*plVar9 + 0x30),plVar9,auStack_628,uVar6,&plStack_3e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_628);
  func_0x000107c2c6a0(&uStack_3d8);
  func_0x000107c2c67c(auStack_260);
  return;
}



/* Entry: 10b2e37d0; end: 10b2e37ef;  */

void FUN_10b2e37d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b2e37f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e37f0; end: 10b2e37f3;  */

void FUN_10b2e37f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2e37f4; end: 10b2e381f;  */

long FUN_10b2e37f4(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x000107c2c578(param_1 + 8);
  return param_1;
}



/* Entry: 10b2e3820; end: 10b2e3823;  */

void FUN_10b2e3820(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2e3824; end: 10b2e3837;  */

void FUN_10b2e3824(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e3838; end: 10b2e386f;  */

long FUN_10b2e3838(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110cd3928);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b2e3870; end: 10b2e3873;  */

void FUN_10b2e3870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd3948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2e3874; end: 10b2e3887;  */

void FUN_10b2e3874(void)

{
  FUN_10b2e3888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e3888; end: 10b2e3897;  */

void FUN_10b2e3888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd3948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2e3898; end: 10b2e38ab;  */

void FUN_10b2e3898(void)

{
  func_0x00010b2e38b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e38ac; end: 10b2e38c3;  */

void FUN_10b2e38ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2e38c4; end: 10b2e38d7;  */

void FUN_10b2e38c4(void)

{
  func_0x00010b2e38e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e38d8; end: 10b2e38eb;  */

void FUN_10b2e38d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2e38ec; end: 10b2e39cf;  */

void FUN_10b2e38ec(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *aplStack_38 [3];
  
  plVar4 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar4;
  func_0x000107c2c7c4(lVar2 + 0x148,plVar4 + 1,plVar4 + 3,plVar4 + 5);
  (**(code **)(*(long *)plVar4[3] + 0x28))(aplStack_38);
  lVar1 = 0xc0;
  if (*(char *)(plVar4[3] + 0x120) == '\0') {
    lVar1 = 0x60;
  }
  (**(code **)(*aplStack_38[0] + 0x10))(aplStack_38[0],plVar4[3] + lVar1);
  func_0x000107c2c53c(aplStack_38);
  plVar3 = *(long **)(lVar2 + 0x20);
  lVar1 = 0xc0;
  if (*(char *)(plVar4[3] + 0x120) == '\0') {
    lVar1 = 0x60;
  }
  __ZNSt3__19to_stringEx(aplStack_38,*(undefined8 *)(plVar4[3] + lVar1));
  lVar1 = plVar4[3];
  func_0x000107c30138(lVar1);
  (**(code **)(*plVar3 + 0x10))(plVar3,aplStack_38,lVar1);
  func_0x00010b2e4590();
  return;
}



/* Entry: 10b2e39d0; end: 10b2e39ef;  */

void FUN_10b2e39d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b2e39f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e39f0; end: 10b2e39f3;  */

void FUN_10b2e39f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2e39f4; end: 10b2e3a27;  */

long FUN_10b2e39f4(long param_1)

{
  func_0x000107c2c838(param_1 + 0x28);
  func_0x000107c2c578(param_1 + 0x18);
  func_0x000107c2c804(param_1 + 8);
  return param_1;
}



/* Entry: 10b2e3a28; end: 10b2e3a7b;  */

void FUN_10b2e3a28(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = lVar1 + 0x148;
  func_0x00010b2e1a40();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    if ((*(char *)(lVar1 + 0x281) == '\x01') && (func_0x00010b2e1b6c(), lVar2 != 0)) {
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x58) = 0;
    }
    func_0x00010b479734(uVar3);
  }
  return;
}



/* Entry: 10b2e3a7c; end: 10b2e3a8f;  */

void FUN_10b2e3a7c(void)

{
  func_0x00010b2e3a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e3a90; end: 10b2e3aa3;  */

void FUN_10b2e3a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2e3aa4; end: 10b2e3c1f;  */

void FUN_10b2e3aa4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *extraout_x8;
  uint uVar4;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  
  func_0x00010b47975c();
  uVar1 = param_2;
  func_0x00010b47986c();
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_110cd2eb0;
  uStack_60 = 0;
  uStack_48 = (uint)((int)uVar1 != 0);
  uVar1 = param_2;
  func_0x00010b479884();
  for (uVar4 = 0; ((uint)uVar1 & ((int)(uint)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar4;
      uVar4 = uVar4 + 1) {
    uVar2 = param_2;
    func_0x00010b47988c(param_2,uVar4);
    uVar3 = uVar2;
    func_0x00010b479844();
    func_0x000107c278b8(auStack_80,uVar3);
    func_0x00010b479854(uVar2);
    func_0x000107c278b8(auStack_98,uVar2);
    func_0x000107c27940(&uStack_60,auStack_80);
    func_0x000107c27940(&uStack_60,auStack_98);
    func_0x00010b2e4590();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  }
  uVar1 = param_2;
  func_0x00010b479874();
  if ((int)uVar1 == 0) {
    func_0x00010b47987c(param_2);
    func_0x000107c35b78(*(undefined8 *)*param_1);
    (*extraout_x8)();
  }
  else if ((int)uVar1 == 1) {
    func_0x00010b47987c(param_2);
    (**(code **)(**(long **)*param_1 + 8))(*(long **)*param_1,&ppuStack_68,param_2);
  }
  func_0x00010b2dce48(&ppuStack_68);
  return;
}



/* Entry: 10b2e3c20; end: 10b2e3c23;  */

void FUN_10b2e3c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd3ad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2e3c24; end: 10b2e3c37;  */

void FUN_10b2e3c24(void)

{
  func_0x00010b2e3cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e3c38; end: 10b2e3c47;  */

void FUN_10b2e3c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2e3c48; end: 10b2e3c77;  */

void FUN_10b2e3c48(undefined8 *param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_28 = 0;
  FUN_10b2d5180(&uStack_28);
  return;
}



/* Entry: 10b2e3c78; end: 10b2e3c8b;  */

void FUN_10b2e3c78(void)

{
  return;
}



/* Entry: 10b2e3c8c; end: 10b2e3c9f;  */

void FUN_10b2e3c8c(void)

{
  func_0x00010b2e3ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e3ca0; end: 10b2e3cc7;  */

void FUN_10b2e3ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2e3cc8; end: 10b2e3cdb;  */

void FUN_10b2e3cc8(void)

{
  func_0x00010b2e4014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e3cdc; end: 10b2e3d33;  */

long FUN_10b2e3cdc(long param_1)

{
  func_0x000107c2c768(param_1 + 400);
  func_0x000107c2c788(param_1 + 0x168);
  FUN_10b2e3f0c(param_1 + 0x138);
  func_0x000107c2ab24(param_1 + 0x110);
  func_0x000107c2ab24(param_1 + 0xe8);
  FUN_10b2e3f90(param_1 + 0xc0);
  FUN_10b2e3f0c(param_1 + 0x98);
  func_0x000100650c64();
  func_0x000100650c98(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10b2e3d34; end: 10b2e3d3b;  */

void FUN_10b2e3d34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e3d3c; end: 10b2e3dd3;  */

void FUN_10b2e3d3c(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *plVar5;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar7 = param_2;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= param_2;
  if (plVar9 < param_2) {
LAB_10b2e3d84:
    func_0x000107c35b80();
    if (plVar3 == (long *)0x0) {
      FUN_10b2e3ea0(plVar7);
      plVar7[1] = 0;
    }
    else {
      plVar9 = plVar7 + 1;
      FUN_10b2e3eb8(plVar9);
      FUN_10b2e3ea0(plVar7,plVar9);
      plVar7[1] = (long)plVar3;
      lVar4 = *plVar7;
      for (plVar9 = (long *)0x0; plVar3 != plVar9; plVar9 = (long *)((long)plVar9 + 1)) {
        *(undefined8 *)(lVar4 + (long)plVar9 * 8) = 0;
      }
      if (plVar7[2] != 0) {
        func_0x000107c35b74();
        func_0x000107c35b70();
        lVar4 = extraout_x8;
        plVar7 = extraout_x9;
        uVar6 = extraout_x10;
        plVar9 = extraout_x11;
        while (plVar5 = plVar7, plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
          plVar8 = (long *)plVar7[1];
          if (((ulong)plVar3 & uVar6) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar6);
          }
          else if (plVar3 <= plVar8) {
            uVar1 = 0;
            if (plVar3 != (long *)0x0) {
              uVar1 = (ulong)plVar8 / (ulong)plVar3;
            }
            plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar3);
          }
          if (plVar8 != plVar9) {
            if (*(long *)(lVar4 + (long)plVar8 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar8 * 8) = plVar5;
              plVar9 = plVar8;
            }
            else {
              func_0x00010b2e44e4();
              lVar4 = extraout_x8_00;
              plVar7 = extraout_x9_00;
              uVar6 = extraout_x10_00;
              plVar9 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x00010b2e455c();
    if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
      func_0x00010b2e4504();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar7) {
      param_2 = plVar7;
    }
    if (param_2 < plVar9) goto LAB_10b2e3d84;
  }
  return;
}



/* Entry: 10b2e3dd4; end: 10b2e3e9f;  */

void FUN_10b2e3dd4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10b2e3ea0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_10b2e3eb8(plVar6);
    FUN_10b2e3ea0(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000107c35b74();
      func_0x000107c35b70();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x00010b2e44e4();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b2e3ea0; end: 10b2e3eb7;  */

void FUN_10b2e3ea0(long *param_1,long param_2)

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



/* Entry: 10b2e3eb8; end: 10b2e3ed3;  */

void FUN_10b2e3eb8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c35b14();
  FUN_10b2e3ef4();
  return;
}



/* Entry: 10b2e3ed4; end: 10b2e3ef3;  */

void FUN_10b2e3ed4(void)

{
  func_0x000107c35b14();
  FUN_10b2e3ef4();
  return;
}



/* Entry: 10b2e3ef4; end: 10b2e3f0b;  */

void FUN_10b2e3ef4(long *param_1,long param_2)

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



/* Entry: 10b2e3f0c; end: 10b2e3f77;  */

undefined8 FUN_10b2e3f0c(void)

{
  undefined8 unaff_x19;
  
  func_0x000107c35b84();
  func_0x00010b2e3f30();
  func_0x000107c35b14();
  FUN_10b2e3f78();
  return unaff_x19;
}



/* Entry: 10b2e3f78; end: 10b2e3f8f;  */

void FUN_10b2e3f78(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e3f90; end: 10b2e3ffb;  */

undefined8 FUN_10b2e3f90(void)

{
  undefined8 unaff_x19;
  
  func_0x000107c35b84();
  func_0x00010b2e3fb4();
  func_0x000107c35b14();
  FUN_10b2e3ffc();
  return unaff_x19;
}



/* Entry: 10b2e3ffc; end: 10b2e4023;  */

void FUN_10b2e3ffc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e4024; end: 10b2e4037;  */

void FUN_10b2e4024(void)

{
  FUN_10b2e441c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e4038; end: 10b2e403f;  */

void FUN_10b2e4038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2e4040; end: 10b2e4063;  */

void FUN_10b2e4040(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x000107c35b4c();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x8;
  func_0x000107c2c8d8(param_1 + 2);
  return;
}



/* Entry: 10b2e4064; end: 10b2e4067;  */

void FUN_10b2e4064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd3bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2e4068; end: 10b2e407b;  */

void FUN_10b2e4068(void)

{
  FUN_10b2e4318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e407c; end: 10b2e4087;  */

void FUN_10b2e407c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2e4088; end: 10b2e409b;  */

void FUN_10b2e4088(void)

{
  FUN_10b2e40b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e409c; end: 10b2e409f;  */

undefined8 * FUN_10b2e409c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd3c48;
  func_0x00010b2e40f4(param_1 + 4);
  FUN_10b2e4178(param_1 + 1);
  return param_1;
}



/* Entry: 10b2e40a0; end: 10b2e40b3;  */

void FUN_10b2e40a0(void)

{
  FUN_10b2e40b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e40b4; end: 10b2e415f;  */

undefined8 * FUN_10b2e40b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd3c48;
  func_0x00010b2e40f4(param_1 + 4);
  FUN_10b2e4178(param_1 + 1);
  return param_1;
}



/* Entry: 10b2e4160; end: 10b2e4177;  */

void FUN_10b2e4160(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e4178; end: 10b2e41cf;  */

void FUN_10b2e4178(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      FUN_10b2e41d0(param_1);
    }
  }
  return;
}



/* Entry: 10b2e41d0; end: 10b2e42db;  */

void FUN_10b2e41d0(undefined8 param_1,long param_2)

{
  func_0x000107c2c8fc(param_2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b2e42dc; end: 10b2e42e3;  */

void FUN_10b2e42dc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c35b68(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107c2c910();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b2e42e4; end: 10b2e4317;  */

void FUN_10b2e42e4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c35b68();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107c2c910();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b2e4318; end: 10b2e4323;  */

void FUN_10b2e4318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd3bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2e4324; end: 10b2e4347;  */

void FUN_10b2e4324(long param_1)

{
  func_0x00010b2e44a0();
  if (param_1 != 0) {
    func_0x00010b2e4464();
  }
  return;
}



/* Entry: 10b2e4348; end: 10b2e4367;  */

void FUN_10b2e4348(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b2e4324();
  }
  return;
}



/* Entry: 10b2e4368; end: 10b2e441b;  */

void FUN_10b2e4368(long param_1)

{
  func_0x00010b2e44a0();
  if (param_1 != 0) {
    func_0x00010b2e4464();
  }
  return;
}



/* Entry: 10b2e441c; end: 10b2e4427;  */

void FUN_10b2e441c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd3b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2e4428; end: 10b2e444b;  */

undefined8 * FUN_10b2e4428(undefined8 *param_1)

{
  func_0x00010b4796f0(*param_1);
  return param_1;
}



/* Entry: 10b2e444c; end: 10b2e4607;  */

void FUN_10b2e444c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2e4608; end: 10b2e4683;  */

void FUN_10b2e4608(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if ((6 < uVar1) &&
     (lVar2 = param_2,
     __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKc
               (param_2,0,7,&UNK_10f743bb8), (int)lVar2 == 0)) {
    func_0x000107c60c98(param_1,param_2,7,0xffffffffffffffff,&stack0xffffffffffffffef);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2);
  return;
}



/* Entry: 10b2e4684; end: 10b2e4727;  */

void FUN_10b2e4684(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_2;
  func_0x00010b4797e0();
  uVar2 = param_2;
  func_0x00010b4797e8(param_2);
  func_0x000107c278b8(&uStack_58,uVar2);
  uVar2 = param_2;
  func_0x00010b479800();
  uVar3 = param_2;
  func_0x00010b479808();
  func_0x00010b479810();
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = uStack_50;
  *(undefined8 *)(param_1 + 2) = uStack_58;
  *(undefined8 *)(param_1 + 6) = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[8] = (int)uVar2;
  *(char *)(param_1 + 9) = (char)uVar3;
  param_1[10] = (int)param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  return;
}



/* Entry: 10b2e4728; end: 10b2e4783;  */

void FUN_10b2e4728(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNKSt3__16locale9use_facetERNS0_2idE_110346100)
            (param_1,PTR___ZNSt3__18numpunctIcE2idE_1103468f8);
  return;
}



/* Entry: 10b2e4784; end: 10b2e47eb;  */

long FUN_10b2e4784(long param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm(0x48);
  FUN_10b2e4894();
  func_0x00010530126c(lVar1 + 0x20,param_1 + 0x20);
  return lVar1;
}



/* Entry: 10b2e47ec; end: 10b2e483b;  */

void FUN_10b2e47ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x48;
  ___cxa_allocate_exception(0x48);
  FUN_10b2e4890();
  uVar2 = uVar1;
  ___cxa_throw(uVar1,&PTR_DAT_110cd3da0,0x10b2e4780);
  ___cxa_free_exception(uVar1);
  __Unwind_Resume(uVar2);
  FUN_10b2e490c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e483c; end: 10b2e484f;  */

void FUN_10b2e483c(void)

{
  FUN_10b2e490c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e4850; end: 10b2e487b;  */

long FUN_10b2e4850(long param_1)

{
  func_0x0001053010fc(param_1 + 0x18);
  __ZNSt8bad_castD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 10b2e487c; end: 10b2e488f;  */

void FUN_10b2e487c(void)

{
  __ZNSt8bad_castD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e4890; end: 10b2e4893;  */

undefined8 * FUN_10b2e4890(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  param_1[1] = &PTR_DAT_110cd3e70;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar1;
  func_0x000105301370(param_1 + 4,param_2 + 0x20);
  *param_1 = &PTR_FUN_110cd3df8;
  param_1[1] = &PTR_FUN_110cd3e28;
  param_1[4] = &PTR_DAT_110cd3e50;
  return param_1;
}



/* Entry: 10b2e4894; end: 10b2e490b;  */

undefined8 * FUN_10b2e4894(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  param_1[1] = &PTR_DAT_110cd3e70;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar1;
  func_0x000105301370(param_1 + 4,param_2 + 0x20);
  *param_1 = &PTR_FUN_110cd3df8;
  param_1[1] = &PTR_FUN_110cd3e28;
  param_1[4] = &PTR_DAT_110cd3e50;
  return param_1;
}


