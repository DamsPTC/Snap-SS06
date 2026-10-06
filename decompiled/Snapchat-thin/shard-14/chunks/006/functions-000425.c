/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5556d0; end: 10b5556fb;  */

undefined8 FUN_10b5556d0(undefined8 param_1)

{
  func_0x00010b556650();
  FUN_10b5556fc(param_1);
  return param_1;
}



/* Entry: 10b5556fc; end: 10b55575b;  */

long FUN_10b5556fc(long param_1)

{
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  func_0x000107c30258(param_1 + 0x88);
  func_0x000107c30258(param_1 + 0x90);
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b5552f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b5541d8();
  }
  __ZdlPv();
  FUN_10b555f38(param_1 + 0x60);
  FUN_10b555f64(param_1 + 0x48);
  FUN_10b555f90(param_1 + 0x30);
  func_0x000108c6ef48(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b55575c; end: 10b55575f;  */

undefined8 FUN_10b55575c(undefined8 param_1)

{
  func_0x00010b556650();
  FUN_10b5556fc(param_1);
  return param_1;
}



/* Entry: 10b555760; end: 10b555773;  */

void FUN_10b555760(void)

{
  FUN_10b5556d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b555774; end: 10b55577f;  */

undefined ** FUN_10b555774(void)

{
  return &PTR_DAT_110d063f8;
}



/* Entry: 10b555780; end: 10b55583f;  */

void FUN_10b555780(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000108c6f45c(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    func_0x0001053936e4(param_1 + 0x60);
  }
  func_0x000107c3025c(param_1 + 0x78);
  func_0x000107c3025c(param_1 + 0x80);
  func_0x000107c3025c(param_1 + 0x88);
  func_0x000107c3025c(param_1 + 0x90);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b555380(*(undefined8 *)(param_1 + 0x98));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b55426c(*(undefined8 *)(param_1 + 0xa0));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b555840; end: 10b555d13;  */

long * FUN_10b555840(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  int iVar8;
  long unaff_x22;
  int iVar9;
  
  plVar2 = param_1;
  plVar5 = param_2;
  plVar7 = param_3;
  func_0x00010b5566c8(param_1[0xf]);
  if ((long)plVar5 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b555884;
  }
  else if ((int)plVar5 != 0) {
LAB_10b555884:
    func_0x00010b556670();
    plVar2 = param_3;
    func_0x00010b55663c(param_3,1);
    param_2 = plVar2;
  }
  plVar5 = (long *)(ulong)*(uint *)(param_1 + 0x15);
  if (*(uint *)(param_1 + 0x15) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c();
    plVar7 = param_2;
    param_2 = plVar2;
  }
  lVar6 = param_1[4];
  while ((int)lVar6 != 0) {
    func_0x00010b556534();
    plVar7 = (long *)(ulong)*(uint *)(plVar5 + 4);
    plVar2 = (long *)0x3;
    func_0x00010b556550();
    func_0x00010b556764();
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0xac) != 0) {
    func_0x00010b556684();
    plVar3 = (long *)0x20;
    func_0x000107c280a8();
    func_0x00010b556704();
    plVar5 = plVar2;
    param_2 = plVar3;
  }
  func_0x00010b5566c8(param_1[0x10]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    uVar4 = uRam0000000000000000;
    if (lRam0000000000000008 != 0) goto LAB_10b55592c;
  }
  else if ((int)plVar5 != 0) {
    uVar4 = 0;
LAB_10b55592c:
    func_0x00010b556670(uVar4);
    plVar5 = (long *)0x5;
    plVar3 = param_3;
    func_0x00010b55663c();
    param_2 = plVar3;
  }
  func_0x00010b5566c8(param_1[0x11]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    uVar4 = uRam0000000000000000;
    if (lRam0000000000000008 != 0) goto LAB_10b55596c;
  }
  else if ((int)plVar5 != 0) {
    uVar4 = 0;
LAB_10b55596c:
    func_0x00010b556670(uVar4);
    plVar5 = (long *)0x6;
    plVar3 = param_3;
    func_0x00010b55663c();
    param_2 = plVar3;
  }
  lVar6 = param_1[7];
  while ((int)lVar6 != 0) {
    func_0x00010b556534();
    plVar7 = (long *)(ulong)*(uint *)((long)plVar5 + 0x14);
    plVar3 = (long *)0x7;
    func_0x00010b556550();
    func_0x00010b556764();
  }
  lVar6 = param_1[10];
  while ((int)lVar6 != 0) {
    func_0x00010b556534();
    plVar7 = (long *)(ulong)*(uint *)((long)plVar5 + 0x14);
    plVar3 = (long *)0x8;
    func_0x00010b556550();
    func_0x00010b556764();
  }
  lVar6 = param_1[0xd];
  while ((int)lVar6 != 0) {
    func_0x00010b556534();
    plVar7 = (long *)(ulong)*(uint *)((long)plVar5 + 0x14);
    plVar3 = (long *)0x9;
    func_0x00010b556550();
    func_0x00010b556764();
  }
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x16);
  if (*(uint *)(param_1 + 0x16) != 0) {
    plVar3 = param_3;
    func_0x0001089f53f0();
    plVar7 = param_2;
    param_2 = plVar3;
  }
  plVar5 = plVar3;
  if (*(char *)((long)param_1 + 0xb4) == '\x01') {
    func_0x00010b556684();
    plVar5 = (long *)0x58;
    func_0x000107c280a8();
    func_0x00010b556620();
    plVar2 = plVar3;
    param_2 = plVar5;
  }
  func_0x00010b5566c8(param_1[0x12]);
  if ((long)plVar2 < 0) {
    uVar4 = uRam0000000000000000;
    if (lRam0000000000000008 == 0) goto LAB_10b555a8c;
  }
  else {
    if ((int)plVar2 == 0) goto LAB_10b555a8c;
    uVar4 = 0;
  }
  func_0x00010b556670(uVar4);
  plVar5 = param_3;
  func_0x00010b55663c(param_3,0xc);
  param_2 = plVar5;
LAB_10b555a8c:
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[0x13] + 0x14);
    plVar5 = (long *)0xd;
    func_0x00010b556550();
    param_2 = plVar5;
  }
  if ((int)param_1[0x17] != 0) {
    func_0x00010b556684();
    param_2 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar5);
    func_0x00010b556704();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[0x14] + 0x14);
    param_2 = (long *)0xf;
    func_0x00010b556550();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b556690();
    if ((long)plVar7 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
      plVar7 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar7) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)plVar7;
        plVar7 = (long *)(ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar6 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar6,(ulong)plVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar7);
  }
  return param_2;
}



/* Entry: 10b555d14; end: 10b555d17;  */

void FUN_10b555d14(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b5565b8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010b556788();
  }
  func_0x000108c6cd6c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10b555ec0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  func_0x00010b555ed0(unaff_x21 + 0x48,unaff_x20 + 0x48);
  puVar2 = (ulong *)(unaff_x21 + 0x60);
  lVar3 = unaff_x20 + 0x60;
  func_0x00010b555ee0();
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x78));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x78);
    func_0x000107c30248();
  }
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x80));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x80);
    func_0x000107c30248();
  }
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x88));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x88);
    func_0x000107c30248();
  }
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x90));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x90);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b556424();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        FUN_10b5554d0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b5564ac();
        *(ulong **)(unaff_x21 + 0xa0) = puVar5;
        puVar2 = puVar5;
      }
      else {
        func_0x00010b5541b0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0xa8) = *(int *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(unaff_x20 + 0xac) != 0) {
    *(int *)(unaff_x21 + 0xac) = *(int *)(unaff_x20 + 0xac);
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0xb0) = *(int *)(unaff_x20 + 0xb0);
  }
  if (*(char *)(unaff_x20 + 0xb4) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(unaff_x20 + 0xb8) != 0) {
    *(int *)(unaff_x21 + 0xb8) = *(int *)(unaff_x20 + 0xb8);
  }
  func_0x00010b556604();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010b556568();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b555d18; end: 10b555ebf;  */

void FUN_10b555d18(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b5565b8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010b556788();
  }
  func_0x000108c6cd6c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10b555ec0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  func_0x00010b555ed0(unaff_x21 + 0x48,unaff_x20 + 0x48);
  puVar2 = (ulong *)(unaff_x21 + 0x60);
  lVar3 = unaff_x20 + 0x60;
  func_0x00010b555ee0();
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x78));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x78);
    func_0x000107c30248();
  }
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x80));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x80);
    func_0x000107c30248();
  }
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x88));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x88);
    func_0x000107c30248();
  }
  func_0x00010b5566e0(*(undefined8 *)(unaff_x20 + 0x90));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5566d4();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x90);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b556424();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        FUN_10b5554d0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b5564ac();
        *(ulong **)(unaff_x21 + 0xa0) = puVar5;
        puVar2 = puVar5;
      }
      else {
        func_0x00010b5541b0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0xa8) = *(int *)(unaff_x20 + 0xa8);
  }
  if (*(int *)(unaff_x20 + 0xac) != 0) {
    *(int *)(unaff_x21 + 0xac) = *(int *)(unaff_x20 + 0xac);
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0xb0) = *(int *)(unaff_x20 + 0xb0);
  }
  if (*(char *)(unaff_x20 + 0xb4) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(unaff_x20 + 0xb8) != 0) {
    *(int *)(unaff_x21 + 0xb8) = *(int *)(unaff_x20 + 0xb8);
  }
  func_0x00010b556604();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010b556568();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b555ec0; end: 10b555f37;  */

void FUN_10b555ec0(long *param_1,long param_2)

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
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
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
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b555f38; end: 10b555f63;  */

long * FUN_10b555f38(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b55673c();
  }
  return param_1;
}



/* Entry: 10b555f64; end: 10b555f8f;  */

long * FUN_10b555f64(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b55673c();
  }
  return param_1;
}



/* Entry: 10b555f90; end: 10b555fbb;  */

long * FUN_10b555f90(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b55673c();
  }
  return param_1;
}



/* Entry: 10b555fbc; end: 10b55624b;  */

long FUN_10b555fbc(long param_1)

{
  FUN_10b555f38(param_1 + 0x50);
  FUN_10b555f64(param_1 + 0x38);
  FUN_10b555f90(param_1 + 0x20);
  func_0x000108c6ef48(param_1 + 8);
  return param_1;
}



/* Entry: 10b55624c; end: 10b5563b3;  */

undefined8 * FUN_10b55624c(undefined8 *param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b556794();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b556668();
  }
  else {
    func_0x00010b5565dc();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110d05ee0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5565e8();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c2809c();
  param_1[2] = lVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b5563b4; end: 10b556423;  */

undefined8 * FUN_10b5563b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b556660();
  }
  else {
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110d05e90;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010b5543bc();
  return puVar1;
}



/* Entry: 10b556424; end: 10b5564ab;  */

undefined8 * FUN_10b556424(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b556794();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b556660();
  }
  else {
    func_0x00010b55655c();
  }
  puVar2 = param_1 + 1;
  *puVar2 = unaff_x19;
  *param_1 = &PTR_FUN_110d05fd0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5565e8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b556728();
  }
  param_1[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x000108c6f470();
  }
  param_1[4] = unaff_x19;
  return param_1;
}



/* Entry: 10b5564ac; end: 10b5564ef;  */

undefined8 * FUN_10b5564ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110d05dc8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b5541b0();
  return puVar1;
}



/* Entry: 10b5564f0; end: 10b55679f;  */

void FUN_10b5564f0(void)

{
  return;
}



/* Entry: 10b5567a0; end: 10b5567c7;  */

long FUN_10b5567a0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5567c8; end: 10b5567cb;  */

long FUN_10b5567c8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5567cc; end: 10b5567df;  */

void FUN_10b5567cc(void)

{
  FUN_10b5567a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5567e0; end: 10b556807;  */

undefined ** FUN_10b5567e0(void)

{
  return &PTR_DAT_110d065d0;
}



/* Entry: 10b556808; end: 10b5568f3;  */

long * FUN_10b556808(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if (param_1[2] != 0) {
    plVar2 = param_1;
    FUN_10b556dfc();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b556e08();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[3] != 0) {
    FUN_10b556dfc();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b556e08();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[4] != 0) {
    FUN_10b556dfc();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b556e08();
    param_2 = plVar1;
  }
  if (param_1[5] != 0) {
    FUN_10b556dfc();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b556e08();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b5568f4; end: 10b5569db;  */

ulong FUN_10b5568f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x30) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5569dc; end: 10b556a43;  */

undefined8 * FUN_10b5569dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d06590;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b556d0c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b556a44; end: 10b556a73;  */

long FUN_10b556a44(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b556d38(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b556a74; end: 10b556a77;  */

long FUN_10b556a74(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b556d38(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b556a78; end: 10b556a8b;  */

void FUN_10b556a78(void)

{
  FUN_10b556a44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b556a8c; end: 10b556a97;  */

undefined ** FUN_10b556a8c(void)

{
  return &PTR_DAT_110d06650;
}



/* Entry: 10b556a98; end: 10b556ae3;  */

void FUN_10b556a98(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b556ae4; end: 10b556bc7;  */

long * FUN_10b556ae4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar2 = param_1;
    FUN_10b556dfc();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar3 = 8;
    func_0x000107c280a8(8,lVar2);
    func_0x000107c280b8(param_2,uVar3);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar4 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x30),param_2,param_3);
    param_2 = plVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar2,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b556bc8; end: 10b556c63;  */

long FUN_10b556bc8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b556c64();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b556c64; end: 10b556c8f;  */

long FUN_10b556c64(long param_1)

{
  FUN_10b5568f4();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b556c90; end: 10b556c93;  */

void FUN_10b556c90(long param_1,long param_2)

{
  FUN_10b556cec(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b556c94; end: 10b556ceb;  */

void FUN_10b556c94(long param_1,long param_2)

{
  FUN_10b556cec(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b556cec; end: 10b556d0b;  */

void FUN_10b556cec(long *param_1,long param_2)

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
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
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
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b556d0c; end: 10b556d37;  */

undefined8 * FUN_10b556d0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b556cec(param_1,param_3);
  return param_1;
}



/* Entry: 10b556d38; end: 10b556d67;  */

long * FUN_10b556d38(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b556d68; end: 10b556dfb;  */

void FUN_10b556d68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110d06540;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b556dfc; end: 10b556e27;  */

ulong * FUN_10b556dfc(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b556e28; end: 10b55707b;  */

void FUN_10b556e28(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x00010b558148(*(undefined4 *)(param_1 + 0x1c));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b556e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bd9db)[extraout_x8] * 4 + 0x10b556e5c))();
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b55707c; end: 10b5570ab;  */

long FUN_10b55707c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5570ac(param_1);
  return param_1;
}



/* Entry: 10b5570ac; end: 10b5570bf;  */

void FUN_10b5570ac(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010b558148(*(undefined4 *)(param_1 + 0x1c));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b556e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bd9db)[extraout_x8] * 4 + 0x10b556e5c))();
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b5570c0; end: 10b5570d3;  */

void FUN_10b5570c0(void)

{
  FUN_10b55707c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5570d4; end: 10b5570df;  */

undefined ** FUN_10b5570d4(void)

{
  return &PTR_DAT_110d06790;
}



/* Entry: 10b5570e0; end: 10b55736f;  */

void FUN_10b5570e0(long param_1)

{
  ulong *puVar1;
  
  FUN_10b556e28();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b557370; end: 10b557373;  */

void FUN_10b557370(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_10b557694;
  iVar3 = *(int *)(param_1 + 0x1c);
  lVar4 = param_1;
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b556e28();
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  switch(iVar2) {
  case 1:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b553aec();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557c44();
    break;
  case 2:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b555d18();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557c80();
    break;
  case 3:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b561214();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557cbc();
    break;
  default:
    goto LAB_10b557694;
  case 5:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b5b5a30();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b50fb3c();
    break;
  case 6:
    if (iVar3 != iVar2) {
      *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
    }
    puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 6) {
      puVar1 = &DAT_11383d918;
    }
    func_0x000107c30248(param_1 + 0x10,puVar1,uVar5);
    goto LAB_10b557694;
  case 7:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b559fb8();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557cec();
    break;
  case 8:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b558960();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557d1c();
    break;
  case 9:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b5535a4();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557d58();
    break;
  case 10:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b553ec8();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557d94();
    break;
  case 0xb:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b552fd0();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557dc4();
    break;
  case 0xc:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      func_0x00010b558c88();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557df4();
    break;
  case 0xd:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      func_0x00010b553fa4();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557e24();
    break;
  case 0xe:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      func_0x00010b5626e4();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557e54();
    break;
  case 0xf:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b561eac();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557e84();
  }
  *(long *)(param_1 + 0x10) = lVar4;
LAB_10b557694:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b557374; end: 10b5576b7;  */

void FUN_10b557374(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_10b557694;
  iVar3 = *(int *)(param_1 + 0x1c);
  lVar4 = param_1;
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b556e28();
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  switch(iVar2) {
  case 1:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b553aec();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557c44();
    break;
  case 2:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b555d18();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557c80();
    break;
  case 3:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b561214();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557cbc();
    break;
  default:
    goto LAB_10b557694;
  case 5:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b5b5a30();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b50fb3c();
    break;
  case 6:
    if (iVar3 != iVar2) {
      *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
    }
    puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 6) {
      puVar1 = &DAT_11383d918;
    }
    func_0x000107c30248(param_1 + 0x10,puVar1,uVar5);
    goto LAB_10b557694;
  case 7:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b559fb8();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557cec();
    break;
  case 8:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b558960();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557d1c();
    break;
  case 9:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b5535a4();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557d58();
    break;
  case 10:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b553ec8();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557d94();
    break;
  case 0xb:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b552fd0();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557dc4();
    break;
  case 0xc:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      func_0x00010b558c88();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557df4();
    break;
  case 0xd:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      func_0x00010b553fa4();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557e24();
    break;
  case 0xe:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      func_0x00010b5626e4();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557e54();
    break;
  case 0xf:
    if (iVar3 == iVar2) {
      FUN_10b55804c();
      FUN_10b561eac();
      goto LAB_10b557694;
    }
    func_0x00010b5580a4();
    func_0x00010b557e84();
  }
  *(long *)(param_1 + 0x10) = lVar4;
LAB_10b557694:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5576b8; end: 10b55776b;  */

undefined8 * FUN_10b5576b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d06750;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b558134();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b557eb4(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b557ef0(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b55801c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 10b55776c; end: 10b55779b;  */

long FUN_10b55776c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55779c(param_1);
  return param_1;
}



/* Entry: 10b55779c; end: 10b5577eb;  */

void FUN_10b55779c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b550d90();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b55707c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5581cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5577ec; end: 10b5577ef;  */

long FUN_10b5577ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55779c(param_1);
  return param_1;
}



/* Entry: 10b5577f0; end: 10b557803;  */

void FUN_10b5577f0(void)

{
  FUN_10b55776c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b557804; end: 10b55780f;  */

undefined ** FUN_10b557804(void)

{
  return &PTR_DAT_110d067f0;
}



/* Entry: 10b557810; end: 10b557887;  */

void FUN_10b557810(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b550e38(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5570e0(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b55823c(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b557888; end: 10b557a27;  */

long * FUN_10b557888(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_2 = param_3;
    func_0x000107c280a0(param_3,1);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b55811c(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b55811c(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b55811c(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
    uVar2 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar3 = uVar4 + 8;
  }
  if ((long)(int)uVar2 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar2);
  }
  while( true ) {
    iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar5 = (int)uVar2;
    uVar2 = (ulong)(uint)(iVar5 - iVar6);
    if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
    func_0x00010b4d5738();
    lVar3 = (long)param_2 + (long)iVar6;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar5);
}



/* Entry: 10b557a28; end: 10b557a7b;  */

long FUN_10b557a28(long param_1)

{
  long extraout_x8;
  
  func_0x00010b551048();
  func_0x00010b55805c();
  return param_1 + extraout_x8;
}



/* Entry: 10b557a7c; end: 10b557a7f;  */

void FUN_10b557a7c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        func_0x00010b557eb4(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_10b551198();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        FUN_10b557ef0(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b557374();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_10b55801c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b558380();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b557a80; end: 10b557b9f;  */

void FUN_10b557a80(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        func_0x00010b557eb4(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_10b551198();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        FUN_10b557ef0(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b557374();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_10b55801c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b558380();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b557ba0; end: 10b557baf;  */

void FUN_10b557ba0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b5580f4();
  }
  else {
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_DAT_110d06700;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b557bb0; end: 10b557eef;  */

void FUN_10b557bb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5580f4();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_110d06700;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b557ef0; end: 10b55801b;  */

undefined8 * FUN_10b557ef0(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5580f4();
  }
  else {
    func_0x00010b558080();
  }
  puVar2 = puVar1 + 1;
  *puVar2 = param_1;
  *puVar1 = &PTR_DAT_110d06700;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b558134();
  }
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  func_0x00010b558148();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b557f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5bda17)[extraout_x8] * 4 + 0x10b557f64))();
    return puVar2;
  }
  return puVar1;
}



/* Entry: 10b55801c; end: 10b55804b;  */

undefined8 * FUN_10b55801c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  func_0x00010b558098();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5580f4();
  }
  else {
    func_0x00010b558080();
  }
  func_0x00010b55808c();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d06888;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b558460(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b55804c; end: 10b558153;  */

undefined8 FUN_10b55804c(void)

{
  long unaff_x21;
  
  return *(undefined8 *)(unaff_x21 + 0x10);
}



/* Entry: 10b558154; end: 10b5581cb;  */

undefined8 * FUN_10b558154(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d06888;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b558460(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b5581cc; end: 10b5581fb;  */

long FUN_10b5581cc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5581fc(param_1);
  return param_1;
}



/* Entry: 10b5581fc; end: 10b558217;  */

void FUN_10b5581fc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b556a44();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b558218; end: 10b55821b;  */

long FUN_10b558218(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5581fc(param_1);
  return param_1;
}



/* Entry: 10b55821c; end: 10b55822f;  */

void FUN_10b55821c(void)

{
  FUN_10b5581cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b558230; end: 10b55823b;  */

undefined ** FUN_10b558230(void)

{
  return &PTR_DAT_110d068c8;
}



/* Entry: 10b55823c; end: 10b55834f;  */

void FUN_10b55823c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b556a98(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b558350; end: 10b55837b;  */

long FUN_10b558350(long param_1)

{
  FUN_10b556bc8();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b55837c; end: 10b55837f;  */

void FUN_10b55837c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00010b558460(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b556c94(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b558380; end: 10b558413;  */

void FUN_10b558380(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00010b558460(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b556c94(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b558414; end: 10b55841b;  */

void FUN_10b558414(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110d06888;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b55841c; end: 10b5584a3;  */

void FUN_10b55841c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d06888;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5584a4; end: 10b5584ab;  */

void FUN_10b5584a4(void)

{
  return;
}



/* Entry: 10b5584ac; end: 10b558533;  */

void FUN_10b5584ac(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x30) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b558508;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b5521b8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 3) goto LAB_10b558508;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b558508;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b551cb4();
    }
  }
  __ZdlPv();
LAB_10b558508:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10b558534; end: 10b55860f;  */

undefined8 * FUN_10b558534(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d06958;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 0x30);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b558b48(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b558b84(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  iVar2 = *(int *)(param_1 + 6);
  if (iVar2 == 5) {
    func_0x00010b558bfc(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 1) {
        return param_1;
      }
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
      return param_1;
    }
    func_0x00010b558bc0(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 10b558610; end: 10b558643;  */

long FUN_10b558610(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b558644(param_1);
  return param_1;
}



/* Entry: 10b558644; end: 10b558693;  */

void FUN_10b558644(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b576630();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b576354();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b558508;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b5521b8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 3) goto LAB_10b558508;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b558508;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b551cb4();
    }
  }
  __ZdlPv();
LAB_10b558508:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10b558694; end: 10b558697;  */

long FUN_10b558694(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b558644(param_1);
  return param_1;
}



/* Entry: 10b558698; end: 10b5586ab;  */

void FUN_10b558698(void)

{
  FUN_10b558610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5586ac; end: 10b5586b7;  */

undefined ** FUN_10b5586ac(void)

{
  return &PTR_DAT_110d06998;
}



/* Entry: 10b5586b8; end: 10b558717;  */

void FUN_10b5586b8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b576688(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5763ec(*(undefined8 *)(param_1 + 0x20));
    }
  }
  FUN_10b5584ac(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b558718; end: 10b558913;  */

long * FUN_10b558718(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    if (*(int *)(param_1 + 0x30) == 1) {
      param_2 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    }
    else {
      param_2 = (long *)0x0;
    }
    uVar3 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280a8(param_2,uVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b558c60(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x54));
  }
  if (*(int *)(param_1 + 0x30) == 3) {
    param_2 = (long *)0x3;
    func_0x00010b558c60(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b558c60(4,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
  }
  if (*(int *)(param_1 + 0x30) == 5) {
    param_2 = (long *)0x5;
    func_0x00010b558c60(5,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x28));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b558914; end: 10b55895b;  */

void FUN_10b558914(void)

{
  FUN_10b576818();
  FUN_10b558c38();
  return;
}



/* Entry: 10b55895c; end: 10b55895f;  */

void FUN_10b55895c(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar5 = uVar6;
        func_0x00010b558b48(uVar6,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
      }
      else {
        FUN_10b576904();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar5 = uVar6;
        func_0x00010b558b84(uVar6,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar5;
      }
      else {
        func_0x00010b576320();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 == 0) goto LAB_10b558ab4;
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_10b5584ac(param_1);
    }
    *(int *)(param_1 + 0x30) = iVar3;
  }
  if (iVar3 == 5) {
    if (iVar4 == 5) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 5) {
        ppuVar1 = &PTR_PTR_1133944c0;
      }
      FUN_10b5523a8(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_10b558ab4;
    }
    func_0x00010b558bfc(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 == 1) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      }
      goto LAB_10b558ab4;
    }
    if (iVar4 == 3) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 3) {
        ppuVar1 = &PTR_PTR_1133943f0;
      }
      FUN_10b551f08(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_10b558ab4;
    }
    func_0x00010b558bc0(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar6;
LAB_10b558ab4:
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b558960; end: 10b558aef;  */

void FUN_10b558960(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar5 = uVar6;
        func_0x00010b558b48(uVar6,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
      }
      else {
        FUN_10b576904();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar5 = uVar6;
        func_0x00010b558b84(uVar6,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar5;
      }
      else {
        func_0x00010b576320();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 == 0) goto LAB_10b558ab4;
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_10b5584ac(param_1);
    }
    *(int *)(param_1 + 0x30) = iVar3;
  }
  if (iVar3 == 5) {
    if (iVar4 == 5) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 5) {
        ppuVar1 = &PTR_PTR_1133944c0;
      }
      FUN_10b5523a8(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_10b558ab4;
    }
    func_0x00010b558bfc(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 == 1) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      }
      goto LAB_10b558ab4;
    }
    if (iVar4 == 3) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 3) {
        ppuVar1 = &PTR_PTR_1133943f0;
      }
      FUN_10b551f08(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_10b558ab4;
    }
    func_0x00010b558bc0(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar6;
LAB_10b558ab4:
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b558af0; end: 10b558af7;  */

void FUN_10b558af0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110d06958;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b558af8; end: 10b558c37;  */

void FUN_10b558af8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110d06958;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b558c38; end: 10b558caf;  */

long FUN_10b558c38(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b558cb0; end: 10b558cd7;  */

long FUN_10b558cb0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b558cd8; end: 10b558d1f;  */

undefined8 * FUN_10b558cd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d06a18;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b558c88(param_1,param_3);
  return param_1;
}



/* Entry: 10b558d20; end: 10b558d23;  */

long FUN_10b558d20(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b558d24; end: 10b558d37;  */

void FUN_10b558d24(void)

{
  FUN_10b558cb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b558d38; end: 10b558d57;  */

undefined ** FUN_10b558d38(void)

{
  return &PTR_DAT_110d06a58;
}



/* Entry: 10b558d58; end: 10b558def;  */

long * FUN_10b558d58(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b558df0; end: 10b558e47;  */

long FUN_10b558df0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}


