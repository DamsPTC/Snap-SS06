/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100410a08; end: 100410c4f;  */

void FUN_100410a08(void)

{
  pcRam00000001137ed678 = FUN_100410d58;
  puRam00000001137ed680 = &UNK_10ae365a4;
  pcRam00000001137ed688 = FUN_100410d70;
  puRam00000001137ed690 = &UNK_10ae3eb68;
  puRam00000001137ed698 = &UNK_10ae3ec70;
  puRam00000001137ed6a0 = &UNK_10ae36638;
  puRam00000001137ed6a8 = &UNK_10ae36c24;
  puRam00000001137ed6b0 = &UNK_10ae37904;
  puRam00000001137ed6b8 = &UNK_10ae37cc4;
  puRam00000001137ed6c0 = &UNK_10ae37cd4;
  puRam00000001137ed6d0 = &UNK_10ae38834;
  puRam00000001137ed6d8 = &UNK_10ae38274;
  puRam00000001137ed6e0 = &UNK_10ae3843c;
  pcRam00000001137ed6e8 = FUN_1004117f4;
  pcRam00000001137ed6f0 = FUN_1004114a4;
  uRam00000001137ed6f8 = 0x100414a00;
  pcRam00000001137ed700 = FUN_1004111d8;
  puRam00000001137ed708 = &UNK_10ae3ee74;
  puRam00000001137ed710 = &UNK_10ae3eed0;
  puRam00000001137ed718 = &UNK_10ae377bc;
  puRam00000001137ed720 = &UNK_10ae377d4;
  puRam00000001137ed728 = &UNK_10ae3eee8;
  return;
}



/* Entry: 100410c50; end: 100410d57;  */

long * FUN_100410c50(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = 0x79;
    uVar4 = 0x114;
  }
  else {
    pcVar6 = (code *)*param_1;
    if (pcVar6 == (code *)0x0) {
      uVar3 = 0x42;
      uVar4 = 0x119;
    }
    else {
      puVar1 = (undefined8 *)0x190;
      func_0x000107c610a0();
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0x188;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[7] = 0;
        puVar1[6] = 0;
        puVar1[9] = 0;
        puVar1[8] = 0;
        puVar1[0xb] = 0;
        puVar1[10] = 0;
        puVar1[0xd] = 0;
        puVar1[0xc] = 0;
        puVar1[0xf] = 0;
        puVar1[0xe] = 0;
        puVar1[0x11] = 0;
        puVar1[0x10] = 0;
        puVar1[0x13] = 0;
        puVar1[0x12] = 0;
        puVar1[0x15] = 0;
        puVar1[0x14] = 0;
        puVar1[0x17] = 0;
        puVar1[0x16] = 0;
        puVar1[0x19] = 0;
        puVar1[0x18] = 0;
        puVar1[0x1b] = 0;
        puVar1[0x1a] = 0;
        puVar1[0x1d] = 0;
        puVar1[0x1c] = 0;
        puVar1[0x1f] = 0;
        puVar1[0x1e] = 0;
        puVar1[0x21] = 0;
        puVar1[0x20] = 0;
        puVar1[0x23] = 0;
        puVar1[0x22] = 0;
        puVar1[0x25] = 0;
        puVar1[0x24] = 0;
        puVar1[0x27] = 0;
        puVar1[0x26] = 0;
        puVar1[0x29] = 0;
        puVar1[0x28] = 0;
        puVar1[0x2b] = 0;
        puVar1[0x2a] = 0;
        puVar1[0x2d] = 0;
        puVar1[0x2c] = 0;
        plVar5 = puVar1 + 1;
        *plVar5 = (long)param_1;
        puVar1[0x2f] = 0;
        puVar1[0x2e] = 0;
        puVar1[0x31] = 0;
        puVar1[0x30] = 0;
        *(undefined4 *)(puVar1 + 0x27) = 1;
        puVar1[4] = 0;
        puVar1[3] = 0;
        puVar1[5] = 0;
        plVar2 = plVar5;
        (*pcVar6)();
        if ((int)plVar2 == 0) {
          FUN_1001e33e0(plVar5);
          return (long *)0x0;
        }
        return plVar5;
      }
      uVar3 = 0x41;
      uVar4 = 0x11f;
    }
  }
  FUN_1004d2c58(0xf,0,uVar3,&UNK_10f6c6f00,uVar4);
  return (long *)0x0;
}



/* Entry: 100410d58; end: 100410d6f;  */

undefined8 FUN_100410d58(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return 1;
}



/* Entry: 100410d70; end: 100410fc3;  */

undefined8
FUN_100410d70(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010021f414(*(undefined8 *)(param_1 + 0x138));
  lVar1 = param_2;
  FUN_100225c18(param_2,param_5);
  *(long *)(param_1 + 0x138) = lVar1;
  if (lVar1 == 0) {
    FUN_1004d2c58(0xf,0,3,&UNK_10f6c6ff6,0x62);
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000100410e20(param_1,param_2,param_3,param_4,param_5);
    if ((int)lVar1 == 0) {
      func_0x00010021f414(*(undefined8 *)(param_1 + 0x138));
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 100410fc4; end: 1004110a3;  */

long * FUN_100410fc4(long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  undefined1 auStack_7a [66];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1 + 7;
  FUN_100202834(plVar2);
  if ((*(int *)(param_3 + 0x10) == 0) &&
     (lVar5 = param_3, FUN_1004110a4(param_3,param_1 + 7), (int)lVar5 < 0)) {
    uVar4 = (int)plVar2 + 7U >> 3;
    puVar3 = auStack_7a;
    FUN_10022867c(puVar3,uVar4,param_3);
    if ((int)puVar3 != 0) {
      (**(code **)(*param_1 + 0x88))(param_1,param_2,auStack_7a,uVar4);
      goto LAB_100411038;
    }
  }
  param_2 = (undefined8 *)0x0;
  FUN_1004d2c58(0xf,0,0x65,&UNK_10f6c707a,0x21);
  param_1 = (long *)0x0;
LAB_100411038:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  func_0x000107c60e78();
  if ((param_1 != (long *)0x0) && (param_2 != (undefined8 *)0x0)) {
    iVar1 = (int)param_1[2];
    if (iVar1 == *(int *)(param_2 + 2)) {
      lVar5 = *param_1;
      FUN_100225a88(lVar5,(long)(int)param_1[1],*param_2,(long)*(int *)(param_2 + 1));
      uVar4 = -(uint)lVar5;
      if (iVar1 == 0) {
        uVar4 = (uint)lVar5;
      }
    }
    else {
      uVar4 = 0xffffffff;
      if (iVar1 == 0) {
        uVar4 = 1;
      }
    }
    return (long *)(ulong)uVar4;
  }
  uVar4 = (uint)(param_2 != (undefined8 *)0x0);
  if (param_1 != (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  return (long *)(ulong)uVar4;
}



/* Entry: 1004110a4; end: 10041111b;  */

uint FUN_1004110a4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    iVar1 = *(int *)(param_1 + 2);
    if (iVar1 == *(int *)(param_2 + 2)) {
      uVar3 = *param_1;
      FUN_100225a88(uVar3,(long)*(int *)(param_1 + 1),*param_2,(long)*(int *)(param_2 + 1));
      uVar2 = -(uint)uVar3;
      if (iVar1 == 0) {
        uVar2 = (uint)uVar3;
      }
    }
    else {
      uVar2 = 0xffffffff;
      if (iVar1 == 0) {
        uVar2 = 1;
      }
    }
    return uVar2;
  }
  uVar2 = (uint)(param_2 != (undefined8 *)0x0);
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Entry: 10041111c; end: 1004111d7;  */

undefined8 FUN_10041111c(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1 + 0x38;
  FUN_100202834();
  if (param_4 == iVar1 + 7U >> 3) {
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    if (param_4 != 0) {
      puVar3 = param_2;
      do {
        *(undefined1 *)puVar3 = *(undefined1 *)(param_3 + -1 + param_4);
        param_4 = param_4 - 1;
        puVar3 = (undefined8 *)((long)puVar3 + 1);
      } while (param_4 != 0);
    }
    FUN_100225a88(param_2,(long)*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),
                  (long)*(int *)(param_1 + 0x40));
    if ((int)param_2 < 0) {
      return 1;
    }
    uVar2 = 0x160;
  }
  else {
    uVar2 = 0x156;
  }
  FUN_1004d2c58(0xf,0,0x80,&UNK_10f6c71ed,uVar2);
  return 0;
}



/* Entry: 1004111d8; end: 10041121b;  */

void FUN_1004111d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10041111c();
  if ((int)lVar1 != 0) {
    FUN_10041121c(param_2,param_2,**(undefined8 **)(param_1 + 0x138),(long)*(int *)(param_1 + 0x40))
    ;
  }
  return;
}



/* Entry: 10041121c; end: 10041134b;  */

void FUN_10041121c(undefined8 param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  undefined1 auStack_168 [144];
  undefined1 auStack_d8 [144];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_4 < 10) && (param_4 == (long)*(int *)(param_5 + 0x20))) {
    if (param_4 < 2) {
      if (param_2 == param_3) {
        func_0x000107c2b3b4(auStack_168,param_2,param_4,auStack_d8);
        if (param_4 != 0) {
          func_0x000107c60e6c(auStack_d8,0,param_4 << 4,0x90);
        }
      }
      else {
        func_0x000107c2b3ac(auStack_168,param_2,param_4,param_3,param_4);
      }
      FUN_10022846c(param_1,param_4,auStack_168,param_4 << 1,param_5);
      if ((int)param_1 != 0) {
        if (param_4 != 0) {
          func_0x000107c60e6c(auStack_168,0,param_4 << 4,0x90);
        }
        goto LAB_100411314;
      }
    }
    else {
      FUN_1002270c0(param_1,param_2,param_3,*(undefined8 *)(param_5 + 0x18),param_5 + 0x30,param_4);
      if ((int)param_1 != 0) {
LAB_100411314:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        goto LAB_100411348;
      }
    }
  }
  func_0x000107c60ebc();
LAB_100411348:
  func_0x000107c60e78();
  puRam00000001137ed648 = &UNK_10e525c10;
  uRam00000001137ed658 = 0x200000000;
  uRam00000001137ed650 = 0x100000001;
  return;
}



/* Entry: 10041134c; end: 10041136f;  */

void FUN_10041134c(void)

{
  puRam00000001137ed648 = &UNK_10e525c10;
  uRam00000001137ed658 = 0x200000000;
  uRam00000001137ed650 = 0x100000001;
  return;
}



/* Entry: 100411370; end: 1004114a3;  */

long * FUN_100411370(long *param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    return (long *)0x1;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar6 = 0;
    puVar5 = (ulong *)*param_1;
    lVar4 = (long)(int)uVar1;
    do {
      uVar6 = *puVar5 | uVar6;
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
    if (uVar6 != 0) {
      if ((int)param_1[2] != 0) {
        *(undefined4 *)(param_1 + 2) = 0;
        plVar3 = param_1;
        func_0x000107c2b308(param_1,param_2);
        lVar4 = (long)(int)param_1[1];
        if ((int)param_1[1] == 0) {
          return plVar3;
        }
        uVar6 = 0;
        puVar5 = (ulong *)*param_1;
        do {
          uVar6 = *puVar5 | uVar6;
          lVar4 = lVar4 + -1;
          puVar5 = puVar5 + 1;
        } while (lVar4 != 0);
        if (uVar6 == 0) {
          return plVar3;
        }
        *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
        return plVar3;
      }
      uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
      puVar5 = (ulong *)*param_1;
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        bVar2 = CARRY8(*puVar5,param_2);
        *puVar5 = *puVar5 + param_2;
        param_2 = 1;
        puVar5 = puVar5 + 1;
        if (!bVar2) {
          return (long *)0x1;
        }
      }
      if (-1 < (int)uVar1) {
        plVar3 = param_1;
        FUN_100202744(param_1,uVar1 + 1);
        if ((int)plVar3 == 0) {
          return (long *)0x0;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        *(ulong *)(*param_1 + (long)(int)uVar1 * 8) = param_2;
        return (long *)0x1;
      }
      return (long *)0x1;
    }
  }
  plVar3 = param_1;
  FUN_100202744(param_1,1);
  if ((int)plVar3 == 0) {
    return (long *)0x0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(ulong *)*param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  return (long *)0x1;
}



/* Entry: 1004114a4; end: 1004114b7;  */

/* WARNING: Removing unreachable block (ram,0x0001004112a0) */

void FUN_1004114a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_168 [144];
  undefined1 auStack_d8 [144];
  long lStack_48;
  
  uVar1 = (ulong)*(int *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x138);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uVar1 < 10) && (uVar1 == (long)*(int *)(lVar2 + 0x20))) {
    if (uVar1 < 2) {
      func_0x000107c2b3b4(auStack_168,param_3,uVar1,auStack_d8);
      if (uVar1 != 0) {
        func_0x000107c60e6c(auStack_d8,0,uVar1 << 4,0x90);
      }
      FUN_10022846c(auStack_d8,param_2,uVar1,auStack_168,uVar1 << 1,lVar2);
      if ((int)param_2 != 0) {
        if (uVar1 != 0) {
          func_0x000107c60e6c(auStack_168,0,uVar1 << 4,0x90);
        }
        goto LAB_100411314;
      }
    }
    else {
      FUN_1002270c0(param_2,param_3,param_3,*(undefined8 *)(lVar2 + 0x18),lVar2 + 0x30,uVar1);
      if ((int)param_2 != 0) {
LAB_100411314:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        goto LAB_100411348;
      }
    }
  }
  func_0x000107c60ebc();
LAB_100411348:
  func_0x000107c60e78();
  puRam00000001137ed648 = &UNK_10e525c10;
  uRam00000001137ed658 = 0x200000000;
  uRam00000001137ed650 = 0x100000001;
  return;
}



/* Entry: 1004114b8; end: 100411697;  */

undefined8 FUN_1004114b8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  code *pcVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte abStack_128 [72];
  byte abStack_e0 [72];
  undefined1 auStack_98 [72];
  
  pcVar1 = *(code **)(*param_1 + 0x70);
  pcVar2 = *(code **)(*param_1 + 0x78);
  (*pcVar2)(param_1,abStack_e0,param_4);
  (*pcVar2)(param_1,abStack_128,param_3);
  lVar7 = param_1[7];
  lVar8 = param_1[8];
  pbVar3 = abStack_128;
  FUN_100411698(pbVar3,abStack_128,param_1 + 10,(long)(int)lVar8);
  FUN_100411784(abStack_128,pbVar3,lVar7,auStack_98,(long)(int)lVar8);
  (*pcVar1)(param_1,abStack_128,abStack_128,param_3);
  lVar9 = param_1[7];
  lVar7 = param_1[8];
  lVar8 = (long)(int)lVar7;
  pbVar3 = abStack_128;
  FUN_100411698(pbVar3,abStack_128,param_1 + 0x13,lVar8);
  FUN_100411784(abStack_128,pbVar3,lVar9,auStack_98,lVar8);
  if ((int)lVar7 != 0) {
    bVar4 = 0;
    lVar8 = lVar8 << 3;
    pbVar3 = abStack_128;
    pbVar6 = abStack_e0;
    do {
      bVar4 = *pbVar3 ^ *pbVar6 | bVar4;
      lVar8 = lVar8 + -1;
      pbVar3 = pbVar3 + 1;
      pbVar6 = pbVar6 + 1;
    } while (lVar8 != 0);
    if (bVar4 != 0) {
      FUN_1004d2c58(0xf,0,0x78,&UNK_10f6c6f00,0x34a);
      lVar8 = param_1[1];
      if (lVar8 != 0) {
        uVar5 = *(undefined8 *)(lVar8 + 8);
        param_2[1] = *(undefined8 *)(lVar8 + 0x10);
        *param_2 = uVar5;
        uVar10 = *(undefined8 *)(lVar8 + 0x20);
        uVar5 = *(undefined8 *)(lVar8 + 0x18);
        uVar12 = *(undefined8 *)(lVar8 + 0x30);
        uVar11 = *(undefined8 *)(lVar8 + 0x28);
        uVar14 = *(undefined8 *)(lVar8 + 0x40);
        uVar13 = *(undefined8 *)(lVar8 + 0x38);
        param_2[8] = *(undefined8 *)(lVar8 + 0x48);
        param_2[5] = uVar12;
        param_2[4] = uVar11;
        param_2[7] = uVar14;
        param_2[6] = uVar13;
        param_2[3] = uVar10;
        param_2[2] = uVar5;
        lVar8 = param_1[1];
        uVar5 = *(undefined8 *)(lVar8 + 0x50);
        param_2[10] = *(undefined8 *)(lVar8 + 0x58);
        param_2[9] = uVar5;
        uVar10 = *(undefined8 *)(lVar8 + 0x68);
        uVar5 = *(undefined8 *)(lVar8 + 0x60);
        uVar12 = *(undefined8 *)(lVar8 + 0x78);
        uVar11 = *(undefined8 *)(lVar8 + 0x70);
        uVar14 = *(undefined8 *)(lVar8 + 0x88);
        uVar13 = *(undefined8 *)(lVar8 + 0x80);
        param_2[0x11] = *(undefined8 *)(lVar8 + 0x90);
        param_2[0x10] = uVar14;
        param_2[0xf] = uVar13;
        param_2[0xe] = uVar12;
        param_2[0xd] = uVar11;
        param_2[0xc] = uVar10;
        param_2[0xb] = uVar5;
        return 0;
      }
      return 0;
    }
  }
  uVar5 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar5;
  uVar10 = param_3[3];
  uVar5 = param_3[2];
  uVar12 = param_3[5];
  uVar11 = param_3[4];
  uVar14 = param_3[7];
  uVar13 = param_3[6];
  param_2[8] = param_3[8];
  param_2[5] = uVar12;
  param_2[4] = uVar11;
  param_2[7] = uVar14;
  param_2[6] = uVar13;
  param_2[3] = uVar10;
  param_2[2] = uVar5;
  uVar13 = param_4[5];
  uVar12 = param_4[4];
  uVar11 = param_4[7];
  uVar10 = param_4[6];
  uVar5 = param_4[8];
  uVar14 = param_4[2];
  param_2[0xc] = param_4[3];
  param_2[0xb] = uVar14;
  param_2[0x11] = uVar5;
  param_2[0x10] = uVar11;
  param_2[0xf] = uVar10;
  param_2[0xe] = uVar13;
  param_2[0xd] = uVar12;
  uVar5 = *param_4;
  param_2[10] = param_4[1];
  param_2[9] = uVar5;
  return 1;
}



/* Entry: 100411698; end: 100411783;  */

ulong FUN_100411698(long *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_4 < 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        uVar1 = uVar4 + *param_2;
        uVar4 = (ulong)CARRY8(uVar4,*param_2);
        if (CARRY8(uVar1,*param_3)) {
          uVar4 = uVar4 + 1;
        }
        *param_1 = uVar1 + *param_3;
        uVar5 = param_2[1];
        uVar6 = param_3[1];
        uVar1 = uVar4 + uVar5;
        param_1[1] = uVar1 + uVar6;
        uVar7 = (ulong)CARRY8(param_3[2],param_2[2]);
        uVar2 = nzcv;
        param_1[2] = param_3[2] + param_2[2] + (ulong)CARRY8(uVar4,uVar5) +
                     (ulong)CARRY8(uVar1,uVar6);
        bVar3 = CARRY8(param_3[3],param_2[3]);
        uVar1 = param_3[3] + param_2[3];
        uVar4 = (ulong)bVar3;
        nzcv = uVar2;
        if (CARRY8(uVar1,uVar7) || CARRY8(uVar1 + uVar7,(ulong)bVar3)) {
          uVar4 = uVar4 + 1;
        }
        param_1[3] = uVar1 + uVar7 + (ulong)bVar3;
        param_2 = param_2 + 4;
        param_3 = param_3 + 4;
        param_1 = param_1 + 4;
        param_4 = param_4 - 4;
      } while (3 < param_4);
      if (param_4 == 0) {
        return uVar4;
      }
    }
    do {
      uVar1 = uVar4 + *param_2;
      uVar4 = (ulong)CARRY8(uVar4,*param_2);
      if (CARRY8(uVar1,*param_3)) {
        uVar4 = uVar4 + 1;
      }
      *param_1 = uVar1 + *param_3;
      param_4 = param_4 - 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return uVar4;
}



/* Entry: 100411784; end: 1004117f3;  */

void FUN_100411784(ulong *param_1,long param_2,undefined8 param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  
  puVar1 = param_4;
  func_0x00010022673c(param_4,param_1,param_3,param_5);
  if (param_5 != 0) {
    do {
      *param_1 = *param_4 & ~(param_2 - (long)puVar1) | *param_1 & param_2 - (long)puVar1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_1 = param_1 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 1004117f4; end: 10041180f;  */

void FUN_1004117f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_168 [144];
  undefined1 auStack_d8 [144];
  long lStack_48;
  
  uVar1 = (ulong)*(int *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x138);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uVar1 < 10) && (uVar1 == (long)*(int *)(lVar2 + 0x20))) {
    if (uVar1 < 2) {
      if (param_3 == param_4) {
        func_0x000107c2b3b4(auStack_168,param_3,uVar1,auStack_d8);
        if (uVar1 != 0) {
          func_0x000107c60e6c(auStack_d8,0,uVar1 << 4,0x90);
        }
      }
      else {
        func_0x000107c2b3ac(auStack_168,param_3,uVar1,param_4,uVar1);
      }
      FUN_10022846c(param_2,uVar1,auStack_168,uVar1 << 1,lVar2);
      if ((int)param_2 != 0) {
        if (uVar1 != 0) {
          func_0x000107c60e6c(auStack_168,0,uVar1 << 4,0x90);
        }
        goto LAB_100411314;
      }
    }
    else {
      FUN_1002270c0(param_2,param_3,param_4,*(undefined8 *)(lVar2 + 0x18),lVar2 + 0x30,uVar1);
      if ((int)param_2 != 0) {
LAB_100411314:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return;
        }
        goto LAB_100411348;
      }
    }
  }
  func_0x000107c60ebc();
LAB_100411348:
  func_0x000107c60e78();
  puRam00000001137ed648 = &UNK_10e525c10;
  uRam00000001137ed658 = 0x200000000;
  uRam00000001137ed650 = 0x100000001;
  return;
}



/* Entry: 100411810; end: 100411a5b;  */

void FUN_100411810(long param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = param_1 + 0x10;
  func_0x000100225e74(lVar4,param_3);
  if (lVar4 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar2 < 1) {
    if (uVar2 != 0) goto LAB_10041187c;
  }
  else {
    do {
      if (*(long *)(*(long *)(param_1 + 0x10) + -8 + (ulong)uVar2 * 8) != 0) {
        *(uint *)(param_1 + 0x18) = uVar2;
        goto LAB_10041187c;
      }
      uVar3 = uVar2 - 1;
      bVar1 = 0 < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
LAB_10041187c:
  func_0x00010021f414(*(undefined8 *)(param_1 + 0x30));
  lVar4 = param_1 + 0x10;
  FUN_100225c18(lVar4,0);
  *(long *)(param_1 + 0x30) = lVar4;
  if (lVar4 == 0) {
    return;
  }
  lVar4 = param_1 + 0x38;
  FUN_1004110a4(lVar4,param_3);
  *(uint *)(param_1 + 0xe4) = (uint)(0 < (int)lVar4);
  if (0 < (int)lVar4) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    puVar5 = &uStack_48;
    func_0x000100411994(puVar5,param_1 + 0x38,param_3);
    if ((int)puVar5 == 0) {
      func_0x00010021f3c8(&uStack_48);
      return;
    }
    lVar4 = param_1 + 0xe8;
    FUN_100411bf0(lVar4,(long)*(int *)(param_1 + 0x40),&uStack_48);
    func_0x00010021f3c8(&uStack_48);
    if ((int)lVar4 == 0) {
      return;
    }
  }
  lVar4 = param_1;
  FUN_100411cb8();
  *(long *)(param_1 + 8) = lVar4;
  if (lVar4 != 0) {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar6 = param_2[2];
    *(undefined8 *)(lVar4 + 0x20) = param_2[3];
    *(undefined8 *)(lVar4 + 0x18) = uVar6;
    uVar6 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    *(undefined8 *)(lVar4 + 0x30) = param_2[5];
    *(undefined8 *)(lVar4 + 0x28) = uVar6;
    *(undefined8 *)(lVar4 + 0x40) = uVar10;
    *(undefined8 *)(lVar4 + 0x38) = uVar9;
    *(undefined8 *)(lVar4 + 0x10) = uVar8;
    *(undefined8 *)(lVar4 + 8) = uVar7;
    uVar7 = param_2[0xc];
    uVar6 = param_2[0xb];
    uVar8 = param_2[0xd];
    uVar10 = param_2[0x10];
    uVar9 = param_2[0xf];
    *(undefined8 *)(lVar4 + 0x78) = param_2[0xe];
    *(undefined8 *)(lVar4 + 0x70) = uVar8;
    *(undefined8 *)(lVar4 + 0x88) = uVar10;
    *(undefined8 *)(lVar4 + 0x80) = uVar9;
    uVar8 = param_2[9];
    *(undefined8 *)(lVar4 + 0x58) = param_2[10];
    *(undefined8 *)(lVar4 + 0x50) = uVar8;
    *(undefined8 *)(lVar4 + 0x68) = uVar7;
    *(undefined8 *)(lVar4 + 0x60) = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0x140);
    uVar8 = *(undefined8 *)(param_1 + 0x158);
    uVar7 = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(lVar4 + 0x98) = uVar6;
    uVar10 = *(undefined8 *)(param_1 + 0x168);
    uVar9 = *(undefined8 *)(param_1 + 0x160);
    uVar6 = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(param_1 + 0x178);
    *(undefined8 *)(lVar4 + 200) = uVar6;
    *(undefined8 *)(lVar4 + 0xc0) = uVar10;
    *(undefined8 *)(lVar4 + 0xb8) = uVar9;
    *(undefined8 *)(lVar4 + 0x48) = param_2[8];
    *(undefined8 *)(lVar4 + 0x90) = param_2[0x11];
    *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(lVar4 + 0xb0) = uVar8;
    *(undefined8 *)(lVar4 + 0xa8) = uVar7;
    FUN_10021f0b0(param_1 + 0x130);
  }
  return;
}



/* Entry: 100411a5c; end: 100411b8b;  */

void FUN_100411a5c(ulong *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar1 = *(uint *)(param_3 + 1);
  uVar2 = *(uint *)(param_2 + 1);
  uVar11 = uVar1;
  if (((int)uVar2 < (int)uVar1) && (uVar11 = uVar2, uVar2 < uVar1)) {
    uVar6 = 0;
    lVar8 = (long)(int)uVar1 - (long)(int)uVar2;
    puVar4 = (ulong *)(*param_3 + (long)(int)uVar2 * 8);
    do {
      uVar6 = *puVar4 | uVar6;
      lVar8 = lVar8 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar8 != 0);
    if (uVar6 != 0) {
      uVar5 = 0xe8;
      goto LAB_100411b60;
    }
  }
  puVar4 = param_1;
  FUN_100202744();
  if ((int)puVar4 == 0) {
    return;
  }
  uVar6 = *param_1;
  lVar8 = (long)(int)uVar11;
  func_0x00010022673c(uVar6,*param_2,*param_3,lVar8);
  iVar3 = (int)param_2[1];
  if ((int)uVar11 < iVar3) {
    lVar7 = iVar3 - lVar8;
    plVar9 = (long *)(*param_1 + lVar8 * 8);
    puVar4 = (ulong *)(*param_2 + lVar8 * 8);
    do {
      uVar10 = *puVar4;
      *plVar9 = uVar10 - uVar6;
      uVar6 = (ulong)(uVar10 < uVar6);
      lVar7 = lVar7 + -1;
      plVar9 = plVar9 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar7 != 0);
  }
  if (uVar6 == 0) {
    *(int *)(param_1 + 1) = iVar3;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  uVar5 = 0xfb;
LAB_100411b60:
  FUN_1004d2c58(3,0,100,&UNK_10f6c6632,uVar5);
  return;
}



/* Entry: 100411b8c; end: 100411bef;  */

void FUN_100411b8c(long *param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  plVar3 = param_1;
  FUN_100411a5c();
  if ((int)plVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    if ((int)uVar4 < 1) {
      if (uVar4 != 0) {
        return;
      }
    }
    else {
      do {
        if (*(long *)(*param_1 + -8 + (ulong)uVar4 * 8) != 0) {
          *(uint *)(param_1 + 1) = uVar4;
          return;
        }
        uVar2 = uVar4 - 1;
        bVar1 = 0 < (int)uVar4;
        uVar4 = uVar2;
      } while (uVar2 != 0 && bVar1);
      *(undefined4 *)(param_1 + 1) = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 100411bf0; end: 100411cb7;  */

undefined8 FUN_100411bf0(undefined8 param_1,ulong param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if ((int)param_3[2] == 0) {
    uVar6 = (ulong)(int)param_3[1];
    lVar3 = uVar6 - param_2;
    if (param_2 <= uVar6 && lVar3 != 0) {
      uVar4 = 0;
      puVar5 = (ulong *)(*param_3 + param_2 * 8);
      do {
        uVar4 = *puVar5 | uVar4;
        lVar3 = lVar3 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
      uVar6 = param_2;
      if (uVar4 != 0) {
        uVar1 = 0x66;
        uVar2 = 0x13c;
        goto LAB_100411c20;
      }
    }
    if ((param_2 & 0x1fffffffffffffff) != 0) {
      func_0x000107c60ee4(param_1);
    }
    if ((uVar6 & 0x1fffffffffffffff) != 0) {
      func_0x000107c610b4(param_1,*param_3);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0x6d;
    uVar2 = 0x135;
LAB_100411c20:
    FUN_1004d2c58(3,0,uVar1,&UNK_10f6c66ac,uVar2);
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 100411cb8; end: 100411e13;  */

undefined8 * FUN_100411cb8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (param_1 == 0) {
    uVar6 = 0x43;
    uVar7 = 0x2aa;
  }
  else {
    puVar5 = (undefined8 *)0xe8;
    func_0x000107c610a0();
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0xe0;
      if (*(int *)(param_1 + 0x28) == 0) {
        piVar1 = (int *)(param_1 + 0x130);
        iVar8 = *piVar1;
        do {
          if (iVar8 == -1) break;
          iVar2 = *piVar1;
          if (iVar2 == iVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            bVar4 = cVar3 == '\0';
          }
          else {
            bVar4 = false;
            ClearExclusiveLocal();
          }
          iVar8 = iVar2;
        } while (!bVar4);
      }
      puVar5[1] = param_1;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0x15] = 0;
      puVar5[0x14] = 0;
      puVar5[0x17] = 0;
      puVar5[0x16] = 0;
      puVar5[0x19] = 0;
      puVar5[0x18] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1c] = 0;
      return puVar5 + 1;
    }
    uVar6 = 0x41;
    uVar7 = 0x2b0;
  }
  FUN_1004d2c58(0xf,0,uVar6,&UNK_10f6c6f00,uVar7);
  return (undefined8 *)0x0;
}



/* Entry: 100411e14; end: 100411fff;  */

long * FUN_100411e14(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long *plVar7;
  
  if (((param_1 == (undefined8 *)0x0) || (plVar7 = (long *)*param_1, plVar7 == (long *)0x0)) ||
     (lVar1 = *plVar7, lVar1 == 0)) {
    uVar4 = 0x43;
    uVar5 = 0x1f5;
  }
  else {
    lVar2 = lVar1;
    lVar3 = plVar7[1];
    if (plVar7[1] == 0) {
      FUN_100411cb8();
      plVar7[1] = lVar1;
      if (lVar1 == 0) {
        uVar4 = 0x41;
        uVar5 = 0x1fb;
        goto LAB_100411ea4;
      }
      lVar2 = *plVar7;
      lVar3 = lVar1;
    }
    FUN_100412000(lVar2,lVar3,*param_2,param_3,0);
    if ((int)lVar2 != 0) {
      pbVar6 = (byte *)*param_2;
      *(uint *)((long)plVar7 + 0x1c) = *pbVar6 & 0xfe;
      *param_2 = (long)(pbVar6 + param_3);
      return plVar7;
    }
    uVar4 = 0xf;
    uVar5 = 0x1ff;
  }
LAB_100411ea4:
  FUN_1004d2c58(0xf,0,uVar4,&UNK_10f6c5a93,uVar5);
  return (long *)0x0;
}



/* Entry: 100412000; end: 10041236b;  */

long * FUN_100412000(long *param_1,undefined8 *param_2,byte *param_3,ulong param_4,long *param_5)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
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
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  plVar2 = param_1;
  func_0x000100411ef4(param_1,*param_2);
  if ((int)plVar2 != 0) {
    uVar4 = 0x6a;
    uVar5 = 0xcc;
LAB_100412058:
    FUN_1004d2c58(0xf,0,uVar4,&UNK_10f6c70f6,uVar5);
    return (long *)0x0;
  }
  if (param_4 == 0) {
    uVar4 = 100;
    uVar5 = 0x8b;
    goto LAB_100412058;
  }
  bVar1 = *param_3;
  plVar2 = param_1 + 7;
  if (bVar1 == 4) {
    FUN_100202834();
    uVar7 = (ulong)((int)plVar2 + 7U >> 3);
    if ((uVar7 << 1 | 1) == param_4) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))(param_1,auStack_a8,param_3 + 1,uVar7);
      if (((int)plVar2 != 0) &&
         (plVar2 = param_1,
         (**(code **)(*param_1 + 0x88))(param_1,auStack_f0,param_3 + 1 + uVar7,uVar7),
         (int)plVar2 != 0)) {
        plVar2 = param_1;
        FUN_1004114b8(param_1,&uStack_180,auStack_a8,auStack_f0);
        if ((int)plVar2 != 0) {
          param_2[6] = uStack_158;
          param_2[5] = uStack_160;
          param_2[8] = uStack_148;
          param_2[7] = uStack_150;
          param_2[9] = uStack_140;
          param_2[2] = uStack_178;
          param_2[1] = uStack_180;
          param_2[4] = uStack_168;
          param_2[3] = uStack_170;
          param_2[0x12] = uStack_f8;
          param_2[0xf] = uStack_110;
          param_2[0xe] = uStack_118;
          param_2[0x11] = uStack_100;
          param_2[0x10] = uStack_108;
          param_2[0xb] = uStack_130;
          param_2[10] = uStack_138;
          param_2[0xd] = uStack_120;
          param_2[0xc] = uStack_128;
          lVar6 = param_1[0x28];
          param_2[0x14] = param_1[0x29];
          param_2[0x13] = lVar6;
          lVar9 = param_1[0x2b];
          lVar6 = param_1[0x2a];
          lVar12 = param_1[0x2d];
          lVar11 = param_1[0x2c];
          lVar16 = param_1[0x2f];
          lVar15 = param_1[0x2e];
          param_2[0x1b] = param_1[0x30];
          param_2[0x1a] = lVar16;
          param_2[0x19] = lVar15;
          param_2[0x18] = lVar12;
          param_2[0x17] = lVar11;
          param_2[0x16] = lVar9;
          param_2[0x15] = lVar6;
          return (long *)0x1;
        }
      }
    }
    else {
      FUN_1004d2c58(0xf,0,0x6d,&UNK_10f6c70f6,0x79);
    }
    lVar6 = param_1[1];
    if (lVar6 == 0) {
      param_2[9] = 0;
      param_2[6] = 0;
      param_2[5] = 0;
      param_2[8] = 0;
      param_2[7] = 0;
      param_2[2] = 0;
      param_2[1] = 0;
      param_2[4] = 0;
      param_2[3] = 0;
      param_2[0xb] = 0;
      param_2[10] = 0;
      param_2[0xd] = 0;
      param_2[0xc] = 0;
      param_2[0xf] = 0;
      param_2[0xe] = 0;
      param_2[0x11] = 0;
      param_2[0x10] = 0;
      param_2[0x12] = 0;
      param_2[0x14] = 0;
      param_2[0x13] = 0;
      param_2[0x16] = 0;
      param_2[0x15] = 0;
      param_2[0x18] = 0;
      param_2[0x17] = 0;
      param_2[0x1a] = 0;
      param_2[0x19] = 0;
      param_2[0x1b] = 0;
      return (long *)0x0;
    }
    uVar4 = *(undefined8 *)(lVar6 + 8);
    param_2[2] = *(undefined8 *)(lVar6 + 0x10);
    param_2[1] = uVar4;
    uVar5 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = *(undefined8 *)(lVar6 + 0x18);
    uVar13 = *(undefined8 *)(lVar6 + 0x30);
    uVar10 = *(undefined8 *)(lVar6 + 0x28);
    uVar17 = *(undefined8 *)(lVar6 + 0x40);
    uVar14 = *(undefined8 *)(lVar6 + 0x38);
    param_2[9] = *(undefined8 *)(lVar6 + 0x48);
    param_2[6] = uVar13;
    param_2[5] = uVar10;
    param_2[8] = uVar17;
    param_2[7] = uVar14;
    param_2[4] = uVar5;
    param_2[3] = uVar4;
    uVar13 = *(undefined8 *)(lVar6 + 0x78);
    uVar10 = *(undefined8 *)(lVar6 + 0x70);
    uVar5 = *(undefined8 *)(lVar6 + 0x88);
    uVar4 = *(undefined8 *)(lVar6 + 0x80);
    uVar17 = *(undefined8 *)(lVar6 + 0x68);
    uVar14 = *(undefined8 *)(lVar6 + 0x60);
    param_2[0x12] = *(undefined8 *)(lVar6 + 0x90);
    param_2[0xf] = uVar13;
    param_2[0xe] = uVar10;
    param_2[0x11] = uVar5;
    param_2[0x10] = uVar4;
    param_2[0xd] = uVar17;
    param_2[0xc] = uVar14;
    uVar4 = *(undefined8 *)(lVar6 + 0x50);
    param_2[0xb] = *(undefined8 *)(lVar6 + 0x58);
    param_2[10] = uVar4;
    uVar10 = *(undefined8 *)(lVar6 + 0xc0);
    uVar5 = *(undefined8 *)(lVar6 + 0xb8);
    uVar14 = *(undefined8 *)(lVar6 + 0xd0);
    uVar13 = *(undefined8 *)(lVar6 + 200);
    uVar4 = *(undefined8 *)(lVar6 + 0xd8);
    uVar17 = *(undefined8 *)(lVar6 + 0xa8);
    param_2[0x16] = *(undefined8 *)(lVar6 + 0xb0);
    param_2[0x15] = uVar17;
    param_2[0x1b] = uVar4;
    param_2[0x1a] = uVar14;
    param_2[0x19] = uVar13;
    param_2[0x18] = uVar10;
    param_2[0x17] = uVar5;
    uVar4 = *(undefined8 *)(lVar6 + 0x98);
    param_2[0x14] = *(undefined8 *)(lVar6 + 0xa0);
    param_2[0x13] = uVar4;
    return (long *)0x0;
  }
  FUN_100202834();
  uVar7 = (ulong)((int)plVar2 + 7U >> 3);
  if ((bVar1 & 0xfe) != 2 || uVar7 + 1 != param_4) {
    uVar4 = 0x6d;
    uVar5 = 0xa1;
    goto LAB_100412058;
  }
  if (param_5 == (long *)0x0) {
    FUN_100225874();
    plVar8 = plVar2;
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  else {
    plVar2 = param_5;
    plVar8 = (long *)0x0;
  }
  FUN_1002258d0(plVar2);
  plVar3 = plVar2;
  FUN_100225974();
  if (plVar3 != (long *)0x0) {
    param_3 = param_3 + 1;
    FUN_100202674(param_3,uVar7,plVar3);
    if (param_3 != (byte *)0x0) {
      lVar6 = *plVar3;
      FUN_100225a88(lVar6,(long)(int)plVar3[1],param_1[7],(long)(int)param_1[8]);
      if ((int)lVar6 < 0) {
        func_0x000107c2b48c(param_1,param_2,plVar3,bVar1 & 1,plVar2);
        goto LAB_100412324;
      }
      FUN_1004d2c58(0xf,0,0x6d,&UNK_10f6c70f6,0xb9);
    }
  }
  param_1 = (long *)0x0;
LAB_100412324:
  if ((char)plVar2[5] == '\0') {
    lVar6 = plVar2[2];
    plVar2[2] = lVar6 + -1;
    plVar2[4] = *(long *)(plVar2[1] + (lVar6 + -1) * 8);
  }
  FUN_100226a68(plVar8);
  return param_1;
}



/* Entry: 10041236c; end: 1004123f7;  */

undefined8 * FUN_10041236c(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x68;
  func_0x000107c610a0();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_1004d2c58(0xf,0,0x41,&UNK_10f6c6f79,0x5a);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar3 = puVar2 + 4;
    *puVar2 = 0x60;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[10] = 0;
    puVar2[9] = 0;
    puVar2[0xc] = 0;
    puVar2[0xb] = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(puVar2 + 2) = uVar1;
    *(undefined4 *)((long)puVar2 + 0x14) = uVar1;
    *(undefined4 *)((long)puVar2 + 0x1c) = 2;
  }
  return puVar3;
}



/* Entry: 1004123f8; end: 1004124a3;  */

void FUN_1004123f8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_1004d2c58(0xf,0,0x72,&UNK_10f6c6f79,0xf1);
  }
  else {
    FUN_10041236c();
    if (lVar1 != 0) {
      lVar2 = *param_1;
      FUN_1004124a4(lVar2,lVar1 + 0x18,param_2);
      if ((int)lVar2 == 0) {
        FUN_1004d2c58(0xf,0,0x7d,&UNK_10f6c6f79,0xfa);
        FUN_1001e33e0(lVar1);
      }
      else {
        FUN_1001e33e0(param_1[2]);
        param_1[2] = lVar1;
      }
    }
  }
  return;
}



/* Entry: 1004124a4; end: 10041270b;  */

undefined8 FUN_1004124a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100411bf0(param_2,(long)*(int *)(param_1 + 0x18));
  if (((int)uVar1 == 0) ||
     (FUN_100225a88(param_2,(long)*(int *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                    (long)*(int *)(param_1 + 0x18)), -1 < (int)param_2)) {
    FUN_1004d2c58(0xf,0,0x85,&UNK_10f6c7170,0x1c);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10041270c; end: 10041293f;  */

bool FUN_10041270c(long *param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [72];
  ulong auStack_128 [9];
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [72];
  
  pcVar1 = *(code **)(*param_1 + 0x70);
  pcVar2 = *(code **)(*param_1 + 0x78);
  (*pcVar2)(param_1,auStack_e0,param_2);
  (*pcVar2)(param_1,auStack_128,(ulong *)(param_2 + 0x90));
  (*pcVar2)(param_1,auStack_170,auStack_128);
  (*pcVar1)(param_1,auStack_1b8,auStack_170,auStack_128);
  if ((int)param_1[0x1c] == 0) {
    (*pcVar1)(param_1,auStack_128,auStack_170,param_1 + 10);
    lVar9 = param_1[7];
    lVar8 = param_1[8];
    puVar5 = auStack_e0;
    FUN_100411698(puVar5,auStack_e0,auStack_128,(long)(int)lVar8);
    FUN_100411784(auStack_e0,puVar5,lVar9,auStack_98,(long)(int)lVar8);
  }
  else {
    lVar8 = param_1[7];
    lVar9 = (long)(int)param_1[8];
    puVar4 = auStack_128;
    FUN_100411698(puVar4,auStack_170,auStack_170,lVar9);
    FUN_100411784(auStack_128,puVar4,lVar8,auStack_98,lVar9);
    puVar4 = auStack_128;
    FUN_100411698(puVar4,auStack_128,auStack_170,lVar9);
    FUN_100411784(auStack_128,puVar4,lVar8,auStack_98,lVar9);
    FUN_100412940(auStack_e0,auStack_e0,auStack_128,lVar8,auStack_98,lVar9);
  }
  (*pcVar1)(param_1,auStack_e0,auStack_e0,param_2);
  (*pcVar1)(param_1,auStack_128,param_1 + 0x13,auStack_1b8);
  lVar9 = param_1[7];
  lVar8 = param_1[8];
  puVar5 = auStack_e0;
  FUN_100411698(puVar5,auStack_e0,auStack_128,(long)(int)lVar8);
  FUN_100411784(auStack_e0,puVar5,lVar9,auStack_98,(long)(int)lVar8);
  (*pcVar2)(param_1,auStack_128,param_2 + 0x48);
  lVar9 = param_1[8];
  lVar8 = (long)(int)lVar9;
  FUN_100412940(auStack_128,auStack_128,auStack_e0,param_1[7],auStack_98,lVar8);
  if ((int)lVar9 < 1) {
    bVar3 = true;
  }
  else {
    uVar6 = 0;
    puVar4 = auStack_128;
    lVar9 = lVar8;
    do {
      uVar6 = *puVar4 | uVar6;
      lVar9 = lVar9 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar9 != 0);
    uVar7 = 0;
    puVar4 = (ulong *)(param_2 + 0x90);
    do {
      uVar7 = *puVar4 | uVar7;
      lVar8 = lVar8 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar8 != 0);
    bVar3 = uVar7 == 0 || uVar6 == 0;
  }
  return bVar3;
}



/* Entry: 100412940; end: 1004129c3;  */

void FUN_100412940(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5,long param_6)

{
  ulong *puVar1;
  
  puVar1 = param_1;
  func_0x00010022673c();
  FUN_100411698(param_5,param_1,param_4,param_6);
  if (param_6 != 0) {
    do {
      *param_1 = *param_1 & (long)puVar1 - 1U | *param_5 & -(long)puVar1;
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
      param_1 = param_1 + 1;
    } while (param_6 != 0);
  }
  return;
}



/* Entry: 1004129c4; end: 100412bb7;  */

long * FUN_1004129c4(undefined8 param_1,long param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
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
  long lStack_70;
  
  bVar3 = false;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar9 = 0x1f;
  do {
    if (bVar3) {
      FUN_10041397c(&uStack_d0,&uStack_b0,&uStack_90,&uStack_d0,&uStack_b0,&uStack_90);
    }
    pbVar1 = (byte *)(param_3 + (uVar9 >> 3));
    uVar2 = (uint)uVar9 & 7;
    FUN_100412c78((pbVar1[0x1c] >> (ulong)uVar2 & 1) << 3 | (pbVar1[0x14] >> (ulong)uVar2 & 1) << 2
                  | (pbVar1[0xc] >> (ulong)uVar2 & 1) << 1 | pbVar1[4] >> (ulong)uVar2 & 1,
                  &UNK_10e527808,&uStack_130);
    if (bVar3) {
      FUN_1004130a8(&uStack_d0,&uStack_b0,&uStack_90,&uStack_d0,&uStack_b0,&uStack_90,1,&uStack_130,
                    &uStack_110,&uStack_f0);
    }
    else {
      uStack_c8 = uStack_128;
      uStack_d0 = uStack_130;
      uStack_b8 = uStack_118;
      uStack_c0 = uStack_120;
      uStack_a8 = uStack_108;
      uStack_b0 = uStack_110;
      uStack_98 = uStack_f8;
      uStack_a0 = uStack_100;
      uStack_88 = uStack_e8;
      uStack_90 = uStack_f0;
      uStack_78 = uStack_d8;
      uStack_80 = uStack_e0;
    }
    FUN_100412c78((pbVar1[0x18] >> (ulong)uVar2 & 1) << 3 | (pbVar1[0x10] >> (ulong)uVar2 & 1) << 2
                  | (pbVar1[8] >> (ulong)uVar2 & 1) << 1 | *pbVar1 >> (ulong)uVar2 & 1,
                  &UNK_10e527448,&uStack_130);
    bVar3 = true;
    puVar6 = &uStack_90;
    FUN_1004130a8(&uStack_d0,&uStack_b0,puVar6,&uStack_d0,&uStack_b0,&uStack_90,1,&uStack_130,
                  &uStack_110,&uStack_f0);
    uVar9 = uVar9 - 1;
  } while (uVar9 < 0x20);
  FUN_100413b54(param_2,&uStack_d0);
  FUN_100413b54(param_2 + 0x48,&uStack_b0);
  plVar4 = (long *)(param_2 + 0x90);
  puVar5 = &uStack_90;
  FUN_100413b54(plVar4,puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    if (puVar6 == (undefined8 *)0x0) {
      uVar7 = 0x43;
      uVar8 = 0x430;
    }
    else {
      (**(code **)(*plVar4 + 0x40))();
      FUN_10041270c(plVar4,puVar5);
      if ((int)plVar4 != 0) {
        return (long *)0x1;
      }
      uVar7 = 0x44;
      uVar8 = 0x439;
    }
    FUN_1004d2c58(0xf,0,uVar7,&UNK_10f6c6f00,uVar8);
    return (long *)0x0;
  }
  return plVar4;
}



/* Entry: 100412bb8; end: 100412c3b;  */

undefined8 FUN_100412bb8(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0x43;
    uVar2 = 0x430;
  }
  else {
    (**(code **)(*param_1 + 0x40))();
    FUN_10041270c(param_1,param_2);
    if ((int)param_1 != 0) {
      return 1;
    }
    uVar1 = 0x44;
    uVar2 = 0x439;
  }
  FUN_1004d2c58(0xf,0,uVar1,&UNK_10f6c6f00,uVar2);
  return 0;
}



/* Entry: 100412c3c; end: 100412c77;  */

void FUN_100412c3c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar1 = -(ulong)(param_2 == 0);
  lVar2 = -(ulong)(param_2 != 0);
  uVar12 = param_4[1];
  uVar11 = *param_4;
  uVar14 = param_4[3];
  uVar13 = param_4[2];
  bVar3 = (byte)lVar2;
  bVar4 = (byte)((ulong)lVar2 >> 8);
  bVar5 = (byte)((ulong)lVar2 >> 0x10);
  bVar6 = (byte)((ulong)lVar2 >> 0x18);
  bVar7 = (byte)((ulong)lVar2 >> 0x20);
  bVar8 = (byte)((ulong)lVar2 >> 0x28);
  bVar9 = (byte)((ulong)lVar2 >> 0x30);
  bVar10 = (byte)((ulong)lVar2 >> 0x38);
  uVar24 = param_3[1];
  uVar23 = *param_3;
  uVar26 = param_3[3];
  uVar25 = param_3[2];
  bVar15 = (byte)lVar1;
  bVar16 = (byte)((ulong)lVar1 >> 8);
  bVar17 = (byte)((ulong)lVar1 >> 0x10);
  bVar18 = (byte)((ulong)lVar1 >> 0x18);
  bVar19 = (byte)((ulong)lVar1 >> 0x20);
  bVar20 = (byte)((ulong)lVar1 >> 0x28);
  bVar21 = (byte)((ulong)lVar1 >> 0x30);
  bVar22 = (byte)((ulong)lVar1 >> 0x38);
  param_1[1] = CONCAT17(bVar10 & (byte)((ulong)uVar12 >> 0x38) |
                        bVar22 & (byte)((ulong)uVar24 >> 0x38),
                        CONCAT16(bVar9 & (byte)((ulong)uVar12 >> 0x30) |
                                 bVar21 & (byte)((ulong)uVar24 >> 0x30),
                                 CONCAT15(bVar8 & (byte)((ulong)uVar12 >> 0x28) |
                                          bVar20 & (byte)((ulong)uVar24 >> 0x28),
                                          CONCAT14(bVar7 & (byte)((ulong)uVar12 >> 0x20) |
                                                   bVar19 & (byte)((ulong)uVar24 >> 0x20),
                                                   CONCAT13(bVar6 & (byte)((ulong)uVar12 >> 0x18) |
                                                            bVar18 & (byte)((ulong)uVar24 >> 0x18),
                                                            CONCAT12(bVar5 & (byte)((ulong)uVar12 >>
                                                                                   0x10) |
                                                                     bVar17 & (byte)((ulong)uVar24
                                                                                    >> 0x10),
                                                                     CONCAT11(bVar4 & (byte)((ulong)
                                                  uVar12 >> 8) | bVar16 & (byte)((ulong)uVar24 >> 8)
                                                  ,bVar3 & (byte)uVar12 | bVar15 & (byte)uVar24)))))
                                ));
  *param_1 = CONCAT17(bVar10 & (byte)((ulong)uVar11 >> 0x38) |
                      bVar22 & (byte)((ulong)uVar23 >> 0x38),
                      CONCAT16(bVar9 & (byte)((ulong)uVar11 >> 0x30) |
                               bVar21 & (byte)((ulong)uVar23 >> 0x30),
                               CONCAT15(bVar8 & (byte)((ulong)uVar11 >> 0x28) |
                                        bVar20 & (byte)((ulong)uVar23 >> 0x28),
                                        CONCAT14(bVar7 & (byte)((ulong)uVar11 >> 0x20) |
                                                 bVar19 & (byte)((ulong)uVar23 >> 0x20),
                                                 CONCAT13(bVar6 & (byte)((ulong)uVar11 >> 0x18) |
                                                          bVar18 & (byte)((ulong)uVar23 >> 0x18),
                                                          CONCAT12(bVar5 & (byte)((ulong)uVar11 >>
                                                                                 0x10) |
                                                                   bVar17 & (byte)((ulong)uVar23 >>
                                                                                  0x10),
                                                                   CONCAT11(bVar4 & (byte)((ulong)
                                                  uVar11 >> 8) | bVar16 & (byte)((ulong)uVar23 >> 8)
                                                  ,bVar3 & (byte)uVar11 | bVar15 & (byte)uVar23)))))
                              ));
  param_1[3] = CONCAT17((byte)((ulong)uVar14 >> 0x38) & bVar10 |
                        (byte)((ulong)uVar26 >> 0x38) & bVar22,
                        CONCAT16((byte)((ulong)uVar14 >> 0x30) & bVar9 |
                                 (byte)((ulong)uVar26 >> 0x30) & bVar21,
                                 CONCAT15((byte)((ulong)uVar14 >> 0x28) & bVar8 |
                                          (byte)((ulong)uVar26 >> 0x28) & bVar20,
                                          CONCAT14((byte)((ulong)uVar14 >> 0x20) & bVar7 |
                                                   (byte)((ulong)uVar26 >> 0x20) & bVar19,
                                                   CONCAT13((byte)((ulong)uVar14 >> 0x18) & bVar6 |
                                                            (byte)((ulong)uVar26 >> 0x18) & bVar18,
                                                            CONCAT12((byte)((ulong)uVar14 >> 0x10) &
                                                                     bVar5 | (byte)((ulong)uVar26 >>
                                                                                   0x10) & bVar17,
                                                                     CONCAT11((byte)((ulong)uVar14
                                                                                    >> 8) & bVar4 |
                                                                              (byte)((ulong)uVar26
                                                                                    >> 8) & bVar16,
                                                                              (byte)uVar14 & bVar3 |
                                                                              (byte)uVar26 & bVar15)
                                                                    ))))));
  param_1[2] = CONCAT17((byte)((ulong)uVar13 >> 0x38) & bVar10 |
                        (byte)((ulong)uVar25 >> 0x38) & bVar22,
                        CONCAT16((byte)((ulong)uVar13 >> 0x30) & bVar9 |
                                 (byte)((ulong)uVar25 >> 0x30) & bVar21,
                                 CONCAT15((byte)((ulong)uVar13 >> 0x28) & bVar8 |
                                          (byte)((ulong)uVar25 >> 0x28) & bVar20,
                                          CONCAT14((byte)((ulong)uVar13 >> 0x20) & bVar7 |
                                                   (byte)((ulong)uVar25 >> 0x20) & bVar19,
                                                   CONCAT13((byte)((ulong)uVar13 >> 0x18) & bVar6 |
                                                            (byte)((ulong)uVar25 >> 0x18) & bVar18,
                                                            CONCAT12((byte)((ulong)uVar13 >> 0x10) &
                                                                     bVar5 | (byte)((ulong)uVar25 >>
                                                                                   0x10) & bVar17,
                                                                     CONCAT11((byte)((ulong)uVar13
                                                                                    >> 8) & bVar4 |
                                                                              (byte)((ulong)uVar25
                                                                                    >> 8) & bVar16,
                                                                              (byte)uVar13 & bVar3 |
                                                                              (byte)uVar25 & bVar15)
                                                                    ))))));
  return;
}



/* Entry: 100412c78; end: 100412d17;  */

void FUN_100412c78(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar4 = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar3 = param_3 + 4;
  param_3[5] = 0;
  *puVar3 = 0;
  do {
    FUN_100412c3c(param_3,uVar4 ^ param_1 - 1U,param_2,param_3);
    FUN_100412c3c(puVar3,uVar4 ^ param_1 - 1U,param_2 + 0x20,puVar3);
    uVar4 = uVar4 + 1;
    param_2 = param_2 + 0x40;
  } while (uVar4 != 0xf);
  lVar1 = -(ulong)(param_1 == 0);
  lVar2 = -(ulong)(param_1 != 0);
  bVar5 = (byte)lVar2;
  bVar6 = (byte)((ulong)lVar2 >> 8);
  bVar7 = (byte)((ulong)lVar2 >> 0x10);
  bVar8 = (byte)((ulong)lVar2 >> 0x18);
  bVar9 = (byte)((ulong)lVar2 >> 0x20);
  bVar10 = (byte)((ulong)lVar2 >> 0x28);
  bVar11 = (byte)((ulong)lVar2 >> 0x30);
  bVar12 = (byte)((ulong)lVar2 >> 0x38);
  uVar22 = param_3[9];
  uVar21 = param_3[8];
  uVar24 = param_3[0xb];
  uVar23 = param_3[10];
  bVar13 = (byte)lVar1;
  bVar14 = (byte)((ulong)lVar1 >> 8);
  bVar15 = (byte)((ulong)lVar1 >> 0x10);
  bVar16 = (byte)((ulong)lVar1 >> 0x18);
  bVar17 = (byte)((ulong)lVar1 >> 0x20);
  bVar18 = (byte)((ulong)lVar1 >> 0x28);
  bVar19 = (byte)((ulong)lVar1 >> 0x30);
  bVar20 = (byte)((ulong)lVar1 >> 0x38);
  param_3[9] = CONCAT17(bVar12 | bVar20 & (byte)((ulong)uVar22 >> 0x38),
                        CONCAT16(bVar11 | bVar19 & (byte)((ulong)uVar22 >> 0x30),
                                 CONCAT15(bVar10 | bVar18 & (byte)((ulong)uVar22 >> 0x28),
                                          CONCAT14(bVar9 | bVar17 & (byte)((ulong)uVar22 >> 0x20),
                                                   CONCAT13(bVar16 & (byte)((ulong)uVar22 >> 0x18),
                                                            CONCAT12(bVar15 & (byte)((ulong)uVar22
                                                                                    >> 0x10),
                                                                     CONCAT11(bVar14 & (byte)((ulong
                                                  )uVar22 >> 8),bVar13 & (byte)uVar22)))))));
  param_3[8] = CONCAT17(bVar20 & (byte)((ulong)uVar21 >> 0x38),
                        CONCAT16(bVar19 & (byte)((ulong)uVar21 >> 0x30),
                                 CONCAT15(bVar18 & (byte)((ulong)uVar21 >> 0x28),
                                          CONCAT14(bVar17 & (byte)((ulong)uVar21 >> 0x20),
                                                   CONCAT13(bVar16 & (byte)((ulong)uVar21 >> 0x18),
                                                            CONCAT12(bVar15 & (byte)((ulong)uVar21
                                                                                    >> 0x10),
                                                                     CONCAT11(bVar14 & (byte)((ulong
                                                  )uVar21 >> 8),bVar5 & 1 | bVar13 & (byte)uVar21)))
                                                  ))));
  param_3[0xb] = CONCAT17((byte)((ulong)uVar24 >> 0x38) & bVar20,
                          CONCAT16((byte)((ulong)uVar24 >> 0x30) & bVar19,
                                   CONCAT15((byte)((ulong)uVar24 >> 0x28) & bVar18,
                                            CONCAT14((byte)((ulong)uVar24 >> 0x20) & bVar17,
                                                     CONCAT13(bVar8 | (byte)((ulong)uVar24 >> 0x18)
                                                                      & bVar16,
                                                              CONCAT12(bVar7 | (byte)((ulong)uVar24
                                                                                     >> 0x10) &
                                                                               bVar15,
                                                                       CONCAT11(bVar6 | (byte)((
                                                  ulong)uVar24 >> 8) & bVar14,
                                                  bVar5 & 0xfe | (byte)uVar24 & bVar13)))))));
  param_3[10] = CONCAT17(bVar12 | (byte)((ulong)uVar23 >> 0x38) & bVar20,
                         CONCAT16(bVar11 | (byte)((ulong)uVar23 >> 0x30) & bVar19,
                                  CONCAT15(bVar10 | (byte)((ulong)uVar23 >> 0x28) & bVar18,
                                           CONCAT14(bVar9 | (byte)((ulong)uVar23 >> 0x20) & bVar17,
                                                    CONCAT13(bVar8 | (byte)((ulong)uVar23 >> 0x18) &
                                                                     bVar16,
                                                             CONCAT12(bVar7 | (byte)((ulong)uVar23
                                                                                    >> 0x10) &
                                                                              bVar15,
                                                                      CONCAT11(bVar6 | (byte)((ulong
                                                  )uVar23 >> 8) & bVar14,
                                                  bVar5 | (byte)uVar23 & bVar13)))))));
  return;
}



/* Entry: 100412d18; end: 1004130a7;  */

void FUN_100412d18(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  char cVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  
  uVar53 = param_2[2];
  uVar49 = param_2[3];
  uVar47 = *param_2;
  uVar65 = param_2[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar47;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar49;
  uVar48 = SUB168(auVar1 * auVar23,8);
  uVar46 = uVar47 * uVar49;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar47;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar53;
  uVar54 = SUB168(auVar2 * auVar24,8);
  uVar38 = uVar47 * uVar53;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar47;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar65;
  uVar40 = SUB168(auVar3 * auVar25,8);
  uVar42 = uVar47 * uVar65;
  uVar43 = uVar47 * uVar47;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar47;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar47;
  uVar51 = SUB168(auVar4 * auVar26,8);
  bVar34 = CARRY8(uVar38,uVar40) || CARRY8(uVar38 + uVar40,(ulong)CARRY8(uVar51,uVar42));
  uVar39 = uVar38 + uVar40 + (ulong)CARRY8(uVar51,uVar42);
  uVar45 = uVar46 + uVar54 + (ulong)bVar34;
  uVar63 = uVar48;
  if (CARRY8(uVar46,uVar54) || CARRY8(uVar46 + uVar54,(ulong)bVar34)) {
    uVar63 = uVar48 + 1;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar43;
  uVar55 = SUB168(auVar5 * ZEXT816(0xffffffff00000001),8);
  uVar57 = uVar43 - (uVar43 << 0x20);
  uVar59 = (uVar43 << 0x20) - uVar43;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar43;
  uVar60 = SUB168(auVar6 * ZEXT816(0xffffffffffffffff),8);
  bVar34 = CARRY8(-(uVar47 * uVar47),uVar43);
  bVar35 = CARRY8(uVar51 + uVar42,uVar60 + uVar59) ||
           CARRY8(uVar51 + uVar42 + uVar60 + uVar59,(ulong)bVar34);
  uVar61 = uVar39 + bVar35;
  uVar62 = (ulong)CARRY8(uVar39,(ulong)bVar35);
  uVar47 = uVar45 + uVar57;
  uVar58 = (ulong)CARRY8(uVar45,uVar57);
  uVar39 = uVar55 + uVar63;
  uVar56 = (ulong)CARRY8(uVar55,uVar63);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar49;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar65;
  uVar52 = SUB168(auVar7 * auVar27,8);
  uVar50 = uVar49 * uVar65;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar53;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar65;
  uVar55 = SUB168(auVar8 * auVar28,8);
  uVar45 = uVar53 * uVar65;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar65;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar65;
  uVar63 = SUB168(auVar9 * auVar29,8);
  uVar65 = uVar65 * uVar65;
  bVar35 = CARRY8(uVar45,uVar63) || CARRY8(uVar45 + uVar63,(ulong)CARRY8(uVar40,uVar65));
  uVar64 = uVar45 + uVar63 + (ulong)CARRY8(uVar40,uVar65);
  uVar57 = uVar50 + uVar55 + (ulong)bVar35;
  uVar63 = uVar52;
  if (CARRY8(uVar50,uVar55) || CARRY8(uVar50 + uVar55,(ulong)bVar35)) {
    uVar63 = uVar52 + 1;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar43;
  uVar44 = SUB168(auVar10 * ZEXT816(0xffffffff),8);
  uVar43 = uVar51 + uVar42 + (ulong)bVar34 + uVar60 + uVar59;
  bVar34 = CARRY8(uVar61,uVar44) || CARRY8(uVar61 + uVar44,(ulong)CARRY8(uVar60,uVar59));
  uVar51 = uVar61 + uVar44 + (ulong)CARRY8(uVar60,uVar59);
  bVar35 = CARRY8(uVar47,uVar62) || CARRY8(uVar47 + uVar62,(ulong)bVar34);
  uVar59 = uVar47 + uVar62 + (ulong)bVar34;
  bVar36 = CARRY8(uVar39,uVar58) || CARRY8(uVar39 + uVar58,(ulong)bVar35);
  uVar58 = uVar39 + uVar58 + (ulong)bVar35;
  uVar47 = uVar43 + uVar42;
  lVar41 = uVar40 + uVar65 + (ulong)CARRY8(uVar43,uVar42);
  uVar39 = lVar41 + uVar51;
  bVar34 = CARRY8(uVar40 + uVar65,uVar51) ||
           CARRY8(uVar40 + uVar65 + uVar51,(ulong)CARRY8(uVar43,uVar42));
  uVar60 = uVar64 + bVar34;
  uVar42 = (ulong)CARRY8(uVar64,(ulong)bVar34);
  uVar65 = uVar58 + uVar57;
  uVar62 = uVar47 - (uVar47 << 0x20);
  uVar64 = (uVar47 << 0x20) - uVar47;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar47;
  uVar44 = SUB168(auVar11 * ZEXT816(0xffffffffffffffff),8);
  uVar40 = uVar65 + uVar42 + (ulong)CARRY8(uVar60,uVar59);
  uVar42 = uVar63 + uVar56 + (ulong)bVar36 + (ulong)CARRY8(uVar58,uVar57) +
           (ulong)(CARRY8(uVar65,uVar42) || CARRY8(uVar65 + uVar42,(ulong)CARRY8(uVar60,uVar59)));
  uVar33 = nzcv;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar47;
  uVar61 = SUB168(auVar12 * ZEXT816(0xffffffff00000001),8);
  bVar34 = CARRY8(uVar39,uVar44 + uVar64) ||
           CARRY8(uVar39 + uVar44 + uVar64,(ulong)CARRY8(-uVar47,uVar47));
  uVar43 = uVar60 + uVar59 + (ulong)bVar34;
  uVar57 = (ulong)CARRY8(uVar60 + uVar59,(ulong)bVar34);
  uVar65 = uVar40 + uVar62;
  uVar58 = (ulong)CARRY8(uVar40,uVar62);
  uVar39 = uVar42 + uVar61;
  uVar40 = (ulong)CARRY8(uVar42,uVar61);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar47;
  uVar42 = SUB168(auVar13 * ZEXT816(0xffffffff),8);
  bVar34 = CARRY8(uVar43,uVar42) || CARRY8(uVar43 + uVar42,(ulong)CARRY8(uVar44,uVar64));
  uVar42 = uVar43 + uVar42 + (ulong)CARRY8(uVar44,uVar64);
  bVar35 = CARRY8(uVar65,uVar57) || CARRY8(uVar65 + uVar57,(ulong)bVar34);
  uVar65 = uVar65 + uVar57 + (ulong)bVar34;
  bVar34 = CARRY8(uVar39 + uVar58,(ulong)bVar35);
  if (CARRY8(uVar39,uVar58) || bVar34) {
    uVar40 = uVar40 + 1;
  }
  uVar47 = lVar41 + uVar51 + (ulong)CARRY8(-uVar47,uVar47) + uVar44 + uVar64;
  nzcv = uVar33;
  uVar40 = uVar40 + (CARRY8(uVar63,uVar56) || CARRY8(uVar63 + uVar56,(ulong)bVar36)) +
           (ulong)(CARRY8(uVar39,uVar58) || bVar34);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar49;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar53;
  uVar43 = SUB168(auVar14 * auVar30,8);
  uVar51 = uVar49 * uVar53;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar53;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar53;
  uVar57 = SUB168(auVar15 * auVar31,8);
  uVar53 = uVar53 * uVar53;
  bVar34 = CARRY8(uVar53,uVar55) || CARRY8(uVar53 + uVar55,(ulong)CARRY8(uVar54,uVar45));
  uVar53 = uVar53 + uVar55 + (ulong)CARRY8(uVar54,uVar45);
  uVar63 = uVar43;
  if (CARRY8(uVar51,uVar57) || CARRY8(uVar51 + uVar57,(ulong)bVar34)) {
    uVar63 = uVar43 + 1;
  }
  uVar55 = uVar47 + uVar38;
  lVar41 = uVar54 + uVar45 + (ulong)CARRY8(uVar47,uVar38);
  uVar56 = lVar41 + uVar42;
  bVar36 = CARRY8(uVar54 + uVar45,uVar42) ||
           CARRY8(uVar54 + uVar45 + uVar42,(ulong)CARRY8(uVar47,uVar38));
  uVar47 = uVar53 + uVar65 + (ulong)bVar36;
  uVar45 = uVar51 + uVar57 + (ulong)bVar34 + uVar39 + uVar58 + (ulong)bVar35 +
           (ulong)(CARRY8(uVar53,uVar65) || CARRY8(uVar53 + uVar65,(ulong)bVar36));
  uVar33 = nzcv;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar55;
  uVar39 = SUB168(auVar16 * ZEXT816(0xffffffffffffffff),8);
  uVar54 = uVar55 - (uVar55 << 0x20);
  uVar38 = (uVar55 << 0x20) - uVar55;
  bVar34 = CARRY8(uVar56,uVar39 + uVar38) ||
           CARRY8(uVar56 + uVar39 + uVar38,(ulong)CARRY8(-uVar55,uVar55));
  uVar57 = uVar47 + bVar34;
  uVar65 = (ulong)CARRY8(uVar47,(ulong)bVar34);
  uVar53 = uVar45 + uVar54;
  uVar54 = (ulong)CARRY8(uVar45,uVar54);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar55;
  uVar45 = SUB168(auVar17 * ZEXT816(0xffffffff00000001),8);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar55;
  uVar47 = SUB168(auVar18 * ZEXT816(0xffffffff),8);
  bVar34 = CARRY8(uVar57,uVar47) || CARRY8(uVar57 + uVar47,(ulong)CARRY8(uVar39,uVar38));
  uVar57 = uVar57 + uVar47 + (ulong)CARRY8(uVar39,uVar38);
  bVar35 = CARRY8(uVar53,uVar65) || CARRY8(uVar53 + uVar65,(ulong)bVar34);
  uVar56 = uVar53 + uVar65 + (ulong)bVar34;
  bVar34 = CARRY8(uVar45,uVar54) || CARRY8(uVar45 + uVar54,(ulong)bVar35);
  uVar65 = uVar45 + uVar54 + (ulong)bVar35;
  uVar47 = (ulong)bVar34;
  nzcv = uVar33;
  uVar53 = uVar63 + bVar34 + uVar40;
  if (CARRY8(uVar65,uVar53)) {
    uVar47 = uVar47 + 1;
  }
  uVar38 = lVar41 + uVar42 + (ulong)CARRY8(-uVar55,uVar55) + uVar39 + uVar38;
  uVar39 = uVar47 + CARRY8(uVar63,(ulong)bVar34) + (ulong)CARRY8(uVar63 + bVar34,uVar40);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar49;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar49;
  uVar63 = SUB168(auVar19 * auVar32,8);
  uVar49 = uVar49 * uVar49;
  bVar34 = CARRY8(uVar51,uVar52) || CARRY8(uVar51 + uVar52,(ulong)CARRY8(uVar48,uVar50));
  uVar47 = uVar51 + uVar52 + (ulong)CARRY8(uVar48,uVar50);
  if (CARRY8(uVar49,uVar43) || CARRY8(uVar49 + uVar43,(ulong)bVar34)) {
    uVar63 = uVar63 + 1;
  }
  uVar40 = uVar38 + uVar46;
  lVar41 = uVar48 + uVar50 + (ulong)CARRY8(uVar38,uVar46);
  uVar42 = lVar41 + uVar57;
  bVar35 = CARRY8(uVar48 + uVar50,uVar57) ||
           CARRY8(uVar48 + uVar50 + uVar57,(ulong)CARRY8(uVar38,uVar46));
  uVar38 = uVar47 + uVar56 + (ulong)bVar35;
  uVar43 = uVar49 + uVar43 + (ulong)bVar34 + uVar65 + uVar53 +
           (ulong)(CARRY8(uVar47,uVar56) || CARRY8(uVar47 + uVar56,(ulong)bVar35));
  uVar33 = nzcv;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar40;
  uVar45 = SUB168(auVar20 * ZEXT816(0xffffffffffffffff),8);
  uVar47 = uVar40 - (uVar40 << 0x20);
  uVar46 = (uVar40 << 0x20) - uVar40;
  bVar34 = CARRY8(uVar42,uVar45 + uVar46) ||
           CARRY8(uVar42 + uVar45 + uVar46,(ulong)CARRY8(-uVar40,uVar40));
  uVar49 = uVar38 + bVar34;
  uVar65 = (ulong)CARRY8(uVar38,(ulong)bVar34);
  uVar53 = uVar43 + uVar47;
  uVar43 = (ulong)CARRY8(uVar43,uVar47);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar40;
  uVar48 = SUB168(auVar21 * ZEXT816(0xffffffff00000001),8);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar40;
  uVar47 = SUB168(auVar22 * ZEXT816(0xffffffff),8);
  bVar34 = CARRY8(uVar49,uVar47) || CARRY8(uVar49 + uVar47,(ulong)CARRY8(uVar45,uVar46));
  uVar38 = uVar49 + uVar47 + (ulong)CARRY8(uVar45,uVar46);
  bVar35 = CARRY8(uVar53,uVar65) || CARRY8(uVar53 + uVar65,(ulong)bVar34);
  uVar42 = uVar53 + uVar65 + (ulong)bVar34;
  cVar37 = CARRY8(uVar48,uVar43) || CARRY8(uVar48 + uVar43,(ulong)bVar35);
  uVar43 = uVar48 + uVar43 + (ulong)bVar35;
  nzcv = uVar33;
  uVar53 = (ulong)(byte)cVar37;
  uVar47 = (ulong)(byte)cVar37;
  uVar49 = uVar63 + uVar47 + uVar39;
  uVar65 = uVar43 + uVar49;
  if (CARRY8(uVar43,uVar49)) {
    cVar37 = cVar37 + '\x01';
  }
  uVar43 = lVar41 + uVar57 + (ulong)CARRY8(-uVar40,uVar40) + uVar45 + uVar46;
  uVar49 = (ulong)(byte)-((0xfffffffffffffffe < uVar43) + -1);
  uVar45 = uVar38 - uVar49;
  uVar49 = (ulong)(byte)-((-1 - (uVar38 < uVar49)) + (0xfffffffe < uVar45));
  uVar40 = (ulong)(uVar42 < uVar49);
  uVar46 = uVar65 - uVar40;
  bVar34 = (byte)-((-1 - (uVar65 < uVar40)) + (0xffffffff00000000 < uVar46)) <=
           (byte)(cVar37 + CARRY8(uVar63,uVar53) + CARRY8(uVar63 + uVar47,uVar39));
  uVar63 = -(ulong)bVar34;
  uVar53 = -(ulong)!bVar34;
  *param_1 = uVar63 & uVar43 + 1 | uVar53 & uVar43;
  param_1[1] = uVar63 & uVar45 - 0xffffffff | uVar53 & uVar38;
  param_1[2] = uVar63 & uVar42 - uVar49 | uVar53 & uVar42;
  param_1[3] = uVar63 & uVar46 + 0xffffffff | uVar53 & uVar65;
  return;
}



/* Entry: 1004130a8; end: 10041349f;  */

void FUN_1004130a8(undefined8 param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,
                  undefined8 *param_5,ulong *param_6,int param_7,undefined8 *param_8,
                  undefined8 *param_9,ulong *param_10)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  ulong uVar37;
  undefined8 uVar38;
  ulong uVar39;
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  ulong auStack_1f0 [2];
  byte bStack_1e0;
  byte bStack_1df;
  byte bStack_1de;
  byte bStack_1dd;
  byte bStack_1dc;
  byte bStack_1db;
  byte bStack_1da;
  byte bStack_1d9;
  byte bStack_1d8;
  byte bStack_1d7;
  byte bStack_1d6;
  byte bStack_1d5;
  byte bStack_1d4;
  byte bStack_1d3;
  byte bStack_1d2;
  byte bStack_1d1;
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  byte bStack_bc;
  byte bStack_bb;
  byte bStack_ba;
  byte bStack_b9;
  byte bStack_b8;
  byte bStack_b7;
  byte bStack_b6;
  byte bStack_b5;
  byte bStack_b4;
  byte bStack_b3;
  byte bStack_b2;
  byte bStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  byte bStack_9e;
  byte bStack_9d;
  byte bStack_9c;
  byte bStack_9b;
  byte bStack_9a;
  byte bStack_99;
  byte bStack_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = param_6[1] | *param_6 | param_6[2] | param_6[3];
  puVar15 = (ulong *)(param_10[1] | *param_10 | param_10[2] | param_10[3]);
  FUN_100412d18(auStack_f0,param_6);
  if (param_7 == 0) {
    FUN_100412d18(&uStack_90,param_10);
    FUN_100413574(&uStack_110,param_4,&uStack_90);
    FUN_1004134a0(auStack_150,param_6,param_10);
    FUN_100412d18(auStack_150,auStack_150);
    FUN_1004138fc(auStack_150,auStack_150,auStack_f0);
    FUN_1004138fc(auStack_150,auStack_150,&uStack_90);
    FUN_100413574(&uStack_130,param_10,&uStack_90);
    FUN_100413574(&uStack_130,&uStack_130,param_5);
  }
  else {
    uStack_108 = param_4[1];
    uStack_110 = *param_4;
    uStack_100 = param_4[2];
    uStack_f8 = param_4[3];
    FUN_1004134a0(auStack_150,param_6,param_6);
    uStack_128 = param_5[1];
    uStack_130 = *param_5;
    uStack_120 = param_5[2];
    uStack_118 = param_5[3];
  }
  FUN_100413574(auStack_170,param_8,auStack_f0);
  FUN_1004138fc(auStack_190,auStack_170,&uStack_110);
  FUN_100413574(&uStack_d0,auStack_190,auStack_150);
  FUN_100413574(auStack_1b0,param_6,auStack_f0);
  FUN_100413574(auStack_1d0,param_9,auStack_1b0);
  FUN_1004138fc(auStack_1f0,auStack_1d0,&uStack_130);
  puVar3 = auStack_1f0;
  puVar4 = auStack_1f0;
  puVar6 = auStack_1f0;
  FUN_1004134a0();
  bVar17 = (byte)auStack_1f0[0] | (byte)auStack_190._0_8_ | bStack_1e0 | (byte)auStack_190._16_8_;
  bVar18 = (byte)(auStack_1f0[0] >> 8) | SUB81(auStack_190._0_8_,1) |
           bStack_1df | SUB81(auStack_190._16_8_,1);
  bVar19 = (byte)(auStack_1f0[0] >> 0x10) | SUB81(auStack_190._0_8_,2) |
           bStack_1de | SUB81(auStack_190._16_8_,2);
  bVar20 = (byte)(auStack_1f0[0] >> 0x18) | SUB81(auStack_190._0_8_,3) |
           bStack_1dd | SUB81(auStack_190._16_8_,3);
  bVar21 = (byte)(auStack_1f0[0] >> 0x20) | SUB81(auStack_190._0_8_,4) |
           bStack_1dc | SUB81(auStack_190._16_8_,4);
  bVar22 = (byte)(auStack_1f0[0] >> 0x28) | SUB81(auStack_190._0_8_,5) |
           bStack_1db | SUB81(auStack_190._16_8_,5);
  bVar23 = (byte)(auStack_1f0[0] >> 0x30) | SUB81(auStack_190._0_8_,6) |
           bStack_1da | SUB81(auStack_190._16_8_,6);
  bVar24 = (byte)(auStack_1f0[0] >> 0x38) | SUB81(auStack_190._0_8_,7) |
           bStack_1d9 | SUB81(auStack_190._16_8_,7);
  bVar25 = (byte)auStack_1f0[1] | (byte)auStack_190._8_8_ | bStack_1d8 | (byte)auStack_190._24_8_;
  bVar26 = (byte)(auStack_1f0[1] >> 8) | SUB81(auStack_190._8_8_,1) |
           bStack_1d7 | SUB81(auStack_190._24_8_,1);
  bVar27 = (byte)(auStack_1f0[1] >> 0x10) | SUB81(auStack_190._8_8_,2) |
           bStack_1d6 | SUB81(auStack_190._24_8_,2);
  bVar28 = (byte)(auStack_1f0[1] >> 0x18) | SUB81(auStack_190._8_8_,3) |
           bStack_1d5 | SUB81(auStack_190._24_8_,3);
  bVar29 = (byte)(auStack_1f0[1] >> 0x20) | SUB81(auStack_190._8_8_,4) |
           bStack_1d4 | SUB81(auStack_190._24_8_,4);
  bVar30 = (byte)(auStack_1f0[1] >> 0x28) | SUB81(auStack_190._8_8_,5) |
           bStack_1d3 | SUB81(auStack_190._24_8_,5);
  bVar31 = (byte)(auStack_1f0[1] >> 0x30) | SUB81(auStack_190._8_8_,6) |
           bStack_1d2 | SUB81(auStack_190._24_8_,6);
  bVar32 = (byte)(auStack_1f0[1] >> 0x38) | SUB81(auStack_190._8_8_,7) |
           bStack_1d1 | SUB81(auStack_190._24_8_,7);
  auVar33[1] = bVar18;
  auVar33[0] = bVar17;
  auVar33[2] = bVar19;
  auVar33[3] = bVar20;
  auVar33[4] = bVar21;
  auVar33[5] = bVar22;
  auVar33[6] = bVar23;
  auVar33[7] = bVar24;
  auVar33[8] = bVar25;
  auVar33[9] = bVar26;
  auVar33[10] = bVar27;
  auVar33[0xb] = bVar28;
  auVar33[0xc] = bVar29;
  auVar33[0xd] = bVar30;
  auVar33[0xe] = bVar31;
  auVar33[0xf] = bVar32;
  auVar1[1] = bVar18;
  auVar1[0] = bVar17;
  auVar1[2] = bVar19;
  auVar1[3] = bVar20;
  auVar1[4] = bVar21;
  auVar1[5] = bVar22;
  auVar1[6] = bVar23;
  auVar1[7] = bVar24;
  auVar1[8] = bVar25;
  auVar1[9] = bVar26;
  auVar1[10] = bVar27;
  auVar1[0xb] = bVar28;
  auVar1[0xc] = bVar29;
  auVar1[0xd] = bVar30;
  auVar1[0xe] = bVar31;
  auVar1[0xf] = bVar32;
  auVar33 = NEON_ext(auVar33,auVar1,8,1);
  uVar11 = CONCAT17(bVar24 | auVar33[7],
                    CONCAT16(bVar23 | auVar33[6],
                             CONCAT15(bVar22 | auVar33[5],
                                      CONCAT14(bVar21 | auVar33[4],
                                               CONCAT13(bVar20 | auVar33[3],
                                                        CONCAT12(bVar19 | auVar33[2],
                                                                 CONCAT11(bVar18 | auVar33[1],
                                                                          bVar17 | auVar33[0])))))))
  ;
  if ((long)(((ulong)puVar15 | -(long)puVar15) & (uVar16 | -uVar16) & (uVar11 ^ 0xffffffffffffffff)
            & uVar11 - 1) < 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_100412d18(&bStack_78,param_6);
      FUN_100412d18(&bStack_98,param_5);
      FUN_100413574(&bStack_b8,param_4,&bStack_98);
      FUN_1004138fc(auStack_d8,param_4,&bStack_78);
      FUN_1004134a0(&uStack_f8,param_4,&bStack_78);
      FUN_1004134a0(&uStack_118,&uStack_f8,&uStack_f8);
      FUN_1004134a0(&uStack_f8,&uStack_f8,&uStack_118);
      FUN_100413574(auStack_138,auStack_d8,&uStack_f8);
      FUN_100412d18(param_1,auStack_138);
      FUN_1004134a0(auStack_158,&bStack_b8,&bStack_b8);
      FUN_1004134a0(auStack_158,auStack_158,auStack_158);
      FUN_1004134a0(&uStack_118,auStack_158,auStack_158);
      FUN_1004138fc(param_1,param_1,&uStack_118);
      FUN_1004134a0(&bStack_78,&bStack_98,&bStack_78);
      FUN_1004134a0(auStack_d8,param_5,param_6);
      FUN_100412d18(param_3,auStack_d8);
      FUN_1004138fc(param_3,param_3,&bStack_78);
      FUN_1004138fc(param_2,auStack_158,param_1);
      FUN_1004134a0(&bStack_98,&bStack_98,&bStack_98);
      FUN_100412d18(&bStack_98,&bStack_98);
      FUN_100413574(param_2,auStack_138,param_2);
      FUN_1004134a0(&bStack_98,&bStack_98,&bStack_98);
      puVar5 = param_2;
      FUN_1004138fc(param_2,param_2,&bStack_98);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      func_0x000107c60e78();
      uVar34 = puVar5[2];
      uVar36 = puVar5[3];
      uVar35 = *puVar5;
      uVar38 = puVar5[1];
      *(char *)((long)param_2 + 1) = (char)((ulong)uVar35 >> 8);
      *(char *)((long)param_2 + 2) = (char)((ulong)uVar35 >> 0x10);
      *(char *)((long)param_2 + 3) = (char)((ulong)uVar35 >> 0x18);
      *(char *)((long)param_2 + 4) = (char)((ulong)uVar35 >> 0x20);
      *(char *)((long)param_2 + 5) = (char)((ulong)uVar35 >> 0x28);
      *(char *)((long)param_2 + 6) = (char)((ulong)uVar35 >> 0x30);
      *(char *)param_2 = (char)uVar35;
      *(char *)((long)param_2 + 7) = (char)((ulong)uVar35 >> 0x38);
      *(char *)((long)param_2 + 9) = (char)((ulong)uVar38 >> 8);
      *(char *)((long)param_2 + 10) = (char)((ulong)uVar38 >> 0x10);
      *(char *)((long)param_2 + 0xb) = (char)((ulong)uVar38 >> 0x18);
      *(char *)((long)param_2 + 0xc) = (char)((ulong)uVar38 >> 0x20);
      *(char *)((long)param_2 + 0xd) = (char)((ulong)uVar38 >> 0x28);
      *(char *)((long)param_2 + 0xe) = (char)((ulong)uVar38 >> 0x30);
      *(char *)(param_2 + 1) = (char)uVar38;
      *(char *)((long)param_2 + 0xf) = (char)((ulong)uVar38 >> 0x38);
      *(char *)((long)param_2 + 0x11) = (char)((ulong)uVar34 >> 8);
      *(char *)((long)param_2 + 0x12) = (char)((ulong)uVar34 >> 0x10);
      *(char *)((long)param_2 + 0x13) = (char)((ulong)uVar34 >> 0x18);
      *(char *)((long)param_2 + 0x14) = (char)((ulong)uVar34 >> 0x20);
      *(char *)((long)param_2 + 0x15) = (char)((ulong)uVar34 >> 0x28);
      *(char *)((long)param_2 + 0x16) = (char)((ulong)uVar34 >> 0x30);
      *(char *)(param_2 + 2) = (char)uVar34;
      *(char *)((long)param_2 + 0x17) = (char)((ulong)uVar34 >> 0x38);
      *(char *)((long)param_2 + 0x19) = (char)((ulong)uVar36 >> 8);
      *(char *)((long)param_2 + 0x1a) = (char)((ulong)uVar36 >> 0x10);
      *(char *)((long)param_2 + 0x1b) = (char)((ulong)uVar36 >> 0x18);
      *(char *)((long)param_2 + 0x1c) = (char)((ulong)uVar36 >> 0x20);
      *(char *)((long)param_2 + 0x1d) = (char)((ulong)uVar36 >> 0x28);
      *(char *)((long)param_2 + 0x1e) = (char)((ulong)uVar36 >> 0x30);
      *(char *)(param_2 + 3) = (char)uVar36;
      *(char *)((long)param_2 + 0x1f) = (char)((ulong)uVar36 >> 0x38);
      return;
    }
  }
  else {
    FUN_1004134a0(auStack_210,auStack_190,auStack_190);
    FUN_100412d18(auStack_210,auStack_210);
    FUN_100413574(auStack_230,auStack_190,auStack_210);
    FUN_100413574(auStack_250,&uStack_110,auStack_210);
    FUN_100412d18(&uStack_90,auStack_1f0);
    FUN_1004138fc(&uStack_90,&uStack_90,auStack_230);
    FUN_1004138fc(&uStack_90,&uStack_90,auStack_250);
    FUN_1004138fc(&uStack_90,&uStack_90,auStack_250);
    FUN_1004138fc(&uStack_b0,auStack_250,&uStack_90);
    FUN_100413574(&uStack_b0,&uStack_b0,auStack_1f0);
    FUN_100413574(auStack_270,&uStack_130,auStack_230);
    FUN_1004138fc(&uStack_b0,&uStack_b0,auStack_270);
    FUN_1004138fc(&uStack_b0,&uStack_b0,auStack_270);
    lVar7 = -(ulong)(uVar16 == 0);
    lVar8 = -(ulong)(uVar16 != 0);
    bVar17 = (byte)lVar8;
    bVar18 = (byte)((ulong)lVar8 >> 8);
    bVar19 = (byte)((ulong)lVar8 >> 0x10);
    bVar20 = (byte)((ulong)lVar8 >> 0x18);
    bVar21 = (byte)((ulong)lVar8 >> 0x20);
    bVar22 = (byte)((ulong)lVar8 >> 0x28);
    bVar23 = (byte)((ulong)lVar8 >> 0x30);
    bVar24 = (byte)((ulong)lVar8 >> 0x38);
    uVar35 = param_8[1];
    uVar34 = *param_8;
    uVar38 = param_8[3];
    uVar36 = param_8[2];
    bVar25 = (byte)lVar7;
    bVar26 = (byte)((ulong)lVar7 >> 8);
    bVar27 = (byte)((ulong)lVar7 >> 0x10);
    bVar28 = (byte)((ulong)lVar7 >> 0x18);
    bVar29 = (byte)((ulong)lVar7 >> 0x20);
    bVar30 = (byte)((ulong)lVar7 >> 0x28);
    bVar31 = (byte)((ulong)lVar7 >> 0x30);
    bVar32 = (byte)((ulong)lVar7 >> 0x38);
    bStack_80 = bStack_80 & bVar17 | (byte)uVar36 & bVar25;
    bStack_7f = bStack_7f & bVar18 | (byte)((ulong)uVar36 >> 8) & bVar26;
    bStack_7e = bStack_7e & bVar19 | (byte)((ulong)uVar36 >> 0x10) & bVar27;
    bStack_7d = bStack_7d & bVar20 | (byte)((ulong)uVar36 >> 0x18) & bVar28;
    bStack_7c = bStack_7c & bVar21 | (byte)((ulong)uVar36 >> 0x20) & bVar29;
    bStack_7b = bStack_7b & bVar22 | (byte)((ulong)uVar36 >> 0x28) & bVar30;
    bStack_7a = bStack_7a & bVar23 | (byte)((ulong)uVar36 >> 0x30) & bVar31;
    bStack_79 = bStack_79 & bVar24 | (byte)((ulong)uVar36 >> 0x38) & bVar32;
    bStack_78 = bStack_78 & bVar17 | (byte)uVar38 & bVar25;
    bStack_77 = bStack_77 & bVar18 | (byte)((ulong)uVar38 >> 8) & bVar26;
    bStack_76 = bStack_76 & bVar19 | (byte)((ulong)uVar38 >> 0x10) & bVar27;
    bStack_75 = bStack_75 & bVar20 | (byte)((ulong)uVar38 >> 0x18) & bVar28;
    bStack_74 = bStack_74 & bVar21 | (byte)((ulong)uVar38 >> 0x20) & bVar29;
    bStack_73 = bStack_73 & bVar22 | (byte)((ulong)uVar38 >> 0x28) & bVar30;
    bStack_72 = bStack_72 & bVar23 | (byte)((ulong)uVar38 >> 0x30) & bVar31;
    bStack_71 = bStack_71 & bVar24 | (byte)((ulong)uVar38 >> 0x38) & bVar32;
    uStack_88 = CONCAT17(bVar24 & (byte)((ulong)uStack_88 >> 0x38) |
                         bVar32 & (byte)((ulong)uVar35 >> 0x38),
                         CONCAT16(bVar23 & (byte)((ulong)uStack_88 >> 0x30) |
                                  bVar31 & (byte)((ulong)uVar35 >> 0x30),
                                  CONCAT15(bVar22 & (byte)((ulong)uStack_88 >> 0x28) |
                                           bVar30 & (byte)((ulong)uVar35 >> 0x28),
                                           CONCAT14(bVar21 & (byte)((ulong)uStack_88 >> 0x20) |
                                                    bVar29 & (byte)((ulong)uVar35 >> 0x20),
                                                    CONCAT13(bVar20 & (byte)((ulong)uStack_88 >>
                                                                            0x18) |
                                                             bVar28 & (byte)((ulong)uVar35 >> 0x18),
                                                             CONCAT12(bVar19 & (byte)((ulong)
                                                  uStack_88 >> 0x10) |
                                                  bVar27 & (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11(bVar18 & (byte)((ulong)uStack_88 >> 8) |
                                                           bVar26 & (byte)((ulong)uVar35 >> 8),
                                                           bVar17 & (byte)uStack_88 |
                                                           bVar25 & (byte)uVar35)))))));
    uStack_90 = CONCAT17(bVar24 & (byte)((ulong)uStack_90 >> 0x38) |
                         bVar32 & (byte)((ulong)uVar34 >> 0x38),
                         CONCAT16(bVar23 & (byte)((ulong)uStack_90 >> 0x30) |
                                  bVar31 & (byte)((ulong)uVar34 >> 0x30),
                                  CONCAT15(bVar22 & (byte)((ulong)uStack_90 >> 0x28) |
                                           bVar30 & (byte)((ulong)uVar34 >> 0x28),
                                           CONCAT14(bVar21 & (byte)((ulong)uStack_90 >> 0x20) |
                                                    bVar29 & (byte)((ulong)uVar34 >> 0x20),
                                                    CONCAT13(bVar20 & (byte)((ulong)uStack_90 >>
                                                                            0x18) |
                                                             bVar28 & (byte)((ulong)uVar34 >> 0x18),
                                                             CONCAT12(bVar19 & (byte)((ulong)
                                                  uStack_90 >> 0x10) |
                                                  bVar27 & (byte)((ulong)uVar34 >> 0x10),
                                                  CONCAT11(bVar18 & (byte)((ulong)uStack_90 >> 8) |
                                                           bVar26 & (byte)((ulong)uVar34 >> 8),
                                                           bVar17 & (byte)uStack_90 |
                                                           bVar25 & (byte)uVar34)))))));
    FUN_100412c3c(param_1,puVar15,param_4,&uStack_90);
    uVar35 = param_9[1];
    uVar34 = *param_9;
    uVar38 = param_9[3];
    uVar36 = param_9[2];
    bStack_a0 = bStack_a0 & bVar17 | (byte)uVar36 & bVar25;
    bStack_9f = bStack_9f & bVar18 | (byte)((ulong)uVar36 >> 8) & bVar26;
    bStack_9e = bStack_9e & bVar19 | (byte)((ulong)uVar36 >> 0x10) & bVar27;
    bStack_9d = bStack_9d & bVar20 | (byte)((ulong)uVar36 >> 0x18) & bVar28;
    bStack_9c = bStack_9c & bVar21 | (byte)((ulong)uVar36 >> 0x20) & bVar29;
    bStack_9b = bStack_9b & bVar22 | (byte)((ulong)uVar36 >> 0x28) & bVar30;
    bStack_9a = bStack_9a & bVar23 | (byte)((ulong)uVar36 >> 0x30) & bVar31;
    bStack_99 = bStack_99 & bVar24 | (byte)((ulong)uVar36 >> 0x38) & bVar32;
    bStack_98 = bStack_98 & bVar17 | (byte)uVar38 & bVar25;
    bStack_97 = bStack_97 & bVar18 | (byte)((ulong)uVar38 >> 8) & bVar26;
    bStack_96 = bStack_96 & bVar19 | (byte)((ulong)uVar38 >> 0x10) & bVar27;
    bStack_95 = bStack_95 & bVar20 | (byte)((ulong)uVar38 >> 0x18) & bVar28;
    bStack_94 = bStack_94 & bVar21 | (byte)((ulong)uVar38 >> 0x20) & bVar29;
    bStack_93 = bStack_93 & bVar22 | (byte)((ulong)uVar38 >> 0x28) & bVar30;
    bStack_92 = bStack_92 & bVar23 | (byte)((ulong)uVar38 >> 0x30) & bVar31;
    bStack_91 = bStack_91 & bVar24 | (byte)((ulong)uVar38 >> 0x38) & bVar32;
    uStack_a8 = CONCAT17((byte)((ulong)uStack_a8 >> 0x38) & bVar24 |
                         (byte)((ulong)uVar35 >> 0x38) & bVar32,
                         CONCAT16((byte)((ulong)uStack_a8 >> 0x30) & bVar23 |
                                  (byte)((ulong)uVar35 >> 0x30) & bVar31,
                                  CONCAT15((byte)((ulong)uStack_a8 >> 0x28) & bVar22 |
                                           (byte)((ulong)uVar35 >> 0x28) & bVar30,
                                           CONCAT14((byte)((ulong)uStack_a8 >> 0x20) & bVar21 |
                                                    (byte)((ulong)uVar35 >> 0x20) & bVar29,
                                                    CONCAT13((byte)((ulong)uStack_a8 >> 0x18) &
                                                             bVar20 | (byte)((ulong)uVar35 >> 0x18)
                                                                      & bVar28,
                                                             CONCAT12((byte)((ulong)uStack_a8 >>
                                                                            0x10) & bVar19 |
                                                                      (byte)((ulong)uVar35 >> 0x10)
                                                                      & bVar27,CONCAT11((byte)((
                                                  ulong)uStack_a8 >> 8) & bVar18 |
                                                  (byte)((ulong)uVar35 >> 8) & bVar26,
                                                  (byte)uStack_a8 & bVar17 | (byte)uVar35 & bVar25))
                                                  )))));
    uStack_b0 = CONCAT17((byte)((ulong)uStack_b0 >> 0x38) & bVar24 |
                         (byte)((ulong)uVar34 >> 0x38) & bVar32,
                         CONCAT16((byte)((ulong)uStack_b0 >> 0x30) & bVar23 |
                                  (byte)((ulong)uVar34 >> 0x30) & bVar31,
                                  CONCAT15((byte)((ulong)uStack_b0 >> 0x28) & bVar22 |
                                           (byte)((ulong)uVar34 >> 0x28) & bVar30,
                                           CONCAT14((byte)((ulong)uStack_b0 >> 0x20) & bVar21 |
                                                    (byte)((ulong)uVar34 >> 0x20) & bVar29,
                                                    CONCAT13((byte)((ulong)uStack_b0 >> 0x18) &
                                                             bVar20 | (byte)((ulong)uVar34 >> 0x18)
                                                                      & bVar28,
                                                             CONCAT12((byte)((ulong)uStack_b0 >>
                                                                            0x10) & bVar19 |
                                                                      (byte)((ulong)uVar34 >> 0x10)
                                                                      & bVar27,CONCAT11((byte)((
                                                  ulong)uStack_b0 >> 8) & bVar18 |
                                                  (byte)((ulong)uVar34 >> 8) & bVar26,
                                                  (byte)uStack_b0 & bVar17 | (byte)uVar34 & bVar25))
                                                  )))));
    FUN_100412c3c(param_2,puVar15,param_5,&uStack_b0);
    uVar11 = param_10[1];
    uVar16 = *param_10;
    uVar39 = param_10[3];
    uVar37 = param_10[2];
    bStack_c0 = bStack_c0 & bVar17 | (byte)uVar37 & bVar25;
    bStack_bf = bStack_bf & bVar18 | (byte)(uVar37 >> 8) & bVar26;
    bStack_be = bStack_be & bVar19 | (byte)(uVar37 >> 0x10) & bVar27;
    bStack_bd = bStack_bd & bVar20 | (byte)(uVar37 >> 0x18) & bVar28;
    bStack_bc = bStack_bc & bVar21 | (byte)(uVar37 >> 0x20) & bVar29;
    bStack_bb = bStack_bb & bVar22 | (byte)(uVar37 >> 0x28) & bVar30;
    bStack_ba = bStack_ba & bVar23 | (byte)(uVar37 >> 0x30) & bVar31;
    bStack_b9 = bStack_b9 & bVar24 | (byte)(uVar37 >> 0x38) & bVar32;
    bStack_b8 = bStack_b8 & bVar17 | (byte)uVar39 & bVar25;
    bStack_b7 = bStack_b7 & bVar18 | (byte)(uVar39 >> 8) & bVar26;
    bStack_b6 = bStack_b6 & bVar19 | (byte)(uVar39 >> 0x10) & bVar27;
    bStack_b5 = bStack_b5 & bVar20 | (byte)(uVar39 >> 0x18) & bVar28;
    bStack_b4 = bStack_b4 & bVar21 | (byte)(uVar39 >> 0x20) & bVar29;
    bStack_b3 = bStack_b3 & bVar22 | (byte)(uVar39 >> 0x28) & bVar30;
    bStack_b2 = bStack_b2 & bVar23 | (byte)(uVar39 >> 0x30) & bVar31;
    bStack_b1 = bStack_b1 & bVar24 | (byte)(uVar39 >> 0x38) & bVar32;
    uStack_c8 = CONCAT17((byte)((ulong)uStack_c8 >> 0x38) & bVar24 | (byte)(uVar11 >> 0x38) & bVar32
                         ,CONCAT16((byte)((ulong)uStack_c8 >> 0x30) & bVar23 |
                                   (byte)(uVar11 >> 0x30) & bVar31,
                                   CONCAT15((byte)((ulong)uStack_c8 >> 0x28) & bVar22 |
                                            (byte)(uVar11 >> 0x28) & bVar30,
                                            CONCAT14((byte)((ulong)uStack_c8 >> 0x20) & bVar21 |
                                                     (byte)(uVar11 >> 0x20) & bVar29,
                                                     CONCAT13((byte)((ulong)uStack_c8 >> 0x18) &
                                                              bVar20 | (byte)(uVar11 >> 0x18) &
                                                                       bVar28,
                                                              CONCAT12((byte)((ulong)uStack_c8 >>
                                                                             0x10) & bVar19 |
                                                                       (byte)(uVar11 >> 0x10) &
                                                                       bVar27,CONCAT11((byte)((ulong
                                                  )uStack_c8 >> 8) & bVar18 |
                                                  (byte)(uVar11 >> 8) & bVar26,
                                                  (byte)uStack_c8 & bVar17 | (byte)uVar11 & bVar25))
                                                  )))));
    uStack_d0 = CONCAT17((byte)((ulong)uStack_d0 >> 0x38) & bVar24 | (byte)(uVar16 >> 0x38) & bVar32
                         ,CONCAT16((byte)((ulong)uStack_d0 >> 0x30) & bVar23 |
                                   (byte)(uVar16 >> 0x30) & bVar31,
                                   CONCAT15((byte)((ulong)uStack_d0 >> 0x28) & bVar22 |
                                            (byte)(uVar16 >> 0x28) & bVar30,
                                            CONCAT14((byte)((ulong)uStack_d0 >> 0x20) & bVar21 |
                                                     (byte)(uVar16 >> 0x20) & bVar29,
                                                     CONCAT13((byte)((ulong)uStack_d0 >> 0x18) &
                                                              bVar20 | (byte)(uVar16 >> 0x18) &
                                                                       bVar28,
                                                              CONCAT12((byte)((ulong)uStack_d0 >>
                                                                             0x10) & bVar19 |
                                                                       (byte)(uVar16 >> 0x10) &
                                                                       bVar27,CONCAT11((byte)((ulong
                                                  )uStack_d0 >> 8) & bVar18 |
                                                  (byte)(uVar16 >> 8) & bVar26,
                                                  (byte)uStack_d0 & bVar17 | (byte)uVar16 & bVar25))
                                                  )))));
    FUN_100412c3c();
    puVar3 = param_3;
    puVar4 = puVar15;
    puVar6 = param_6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  func_0x000107c60e78();
  uVar11 = *puVar4;
  uVar37 = *puVar6;
  uVar12 = puVar6[1];
  uVar16 = uVar37 + uVar11;
  uVar9 = puVar4[1] + (ulong)CARRY8(uVar37,uVar11);
  uVar10 = (ulong)CARRY8(puVar4[1],(ulong)CARRY8(uVar37,uVar11));
  uVar11 = puVar6[2] + puVar4[2];
  uVar13 = (ulong)CARRY8(puVar6[2],puVar4[2]);
  bVar17 = CARRY8(puVar6[3],puVar4[3]);
  uVar37 = puVar6[3] + puVar4[3];
  uVar39 = uVar9 + uVar12;
  bVar2 = CARRY8(uVar11,uVar10) || CARRY8(uVar11 + uVar10,(ulong)CARRY8(uVar9,uVar12));
  uVar11 = uVar11 + uVar10 + (ulong)CARRY8(uVar9,uVar12);
  uVar12 = uVar37 + uVar13 + (ulong)bVar2;
  if (CARRY8(uVar37,uVar13) || CARRY8(uVar37 + uVar13,(ulong)bVar2)) {
    bVar17 = bVar17 + 1;
  }
  uVar37 = (ulong)(byte)-((0xfffffffffffffffe < uVar16) + -1);
  uVar10 = uVar39 - uVar37;
  uVar37 = (ulong)(byte)-((-1 - (uVar39 < uVar37)) + (0xfffffffe < uVar10));
  uVar9 = (ulong)(uVar11 < uVar37);
  uVar13 = uVar12 - uVar9;
  bVar2 = (byte)-((-1 - (uVar12 < uVar9)) + (0xffffffff00000000 < uVar13)) <= bVar17;
  uVar9 = -(ulong)bVar2;
  uVar14 = -(ulong)!bVar2;
  *puVar3 = uVar9 & uVar16 + 1 | uVar14 & uVar16;
  puVar3[1] = uVar9 & uVar10 - 0xffffffff | uVar14 & uVar39;
  puVar3[2] = uVar9 & uVar11 - uVar37 | uVar14 & uVar11;
  puVar3[3] = uVar9 & uVar13 + 0xffffffff | uVar14 & uVar12;
  return;
}



/* Entry: 1004134a0; end: 100413573;  */

void FUN_1004134a0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *param_2;
  uVar3 = *param_3;
  uVar9 = param_3[1];
  uVar1 = uVar3 + uVar8;
  uVar6 = param_2[1] + (ulong)CARRY8(uVar3,uVar8);
  uVar7 = (ulong)CARRY8(param_2[1],(ulong)CARRY8(uVar3,uVar8));
  uVar8 = param_3[2] + param_2[2];
  uVar10 = (ulong)CARRY8(param_3[2],param_2[2]);
  bVar4 = CARRY8(param_3[3],param_2[3]);
  uVar3 = param_3[3] + param_2[3];
  uVar2 = uVar6 + uVar9;
  bVar5 = CARRY8(uVar8,uVar7) || CARRY8(uVar8 + uVar7,(ulong)CARRY8(uVar6,uVar9));
  uVar8 = uVar8 + uVar7 + (ulong)CARRY8(uVar6,uVar9);
  uVar9 = uVar3 + uVar10 + (ulong)bVar5;
  if (CARRY8(uVar3,uVar10) || CARRY8(uVar3 + uVar10,(ulong)bVar5)) {
    bVar4 = bVar4 + 1;
  }
  uVar3 = (ulong)(byte)-((0xfffffffffffffffe < uVar1) + -1);
  uVar7 = uVar2 - uVar3;
  uVar3 = (ulong)(byte)-((-1 - (uVar2 < uVar3)) + (0xfffffffe < uVar7));
  uVar6 = (ulong)(uVar8 < uVar3);
  uVar10 = uVar9 - uVar6;
  bVar5 = (byte)-((-1 - (uVar9 < uVar6)) + (0xffffffff00000000 < uVar10)) <= bVar4;
  uVar6 = -(ulong)bVar5;
  uVar11 = -(ulong)!bVar5;
  *param_1 = uVar6 & uVar1 + 1 | uVar11 & uVar1;
  param_1[1] = uVar6 & uVar7 - 0xffffffff | uVar11 & uVar2;
  param_1[2] = uVar6 & uVar8 - uVar3 | uVar11 & uVar8;
  param_1[3] = uVar6 & uVar10 + 0xffffffff | uVar11 & uVar9;
  return;
}



/* Entry: 100413574; end: 1004138fb;  */

void FUN_100413574(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  char cVar49;
  ulong uVar50;
  ulong uVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  
  uVar62 = *param_2;
  uVar63 = param_2[1];
  uVar58 = param_3[2];
  uVar57 = param_3[3];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar57;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar62;
  uVar56 = SUB168(auVar1 * auVar29,8);
  uVar61 = uVar57 * uVar62;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar58;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar62;
  uVar64 = SUB168(auVar2 * auVar30,8);
  uVar65 = uVar58 * uVar62;
  uVar60 = *param_3;
  uVar59 = param_3[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar59;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar62;
  uVar50 = SUB168(auVar3 * auVar31,8);
  uVar51 = uVar59 * uVar62;
  uVar53 = uVar60 * uVar62;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar60;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar62;
  uVar54 = SUB168(auVar4 * auVar32,8);
  bVar46 = CARRY8(uVar50,uVar65) || CARRY8(uVar50 + uVar65,(ulong)CARRY8(uVar54,uVar51));
  uVar65 = uVar50 + uVar65 + (ulong)CARRY8(uVar54,uVar51);
  uVar50 = uVar64 + uVar61 + (ulong)bVar46;
  if (CARRY8(uVar64,uVar61) || CARRY8(uVar64 + uVar61,(ulong)bVar46)) {
    uVar56 = uVar56 + 1;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar53;
  uVar55 = SUB168(auVar5 * ZEXT816(0xffffffff00000001),8);
  uVar64 = uVar53 - (uVar53 << 0x20);
  uVar67 = (uVar53 << 0x20) - uVar53;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar53;
  uVar68 = SUB168(auVar6 * ZEXT816(0xffffffffffffffff),8);
  bVar46 = CARRY8(-(uVar60 * uVar62),uVar53);
  bVar47 = CARRY8(uVar54 + uVar51,uVar68 + uVar67) ||
           CARRY8(uVar54 + uVar51 + uVar68 + uVar67,(ulong)bVar46);
  uVar66 = uVar65 + bVar47;
  uVar61 = (ulong)CARRY8(uVar65,(ulong)bVar47);
  uVar62 = uVar50 + uVar64;
  uVar64 = (ulong)CARRY8(uVar50,uVar64);
  uVar50 = uVar55 + uVar56;
  uVar65 = (ulong)CARRY8(uVar55,uVar56);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar57;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar63;
  uVar56 = SUB168(auVar7 * auVar33,8);
  uVar55 = uVar57 * uVar63;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar58;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar63;
  uVar69 = SUB168(auVar8 * auVar34,8);
  uVar70 = uVar58 * uVar63;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar59;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar63;
  uVar71 = SUB168(auVar9 * auVar35,8);
  uVar72 = uVar59 * uVar63;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar60;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar63;
  uVar73 = SUB168(auVar10 * auVar36,8);
  bVar47 = CARRY8(uVar71,uVar70) || CARRY8(uVar71 + uVar70,(ulong)CARRY8(uVar73,uVar72));
  uVar71 = uVar71 + uVar70 + (ulong)CARRY8(uVar73,uVar72);
  uVar70 = uVar69 + uVar55 + (ulong)bVar47;
  if (CARRY8(uVar69,uVar55) || CARRY8(uVar69 + uVar55,(ulong)bVar47)) {
    uVar56 = uVar56 + 1;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar53;
  uVar53 = SUB168(auVar11 * ZEXT816(0xffffffff),8);
  uVar51 = uVar54 + uVar51 + (ulong)bVar46 + uVar68 + uVar67;
  bVar46 = CARRY8(uVar66,uVar53) || CARRY8(uVar66 + uVar53,(ulong)CARRY8(uVar68,uVar67));
  uVar55 = uVar66 + uVar53 + (ulong)CARRY8(uVar68,uVar67);
  bVar47 = CARRY8(uVar62,uVar61) || CARRY8(uVar62 + uVar61,(ulong)bVar46);
  uVar61 = uVar62 + uVar61 + (ulong)bVar46;
  bVar48 = CARRY8(uVar50,uVar64) || CARRY8(uVar50 + uVar64,(ulong)bVar47);
  uVar53 = uVar50 + uVar64 + (ulong)bVar47;
  uVar63 = uVar60 * uVar63;
  uVar62 = uVar51 + uVar63;
  lVar52 = uVar73 + uVar72 + (ulong)CARRY8(uVar51,uVar63);
  uVar50 = lVar52 + uVar55;
  bVar46 = CARRY8(uVar73 + uVar72,uVar55) ||
           CARRY8(uVar73 + uVar72 + uVar55,(ulong)CARRY8(uVar51,uVar63));
  uVar54 = uVar71 + bVar46;
  uVar64 = (ulong)CARRY8(uVar71,(ulong)bVar46);
  uVar63 = uVar53 + uVar70;
  uVar67 = uVar62 - (uVar62 << 0x20);
  uVar68 = (uVar62 << 0x20) - uVar62;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar62;
  uVar69 = SUB168(auVar12 * ZEXT816(0xffffffffffffffff),8);
  uVar51 = uVar63 + uVar64 + (ulong)CARRY8(uVar54,uVar61);
  uVar53 = uVar56 + uVar65 + (ulong)bVar48 + (ulong)CARRY8(uVar53,uVar70) +
           (ulong)(CARRY8(uVar63,uVar64) || CARRY8(uVar63 + uVar64,(ulong)CARRY8(uVar54,uVar61)));
  uVar45 = nzcv;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar62;
  uVar66 = SUB168(auVar13 * ZEXT816(0xffffffff00000001),8);
  bVar46 = CARRY8(uVar50,uVar69 + uVar68) ||
           CARRY8(uVar50 + uVar69 + uVar68,(ulong)CARRY8(-uVar62,uVar62));
  uVar64 = uVar54 + uVar61 + (ulong)bVar46;
  uVar61 = (ulong)CARRY8(uVar54 + uVar61,(ulong)bVar46);
  uVar63 = uVar51 + uVar67;
  uVar54 = (ulong)CARRY8(uVar51,uVar67);
  uVar50 = uVar53 + uVar66;
  uVar51 = (ulong)CARRY8(uVar53,uVar66);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar62;
  uVar53 = SUB168(auVar14 * ZEXT816(0xffffffff),8);
  bVar46 = CARRY8(uVar64,uVar53) || CARRY8(uVar64 + uVar53,(ulong)CARRY8(uVar69,uVar68));
  uVar53 = uVar64 + uVar53 + (ulong)CARRY8(uVar69,uVar68);
  bVar47 = CARRY8(uVar63,uVar61) || CARRY8(uVar63 + uVar61,(ulong)bVar46);
  uVar61 = uVar63 + uVar61 + (ulong)bVar46;
  bVar46 = CARRY8(uVar50 + uVar54,(ulong)bVar47);
  uVar63 = uVar50 + uVar54 + (ulong)bVar47;
  if (CARRY8(uVar50,uVar54) || bVar46) {
    uVar51 = uVar51 + 1;
  }
  uVar62 = lVar52 + uVar55 + (ulong)CARRY8(-uVar62,uVar62) + uVar69 + uVar68;
  nzcv = uVar45;
  uVar55 = uVar51 + (CARRY8(uVar56,uVar65) || CARRY8(uVar56 + uVar65,(ulong)bVar48)) +
           (ulong)(CARRY8(uVar50,uVar54) || bVar46);
  uVar50 = param_2[2];
  uVar51 = param_2[3];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar57;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar50;
  uVar56 = SUB168(auVar15 * auVar37,8);
  uVar54 = uVar57 * uVar50;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar58;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar50;
  uVar65 = SUB168(auVar16 * auVar38,8);
  uVar64 = uVar58 * uVar50;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar59;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar50;
  uVar66 = SUB168(auVar17 * auVar39,8);
  uVar70 = uVar59 * uVar50;
  uVar67 = uVar60 * uVar50;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar60;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar50;
  uVar50 = SUB168(auVar18 * auVar40,8);
  bVar46 = CARRY8(uVar66,uVar64) || CARRY8(uVar66 + uVar64,(ulong)CARRY8(uVar50,uVar70));
  uVar66 = uVar66 + uVar64 + (ulong)CARRY8(uVar50,uVar70);
  uVar64 = uVar65 + uVar54 + (ulong)bVar46;
  if (CARRY8(uVar65,uVar54) || CARRY8(uVar65 + uVar54,(ulong)bVar46)) {
    uVar56 = uVar56 + 1;
  }
  uVar54 = uVar62 + uVar67;
  lVar52 = uVar50 + uVar70 + (ulong)CARRY8(uVar62,uVar67);
  uVar65 = lVar52 + uVar53;
  bVar46 = CARRY8(uVar50 + uVar70,uVar53) ||
           CARRY8(uVar50 + uVar70 + uVar53,(ulong)CARRY8(uVar62,uVar67));
  bVar47 = CARRY8(uVar66,uVar61) || CARRY8(uVar66 + uVar61,(ulong)bVar46);
  uVar66 = uVar66 + uVar61 + (ulong)bVar46;
  bVar46 = CARRY8(uVar64,uVar63) || CARRY8(uVar64 + uVar63,(ulong)bVar47);
  uVar61 = uVar64 + uVar63 + (ulong)bVar47;
  uVar64 = uVar56 + bVar46;
  uVar62 = uVar64 + uVar55;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar54;
  uVar70 = SUB168(auVar19 * ZEXT816(0xffffffff00000001),8);
  uVar67 = uVar54 - (uVar54 << 0x20);
  uVar68 = (uVar54 << 0x20) - uVar54;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar54;
  uVar50 = SUB168(auVar20 * ZEXT816(0xffffffff),8);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar54;
  uVar69 = SUB168(auVar21 * ZEXT816(0xffffffffffffffff),8);
  uVar63 = uVar69 + uVar68;
  if (CARRY8(uVar69,uVar68)) {
    uVar50 = uVar50 + 1;
  }
  bVar47 = CARRY8(uVar65,uVar63) || CARRY8(uVar65 + uVar63,(ulong)CARRY8(-uVar54,uVar54));
  bVar48 = CARRY8(uVar66,uVar50) || CARRY8(uVar66 + uVar50,(ulong)bVar47);
  uVar65 = uVar66 + uVar50 + (ulong)bVar47;
  bVar47 = CARRY8(uVar61,uVar67) || CARRY8(uVar61 + uVar67,(ulong)bVar48);
  uVar50 = uVar61 + uVar67 + (ulong)bVar48;
  uVar63 = lVar52 + uVar53 + (ulong)CARRY8(-uVar54,uVar54) + uVar63;
  uVar64 = (ulong)(CARRY8(uVar70,uVar62) || CARRY8(uVar70 + uVar62,(ulong)bVar47)) +
           (ulong)CARRY8(uVar56,(ulong)bVar46) + (ulong)CARRY8(uVar64,uVar55);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar57;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar51;
  uVar56 = SUB168(auVar22 * auVar41,8);
  uVar57 = uVar57 * uVar51;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar58;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar51;
  uVar53 = SUB168(auVar23 * auVar42,8);
  uVar58 = uVar58 * uVar51;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar59;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar51;
  uVar54 = SUB168(auVar24 * auVar43,8);
  uVar59 = uVar59 * uVar51;
  uVar61 = uVar60 * uVar51;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar60;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar51;
  uVar60 = SUB168(auVar25 * auVar44,8);
  bVar46 = CARRY8(uVar54,uVar58) || CARRY8(uVar54 + uVar58,(ulong)CARRY8(uVar60,uVar59));
  uVar58 = uVar54 + uVar58 + (ulong)CARRY8(uVar60,uVar59);
  if (CARRY8(uVar53,uVar57) || CARRY8(uVar53 + uVar57,(ulong)bVar46)) {
    uVar56 = uVar56 + 1;
  }
  uVar51 = uVar63 + uVar61;
  lVar52 = uVar60 + uVar59 + (ulong)CARRY8(uVar63,uVar61);
  uVar54 = lVar52 + uVar65;
  bVar48 = CARRY8(uVar60 + uVar59,uVar65) ||
           CARRY8(uVar60 + uVar59 + uVar65,(ulong)CARRY8(uVar63,uVar61));
  uVar63 = uVar58 + uVar50 + (ulong)bVar48;
  uVar60 = uVar53 + uVar57 + (ulong)bVar46 + uVar70 + uVar62 + (ulong)bVar47 +
           (ulong)(CARRY8(uVar58,uVar50) || CARRY8(uVar58 + uVar50,(ulong)bVar48));
  uVar45 = nzcv;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar51;
  uVar61 = SUB168(auVar26 * ZEXT816(0xffffffffffffffff),8);
  uVar58 = uVar51 - (uVar51 << 0x20);
  uVar57 = (uVar51 << 0x20) - uVar51;
  bVar46 = CARRY8(uVar54,uVar61 + uVar57) ||
           CARRY8(uVar54 + uVar61 + uVar57,(ulong)CARRY8(-uVar51,uVar51));
  uVar59 = uVar63 + bVar46;
  uVar63 = (ulong)CARRY8(uVar63,(ulong)bVar46);
  uVar62 = uVar60 + uVar58;
  uVar53 = (ulong)CARRY8(uVar60,uVar58);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar51;
  uVar58 = SUB168(auVar27 * ZEXT816(0xffffffff00000001),8);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  uVar60 = SUB168(auVar28 * ZEXT816(0xffffffff),8);
  bVar46 = CARRY8(uVar59,uVar60) || CARRY8(uVar59 + uVar60,(ulong)CARRY8(uVar61,uVar57));
  uVar50 = uVar59 + uVar60 + (ulong)CARRY8(uVar61,uVar57);
  bVar47 = CARRY8(uVar62,uVar63) || CARRY8(uVar62 + uVar63,(ulong)bVar46);
  uVar59 = uVar62 + uVar63 + (ulong)bVar46;
  cVar49 = CARRY8(uVar58,uVar53) || CARRY8(uVar58 + uVar53,(ulong)bVar47);
  uVar53 = uVar58 + uVar53 + (ulong)bVar47;
  nzcv = uVar45;
  uVar62 = (ulong)(byte)cVar49;
  uVar58 = (ulong)(byte)cVar49;
  uVar60 = uVar56 + uVar58 + uVar64;
  uVar63 = uVar53 + uVar60;
  if (CARRY8(uVar53,uVar60)) {
    cVar49 = cVar49 + '\x01';
  }
  uVar51 = lVar52 + uVar65 + (ulong)CARRY8(-uVar51,uVar51) + uVar61 + uVar57;
  uVar60 = (ulong)(byte)-((0xfffffffffffffffe < uVar51) + -1);
  uVar53 = uVar50 - uVar60;
  uVar60 = (ulong)(byte)-((-1 - (uVar50 < uVar60)) + (0xfffffffe < uVar53));
  uVar57 = (ulong)(uVar59 < uVar60);
  uVar54 = uVar63 - uVar57;
  bVar46 = (byte)-((-1 - (uVar63 < uVar57)) + (0xffffffff00000000 < uVar54)) <=
           (byte)(cVar49 + CARRY8(uVar56,uVar62) + CARRY8(uVar56 + uVar58,uVar64));
  uVar56 = -(ulong)bVar46;
  uVar62 = -(ulong)!bVar46;
  *param_1 = uVar56 & uVar51 + 1 | uVar62 & uVar51;
  param_1[1] = uVar56 & uVar53 - 0xffffffff | uVar62 & uVar50;
  param_1[2] = uVar56 & uVar59 - uVar60 | uVar62 & uVar59;
  param_1[3] = uVar56 & uVar54 + 0xffffffff | uVar62 & uVar63;
  return;
}



/* Entry: 1004138fc; end: 10041397b;  */

void FUN_1004138fc(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *param_2 - *param_3;
  uVar7 = (ulong)(*param_2 < *param_3);
  uVar1 = param_3[1] + uVar7;
  uVar4 = param_2[1] - uVar1;
  uVar7 = (ulong)(byte)(CARRY8(param_3[1],uVar7) + (param_2[1] < uVar1));
  uVar1 = param_3[2] + uVar7;
  uVar2 = param_2[3];
  uVar5 = param_2[2] - uVar1;
  uVar7 = (ulong)(byte)(CARRY8(param_3[2],uVar7) + (param_2[2] < uVar1));
  uVar1 = param_3[3] + uVar7;
  uVar7 = -(ulong)((char)(CARRY8(param_3[3],uVar7) + (uVar2 < uVar1)) != '\0');
  uVar8 = uVar7 & 0xffffffff;
  bVar6 = CARRY8(uVar4,uVar8) || CARRY8(uVar4 + uVar8,(ulong)CARRY8(uVar3,uVar7));
  *param_1 = uVar3 + uVar7;
  param_1[1] = uVar4 + uVar8 + (ulong)CARRY8(uVar3,uVar7);
  param_1[2] = uVar5 + bVar6;
  param_1[3] = (uVar7 & 0xffffffff00000001) + (uVar2 - uVar1) + (ulong)CARRY8(uVar5,(ulong)bVar6);
  return;
}



/* Entry: 10041397c; end: 100413b53;  */

void FUN_10041397c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100412d18(auStack_78,param_6);
  FUN_100412d18(auStack_98,param_5);
  FUN_100413574(auStack_b8,param_4,auStack_98);
  FUN_1004138fc(auStack_d8,param_4,auStack_78);
  FUN_1004134a0(auStack_f8,param_4,auStack_78);
  FUN_1004134a0(auStack_118,auStack_f8,auStack_f8);
  FUN_1004134a0(auStack_f8,auStack_f8,auStack_118);
  FUN_100413574(auStack_138,auStack_d8,auStack_f8);
  FUN_100412d18(param_1,auStack_138);
  FUN_1004134a0(auStack_158,auStack_b8,auStack_b8);
  FUN_1004134a0(auStack_158,auStack_158,auStack_158);
  FUN_1004134a0(auStack_118,auStack_158,auStack_158);
  FUN_1004138fc(param_1,param_1,auStack_118);
  FUN_1004134a0(auStack_78,auStack_98,auStack_78);
  FUN_1004134a0(auStack_d8,param_5,param_6);
  FUN_100412d18(param_3,auStack_d8);
  FUN_1004138fc(param_3,param_3,auStack_78);
  FUN_1004138fc(param_2,auStack_158,param_1);
  FUN_1004134a0(auStack_98,auStack_98,auStack_98);
  FUN_100412d18(auStack_98,auStack_98);
  FUN_100413574(param_2,auStack_138,param_2);
  FUN_1004134a0(auStack_98,auStack_98,auStack_98);
  puVar5 = param_2;
  FUN_1004138fc(param_2,param_2,auStack_98);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  uVar1 = puVar5[2];
  uVar3 = puVar5[3];
  uVar2 = *puVar5;
  uVar4 = puVar5[1];
  *(char *)((long)param_2 + 1) = (char)((ulong)uVar2 >> 8);
  *(char *)((long)param_2 + 2) = (char)((ulong)uVar2 >> 0x10);
  *(char *)((long)param_2 + 3) = (char)((ulong)uVar2 >> 0x18);
  *(char *)((long)param_2 + 4) = (char)((ulong)uVar2 >> 0x20);
  *(char *)((long)param_2 + 5) = (char)((ulong)uVar2 >> 0x28);
  *(char *)((long)param_2 + 6) = (char)((ulong)uVar2 >> 0x30);
  *(char *)param_2 = (char)uVar2;
  *(char *)((long)param_2 + 7) = (char)((ulong)uVar2 >> 0x38);
  *(char *)((long)param_2 + 9) = (char)((ulong)uVar4 >> 8);
  *(char *)((long)param_2 + 10) = (char)((ulong)uVar4 >> 0x10);
  *(char *)((long)param_2 + 0xb) = (char)((ulong)uVar4 >> 0x18);
  *(char *)((long)param_2 + 0xc) = (char)((ulong)uVar4 >> 0x20);
  *(char *)((long)param_2 + 0xd) = (char)((ulong)uVar4 >> 0x28);
  *(char *)((long)param_2 + 0xe) = (char)((ulong)uVar4 >> 0x30);
  *(char *)(param_2 + 1) = (char)uVar4;
  *(char *)((long)param_2 + 0xf) = (char)((ulong)uVar4 >> 0x38);
  *(char *)((long)param_2 + 0x11) = (char)((ulong)uVar1 >> 8);
  *(char *)((long)param_2 + 0x12) = (char)((ulong)uVar1 >> 0x10);
  *(char *)((long)param_2 + 0x13) = (char)((ulong)uVar1 >> 0x18);
  *(char *)((long)param_2 + 0x14) = (char)((ulong)uVar1 >> 0x20);
  *(char *)((long)param_2 + 0x15) = (char)((ulong)uVar1 >> 0x28);
  *(char *)((long)param_2 + 0x16) = (char)((ulong)uVar1 >> 0x30);
  *(char *)(param_2 + 2) = (char)uVar1;
  *(char *)((long)param_2 + 0x17) = (char)((ulong)uVar1 >> 0x38);
  *(char *)((long)param_2 + 0x19) = (char)((ulong)uVar3 >> 8);
  *(char *)((long)param_2 + 0x1a) = (char)((ulong)uVar3 >> 0x10);
  *(char *)((long)param_2 + 0x1b) = (char)((ulong)uVar3 >> 0x18);
  *(char *)((long)param_2 + 0x1c) = (char)((ulong)uVar3 >> 0x20);
  *(char *)((long)param_2 + 0x1d) = (char)((ulong)uVar3 >> 0x28);
  *(char *)((long)param_2 + 0x1e) = (char)((ulong)uVar3 >> 0x30);
  *(char *)(param_2 + 3) = (char)uVar3;
  *(char *)((long)param_2 + 0x1f) = (char)((ulong)uVar3 >> 0x38);
  return;
}



/* Entry: 100413b54; end: 100413c4f;  */

void FUN_100413b54(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  param_1[1] = (char)((ulong)uVar2 >> 8);
  param_1[2] = (char)((ulong)uVar2 >> 0x10);
  param_1[3] = (char)((ulong)uVar2 >> 0x18);
  param_1[4] = (char)((ulong)uVar2 >> 0x20);
  param_1[5] = (char)((ulong)uVar2 >> 0x28);
  param_1[6] = (char)((ulong)uVar2 >> 0x30);
  *param_1 = (char)uVar2;
  param_1[7] = (char)((ulong)uVar2 >> 0x38);
  param_1[9] = (char)((ulong)uVar4 >> 8);
  param_1[10] = (char)((ulong)uVar4 >> 0x10);
  param_1[0xb] = (char)((ulong)uVar4 >> 0x18);
  param_1[0xc] = (char)((ulong)uVar4 >> 0x20);
  param_1[0xd] = (char)((ulong)uVar4 >> 0x28);
  param_1[0xe] = (char)((ulong)uVar4 >> 0x30);
  param_1[8] = (char)uVar4;
  param_1[0xf] = (char)((ulong)uVar4 >> 0x38);
  param_1[0x11] = (char)((ulong)uVar1 >> 8);
  param_1[0x12] = (char)((ulong)uVar1 >> 0x10);
  param_1[0x13] = (char)((ulong)uVar1 >> 0x18);
  param_1[0x14] = (char)((ulong)uVar1 >> 0x20);
  param_1[0x15] = (char)((ulong)uVar1 >> 0x28);
  param_1[0x16] = (char)((ulong)uVar1 >> 0x30);
  param_1[0x10] = (char)uVar1;
  param_1[0x17] = (char)((ulong)uVar1 >> 0x38);
  param_1[0x19] = (char)((ulong)uVar3 >> 8);
  param_1[0x1a] = (char)((ulong)uVar3 >> 0x10);
  param_1[0x1b] = (char)((ulong)uVar3 >> 0x18);
  param_1[0x1c] = (char)((ulong)uVar3 >> 0x20);
  param_1[0x1d] = (char)((ulong)uVar3 >> 0x28);
  param_1[0x1e] = (char)((ulong)uVar3 >> 0x30);
  param_1[0x18] = (char)uVar3;
  param_1[0x1f] = (char)((ulong)uVar3 >> 0x38);
  return;
}



/* Entry: 100413c50; end: 100413e1b;  */

byte FUN_100413c50(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  code *pcVar2;
  byte bVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [72];
  undefined1 auStack_128 [72];
  ulong auStack_e0 [9];
  undefined1 auStack_98 [72];
  
  pcVar1 = *(code **)(*param_1 + 0x70);
  pcVar2 = *(code **)(*param_1 + 0x78);
  puVar9 = (ulong *)(param_3 + 0x90);
  (*pcVar2)(param_1,auStack_1b8,puVar9);
  (*pcVar1)(param_1,auStack_e0,param_2,auStack_1b8);
  puVar10 = (ulong *)(param_2 + 0x90);
  (*pcVar2)(param_1,auStack_170,puVar10);
  (*pcVar1)(param_1,auStack_128,param_3,auStack_170);
  lVar7 = param_1[8];
  lVar11 = (long)(int)lVar7;
  FUN_100412940(auStack_e0,auStack_e0,auStack_128,param_1[7],auStack_98,lVar11);
  if ((int)lVar7 < 1) {
    bVar3 = 0xff;
  }
  else {
    uVar4 = 0;
    puVar5 = auStack_e0;
    do {
      uVar4 = *puVar5 | uVar4;
      lVar11 = lVar11 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar11 != 0);
    bVar3 = uVar4 == 0;
  }
  (*pcVar1)(param_1,auStack_1b8,auStack_1b8,puVar9);
  (*pcVar1)(param_1,auStack_e0,param_2 + 0x48,auStack_1b8);
  (*pcVar1)(param_1,auStack_170,auStack_170,puVar10);
  (*pcVar1)(param_1,auStack_128,param_3 + 0x48,auStack_170);
  lVar7 = param_1[8];
  lVar11 = (long)(int)lVar7;
  FUN_100412940(auStack_e0,auStack_e0,auStack_128,param_1[7],auStack_98,lVar11);
  if ((int)lVar7 < 1) {
    bVar3 = 1;
  }
  else {
    uVar4 = 0;
    puVar5 = auStack_e0;
    lVar7 = lVar11;
    do {
      uVar4 = *puVar5 | uVar4;
      lVar7 = lVar7 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
    uVar6 = 0;
    lVar7 = lVar11;
    do {
      uVar6 = *puVar10 | uVar6;
      lVar7 = lVar7 + -1;
      uVar8 = 0;
      puVar10 = puVar10 + 1;
    } while (lVar7 != 0);
    do {
      uVar8 = *puVar9 | uVar8;
      lVar11 = lVar11 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
    if (uVar4 != 0) {
      bVar3 = 0;
    }
    bVar3 = bVar3 & uVar8 != 0;
    if (uVar6 == 0) {
      bVar3 = ~(uVar8 != 0);
    }
    bVar3 = bVar3 & 1;
  }
  return bVar3;
}



/* Entry: 100413e1c; end: 100413ef3;  */

long FUN_100413e1c(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar5 = param_1;
    FUN_100202000();
    if (lVar5 == 0) {
      lVar8 = 0xffffffff;
    }
    else {
      if (((*(long *)(lVar5 + 8) != 0) && (*(long *)(lVar5 + 0x10) != 0)) &&
         (pcVar6 = *(code **)(*(long *)(lVar5 + 0x10) + 0x88), pcVar6 != (code *)0x0)) {
        (*pcVar6)(lVar5);
      }
      *(undefined4 *)(lVar5 + 4) = 0x198;
      *(long *)(lVar5 + 8) = param_1;
      *(undefined **)(lVar5 + 0x10) = &DAT_110c7c890;
      piVar1 = (int *)(param_1 + 0x20);
      iVar7 = *piVar1;
      do {
        if (iVar7 == -1) break;
        iVar2 = *piVar1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while (!bVar4);
      lVar8 = lVar5;
      func_0x000100413fa0(lVar5,param_2);
    }
    FUN_10021f114(lVar5);
  }
  return lVar8;
}



/* Entry: 100413ef4; end: 100414007; -[SCEllipticCurveCrypto exportPublicKeyToDERBase64] */

void FUN_100413ef4(long param_1)

{
  int iVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [32];
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_83 [91];
  long lStack_28;
  int iVar2;
  
  ppuVar5 = &puStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_83;
  FUN_100413e1c(*(undefined8 *)(param_1 + 0x10),&puStack_90);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412e4();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3e684();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar4;
  func_0x000107c61170(uVar6);
  puVar4 = puVar3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    if (puVar4 != (undefined *)0x0) {
      iVar1 = (int)auStack_d0;
      iVar2 = (int)auStack_d0;
      uStack_98 = 0x100413fa0;
      puStack_b0 = puVar3;
      lStack_a8 = param_1;
      puStack_a0 = &stack0xfffffffffffffff0;
      FUN_1001ebea0(auStack_d0,0x80);
      if ((iVar1 == 0) || (FUN_100414008(auStack_d0,puVar4), iVar2 == 0)) {
        FUN_1001ed8c0(auStack_d0);
      }
      else {
        FUN_100414a84(auStack_d0,ppuVar5);
      }
    }
    return;
  }
  return;
}



/* Entry: 100414008; end: 10041404b;  */

undefined8 FUN_100414008(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x10) + 0x18),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100414018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  FUN_1004d2c58(6,0,0x80,&UNK_10f6c6032,0x93);
  return 0;
}



/* Entry: 10041404c; end: 10041421b;  */

void FUN_10041404c(long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = param_1;
  FUN_1001ebf4c();
  if ((int)plVar4 != 0) {
    uVar2 = (uint)((ulong)param_3 >> 0x18);
    uVar1 = (uint)param_3 & 0x1fffffff;
    if (uVar1 < 0x1f) {
      plVar4 = param_1;
      FUN_1001ec260(param_1,uVar2 & 0xe0 | (uint)param_3 & 0xff);
      iVar3 = (int)plVar4;
    }
    else {
      plVar4 = param_1;
      FUN_1001ec260(param_1,uVar2 & 0xff | 0x1f);
      if ((int)plVar4 == 0) {
        return;
      }
      plVar4 = param_1;
      func_0x000107c34f40(param_1,uVar1);
      iVar3 = (int)plVar4;
    }
    if (iVar3 != 0) {
      lVar5 = *(long *)(*param_1 + 8);
      plVar4 = param_1;
      FUN_1001ec260(param_1,0);
      if ((int)plVar4 != 0) {
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
        *param_2 = *param_1;
        *(undefined1 *)((long)param_2 + 0x1a) = 1;
        param_1[1] = (long)param_2;
        param_2[2] = lVar5;
        *(undefined2 *)(param_2 + 3) = 0x101;
      }
    }
  }
  return;
}



/* Entry: 10041421c; end: 10041424f;  */

undefined1 * FUN_10041421c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [32];
  
  puVar2 = (undefined1 *)0x113310b78;
  pcVar6 = FUN_100410854;
  func_0x000107c6127c();
  if ((int)puVar2 == 0) {
    return (undefined1 *)0x113836f50;
  }
  func_0x000107c60ebc();
  puVar5 = auStack_60;
  iVar1 = *(int *)(pcVar6 + 0x28);
  if (iVar1 == 0) {
    uVar7 = 0x15d;
  }
  else {
    puVar3 = puVar2;
    FUN_10041421c();
    puVar3 = puVar3 + 0x10;
    lVar8 = 4;
    do {
      if (*(int *)(puVar3 + -0x10) == iVar1) {
        puVar4 = puVar2;
        FUN_10041404c(puVar2,auStack_60,6);
        if ((int)puVar4 == 0) {
          return puVar4;
        }
        FUN_1001ed748(auStack_60,*(undefined8 *)(puVar3 + -8),*puVar3);
        if ((int)puVar5 == 0) {
          return puVar5;
        }
        FUN_1001ebf4c(puVar2);
        return (undefined1 *)(ulong)((int)puVar2 != 0);
      }
      puVar3 = puVar3 + 0x38;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar7 = 0x16c;
  }
  FUN_1004d2c58(0xf,0,0x7b,&UNK_10f6c5a93,uVar7);
  return (undefined1 *)0x0;
}



/* Entry: 100414250; end: 10041431f;  */

void FUN_100414250(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [32];
  
  iVar2 = (int)auStack_50;
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 == 0) {
    uVar3 = 0x15d;
  }
  else {
    lVar4 = param_1;
    FUN_10041421c();
    puVar5 = (undefined1 *)(lVar4 + 0x10);
    lVar4 = 4;
    do {
      if (*(int *)(puVar5 + -0x10) == iVar1) {
        lVar4 = param_1;
        FUN_10041404c(param_1,auStack_50,6);
        if ((int)lVar4 == 0) {
          return;
        }
        FUN_1001ed748(auStack_50,*(undefined8 *)(puVar5 + -8),*puVar5);
        if (iVar2 == 0) {
          return;
        }
        FUN_1001ebf4c(param_1);
        return;
      }
      puVar5 = puVar5 + 0x38;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar3 = 0x16c;
  }
  FUN_1004d2c58(0xf,0,0x7b,&UNK_10f6c5a93,uVar3);
  return;
}



/* Entry: 100414320; end: 10041446f;  */

void FUN_100414320(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  plVar1 = param_1;
  func_0x000100411ef4(param_1,*param_2);
  if ((int)plVar1 == 0) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x18))(param_1,param_2 + 1,auStack_d0,auStack_88);
    if ((int)plVar1 != 0) {
      FUN_100414798(param_1,auStack_d0,param_3,param_4,param_5);
    }
  }
  else {
    FUN_1004d2c58(0xf,0,0x6a,&UNK_10f6c70f6,0xd6);
  }
  return;
}



/* Entry: 100414470; end: 100414797;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_100414470(long param_1,ulong *param_2,long param_3,ulong *param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long *plVar13;
  byte bVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong *puVar19;
  byte abStack_389 [73];
  ulong *puStack_340;
  long *plStack_338;
  long *plStack_330;
  ulong *puStack_328;
  undefined1 ***pppuStack_320;
  undefined8 uStack_318;
  ulong auStack_310 [19];
  long lStack_278;
  ulong *puStack_270;
  long *plStack_268;
  long *plStack_260;
  ulong *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  ulong uStack_238;
  byte abStack_22b [67];
  long lStack_1e8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  ulong auStack_190 [4];
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong auStack_150 [4];
  undefined1 auStack_130 [32];
  ulong auStack_110 [4];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_48;
  
  puVar9 = auStack_190;
  puVar12 = auStack_190;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = (ulong)*(uint *)(param_1 + 0x40);
  if ((int)*(uint *)(param_1 + 0x40) < 1) {
LAB_100414744:
    puVar11 = (ulong *)&UNK_10f6c761d;
    puVar7 = (ulong *)0x0;
    puVar19 = (ulong *)0x77;
    param_5 = (long *)0x19b;
    FUN_1004d2c58(0xf);
    plVar2 = (long *)0x0;
  }
  else {
    uVar16 = 0;
    lVar17 = 0x90;
    do {
      uVar16 = *(ulong *)((long)param_2 + lVar17) | uVar16;
      lVar17 = lVar17 + 8;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    if (uVar16 == 0) goto LAB_100414744;
    uStack_168 = param_2[0x13];
    uStack_170 = param_2[0x12];
    uStack_158 = param_2[0x15];
    uStack_160 = param_2[0x14];
    puVar11 = param_4;
    FUN_100412d18(&uStack_70,&uStack_170);
    FUN_100413574(&uStack_70,&uStack_70,&uStack_170);
    FUN_100412d18(auStack_90,&uStack_70);
    FUN_100413574(auStack_90,auStack_90,&uStack_170);
    FUN_100412d18(auStack_b0,auStack_90);
    iVar8 = 2;
    do {
      FUN_100412d18(auStack_b0,auStack_b0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_100413574(auStack_b0,auStack_b0,auStack_90);
    FUN_100412d18(auStack_d0,auStack_b0);
    iVar8 = 5;
    do {
      FUN_100412d18(auStack_d0,auStack_d0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_100413574(auStack_d0,auStack_d0,auStack_b0);
    FUN_100412d18(auStack_f0,auStack_d0);
    iVar8 = 2;
    do {
      FUN_100412d18(auStack_f0,auStack_f0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_100413574(auStack_f0,auStack_f0,auStack_90);
    FUN_100412d18(auStack_110,auStack_f0);
    iVar8 = 0xe;
    do {
      FUN_100412d18(auStack_110,auStack_110);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_100413574(auStack_110,auStack_110,auStack_f0);
    FUN_100412d18(auStack_130,auStack_110);
    FUN_100412d18(auStack_130,auStack_130);
    FUN_100413574(auStack_130,auStack_130,&uStack_70);
    FUN_100412d18(auStack_150,auStack_130);
    iVar8 = 0x1f;
    do {
      FUN_100412d18(auStack_150,auStack_150);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_100413574(auStack_150,auStack_150,&uStack_170);
    iVar8 = 0x80;
    do {
      FUN_100412d18(auStack_150,auStack_150);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_100413574(auStack_150,auStack_150,auStack_130);
    iVar8 = 0x20;
    do {
      FUN_100412d18(auStack_150,auStack_150);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_100413574(auStack_150,auStack_150,auStack_130);
    iVar8 = 0x1e;
    do {
      FUN_100412d18(auStack_150,auStack_150);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar19 = auStack_110;
    FUN_100413574(auStack_150,auStack_150);
    FUN_100412d18(auStack_150,auStack_150);
    puVar7 = auStack_150;
    FUN_100412d18(auStack_190);
    if (param_3 != 0) {
      uStack_68 = param_2[1];
      uStack_70 = *param_2;
      uStack_58 = param_2[3];
      uStack_60 = param_2[2];
      FUN_100413574(&uStack_70,&uStack_70);
      puVar7 = &uStack_70;
      FUN_100413b54(param_3);
      puVar19 = puVar9;
    }
    if (param_4 != (ulong *)0x0) {
      uStack_68 = param_2[10];
      uStack_70 = param_2[9];
      uStack_58 = param_2[0xc];
      uStack_60 = param_2[0xb];
      FUN_100412d18(auStack_190,auStack_190);
      FUN_100413574(&uStack_70,&uStack_70,&uStack_170);
      FUN_100413574(&uStack_70,&uStack_70);
      puVar7 = &uStack_70;
      FUN_100413b54(param_4);
      puVar19 = puVar12;
    }
    plVar2 = (long *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar2;
  }
  func_0x000107c60e78();
  pcStack_198 = FUN_100414798;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar8 = (int)puVar19;
  puStack_1a0 = &stack0xfffffffffffffff0;
  if ((iVar8 == 2) || (iVar8 == 4)) {
    plVar3 = plVar2 + 7;
    puVar6 = puVar7;
    puVar9 = puVar19;
    puVar12 = puVar11;
    plVar13 = param_5;
    FUN_100202834();
    uVar16 = (ulong)((int)plVar3 + 7U >> 3);
    uVar15 = uVar16;
    if (iVar8 != 4) {
      uVar15 = 0;
    }
    plVar18 = (long *)(uVar16 + uVar15 + 1);
    if (puVar11 != (ulong *)0x0) {
      if (param_5 < plVar18) {
        puVar9 = (ulong *)0x64;
        plVar13 = (long *)0x5f;
        goto LAB_100414848;
      }
      (**(code **)(*plVar2 + 0x80))(plVar2,(byte *)((long)puVar11 + 1),&uStack_238,puVar7);
      plVar3 = plVar2;
      if (iVar8 == 4) {
        puVar6 = (ulong *)((byte *)((long)puVar11 + 1) + uVar16);
        puVar9 = &uStack_238;
        puVar12 = puVar7 + 9;
        (**(code **)(*plVar2 + 0x80))();
        bVar14 = 4;
      }
      else {
        puVar6 = (ulong *)((long)abStack_22b + 1);
        puVar9 = &uStack_238;
        puVar12 = puVar7 + 9;
        (**(code **)(*plVar2 + 0x80))();
        bVar14 = abStack_22b[uStack_238] & 1 | (byte)puVar19;
      }
      *(byte *)puVar11 = bVar14;
    }
  }
  else {
    puVar9 = (ulong *)0x6f;
    plVar13 = (long *)0x51;
LAB_100414848:
    puVar12 = (ulong *)&UNK_10f6c70f6;
    puVar6 = (ulong *)0x0;
    plVar3 = (long *)0xf;
    FUN_1004d2c58();
    plVar18 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return plVar18;
  }
  func_0x000107c60e78();
  puVar10 = auStack_310;
  puVar5 = auStack_310;
  pcStack_248 = FUN_100414914;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  puVar7 = puVar6;
  puStack_270 = puVar19;
  plStack_268 = plVar2;
  plStack_260 = plVar18;
  puStack_258 = puVar11;
  ppuStack_250 = &puStack_1a0;
  if ((puVar6 < (ulong *)0xa) &&
     (puVar19 = (ulong *)((long)puVar6 << 1), puVar11 = puVar6, plVar18 = plVar13,
     puVar6 == (ulong *)(long)(int)plVar13[4] && puVar12 <= puVar19)) {
    auStack_310[0xf] = 0;
    auStack_310[0xe] = 0;
    auStack_310[0x11] = 0;
    auStack_310[0x10] = 0;
    auStack_310[0xb] = 0;
    auStack_310[10] = 0;
    auStack_310[0xd] = 0;
    auStack_310[0xc] = 0;
    auStack_310[7] = 0;
    auStack_310[6] = 0;
    auStack_310[9] = 0;
    auStack_310[8] = 0;
    auStack_310[3] = 0;
    auStack_310[2] = 0;
    auStack_310[5] = 0;
    auStack_310[4] = 0;
    auStack_310[1] = 0;
    auStack_310[0] = 0;
    if (puVar12 != (ulong *)0x0) {
      func_0x000107c60e68(auStack_310,puVar9,(long)puVar12 << 3,0x90);
    }
    puVar12 = puVar19;
    FUN_10022846c();
    puVar9 = puVar10;
    plVar2 = plVar3;
    if ((int)plVar4 != 0) {
      if (puVar6 != (ulong *)0x0) {
        puVar10 = (ulong *)((long)puVar6 << 4);
        puVar7 = (ulong *)0x0;
        puVar12 = (ulong *)0x90;
        func_0x000107c60e6c();
        plVar4 = (long *)puVar5;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
        return plVar4;
      }
      goto LAB_1004149fc;
    }
  }
  puVar10 = puVar9;
  func_0x000107c60ebc();
LAB_1004149fc:
  func_0x000107c60e78();
  puStack_340 = puVar19;
  plStack_338 = plVar2;
  plStack_330 = plVar18;
  puStack_328 = puVar11;
  pppuStack_320 = &ppuStack_250;
  uStack_318 = 0x100414a00;
  FUN_100414914(abStack_389 + 1,(long)(int)plVar4[8],puVar12,(long)(int)plVar4[8],plVar4[0x27]);
  plVar4 = plVar4 + 7;
  FUN_100202834();
  uVar1 = (int)plVar4 + 7;
  uVar16 = (ulong)(uVar1 >> 3);
  uVar15 = uVar16;
  if (7 < uVar1) {
    do {
      *(byte *)puVar7 = abStack_389[uVar15];
      uVar15 = uVar15 - 1;
      puVar7 = (ulong *)((long)puVar7 + 1);
    } while (uVar15 != 0);
  }
  *puVar10 = uVar16;
  return plVar4;
}



/* Entry: 100414798; end: 100414913;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_100414798(long *param_1,ulong *param_2,ulong *param_3,ulong *param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  byte bVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  byte abStack_1f9 [73];
  ulong *puStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  ulong *puStack_198;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  ulong auStack_180 [19];
  long lStack_e8;
  ulong *puStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_a8;
  byte abStack_9b [67];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar7 = (int)param_3;
  if ((iVar7 == 2) || (iVar7 == 4)) {
    plVar2 = param_1 + 7;
    puVar5 = param_2;
    puVar8 = param_3;
    puVar10 = param_4;
    plVar11 = param_5;
    FUN_100202834();
    uVar15 = (ulong)((int)plVar2 + 7U >> 3);
    uVar13 = uVar15;
    if (iVar7 != 4) {
      uVar13 = 0;
    }
    plVar14 = (long *)(uVar15 + uVar13 + 1);
    if (param_4 != (ulong *)0x0) {
      if (param_5 < plVar14) {
        puVar8 = (ulong *)0x64;
        plVar11 = (long *)0x5f;
        goto LAB_100414848;
      }
      (**(code **)(*param_1 + 0x80))(param_1,(byte *)((long)param_4 + 1),&uStack_a8,param_2);
      plVar2 = param_1;
      if (iVar7 == 4) {
        puVar5 = (ulong *)((byte *)((long)param_4 + 1) + uVar15);
        puVar8 = &uStack_a8;
        puVar10 = param_2 + 9;
        (**(code **)(*param_1 + 0x80))();
        bVar12 = 4;
      }
      else {
        puVar5 = (ulong *)((long)abStack_9b + 1);
        puVar8 = &uStack_a8;
        puVar10 = param_2 + 9;
        (**(code **)(*param_1 + 0x80))();
        bVar12 = abStack_9b[uStack_a8] & 1 | (byte)param_3;
      }
      *(byte *)param_4 = bVar12;
    }
  }
  else {
    puVar8 = (ulong *)0x6f;
    plVar11 = (long *)0x51;
LAB_100414848:
    puVar10 = (ulong *)&UNK_10f6c70f6;
    puVar5 = (ulong *)0x0;
    plVar2 = (long *)0xf;
    FUN_1004d2c58();
    plVar14 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar14;
  }
  func_0x000107c60e78();
  puVar9 = auStack_180;
  puVar4 = auStack_180;
  pcStack_b8 = FUN_100414914;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar2;
  puVar6 = puVar5;
  puStack_e0 = param_3;
  plStack_d8 = param_1;
  plStack_d0 = plVar14;
  puStack_c8 = param_4;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((puVar5 < (ulong *)0xa) &&
     (param_3 = (ulong *)((long)puVar5 << 1), param_4 = puVar5, plVar14 = plVar11,
     puVar5 == (ulong *)(long)(int)plVar11[4] && puVar10 <= param_3)) {
    auStack_180[0xf] = 0;
    auStack_180[0xe] = 0;
    auStack_180[0x11] = 0;
    auStack_180[0x10] = 0;
    auStack_180[0xb] = 0;
    auStack_180[10] = 0;
    auStack_180[0xd] = 0;
    auStack_180[0xc] = 0;
    auStack_180[7] = 0;
    auStack_180[6] = 0;
    auStack_180[9] = 0;
    auStack_180[8] = 0;
    auStack_180[3] = 0;
    auStack_180[2] = 0;
    auStack_180[5] = 0;
    auStack_180[4] = 0;
    auStack_180[1] = 0;
    auStack_180[0] = 0;
    if (puVar10 != (ulong *)0x0) {
      func_0x000107c60e68(auStack_180,puVar8,(long)puVar10 << 3,0x90);
    }
    puVar10 = param_3;
    FUN_10022846c();
    puVar8 = puVar9;
    param_1 = plVar2;
    if ((int)plVar3 != 0) {
      if (puVar5 != (ulong *)0x0) {
        puVar9 = (ulong *)((long)puVar5 << 4);
        puVar6 = (ulong *)0x0;
        puVar10 = (ulong *)0x90;
        func_0x000107c60e6c();
        plVar3 = (long *)puVar4;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
        return plVar3;
      }
      goto LAB_1004149fc;
    }
  }
  puVar9 = puVar8;
  func_0x000107c60ebc();
LAB_1004149fc:
  func_0x000107c60e78();
  puStack_1b0 = param_3;
  plStack_1a8 = param_1;
  plStack_1a0 = plVar14;
  puStack_198 = param_4;
  ppuStack_190 = &puStack_c0;
  uStack_188 = 0x100414a00;
  FUN_100414914(abStack_1f9 + 1,(long)(int)plVar3[8],puVar10,(long)(int)plVar3[8],plVar3[0x27]);
  plVar3 = plVar3 + 7;
  FUN_100202834();
  uVar1 = (int)plVar3 + 7;
  uVar15 = (ulong)(uVar1 >> 3);
  uVar13 = uVar15;
  if (7 < uVar1) {
    do {
      *(byte *)puVar6 = abStack_1f9[uVar13];
      uVar13 = uVar13 - 1;
      puVar6 = (ulong *)((long)puVar6 + 1);
    } while (uVar13 != 0);
  }
  *puVar9 = uVar15;
  return plVar3;
}



/* Entry: 100414914; end: 100414a83;  */

void FUN_100414914(undefined1 *param_1,undefined1 *param_2,ulong *param_3,ulong param_4,long param_5
                  )

{
  int iVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  ulong unaff_x22;
  undefined1 auStack_149 [73];
  ulong uStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  ulong auStack_d0 [19];
  long lStack_38;
  
  puVar5 = auStack_d0;
  puVar3 = auStack_d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  puVar4 = param_2;
  if ((param_2 < (undefined1 *)0xa) &&
     (unaff_x22 = (long)param_2 << 1, unaff_x19 = param_2, unaff_x20 = param_5,
     param_2 == (undefined1 *)(long)*(int *)(param_5 + 0x20) && param_4 <= unaff_x22)) {
    auStack_d0[0xf] = 0;
    auStack_d0[0xe] = 0;
    auStack_d0[0x11] = 0;
    auStack_d0[0x10] = 0;
    auStack_d0[0xb] = 0;
    auStack_d0[10] = 0;
    auStack_d0[0xd] = 0;
    auStack_d0[0xc] = 0;
    auStack_d0[7] = 0;
    auStack_d0[6] = 0;
    auStack_d0[9] = 0;
    auStack_d0[8] = 0;
    auStack_d0[3] = 0;
    auStack_d0[2] = 0;
    auStack_d0[5] = 0;
    auStack_d0[4] = 0;
    auStack_d0[1] = 0;
    auStack_d0[0] = 0;
    if (param_4 != 0) {
      func_0x000107c60e68(auStack_d0,param_3,param_4 << 3,0x90);
    }
    param_4 = unaff_x22;
    FUN_10022846c();
    param_3 = puVar5;
    unaff_x21 = param_1;
    if ((int)puVar2 != 0) {
      if (param_2 != (undefined1 *)0x0) {
        puVar5 = (ulong *)((long)param_2 << 4);
        puVar4 = (undefined1 *)0x0;
        param_4 = 0x90;
        func_0x000107c60e6c();
        puVar2 = (undefined1 *)puVar3;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_1004149fc;
    }
  }
  puVar5 = param_3;
  func_0x000107c60ebc();
LAB_1004149fc:
  func_0x000107c60e78();
  uStack_100 = unaff_x22;
  puStack_f8 = unaff_x21;
  lStack_f0 = unaff_x20;
  puStack_e8 = unaff_x19;
  puStack_e0 = &stack0xfffffffffffffff0;
  uStack_d8 = 0x100414a00;
  FUN_100414914(auStack_149 + 1,(long)*(int *)(puVar2 + 0x40),param_4,(long)*(int *)(puVar2 + 0x40),
                *(undefined8 *)(puVar2 + 0x138));
  iVar1 = (int)puVar2 + 0x38;
  FUN_100202834();
  uVar6 = (ulong)(iVar1 + 7U >> 3);
  uVar7 = uVar6;
  if (7 < iVar1 + 7U) {
    do {
      *puVar4 = auStack_149[uVar7];
      uVar7 = uVar7 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 != 0);
  }
  *puVar5 = uVar6;
  return;
}



/* Entry: 100414a84; end: 100414b2f;  */

undefined4 FUN_100414a84(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  uVar1 = param_1;
  func_0x0001001ed7c0(param_1,&lStack_28,&uStack_30);
  if ((int)uVar1 == 0) {
    FUN_1001ed8c0(param_1);
  }
  else {
    if (CONCAT44(uStack_2c,uStack_30) >> 0x1f == 0) {
      if (param_2 != (long *)0x0) {
        lVar2 = *param_2;
        if (lVar2 == 0) {
          *param_2 = lStack_28;
          lStack_28 = 0;
        }
        else {
          if (CONCAT44(uStack_2c,uStack_30) == 0) {
            lVar3 = 0;
          }
          else {
            func_0x000107c610b4(lVar2,lStack_28);
            lVar3 = CONCAT44(uStack_2c,uStack_30);
            lVar2 = *param_2;
          }
          *param_2 = lVar2 + lVar3;
        }
      }
      FUN_1001e33e0(lStack_28);
      return uStack_30;
    }
    FUN_1001e33e0(lStack_28);
  }
  return 0xffffffff;
}



/* Entry: 100414b30; end: 100414b37;  */

void FUN_100414b30(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = (int)puVar2 + 0x20;
    FUN_10021f0b0();
    if (iVar1 != 0) {
      if ((puVar2[5] != 0) && (pcVar3 = *(code **)(puVar2[5] + 0x18), pcVar3 != (code *)0x0)) {
        (*pcVar3)(puVar2);
      }
      func_0x000100411da0(*puVar2);
      FUN_1004cb584(puVar2[1]);
      FUN_1001e33e0(puVar2[2]);
      FUN_10021f290(0x113310c50,puVar2,puVar2 + 6);
      if (puVar2 != (undefined8 *)0x0) {
        plVar4 = puVar2 + -1;
        if (*plVar4 + 8 != 0) {
          func_0x000107c60ee4(plVar4,*plVar4 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar4);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 100414b38; end: 100414bb7;  */

void FUN_100414b38(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = (int)param_1 + 0x20;
    FUN_10021f0b0();
    if (iVar1 != 0) {
      if ((param_1[5] != 0) && (pcVar2 = *(code **)(param_1[5] + 0x18), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
      }
      func_0x000100411da0(*param_1);
      FUN_1004cb584(param_1[1]);
      FUN_1001e33e0(param_1[2]);
      FUN_10021f290(0x113310c50,param_1,param_1 + 6);
      if (param_1 != (undefined8 *)0x0) {
        plVar3 = param_1 + -1;
        if (*plVar3 + 8 != 0) {
          func_0x000107c60ee4(plVar3,*plVar3 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 100414bb8; end: 100414c67; -[SCFideliusUserIdentityAndId initWithCoder:] */

undefined1 * FUN_100414bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eb010;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100414c68; end: 100414c73; +[SCLazy notMainThreadDuringColdStartup:] */

void FUN_100414c68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de918,PTR_s_automaticCreationWithInitializat_1125a21a0);
  return;
}



/* Entry: 100414c74; end: 100414c7b; -[SCFideliusUserIdentityAndId identity] */

undefined8 FUN_100414c74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100414c7c; end: 100414c83; -[SCFideliusUserIdentity version] */

undefined8 FUN_100414c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100414c84; end: 100414d23;  */

void FUN_100414c84(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x48));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x50));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x58));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x60));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x68));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x70));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x78));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x80));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x88));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x98,param_2 + 0x98);
  return;
}



/* Entry: 100414d24; end: 100414d2b;  */

void FUN_100414d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100414d2c; end: 100414da7; +[SCFideliusManager nameForType:] */

void FUN_100414d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c4546c();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c4d9e8(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100414da8; end: 100414dfb; +[SCFideliusManager initSourceNames] */

void FUN_100414da8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c1770 != -1) {
    FUN_10002a2fc(0x1136c1770,&PTR___NSConcreteGlobalBlock_1108c0da0);
  }
  uVar1 = uRam00000001136c1768;
  func_0x000107c61174(uRam00000001136c1768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100414dfc; end: 100414e1b;  */

void FUN_100414dfc(long param_1)

{
  func_0x000107c40aa4(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c611b0();
  return;
}



/* Entry: 100414e1c; end: 100415c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100414e1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined *puVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  long lVar60;
  long lStack_130;
  
  puVar1 = &UNK_10f2cf908;
  FUN_1000ba800();
  lVar2 = param_1 + 0x98;
  func_0x000107c61148();
  if (lVar2 == 0) {
    uVar59 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar59 = *(undefined8 *)(lVar2 + _DAT_11272557c);
    func_0x000107c61174();
    func_0x000107c42c14(uVar59);
    puVar4 = PTR_PTR_1126ba5f0;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_1127255d4;
    func_0x000107c61148(lVar5);
    lVar6 = lVar5;
    func_0x000107c436a8();
    func_0x000107c61180();
    lVar7 = lVar2 + _DAT_112725580;
    func_0x000107c61148(lVar7);
    lVar8 = lVar7;
    func_0x000107c444a4();
    func_0x000107c61180();
    puVar9 = puVar3;
    func_0x000107c43bf4(puVar3);
    func_0x000107c61180();
    func_0x000107c47688();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    uVar59 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c5c734(uVar59);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar59);
    puVar9 = PTR_PTR_1126ba5f8;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_1127255dc;
    func_0x000107c61148(lVar5);
    func_0x000107c492a4();
    func_0x000107c61170(lVar5);
    puVar10 = PTR_PTR_1126ba600;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_112725584;
    func_0x000107c61148(lVar5);
    lVar11 = lVar5;
    func_0x000107c5dac4();
    func_0x000107c61180();
    lVar57 = (long)_DAT_112725588;
    lVar7 = lVar2 + lVar57;
    func_0x000107c61148(lVar7);
    lVar12 = lVar7;
    func_0x000107c42f48();
    func_0x000107c61180();
    lVar6 = lVar2 + _DAT_112725600;
    func_0x000107c61148(lVar6);
    lVar13 = lVar6;
    func_0x000107c4a8e8();
    func_0x000107c61180();
    lVar8 = lVar2 + _DAT_11272558c;
    func_0x000107c61148(lVar8);
    lVar14 = lVar8;
    func_0x000107c5b828();
    func_0x000107c61180();
    func_0x000107c49404();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar5);
    puVar15 = PTR_PTR_1126ba608;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_112725590;
    func_0x000107c61148(lVar5);
    lVar6 = lVar5;
    func_0x000107c5b4b0();
    func_0x000107c61180();
    lVar7 = lVar2 + _DAT_1127255b0;
    func_0x000107c61148(lVar7);
    lVar8 = lVar7;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    func_0x000107c48840();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    puVar16 = PTR_PTR_1126ba610;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_1127255ec;
    func_0x000107c61148(lVar5);
    lVar7 = lVar5;
    func_0x000107c3ddb0();
    func_0x000107c61180();
    func_0x000107c49308();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar5);
    puVar17 = PTR_PTR_1126ba618;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_1127255e4;
    func_0x000107c61148(lVar5);
    lVar8 = lVar5;
    func_0x000107c3f854();
    func_0x000107c61180();
    lVar7 = lVar2 + _DAT_11272560c;
    func_0x000107c61148(lVar7);
    lVar11 = lVar7;
    func_0x000107c3ecc4();
    func_0x000107c61180();
    uVar59 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c43bf4(uVar59);
    func_0x000107c61180();
    lVar6 = lVar2 + _DAT_112725614;
    func_0x000107c61148(lVar6);
    lVar12 = lVar6;
    func_0x000107c4b748();
    func_0x000107c61180();
    func_0x000107c4609c();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar59);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar5);
    lVar5 = lVar2 + _DAT_1127255bc;
    func_0x000107c61148();
    lVar7 = lVar5;
    func_0x000107c5da60();
    func_0x000107c61180();
    lVar11 = lVar7;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar5);
    puVar18 = PTR_PTR_1126ba528;
    func_0x000107c610f4();
    func_0x000107c4547c();
    puVar24 = puVar18;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    puVar19 = puVar24;
    func_0x000107c4e430();
    func_0x000107c61180();
    func_0x000107c61170(puVar24);
    puVar20 = PTR_PTR_1126ba620;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_1127255e8;
    func_0x000107c61148();
    lVar8 = lVar5;
    func_0x000107c4f9bc();
    func_0x000107c61180();
    lVar7 = lVar2 + _DAT_1127255e4;
    func_0x000107c61148(lVar7);
    lVar6 = lVar7;
    func_0x000107c3f854();
    func_0x000107c61180();
    uVar59 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c43bf4();
    func_0x000107c61180();
    func_0x000107c4800c();
    func_0x000107c61170(uVar59);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar5);
    puVar21 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200();
    func_0x000107c61180();
    func_0x000107c45454();
    func_0x000107c61170(puVar24);
    puVar22 = PTR_PTR_1126b7e38;
    func_0x000107c50198();
    func_0x000107c61180();
    puVar23 = PTR_PTR_1126ae820;
    func_0x000107c610f4();
    puVar24 = PTR_PTR_1126ae750;
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c49470();
    func_0x000107c61170(puVar24);
    puVar24 = PTR_PTR_1126ba628;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_112725610;
    func_0x000107c61148(lVar5);
    lVar7 = lVar5;
    func_0x000107c42f4c();
    func_0x000107c61180();
    func_0x000107c48934();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar5);
    lVar5 = lVar2 + _DAT_1127255f0;
    func_0x000107c61148();
    lVar8 = lVar5;
    func_0x000107c4d598();
    func_0x000107c61180();
    lVar6 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c4d5a4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar5);
    uVar25 = lVar2 + _DAT_112725608;
    func_0x000107c61148();
    puVar26 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c61158();
    uVar27 = uVar25;
    func_0x000107c6115c(uVar25,puVar26);
    if ((uVar27 & 1) == 0) {
      lStack_130 = lVar2 + _DAT_112725608;
      func_0x000107c61148();
    }
    else {
      lStack_130 = 0;
    }
    func_0x000107c61170(uVar25);
    puVar26 = PTR_PTR_1126ba630;
    func_0x000107c610f4();
    lVar5 = lVar2 + _DAT_1127255bc;
    func_0x000107c61148();
    lVar28 = lVar5;
    func_0x000107c5da60();
    func_0x000107c61180();
    lVar6 = lVar2 + _DAT_112725600;
    func_0x000107c61148();
    lVar29 = lVar6;
    func_0x000107c4a8e8();
    func_0x000107c61180();
    lVar30 = lVar29;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar8 = lVar2 + _DAT_112725600;
    func_0x000107c61148();
    lVar31 = lVar8;
    func_0x000107c4f920();
    func_0x000107c61180();
    lVar32 = lVar31;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar12 = lVar2 + lVar57;
    func_0x000107c61148();
    lVar33 = lVar12;
    func_0x000107c43ac0();
    func_0x000107c61180();
    lVar57 = lVar2 + lVar57;
    func_0x000107c61148();
    lVar34 = lVar57;
    func_0x000107c443dc();
    func_0x000107c61180();
    lVar13 = lVar2 + _DAT_1127255cc;
    func_0x000107c61148();
    lVar35 = lVar13;
    func_0x000107c5cb84();
    func_0x000107c61180();
    lVar14 = lVar2 + _DAT_1127255d0;
    func_0x000107c61148();
    lVar36 = lVar14;
    func_0x000107c3e340();
    func_0x000107c61180();
    uVar59 = *(undefined8 *)(param_1 + 0x50);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar37 = lVar2 + _DAT_1127255d8;
    func_0x000107c61148();
    lVar38 = lVar37;
    func_0x000107c421c8();
    func_0x000107c61180();
    lVar39 = lVar2 + _DAT_1127255c0;
    func_0x000107c61148();
    lVar40 = lVar39;
    func_0x000107c3e5d8();
    func_0x000107c61180();
    puVar41 = PTR_PTR_1126b2980;
    func_0x000107c610f4();
    lVar42 = lVar2 + _DAT_1127255c4;
    func_0x000107c61148();
    lVar43 = lVar42;
    func_0x000107c408d0();
    func_0x000107c61180();
    func_0x000107c46228();
    lVar44 = lVar2 + _DAT_1127255e0;
    func_0x000107c61148();
    lVar45 = lVar44;
    func_0x000107c3fa04();
    func_0x000107c61180();
    lVar46 = lVar2 + _DAT_1127255fc;
    func_0x000107c61148();
    lVar47 = lVar46;
    func_0x000107c42364();
    func_0x000107c61180();
    lVar48 = lVar2 + _DAT_112725604;
    func_0x000107c61148();
    lVar49 = lVar48;
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar50 = lVar2 + _DAT_1127255b0;
    func_0x000107c61148();
    lVar51 = lVar50;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    lVar52 = lVar2 + _DAT_11272560c;
    func_0x000107c61148();
    lVar53 = lVar52;
    func_0x000107c3ecc4();
    func_0x000107c61180();
    lVar54 = lVar2 + _DAT_1127255f8;
    func_0x000107c61148();
    lVar55 = lVar2 + _DAT_1127255b8;
    func_0x000107c61148();
    lVar56 = lVar55;
    func_0x000107c3dfac();
    func_0x000107c61180();
    func_0x000107c4934c();
    lVar60 = (long)_DAT_112725594;
    uVar58 = *(undefined8 *)(lVar2 + lVar60);
    *(undefined **)(lVar2 + lVar60) = puVar26;
    func_0x000107c61170(uVar58);
    func_0x000107c61170(lVar56);
    func_0x000107c61170(lVar55);
    func_0x000107c61170(lVar54);
    func_0x000107c61170(lVar53);
    func_0x000107c61170(lVar52);
    func_0x000107c61170(lVar51);
    func_0x000107c61170(lVar50);
    func_0x000107c61170(lVar49);
    func_0x000107c61170(lVar48);
    func_0x000107c61170(lVar47);
    func_0x000107c61170(lVar46);
    func_0x000107c61170(lVar45);
    func_0x000107c61170(lVar44);
    func_0x000107c61170(puVar41);
    func_0x000107c61170(lVar43);
    func_0x000107c61170(lVar42);
    func_0x000107c61170(lVar40);
    func_0x000107c61170(lVar39);
    func_0x000107c61170(lVar38);
    func_0x000107c61170(lVar37);
    func_0x000107c61170(uVar59);
    func_0x000107c61170(lVar36);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar35);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar34);
    func_0x000107c61170(lVar57);
    func_0x000107c61170(lVar33);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar32);
    func_0x000107c61170(lVar31);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar30);
    func_0x000107c61170(lVar29);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar28);
    func_0x000107c61170(lVar5);
    func_0x000107c3fefc(*(undefined8 *)(param_1 + 0x38));
    uVar59 = *(undefined8 *)(lVar2 + lVar60);
    func_0x000107c61174(uVar59);
    func_0x000107c61170(lStack_130);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(puVar23);
    func_0x000107c61170(puVar22);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(lVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar59);
  return;
}



/* Entry: 100415c34; end: 100415d07; -[SCPureArroyoABTracker initWithPreferences:chatGraphene:docObjectContext:isFromLogin:isFromRegistration:] */

undefined8
FUN_100415c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c470d0();
  func_0x000107c47fe0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100415d08; end: 100415f6f; -[SCNativeUploadDelegateImpl initWithMediaOrchestratorLazy:chatGrapheneLazy:grapheneRegistryLazy:plugins:] */

undefined1 *
FUN_100415d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126e8e10;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100415f70; end: 10041619f; -[SCArroyoConversationDataUpdateAnnouncer initWithCurrentUserId:loggingMessagesReceivedEventsObservable:circumstanceEngine:] */

undefined8 *
FUN_100415f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e8d48;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ba448;
    func_0x000107c610fc();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar1[9];
    puVar1[9] = param_4;
    func_0x000107c61170(uVar3);
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 0xd) = 0;
    func_0x000107c61174(param_5);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_5;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_5);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1004161a0; end: 1004161bf; -[SCArroyoConversationDataUpdateListenerAnnouncer .cxx_construct] */

void FUN_1004161a0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1004161c0; end: 10041633f; -[SCPureArroyoABTracker initWithPreferences:chatGraphene:docObjectContext:isFromLogin:isFromRegistration:performer:] */

undefined8 *
FUN_1004161c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126fac48;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = puVar1[3];
    func_0x000107c61174(puVar1);
    func_0x000107c4e524(uVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100416340; end: 1004163f3; -[SCNativeMessagingServicesEntryPoint _combinedDataWiped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100416340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112725574);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112725598);
  func_0x000107c3ce7c(uVar1);
  func_0x000107c61180();
  func_0x000107c3fe00(uVar3,param_2,uVar1,&PTR___NSConcreteGlobalBlock_110895510);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x000107c43494(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1108955a0);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c6c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004163f4; end: 1004163fb; -[SCArroyoConversationDataUpdateAnnouncer addListener:] */

void FUN_1004163f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1004163fc; end: 1004166a7; -[SCArroyoConversationDataUpdateListenerAnnouncer addListener:] */

undefined8 FUN_1004163fc(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110ca99a0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_1004166a8(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_1004167e8(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_1004165b0:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        func_0x000107c61148();
        func_0x000107c61170();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_1004165d0;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_1004166a8(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_1004166a8(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_1004167e8(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_1004165b0;
    }
  }
  uVar9 = 1;
LAB_1004165d0:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 1004166a8; end: 1004167e7;  */

void FUN_1004166a8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c2bca4();
LAB_1004167e4:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_1004167e4;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 1004167e8; end: 10041682f;  */

void FUN_1004167e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 100416830; end: 100416857; -[SCPureArroyoABTracker abChangeEventObservable] */

void FUN_100416830(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100416858; end: 1004168cb; -[SCNativeInitializeContextInfoDelegateImpl initWithUserInfoServices:] */

undefined1 * FUN_100416858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8e08;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004168cc; end: 1004168d3; -[SCFriendsFeedLoggingServices feedPropertyLogger] */

undefined8 FUN_1004168cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004168d4; end: 100416a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004168d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1ee8;
  ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f00;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd1df8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dcb858;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f18;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f30;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e103b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e103d8;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f48;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f60;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e103f8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e10418;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f78;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1f90;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110de6838;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e10438;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1fa8;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1fc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e10458;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e10478;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1fd8;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1ff0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e10498;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e104b8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_78,&ppuStack_d8,0xc
                     );
  func_0x000107c61180();
  lVar2 = (long)puRam00000001136c1768;
  puRam00000001136c1768 = puVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(lVar2 + _DAT_1130443a0));
  return;
}



/* Entry: 100416a3c; end: 100416a4b; -[_TtC24SCFideliusArroyoServices24SCFideliusArroyoServices keyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100416a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130443a0));
  return;
}



/* Entry: 100416a4c; end: 100416a93; -[_TtC33SponsoredSnapConversationServices33SponsoredSnapConversationServices sponsoredSnapConversationSeqNumProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100416a4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301af20;
  func_0x000107c61428(param_1 + _DAT_11301af20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100416a94; end: 100416bb3; -[SCNativeBlizzardLoggerDelegateImpl initWithUserTrackedLogger:feedPropertyLogger:e2eeKeyProvider:loggingMessagesReceivedEventsSubject:sponsoredSnapConversationSeqNumProvider:] */

undefined8
FUN_100416a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f311ebb);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x11,0,0x1c);
  func_0x000107c49400(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_7);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return param_1;
}



/* Entry: 100416bb4; end: 100416bbb; -[SCGroupsDataPublisher groupsReadySignal] */

void FUN_100416bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 100416bbc; end: 100416fc7; -[SCNativeMessagingServices initWithNativeSessionManager:nativeSessionManagerFuture:nativeFeedManager:nativeCommunityFeedManager:conversationDataUpdateAnnouncer:conversationUpdaterEventPublisher:conversationUpdateAccumulatedAnnouncer:storyDataUpdateAnnouncer:notificationCenterUpdateAnnouncer:incidentalAttachmentUpdateForwarder:storyDestinationEnsureForwarder:friendsFeedEntryStore:conversationDataFetcher:dataWiped:topGroupsIdsObservable:groupsReadySignal:friendsFeedLoadingStatusStream:nativePostSnapInteractionEvents:updatedGroupsObservable:] */

undefined8 *
FUN_100416bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  puStack_70 = PTR_PTR_112703b00;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100416fc8; end: 1004170f3;  */

void FUN_100416fc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004170f4; end: 1004170fb;  */

void FUN_1004170f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004170fc; end: 10041714f;  */

void FUN_1004170fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100417150; end: 10041715f;  */

void FUN_100417150(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100230a80();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a87a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar3);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc6ad0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar3);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar3);
  uVar10 = 0x6553657469766e69;
  func_0x000107c5fadc(0x6553657469766e69,0xee00736563697672);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc4580);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(lVar2 + 0x48) = lVar12;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004175b8);
  (*pcVar1)();
}



/* Entry: 100417160; end: 1004175b7;  */

void FUN_100417160(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100230a80();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a87a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc6ad0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar9 = 0x6553657469766e69;
  func_0x000107c5fadc(0x6553657469766e69,0xee00736563697672);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc4580);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  lVar11 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar9 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar11 != 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(param_2 + 0x48) = lVar11;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004175b8);
  (*pcVar1)();
}



/* Entry: 1004175b8; end: 1004175bf;  */

void FUN_1004175b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004175c0; end: 100417613;  */

void FUN_1004175c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100417614; end: 100417627;  */

void FUN_100417614(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10022fca4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  *(undefined8 *)(lVar2 + 0x38) = uStack_80;
  *(undefined8 *)(lVar2 + 0x40) = uStack_88;
  *(undefined8 *)(lVar2 + 0x48) = uStack_90;
  *(undefined8 *)(lVar2 + 0x50) = uStack_98;
  *(undefined8 *)(lVar2 + 0x58) = uStack_a0;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174();
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174();
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_a0);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar3;
  puVar3 = PTR_PTR_1126a82a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbb910);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar11 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c615f0(uStack_a0);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c615e8(uStack_a0);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc6b10);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  lVar14 = *(long *)(lVar2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6b30);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100417c34);
    (*pcVar1)();
  }
  *(long *)(lVar2 + 0x60) = lVar13;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uStack_a0);
    *(long *)(lVar2 + 0x68) = lVar14;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100417c38);
  (*pcVar1)();
}



/* Entry: 100417628; end: 100417c37;  */

void FUN_100417628(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10022fca4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_a0);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a82a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbb910);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar10 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6650);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c615f0(uStack_a0);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(uStack_a0);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc6b10);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  lVar13 = *(long *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6b30);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100417c34);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x60) = lVar12;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uStack_a0);
    *(long *)(param_2 + 0x68) = lVar13;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100417c38);
  (*pcVar1)();
}



/* Entry: 100417c38; end: 100417e33; -[SCNativeBlizzardLoggerDelegateImpl initWithUserTrackedLogger:feedPropertyLogger:e2eeKeyProvider:loggingMessagesReceivedEventsSubject:performer:sponsoredSnapConversationSeqNumProvider:] */

undefined8 *
FUN_100417c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126eb020;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100417e34; end: 100417e3b;  */

void FUN_100417e34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100417e3c; end: 100417e8f;  */

void FUN_100417e3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100417e90; end: 100417e97;  */

void FUN_100417e90(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001dd1ac();
  func_0x000107c613fc();
  FUN_100417f0c(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100417e98; end: 100417f0b;  */

void FUN_100417e98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001dd1ac();
  func_0x000107c613fc();
  FUN_100417f0c(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100417f0c; end: 100418063;  */

void FUN_100417f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8290;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc66f0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 100418064; end: 10041806b; -[SCMessagingExperimentServices messageExperimentService] */

undefined8 FUN_100418064(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041806c; end: 1004180df; -[SCNativeIdentityDelegateImpl initWithSnapchattersDataFetcher:messagingExperimentService:] */

undefined1 * FUN_10041806c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8e18;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004180e0; end: 1004180e7; -[SCUserExtensionStorageServices appGroupUserDefaults] */

undefined8 FUN_1004180e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


