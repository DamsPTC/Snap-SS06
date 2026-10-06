/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083d5074; end: 1083d5147;  */

void FUN_1083d5074(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  int iStack_38;
  
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_70 = &PTR_FUN_110a44848;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = -1;
  iStack_38 = -1;
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  for (puVar2 = *(undefined8 **)(param_1 + 0x38); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_1083d5148(&ppuStack_70,*puVar2);
  }
  if ((((*(char *)(*(long *)(param_1 + 8) + 1) == '\x02') && ((int)lStack_40 < 0)) &&
      (lStack_40 < 0)) && (iStack_38 < 0)) {
    FUN_1083c8a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0xffffff,&UNK_10f49216c,0x2e);
  }
  FUN_1083d568c(&ppuStack_70);
  return;
}



/* Entry: 1083d5148; end: 1083d568b;  */

void FUN_1083d5148(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  char cVar8;
  char cVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  uint uVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  ulong extraout_x8_00;
  long extraout_x9;
  long lVar16;
  long *extraout_x10;
  ulong uVar17;
  ulong extraout_x10_00;
  undefined8 *puVar18;
  uint extraout_w11;
  undefined8 extraout_x11;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [24];
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b0 [24];
  long alStack_98 [3];
  long alStack_80 [4];
  
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 1:
    lVar20 = *(long *)(param_2 + 0x10);
    plVar11 = *(long **)(lVar20 + 0x38);
    for (lVar16 = (long)*(int *)(lVar20 + 0x40) << 3; lVar16 != 0; lVar16 = lVar16 + -8) {
      lVar22 = *plVar11;
      if ((*(uint *)(lVar22 + 0x30) & 0x30) == 0x20) {
        lVar13 = lVar22;
        FUN_1083d70ac(*(undefined8 *)(param_1 + 0x18));
        cVar9 = (int)lVar13 < 0;
        cVar8 = '\0';
        if ((int)lVar13 < 1) {
          uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
          uVar4 = *(undefined4 *)(lVar22 + 8);
          uStack_f8 = *(undefined8 *)(lVar20 + 0x18);
          lStack_100 = *(long *)(lVar20 + 0x10);
          func_0x000107c27958(auStack_e8,&lStack_100);
          func_0x0001004c3cd0(&uStack_d0,&UNK_10f49219b,auStack_e8);
          func_0x00010048a6c8(auStack_b0,&uStack_d0,&UNK_10f492237);
          uStack_128 = *(undefined8 *)(lVar22 + 0x18);
          uStack_130 = *(undefined8 *)(lVar22 + 0x10);
          func_0x000107c27958(auStack_118,&uStack_130);
          func_0x0001083d599c();
          func_0x00010048a6c8(alStack_80,alStack_98,&DAT_10f638984);
          func_0x0001083d594c();
          uVar3 = extraout_x11;
          plVar7 = extraout_x10;
          if (cVar9 == cVar8) {
            uVar3 = extraout_x8;
            plVar7 = alStack_80;
          }
          FUN_1083c8a60(uVar21,uVar4,plVar7,uVar3);
          func_0x0001083d5994();
          func_0x0001083d598c();
          func_0x0001083d59f0();
          func_0x0001083d59dc();
          func_0x0001083d5a00();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
        }
      }
      plVar11 = plVar11 + 1;
    }
    break;
  case 3:
    if (*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 1) - 7 < 8) {
      lVar16 = *(long *)(param_2 + 0x10);
      uVar17 = *(ulong *)(param_1 + 8);
      plVar11 = *(long **)(*(long *)(lVar16 + 0x10) + 0x20);
      (**(code **)(*plVar11 + 0x80))();
      uVar15 = uVar17 + (long)plVar11;
      if (CARRY8(uVar17,(ulong)plVar11)) {
        uVar15 = 0xffffffffffffffff;
      }
      *(ulong *)(param_1 + 8) = uVar15;
      if (uVar17 < 100000 && 99999 < uVar15) {
        lVar16 = *(long *)(lVar16 + 0x10);
        uStack_c8 = *(undefined8 *)(lVar16 + 0x18);
        uStack_d0 = *(undefined8 *)(lVar16 + 0x10);
        func_0x000107c27958(auStack_b0,&uStack_d0);
        func_0x0001083d59e4(&UNK_10f4921ca);
        func_0x0001083d5960();
        func_0x0001083d594c();
        func_0x0001083d5970();
code_r0x0001083d544c:
        func_0x0001083d5994();
        func_0x0001083d598c();
        puVar12 = auStack_b0;
code_r0x0001083d557c:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
      }
    }
    break;
  case 4:
    lVar16 = param_1;
    func_0x0001083d59ac();
    iVar6 = *(int *)(lVar16 + 0x1c);
    func_0x0001083d59ac();
    lVar20 = (long)*(int *)(lVar16 + 0xc);
    if (*(int *)(lVar16 + 0xc) != -1) {
      lStack_100 = lVar20 + ((long)iVar6 << 0x20);
      plVar11 = &lStack_100;
      FUN_1083d5828();
      uVar14 = *(uint *)(param_1 + 0x24);
      uVar15 = (ulong)uVar14;
      uVar17 = (ulong)(uVar14 - 1 & (uint)plVar11);
      uVar2 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
      uVar19 = (ulong)uVar2;
      lVar16 = lStack_100;
      while (uVar2 != 0) {
        uVar14 = (uint)uVar15;
        piVar1 = (int *)(*(long *)(param_1 + 0x28) + (long)(int)uVar17 * 0x10);
        iVar5 = *piVar1;
        if (iVar5 == 0) break;
        if (((int)plVar11 == iVar5) && (lVar16 == *(long *)(piVar1 + 2))) {
          if (iVar6 == -1) {
            __ZNSt3__19to_stringEi(auStack_b0,lVar20);
            func_0x0001083d59e4(&UNK_10f492227);
            func_0x0001083d5960();
            func_0x0001083d594c();
            func_0x0001083d5970();
            goto code_r0x0001083d544c;
          }
          __ZNSt3__19to_stringEi(auStack_e8,(long)iVar6);
          func_0x0001004c3cd0(&uStack_d0,&UNK_10f4921f5,auStack_e8);
          func_0x00010048a6c8(auStack_b0,&uStack_d0,&UNK_10f492201);
          __ZNSt3__19to_stringEi(auStack_118,lVar20);
          func_0x0001083d599c();
          func_0x0001083d5960();
          func_0x0001083d594c();
          func_0x0001083d5970();
          func_0x0001083d5994();
          func_0x0001083d598c();
          func_0x0001083d59f0();
          func_0x0001083d59dc();
          func_0x0001083d5a00();
          puVar12 = auStack_e8;
          goto code_r0x0001083d557c;
        }
        func_0x0001083d59bc();
        uVar14 = (uint)extraout_x8_00;
        uVar15 = extraout_x8_00;
        uVar17 = extraout_x10_00;
        lVar16 = extraout_x9;
        uVar2 = extraout_w11;
      }
      alStack_98[0] = lVar16;
      if ((int)(uVar14 * 3) <= *(int *)(param_1 + 0x20) * 4) {
        uVar2 = uVar14 << 1;
        if ((int)uVar14 < 1) {
          uVar2 = 4;
        }
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(uint *)(param_1 + 0x24) = uVar2;
        alStack_80[0] = *(long *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x28) = 0;
        puVar10 = (undefined8 *)(((ulong)(uVar2 >> 1) & 0x3fffffff) << 5 | 0x10);
        __Znam();
        *puVar10 = 0x10;
        puVar10[1] = (ulong)uVar2;
        if (uVar2 != 0) {
          lVar16 = (ulong)uVar2 << 4;
          puVar18 = puVar10 + 2;
          do {
            *(undefined4 *)puVar18 = 0;
            lVar16 = lVar16 + -0x10;
            puVar18 = puVar18 + 2;
          } while (lVar16 != 0);
        }
        *(undefined8 **)(param_1 + 0x28) = puVar10 + 2;
        for (lVar16 = 0; uVar19 << 4 != lVar16; lVar16 = lVar16 + 0x10) {
          if (*(int *)(alStack_80[0] + lVar16) != 0) {
            FUN_1083d5854(param_1 + 0x20,alStack_80[0] + lVar16 + 8);
          }
        }
        FUN_1083d5910(alStack_80);
      }
      FUN_1083d5854(param_1 + 0x20,alStack_98);
    }
    break;
  case 5:
    if (-1 < *(int *)(param_2 + 0x38)) {
      if (*(int *)(param_1 + 0x30) < 0) {
        *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x38);
      }
      else {
        func_0x0001083d597c();
        func_0x0001083d59d4();
      }
    }
    if (-1 < *(int *)(param_2 + 0x3c)) {
      if (*(int *)(param_1 + 0x34) < 0) {
        *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x3c);
      }
      else {
        func_0x0001083d597c();
        func_0x0001083d59d4();
      }
    }
    if (-1 < *(int *)(param_2 + 0x40)) {
      if (*(int *)(param_1 + 0x38) < 0) {
        *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x40);
      }
      else {
        func_0x0001083d597c();
        func_0x0001083d59d4();
      }
    }
  }
  FUN_1083c29d4(param_1,param_2);
  return;
}



/* Entry: 1083d568c; end: 1083d56bb;  */

undefined8 * FUN_1083d568c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a44848;
  FUN_1083d5910(param_1 + 5);
  return param_1;
}



/* Entry: 1083d56bc; end: 1083d56cf;  */

void FUN_1083d56bc(void)

{
  FUN_1083d568c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083d56d0; end: 1083d5827;  */

void FUN_1083d56d0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (((iVar1 != 0x26) && (iVar1 != 0x31)) && (iVar1 != 0x2a)) {
    if (iVar1 == 0x27) {
      if ((*(char *)(*(long *)(param_2 + 0x18) + 0x55) == '\0') &&
         (*(long *)(*(long *)(param_2 + 0x18) + 0x28) == 0)) {
        FUN_1083e43a8(auStack_88);
        func_0x0001004c3cd0(auStack_70,&UNK_10f49219b,auStack_88);
        func_0x00010048a6c8(auStack_58,auStack_70,&UNK_10f4921a6);
        func_0x0001083d5970();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      }
      goto LAB_1083d57d4;
    }
    plVar2 = *(long **)(param_2 + 0x10);
    (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(**(long **)(param_1 + 0x10) + 0xe0));
    if ((int)plVar2 == 0) goto LAB_1083d57d4;
  }
  func_0x0001083d597c();
  FUN_1083c8a60();
LAB_1083d57d4:
  FUN_1083c271c(param_1,param_2);
  return;
}



/* Entry: 1083d5828; end: 1083d5853;  */

uint FUN_1083d5828(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  func_0x000108394d54(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1083d5854; end: 1083d58df;  */

void FUN_1083d5854(int *param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long extraout_x9;
  ulong uVar6;
  ulong extraout_x10;
  uint extraout_w11;
  
  plVar4 = param_2;
  FUN_1083d5828();
  uVar2 = param_1[1];
  uVar6 = (ulong)(uVar2 - 1 & (uint)plVar4);
  lVar5 = *param_2;
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    piVar1 = (int *)(*(long *)(param_1 + 2) + (long)(int)uVar6 * 0x10);
    iVar3 = (int)plVar4;
    if (*piVar1 == 0) break;
    if ((iVar3 == *piVar1) && (lVar5 == *(long *)(piVar1 + 2))) {
      *piVar1 = iVar3;
      return;
    }
    func_0x0001083d59bc();
    uVar6 = extraout_x10;
    lVar5 = extraout_x9;
    uVar2 = extraout_w11;
  }
  *(long *)(piVar1 + 2) = lVar5;
  *piVar1 = iVar3;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1083d58e0; end: 1083d590f;  */

void FUN_1083d58e0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + -8) != 0) {
      lVar1 = *(long *)(param_2 + -8) << 4;
      do {
        if (*(int *)(param_2 + -0x10 + lVar1) != 0) {
          *(undefined4 *)(param_2 + -0x10 + lVar1) = 0;
        }
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1083d5910; end: 1083d5937;  */

undefined8 FUN_1083d5910(undefined8 param_1)

{
  FUN_1083d5938(param_1,0);
  return param_1;
}



/* Entry: 1083d5938; end: 1083d5a07;  */

void FUN_1083d5938(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1083d5a08; end: 1083d5a4f;  */

ulong FUN_1083d5a08(undefined8 param_1)

{
  undefined **ppuStack_20;
  uint3 uStack_18;
  undefined4 uStack_14;
  
  ppuStack_20 = &PTR_FUN_110a448a8;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_1083d5a50(&ppuStack_20,param_1);
  return (ulong)uStack_18;
}



/* Entry: 1083d5a50; end: 1083d5b2f;  */

/* WARNING: Possible PIC construction at 0x0001083d5a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083d5a9c) */

ulong FUN_1083d5a50(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  long extraout_x8;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xffffffffffffffe0;
  puVar4 = &stack0xfffffffffffffff0;
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 0xd:
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | *(int *)(param_1 + 0xc) == 0;
    break;
  case 0xe:
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | *(int *)(param_1 + 0xc) == 0;
    break;
  default:
    puVar2 = (undefined1 *)register0x00000008;
    puVar4 = unaff_x29;
    goto SUB_1083c2868;
  case 0x10:
  case 0x12:
  case 0x16:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    unaff_x30 = 0x1083d5a9c;
    unaff_x19 = param_1;
SUB_1083c2868:
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    if (*(int *)(param_2 + 0xc) - 0xcU < 0xd) {
      func_0x0001083c3950(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001083c28a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10df20988)[extraout_x8] * 4 + 0x1083c28a4))();
      return param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c29d4);
    (*pcVar1)();
  case 0x15:
    *(undefined1 *)(param_1 + 10) = 1;
  }
  if ((*(char *)(param_1 + 8) == '\x01') && (*(char *)(param_1 + 9) == '\x01')) {
    uVar3 = (uint)*(byte *)(param_1 + 10);
  }
  else {
    uVar3 = 0;
  }
  return (ulong)(uVar3 & 1);
}



/* Entry: 1083d5b30; end: 1083d5b3f;  */

void FUN_1083d5b30(void)

{
  return;
}



/* Entry: 1083d5b40; end: 1083d618b;  */

void FUN_1083d5b40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  long param_5,long *param_6,long param_7,undefined8 param_8,undefined ***param_9)

{
  undefined ***pppuVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  float fVar13;
  double dVar14;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  double dStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a44278;
  uStack_88 = 0;
  pppuVar1 = &ppuStack_90;
  if (param_9 != (undefined ***)0x0) {
    pppuVar1 = param_9;
  }
  plVar6 = (long *)0x20;
  __Znwm();
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plStack_98 = plVar6;
  if (param_5 == 0) {
    func_0x0001083d62a4(*param_4);
    func_0x0001083d62d0();
LAB_1083d5c3c:
    *param_1 = 0;
    goto LAB_1083d5c40;
  }
  if (*(int *)(param_5 + 0xc) != 0x18) {
    func_0x0001083d62d0();
    goto LAB_1083d5c3c;
  }
  plVar6 = *(long **)(param_5 + 0x18);
  (**(code **)(*plVar6 + 0x40))();
  if (2 < (uint)plVar6) {
    func_0x0001083d626c();
    goto LAB_1083d5c3c;
  }
  if (*(int *)(param_5 + 0x20) != 0) {
    func_0x0001083d626c();
    goto LAB_1083d5c3c;
  }
  uVar7 = *(ulong *)(param_5 + 0x28);
  if (uVar7 == 0) {
    FUN_1083c8a60(pppuVar1,*(undefined4 *)(param_5 + 8),&UNK_10f492334,0x1e);
    goto LAB_1083d5c3c;
  }
  FUN_1083c66cc(uVar7,plStack_98 + 1);
  if ((uVar7 & 1) == 0) {
    FUN_1083c8a60(pppuVar1,*(undefined4 *)(param_5 + 8),&UNK_10f492353,0x34);
    goto LAB_1083d5c3c;
  }
  lVar11 = *(long *)(param_5 + 0x10);
  *plStack_98 = lVar11;
  if ((param_6 == (long *)0x0) || (lVar12 = *param_6, lVar12 == 0)) {
    func_0x0001083d62a4(param_4[1]);
    func_0x0001083d62c4();
    goto LAB_1083d5c3c;
  }
  if (*(int *)(lVar12 + 0xc) != 0x19) {
    func_0x0001083d62c4();
    goto LAB_1083d5c3c;
  }
  if ((*(int *)(*(long *)(lVar12 + 0x18) + 0xc) != 0x32) ||
     (*(long *)(*(long *)(lVar12 + 0x18) + 0x18) != lVar11)) {
    FUN_1083c8a60(pppuVar1,*(undefined4 *)(lVar12 + 8),&UNK_10f4923ac,0x32);
    goto LAB_1083d5c3c;
  }
  if (5 < *(byte *)(lVar12 + 0x20) - 0x10) {
    func_0x0001083d626c();
    goto LAB_1083d5c3c;
  }
  dStack_a0 = 0.0;
  uVar7 = *(ulong *)(lVar12 + 0x28);
  FUN_1083c66cc(uVar7,&dStack_a0);
  if ((uVar7 & 1) == 0) goto LAB_1083d5dd4;
  if (param_7 == 0) {
    func_0x0001083d62a4(param_4[2]);
    FUN_1083c8a60(pppuVar1);
    goto LAB_1083d5e48;
  }
  iVar2 = *(int *)(param_7 + 0xc);
  if (iVar2 != 0x2d) {
    if (iVar2 == 0x2c) {
      bVar4 = *(int *)(*(long *)(param_7 + 0x18) + 0xc) == 0x32;
      if ((bVar4) && (func_0x0001083d6278(), bVar4)) {
        lVar11 = extraout_x8_00;
        if (*(char *)(param_7 + 0x20) == '!') goto LAB_1083d5ed8;
        if (*(char *)(param_7 + 0x20) == ' ') goto LAB_1083d5e98;
        func_0x0001083d6294();
      }
      else {
        func_0x0001083d62b4();
      }
      func_0x0001083d628c();
    }
    else {
      if (iVar2 != 0x19) goto LAB_1083d5dd4;
      bVar4 = *(int *)(*(long *)(param_7 + 0x18) + 0xc) == 0x32;
      if ((bVar4) && (func_0x0001083d6278(), bVar4)) {
        uVar8 = *(undefined8 *)(param_7 + 0x28);
        FUN_1083c66cc(uVar8,extraout_x8 + 0x10);
        if ((int)uVar8 != 0) {
          if (*(char *)(param_7 + 0x20) != '\x16') {
            if (*(char *)(param_7 + 0x20) != '\x17') {
              func_0x0001083d6294();
              goto LAB_1083d5da4;
            }
            plStack_98[2] = (long)-(double)plStack_98[2];
          }
          goto LAB_1083d5ee0;
        }
      }
      else {
        func_0x0001083d62b4();
      }
LAB_1083d5da4:
      func_0x0001083d628c();
    }
    goto LAB_1083d5e48;
  }
  bVar4 = *(int *)(*(long *)(param_7 + 0x20) + 0xc) == 0x32;
  if ((!bVar4) || (func_0x0001083d6278(), !bVar4)) {
    func_0x0001083d62b4();
LAB_1083d5e40:
    func_0x0001083d628c();
    goto LAB_1083d5e48;
  }
  lVar11 = extraout_x8_01;
  if (*(char *)(param_7 + 0x18) == '!') {
LAB_1083d5ed8:
    uVar8 = 0xbff0000000000000;
  }
  else {
    if (*(char *)(param_7 + 0x18) != ' ') {
      func_0x0001083d6294();
      goto LAB_1083d5e40;
    }
LAB_1083d5e98:
    uVar8 = 0x3ff0000000000000;
  }
  *(undefined8 *)(lVar11 + 0x10) = uVar8;
LAB_1083d5ee0:
  FUN_1083c3168(param_8,*(undefined8 *)(param_5 + 0x10));
  plVar6 = plStack_98;
  if ((int)param_8 != 0) goto LAB_1083d5dd4;
  *(undefined4 *)(plStack_98 + 3) = 0;
  switch(*(undefined1 *)(lVar12 + 0x20)) {
  case 0x10:
    if ((double)plStack_98[1] == dStack_a0) {
      if ((double)plStack_98[2] == 0.0) {
        *(undefined4 *)(plStack_98 + 3) = 100000;
      }
      else {
        *(undefined4 *)(plStack_98 + 3) = 1;
      }
    }
    break;
  case 0x11:
    dVar14 = (dStack_a0 - (double)plStack_98[1]) / (double)plStack_98[2];
    fVar13 = (float)dVar14;
    uVar10 = (uint)dVar14;
    if (0x7fffffff < uVar10 || ((float)uVar10 != fVar13 || 0x7f7fffff < (uint)ABS(fVar13))) {
      uVar10 = 100000;
    }
    *(uint *)(plStack_98 + 3) = uVar10;
    plVar9 = *(long **)(*plStack_98 + 0x20);
    (**(code **)(*plVar9 + 0x50))();
    (**(code **)(*plVar9 + 0x40))();
    plVar6 = plStack_98;
    if ((int)plVar9 == 0) {
      dVar14 = (double)plStack_98[2];
      uVar5 = *(undefined4 *)(lVar12 + 8);
      plVar6 = *(long **)(lVar12 + 0x18);
      (**(code **)(*plVar6 + 0x30))(&lStack_b0,plVar6,(int)plVar6[1]);
      plVar6 = *(long **)(lVar12 + 0x28);
      (**(code **)(*plVar6 + 0x30))(&lStack_b8,plVar6,(int)plVar6[1]);
      uVar8 = 0x12;
      if (dVar14 <= 0.0) {
        uVar8 = 0x13;
      }
      FUN_1083d9b94(&lStack_a8,param_2,uVar5,&lStack_b0,uVar8,&lStack_b8);
      lVar11 = lStack_a8;
      lStack_a8 = 0;
      lVar12 = *param_6;
      *param_6 = lVar11;
      if (lVar12 != 0) {
        func_0x0001083d6260();
        lVar11 = lStack_a8;
        lStack_a8 = 0;
        if (lVar11 != 0) {
          func_0x0001083d6260();
        }
      }
      lVar11 = lStack_b8;
      lStack_b8 = 0;
      if (lVar11 != 0) {
        func_0x0001083d6260();
      }
      lVar11 = lStack_b0;
      lStack_b0 = 0;
      plVar6 = plStack_98;
      if (lVar11 != 0) {
        func_0x0001083d6260();
        plVar6 = plStack_98;
      }
    }
    break;
  case 0x12:
    func_0x0001083d62dc();
    uVar5 = 1;
    goto code_r0x0001083d5fa4;
  case 0x13:
    func_0x0001083d62dc();
    uVar5 = 0;
code_r0x0001083d5fa4:
    uVar8 = 0;
code_r0x0001083d60d8:
    FUN_1083d618c(uVar5,uVar8);
    *(undefined4 *)(plVar6 + 3) = uVar5;
    break;
  case 0x14:
    func_0x0001083d62dc();
    uVar5 = 1;
    goto code_r0x0001083d60d4;
  case 0x15:
    func_0x0001083d62dc();
    uVar5 = 0;
code_r0x0001083d60d4:
    uVar8 = 1;
    goto code_r0x0001083d60d8;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1083d6118);
    (*pcVar3)();
  }
  if ((int)plVar6[3] < 100000) {
    plStack_98 = (long *)0x0;
  }
  else {
LAB_1083d5dd4:
    func_0x0001083d628c();
LAB_1083d5e48:
    plVar6 = (long *)0x0;
  }
  *param_1 = plVar6;
LAB_1083d5c40:
  FUN_1083d6220(&plStack_98);
  return;
}



/* Entry: 1083d618c; end: 1083d621f;  */

int FUN_1083d618c(double param_1,double param_2,double param_3,uint param_4,byte param_5)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  bVar1 = param_1 <= param_2;
  if (param_4 == 0) {
    bVar1 = param_2 <= param_1;
  }
  if (bVar1) {
    iVar2 = 100000;
    if (param_3 != 0.0 && param_4 != param_3 <= 0.0) {
      param_3 = (param_2 - param_1) / param_3;
      dVar4 = (double)(long)param_3;
      dVar3 = dVar4 + 1.0;
      if ((param_5 & dVar4 == param_3) == 0) {
        dVar3 = dVar4;
      }
      if (dVar3 <= 100000.0) {
        iVar2 = (int)dVar3;
        if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
          iVar2 = 100000;
        }
        return iVar2;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* Entry: 1083d6220; end: 1083d6247;  */

undefined8 FUN_1083d6220(undefined8 param_1)

{
  FUN_1083d6248(param_1,0);
  return param_1;
}



/* Entry: 1083d6248; end: 1083d62e7;  */

void FUN_1083d6248(long *param_1,long param_2)

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



/* Entry: 1083d62e8; end: 1083d636f;  */

undefined1 FUN_1083d62e8(undefined8 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined **ppuStack_40;
  int iStack_38;
  int iStack_34;
  undefined1 uStack_28;
  
  ppuStack_40 = &PTR_DAT_110a44908;
  iStack_38 = 0;
  FUN_1083c29d4(&ppuStack_40,param_1);
  iVar1 = iStack_38;
  FUN_1083d63dc(&ppuStack_40,param_1,iStack_38 + 1);
  if (iVar1 < iStack_38) {
    uVar2 = 2;
  }
  else if (iStack_38 < 2) {
    uVar2 = 0;
    if (1 < iStack_34) {
      uVar2 = uStack_28;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1083d6370; end: 1083d63db;  */

void FUN_1083d6370(void)

{
  return;
}



/* Entry: 1083d63dc; end: 1083d6413;  */

undefined8 * FUN_1083d63dc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_110a44968;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_1083c29d4();
  return param_1;
}



/* Entry: 1083d6414; end: 1083d641b;  */

void FUN_1083d6414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083d641c; end: 1083d64df;  */

/* WARNING: Possible PIC construction at 0x0001083d64b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083d64b4) */
/* WARNING: Removing unreachable block (ram,0x0001083d64c8) */
/* WARNING: Removing unreachable block (ram,0x0001083d64cc) */
/* WARNING: Removing unreachable block (ram,0x0001083d64d0) */

long FUN_1083d641c(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  long extraout_x8;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 == 0xc) {
    bVar5 = *(int *)(param_2 + 0x38) == 1;
    unaff_x20 = (ulong)bVar5;
    iVar3 = *(int *)(param_1 + 0x14);
    if (bVar5) {
      iVar3 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x14) = iVar3;
    unaff_x30 = 0x1083d64b4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else if (iVar3 == 0x18) {
    if (1 < *(int *)(param_1 + 0x14)) {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  else if (iVar3 == 0x15) {
    iVar3 = *(int *)(param_1 + 8) + 1;
    iVar2 = *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0x14)) {
      iVar2 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 8) = iVar3;
    *(int *)(param_1 + 0xc) = iVar2;
    if (*(int *)(param_1 + 0x10) <= iVar3) {
      return 1;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (0xc < *(int *)(param_2 + 0xc) - 0xcU) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1083c29d4);
    (*pcVar4)();
  }
  func_0x0001083c3950(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001083c28a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df20988)[extraout_x8] * 4 + 0x1083c28a4))();
  return param_1;
}



/* Entry: 1083d64e0; end: 1083d64e7;  */

undefined8 FUN_1083d64e0(void)

{
  return 0;
}



/* Entry: 1083d64e8; end: 1083d6517;  */

void FUN_1083d64e8(undefined8 param_1)

{
  undefined **ppuStack_18;
  
  ppuStack_18 = &PTR_DAT_110a449c8;
  FUN_1083d6518(&ppuStack_18,param_1);
  return;
}



/* Entry: 1083d6518; end: 1083d6593;  */

undefined8 FUN_1083d6518(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long extraout_x8;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0x19) {
    uVar2 = *(byte *)(param_2 + 0x20) - 0xf;
    if ((0x10 < uVar2) || ((0x1ff81U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) goto FUN_1083c271c;
  }
  else if (iVar1 == 0x2d) {
    if ((*(byte *)(param_2 + 0x18) & 0xfe) != 0x20) goto FUN_1083c271c;
  }
  else if ((iVar1 != 0x2c) &&
          ((iVar1 != 0x27 || ((*(byte *)(*(long *)(param_2 + 0x18) + 0x52) & 1) != 0)))) {
FUN_1083c271c:
    if (0x19 < *(int *)(param_2 + 0xc) - 0x19U) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1083c2868);
      (*pcVar3)();
    }
    func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
    return param_1;
  }
  return 1;
}



/* Entry: 1083d6594; end: 1083d6663;  */

uint FUN_1083d6594(undefined8 param_1)

{
  uint uVar1;
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  uVar1 = (uint)&ppuStack_20;
  ppuStack_20 = &PTR_FUN_110a44a28;
  uStack_18 = 0;
  func_0x0001083d65c4(&ppuStack_20,param_1);
  return uVar1 ^ 1;
}



/* Entry: 1083d6664; end: 1083d6667;  */

void FUN_1083d6664(void)

{
  return;
}



/* Entry: 1083d6668; end: 1083d66c3;  */

void FUN_1083d6668(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_40 = &PTR_FUN_110a44a88;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = param_2;
  FUN_1083c29d4(&ppuStack_40,param_1);
  FUN_1083d66c4(&ppuStack_40);
  return;
}



/* Entry: 1083d66c4; end: 1083d66ef;  */

undefined8 * FUN_1083d66c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a44a88;
  FUN_1083d6c10(param_1 + 3);
  return param_1;
}



/* Entry: 1083d66f0; end: 1083d66f3;  */

void FUN_1083d66f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083d66f4; end: 1083d670f;  */

bool FUN_1083d66f4(long param_1)

{
  FUN_1083d6710();
  return param_1 != 0;
}



/* Entry: 1083d6710; end: 1083d6787;  */

uint * FUN_1083d6710(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x0001083d6c48();
  uVar5 = *(uint *)(unaff_x19 + 4);
  uVar2 = uVar5 - 1 & param_1;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((param_1 == *puVar1) && (*unaff_x20 == *(long *)(puVar1 + 2))) {
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 1083d6788; end: 1083d67d7;  */

uint FUN_1083d6788(uint param_1)

{
  func_0x0001083d67a4();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1083d67d8; end: 1083d6a3b;  */

void FUN_1083d67d8(long param_1,long param_2)

{
  int iVar1;
  undefined **ppuStack_30;
  long lStack_28;
  
  iVar1 = (int)&ppuStack_30;
  if (*(int *)(param_2 + 0xc) == 0x28) {
    lStack_28 = param_1 + 0x10;
    ppuStack_30 = &PTR_FUN_110a44a28;
    func_0x0001083d65c4(&ppuStack_30,*(undefined8 *)(param_2 + 0x20));
    if (iVar1 != 0) {
      FUN_1083c8a60(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),&UNK_10f49254e,0x21);
      return;
    }
  }
  FUN_1083c271c(param_1,param_2);
  return;
}



/* Entry: 1083d6a3c; end: 1083d6b2b;  */

void FUN_1083d6a3c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  plVar4 = (long *)(param_1 + 2);
  lStack_38 = *plVar4;
  *plVar4 = 0;
  puVar2 = (undefined8 *)((long)param_2 * 0x10 + 0x10);
  if (0xffffffffffffffef < (ulong)((long)param_2 * 0x10) || param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x10;
  puVar2[1] = (long)param_2;
  if (param_2 != 0) {
    lVar3 = (long)param_2 << 4;
    do {
      puVar2 = puVar2 + 2;
      *(undefined4 *)puVar2 = 0;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  FUN_1083d6bc8(plVar4);
  for (lVar3 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 4 != lVar3;
      lVar3 = lVar3 + 0x10) {
    if (*(int *)(lStack_38 + lVar3) != 0) {
      FUN_1083d6b2c(param_1,lStack_38 + lVar3 + 8);
    }
  }
  FUN_1083d6c10(&lStack_38);
  return;
}



/* Entry: 1083d6b2c; end: 1083d6bc7;  */

uint * FUN_1083d6b2c(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_x19;
  long *unaff_x20;
  
  func_0x0001083d6c48();
  uVar5 = unaff_x19[1];
  uVar2 = uVar5 - 1 & param_1;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((param_1 == *puVar1) && (*unaff_x20 == *(long *)(puVar1 + 2))) {
      *puVar1 = param_1;
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  *(long *)(puVar1 + 2) = *unaff_x20;
  *puVar1 = param_1;
  *unaff_x19 = *unaff_x19 + 1;
  return puVar1 + 2;
}



/* Entry: 1083d6bc8; end: 1083d6c0f;  */

void FUN_1083d6bc8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1083d6c10; end: 1083d6c33;  */

undefined8 FUN_1083d6c10(undefined8 param_1)

{
  FUN_1083d6c34(param_1,0);
  return param_1;
}



/* Entry: 1083d6c34; end: 1083d6c73;  */

void FUN_1083d6c34(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1083d6c74; end: 1083d6caf;  */

undefined1 FUN_1083d6c74(undefined8 param_1)

{
  undefined **ppuStack_20;
  undefined1 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110a44ae8;
  uStack_18 = 1;
  FUN_1083d6cb0(&ppuStack_20,param_1);
  return uStack_18;
}



/* Entry: 1083d6cb0; end: 1083d6d1b;  */

long FUN_1083d6cb0(long param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long extraout_x8;
  long lVar3;
  
  lVar3 = 0;
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x25:
  case 0x28:
  case 0x2c:
  case 0x2d:
  case 0x2f:
  case 0x30:
    goto FUN_1083c271c;
  case 0x27:
    bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + 0x52) & 1;
joined_r0x0001083d6d00:
    if (bVar1 != 0) {
FUN_1083c271c:
      if (*(int *)(param_2 + 0xc) - 0x19U < 0x1a) {
        func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c2754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df2096e)[extraout_x8] * 4 + 0x1083c2758))();
        return param_1;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083c2868);
      (*pcVar2)();
    }
    break;
  case 0x29:
    goto code_r0x0001083d6d0c;
  case 0x32:
    if (*(long *)(param_2 + 0x18) != 0) {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + 0x30) & 0xc;
      goto joined_r0x0001083d6d00;
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  lVar3 = 1;
code_r0x0001083d6d0c:
  return lVar3;
}



/* Entry: 1083d6d1c; end: 1083d6e7f;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1083d6d1c(ulong *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  do {
    if (*(int *)((long)param_1 + 0xc) != *(int *)((long)param_2 + 0xc)) {
      return false;
    }
    plVar2 = (long *)param_1[2];
    lVar5 = param_2[2];
    (**(code **)(*plVar2 + 0x38))();
    if ((int)plVar2 == 0) {
      return false;
    }
    switch(*(int *)((long)param_1 + 0xc)) {
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      if (*(int *)((long)param_1 + 0xc) != *(int *)((long)param_2 + 0xc)) {
        return false;
      }
      (**(code **)(*param_1 + 0x48))();
      lVar6 = lVar5;
      (**(code **)(*param_2 + 0x48))();
      if (lVar5 != lVar6) {
        return false;
      }
      do {
        bVar1 = lVar5 == 0;
        if (lVar5 == 0) {
          return true;
        }
        uVar4 = *param_1;
        FUN_1083d6d1c(uVar4,*param_2);
        lVar5 = lVar5 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while ((uVar4 & 1) != 0);
      return bVar1;
    default:
      return false;
    case 0x25:
      uVar7 = (uint)param_1[3];
      uVar8 = *(uint *)(param_2 + 3);
      break;
    case 0x28:
      puVar3 = (ulong *)param_1[4];
      FUN_1083d6d1c(puVar3,param_2[4]);
      goto joined_r0x0001083d6dcc;
    case 0x29:
      if (!NAN((double)param_1[3]) && !NAN((double)param_2[3])) {
        return (double)param_1[3] == (double)param_2[3];
      }
      return false;
    case 0x2d:
      uVar7 = (uint)(byte)param_1[3];
      uVar8 = (uint)*(byte *)(param_2 + 3);
      break;
    case 0x2f:
      puVar3 = param_1 + 4;
      FUN_1083d6e80(puVar3,param_2 + 4);
joined_r0x0001083d6dcc:
      if (((ulong)puVar3 & 1) == 0) {
        return false;
      }
      lVar5 = 0x18;
      goto code_r0x0001083d6dd4;
    case 0x32:
      return param_1[3] == param_2[3];
    }
    if (uVar7 != uVar8) {
      return false;
    }
    lVar5 = 0x20;
code_r0x0001083d6dd4:
    param_2 = *(long **)((long)param_2 + lVar5);
    param_1 = *(ulong **)((long)param_1 + lVar5);
  } while( true );
}



/* Entry: 1083d6e80; end: 1083d6eb3;  */

bool FUN_1083d6e80(long param_1,long param_2)

{
  if (*(char *)(param_1 + 4) == *(char *)(param_2 + 4)) {
    _memcmp();
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 1083d6eb4; end: 1083d6f97;  */

long FUN_1083d6eb4(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  
  do {
    switch(*(undefined4 *)((long)param_1 + 0xc)) {
    case 0x1b:
    case 0x23:
      plVar3 = (long *)param_1[2];
      (**(code **)(*plVar3 + 0x80))();
      if ((long *)0x4 < plVar3) {
LAB_1083d6f84:
        return 0;
      }
    case 0x1d:
      FUN_1083c3010(&stack0xffffffffffffffe0,param_1);
      return 1;
    default:
      goto LAB_1083d6f84;
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x22:
      (**(code **)(*param_1 + 0x48))();
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1083d6f98);
        (*pcVar1)();
      }
      break;
    case 0x28:
      lVar2 = param_1[4];
      FUN_1083c6698();
      if ((int)lVar2 == 0) {
        return lVar2;
      }
    case 0x2f:
      param_1 = param_1 + 3;
      break;
    case 0x29:
    case 0x32:
      return 1;
    case 0x2d:
      if (0xb < *(byte *)(param_1 + 3) ||
          (1 << (ulong)(*(byte *)(param_1 + 3) & 0x1f) & 0x883U) == 0) {
        return 0;
      }
    case 0x25:
      param_1 = param_1 + 4;
    }
    param_1 = (long *)*param_1;
  } while( true );
}



/* Entry: 1083d6f98; end: 1083d6fd7;  */

void FUN_1083d6f98(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0001083d7bb8();
  func_0x0001083d7b3c();
  FUN_1083c2df0(auStack_38);
  return;
}



/* Entry: 1083d6fd8; end: 1083d700b;  */

void FUN_1083d6fd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083d700c; end: 1083d700f;  */

void FUN_1083d700c(void)

{
  return;
}



/* Entry: 1083d7010; end: 1083d70ab;  */

void FUN_1083d7010(int *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  func_0x0001083d7b04();
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 6) {
    FUN_1083d74d4();
  }
  else if (iVar1 == 4) {
    func_0x0001083d7a9c(*(undefined8 *)(unaff_x19 + 0x10));
    func_0x0001083d7ac0();
  }
  else if (iVar1 == 1) {
    puVar2 = *(undefined8 **)(*(long *)(unaff_x19 + 0x10) + 0x38);
    for (lVar3 = (long)*(int *)(*(long *)(unaff_x19 + 0x10) + 0x40) << 3; lVar3 != 0;
        lVar3 = lVar3 + -8) {
      func_0x0001083d7a9c(*puVar2);
      *param_1 = *param_1 + *(int *)(unaff_x20 + 0x10);
      func_0x0001083d7ac0();
      puVar2 = puVar2 + 1;
    }
  }
  func_0x0001083d7bcc();
  FUN_1083c29d4();
  return;
}



/* Entry: 1083d70ac; end: 1083d70ff;  */

undefined1  [16] FUN_1083d70ac(long param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined8 uStack_18;
  
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x20);
  uStack_18 = param_2;
  func_0x0001083d70e0(pauVar1,&uStack_18);
  auVar2._12_4_ = 0;
  auVar2._0_12_ = *pauVar1;
  return auVar2;
}



/* Entry: 1083d7100; end: 1083d719f;  */

bool FUN_1083d7100(ulong param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  lVar4 = param_2;
  FUN_1083d70ac();
  if ((uVar1 & 0x38) == 0) {
    plVar3 = *(long **)(param_2 + 0x20);
    (**(code **)(*plVar3 + 0x50))();
    uVar1 = *(byte *)((long)plVar3 + 0x2c) - 1;
    if (uVar1 < 0xf) {
      if ((0x7261U >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
        return false;
      }
      if (param_1 >> 0x20 != 0) {
        return false;
      }
    }
    else if (param_1 >> 0x20 != 0) goto LAB_1083d7124;
    FUN_1083f446c(param_2);
    bVar2 = (int)lVar4 <= (int)(uint)(param_2 != 0);
  }
  else {
LAB_1083d7124:
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1083d71a0; end: 1083d720f;  */

void FUN_1083d71a0(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001083d71cc(param_1 + 0x10,&uStack_18);
  return;
}



/* Entry: 1083d7210; end: 1083d72ef;  */

void FUN_1083d7210(void)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001083d7b04();
  func_0x0001083d744c();
  if (*(int *)(unaff_x19 + 0xc) == 0x32) {
    uStack_38 = *(undefined8 *)(unaff_x19 + 0x18);
    lVar4 = *(long *)(unaff_x20 + 8) + 0x20;
    func_0x0001083d7410(lVar4,&uStack_38);
    bVar2 = *(byte *)(unaff_x19 + 0x20);
    if (bVar2 - 2 < 2) {
      *(ulong *)(lVar4 + 4) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 4) >> 0x20) + *(int *)(unaff_x20 + 0x10),
                    (int)*(undefined8 *)(lVar4 + 4) + *(int *)(unaff_x20 + 0x10));
    }
    else if (bVar2 == 1) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + *(int *)(unaff_x20 + 0x10);
    }
    else if (bVar2 == 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + *(int *)(unaff_x20 + 0x10);
    }
  }
  else if (*(int *)(unaff_x19 + 0xc) == 0x27) {
    uStack_38 = *(undefined8 *)(unaff_x19 + 0x18);
    iVar1 = *(int *)(unaff_x20 + 0x10);
    piVar3 = (int *)(*(long *)(unaff_x20 + 8) + 0x10);
    FUN_1083d772c(piVar3,&uStack_38);
    *piVar3 = *piVar3 + iVar1;
  }
  func_0x0001083d7bcc();
  FUN_1083c271c();
  return;
}



/* Entry: 1083d72f0; end: 1083d7313;  */

void FUN_1083d72f0(void)

{
  func_0x0001083d7ab0();
  func_0x0001083d7b30(1);
  FUN_1083d7314();
  return;
}



/* Entry: 1083d7314; end: 1083d737b;  */

void FUN_1083d7314(int *param_1,long param_2)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001083d7b04();
  if (*(int *)(param_2 + 0xc) == 0x18) {
    func_0x0001083d7a9c(*(undefined8 *)(unaff_x19 + 0x10));
    iVar1 = *(int *)(unaff_x20 + 0x10);
    *param_1 = *param_1 + iVar1;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      param_1[2] = param_1[2] + iVar1;
    }
    func_0x0001083d7ac0();
  }
  func_0x0001083d7bcc();
  func_0x0001083c2868();
  return;
}



/* Entry: 1083d737c; end: 1083d740b;  */

void FUN_1083d737c(void)

{
  func_0x0001083d7ab0();
  func_0x0001083d7b30(1);
  FUN_1083d7010();
  return;
}



/* Entry: 1083d740c; end: 1083d740f;  */

void FUN_1083d740c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083d7410; end: 1083d74d3;  */

long FUN_1083d7410(long param_1)

{
  long unaff_x19;
  
  func_0x0001083d7b70();
  func_0x0001083d70e0();
  if (param_1 != 0) {
    return param_1;
  }
  FUN_1083d755c();
  return unaff_x19 + 8;
}



/* Entry: 1083d74d4; end: 1083d752f;  */

void FUN_1083d74d4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x90))();
  for (lVar2 = (long)plVar1 * 0x58; lVar2 != 0; lVar2 = lVar2 + -0x58) {
    func_0x0001083d744c(param_1,param_2[10]);
    param_2 = param_2 + 0xb;
  }
  return;
}



/* Entry: 1083d7530; end: 1083d755b;  */

long FUN_1083d7530(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  FUN_1083d755c(param_1,&uStack_28);
  return param_1 + 8;
}



/* Entry: 1083d755c; end: 1083d75a3;  */

undefined8 FUN_1083d755c(int *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar4;
  ulong extraout_x9;
  long lVar5;
  long extraout_x10;
  uint extraout_w11;
  long *unaff_x19;
  int *unaff_x20;
  
  func_0x0001083d7b04();
  iVar2 = param_1[1];
  if (iVar2 * 3 <= *param_1 * 4) {
    uVar3 = iVar2 << 1;
    if (iVar2 < 1) {
      uVar3 = 4;
    }
    param_2 = (ulong)uVar3;
    FUN_1083d75a4();
  }
  func_0x0001083d7bcc();
  func_0x0001083d7b04();
  FUN_1083d76f0();
  uVar3 = unaff_x20[1];
  uVar4 = (ulong)(uVar3 - 1 & (uint)param_2);
  lVar5 = *unaff_x19;
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return 0;
    }
    piVar1 = (int *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar4 * 0x20);
    if (*piVar1 == 0) break;
    if (((int)param_2 == *piVar1) && (lVar5 == *(long *)(piVar1 + 2))) {
      *piVar1 = 0;
      func_0x0001083d7b58(piVar1 + 2);
      return extraout_x8_00;
    }
    func_0x0001083d7b94();
    uVar4 = extraout_x9;
    lVar5 = extraout_x10;
    uVar3 = extraout_w11;
  }
  func_0x0001083d7b58(piVar1 + 2);
  *unaff_x20 = *unaff_x20 + 1;
  return extraout_x8;
}



/* Entry: 1083d75a4; end: 1083d7657;  */

void FUN_1083d75a4(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long lStack_38;
  
  func_0x0001083d7ae0();
  puVar1 = (undefined8 *)(unaff_x22 << 5 | 0x10);
  if (param_2 < 0) {
    puVar1 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar1 = 0x20;
  puVar1[1] = unaff_x22;
  if (unaff_w20 != 0) {
    lVar2 = unaff_x22 << 5;
    puVar3 = puVar1 + 2;
    do {
      *(undefined4 *)puVar3 = 0;
      lVar2 = lVar2 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar2 != 0);
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1 + 2;
  for (lVar2 = 0; (ulong)(unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU)) << 5 != lVar2;
      lVar2 = lVar2 + 0x20) {
    if (*(int *)(lStack_38 + lVar2) != 0) {
      FUN_1083d7658();
    }
  }
  func_0x0001083c64ac(&lStack_38);
  return;
}



/* Entry: 1083d7658; end: 1083d76ef;  */

undefined8 FUN_1083d7658(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar3;
  ulong extraout_x9;
  long lVar4;
  long extraout_x10;
  uint extraout_w11;
  long *unaff_x19;
  int *unaff_x20;
  
  func_0x0001083d7b04();
  FUN_1083d76f0();
  uVar2 = unaff_x20[1];
  uVar3 = (ulong)(uVar2 - 1 & (uint)param_2);
  lVar4 = *unaff_x19;
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return 0;
    }
    piVar1 = (int *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar3 * 0x20);
    if (*piVar1 == 0) break;
    if (((int)param_2 == *piVar1) && (lVar4 == *(long *)(piVar1 + 2))) {
      *piVar1 = 0;
      func_0x0001083d7b58(piVar1 + 2);
      return extraout_x8_00;
    }
    func_0x0001083d7b94();
    uVar3 = extraout_x9;
    lVar4 = extraout_x10;
    uVar2 = extraout_w11;
  }
  func_0x0001083d7b58(piVar1 + 2);
  *unaff_x20 = *unaff_x20 + 1;
  return extraout_x8;
}



/* Entry: 1083d76f0; end: 1083d772b;  */

uint FUN_1083d76f0(uint param_1)

{
  func_0x0001083d770c();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1083d772c; end: 1083d7763;  */

long FUN_1083d772c(long param_1)

{
  long unaff_x19;
  
  func_0x0001083d7b70();
  func_0x0001083d71cc();
  if (param_1 != 0) {
    return param_1;
  }
  FUN_1083d7780();
  return unaff_x19 + 8;
}



/* Entry: 1083d7764; end: 1083d777f;  */

long FUN_1083d7764(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1083d7780(param_1,param_2,param_3);
  return param_1 + 8;
}



/* Entry: 1083d7780; end: 1083d77db;  */

void FUN_1083d7780(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_30 = param_2;
  uStack_28 = param_3;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_1083d77dc(param_1,iVar2);
  }
  FUN_1083d78b0(param_1,&uStack_30);
  return;
}



/* Entry: 1083d77dc; end: 1083d78af;  */

void FUN_1083d77dc(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  ulong unaff_x22;
  long lStack_38;
  
  func_0x0001083d7ae0();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_x22;
  uVar3 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) +
          (long)(int)param_2) * 8;
  puVar2 = (undefined8 *)(uVar3 + 0x10);
  if (0xffffffffffffffef < uVar3 || SUB168(auVar1 * ZEXT816(0x18),8) != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x18;
  puVar2[1] = unaff_x22;
  if (unaff_w20 != 0) {
    lVar4 = unaff_x22 * 0x18;
    puVar5 = puVar2 + 2;
    do {
      *(undefined4 *)puVar5 = 0;
      lVar4 = lVar4 + -0x18;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar2 + 2;
  for (lVar4 = 0; (ulong)(unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar4 != 0;
      lVar4 = lVar4 + 0x18) {
    if (*(int *)(lStack_38 + lVar4) != 0) {
      FUN_1083d78b0();
    }
  }
  FUN_1083c6514(&lStack_38);
  return;
}



/* Entry: 1083d78b0; end: 1083d7957;  */

int * FUN_1083d78b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong extraout_x9;
  long lVar4;
  long extraout_x10;
  uint extraout_w11;
  undefined8 uVar5;
  undefined8 extraout_x12;
  int *piVar6;
  long *unaff_x19;
  int *unaff_x20;
  
  func_0x0001083d7b04();
  FUN_1083d7958();
  uVar1 = unaff_x20[1];
  uVar3 = (ulong)(uVar1 - 1 & (uint)param_2);
  lVar4 = *unaff_x19;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  uVar5 = 0x18;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar6 = (int *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar3 * (long)(int)uVar5);
    iVar2 = (int)param_2;
    if (*piVar6 == 0) break;
    if ((iVar2 == *piVar6) && (lVar4 == *(long *)(piVar6 + 2))) {
      *piVar6 = 0;
      lVar4 = *unaff_x19;
      *(long *)(piVar6 + 4) = unaff_x19[1];
      *(long *)(piVar6 + 2) = lVar4;
      *piVar6 = iVar2;
      return piVar6 + 2;
    }
    func_0x0001083d7b7c();
    uVar3 = extraout_x9;
    lVar4 = extraout_x10;
    uVar5 = extraout_x12;
    uVar1 = extraout_w11;
  }
  lVar4 = *unaff_x19;
  *(long *)(piVar6 + 4) = unaff_x19[1];
  *(long *)(piVar6 + 2) = lVar4;
  *piVar6 = iVar2;
  *unaff_x20 = *unaff_x20 + 1;
  return piVar6 + 2;
}



/* Entry: 1083d7958; end: 1083d79b3;  */

uint FUN_1083d7958(uint param_1)

{
  func_0x0001083d7974();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1083d79b4; end: 1083d7a9b;  */

int * FUN_1083d79b4(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  ulong extraout_x9;
  long lVar4;
  long extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x0001083d7b70();
  FUN_1083d76f0();
  uVar2 = *(uint *)(unaff_x19 + 4);
  uVar3 = (ulong)(uVar2 - 1 & (uint)param_2);
  lVar4 = *unaff_x20;
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (int *)0x0;
    }
    piVar1 = (int *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar3 * 0x20);
    if (*piVar1 == 0) break;
    if (((int)param_2 == *piVar1) && (lVar4 == *(long *)(piVar1 + 2))) {
      return piVar1 + 2;
    }
    func_0x0001083d7b94();
    uVar3 = extraout_x9;
    lVar4 = extraout_x10;
    uVar2 = extraout_w11;
  }
  return (int *)0x0;
}



/* Entry: 1083d7a9c; end: 1083d7bd7;  */

long FUN_1083d7a9c(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000008;
  
  lVar1 = *(long *)(unaff_x20 + 8) + 0x20;
  uStack0000000000000008 = param_1;
  func_0x0001083d7b70(lVar1,&stack0x00000008);
  func_0x0001083d70e0();
  if (lVar1 != 0) {
    return lVar1;
  }
  FUN_1083d755c();
  return unaff_x19 + 8;
}



/* Entry: 1083d7bd8; end: 1083d7c13;  */

uint FUN_1083d7bd8(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  ppuStack_28 = &PTR_FUN_110a44ba8;
  uStack_18 = 0;
  pppuVar1 = &ppuStack_28;
  uStack_20 = param_2;
  FUN_1083d7c14(pppuVar1,param_1);
  return (uint)pppuVar1 ^ 1;
}



/* Entry: 1083d7c14; end: 1083d7caf;  */

long * FUN_1083d7c14(long *param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (*(int *)(*(long *)(param_2 + 0x10) + 0x40) == 1) {
    plVar6 = *(long **)(*(long *)(param_2 + 0x10) + 0x38);
    plVar4 = *(long **)(*plVar6 + 0x20);
    (**(code **)(*plVar4 + 0x60))();
    if ((int)plVar4 == 4) {
      iVar3 = (int)*(undefined8 *)(*plVar6 + 0x20);
      func_0x0001083d7dec();
      func_0x0001083d7de0();
      if (iVar3 == 0) {
        lVar5 = *plVar6;
        param_1[2] = lVar5;
        FUN_1083d70ac(param_1[1]);
        if ((int)lVar5 == 0) {
          uVar1 = *(uint *)(param_2 + 0xc);
          if (6 < uVar1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1083c2a10);
            (*pcVar2)();
          }
          if ((1 << (ulong)(uVar1 & 0x1f) & 0x75U) != 0) {
            return (long *)0x0;
          }
          lVar5 = 0x18;
          if (uVar1 != 1) {
            lVar5 = 0x10;
          }
                    /* WARNING: Could not recover jumptable at 0x0001083c39b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x30))(param_1,param_2 + lVar5);
          return param_1;
        }
      }
    }
  }
  return (long *)0x1;
}



/* Entry: 1083d7cb0; end: 1083d7cbf;  */

void FUN_1083d7cb0(void)

{
  return;
}



/* Entry: 1083d7cc0; end: 1083d7ceb;  */

ulong FUN_1083d7cc0(ulong param_1,long param_2)

{
  code *pcVar1;
  long extraout_x8;
  
  if (*(int *)(param_2 + 0xc) == 0x15) {
    FUN_1083d7cec(param_1,*(undefined8 *)(param_2 + 0x10));
    return (ulong)((uint)param_1 ^ 1);
  }
  if (*(int *)(param_2 + 0xc) - 0xcU < 0xd) {
    func_0x0001083c3950();
                    /* WARNING: Could not recover jumptable at 0x0001083c28a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df20988)[extraout_x8] * 4 + 0x1083c28a4))();
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c29d4);
  (*pcVar1)();
}



/* Entry: 1083d7cec; end: 1083d7ddf;  */

void FUN_1083d7cec(int param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = param_2;
  do {
    for (; iVar2 = *(int *)((long)plVar3 + 0xc), iVar2 == 0x1d;
        plVar3 = (long *)plVar3[(long)param_2 + -1]) {
LAB_1083d7d3c:
      (**(code **)(*plVar3 + 0x48))();
      if (param_2 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1083d7de0);
        (*pcVar1)();
      }
    }
    if (iVar2 == 0x1e) {
      plVar3 = (long *)plVar3[3];
      iVar2 = (int)plVar3[2];
      func_0x0001083d7dec();
      func_0x0001083d7de0();
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      if (iVar2 == 0x22) goto LAB_1083d7d3c;
      if (iVar2 != 0x30) {
        return;
      }
      param_2 = (long *)plVar3[4];
      iVar2 = param_1;
      FUN_1083d7cec();
      if (iVar2 == 0) {
        return;
      }
      plVar3 = (long *)plVar3[5];
    }
  } while( true );
}



/* Entry: 1083d7de0; end: 1083d7df7;  */

void FUN_1083d7de0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083d7de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* Entry: 1083d7df8; end: 1083d7f1f;  */

void FUN_1083d7df8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  plVar5 = *(long **)(param_1 + 0x38);
  plVar2 = *(long **)(param_1 + 0x40);
  plVar6 = *(long **)(param_1 + 0x50);
  plVar3 = *(long **)(param_1 + 0x58);
  do {
    if (plVar5 == plVar2 && plVar6 == plVar3) {
      return;
    }
    plVar1 = plVar5;
    if (plVar6 != plVar3) {
      plVar1 = plVar6;
    }
    if (*(int *)(*plVar1 + 0xc) == 1) {
      ppuVar9 = *(undefined ***)(*plVar1 + 0x10);
      if (*(char *)((long)ppuVar9 + 0x56) == '\x01') {
        ppuStack_a8 = &PTR_FUN_110a44c08;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_70 = 0;
        uStack_78 = 0;
        uStack_68 = 0xffffffff;
        lStack_a0 = param_2;
        lStack_98 = param_2 + 0x10;
        uStack_90 = param_3;
        FUN_1083c29d4(&ppuStack_a8);
        FUN_1083d7f20(&ppuStack_a8);
      }
      else {
        lVar7 = (long)*(int *)(ppuVar9 + 8) << 3;
        puVar8 = (undefined8 *)ppuVar9[7];
        do {
          if (lVar7 == 0) goto LAB_1083d7ed8;
          uVar4 = param_3;
          FUN_1083d8e88(param_3,*puVar8);
          lVar7 = lVar7 + -8;
          puVar8 = puVar8 + 1;
        } while ((int)uVar4 == 0);
        ppuStack_a8 = ppuVar9;
        FUN_1083d7f5c(param_2,&ppuStack_a8);
      }
    }
LAB_1083d7ed8:
    lVar7 = 8;
    if (plVar6 != plVar3) {
      lVar7 = 0;
    }
    plVar5 = (long *)((long)plVar5 + lVar7);
    lVar7 = 0;
    if (plVar6 != plVar3) {
      lVar7 = 8;
    }
    plVar6 = (long *)((long)plVar6 + lVar7);
  } while( true );
}



/* Entry: 1083d7f20; end: 1083d7f5b;  */

undefined8 * FUN_1083d7f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a44c08;
  func_0x00010831e544(param_1 + 7);
  FUN_1083d8e18(param_1 + 5);
  return param_1;
}



/* Entry: 1083d7f5c; end: 1083d7fd7;  */

long FUN_1083d7f5c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  FUN_10831d7b8();
  if (lVar1 == 0) {
    uStack_40 = 0;
    uStack_38 = 0x100000000;
    FUN_1083d8ea8(param_1,*param_2,&uStack_40);
    FUN_10831e4d4(&uStack_40);
    lVar1 = param_1;
  }
  return lVar1;
}



/* Entry: 1083d7fd8; end: 1083d8037;  */

undefined4 FUN_1083d7fd8(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = *(undefined8 *)(param_1 + 0x40);
  puVar2 = (undefined4 *)(param_2 + 0x10);
  uStack_18 = param_3;
  func_0x0001083d8018(puVar2,&uStack_20);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}



/* Entry: 1083d8038; end: 1083d80fb;  */

void FUN_1083d8038(long param_1,long param_2,long *param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lStack_48;
  
  FUN_1083d8e50(param_1,(long)*(int *)(param_2 + 0x40));
  lStack_48 = param_2;
  FUN_10831d7b8(param_3,&lStack_48);
  if (param_3 != (long *)0x0) {
    if ((int)param_3[1] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083d80e4);
      (*pcVar2)();
    }
    lVar5 = *param_3;
    lVar6 = *(long *)(param_2 + 0x38);
    iVar1 = *(int *)(param_2 + 0x40);
    for (uVar7 = 0; (long)iVar1 != uVar7; uVar7 = uVar7 + 1) {
      lVar3 = lVar5;
      FUN_10831bec0(lVar5,lVar6);
      if (lVar3 != 0) {
        uVar4 = uVar7 >> 3 & 0x1ffffffffffffffc;
        *(uint *)(*(long *)(param_1 + 8) + uVar4) =
             *(uint *)(*(long *)(param_1 + 8) + uVar4) | 1 << (ulong)((uint)uVar7 & 0x1f);
      }
      lVar6 = lVar6 + 8;
    }
  }
  return;
}



/* Entry: 1083d80fc; end: 1083d81ab;  */

void FUN_1083d80fc(long param_1,long *param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lStack_48;
  
  if (param_3 != 0xffffffff) {
    lStack_48 = param_1;
    FUN_10831d7b8(param_2,&lStack_48);
    if (param_2 != (long *)0x0) {
      if (((int)param_3 < 0) || ((int)param_2[1] <= (int)param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1083d81ac);
        (*pcVar3)();
      }
      puVar1 = (undefined8 *)(*param_2 + (ulong)param_3 * 0x10);
      lVar6 = *(long *)(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x40);
      for (lVar5 = 0; iVar2 != lVar5; lVar5 = lVar5 + 1) {
        lStack_48 = *(long *)(lVar6 + lVar5 * 8);
        puVar4 = puVar1;
        FUN_10831bec0(puVar1,&lStack_48);
        if (puVar4 != (undefined8 *)0x0) {
          FUN_1083d81ac(param_4,lVar5,lStack_48,*puVar4);
        }
      }
    }
  }
  return;
}



/* Entry: 1083d81ac; end: 1083d81ef;  */

void FUN_1083d81ac(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_14;
  
  uStack_28 = param_4;
  uStack_20 = param_3;
  uStack_14 = param_2;
  FUN_1083d9254(param_1,&uStack_14,&uStack_20,&uStack_28);
  return;
}



/* Entry: 1083d81f0; end: 1083d86cf;  */

uint FUN_1083d81f0(uint param_1,long param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  long *plVar9;
  ulong *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *puVar19;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  int *piStack_70;
  long lStack_68;
  
  func_0x0001083d92bc();
  if ((*(int *)(param_2 + 0xc) == 0x27) &&
     (lVar22 = *(long *)(unaff_x19 + 0x18), *(char *)(lVar22 + 0x54) == -1)) {
    uStack_78 = 0;
    piStack_70 = (int *)0x0;
    uVar4 = *(uint *)(lVar22 + 0x40);
    for (uVar20 = 0; (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar20; uVar20 = uVar20 + 1) {
      if ((long)*(int *)(unaff_x19 + 0x38) <= (long)uVar20) goto LAB_1083d868c;
      lVar21 = *(long *)(*(long *)(unaff_x19 + 0x30) + uVar20 * 8);
      lVar15 = lVar21;
      if ((*(int *)(lVar21 + 0xc) == 0x32) ||
         ((*(int *)(lVar21 + 0xc) == 0x25 &&
          (lVar15 = *(long *)(lVar21 + 0x20), *(int *)(lVar15 + 0xc) == 0x32)))) {
        lStack_88 = *(long *)(lVar15 + 0x18);
        if (*(uint *)(lVar22 + 0x40) <= uVar20) goto LAB_1083d868c;
        lStack_68 = *(long *)(*(long *)(lVar22 + 0x38) + uVar20 * 8);
        plVar9 = (long *)unaff_x20[3];
        FUN_1083d8e88();
        if (((ulong)plVar9 & 1) != 0) {
          if (*(char *)(lStack_88 + 0x38) == '\x03') {
            plVar9 = unaff_x20 + 6;
            FUN_10831bec0(plVar9,&lStack_88);
            lVar21 = *plVar9;
            func_0x0001083d9304();
          }
          else {
            if (*(char *)(lStack_88 + 0x38) != '\0') {
              FUN_10841076c(&UNK_10f492570);
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1083d8688);
              (*pcVar8)();
            }
            func_0x0001083d9304();
          }
          *plVar9 = lVar21;
        }
      }
    }
    lStack_88 = lVar22;
    if ((int)uStack_78 < 1) {
      param_1 = (uint)&lStack_88;
      FUN_1083d8d24();
      uVar5 = *(uint *)((long)unaff_x20 + 0x24);
      uVar4 = uVar5 - 1 & param_1;
      uVar23 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      uVar20 = (ulong)uVar23;
      uVar17 = uVar20;
      uVar6 = uVar23;
      while (uVar6 != 0) {
        puVar2 = (uint *)(unaff_x20[5] + (long)(int)uVar4 * 0x10);
        uVar6 = *puVar2;
        if (uVar6 == 0) break;
        if ((param_1 == uVar6) && (lStack_88 == *(long *)(puVar2 + 2))) goto LAB_1083d8554;
        uVar6 = 0;
        if ((int)uVar4 < 1) {
          uVar6 = uVar5;
        }
        uVar4 = (uVar4 + uVar6) - 1;
        uVar6 = (int)uVar17 - 1;
        uVar17 = (ulong)uVar6;
      }
      lStack_68 = lVar22;
      if ((int)(uVar5 * 3) <= (int)unaff_x20[4] * 4) {
        uVar4 = uVar5 << 1;
        if ((int)uVar5 < 1) {
          uVar4 = 4;
        }
        *(undefined4 *)(unaff_x20 + 4) = 0;
        *(uint *)((long)unaff_x20 + 0x24) = uVar4;
        lStack_88 = unaff_x20[5];
        unaff_x20[5] = 0;
        puVar13 = (undefined8 *)(((ulong)(uVar4 >> 1) & 0x3fffffff) << 5 | 0x10);
        __Znam();
        *puVar13 = 0x10;
        puVar13[1] = (ulong)uVar4;
        if (uVar4 != 0) {
          lVar22 = (ulong)uVar4 << 4;
          puVar19 = puVar13 + 2;
          do {
            *(undefined4 *)puVar19 = 0;
            lVar22 = lVar22 + -0x10;
            puVar19 = puVar19 + 2;
          } while (lVar22 != 0);
        }
        unaff_x20[5] = (long)(puVar13 + 2);
        uVar20 = uVar20 << 4;
        for (uVar17 = 0; uVar20 != uVar17; uVar17 = uVar17 + 0x10) {
          if (*(int *)(lStack_88 + uVar17) != 0) {
            FUN_1083d8d50(unaff_x20 + 4,lStack_88 + uVar17 + 8);
          }
        }
        FUN_1083d8e18(&lStack_88);
      }
      uVar23 = (uint)uVar20;
      FUN_1083d8d50(unaff_x20 + 4,&lStack_68);
      (**(code **)(*unaff_x20 + 0x20))();
      param_1 = (uint)unaff_x20;
LAB_1083d8554:
      bVar1 = true;
    }
    else {
      puVar10 = (ulong *)unaff_x20[1];
      FUN_1083d7f5c(puVar10,&lStack_88);
      lVar22 = 0;
      lStack_88 = *(long *)(unaff_x19 + 0x40);
      uStack_80 = (undefined4)unaff_x20[8];
      while( true ) {
        iVar7 = (int)puVar10[1];
        bVar1 = iVar7 <= lVar22;
        if (iVar7 <= lVar22) break;
        piVar14 = (int *)(*puVar10 + lVar22 * 0x10);
        if ((int)uStack_78 == *piVar14) {
          uVar20 = 0;
          uVar4 = uStack_78._4_4_;
          piVar18 = piStack_70;
          while ((uVar17 = (ulong)uStack_78._4_4_,
                 (uStack_78._4_4_ & ((int)uStack_78._4_4_ >> 0x1f ^ 0xffffffffU)) != uVar20 &&
                 (uVar17 = uVar20, *piVar18 == 0))) {
            uVar20 = uVar20 + 1;
            piVar18 = piVar18 + 6;
          }
LAB_1083d8388:
          piVar18 = piStack_70;
          uVar23 = (uint)uVar17;
          if (uVar23 == uVar4) {
            puVar12 = (undefined4 *)unaff_x20[2];
            FUN_1083d87ec(puVar12,&lStack_88);
            *puVar12 = (int)lVar22;
            func_0x0001083d9324();
            uVar23 = (uint)puVar12;
            param_1 = uVar23;
            goto LAB_1083d8630;
          }
          piVar11 = piVar14;
          FUN_10831bec0(piVar14,piStack_70 + (long)(int)uVar23 * 6 + 2);
          if (piVar11 != (int *)0x0) {
            uVar16 = *(undefined8 *)(piVar18 + (long)(int)uVar23 * 6 + 4);
            FUN_1083d6d1c(uVar16,*(undefined8 *)piVar11);
            if ((int)uVar16 == 0) goto LAB_1083d83fc;
            lVar21 = (long)(int)uVar23;
            lVar15 = (long)(int)uVar23 * 0x18;
            uVar20 = uVar17;
            do {
              lVar21 = lVar21 + 1;
              lVar15 = lVar15 + 0x18;
              uVar17 = (ulong)uStack_78._4_4_;
              if ((int)uStack_78._4_4_ <= lVar21) break;
              uVar20 = (ulong)((int)uVar20 + 1);
              uVar17 = uVar20;
            } while (*(int *)((long)piStack_70 + lVar15) == 0);
            goto LAB_1083d8388;
          }
        }
LAB_1083d83fc:
        lVar22 = lVar22 + 1;
      }
      piVar14 = (int *)unaff_x20[2];
      plVar9 = &lStack_88;
      FUN_1083d87ec();
      *piVar14 = iVar7;
      iVar3 = (int)puVar10[1];
      if (iVar3 < (int)(*(uint *)((long)puVar10 + 0xc) >> 1)) {
        FUN_1083d8b04(*puVar10 + (long)iVar3 * 0x10,&uStack_78);
      }
      else {
        if (iVar3 == 0x7fffffff) {
          func_0x00010bdb1a68();
LAB_1083d868c:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1083d8690);
          (*pcVar8)();
        }
        uVar20 = (ulong)(iVar3 + 1);
        FUN_1083d8c28(0x3ff8000000000000);
        FUN_1083d8b04(uVar20 + (long)(int)puVar10[1] * 0x10,&uStack_78);
        FUN_1083d8c58(puVar10,uVar20);
        if ((*(byte *)((long)puVar10 + 0xc) & 1) != 0) {
          _free(*puVar10);
        }
        uVar17 = (ulong)plVar9 >> 4;
        if (0x7ffffffe < uVar17) {
          uVar17 = 0x7fffffff;
        }
        *puVar10 = uVar20;
        *(uint *)((long)puVar10 + 0xc) = (int)uVar17 << 1 | 1;
      }
      *(int *)(puVar10 + 1) = (int)puVar10[1] + 1;
      func_0x0001083d9284();
      uVar23 = *(uint *)(unaff_x20 + 8);
      *(int *)(unaff_x20 + 8) = iVar7;
      plVar9 = unaff_x20;
      (**(code **)(*unaff_x20 + 0x20))();
      param_1 = (uint)plVar9;
      *(uint *)(unaff_x20 + 8) = uVar23;
      func_0x0001083d9284();
    }
LAB_1083d8630:
    func_0x0001083d9310(&uStack_78);
    if (!bVar1) goto LAB_1083d8644;
  }
  uVar23 = param_1;
  func_0x0001083d9324();
LAB_1083d8644:
  return uVar23 & 1;
}



/* Entry: 1083d86d0; end: 1083d87eb;  */

void FUN_1083d86d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *unaff_x19;
  long *plVar5;
  long lStack_48;
  
  func_0x0001083d92e0();
  FUN_10831bec0();
  if (param_1 == 0) {
    uVar1 = unaff_x19[1];
    if ((int)(uVar1 * 3) <= *unaff_x19 * 4) {
      uVar2 = uVar1 << 1;
      if ((int)uVar1 < 1) {
        uVar2 = 4;
      }
      *unaff_x19 = 0;
      unaff_x19[1] = uVar2;
      plVar5 = (long *)(unaff_x19 + 2);
      lStack_48 = *plVar5;
      *plVar5 = 0;
      puVar3 = (undefined8 *)((ulong)uVar2 * 0x18 + 0x10);
      __Znam();
      *puVar3 = 0x18;
      puVar3[1] = (ulong)uVar2;
      if (uVar2 != 0) {
        lVar4 = (ulong)uVar2 * 0x18;
        puVar3 = puVar3 + 2;
        do {
          *(undefined4 *)puVar3 = 0;
          lVar4 = lVar4 + -0x18;
          puVar3 = puVar3 + 3;
        } while (lVar4 != 0);
      }
      FUN_1083d89a0(plVar5);
      for (lVar4 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar4 != 0;
          lVar4 = lVar4 + 0x18) {
        if (*(int *)(lStack_48 + lVar4) != 0) {
          FUN_1083d88f8();
        }
      }
      func_0x00010831e544(&lStack_48);
    }
    FUN_1083d88f8();
  }
  return;
}



/* Entry: 1083d87ec; end: 1083d88f7;  */

void FUN_1083d87ec(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *unaff_x19;
  long lStack_38;
  
  func_0x0001083d92e0();
  func_0x0001083d8018();
  if (param_1 == 0) {
    uVar1 = unaff_x19[1];
    if ((int)(uVar1 * 3) <= *unaff_x19 * 4) {
      uVar2 = uVar1 << 1;
      if ((int)uVar1 < 1) {
        uVar2 = 4;
      }
      *unaff_x19 = 0;
      unaff_x19[1] = uVar2;
      lStack_38 = *(long *)(unaff_x19 + 2);
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      puVar3 = (undefined8 *)(((ulong)(uVar2 >> 1) & 0x3fffffff) << 6 | 0x10);
      __Znam();
      *puVar3 = 0x20;
      puVar3[1] = (ulong)uVar2;
      if (uVar2 != 0) {
        lVar4 = (ulong)uVar2 << 5;
        puVar5 = puVar3 + 2;
        do {
          *(undefined4 *)puVar5 = 0;
          lVar4 = lVar4 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar4 != 0);
      }
      *(undefined8 **)(unaff_x19 + 2) = puVar3 + 2;
      for (lVar4 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 5 != lVar4;
          lVar4 = lVar4 + 0x20) {
        if (*(int *)(lStack_38 + lVar4) != 0) {
          FUN_1083d89b8();
        }
      }
      func_0x00010831e3bc(&lStack_38);
    }
    FUN_1083d89b8();
  }
  return;
}



/* Entry: 1083d88f8; end: 1083d899f;  */

uint * FUN_1083d88f8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *extraout_x8;
  uint *puVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  
  func_0x0001083d92bc();
  FUN_10831e618();
  uVar4 = *(uint *)(unaff_x20 + 4);
  uVar1 = uVar4 - 1 & param_2;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar1 * 0x18);
    if (*puVar5 == 0) break;
    if ((param_2 == *puVar5) && (*unaff_x19 == *(long *)(puVar5 + 2))) {
      *puVar5 = 0;
      lVar6 = *unaff_x19;
      *(long *)(puVar5 + 4) = unaff_x19[1];
      *(long *)(puVar5 + 2) = lVar6;
      *puVar5 = param_2;
      return puVar5 + 2;
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar4;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  func_0x0001083d92c8(puVar5 + 2,*unaff_x19);
  return extraout_x8;
}



/* Entry: 1083d89a0; end: 1083d89b7;  */

void FUN_1083d89a0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083d89b8; end: 1083d8a63;  */

int * FUN_1083d89b8(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint extraout_w8;
  int *extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  ulong uVar4;
  ulong extraout_x11;
  uint extraout_w12;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001083d92bc();
  FUN_1083d8a64();
  func_0x0001083d9330();
  uVar4 = (ulong)*(uint *)(unaff_x19 + 1);
  uVar2 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar5 = extraout_x9;
  lVar3 = extraout_x10;
  while( true ) {
    if (uVar2 == 0) {
      return (int *)0x0;
    }
    piVar1 = (int *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar5 * 0x20);
    if (*piVar1 == 0) break;
    if ((((int)param_2 == *piVar1) && (lVar3 == *(long *)(piVar1 + 2))) && ((int)uVar4 == piVar1[4])
       ) {
      *piVar1 = 0;
      uVar6 = unaff_x19[1];
      uVar5 = *unaff_x19;
      *(undefined8 *)(piVar1 + 6) = unaff_x19[2];
      *(undefined8 *)(piVar1 + 4) = uVar6;
      *(undefined8 *)(piVar1 + 2) = uVar5;
      *piVar1 = (int)param_2;
      return piVar1 + 2;
    }
    func_0x0001083d92ec();
    uVar4 = extraout_x11;
    uVar5 = extraout_x9_00;
    lVar3 = extraout_x10_00;
    uVar2 = extraout_w12;
  }
  uVar5 = *unaff_x19;
  *(undefined8 *)(piVar1 + 6) = unaff_x19[2];
  func_0x0001083d92c8(piVar1 + 2,uVar5);
  return extraout_x8;
}



/* Entry: 1083d8a64; end: 1083d8aa3;  */

uint FUN_1083d8a64(uint param_1)

{
  func_0x0001083d8a80();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1083d8aa4; end: 1083d8ae3;  */

uint FUN_1083d8aa4(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_1083d8ae4(puVar1);
  puVar2 = &uStack_22;
  FUN_108156ba4(puVar2,param_2 + 8);
  return (uint)puVar2 ^ (uint)puVar1;
}



/* Entry: 1083d8ae4; end: 1083d8b03;  */

void FUN_1083d8ae4(undefined8 param_1,undefined8 param_2)

{
  FUN_108343308(param_2,8,0);
  return;
}



/* Entry: 1083d8b04; end: 1083d8c27;  */

undefined8 * FUN_1083d8b04(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1 != param_2) {
    iVar8 = *(int *)((long)param_2 + 4);
    uVar10 = (ulong)iVar8;
    *param_1 = *param_2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    uVar9 = uVar10 * 0x18;
    puVar3 = (undefined8 *)(uVar9 + 0x10);
    if (0xffffffffffffffef < uVar9 || SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
      puVar3 = (undefined8 *)0xffffffffffffffff;
    }
    __Znam();
    *puVar3 = 0x18;
    puVar3[1] = uVar10;
    puVar3 = puVar3 + 2;
    if (iVar8 != 0) {
      do {
        *(undefined4 *)puVar3 = 0;
        uVar9 = uVar9 - 0x18;
        puVar3 = puVar3 + 3;
      } while (uVar9 != 0);
    }
    FUN_1083d89a0(param_1 + 1);
    lVar4 = 0;
    for (lVar5 = 0; lVar5 < *(int *)((long)param_1 + 4); lVar5 = lVar5 + 1) {
      lVar7 = param_2[1];
      lVar6 = param_1[1];
      if (lVar6 != lVar7) {
        iVar8 = *(int *)(lVar7 + lVar4);
        if (*(int *)(lVar6 + lVar4) == 0) {
          if (iVar8 == 0) goto LAB_1083d8bf4;
          piVar1 = (int *)(lVar7 + lVar4);
          uVar11 = *(undefined8 *)(piVar1 + 2);
          *(undefined8 *)(lVar6 + lVar4 + 0x10) = *(undefined8 *)(piVar1 + 4);
          *(undefined8 *)(lVar6 + lVar4 + 8) = uVar11;
          iVar8 = *piVar1;
        }
        else if (iVar8 != 0) {
          uVar11 = *(undefined8 *)(lVar7 + lVar4 + 8);
          *(undefined8 *)(lVar6 + lVar4 + 0x10) = *(undefined8 *)(lVar7 + lVar4 + 0x10);
          *(undefined8 *)(lVar6 + lVar4 + 8) = uVar11;
        }
        *(int *)(lVar6 + lVar4) = iVar8;
      }
LAB_1083d8bf4:
      lVar4 = lVar4 + 0x18;
    }
  }
  return param_1;
}



/* Entry: 1083d8c28; end: 1083d8c57;  */

void FUN_1083d8c28(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x10;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1083d8c58; end: 1083d8cbb;  */

void FUN_1083d8c58(void)

{
  long unaff_x19;
  long *unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x0001083d92bc();
  lVar1 = 0;
  for (lVar2 = 0; lVar2 < (int)unaff_x20[1]; lVar2 = lVar2 + 1) {
    FUN_1083d8cbc(unaff_x19,*unaff_x20 + lVar1);
    func_0x0001083d9310(*unaff_x20 + lVar1);
    unaff_x19 = unaff_x19 + 0x10;
    lVar1 = lVar1 + 0x10;
  }
  return;
}



/* Entry: 1083d8cbc; end: 1083d8d23;  */

undefined8 * FUN_1083d8cbc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001083d8ce0();
  return param_1;
}



/* Entry: 1083d8d24; end: 1083d8d4f;  */

uint FUN_1083d8d24(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  FUN_10831e6c4(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1083d8d50; end: 1083d8de7;  */

void FUN_1083d8d50(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_x19;
  long *unaff_x20;
  
  func_0x0001083d92e0();
  FUN_1083d8d24();
  uVar5 = unaff_x19[1];
  uVar2 = uVar5 - 1 & param_2;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return;
    }
    puVar1 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((param_2 == *puVar1) && (*unaff_x20 == *(long *)(puVar1 + 2))) {
      *puVar1 = param_2;
      return;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  *(long *)(puVar1 + 2) = *unaff_x20;
  *puVar1 = param_2;
  *unaff_x19 = *unaff_x19 + 1;
  return;
}



/* Entry: 1083d8de8; end: 1083d8e17;  */

void FUN_1083d8de8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + -8) != 0) {
      lVar1 = *(long *)(param_2 + -8) << 4;
      do {
        if (*(int *)(param_2 + -0x10 + lVar1) != 0) {
          *(undefined4 *)(param_2 + -0x10 + lVar1) = 0;
        }
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}


