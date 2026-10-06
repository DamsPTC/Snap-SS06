/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083068fc; end: 10830690f;  */

void FUN_1083068fc(void)

{
  FUN_1083068d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108306910; end: 108306933;  */

undefined * FUN_108306910(void)

{
  return &UNK_10f48a1c8;
}



/* Entry: 108306934; end: 10830697b;  */

void FUN_108306934(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_1082a1068(param_2,*(undefined8 *)(param_1 + 0x98));
    func_0x000108306de8(*(undefined8 *)(param_1 + 0x98));
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    plVar2 = (long *)*puVar1;
    if (plVar2 == (long *)0x0) {
      uStack_40 = 0;
      uStack_38 = 0;
      plVar2 = (long *)puVar1[4];
      if (plVar2 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      }
      plStack_48 = plVar2;
      FUN_1082a16e0(param_2,&uStack_38,&uStack_40,&plStack_48,0);
      func_0x0001082a20e4();
      FUN_1082647e4(&uStack_40);
      FUN_1082647e4(&uStack_38);
      func_0x0001082a1754(param_2,*(undefined4 *)(puVar1 + 5),*(undefined4 *)((long)puVar1 + 0x2c));
    }
    else {
      func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      uStack_58 = 0;
      plStack_60 = (long *)puVar1[4];
      plStack_50 = plVar2;
      if (plStack_60 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plStack_60 + 0x10));
      }
      FUN_1082a16e0(param_2,&plStack_50,&uStack_58,&plStack_60,*(undefined1 *)((long)puVar1 + 0x1c))
      ;
      FUN_1082647e4(&plStack_60);
      func_0x0001082a2114();
      func_0x0001082a2124();
      if (*(int *)((long)puVar1 + 0xc) == 0) {
        func_0x0001082a175c(param_2,*(undefined4 *)(puVar1 + 1),*(undefined4 *)((long)puVar1 + 0x14)
                            ,*(undefined2 *)(puVar1 + 3),*(undefined2 *)((long)puVar1 + 0x1a),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
      else {
        func_0x0001082a1764(param_2,*(undefined4 *)(puVar1 + 1),*(int *)((long)puVar1 + 0xc),
                            *(undefined4 *)(puVar1 + 2),*(undefined4 *)(puVar1 + 5),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
    }
    return;
  }
  return;
}



/* Entry: 10830697c; end: 1083069a3;  */

/* WARNING: Removing unreachable block (ram,0x0001082fc460) */

uint FUN_10830697c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  FUN_1082f3a00(lVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return (uint)lVar1 & 0xffff;
}



/* Entry: 1083069a4; end: 108306a5f;  */

void FUN_1083069a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000108306e74();
  func_0x000108306e10(*(byte *)(param_1 + 0x39) >> 2 & 1);
  func_0x00010828dd54();
  lVar1 = param_1 + 0x30;
  func_0x000108306e88(lVar1,param_2);
  FUN_1082fc8bc();
  *(long *)(param_1 + 0x98) = lVar1;
  return;
}



/* Entry: 108306a60; end: 108306c5b;  */

void FUN_108306a60(long param_1,float *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_48;
  undefined1 auStack_3c [4];
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 == 0) {
    func_0x000108306e54();
    lVar3 = *(long *)(param_1 + 0x98);
  }
  uVar2 = 10;
  if (*(float *)(param_1 + 0x88) <= 0.0) {
    uVar2 = 5;
  }
  uStack_38 = 0;
  pfVar1 = param_2;
  (**(code **)(*(long *)param_2 + 0x18))
            (param_2,*(undefined8 *)(*(long *)(lVar3 + 0x98) + 0x20),uVar2,&uStack_38,auStack_3c);
  if (pfVar1 == (float *)0x0) {
    FUN_10841076c(&UNK_10f488006);
  }
  else {
    if (*(float *)(param_1 + 0x88) <= 0.0) {
      fVar4 = *(float *)(param_1 + 0x78);
      *pfVar1 = fVar4;
      uVar6 = *(undefined8 *)(param_1 + 0x7c);
      pfVar1[9] = (float)uVar6;
      fVar5 = *(float *)(param_1 + 0x84);
      *(undefined8 *)(pfVar1 + 3) = uVar6;
      *(undefined8 *)(pfVar1 + 1) = uVar6;
      pfVar1[5] = fVar5;
      pfVar1[6] = fVar4;
      pfVar1[7] = fVar5;
      pfVar1[8] = fVar4;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x88) * 0.5;
      fVar5 = *(float *)(param_1 + 0x78);
      fVar7 = *(float *)(param_1 + 0x7c);
      fVar8 = fVar4 + fVar5;
      fVar9 = fVar4 + fVar7;
      *pfVar1 = fVar8;
      pfVar1[1] = fVar9;
      fVar10 = *(float *)(param_1 + 0x80);
      fVar11 = *(float *)(param_1 + 0x84);
      fVar12 = fVar10 - fVar4;
      pfVar1[4] = fVar12;
      pfVar1[5] = fVar9;
      fVar5 = fVar5 - fVar4;
      fVar7 = fVar7 - fVar4;
      pfVar1[2] = fVar5;
      pfVar1[3] = fVar7;
      fVar10 = fVar4 + fVar10;
      pfVar1[6] = fVar10;
      pfVar1[7] = fVar7;
      fVar7 = fVar11 - fVar4;
      pfVar1[8] = fVar12;
      pfVar1[9] = fVar7;
      fVar11 = fVar4 + fVar11;
      pfVar1[10] = fVar10;
      pfVar1[0xb] = fVar11;
      pfVar1[0xc] = fVar8;
      pfVar1[0xd] = fVar7;
      pfVar1[0xe] = fVar5;
      pfVar1[0xf] = fVar11;
      *(undefined8 *)(pfVar1 + 0x12) = *(undefined8 *)(pfVar1 + 2);
      *(undefined8 *)(pfVar1 + 0x10) = *(undefined8 *)pfVar1;
      if (*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x78) <= fVar4 + fVar4) {
        fVar5 = (*(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x78)) * 0.5;
        pfVar1[0x10] = fVar5;
        pfVar1[0xc] = fVar5;
        pfVar1[8] = fVar5;
        pfVar1[4] = fVar5;
        *pfVar1 = fVar5;
      }
      if (*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x7c) <= fVar4 + fVar4) {
        fVar4 = (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x7c)) * 0.5;
        pfVar1[0x11] = fVar4;
        pfVar1[0xd] = fVar4;
        pfVar1[9] = fVar4;
        pfVar1[5] = fVar4;
        pfVar1[1] = fVar4;
      }
    }
    FUN_1082e91fc();
    uStack_48 = uStack_38;
    *(float **)(param_1 + 0x90) = param_2;
    uStack_38 = 0;
    FUN_1082f2d2c();
    FUN_1082647e4(&uStack_48);
  }
  FUN_1082647e4(&uStack_38);
  return;
}



/* Entry: 108306c5c; end: 108306d53;  */

undefined8 *
FUN_108306c5c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = param_1;
  FUN_108305c10();
  param_1[2] = 0;
  param_1[1] = 0;
  *(short *)(param_1 + 3) = (short)puVar1;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_SUB_110a3b1f8;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xf0 | 1;
  param_1[0x12] = param_1 + 8;
  param_1[0x13] = 0x200000000;
  uVar2 = param_4[4];
  uVar5 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  param_1[0x15] = param_4[1];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar3;
  param_1[0x18] = uVar2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar2 = *param_3;
  uVar4 = param_5[1];
  uVar3 = *param_5;
  uVar6 = param_6[1];
  uVar5 = *param_6;
  param_1[9] = param_3[1];
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0x10] = param_7;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  uVar2 = *param_5;
  param_1[5] = param_5[1];
  param_1[4] = uVar2;
  *(undefined2 *)((long)param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  return param_1;
}



/* Entry: 108306d54; end: 108306e9b;  */

void FUN_108306d54(void)

{
  uint uVar1;
  undefined4 unaff_w23;
  uint unaff_w28;
  undefined4 *in_stack_00000020;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  
  uVar1 = unaff_w28 ^ 1;
  *in_stack_00000020 = in_stack_0000006c;
  in_stack_00000020[1] = in_stack_00000070;
  in_stack_00000020 = in_stack_00000020 + 2;
  FUN_1082fdf68(&stack0x00000020,&stack0x00000094);
  if ((uVar1 & 1) != 0) {
    *in_stack_00000020 = unaff_w23;
    func_0x000108306d94();
  }
  func_0x000108306da4();
  func_0x000108306d78();
  if ((uVar1 & 1) != 0) {
    *in_stack_00000020 = unaff_w23;
    func_0x000108306d94();
  }
  func_0x000108306da4();
  func_0x000108306d78();
  if ((uVar1 & 1) != 0) {
    *in_stack_00000020 = unaff_w23;
    func_0x000108306d94();
  }
  func_0x000108306da4();
  func_0x000108306d78();
  if ((uVar1 & 1) != 0) {
    *in_stack_00000020 = unaff_w23;
    func_0x000108306d94();
  }
  return;
}



/* Entry: 108306e9c; end: 1083070a3;  */

undefined8 *
FUN_108306e9c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,long *param_4,
             undefined8 *param_5,long param_6)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  if ((bRam000000011372ac50 & 1) == 0) {
    iVar2 = 0x1372ac50;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1082e6880();
      iRam000000011372ac48 = iVar2;
      ___cxa_guard_release(0x11372ac50);
    }
  }
  iVar2 = iRam000000011372ac48;
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = (short)iVar2;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_110a3b358;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  uVar8 = param_3[1];
  uVar7 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)((long)param_1 + 0x54) = param_3[4];
  *(undefined8 *)((long)param_1 + 0x3c) = uVar8;
  *(undefined8 *)((long)param_1 + 0x34) = uVar7;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar6;
  *(undefined8 *)((long)param_1 + 0x44) = uVar5;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  func_0x000108376b14(param_1 + 0xc,param_4);
  uVar5 = *param_5;
  param_1[0xf] = param_5[1];
  param_1[0xe] = uVar5;
  uVar6 = *(undefined8 *)(param_6 + 0x24);
  uVar5 = *(undefined8 *)(param_6 + 0x1c);
  param_1[0x12] = 0;
  puVar3 = param_1 + 0x10;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0x13] = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*param_4 + 0x48);
  FUN_1082a3af0(param_1 + 0x15,param_6);
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_1082fc488();
  if (((ulong)puVar3 & 1) == 0) {
    *(uint *)((long)param_1 + 0x5c) = *(uint *)((long)param_1 + 0x5c) | 0x40;
  }
  func_0x0001083773e0();
  lStack_58 = param_4[1];
  lStack_60 = *param_4;
  func_0x000108307828();
  if (((ulong)param_4 & 1) == 0) {
    func_0x0001083a6448(param_5);
    func_0x000108307840();
  }
  FUN_108364f90(param_3,&lStack_60,&lStack_60,1);
  iVar2 = (int)param_3;
  func_0x000108307828();
  if (iVar2 != 0) {
    fVar4 = *(float *)(param_5 + 1);
    if (fVar4 <= 1.0 || (*(uint *)((long)param_5 + 0xc) & 0xff0000) != 0) {
      fVar4 = 1.0;
    }
    fVar1 = 0.70710677;
    if (1.4142135 <= fVar4 || (*(uint *)((long)param_5 + 0xc) & 0xffff) != 2) {
      fVar1 = fVar4 * 0.5;
    }
    func_0x000108307840(fVar1);
  }
  param_1[5] = lStack_58;
  param_1[4] = lStack_60;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  return param_1;
}



/* Entry: 1083070a4; end: 1083070c3;  */

void FUN_1083070a4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x20;
  long *plVar7;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  
  lVar6 = *(long *)(param_1 + 0xe8);
  if ((lVar6 != 0) || (lVar6 = *(long *)(param_1 + 0xe0), lVar6 != 0)) {
    lVar4 = *(long *)(lVar6 + 0x88);
    func_0x0001082a3784();
    puVar1 = *(undefined8 **)(lVar4 + 0x50);
    for (lVar6 = (long)*(int *)(lVar4 + 0x78) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      FUN_108296038(*puVar1);
      puVar1 = puVar1 + 1;
    }
    if ((*unaff_x20 != 0) && ((*(byte *)(unaff_x20 + 3) >> 1 & 1) == 0)) {
      func_0x000108298794();
      return;
    }
    return;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_108296038(*(long *)(param_1 + 0xa8),param_2);
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    return;
  }
  uVar5 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110a35a10;
  uStack_40 = param_2;
  FUN_1082960a8(*(long *)(param_1 + 0xb0),&ppuStack_48);
  pppuVar2 = &ppuStack_48;
  FUN_10826e20c();
  func_0x000108298c3c(uVar5);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar3 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298a0c();
    func_0x000108298c90();
    if ((pppuVar3 != (undefined ***)0x0) && ((int)unaff_x20[1] == 0x2d)) {
      func_0x0001082987ac(pppuVar2,unaff_x20);
    }
    plVar7 = (long *)unaff_x20[3];
    for (lVar6 = (long)(int)unaff_x20[4] << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      if (*plVar7 != 0) {
        FUN_1082960a8(*plVar7,pppuVar2);
      }
      plVar7 = plVar7 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1083070c4; end: 108307157;  */

uint FUN_1083070c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(*(long *)(param_2 + 0x10) + 0x12) & 1) == 0) {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x20;
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x88);
  uStack_30 = *(undefined8 *)(param_1 + 0x80);
  uStack_34 = 3;
  if (*(float *)(param_1 + 0x8c) != 1.0) {
    uStack_34 = 1;
  }
  uVar1 = param_1 + 0xa8;
  FUN_1082a3cdc(uVar1,&uStack_34,0,param_3,&UNK_10df14cb4,param_2,param_4,param_1 + 0x80);
  *(bool *)(param_1 + 200) = (uVar1 & 0x80) == 0;
  return (uint)uVar1 & 0xffff;
}



/* Entry: 108307158; end: 108307327;  */

undefined8 FUN_108307158(long param_1,long param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    return 2;
  }
  if ((*(byte *)(param_2 + 200) & 1) == 0) {
    uVar2 = param_1 + 0x34;
    func_0x0001081421c8(uVar2,param_2 + 0x34);
    if (((uVar2 & 1) == 0) && (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) {
      uVar2 = param_1 + 0xa8;
      FUN_1082ee8f0(uVar2,param_2 + 0xa8);
      iVar1 = (int)uVar2;
      if ((uVar2 & 1) == 0) {
        func_0x000108307828();
        uVar2 = param_2 + 0x70;
        FUN_10828782c();
        if (iVar1 == (int)uVar2) {
          uVar5 = *(uint *)(param_2 + 0x5c) | *(uint *)(param_1 + 0x5c);
          if (((uVar5 >> 2 & 1) == 0) &&
             (((*(float *)(param_1 + 0x74) != *(float *)(param_2 + 0x74) ||
               (*(char *)(param_1 + 0x7e) != *(char *)(param_2 + 0x7e))) ||
              ((*(char *)(param_1 + 0x7e) == '\0' &&
               (*(float *)(param_1 + 0x78) != *(float *)(param_2 + 0x78))))))) {
            func_0x000108307828();
            if ((uVar2 & 1) != 0) {
              return 2;
            }
            uVar5 = uVar5 | 4;
          }
          uVar6 = uVar5;
          if ((uVar5 >> 3 & 1) == 0) {
            lVar7 = param_1 + 0x80;
            FUN_10828e84c(lVar7,param_2 + 0x80);
            uVar6 = uVar5 | 8;
            if ((int)lVar7 == 0) {
              uVar6 = uVar5;
            }
          }
          uVar5 = uVar6 & 0xc;
          if ((uVar5 == 0) ||
             ((((uVar5 & (*(uint *)(param_1 + 0x5c) ^ 0xffffffff)) == 0 ||
               (*(int *)(param_1 + 0xa0) < 0x33)) &&
              (((uVar5 & (*(uint *)(param_2 + 0x5c) ^ 0xffffffff)) == 0 ||
               (*(int *)(param_2 + 0xa0) < 0x33)))))) {
            *(uint *)(param_1 + 0x5c) = uVar6;
            plVar3 = param_3;
            func_0x000108307838(param_3,0x41);
            lVar7 = param_3[1];
            param_3[1] = (long)(plVar3 + 7);
            plVar3[7] = (long)FUN_108307798;
            lVar4 = param_3[1];
            param_3[1] = lVar4 + 8;
            *(char *)(lVar4 + 8) = (char)plVar3 - (char)(int)lVar7;
            *param_3 = param_3[1] + 1;
            param_3[1] = param_3[1] + 1;
            func_0x000108376b14();
            lVar4 = *(long *)(param_2 + 0x78);
            lVar7 = *(long *)(param_2 + 0x70);
            lVar9 = *(long *)(param_2 + 0x88);
            lVar8 = *(long *)(param_2 + 0x80);
            plVar3[6] = *(long *)(param_2 + 0x90);
            plVar3[3] = lVar4;
            plVar3[2] = lVar7;
            plVar3[5] = lVar9;
            plVar3[4] = lVar8;
            **(undefined8 **)(param_1 + 0x98) = plVar3;
            plVar3 = plVar3 + 6;
            if (*(long **)(param_2 + 0x98) != (long *)(param_2 + 0x90)) {
              plVar3 = *(long **)(param_2 + 0x98);
            }
            *(long **)(param_1 + 0x98) = plVar3;
            *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + *(int *)(param_2 + 0xa0);
            return 0;
          }
        }
      }
    }
  }
  return 2;
}



/* Entry: 108307328; end: 10830748f;  */

void FUN_108307328(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  
  puVar6 = (uint *)*param_2;
  FUN_10830dbf0(param_2,*(undefined4 *)(param_1 + 0x30),param_3,param_1 + 0xa8);
  puVar2 = puVar6;
  func_0x000108307838(puVar6,0x41);
  uVar1 = puVar6[2];
  *(uint **)(puVar6 + 2) = puVar2 + 0xe;
  *(code **)(puVar2 + 0xe) = FUN_1083077a0;
  lVar4 = *(long *)(puVar6 + 2);
  *(long *)(puVar6 + 2) = lVar4 + 8;
  *(char *)(lVar4 + 8) = (char)puVar2 - (char)uVar1;
  *(long *)puVar6 = *(long *)(puVar6 + 2) + 1;
  *(long *)(puVar6 + 2) = *(long *)(puVar6 + 2) + 1;
  *puVar2 = *(uint *)(param_1 + 0x5c) | 1;
  *(uint **)(puVar2 + 6) = puVar2 + 2;
  puVar2[8] = 0;
  puVar2[9] = 2;
  puVar2[10] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  *(uint **)(param_1 + 0xd0) = puVar2;
  plVar7 = (long *)*param_2;
  plVar3 = plVar7;
  func_0x000108307838(plVar7,0x141);
  lVar4 = plVar7[1];
  plVar7[1] = (long)(plVar3 + 0x27);
  plVar3[0x27] = 0x1083077d4;
  lVar5 = plVar7[1];
  plVar7[1] = lVar5 + 8;
  *(char *)(lVar5 + 8) = (char)plVar3 - (char)(int)lVar4;
  *plVar7 = plVar7[1] + 1;
  plVar7[1] = plVar7[1] + 1;
  FUN_10830d028(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  *(long **)(param_1 + 0xd8) = plVar3;
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x000108307818();
    *(long **)(param_1 + 0xe0) = plVar3;
  }
  func_0x000108307818();
  *(long **)(param_1 + 0xe8) = plVar3;
  return;
}



/* Entry: 108307490; end: 1083075d7;  */

void FUN_108307490(long *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [72];
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_3;
  (**(code **)(*plVar6 + 0x28))();
  cVar3 = (char)plVar6[1];
  uVar5 = cVar3 == '\x01';
  plVar6 = param_2 + 5;
  func_0x0001082a6e68();
  uStack_b0 = (undefined4)param_6;
  uStack_ac = (undefined4)param_7;
  uStack_a8 = *(undefined8 *)(param_2[2] + 0xb8);
  plStack_d0 = plVar6;
  plStack_c8 = param_3;
  uStack_c0 = '\x01' < cVar3;
  uStack_b8 = param_5;
  if (param_4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0x2000000020000000;
    uStack_90 = 0x2000000020000000;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    FUN_1082a191c(&uStack_a0,param_4);
  }
  plVar6 = param_1;
  FUN_108307328(param_1,&plStack_d0,&uStack_a0);
  func_0x000108307830();
  if (param_1[0x1c] != 0) {
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x48))();
  }
  lVar10 = param_1[0x1d];
  if (lVar10 != 0) {
    (**(code **)(*param_2 + 0x48))();
    plVar6 = param_2;
  }
  func_0x000108307858(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108307830();
  plVar7 = plVar6;
  __Unwind_Resume();
  pcStack_d8 = FUN_1083075d8;
  uStack_f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = plVar7[0x1a];
  plStack_f0 = param_1;
  plStack_e8 = plVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (lVar8 == 0) {
    lStack_170 = lVar10 + 0x10;
    lVar8 = *(long *)(lVar10 + 0x150);
    uStack_168 = *(undefined8 *)(lVar8 + 8);
    uStack_160 = *(undefined1 *)(lVar8 + 0x18);
    lStack_158 = lVar8 + 0x28;
    uStack_150 = *(undefined8 *)(lVar8 + 0x48);
    uStack_148 = *(undefined8 *)(*(long *)(lVar10 + 0x160) + 0x10);
    func_0x0001082a167c(auStack_140,lVar10);
    FUN_108307328(plVar7,&lStack_170,auStack_140);
    func_0x000108307830();
    lVar8 = plVar7[0x1a];
  }
  uVar5 = lVar10 == 0;
  lVar11 = 0;
  if (!(bool)uVar5) {
    lVar11 = lVar10 + 8;
  }
  FUN_108310278(lVar8,lVar11,(long)plVar7 + 0x34,plVar7 + 0xc,(int)plVar7[0x14]);
  func_0x000108307858(uStack_f8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108307830();
  lVar9 = lVar8;
  __Unwind_Resume();
  pcStack_178 = FUN_1083076b4;
  uStack_1a0 = param_7;
  lStack_198 = param_4;
  lStack_190 = lVar10;
  lStack_188 = lVar8;
  ppuStack_180 = &puStack_e0;
  if (*(long *)(lVar9 + 0xe0) != 0) {
    func_0x00010830784c();
    func_0x000108307804(*(undefined8 *)(lVar9 + 0xe0));
    FUN_108311b40(*(undefined8 *)(lVar9 + 0xd0),lVar11);
  }
  if (*(long *)(lVar9 + 0xe8) != 0) {
    func_0x00010830784c();
    func_0x000108307804(*(undefined8 *)(lVar9 + 0xe8));
    lVar10 = *(long *)(lVar9 + 0xd0);
    if (((*(int *)(lVar10 + 0x20) != 0) && (0 < *(int *)(lVar10 + 0x28))) &&
       (((*(byte *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x160) + 0x10) + 0x10) + 0x5e) & 1) != 0
        || (*(long *)(lVar10 + 0x30) != 0)))) {
      puVar12 = *(undefined8 **)(lVar10 + 0x18);
      puVar2 = puVar12 + (long)*(int *)(lVar10 + 0x20) * 2;
      uStack_1b0 = param_5;
      uStack_1a8 = param_6;
      for (; puVar12 != puVar2; puVar12 = puVar12 + 2) {
        uStack_1b8 = 0;
        plVar6 = (long *)*puVar12;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
        lVar8 = *(long *)(lVar10 + 0x30);
        if (lVar8 != 0) {
          piVar1 = (int *)(lVar8 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_1c8 = 0;
        if (lVar8 != 0) {
          lStack_1c8 = lVar8 + 0xb0;
        }
        plStack_1c0 = plVar6;
        FUN_1082a16e0(lVar11,&uStack_1b8,&plStack_1c0,&lStack_1c8,0);
        FUN_1082647e4(&lStack_1c8);
        FUN_1082647e4(&plStack_1c0);
        FUN_1082647e4(&uStack_1b8);
        FUN_1082f43ac(lVar11,*(undefined4 *)(puVar12 + 1),*(undefined4 *)((long)puVar12 + 0xc),
                      *(undefined4 *)(lVar10 + 0x28),0);
      }
    }
    return;
  }
  return;
}



/* Entry: 1083075d8; end: 1083076b3;  */

void FUN_1083075d8(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0xd0);
  if (lVar6 == 0) {
    lStack_a0 = param_2 + 0x10;
    lVar6 = *(long *)(param_2 + 0x150);
    uStack_98 = *(undefined8 *)(lVar6 + 8);
    uStack_90 = *(undefined1 *)(lVar6 + 0x18);
    lStack_88 = lVar6 + 0x28;
    uStack_80 = *(undefined8 *)(lVar6 + 0x48);
    uStack_78 = *(undefined8 *)(*(long *)(param_2 + 0x160) + 0x10);
    func_0x0001082a167c(auStack_70,param_2);
    FUN_108307328(param_1,&lStack_a0,auStack_70);
    func_0x000108307830();
    lVar6 = *(long *)(param_1 + 0xd0);
  }
  uVar5 = param_2 == 0;
  lVar7 = 0;
  if (!(bool)uVar5) {
    lVar7 = param_2 + 8;
  }
  FUN_108310278(lVar6,lVar7,param_1 + 0x34,param_1 + 0x60,*(undefined4 *)(param_1 + 0xa0));
  func_0x000108307858(uStack_28);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108307830();
  __Unwind_Resume();
  if (*(long *)(lVar6 + 0xe0) != 0) {
    func_0x00010830784c();
    func_0x000108307804(*(undefined8 *)(lVar6 + 0xe0));
    FUN_108311b40(*(undefined8 *)(lVar6 + 0xd0),lVar7);
  }
  if (*(long *)(lVar6 + 0xe8) != 0) {
    func_0x00010830784c();
    func_0x000108307804(*(undefined8 *)(lVar6 + 0xe8));
    lVar6 = *(long *)(lVar6 + 0xd0);
    if (((*(int *)(lVar6 + 0x20) != 0) && (0 < *(int *)(lVar6 + 0x28))) &&
       (((*(byte *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x160) + 0x10) + 0x10) + 0x5e) & 1) != 0
        || (*(long *)(lVar6 + 0x30) != 0)))) {
      puVar10 = *(undefined8 **)(lVar6 + 0x18);
      puVar2 = puVar10 + (long)*(int *)(lVar6 + 0x20) * 2;
      for (; puVar10 != puVar2; puVar10 = puVar10 + 2) {
        uStack_e8 = 0;
        plVar9 = (long *)*puVar10;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        lVar8 = *(long *)(lVar6 + 0x30);
        if (lVar8 != 0) {
          piVar1 = (int *)(lVar8 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_f8 = 0;
        if (lVar8 != 0) {
          lStack_f8 = lVar8 + 0xb0;
        }
        plStack_f0 = plVar9;
        FUN_1082a16e0(lVar7,&uStack_e8,&plStack_f0,&lStack_f8,0);
        FUN_1082647e4(&lStack_f8);
        FUN_1082647e4(&plStack_f0);
        FUN_1082647e4(&uStack_e8);
        FUN_1082f43ac(lVar7,*(undefined4 *)(puVar10 + 1),*(undefined4 *)((long)puVar10 + 0xc),
                      *(undefined4 *)(lVar6 + 0x28),0);
      }
    }
    return;
  }
  return;
}



/* Entry: 1083076b4; end: 10830772b;  */

void FUN_1083076b4(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    func_0x00010830784c();
    func_0x000108307804(*(undefined8 *)(param_1 + 0xe0));
    FUN_108311b40(*(undefined8 *)(param_1 + 0xd0),param_2);
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    func_0x00010830784c();
    func_0x000108307804(*(undefined8 *)(param_1 + 0xe8));
    lVar5 = *(long *)(param_1 + 0xd0);
    if (((*(int *)(lVar5 + 0x20) != 0) && (0 < *(int *)(lVar5 + 0x28))) &&
       (((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x160) + 0x10) + 0x10) + 0x5e) & 1) != 0
        || (*(long *)(lVar5 + 0x30) != 0)))) {
      puVar8 = *(undefined8 **)(lVar5 + 0x18);
      puVar2 = puVar8 + (long)*(int *)(lVar5 + 0x20) * 2;
      for (; puVar8 != puVar2; puVar8 = puVar8 + 2) {
        uStack_48 = 0;
        plVar7 = (long *)*puVar8;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        lVar6 = *(long *)(lVar5 + 0x30);
        if (lVar6 != 0) {
          piVar1 = (int *)(lVar6 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_58 = 0;
        if (lVar6 != 0) {
          lStack_58 = lVar6 + 0xb0;
        }
        plStack_50 = plVar7;
        FUN_1082a16e0(param_2,&uStack_48,&plStack_50,&lStack_58,0);
        FUN_1082647e4(&lStack_58);
        FUN_1082647e4(&plStack_50);
        FUN_1082647e4(&uStack_48);
        FUN_1082f43ac(param_2,*(undefined4 *)(puVar8 + 1),*(undefined4 *)((long)puVar8 + 0xc),
                      *(undefined4 *)(lVar5 + 0x28),0);
      }
    }
    return;
  }
  return;
}



/* Entry: 10830772c; end: 10830772f;  */

undefined8 * FUN_10830772c(undefined8 *param_1)

{
  FUN_1082a3b78(param_1 + 0x15);
  FUN_10837ca38(param_1 + 0xc);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 108307730; end: 108307743;  */

void FUN_108307730(void)

{
  FUN_108307768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108307744; end: 108307767;  */

undefined * FUN_108307744(void)

{
  return &UNK_10f48a1da;
}



/* Entry: 108307768; end: 108307797;  */

undefined8 * FUN_108307768(undefined8 *param_1)

{
  FUN_1082a3b78(param_1 + 0x15);
  FUN_10837ca38(param_1 + 0xc);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 108307798; end: 10830779f;  */

undefined8 * FUN_108307798(long param_1)

{
  FUN_10837ca5c(*(undefined8 *)(param_1 + -0x41));
  return (undefined8 *)(param_1 + -0x41);
}



/* Entry: 1083077a0; end: 108307803;  */

long FUN_1083077a0(long param_1)

{
  FUN_10828f708(param_1 + -0x11);
  FUN_1083016b0(param_1 + -0x29);
  return param_1 + -0x41;
}



/* Entry: 108307804; end: 10830786b;  */

void FUN_108307804(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x19;
  
  plVar1 = *(long **)(unaff_x19 + 0x178);
  if ((int)plVar1[6] != 0) {
    return;
  }
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x40))
            (plVar1,*(undefined8 *)(param_1 + 0x98),0,*(undefined8 *)(param_1 + 0x88));
  if (((ulong)plVar2 & 1) == 0) {
    *(undefined4 *)(plVar1 + 6) = 2;
  }
  return;
}



/* Entry: 10830786c; end: 1083078cb;  */

void FUN_10830786c(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (int)param_2 + 0x40;
  FUN_10828786c();
  if (iVar2 != 0) {
    if (*(char *)(param_2 + 0x38) == '\x04') {
      bVar1 = *(byte *)(param_2 + 0xe) >> 1;
    }
    else {
      bVar1 = *(byte *)(param_2 + 0x3b);
    }
    if ((bVar1 & 1) == 0) {
      func_0x0001082e4e70();
    }
  }
  return;
}



/* Entry: 1083078cc; end: 1083079f3;  */

ulong FUN_1083078cc(float param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  
  if (*(int *)(param_3 + 7) == 1) {
    return 0;
  }
  uVar6 = param_3[4];
  if (*(long *)(uVar6 + 0x50) == 0) {
    uVar3 = param_3[3];
    FUN_10828e338();
    if ((uVar3 & 1) == 0) {
      iVar2 = (int)uVar6 + 0x40;
      func_0x0001083a630c();
      if (iVar2 != 3) {
        uVar3 = param_3[1];
        FUN_1082a8310(uVar3,*param_3);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        uVar3 = uVar6 + 0x40;
        FUN_10828786c();
        if ((uVar3 & 1) == 0) {
          if (*(char *)(uVar6 + 0x38) == '\x04') {
            bVar1 = *(byte *)(uVar6 + 0xe) >> 1;
          }
          else {
            bVar1 = *(byte *)(uVar6 + 0x3b);
          }
          if ((bVar1 & 1) != 0) {
            return 0;
          }
          fVar7 = *(float *)(uVar6 + 0x44);
          FUN_108365614(param_3[3]);
          if (10000.0 < fVar7 * param_1) {
            return 0;
          }
        }
        if (*(char *)((long)param_3 + 0x3c) == '\x01') {
          uVar3 = uVar6 + 0x40;
          FUN_10828786c();
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          uVar3 = uVar6;
          func_0x0001082e4e70();
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          if (*(char *)(uVar6 + 0x38) == '\x04') {
            bVar1 = *(byte *)(uVar6 + 0xe) >> 1;
          }
          else {
            bVar1 = *(byte *)(uVar6 + 0x3b);
          }
          if ((bVar1 & 1) != 0) {
            return 0;
          }
        }
        uVar4 = param_3[3];
        FUN_1083079f4(uVar4,uVar6,param_3[2],uVar6 + 0x40,0);
        uVar5 = 2;
        if ((int)uVar4 == 0) {
          uVar5 = 0;
        }
        return (ulong)uVar5;
      }
    }
  }
  return 0;
}



/* Entry: 1083079f4; end: 108307bab;  */

bool FUN_1083079f4(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,long param_9)

{
  uint uVar1;
  char in_NG;
  bool bVar2;
  undefined1 in_ZR;
  char in_OV;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined8 auStack_80 [2];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  FUN_1082d8588(param_6);
  bVar2 = true;
  fStack_70 = param_1;
  fStack_6c = param_2;
  fStack_68 = param_3;
  fStack_64 = param_4;
  func_0x000108142084(param_5,&fStack_70,1);
  param_1 = param_3 - param_1;
  param_2 = param_4 - param_2;
  func_0x00010830846c();
  func_0x000108308514(0x53800000);
  if (!(bool)in_ZR && in_NG == in_OV) {
    lVar7 = param_6;
    func_0x0001082d8650();
    iVar6 = (int)lVar7;
    cVar3 = SBORROW4(iVar6,1);
    cVar4 = iVar6 + -1 < 0;
    uVar5 = iVar6 == 1;
    if (!(bool)uVar5) {
      FUN_10817500c(param_7);
      uVar8 = param_6 + 0x40;
      fVar9 = param_1;
      fStack_70 = param_1;
      fStack_6c = param_2;
      fStack_68 = param_3;
      fStack_64 = param_4;
      FUN_10828786c();
      if ((uVar8 & 1) == 0) {
        lVar7 = param_8;
        FUN_10828782c();
        if ((int)lVar7 == 0) {
          func_0x0001083a6448(param_8);
          fVar10 = fVar9;
          FUN_108365614(param_5);
          fVar9 = fVar9 * fVar10;
        }
        else {
          fVar10 = *(float *)(param_8 + 8);
          uVar1 = *(uint *)(param_8 + 0xc) & 0xffff;
          if (fVar10 <= 1.0 || (*(uint *)(param_8 + 0xc) & 0xff0000) != 0) {
            fVar10 = 1.0;
          }
          bVar2 = fVar10 < 1.4142135;
          cVar3 = bVar2 && SBORROW4(uVar1,2);
          uVar5 = bVar2 && uVar1 == 2;
          cVar4 = bVar2 && (int)(uVar1 - 2) < 0;
          fVar9 = 0.70710677;
          if (!bVar2 || uVar1 != 2) {
            fVar9 = fVar10 * 0.5;
          }
        }
        func_0x00010816882c(fVar9,fVar9,&fStack_70);
        param_1 = fStack_70;
        param_3 = fStack_68;
        param_4 = fStack_64;
        param_2 = fStack_6c;
      }
      param_3 = param_3 - param_1;
      func_0x00010830846c(param_3,param_4 - param_2);
      func_0x000108308514(0x44800000,SQRT(SQRT(param_3)));
      bVar2 = (bool)uVar5 || cVar4 != cVar3;
      if ((param_9 != 0) && (func_0x000108308514(), (bool)uVar5 || cVar4 != cVar3)) {
        FUN_108322684(auStack_80,0x40800000,param_9,param_5,&fStack_70);
        FUN_108376b90(param_9,auStack_80);
        FUN_10837ca5c(auStack_80[0]);
      }
    }
  }
  return bVar2;
}



/* Entry: 108307bac; end: 108307e6f;  */

float * FUN_108307bac(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 **in_x5;
  undefined8 **in_x6;
  float *in_x7;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  byte bStack_7a;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar9 = SUB84(&uStack_d0,0);
  func_0x000108308500();
  uStack_58 = extraout_x8;
  FUN_108376ad8(&puStack_88);
  FUN_108287e50(*(undefined8 *)(unaff_x20 + 0x38),&puStack_88);
  iVar11 = (int)*(undefined8 *)(unaff_x20 + 0x38) + 0x40;
  ppuVar12 = &puStack_88;
  FUN_1083079f4(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x28));
  uVar4 = *(long *)(unaff_x20 + 0x38) + 0x40;
  FUN_10828786c();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x38);
    in_x5 = *(undefined8 ***)(unaff_x20 + 8);
    puVar5 = (undefined8 *)0xf0;
    __Znwm();
    iVar11 = (int)&puStack_88;
    ppuVar12 = (undefined8 **)(lVar2 + 0x40);
    FUN_108306e9c();
    pfVar8 = *(float **)(unaff_x20 + 0x20);
    uStack_60 = 0;
    uVar10 = SUB84(&puStack_90,0);
    puStack_90 = puVar5;
    func_0x000108308498();
    func_0x000108308490();
    puVar5 = puStack_90;
    puStack_90 = (undefined8 *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    FUN_1082d8588(*(undefined8 *)(unaff_x20 + 0x38));
    pfVar8 = &fStack_78;
    uVar10 = 1;
    fStack_78 = param_1;
    fStack_74 = param_2;
    fStack_70 = param_3;
    fStack_6c = param_4;
    func_0x000108142084(uVar6);
    bVar3 = false;
    in_ZR = false;
    if (param_1 < param_3) {
      bVar3 = false;
      in_ZR = false;
      if (!NAN(param_2) && !NAN(param_4)) {
        bVar3 = param_2 < param_4;
        in_ZR = param_2 == param_4;
      }
    }
    fStack_a0 = param_1;
    fStack_9c = param_2;
    fStack_98 = param_3;
    fStack_94 = param_4;
    if (!bVar3) {
      if ((bStack_7a >> 1 & 1) != 0) {
        pfVar8 = *(float **)(unaff_x20 + 0x20);
        uVar10 = (undefined4)*(undefined8 *)(unaff_x20 + 8);
        iVar11 = (int)*(undefined8 *)(unaff_x20 + 0x30);
        FUN_1082c0440(*(undefined8 *)(unaff_x20 + 0x18));
      }
      goto LAB_108307cb4;
    }
    iVar11 = (int)&puStack_88;
    FUN_108376fcc();
    iVar1 = 0;
    if ((bStack_7a & 2) == 0) {
      iVar1 = iVar11;
    }
    in_ZR = iVar1 == 1;
    if ((bool)in_ZR) {
      FUN_1082c225c();
      ppuVar12 = *(undefined8 ***)(unaff_x20 + 0x30);
      in_x6 = *(undefined8 ***)(unaff_x20 + 8);
      iVar11 = (int)*(undefined8 *)(unaff_x20 + 0x10);
      puVar5 = (undefined8 *)0xb0;
      __Znwm();
      in_x5 = &puStack_88;
      in_x7 = &fStack_a0;
      FUN_108308310();
      pfVar8 = *(float **)(unaff_x20 + 0x20);
      uStack_60 = 0;
      uVar10 = SUB84(&puStack_a8,0);
      puStack_a8 = puVar5;
      func_0x000108308498();
      func_0x000108308490();
      puVar5 = puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
    }
    else {
      if ((bStack_7a >> 1 & 1) == 0) {
        uStack_b8 = CONCAT44(fStack_94,fStack_98);
        uStack_c0 = (undefined8 *)CONCAT44(fStack_9c,fStack_a0);
      }
      else {
        FUN_1082cda74(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x10));
        uStack_c0 = (undefined8 *)CONCAT44(param_2,param_1);
        uStack_b8 = CONCAT44(param_4,param_3);
      }
      uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
      FUN_1082c225c(uVar6);
      iVar11 = *(int *)(unaff_x20 + 0x40);
      in_x5 = *(undefined8 ***)(unaff_x20 + 0x30);
      in_x7 = *(float **)(unaff_x20 + 8);
      puVar5 = &uStack_c8;
      ppuVar12 = (undefined8 **)&uStack_c0;
      in_x6 = &puStack_88;
      FUN_108307e70(puVar5,uVar6,0,iVar11,ppuVar12,in_x5);
      pfVar8 = *(float **)(unaff_x20 + 0x20);
      uStack_d0 = uStack_c8;
      uStack_60 = 0;
      func_0x000108308498();
      func_0x000108308490();
      func_0x0001083084e0();
      uVar10 = uVar9;
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    func_0x000108308460();
  }
LAB_108307cb4:
  FUN_10837ca5c();
  func_0x0001083084ec(uStack_58);
  if ((bool)in_ZR) {
    return (float *)0x1;
  }
  ___stack_chk_fail();
  FUN_10837ca5c();
  puVar5 = puStack_88;
  func_0x0001083084ac();
  puVar7 = (undefined8 *)0xc0;
  __Znwm();
  puVar13 = puVar7;
  FUN_1082edad0();
  puVar7[2] = 0;
  *(short *)(puVar7 + 3) = (short)puVar13;
  *(undefined8 *)((long)puVar7 + 0x24) = 0;
  *(undefined8 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)((long)puVar7 + 0x2c) = 0;
  *puVar7 = &PTR_FUN_110a3ad20;
  puVar7[1] = 0;
  FUN_10830823c(pfVar8,in_x5,in_x6,&UNK_10df19408);
  puVar7[6] = pfVar8;
  *(undefined4 *)(puVar7 + 7) = *(undefined4 *)(*in_x6 + 9);
  *(undefined4 *)((long)puVar7 + 0x3c) = 1;
  *(undefined4 *)(puVar7 + 8) = uVar10;
  *(int *)((long)puVar7 + 0x44) = iVar11;
  uVar6 = *(undefined8 *)(in_x7 + 7);
  puVar7[10] = *(undefined8 *)(in_x7 + 9);
  puVar7[9] = uVar6;
  func_0x0001083084c0();
  puVar7[0x17] = 0;
  puVar7[0x10] = 0;
  puVar7[0xf] = 0;
  puVar7[0x12] = 0;
  puVar7[0x11] = 0;
  puVar7[0x14] = 0;
  puVar7[0x13] = 0;
  *(undefined8 *)((long)puVar7 + 0xac) = 0;
  *(undefined8 *)((long)puVar7 + 0xa4) = 0;
  puVar13 = *ppuVar12;
  puVar7[5] = ppuVar12[1];
  puVar7[4] = puVar13;
  *(undefined2 *)((long)puVar7 + 0x1a) = 0;
  *puVar5 = puVar7;
  return pfVar8;
}



/* Entry: 108307e70; end: 108307f7b;  */

void FUN_108307e70(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,long *param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar2 = puVar1;
  FUN_1082edad0();
  puVar1[2] = 0;
  *(short *)(puVar1 + 3) = (short)puVar2;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  *puVar1 = &PTR_FUN_110a3ad20;
  puVar1[1] = 0;
  FUN_10830823c(param_2,param_6,param_7,&UNK_10df19408);
  puVar1[6] = param_2;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(*param_7 + 0x48);
  *(undefined4 *)((long)puVar1 + 0x3c) = 1;
  *(undefined4 *)(puVar1 + 8) = param_3;
  *(undefined4 *)((long)puVar1 + 0x44) = param_4;
  uVar3 = *(undefined8 *)(param_8 + 0x1c);
  puVar1[10] = *(undefined8 *)(param_8 + 0x24);
  puVar1[9] = uVar3;
  func_0x0001083084c0();
  puVar1[0x17] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  *(undefined8 *)((long)puVar1 + 0xac) = 0;
  *(undefined8 *)((long)puVar1 + 0xa4) = 0;
  uVar3 = *param_5;
  puVar1[5] = param_5[1];
  puVar1[4] = uVar3;
  *(undefined2 *)((long)puVar1 + 0x1a) = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 108307f7c; end: 108308227;  */

void FUN_108307f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 in_b0;
  undefined1 uVar6;
  undefined1 in_register_00005001;
  undefined1 uVar7;
  undefined1 in_register_00005002;
  undefined1 uVar8;
  undefined1 in_register_00005003;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x000108308500();
  uVar4 = *(undefined8 *)(param_5 + 8);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  uStack_48 = extraout_x8;
  FUN_1082d8588(*(undefined8 *)(param_5 + 0x28));
  uStack_80 = (undefined **)
              CONCAT44(param_1,CONCAT13(in_register_00005003,
                                        CONCAT12(in_register_00005002,
                                                 CONCAT11(in_register_00005001,in_b0))));
  uStack_78 = CONCAT44(param_3,param_2);
  FUN_108364f90(uVar5,&uStack_b0,&uStack_80,1);
  FUN_108376ad8(auStack_c0);
  FUN_108287e50(*(undefined8 *)(param_5 + 0x28),auStack_c0);
  fVar11 = (float)uStack_a8 - (float)uStack_b0;
  uVar6 = SUB41(fVar11,0);
  uVar7 = (undefined1)((uint)fVar11 >> 8);
  uVar8 = (undefined1)((uint)fVar11 >> 0x10);
  uVar9 = (undefined1)((uint)fVar11 >> 0x18);
  fVar10 = uStack_a8._4_4_ - uStack_b0._4_4_;
  fVar11 = (float)uStack_b0;
  fVar12 = uStack_b0._4_4_;
  func_0x00010830846c();
  func_0x000108308514(0x53800000);
  if (!(bool)in_ZR && in_NG == in_OV) {
    FUN_10817500c(*(undefined8 *)(unaff_x20 + 0x18));
    uStack_80 = (undefined **)CONCAT44(fVar10,CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))))
    ;
    uStack_78 = CONCAT44(fVar12,fVar11);
    FUN_108322684(auStack_a0,auStack_c0,*(undefined8 *)(unaff_x20 + 0x20),&uStack_80);
    FUN_108376b90(auStack_c0,auStack_a0);
    FUN_10837ca5c(auStack_a0[0]);
  }
  iVar1 = (int)auStack_c0;
  FUN_108376fcc();
  if (iVar1 == 0) {
    FUN_1082c225c(*(undefined8 *)(unaff_x20 + 8));
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = (undefined **)0x0;
    uStack_68 = 1;
    func_0x0001083084cc();
    FUN_108307e70(auStack_a0);
    func_0x0001083084a4();
    uStack_d0 = auStack_a0[0];
    uStack_68 = 0;
    FUN_1082c0f08(uVar4,*(undefined8 *)(unaff_x20 + 0x10),&uStack_d0,&uStack_80);
    puVar3 = &uStack_80;
    FUN_10827fb18();
    func_0x0001083084e0();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000108308460();
    }
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x0001083084cc();
    uStack_80 = &PTR_PTR_110a34ca8;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    FUN_1082c225c(*(undefined8 *)(unaff_x20 + 8));
    lVar2 = 0xb0;
    __Znwm();
    FUN_108308310();
    uStack_88 = 0;
    lStack_c8 = lVar2;
    FUN_1082c0f08(uVar4,*(undefined8 *)(unaff_x20 + 0x10),&lStack_c8,auStack_a0);
    FUN_10827fb18(auStack_a0);
    lVar2 = lStack_c8;
    lStack_c8 = 0;
    if (lVar2 != 0) {
      func_0x000108308460();
    }
    func_0x0001083084a4();
  }
  FUN_10837ca5c(auStack_c0[0]);
  func_0x0001083084ec(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10827fb18(auStack_a0);
  lVar2 = lStack_c8;
  lStack_c8 = 0;
  if (lVar2 != 0) {
    func_0x000108308460();
  }
  func_0x0001083084a4();
  FUN_10837ca5c(auStack_c0[0]);
  func_0x0001083084ac();
  return;
}



/* Entry: 108308228; end: 10830823b;  */

void FUN_108308228(void)

{
  return;
}



/* Entry: 10830823c; end: 1083082e7;  */

long * FUN_10830823c(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_10840f8d0(param_1,0x59,8);
  lVar2 = param_1[1];
  param_1[1] = (long)(plVar1 + 10);
  plVar1[10] = (long)FUN_1083082e8;
  lVar3 = param_1[1];
  param_1[1] = lVar3 + 8;
  *(char *)(lVar3 + 8) = (char)plVar1 - (char)(int)lVar2;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  lVar2 = param_2[4];
  lVar5 = *param_2;
  lVar4 = param_2[3];
  lVar3 = param_2[2];
  plVar1[1] = param_2[1];
  *plVar1 = lVar5;
  plVar1[3] = lVar4;
  plVar1[2] = lVar3;
  plVar1[4] = lVar2;
  func_0x000108376b14(plVar1 + 5,param_3);
  lVar2 = *param_4;
  plVar1[8] = param_4[1];
  plVar1[7] = lVar2;
  plVar1[9] = 0;
  return plVar1;
}



/* Entry: 1083082e8; end: 10830830f;  */

long FUN_1083082e8(long param_1)

{
  FUN_10837ca38(param_1 + -0x31);
  return param_1 + -0x59;
}



/* Entry: 108308310; end: 10830845f;  */

undefined8 *
FUN_108308310(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5,long *param_6,long param_7,undefined8 *param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((bRam000000011372ac60 & 1) == 0) {
    iVar1 = 0x1372ac60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam000000011372ac58 = iVar1;
      ___cxa_guard_release(0x11372ac60);
    }
  }
  iVar1 = iRam000000011372ac58;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = (short)iVar1;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_110a3aef0;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = param_3;
  param_1[7] = param_4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*param_6 + 0x48);
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  FUN_10830823c(param_2,0x113254e20,param_6,param_7 + 0x1c);
  param_1[9] = param_2;
  param_1[10] = param_2 + 0x48;
  func_0x0001083084c0();
  uVar5 = param_5[1];
  uVar4 = *param_5;
  uVar6 = param_5[2];
  uVar3 = param_5[4];
  param_1[0x12] = param_5[3];
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xf] = uVar4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = uVar3;
  uVar2 = param_1[9] + 0x38;
  FUN_1082fc488();
  if ((uVar2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x44) = *(uint *)((long)param_1 + 0x44) | 0x40;
  }
  uVar3 = *param_8;
  param_1[5] = param_8[1];
  param_1[4] = uVar3;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  return param_1;
}



/* Entry: 108308460; end: 10830851f;  */

void FUN_108308460(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108308468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108308520; end: 1083086af;  */

/* WARNING: Removing unreachable block (ram,0x00010830858c) */
/* WARNING: Removing unreachable block (ram,0x000108308684) */

uint FUN_108308520(float param_1,float param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_w19;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_3 + 0x30) == 0 && *(int *)(param_4 + 0x30) == 0) {
    func_0x00010830acac();
    iVar2 = (int)param_3;
    FUN_1082d3c68();
    if ((iVar2 == 0) || (FUN_1082d3c68(), unaff_w19 == 0)) {
      FUN_1083086b0();
      fVar5 = param_1;
      fVar6 = param_2;
      FUN_1083086b0();
      bVar1 = false;
      if ((param_1 == fVar5) && (bVar1 = false, !NAN(param_2) && !NAN(fVar6))) {
        bVar1 = param_2 == fVar6;
      }
      if ((((bVar1) && (func_0x00010830acd0(), bVar1)) && (func_0x00010830acd0(), bVar1)) &&
         (func_0x00010830acd0(), bVar1)) {
        func_0x00010830acd0();
        uVar3 = (uint)!bVar1;
      }
      else {
        uVar3 = 1;
      }
      uVar4 = (uint)(fVar5 < param_1);
      if (fVar6 < param_2) {
        uVar4 = 1;
      }
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
    }
  }
  else {
    uVar3 = 1;
    uVar4 = 1;
  }
  return uVar3 | uVar4 << 8;
}



/* Entry: 1083086b0; end: 1083086e3;  */

void FUN_1083086b0(void)

{
  return;
}



/* Entry: 1083086e4; end: 108308d4b;  */

void FUN_1083086e4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,long *param_7,undefined8 param_8,
                  undefined8 *param_9,uint param_10,uint param_11,undefined8 *param_12,int param_13,
                  uint param_14,uint param_15,long param_16,long param_17)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong in_stack_fffffffffffffea0;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  long lStack_108;
  undefined4 uStack_100;
  undefined2 uStack_fc;
  long lStack_f8;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  long lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint auStack_6c [3];
  
  if (param_17 == 0) {
    lVar15 = 0;
  }
  else {
    FUN_1082cda74(*param_7);
    uStack_e8 = CONCAT44(param_3,param_2);
    uStack_e0 = CONCAT44(param_5,param_4);
    lVar10 = param_17;
    FUN_108281a6c(param_17,&uStack_e8);
    lVar15 = 0;
    if ((int)lVar10 == 0) {
      lVar15 = param_17;
    }
  }
  uVar13 = (ulong)param_14;
  if (param_11 == 0 && param_10 == 0) {
    param_10 = 0;
    uVar11 = 0;
  }
  else {
    uVar12 = param_16 + 0x34;
    FUN_108308520(uVar12,param_16);
    if ((uVar12 & 1) == 0) {
      param_10 = 0;
    }
    uVar11 = 0;
    if (0xff < ((uint)uVar12 & 0xffff)) {
      uVar11 = param_11;
    }
  }
  if (param_14 == 3) {
    lVar10 = *param_7;
    *param_7 = 0;
    uStack_a8 = (undefined4)param_7[1];
    uStack_a4 = *(undefined2 *)((long)param_7 + 0xc);
    uVar14 = *param_9;
    *param_9 = 0;
    puVar3 = (undefined8 *)0x80;
    uStack_b8 = uVar14;
    lStack_b0 = lVar10;
    __Znwm();
    lStack_b0 = 0;
    uStack_90 = uStack_a8;
    uStack_8c = uStack_a4;
    uStack_b8 = 0;
    auStack_6c[0] = param_15;
    puVar4 = puVar3;
    uStack_a0 = uVar14;
    lStack_98 = lVar10;
    FUN_10830992c();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(short *)(puVar3 + 3) = (short)puVar4;
    *(undefined8 *)((long)puVar3 + 0x24) = 0;
    *(undefined8 *)((long)puVar3 + 0x1c) = 0;
    *(undefined4 *)((long)puVar3 + 0x2c) = 0;
    *puVar3 = &PTR_FUN_110a3b450;
    FUN_10830999c(puVar3 + 6,1);
    puVar3[0xb] = uStack_a0;
    puVar3[0xc] = 0;
    uStack_a0 = 0;
    *(undefined2 *)(puVar3 + 0xd) = uStack_8c;
    *(undefined4 *)((long)puVar3 + 0x6a) = 0x10001;
    uVar8 = 0;
    if (lVar15 != 0) {
      uVar8 = 0x100;
    }
    uVar9 = 0x200;
    if (param_13 == 0) {
      uVar9 = 0;
    }
    *(ushort *)((long)puVar3 + 0x6e) =
         uVar8 | uVar9 | (ushort)param_10 & 3 | (ushort)((uVar11 & 3) << 2) |
         *(ushort *)((long)puVar3 + 0x6e) & 0xfc00;
    puVar3[0xe] = 0;
    FUN_1082d4100(param_15,*(undefined4 *)(param_16 + 0x68),param_16,auStack_6c);
    uVar11 = auStack_6c[0];
    *(ushort *)((long)puVar3 + 0x6e) =
         (ushort)((auStack_6c[0] & 3) << 4) | *(ushort *)((long)puVar3 + 0x6e) & 0xffcf;
    if ((lVar15 != 0) &&
       (uVar2 = auStack_6c[0], FUN_1083099ec(auStack_6c[0],param_10,param_16,lVar15), uVar2 != 0)) {
      lVar15 = 0;
      *(ushort *)((long)puVar3 + 0x6e) = *(ushort *)((long)puVar3 + 0x6e) & 0xfeff;
    }
    FUN_108309a88(lStack_98,uStack_90);
    uStack_78 = param_2;
    uStack_74 = param_3;
    uStack_70 = param_4;
    FUN_108309aec(&uStack_78,param_16 + 0x34);
    FUN_108309b6c(param_10,&uStack_78,lVar15);
    uStack_e8 = CONCAT44(param_3,param_2);
    uStack_e0 = CONCAT44(param_5,param_4);
    lVar15 = param_16;
    FUN_1082d5218(param_16,uVar11,*(undefined4 *)(param_16 + 0x68));
    FUN_1082c0b88(param_16);
    sVar7 = 2;
    if ((int)lVar15 == 0) {
      sVar7 = 0;
    }
    *(undefined4 *)(puVar3 + 4) = param_2;
    *(undefined4 *)((long)puVar3 + 0x24) = param_3;
    *(undefined4 *)(puVar3 + 5) = param_4;
    *(undefined4 *)((long)puVar3 + 0x2c) = param_5;
    if (uVar11 == 1) {
      sVar7 = sVar7 + 1;
    }
    *(short *)((long)puVar3 + 0x1a) = sVar7;
    puVar4 = puVar3;
    FUN_108309c90(puVar3,param_16,param_12,&uStack_e8);
    lVar15 = lStack_98;
    lStack_98 = 0;
    uStack_80 = CONCAT44(uStack_80._4_4_,(int)puVar4);
    lStack_88 = 0;
    FUN_10827a5a4(puVar3 + 0xe,lVar15);
    *(int *)(puVar3 + 0xf) = (int)puVar4;
    FUN_1082764bc(&lStack_88);
    *param_1 = puVar3;
    FUN_10827f5a4(&uStack_a0);
    FUN_1082764bc(&lStack_98);
    FUN_10827f5a4(&uStack_b8);
    FUN_1082764bc(&lStack_b0);
  }
  else {
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 1;
    uStack_c4 = param_12[1];
    uStack_cc = *param_12;
    func_0x0001082b705c();
    lVar10 = (ulong)param_10 << 0x20;
    uVar12 = (ulong)uVar11;
    uVar1 = 0;
    if (uVar13 == 0) {
      uVar1 = uStack_d0;
    }
    uVar14 = *(undefined8 *)(*(long *)(param_6 + 0x10) + 0xb8);
    uStack_e8 = uVar13;
    uStack_d0 = uVar1;
    if (lVar15 == 0) {
      lStack_118 = *param_7;
      *param_7 = 0;
      uStack_110 = (undefined4)param_7[1];
      uStack_10c = *(undefined2 *)((long)param_7 + 0xc);
      FUN_1082cde38(&lStack_88,&lStack_118,param_8,0x113254e20,lVar10,uVar12 | 0x100000000,uVar14,
                    &UNK_10df12d54);
      lVar15 = lStack_88;
      lStack_88 = 0;
      plVar6 = &lStack_118;
    }
    else {
      lStack_88 = 0;
      uStack_80 = 0;
      lVar5 = param_16 + 0x34;
      FUN_1082d3c68(lVar5,&lStack_88);
      if ((int)lVar5 == 0) {
        lStack_108 = *param_7;
        *param_7 = 0;
        uStack_100 = (undefined4)param_7[1];
        uStack_fc = *(undefined2 *)((long)param_7 + 0xc);
        FUN_1082cdf08(&lStack_98,&lStack_108,param_8,0x113254e20,lVar10,uVar12 | 0x100000000,lVar15,
                      uVar14,&UNK_10df12d54,in_stack_fffffffffffffea0 & 0xffffffffffffff00);
        lVar15 = lStack_98;
        lStack_98 = 0;
        plVar6 = &lStack_108;
      }
      else {
        lStack_f8 = *param_7;
        *param_7 = 0;
        uStack_f0 = (undefined4)param_7[1];
        uStack_ec = *(undefined2 *)((long)param_7 + 0xc);
        FUN_1082cdf9c(&lStack_98,&lStack_f8,param_8,0x113254e20,lVar10,uVar12 | 0x100000000,lVar15,
                      &lStack_88,uVar14,&UNK_10df12d54);
        lVar15 = lStack_98;
        lStack_98 = 0;
        plVar6 = &lStack_f8;
      }
    }
    FUN_1082764bc(plVar6);
    uStack_128 = *param_9;
    *param_9 = 0;
    lStack_120 = lVar15;
    FUN_10828b6b8(&lStack_88,&lStack_120,&uStack_128);
    lVar15 = lStack_88;
    func_0x00010830ac58();
    if (lStack_120 != 0) {
      func_0x00010830abf4();
    }
    lStack_138 = 0;
    lStack_130 = lVar15;
    FUN_108287a24(&lStack_88,&lStack_130,&lStack_138);
    lVar10 = lStack_88;
    lVar15 = lStack_138;
    lStack_88 = 0;
    lStack_138 = 0;
    if (lVar15 != 0) {
      func_0x00010830abf4();
    }
    lVar15 = lStack_130;
    lStack_130 = 0;
    if (lVar15 != 0) {
      func_0x00010830abf4();
    }
    if (param_13 != 0) {
      lStack_140 = lVar10;
      FUN_1082968bc(&lStack_88,&lStack_140);
      lVar10 = lStack_88;
      if (lStack_140 != 0) {
        func_0x00010830abf4();
      }
    }
    lStack_148 = lVar10;
    FUN_108288160(&uStack_e8,&lStack_148);
    lVar15 = lStack_148;
    lStack_148 = 0;
    if (lVar15 != 0) {
      func_0x00010830abf4();
    }
    FUN_1082facb8(param_1,&uStack_e8,param_15,param_16,0,0);
    func_0x00010827ee54(&uStack_e8);
  }
  return;
}



/* Entry: 108308d4c; end: 1083091e3;  */

void FUN_108308d4c(undefined4 *param_1,undefined8 param_2,undefined4 **param_3,undefined4 **param_4,
                  ulong param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  byte param_9,int param_10,uint param_11,int param_12,undefined4 **param_13,
                  long *param_14)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 **ppuVar4;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  uint uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  undefined8 extraout_x8_01;
  undefined8 uVar7;
  undefined8 extraout_x8_02;
  long lVar8;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined4 **unaff_x20;
  undefined4 **ppuVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined8 extraout_d2;
  undefined8 extraout_var;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_248 [40];
  undefined4 **ppuStack_220;
  undefined4 *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  int iStack_200;
  uint uStack_1fc;
  undefined4 **ppuStack_1f8;
  long *plStack_1f0;
  undefined4 *puStack_1e8;
  undefined8 uStack_1e0;
  int iStack_1d8;
  uint uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined4 **ppuStack_1b8;
  long lStack_1a8;
  undefined4 *puStack_1a0;
  long lStack_198;
  undefined4 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined2 uStack_174;
  undefined4 *puStack_170;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  undefined4 *puStack_158;
  undefined4 *puStack_150;
  undefined4 *apuStack_148 [4];
  undefined4 *puStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 **ppuStack_100;
  undefined4 uStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 **ppuStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  ulong uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 **ppuStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_78;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  iStack_1d8 = param_12;
  ppuVar9 = (undefined4 **)(ulong)param_11;
  uStack_1d4 = (uint)param_9;
  ppuVar4 = param_4;
  puStack_1e8 = param_1;
  uStack_1e0 = param_2;
  uStack_1d0 = param_7;
  uStack_1cc = param_8;
  ppuStack_1c8 = param_3;
  func_0x00010830ac9c();
  uVar5 = (uint)param_5;
  uStack_78 = extraout_x8;
  if ((param_10 == 3) && ((*(byte *)(*(long *)(ppuStack_1c8[2] + 0x2e) + 0x1e) >> 3 & 1) != 0)) {
    uVar2 = uVar5 == 0x200;
    if ((int)uVar5 < 0x201) {
      lStack_198 = *param_14;
      *param_14 = 0;
      plStack_1f0 = &lStack_198;
      ppuStack_1f8 = param_13;
      iStack_200 = iStack_1d8;
      FUN_10830922c(&puStack_128,param_4,param_5,param_6,uStack_1d0,uStack_1cc,uStack_1d4,ppuVar9);
      FUN_10827f5a4(&lStack_198);
      puStack_1a0 = puStack_128;
      uStack_d8 = 0;
      param_3 = &puStack_1a0;
      ppuVar4 = &puStack_f0;
      FUN_1082c0f08(puStack_1e8,uStack_1e0,param_3,ppuVar4);
      FUN_10827fb18(&puStack_f0);
      param_1 = puStack_1a0;
      puStack_1a0 = (undefined4 *)0x0;
      if (param_1 != (undefined4 *)0x0) {
        func_0x00010830abf4();
      }
    }
    else {
      lStack_1a8 = *param_14;
      *param_14 = 0;
      puStack_f0 = puStack_1e8;
      uStack_e8 = uStack_1e0;
      ppuStack_e0 = ppuStack_1c8;
      uStack_d8 = CONCAT44(uStack_1cc,uStack_1d0);
      uStack_d0 = CONCAT71(uStack_d0._1_7_,(char)uStack_1d4);
      uStack_d0 = CONCAT44(iStack_1d8,(undefined4)uStack_d0);
      ppuStack_c8 = param_13;
      uVar6 = 0;
      if (lStack_1a8 != 0) {
        do {
          func_0x00010830ac8c();
          uVar6 = extraout_x8_02;
        } while (extraout_w11_01 != 0);
      }
      unaff_x20 = &puStack_f0;
      uStack_c0 = (undefined4)uVar6;
      uStack_bc = (uint)((ulong)uVar6 >> 0x20);
      uStack_b8 = (uint)param_5;
      uStack_b4 = uStack_b4 & 0xffffffff00000000;
      FUN_10827f5a4(&lStack_1a8);
      if ((param_11 & 0xfffffffd) == 0) {
        while (uVar5 = uStack_b8, 0 < (int)uStack_b8) {
          if (0xfff < uStack_b8) {
            uVar5 = 0x1000;
          }
          param_3 = (undefined4 **)(ulong)uVar5;
          ppuVar4 = ppuVar9;
          FUN_1083097e8(&puStack_f0,param_4,param_3,ppuVar9);
        }
      }
      else {
        while (uVar5 = (uint)param_5, 0 < (int)(uint)param_5) {
          ppuVar4 = (undefined4 **)0x0;
          param_3 = (undefined4 **)(param_5 & 0xffffffff);
          lVar8 = (long)(int)uStack_b4 * 0x60 + 0x58;
          for (ppuVar9 = (undefined4 **)0x0; param_3 != ppuVar9;
              ppuVar9 = (undefined4 **)((long)ppuVar9 + 1)) {
            iVar3 = (int)ppuVar4;
            if ((iVar3 == 1) || (*(int *)((long)param_4 + lVar8) != 0)) {
              if ((undefined4 **)0x1ff < ppuVar9) {
                ppuVar4 = (undefined4 **)(ulong)(iVar3 != 0);
                uVar5 = 0x200;
                if (iVar3 == 0) {
                  uVar5 = (uint)ppuVar9;
                }
                param_3 = (undefined4 **)(ulong)uVar5;
                goto LAB_10830907c;
              }
              ppuVar4 = (undefined4 **)0x1;
            }
            else {
              ppuVar4 = (undefined4 **)0x0;
              if ((undefined4 **)0xfff < ppuVar9) {
                param_3 = (undefined4 **)0x1000;
LAB_10830907c:
                func_0x00010830acc4();
                goto LAB_108309080;
              }
            }
            lVar8 = lVar8 + 0x60;
          }
          func_0x00010830acc4();
LAB_108309080:
          param_5 = (ulong)uStack_b8;
        }
      }
      uVar2 = uVar5 == 1;
      param_1 = &uStack_c0;
      FUN_10827f5a4();
    }
  }
  else {
    ppuVar9 = (undefined4 **)0x0;
    unaff_x20 = (undefined4 **)(ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
    auVar12 = NEON_fmov(0x3f800000,4);
    ppuStack_1b8 = auVar12._8_8_;
    uStack_1c0 = auVar12._0_8_;
    for (; uVar2 = 1, ppuVar9 != unaff_x20; ppuVar9 = (undefined4 **)((long)ppuVar9 + 1)) {
      puStack_170 = *param_13;
      puStack_168 = param_13[1];
      puStack_158 = param_13[3];
      puStack_160 = param_13[2];
      puStack_150 = param_13[4];
      ppuVar4 = param_4 + (long)ppuVar9 * 0xc;
      if (ppuVar4[8] != (undefined4 *)0x0) {
        FUN_108363e94(&puStack_170);
      }
      ppuStack_c8 = ppuStack_1b8;
      uStack_d0 = uStack_1c0;
      ppuStack_94 = ppuStack_1b8;
      uStack_9c = uStack_1c0;
      uStack_c0 = 0;
      uStack_88 = *(undefined4 *)(ppuVar4 + 0xb);
      uStack_8c = 0;
      if (ppuVar4[7] == (undefined4 *)0x0) {
        FUN_1082d38bc(&puStack_128,(long)ppuVar4 + 0x24,&puStack_170);
        func_0x00010830ac70();
        auVar12._8_8_ = extraout_var;
        auVar12._0_8_ = extraout_d2;
        uStack_bc = *(uint *)((long)ppuVar4 + 0x14);
        uVar10 = SUB84(ppuVar4[3],0);
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = uVar10;
        uVar11 = (undefined4)((ulong)ppuVar4[3] >> 0x20);
        auVar15._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
        auVar15._0_8_ = auVar13._0_8_;
        auVar15._8_4_ = uVar11;
        auVar14._8_8_ = auVar15._8_8_;
        auVar14._4_4_ = uVar10;
        auVar14._0_4_ = uVar10;
        auVar16._0_12_ = auVar14._0_12_;
        auVar16._12_4_ = uVar11;
        auVar12 = NEON_ext(auVar16,auVar16,8,1);
        auVar17._0_12_ = auVar12._0_12_;
        auVar17._12_4_ = *(undefined4 *)(ppuVar4 + 4);
        uStack_ac = auVar17._8_8_;
        uStack_b4 = auVar12._0_8_;
        uStack_a4 = CONCAT44(*(undefined4 *)(ppuVar4 + 4),uVar10);
        ppuStack_94 = ppuStack_1b8;
        uStack_9c = uStack_1c0;
        uStack_8c = 0;
        uStack_c0 = extraout_w8_00;
        uStack_b8 = uStack_bc;
      }
      else {
        FUN_1082d3a0c(&puStack_128,ppuVar4[7],&puStack_170);
        func_0x00010830ac70();
        uStack_c0 = extraout_w8;
        FUN_1083091e4((long)ppuVar4 + 0x24,(long)ppuVar4 + 0x14,ppuVar4[7],apuStack_148);
        func_0x00010830acb8(&puStack_128,apuStack_148);
        uStack_b4 = uStack_120;
        uStack_bc = (uint)puStack_128;
        uStack_b8 = (uint)((ulong)puStack_128 >> 0x20);
        uStack_a4 = uStack_110;
        uStack_ac = uStack_118;
        ppuStack_94 = ppuStack_100;
        uStack_9c = uStack_108;
        uStack_8c = uStack_f8;
      }
      uVar6 = 0;
      if (*ppuVar4 != (undefined4 *)0x0) {
        do {
          func_0x00010830ac8c();
          uVar6 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uStack_178 = *(undefined4 *)(ppuVar4 + 1);
      uStack_174 = *(undefined2 *)((long)ppuVar4 + 0xc);
      uVar7 = 0;
      uStack_180 = uVar6;
      if (*param_14 != 0) {
        do {
          func_0x00010830ac8c();
          uVar7 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      plStack_1f0 = (long *)((long)ppuVar4 + 0x14);
      if (iStack_1d8 != 0) {
        plStack_1f0 = (long *)0x0;
      }
      iStack_200 = param_10;
      uStack_1fc = param_11;
      ppuStack_1f8 = &puStack_f0;
      uStack_188 = uVar7;
      FUN_1083086e4(apuStack_148,ppuStack_1c8,&uStack_180);
      FUN_10827f5a4(&uStack_188);
      FUN_1082764bc(&uStack_180);
      puStack_190 = apuStack_148[0];
      uStack_110 = 0;
      param_3 = &puStack_190;
      ppuVar4 = &puStack_128;
      FUN_1082c0f08(puStack_1e8,uStack_1e0);
      FUN_10827fb18(&puStack_128);
      param_1 = puStack_190;
      puStack_190 = (undefined4 *)0x0;
      if (param_1 != (undefined4 *)0x0) {
        func_0x00010830abf4();
      }
    }
  }
  func_0x00010830ac00(uStack_78);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    FUN_10827fb18(&puStack_f0);
    puVar1 = puStack_1a0;
    puStack_1a0 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      func_0x00010830abf4();
    }
    func_0x00010830ac14();
    pcStack_208 = FUN_1083091e4;
    ppuStack_220 = unaff_x20;
    puStack_218 = param_1;
    puStack_210 = &stack0xfffffffffffffff0;
    FUN_10814c9e0(auStack_248);
    FUN_1083645e0(auStack_248,ppuVar4,param_3,4);
    return;
  }
  return;
}



/* Entry: 1083091e4; end: 10830922b;  */

void FUN_1083091e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  
  FUN_10814c9e0(auStack_48,param_1,param_2,0);
  FUN_1083645e0(auStack_48,param_4,param_3,4);
  return;
}



/* Entry: 10830922c; end: 1083097e7;  */

undefined8 *
FUN_10830922c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             ulong param_5,uint param_6,undefined4 param_7,uint param_8,int param_9,
             undefined4 param_10,undefined8 *param_11,undefined8 *param_12)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  short sVar17;
  undefined8 extraout_x8;
  long lVar18;
  ulong uVar19;
  ushort uVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  uint uVar32;
  undefined8 uVar33;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined8 extraout_d2;
  undefined4 *extraout_d2_00;
  undefined8 extraout_var;
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined8 in_d3;
  undefined4 uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined1 auStack_288 [24];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  uint uStack_224;
  long *plStack_220;
  int iStack_214;
  undefined8 *puStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined4 *puStack_1a0;
  uint uStack_188;
  uint uStack_184;
  undefined8 uStack_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  ulong uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 auStack_140 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  ulong uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_88;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  uVar40 = (undefined4)((ulong)in_d3 >> 0x20);
  uVar39 = (undefined4)in_d3;
  puVar14 = param_3;
  puVar16 = param_4;
  uStack_1dc = param_6;
  uStack_188 = param_8;
  func_0x00010830ac9c();
  puVar9 = (undefined8 *)
           ((-((ulong)puVar16 >> 0x1f & 1) & 0xfffffff000000000 | ((ulong)puVar16 & 0xffffffff) << 4
            ) + 0x70);
  uStack_88 = extraout_x8;
  __Znwm();
  uStack_180 = *param_12;
  *param_12 = 0;
  puVar10 = puVar9;
  FUN_10830992c();
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,param_7);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(short *)(puVar9 + 3) = (short)puVar10;
  *(undefined8 *)((long)puVar9 + 0x24) = 0;
  *(undefined8 *)((long)puVar9 + 0x1c) = 0;
  *(undefined4 *)((long)puVar9 + 0x2c) = 0;
  *puVar9 = &PTR_FUN_110a3b450;
  puVar10 = param_3;
  puStack_230 = param_1;
  puStack_1a0 = param_4;
  FUN_10830999c(puVar9 + 6);
  lVar23 = 0;
  uStack_224 = 0;
  uVar27 = 0;
  uVar13 = 0;
  lVar22 = 0;
  uStack_1d8 = 0;
  uStack_184 = 0;
  puStack_210 = param_11;
  iStack_214 = param_9;
  puVar21 = puVar9 + 0xb;
  *puVar21 = uStack_180;
  puVar9[0xc] = 0;
  uStack_180 = 0;
  *(undefined2 *)(puVar9 + 0xd) = *(undefined2 *)((long)param_2 + 0xc);
  uVar20 = 0x200;
  if ((float)uStack_1b0 == 0.0) {
    uVar20 = 0;
  }
  *(ushort *)((long)puVar9 + 0x6e) = *(ushort *)((long)puVar9 + 0x6e) & 0xfc00 | uVar20;
  plStack_220 = puVar9 + 0xe;
  *plStack_220 = 0;
  *(short *)((long)puVar9 + 0x6a) = (short)puStack_1a0;
  *(short *)((long)puVar9 + 0x6c) = (short)param_3;
  puStack_1f8 = puVar9 + 0xf;
  lStack_208 = (ulong)((uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU)) * 0x60;
  uVar41 = 0xff7fffffff7fffff;
  uVar42 = 0x7f7fffff7f7fffff;
  auVar31 = NEON_fmov(0x3f800000,4);
  uStack_1e8 = auVar31._8_8_;
  uStack_1f0 = auVar31._0_8_;
  puVar12 = (undefined8 *)0x0;
  puStack_238 = puVar21;
  puStack_200 = puVar9;
  do {
    plVar7 = plStack_220;
    uVar26 = (uint)uVar27;
    if (lStack_208 == lVar23) {
      uVar20 = 0x100;
      if ((uStack_224 & 1) == 0) {
        uVar20 = 0;
      }
      *(ushort *)((long)puStack_200 + 0x6e) =
           uVar20 | (ushort)((uStack_184 & 3) << 4) | *(ushort *)((long)puStack_200 + 0x6e) & 0xfecc
      ;
      sVar17 = 2;
      if ((uVar13 & 1) == 0) {
        sVar17 = 0;
      }
      uVar8 = uStack_184 == 1;
      puStack_200[4] = uVar42;
      puStack_200[5] = uVar41;
      if ((bool)uVar8) {
        sVar17 = sVar17 + 1;
      }
      *(short *)((long)puStack_200 + 0x1a) = sVar17;
      *puStack_230 = puStack_200;
      puVar9 = &uStack_180;
      FUN_10827f5a4();
      func_0x00010830ac00(uStack_88);
      if ((bool)uVar8) {
        return puVar9;
      }
      ___stack_chk_fail();
      FUN_1082e696c(puVar21);
      FUN_10827f5a4(&uStack_180);
      puVar12 = puVar9;
      __Unwind_Resume();
      pcStack_248 = FUN_1083097e8;
      iVar15 = 0;
      uStack_268 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      iVar3 = *(int *)((long)puVar12 + 0x3c);
      uVar13 = (uint)puVar14;
      lVar23 = 0;
      plVar7 = puVar10 + (long)iVar3 * 0xc;
      for (uVar27 = (ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)); uVar27 != 0;
          uVar27 = uVar27 - 1) {
        uVar8 = *plVar7 == lVar23;
        if (!(bool)uVar8) {
          iVar15 = iVar15 + 1;
        }
        lVar23 = *plVar7;
        plVar7 = plVar7 + 0xc;
      }
      uVar39 = *(undefined4 *)(puVar12 + 3);
      uVar40 = *(undefined4 *)((long)puVar12 + 0x1c);
      uVar2 = *(undefined1 *)(puVar12 + 4);
      uVar29 = *(undefined4 *)((long)puVar12 + 0x24);
      lStack_298 = puVar12[6];
      if (lStack_298 != 0) {
        piVar1 = (int *)(lStack_298 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puStack_260 = puVar9;
      puStack_258 = puVar21;
      puStack_250 = &stack0xfffffffffffffff0;
      FUN_10830922c(&puStack_290,puVar10 + (long)iVar3 * 0xc,puVar14,iVar15,uVar39,uVar40,uVar2,
                    puVar16,uVar29);
      FUN_10827f5a4(&lStack_298);
      puStack_2a0 = puStack_290;
      uStack_270 = 0;
      FUN_1082c0f08(*puVar12,puVar12[1],&puStack_2a0,auStack_288);
      FUN_10827fb18(auStack_288);
      puVar9 = puStack_2a0;
      puStack_2a0 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        func_0x00010830abf4();
      }
      *(uint *)(puVar12 + 7) = *(int *)(puVar12 + 7) - uVar13;
      *(uint *)((long)puVar12 + 0x3c) = *(int *)((long)puVar12 + 0x3c) + uVar13;
      func_0x00010830ac00(uStack_268);
      if ((bool)uVar8) {
        return puVar9;
      }
      ___stack_chk_fail();
      FUN_10827fb18(auStack_288);
      puVar9 = puStack_2a0;
      puStack_2a0 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        func_0x00010830abf4();
      }
      func_0x00010830ac14();
      if ((bRam000000011372ac70 & 1) == 0) {
        uVar13 = 0x1372ac70;
        ___cxa_guard_acquire();
        if (uVar13 != 0) {
          FUN_1082e6880();
          uRam000000011372ac68 = uVar13;
          ___cxa_guard_release(0x11372ac70);
        }
      }
      return (undefined8 *)(ulong)uRam000000011372ac68;
    }
    if (lVar23 == 0) {
      uVar33 = *param_2;
      *param_2 = 0;
      auStack_140[0] = 0;
      FUN_10827a5a4(plStack_220,uVar33);
      FUN_1082764bc(auStack_140);
      *(undefined4 *)puStack_1f8 = 0;
      lVar22 = *plVar7;
    }
    else {
      lVar18 = *(long *)((long)param_2 + lVar23);
      if (lVar18 != lVar22) {
        *(undefined8 *)((long)param_2 + lVar23) = 0;
        uStack_1d8 = (long)(int)uStack_1d8 + 1;
        plStack_220[uStack_1d8 * 2] = lVar18;
        *(undefined4 *)(plStack_220 + uStack_1d8 * 2 + 1) = 0;
        lVar22 = lVar18;
      }
    }
    uStack_d0 = *puStack_210;
    uStack_c8 = puStack_210[1];
    uStack_b8 = puStack_210[3];
    uStack_c0 = puStack_210[2];
    uStack_b0 = puStack_210[4];
    if (*(long *)((long)param_2 + lVar23 + 0x40) != 0) {
      FUN_108363e94(&uStack_d0);
    }
    uStack_118 = uStack_1e8;
    uStack_120 = uStack_1f0;
    uStack_e4 = uStack_1e8;
    uStack_ec = uStack_1f0;
    uStack_110 = 0;
    uStack_dc = 0;
    lVar18 = *(long *)((long)param_2 + lVar23 + 0x38);
    if (lVar18 == 0) {
      FUN_1082d38bc(&uStack_174,(long)param_2 + lVar23 + 0x24,&uStack_d0);
      func_0x00010830ac34();
      auVar31._8_8_ = extraout_var;
      auVar31._0_8_ = extraout_d2;
      uVar29 = *(undefined4 *)((long)param_2 + lVar23 + 0x14);
      uVar32 = *(uint *)((long)param_2 + lVar23 + 0x20);
      uVar19 = (ulong)uVar32;
      uVar33 = 0;
      uStack_10c = CONCAT44(uVar29,uVar29);
      uVar30 = *(undefined8 *)((long)param_2 + lVar23 + 0x18);
      uVar29 = (undefined4)uVar30;
      auVar34._4_12_ = auVar31._4_12_;
      auVar34._0_4_ = uVar29;
      uVar28 = (undefined4)((ulong)uVar30 >> 0x20);
      auVar36._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
      auVar36._0_8_ = auVar34._0_8_;
      auVar36._8_4_ = uVar28;
      auVar35._8_8_ = auVar36._8_8_;
      auVar35._4_4_ = uVar29;
      auVar35._0_4_ = uVar29;
      auVar37._0_12_ = auVar35._0_12_;
      auVar37._12_4_ = uVar28;
      auVar31 = NEON_ext(auVar37,auVar37,8,1);
      auVar38._0_12_ = auVar31._0_12_;
      auVar38._12_4_ = uVar32;
      uStack_fc = auVar38._8_8_;
      uStack_104 = auVar31._0_8_;
      uStack_f4 = CONCAT44(uVar32,uVar29);
      uStack_e4 = uStack_1e8;
      uStack_ec = uStack_1f0;
      uStack_dc = 0;
    }
    else {
      FUN_1082d3a0c(&uStack_174,lVar18,&uStack_d0);
      func_0x00010830ac34();
      FUN_1083091e4((long)param_2 + lVar23 + 0x24,(long)param_2 + lVar23 + 0x14,
                    *(undefined8 *)((long)param_2 + lVar23 + 0x38),&uStack_a8);
      func_0x00010830acb8(&uStack_174,&uStack_a8);
      uStack_10c = CONCAT44(uStack_170,uStack_174);
      uStack_104 = CONCAT44(uStack_168,uStack_16c);
      uStack_f4 = uStack_15c;
      uStack_fc = uStack_164;
      uStack_e4 = uStack_14c;
      uStack_ec = uStack_154;
      uStack_dc = uStack_144;
      uVar19 = uStack_164;
      uVar33 = uStack_15c;
    }
    uVar24 = (uint)param_5;
    uVar27 = param_5;
    uVar25 = param_5;
    uVar32 = uStack_1dc;
    if (uVar26 != uVar24 || (uint)puVar12 != uStack_1dc) {
      puVar9 = &uStack_10c;
      FUN_108308520(puVar9,auStack_140);
      uVar32 = uVar24;
      uVar6 = uVar24;
      if (((ulong)puVar9 & 1) == 0) {
        uVar32 = 0;
        uVar6 = uVar26;
      }
      if (uVar24 != 0) {
        uVar26 = uVar6;
      }
      uVar27 = (ulong)uVar26;
      uVar26 = 0;
      if (uVar24 != 0) {
        uVar26 = uVar32;
      }
      uVar25 = (ulong)uVar26;
      uVar32 = uStack_1dc;
      if (((uint)puVar9 & 0xffff) < 0x100 || uStack_1dc == 0) {
        uVar32 = (uint)puVar12;
      }
    }
    puVar21 = (undefined8 *)(ulong)uVar32;
    FUN_1082d4100(uStack_188,*(undefined4 *)((long)param_2 + lVar23 + 0x58),auStack_140,&uStack_178,
                  auStack_d8);
    uStack_1c0 = FUN_1082c0b88(auStack_140);
    uVar32 = uStack_178;
    uStack_1b0 = CONCAT44(uVar40,uVar39);
    puVar9 = auStack_140;
    uStack_1d0 = uVar19;
    uStack_1c8 = uVar33;
    puStack_1a0 = extraout_d2_00;
    FUN_1082d5218(puVar9,uStack_178,auStack_d8[0]);
    uVar29 = (undefined4)uVar19;
    uVar26 = uStack_188;
    if (uVar32 == 0 || uStack_184 != 0) {
      uVar26 = uStack_184;
    }
    uStack_184 = uVar26;
    if (iStack_214 == 0) {
      uStack_174 = FUN_1082cda74(lVar22);
      uVar19 = (long)param_2 + lVar23 + 0x14;
      uVar11 = uVar19;
      uStack_170 = uVar29;
      uStack_16c = extraout_s2;
      uStack_168 = uVar39;
      FUN_108281a6c(uVar19,&uStack_174);
      if ((uVar11 & 1) != 0) goto LAB_1083095dc;
      uVar26 = uStack_178;
      FUN_1083099ec(uStack_178,uVar25,auStack_140,uVar19);
      uStack_224 = uVar26 ^ 1 | uStack_224;
      uVar25 = 0;
      if (uVar26 == 0) {
        uVar25 = uVar19;
      }
    }
    else {
LAB_1083095dc:
      uVar25 = 0;
    }
    puVar12 = puStack_200;
    uStack_a8 = FUN_108309a88(lVar22,*(undefined4 *)((long)param_2 + lVar23 + 8));
    uStack_a4 = uVar29;
    uStack_a0 = extraout_s2_00;
    FUN_108309aec(&uStack_a8,&uStack_10c);
    uStack_174 = FUN_108309b6c(param_5,&uStack_a8,uVar25);
    puVar10 = auStack_140;
    puVar14 = (undefined8 *)((long)param_2 + lVar23 + 0x48);
    puVar16 = &uStack_174;
    uStack_170 = uVar29;
    uStack_16c = extraout_s2_01;
    uStack_168 = uVar39;
    FUN_108309c90();
    uVar42 = uVar42 ^ (uVar42 ^ CONCAT44((float)uStack_1d0,(float)uStack_1c0)) &
                      CONCAT44(-(uint)((float)uStack_1d0 < (float)(uVar42 >> 0x20)),
                               -(uint)((float)uStack_1c0 < (float)uVar42));
    uVar13 = uVar13 | (uint)puVar9;
    uVar19 = -(uStack_1d8 >> 0x1f & 1) & 0xfffffff000000000 | (uStack_1d8 & 0xffffffff) << 4;
    uVar41 = uVar41 ^ (uVar41 ^ CONCAT44((float)uStack_1b0,SUB84(puStack_1a0,0))) &
                      CONCAT44(-(uint)((float)(uVar41 >> 0x20) < (float)uStack_1b0),
                               -(uint)((float)uVar41 < SUB84(puStack_1a0,0)));
    *(int *)((long)puStack_1f8 + uVar19) = *(int *)((long)puStack_1f8 + uVar19) + (int)puVar12;
    lVar23 = lVar23 + 0x60;
    puVar12 = puVar21;
  } while( true );
}



/* Entry: 1083097e8; end: 10830992b;  */

ulong FUN_1083097e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  undefined1 in_ZR;
  long *plVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar12 = 0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)(param_2 + (long)*(int *)((long)param_1 + 0x3c) * 0x60);
  uVar11 = (uint)param_3;
  lVar8 = 0;
  plVar9 = plVar10;
  for (uVar13 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); uVar13 != 0;
      uVar13 = uVar13 - 1) {
    in_ZR = *plVar9 == lVar8;
    if (!(bool)in_ZR) {
      iVar12 = iVar12 + 1;
    }
    lVar8 = *plVar9;
    plVar9 = plVar9 + 0xc;
  }
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((long)param_1 + 0x1c);
  uVar5 = *(undefined1 *)(param_1 + 4);
  uVar4 = *(undefined4 *)((long)param_1 + 0x24);
  lStack_58 = param_1[6];
  if (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10830922c(&uStack_50,plVar10,param_3,iVar12,uVar2,uVar3,uVar5,param_4,uVar4);
  FUN_10827f5a4(&lStack_58);
  uStack_60 = uStack_50;
  uStack_30 = 0;
  FUN_1082c0f08(*param_1,param_1[1],&uStack_60,auStack_48);
  FUN_10827fb18(auStack_48);
  uVar13 = uStack_60;
  uStack_60 = 0;
  if (uVar13 != 0) {
    FUN_10830abf4();
  }
  *(uint *)(param_1 + 7) = *(int *)(param_1 + 7) - uVar11;
  *(uint *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + uVar11;
  func_0x00010830ac00(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10827fb18(auStack_48);
    uVar13 = uStack_60;
    uStack_60 = 0;
    if (uVar13 != 0) {
      FUN_10830abf4();
    }
    func_0x00010830ac14();
    if ((bRam000000011372ac70 & 1) == 0) {
      uVar11 = 0x1372ac70;
      ___cxa_guard_acquire();
      if (uVar11 != 0) {
        FUN_1082e6880();
        uRam000000011372ac68 = uVar11;
        ___cxa_guard_release(0x11372ac70);
      }
    }
    return (ulong)uRam000000011372ac68;
  }
  return uVar13;
}



/* Entry: 10830992c; end: 10830999b;  */

int FUN_10830992c(void)

{
  int iVar1;
  
  if ((bRam000000011372ac70 & 1) == 0) {
    iVar1 = 0x1372ac70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam000000011372ac68 = iVar1;
      ___cxa_guard_release(0x11372ac70);
    }
  }
  return iRam000000011372ac68;
}



/* Entry: 10830999c; end: 1083099eb;  */

undefined4 * FUN_10830999c(undefined4 *param_1,int param_2)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[8] = 0;
  func_0x00010840f1a4(param_1,param_2 * 0x68);
  return param_1;
}



/* Entry: 1083099ec; end: 108309a87;  */

void FUN_1083099ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,int param_6,long param_7,ulong param_8)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_1082c0b88(param_7 + 0x34);
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if ((((param_6 != 0 || param_5 != 0) || (*(int *)(param_7 + 0x30) != 0)) ||
      (*(int *)(param_7 + 100) != 0)) ||
     (uVar1 = param_8, FUN_108281a6c(param_8,&uStack_40), (uVar1 & 1) == 0)) {
    uVar2 = 0x3f000000;
    uVar3 = 0x3f000000;
    FUN_108279f50(param_8);
    uStack_50 = uVar2;
    uStack_4c = uVar3;
    uStack_48 = param_3;
    uStack_44 = param_4;
    FUN_108281a6c(&uStack_50,&uStack_40);
  }
  return;
}



/* Entry: 108309a88; end: 108309aeb;  */

float FUN_108309a88(long param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)param_1;
  FUN_1082b1dfc();
  fVar2 = 1.0 / (float)iVar1;
  if (*(int *)(param_1 + 0x8c) == 2) {
    fVar2 = 1.0;
  }
  return fVar2;
}



/* Entry: 108309aec; end: 108309b6b;  */

void FUN_108309aec(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  float *unaff_x19;
  float *unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_register_00005008;
  float in_register_0000500c;
  float fVar5;
  
  fVar4 = (float)((ulong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  func_0x00010830acac();
  FUN_1082d4054(param_6);
  func_0x00010830ac1c();
  fVar5 = *unaff_x20;
  FUN_10830a674();
  fVar3 = fVar2;
  func_0x0001082d4060();
  func_0x00010830ac1c();
  FUN_10830a674();
  func_0x00010830ac1c();
  fVar1 = unaff_x20[2];
  *unaff_x19 = fVar2;
  unaff_x19[1] = fVar5;
  unaff_x19[2] = param_3;
  unaff_x19[3] = param_4;
  *(ulong *)(unaff_x19 + 6) = CONCAT44(fVar1 + in_register_0000500c,fVar1 + in_register_00005008);
  *(ulong *)(unaff_x19 + 4) = CONCAT44(fVar1 + fVar4,fVar1 + fVar3);
  return;
}



/* Entry: 108309b6c; end: 108309c8f;  */

void FUN_108309b6c(int param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  undefined8 extraout_var;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  float fVar22;
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
  byte bVar33;
  byte bVar34;
  undefined1 auVar13 [16];
  
  if (param_3 != (undefined1 (*) [16])0x0) {
    auVar11._0_4_ = -(uint)(param_1 == 0);
    auVar11._4_4_ = auVar11._0_4_;
    auVar11._8_4_ = auVar11._0_4_;
    auVar11._12_4_ = auVar11._0_4_;
    auVar12 = *param_3;
    fVar7 = (float)(int)(auVar12._4_4_ * 1.0) * 1.0;
    fVar15 = (float)(int)(auVar12._8_4_ * -1.0) * -1.0;
    fVar16 = (float)(int)(auVar12._12_4_ * -1.0) * -1.0;
    auVar1[4] = SUB41(fVar7,0);
    auVar1._0_4_ = (float)(int)(auVar12._0_4_ * 1.0) * 1.0;
    auVar1[5] = (char)((uint)fVar7 >> 8);
    auVar1[6] = (char)((uint)fVar7 >> 0x10);
    auVar1[7] = (char)((uint)fVar7 >> 0x18);
    auVar1[8] = SUB41(fVar15,0);
    auVar1[9] = (char)((uint)fVar15 >> 8);
    auVar1[10] = (char)((uint)fVar15 >> 0x10);
    auVar1[0xb] = (char)((uint)fVar15 >> 0x18);
    auVar1[0xc] = SUB41(fVar16,0);
    auVar1[0xd] = (char)((uint)fVar16 >> 8);
    auVar1[0xe] = (char)((uint)fVar16 >> 0x10);
    auVar1[0xf] = (char)((uint)fVar16 >> 0x18);
    auVar12 = auVar12 ^ (auVar12 ^ auVar1) & auVar11;
    auVar19._0_4_ = auVar12._0_4_ + 0.5;
    auVar19._4_4_ = auVar12._4_4_ + 0.5;
    auVar19._8_4_ = auVar12._8_4_ + -0.5;
    auVar19._12_4_ = auVar12._12_4_ + -0.5;
    NEON_ext(auVar19,auVar19,8,1);
    FUN_10830a674();
    uVar10 = func_0x00010830ac1c();
    fVar18 = auVar19._0_4_ * 1.0;
    fVar20 = auVar19._4_4_ * 1.0;
    fVar21 = auVar19._8_4_ * -1.0;
    fVar22 = auVar19._12_4_ * -1.0;
    fVar7 = (float)uVar10 * 1.0;
    fVar15 = (float)((ulong)uVar10 >> 0x20) * 1.0;
    fVar16 = (float)extraout_var * -1.0;
    fVar17 = (float)((ulong)extraout_var >> 0x20) * -1.0;
    iVar2 = -(uint)(fVar7 < fVar18);
    bVar23 = (byte)((uint)iVar2 >> 8);
    bVar24 = (byte)((uint)iVar2 >> 0x10);
    bVar25 = (byte)((uint)iVar2 >> 0x18);
    iVar3 = -(uint)(fVar15 < fVar20);
    bVar26 = (byte)((uint)iVar3 >> 8);
    bVar27 = (byte)((uint)iVar3 >> 0x10);
    bVar28 = (byte)((uint)iVar3 >> 0x18);
    iVar4 = -(uint)(fVar16 < fVar21);
    bVar29 = (byte)((uint)iVar4 >> 8);
    bVar30 = (byte)((uint)iVar4 >> 0x10);
    bVar31 = (byte)((uint)iVar4 >> 0x18);
    iVar5 = -(uint)(fVar17 < fVar22);
    bVar32 = (byte)((uint)iVar5 >> 8);
    bVar33 = (byte)((uint)iVar5 >> 0x10);
    bVar34 = (byte)((uint)iVar5 >> 0x18);
    uVar8 = CONCAT13(bVar25 & (byte)((uint)fVar7 >> 0x18),
                     CONCAT12(bVar24 & (byte)((uint)fVar7 >> 0x10),
                              CONCAT11(bVar23 & (byte)((uint)fVar7 >> 8),
                                       (byte)iVar2 & SUB41(fVar7,0))));
    auVar12._0_8_ =
         CONCAT17(bVar28 & (byte)((uint)fVar15 >> 0x18),
                  CONCAT16(bVar27 & (byte)((uint)fVar15 >> 0x10),
                           CONCAT15(bVar26 & (byte)((uint)fVar15 >> 8),
                                    CONCAT14((byte)iVar3 & SUB41(fVar15,0),uVar8))));
    auVar12[8] = (byte)iVar4 & SUB41(fVar16,0);
    auVar12[9] = bVar29 & (byte)((uint)fVar16 >> 8);
    auVar12[10] = bVar30 & (byte)((uint)fVar16 >> 0x10);
    auVar12[0xb] = bVar31 & (byte)((uint)fVar16 >> 0x18);
    auVar12[0xc] = (byte)iVar5 & SUB41(fVar17,0);
    auVar12[0xd] = bVar32 & (byte)((uint)fVar17 >> 8);
    auVar12[0xe] = bVar33 & (byte)((uint)fVar17 >> 0x10);
    auVar12[0xf] = bVar34 & (byte)((uint)fVar17 >> 0x18);
    uVar9 = CONCAT13(~bVar25 & (byte)((uint)fVar18 >> 0x18),
                     CONCAT12(~bVar24 & (byte)((uint)fVar18 >> 0x10),
                              CONCAT11(~bVar23 & (byte)((uint)fVar18 >> 8),
                                       ~(byte)iVar2 & SUB41(fVar18,0))));
    auVar13._0_8_ =
         CONCAT17(~bVar28 & (byte)((uint)fVar20 >> 0x18),
                  CONCAT16(~bVar27 & (byte)((uint)fVar20 >> 0x10),
                           CONCAT15(~bVar26 & (byte)((uint)fVar20 >> 8),
                                    CONCAT14(~(byte)iVar3 & SUB41(fVar20,0),uVar9))));
    auVar13[8] = ~(byte)iVar4 & SUB41(fVar21,0);
    auVar13[9] = ~bVar29 & (byte)((uint)fVar21 >> 8);
    auVar13[10] = ~bVar30 & (byte)((uint)fVar21 >> 0x10);
    auVar13[0xb] = ~bVar31 & (byte)((uint)fVar21 >> 0x18);
    auVar13[0xc] = ~(byte)iVar5 & SUB41(fVar22,0);
    auVar13[0xd] = ~bVar32 & (byte)((uint)fVar22 >> 8);
    auVar13[0xe] = ~bVar33 & (byte)((uint)fVar22 >> 0x10);
    auVar13[0xf] = ~bVar34 & (byte)((uint)fVar22 >> 0x18);
    uVar6 = auVar13._8_8_ | auVar12._8_8_;
    fVar7 = (float)*param_2;
    fVar15 = (float)((ulong)*param_2 >> 0x20);
    auVar14._0_4_ = fVar7 * (float)(uVar9 | uVar8) * 1.0 + 0.0;
    auVar14._4_4_ =
         *(float *)(param_2 + 1) +
         fVar15 * (float)((uint)((ulong)auVar13._0_8_ >> 0x20) |
                         (uint)((ulong)auVar12._0_8_ >> 0x20)) * 1.0;
    auVar14._8_4_ = fVar7 * (float)uVar6 * -1.0 + 0.0;
    auVar14._12_4_ = *(float *)(param_2 + 1) + fVar15 * (float)(uVar6 >> 0x20) * -1.0;
    if (*(float *)((long)param_2 + 4) < 0.0) {
      NEON_ext(auVar14,auVar14,0xc,1);
    }
  }
  return;
}



/* Entry: 108309c90; end: 108309d7b;  */

long FUN_108309c90(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined1 auStack_ac [32];
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  byte bStack_44;
  
  auVar2 = NEON_fmov(0x3f800000,4);
  uStack_84 = auVar2._8_8_;
  uStack_8c = auVar2._0_8_;
  uStack_7c = 0;
  uStack_48 = 0;
  lVar1 = param_2;
  uStack_58 = uStack_8c;
  uStack_50 = uStack_84;
  FUN_1082d4170(param_2,auStack_ac);
  if ((int)lVar1 == 0) {
    bStack_b0 = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    lVar1 = 1;
  }
  else {
    bStack_b0 = *(byte *)(param_2 + 0x68) & 0xf;
  }
  uStack_d0 = *param_3;
  uStack_c8 = param_3[1];
  uStack_b8 = param_4[1];
  uStack_c0 = *param_4;
  FUN_10830a67c(param_1 + 0x30,param_2,&uStack_d0,param_2 + 0x34);
  if (1 < (int)lVar1) {
    uStack_d0 = *param_3;
    uStack_c8 = param_3[1];
    uStack_b8 = param_4[1];
    uStack_c0 = *param_4;
    bStack_b0 = bStack_44 & 0xf;
    FUN_10830a67c(param_1 + 0x30,auStack_ac,&uStack_d0,auStack_78);
    *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 1;
  }
  return lVar1;
}



/* Entry: 108309d7c; end: 108309dd7;  */

undefined8 * FUN_108309d7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = param_1 + 0x10;
  for (uVar2 = 1; uVar2 < *(ushort *)((long)param_1 + 0x6a); uVar2 = uVar2 + 1) {
    FUN_1082764bc(puVar1);
    puVar1 = puVar1 + 2;
  }
  FUN_1082764bc(param_1 + 0xe);
  FUN_10827f5a4(param_1 + 0xb);
  FUN_10840f118(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 108309dd8; end: 108309deb;  */

void FUN_108309dd8(void)

{
  FUN_108309d7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108309dec; end: 108309df7;  */

undefined * FUN_108309dec(void)

{
  return &DAT_10f48a1fa;
}



/* Entry: 108309df8; end: 108309e83;  */

void FUN_108309df8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong uVar4;
  
  func_0x00010830acac();
  for (uVar4 = 0; uVar4 < *(ushort *)((long)unaff_x20 + 0x6a); uVar4 = uVar4 + 1) {
    FUN_108298768();
  }
  if ((unaff_x20[0xc] == 0) || (lVar3 = *(long *)(unaff_x20[0xc] + 0x18), lVar3 == 0)) {
    return;
  }
  lVar2 = *(long *)(lVar3 + 0x88);
  func_0x0001082a3784();
  puVar1 = *(undefined8 **)(lVar2 + 0x50);
  for (lVar3 = (long)*(int *)(lVar2 + 0x78) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    FUN_108296038(*puVar1,unaff_x19);
    puVar1 = puVar1 + 1;
  }
  if ((*unaff_x20 != 0) && ((*(byte *)(unaff_x20 + 3) >> 1 & 1) == 0)) {
    func_0x000108298794(unaff_x19,&stack0xffffffffffffffe8,&stack0xffffffffffffffe7);
    return;
  }
  return;
}



/* Entry: 108309e84; end: 10830a07b;  */

undefined8 FUN_108309e84(long param_1,long param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    return 2;
  }
  if ((*(long *)(param_2 + 0x60) == 0) &&
     (((*(ushort *)(param_2 + 0x6e) ^ *(ushort *)(param_1 + 0x6e)) >> 8 & 1) == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    FUN_10828b20c(uVar7,*(undefined8 *)(param_2 + 0x58));
    if ((int)uVar7 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x6e);
      uVar4 = uVar2 >> 4 & 3;
      uVar3 = *(ushort *)(param_2 + 0x6e);
      uVar5 = uVar3 >> 4 & 3;
      if ((uVar4 != uVar5) && ((uVar4 != 0 || (uVar5 != 1)))) {
        if (uVar4 != 1) {
          return 2;
        }
        if (uVar5 != 0) {
          return 2;
        }
      }
      lVar9 = param_1;
      FUN_10830a804();
      lVar8 = param_2;
      FUN_10830a804();
      iVar10 = 0x200;
      if (uVar4 == uVar5 && uVar4 != 1) {
        iVar10 = 0x1000;
      }
      if ((((int)lVar8 + (int)lVar9 <= iVar10) && (((uVar3 ^ uVar2) & 0x20f) == 0)) &&
         (*(short *)(param_1 + 0x68) == *(short *)(param_2 + 0x68))) {
        lVar9 = *(long *)(param_1 + 0x70);
        if ((*(ushort *)(param_1 + 0x6a) < 2) &&
           (*(ushort *)(param_2 + 0x6a) < 2 && lVar9 == *(long *)(param_2 + 0x70))) {
          *(ushort *)(param_1 + 0x6e) = uVar3 & 0x100 | uVar2;
          uVar1 = uVar2 >> 6 & 3;
          uVar6 = *(ushort *)(param_2 + 0x6e) >> 6 & 3;
          if (uVar1 <= uVar6) {
            uVar1 = uVar6;
          }
          *(ushort *)(param_1 + 0x6e) = uVar3 & 0x100 | uVar2 & 0xff3f | uVar1 << 6;
          FUN_10840f460(param_1 + 0x30,*(undefined8 *)(param_2 + 0x38),
                        *(undefined4 *)(param_2 + 0x44));
          iVar10 = *(int *)(param_2 + 0x4c);
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_2 + 0x48);
          if (*(int *)(param_1 + 0x4c) < iVar10) {
            *(int *)(param_1 + 0x4c) = iVar10;
          }
          if (*(int *)(param_1 + 0x50) < *(int *)(param_2 + 0x50)) {
            *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
          }
          iVar10 = *(int *)(param_2 + 0x48);
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar10;
          *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + (short)iVar10;
          if (uVar4 != uVar5) {
            func_0x00010830a838(param_1);
            func_0x00010830a838(param_2);
          }
          return 0;
        }
        func_0x0001082b3460();
        if ((((int)lVar9 != 0) && ((*(byte *)(param_4 + 0x1e) >> 3 & 1) != 0)) &&
           (((*(ushort *)(param_2 + 0x6e) ^ *(ushort *)(param_1 + 0x6e)) & 0x30) == 0)) {
          return 1;
        }
      }
    }
  }
  return 2;
}



/* Entry: 10830a07c; end: 10830a1fb;  */

void FUN_10830a07c(long param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort *extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*(long *)(*(long *)(param_1 + 0x60) + 0x28) != 0) &&
     ((func_0x00010830acac(), (*extraout_x8 & 0x30) == 0x20 || (*(long *)(extraout_x8 + 0x10) != 0))
     )) {
    if (*(long *)(extraout_x8 + 0xc) == 0) {
      FUN_1082fbcfc();
    }
    FUN_1082a1068();
    lVar3 = *(long *)(unaff_x20 + 0x60);
    uStack_58 = *(undefined8 *)(lVar3 + 0x20);
    uStack_60 = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    FUN_1082a16e0();
    func_0x00010830ac50();
    FUN_1082647e4(&uStack_60);
    FUN_1082647e4(&uStack_58);
    iVar4 = 0;
    for (lVar3 = unaff_x20; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
      piVar7 = (int *)(lVar3 + 0x78);
      for (uVar6 = 0; uVar6 < *(ushort *)(lVar3 + 0x6a); uVar6 = uVar6 + 1) {
        iVar1 = *piVar7;
        FUN_1082f4388();
        puVar2 = *(ushort **)(unaff_x20 + 0x60);
        uVar5 = 2;
        if ((*puVar2 & 0x400) != 0) {
          uVar5 = 3;
        }
        FUN_108302bd4(*(undefined8 *)(*(long *)(unaff_x19 + 0x160) + 0x10),
                      *(undefined8 *)(unaff_x19 + 0x178),puVar2,iVar4,iVar1,
                      *(int *)(puVar2 + 4) << (ulong)uVar5,*(undefined4 *)(puVar2 + 0x18));
        iVar4 = iVar1 + iVar4;
        piVar7 = piVar7 + 4;
      }
    }
  }
  return;
}



/* Entry: 10830a1fc; end: 10830a2eb;  */

undefined8 FUN_10830a1fc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  long unaff_x19;
  long unaff_x20;
  byte *pbVar8;
  byte *pbVar9;
  
  func_0x00010830acac();
  pbVar8 = (byte *)0x0;
  while( true ) {
    pbVar7 = *(byte **)(unaff_x20 + 0x38);
    pbVar9 = pbVar7;
    if ((pbVar8 != (byte *)0x0) && (pbVar9 = pbVar8, pbVar8 < pbVar7 + *(int *)(unaff_x20 + 0x44)))
    {
      bVar5 = *pbVar8;
      lVar2 = 0x58;
      if (((bVar5 ^ 0xff) & 3) != 0) {
        lVar2 = 0x48;
      }
      lVar3 = 0x30;
      if (((bVar5 ^ 0xff) & 0xc) != 0) {
        lVar3 = 0x20;
      }
      lVar4 = 0;
      if ((bVar5 & 0x10) != 0) {
        lVar4 = lVar3;
      }
      pbVar9 = pbVar8 + lVar4 + lVar2;
    }
    if (pbVar7 + *(int *)(unaff_x20 + 0x44) <= pbVar9) break;
    FUN_1083021c0(*(undefined4 *)(pbVar9 + 4),*(undefined4 *)(pbVar9 + 8),
                  *(undefined4 *)(pbVar9 + 0xc),*(undefined4 *)(pbVar9 + 0x10));
    uVar6 = *(ushort *)(unaff_x20 + 0x6e) >> 6 & 3;
    uVar1 = (uint)param_1;
    if ((uint)param_1 <= uVar6) {
      uVar1 = uVar6;
    }
    uVar6 = uVar1;
    if (uVar1 < 2) {
      uVar6 = 1;
    }
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 99) == '\0') {
      uVar6 = uVar1;
    }
    *(ushort *)(unaff_x20 + 0x6e) = *(ushort *)(unaff_x20 + 0x6e) & 0xff3f | (ushort)(uVar6 << 6);
    pbVar8 = pbVar9;
  }
  return 0x22;
}



/* Entry: 10830a2ec; end: 10830a2ff;  */

bool FUN_10830a2ec(long param_1)

{
  return (*(ushort *)(param_1 + 0x6e) & 0x30) == 0x20;
}



/* Entry: 10830a300; end: 10830a3bb;  */

long * FUN_10830a300(long *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                    undefined8 param_6)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar3 = param_2 + 5;
  func_0x0001082a6e68();
  plVar2 = plVar3;
  FUN_10830a874();
  param_1[0xc] = (long)plVar2;
  func_0x00010830a8e0(param_1,plVar2);
  lVar6 = param_1[0xc];
  lVar4 = lVar6;
  func_0x00010830ab68(lVar6);
  FUN_1081fe46c(plVar3,lVar4);
  *(long **)(lVar6 + 0x10) = plVar3;
  FUN_10830a9dc(param_1,param_1[0xc],*(undefined8 *)(param_1[0xc] + 0x10));
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2 + 5;
  func_0x0001082a6e68(plVar3);
  plVar2 = (long *)*param_3;
  (**(code **)(*plVar2 + 0x28))();
  lVar4 = plVar2[1];
  if (param_4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0x2000000020000000;
    uStack_a0 = 0x2000000020000000;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    FUN_1082a191c(&uStack_b0,param_4);
  }
  uVar1 = (char)lVar4 == '\x01';
  puVar5 = (undefined8 *)(ulong)('\x01' < (char)lVar4);
  (**(code **)(*param_1 + 0x78))
            (param_1,*(undefined8 *)(param_2[2] + 0xb8),plVar3,param_3,puVar5,&uStack_b0,param_5,
             param_6);
  (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  func_0x0001082fc1cc();
  func_0x0001082fc1ec(uStack_68);
  if ((bool)uVar1) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001082fc1c4();
  *param_2 = 0;
  param_2[1] = 0;
  *puVar5 = 0;
  FUN_1082fbfcc();
  func_0x0001082fc1d4();
  return param_2;
}



/* Entry: 10830a3bc; end: 10830a3d3;  */

undefined8 FUN_10830a3bc(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18);
  }
  return 0;
}



/* Entry: 10830a3d4; end: 10830a4ff;  */

void FUN_10830a3d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = param_3;
  FUN_108302d10(param_3,*(undefined8 *)(param_1 + 0x60),uVar3,*(long *)(param_1 + 0x70) + 0x20,
                (ulong)(*(ushort *)(param_1 + 0x6e) & 3) << 0x20,0x100000000,param_1 + 0x68,
                &uStack_68,(byte)(*(ushort *)(param_1 + 0x6e) >> 9) & 1);
  func_0x00010830ac58();
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x60);
  FUN_1082fbc60();
  FUN_1082fc788(param_2,param_3,param_4,param_5,param_6,param_7,uVar2,&uStack_88,uVar1,param_8,
                param_9,0,&UNK_10df14cb4);
  *(long *)(*(long *)(param_1 + 0x60) + 0x18) = param_2;
  FUN_1082a3b78(&uStack_88);
  return;
}



/* Entry: 10830a500; end: 10830a673;  */

void FUN_10830a500(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ushort *puVar3;
  long *plVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  undefined8 uStack_38;
  
  puVar6 = *(ushort **)(param_1 + 0x60);
  if (puVar6 == (ushort *)0x0) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0xe0))();
    FUN_10830a874();
    *(long **)(param_1 + 0x60) = plVar2;
    func_0x00010830a8e0(param_1,plVar2);
    puVar6 = *(ushort **)(param_1 + 0x60);
  }
  puVar3 = puVar6;
  FUN_108302c64(puVar6);
  uVar5 = 2;
  if ((*puVar6 & 0x400) != 0) {
    uVar5 = 3;
  }
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x18))
            (param_2,puVar3,*(int *)(puVar6 + 4) << (ulong)uVar5,puVar6 + 0x14,puVar6 + 0x18);
  if (plVar2 != (long *)0x0) {
    puVar6 = *(ushort **)(param_1 + 0x60);
    if ((*puVar6 & 0x30) != 0x20) {
      FUN_108302af4(&uStack_38,param_2,*puVar6 >> 4 & 3);
      uVar1 = uStack_38;
      uStack_38 = 0;
      plVar4 = *(long **)(*(long *)(param_1 + 0x60) + 0x20);
      *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = uVar1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      func_0x00010830ac50();
      puVar6 = *(ushort **)(param_1 + 0x60);
      if (*(long *)(puVar6 + 0x10) == 0) {
        FUN_10841076c(&UNK_10f488023);
        return;
      }
    }
    lVar7 = *(long *)(puVar6 + 8);
    if (lVar7 == 0) {
      (**(code **)(*param_2 + 0xd0))(param_2);
      FUN_10830a9dc(param_1,*(undefined8 *)(param_1 + 0x60),plVar2);
    }
    else {
      func_0x00010830ab68();
      _memcpy(plVar2,lVar7,puVar6);
    }
    return;
  }
  _vfprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f488006,&stack0x00000000);
  return;
}



/* Entry: 10830a674; end: 10830a67b;  */

float FUN_10830a674(float param_1,float param_2)

{
  return param_1 * param_2;
}



/* Entry: 10830a67c; end: 10830a803;  */

void FUN_10830a67c(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iStack_44;
  
  if (param_4 == (undefined8 *)0x0) {
    bVar9 = 0;
    piVar5 = (int *)0x0;
    iStack_44 = 0;
  }
  else {
    iStack_44 = *(int *)(param_4 + 6);
    piVar5 = &iStack_44;
    bVar9 = 0x10;
  }
  iVar7 = 0x58;
  if (*(int *)(param_2 + 6) != 3) {
    iVar7 = 0x48;
  }
  if (piVar5 != (int *)0x0) {
    iVar4 = 0x30;
    if (*piVar5 != 3) {
      iVar4 = 0x20;
    }
    iVar7 = iVar4 + iVar7;
  }
  pbVar3 = param_1;
  FUN_1082fb94c(param_1,iVar7);
  bVar2 = *pbVar3;
  bVar9 = *(byte *)(param_2 + 6) & 3 | bVar9;
  *pbVar3 = bVar9 | bVar2 & 0xec;
  if (param_4 == (undefined8 *)0x0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (*(byte *)(param_4 + 6) & 3) << 2;
  }
  *pbVar3 = bVar6 | bVar9 | bVar2 & 0xe0;
  uVar11 = param_3[1];
  uVar10 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  pbVar3[0x24] = *(byte *)(param_3 + 4);
  *(undefined8 *)(pbVar3 + 0x1c) = uVar13;
  *(undefined8 *)(pbVar3 + 0x14) = uVar12;
  *(undefined8 *)(pbVar3 + 0xc) = uVar11;
  *(undefined8 *)(pbVar3 + 4) = uVar10;
  pbVar1 = pbVar3 + 0x28;
  if (*(int *)(param_2 + 6) == 3) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar12 = param_2[2];
    uVar14 = param_2[5];
    uVar13 = param_2[4];
    *(undefined8 *)(pbVar3 + 0x40) = param_2[3];
    *(undefined8 *)(pbVar3 + 0x38) = uVar12;
    *(undefined8 *)(pbVar3 + 0x50) = uVar14;
    *(undefined8 *)(pbVar3 + 0x48) = uVar13;
    *(undefined8 *)(pbVar3 + 0x30) = uVar11;
    *(undefined8 *)pbVar1 = uVar10;
    lVar8 = 0x30;
  }
  else {
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    *(undefined8 *)(pbVar3 + 0x30) = param_2[1];
    *(undefined8 *)pbVar1 = uVar10;
    *(undefined8 *)(pbVar3 + 0x40) = uVar12;
    *(undefined8 *)(pbVar3 + 0x38) = uVar11;
    lVar8 = 0x20;
  }
  if (param_4 != (undefined8 *)0x0) {
    pbVar1 = pbVar1 + lVar8;
    if (*(int *)(param_4 + 6) == 3) {
      uVar11 = param_4[1];
      uVar10 = *param_4;
      uVar13 = param_4[3];
      uVar12 = param_4[2];
      uVar14 = param_4[4];
      *(undefined8 *)(pbVar1 + 0x28) = param_4[5];
      *(undefined8 *)(pbVar1 + 0x20) = uVar14;
    }
    else {
      uVar11 = param_4[1];
      uVar10 = *param_4;
      uVar13 = param_4[3];
      uVar12 = param_4[2];
    }
    *(undefined8 *)(pbVar1 + 8) = uVar11;
    *(undefined8 *)pbVar1 = uVar10;
    *(undefined8 *)(pbVar1 + 0x18) = uVar13;
    *(undefined8 *)(pbVar1 + 0x10) = uVar12;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 6)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 6);
  }
  if ((param_4 != (undefined8 *)0x0) && (*(int *)(param_1 + 0x20) < *(int *)(param_4 + 6))) {
    *(int *)(param_1 + 0x20) = *(int *)(param_4 + 6);
  }
  return;
}



/* Entry: 10830a804; end: 10830a873;  */

uint FUN_10830a804(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x6c);
  lVar2 = param_1;
  while (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0) {
    uVar1 = uVar1 + *(ushort *)(lVar2 + 0x6c);
  }
  while (param_1 = *(long *)(param_1 + 8), param_1 != 0) {
    uVar1 = uVar1 + *(ushort *)(param_1 + 0x6c);
  }
  return uVar1;
}



/* Entry: 10830a874; end: 10830a9db;  */

void FUN_10830a874(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = SUB84(param_1,0);
  FUN_10840f8d0(uVar3,0x41,8);
  lVar2 = param_1[1];
  param_1[1] = CONCAT44(uVar4,uVar3) + 0x38;
  *(code **)(CONCAT44(uVar4,uVar3) + 0x38) = FUN_10830ab38;
  lVar5 = param_1[1];
  param_1[1] = lVar5 + 8;
  *(char *)(lVar5 + 8) = (char)uVar3 - (char)(int)lVar2;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  puVar1 = (undefined8 *)CONCAT44(uVar4,uVar3);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(CONCAT44(uVar4,uVar3) + 0x28) = 0;
  *(undefined8 *)(CONCAT44(uVar4,uVar3) + 0x20) = 0;
  *(undefined8 *)(CONCAT44(uVar4,uVar3) + 0x30) = 0;
  return;
}



/* Entry: 10830a9dc; end: 10830ab37;  */

undefined1 * FUN_10830a9dc(long param_1)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1fc;
  undefined8 uStack_1f4;
  undefined4 uStack_1ec;
  long lStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  undefined1 auStack_1d0 [376];
  undefined8 uStack_58;
  
  func_0x00010830ac9c();
  puVar4 = auStack_1d0;
  uStack_58 = extraout_x8;
  FUN_1083027e4(puVar4);
  auVar8 = NEON_fmov(0x3f800000,4);
  for (; param_1 != 0; param_1 = *(long *)(param_1 + 8)) {
    lStack_1e8 = param_1 + 0x30;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_200 = 0;
    uStack_1ec = 0;
    uStack_230 = auVar8._0_8_;
    uStack_228 = auVar8._8_8_;
    uStack_1fc = auVar8._0_8_;
    uStack_1f4 = auVar8._8_8_;
    pbStack_1d8 = *(byte **)(param_1 + 0x38);
    for (uVar7 = 0; in_ZR = uVar7 == *(ushort *)(param_1 + 0x6a),
        uVar7 < *(ushort *)(param_1 + 0x6a); uVar7 = uVar7 + 1) {
      uVar2 = *(uint *)(param_1 + 0x78 + uVar7 * 0x10);
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      pbVar3 = pbStack_1d8;
      while ((pbStack_1d8 = pbVar3, uVar2 != 0 &&
             (pbVar3 < (byte *)(*(long *)(lStack_1e8 + 8) + (long)*(int *)(lStack_1e8 + 0x14))))) {
        pbVar5 = (byte *)(ulong)(*pbVar3 & 3);
        pbStack_1e0 = pbVar3;
        func_0x00010830aba0(pbVar5,pbVar3 + 0x28,&uStack_250);
        pbVar6 = pbVar5;
        if ((*pbVar3 >> 4 & 1) != 0) {
          pbVar6 = (byte *)(ulong)(*pbVar3 >> 2 & 3);
          func_0x00010830aba0(pbVar6,pbVar5,(long)&uStack_220 + 4);
        }
        lVar1 = 0;
        if ((*pbStack_1e0 & 0x10) != 0) {
          lVar1 = (long)&uStack_220 + 4;
        }
        puVar4 = auStack_1d0;
        pbStack_1d8 = pbVar6;
        FUN_10830284c(puVar4,&uStack_250,lVar1,pbStack_1e0 + 4,pbStack_1e0 + 0x14,
                      pbStack_1e0[0x24] & 0xf);
        uVar2 = uVar2 - 1;
        pbVar3 = pbStack_1d8;
      }
    }
  }
  func_0x00010830ac00(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1082647e4(puVar4 + -0x19);
    FUN_1082647e4(puVar4 + -0x21);
    return puVar4 + -0x41;
  }
  return puVar4;
}



/* Entry: 10830ab38; end: 10830abf3;  */

long FUN_10830ab38(long param_1)

{
  FUN_1082647e4(param_1 + -0x19);
  FUN_1082647e4(param_1 + -0x21);
  return param_1 + -0x41;
}



/* Entry: 10830abf4; end: 10830acdb;  */

void FUN_10830abf4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010830abfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10830acdc; end: 10830ad1f;  */

void FUN_10830acdc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  FUN_1083b8f64(param_1,*(undefined4 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x24),lVar1 + 0x28);
  *param_1 = &PTR_FUN_110a3b500;
  lVar1 = *param_2;
  *param_2 = 0;
  param_1[7] = lVar1;
  return;
}



/* Entry: 10830ad20; end: 10830ad7b;  */

void FUN_10830ad20(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110a3b500;
  if (param_1[6] != 0) {
    func_0x00010830c3a4();
    (**(code **)(*plStack_28 + 200))();
    func_0x00010830c35c();
  }
  FUN_108276880(param_1 + 7);
  FUN_1083b8f9c(param_1);
  return;
}



/* Entry: 10830ad7c; end: 10830adf7;  */

void FUN_10830ad7c(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long *plVar2;
  undefined8 uStack_28;
  
  plVar2 = param_2 + 6;
  if (*plVar2 == 0) {
    (**(code **)(*param_2 + 0x50))(&uStack_28,param_2,0);
    uVar1 = uStack_28;
    uStack_28 = 0;
    func_0x000108175028(plVar2,uVar1);
    func_0x00010830c35c();
    uVar1 = 0;
    if (*plVar2 == 0) goto LAB_10830add8;
  }
  do {
    func_0x00010830c2e4();
    uVar1 = extraout_x8;
  } while (extraout_w11 != 0);
LAB_10830add8:
  *param_1 = uVar1;
  return;
}



/* Entry: 10830adf8; end: 10830adfb;  */

void FUN_10830adf8(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_FUN_110a3b500;
  if (param_1[6] != 0) {
    func_0x00010830c3a4();
    (**(code **)(*plStack_28 + 200))();
    func_0x00010830c35c();
  }
  FUN_108276880(param_1 + 7);
  FUN_1083b8f9c(param_1);
  return;
}



/* Entry: 10830adfc; end: 10830ae0f;  */

void FUN_10830adfc(void)

{
  FUN_10830ad20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10830ae10; end: 10830ae2b;  */

undefined8 FUN_10830ae10(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x128);
}



/* Entry: 10830ae2c; end: 10830ae9f;  */

undefined8 FUN_10830ae2c(long param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uVar1 = 0xca8;
  __Znwm(0xca8);
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    do {
      FUN_10830c2e4();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10833bed4(uVar1,&uStack_28);
  FUN_10830c294(&uStack_28);
  return uVar1;
}



/* Entry: 10830aea0; end: 10830af77;  */

void FUN_10830aea0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  long *plVar4;
  long *plStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  plVar4 = *(long **)(*(long *)(*(long *)(param_2 + 0x38) + 0x138) + 0x10);
  do {
    FUN_10830c2e4();
  } while (extraout_w11 != 0);
  uStack_48 = *(undefined4 *)(extraout_x8 + 0x18);
  uStack_44 = *(undefined2 *)(extraout_x8 + 0x1c);
  plVar3 = plVar4;
  plStack_50 = plVar4;
  (**(code **)(*plVar4 + 0x28))();
  uVar2 = uStack_48;
  lVar1 = plVar3[1];
  (**(code **)(*plVar4 + 0x28))(plVar4);
  func_0x00010830c300();
  FUN_10830af78(param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x128),0,param_3,
                (long)(char)lVar1,uVar2,param_2 + 0xc,0,*(undefined1 *)(extraout_x8_00 + 0xcb));
  FUN_1082764bc(&plStack_50);
  return;
}



/* Entry: 10830af78; end: 10830b043;  */

void FUN_10830af78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *in_x5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    if (in_x5 == (undefined8 *)0x0) {
      uStack_38 = 0x3f000000;
      uStack_40 = 0;
    }
    else {
      uStack_38 = in_x5[1];
      uStack_40 = *in_x5;
    }
    FUN_10827b474(&lStack_28);
    if (lStack_28 == 0) {
      *param_1 = 0;
    }
    else {
      FUN_108276444(&uStack_40,&lStack_28);
      uVar1 = uStack_40;
      uStack_40 = 0;
      *param_1 = uVar1;
      FUN_1082768c4(&uStack_40);
    }
    FUN_108276880(&lStack_28);
  }
  return;
}



/* Entry: 10830b044; end: 10830b3c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10830b044(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 in_x7;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  long alStack_e8 [3];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  long lStack_58;
  undefined8 *puVar8;
  
  lVar2 = *(long *)(param_2 + 0x38);
  FUN_10827e094();
  if (lVar2 == 0) {
    *param_1 = 0;
    return;
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 0x128);
  lVar5 = *(long *)(*(long *)(param_2 + 0x38) + 0x138);
  lVar3 = *(long *)(lVar5 + 0x10);
  if (lVar3 != 0) {
    do {
      FUN_10830c2e4();
      lVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_80 = *(undefined4 *)(lVar5 + 0x18);
  uStack_7c = *(undefined2 *)(lVar5 + 0x1c);
  lStack_88 = lVar3;
  func_0x00010830c3b8();
  uVar1 = *(undefined1 *)(lVar2 + extraout_x8_00 + 0x9c);
  if (param_3 == (undefined8 *)0x0) {
    if (lVar3 == 0) {
LAB_10830b100:
      if (lStack_88 == 0) {
        lVar2 = 0;
      }
      else {
        lVar5 = lStack_88;
        func_0x00010830c334();
        (*extraout_x8_03)();
        lVar2 = lStack_88;
        if (lVar5 != 0) {
          if (lVar6 != 0) {
            do {
              func_0x00010830c310();
            } while (extraout_w10 != 0);
          }
          uStack_a0 = 0;
          lStack_90 = lVar6;
          if (lStack_88 != 0) {
            do {
              FUN_10830c2e4();
              uStack_a0 = extraout_x8_04;
            } while (extraout_w11_00 != 0);
          }
          uStack_98 = uStack_80;
          uStack_94 = uStack_7c;
          lVar2 = *(long *)(param_2 + 0x38);
          uStack_b0 = 0;
          if (*(long *)(lVar2 + 0x10) != 0) {
            do {
              FUN_10830c2e4();
              lVar2 = extraout_x8_05;
              uStack_b0 = extraout_x9;
            } while (extraout_w11_01 != 0);
          }
          uStack_a8 = *(undefined8 *)(lVar2 + 0x18);
          FUN_1082e2420(param_1,&lStack_90,&uStack_a0,&uStack_b0);
          FUN_10810a400(&uStack_b0);
          FUN_1082764bc(&uStack_a0);
          FUN_10827f63c(&lStack_90);
          goto LAB_10830b30c;
        }
      }
      uVar9 = 0;
      puVar8 = (undefined8 *)(lVar2 + 0x90);
      goto LAB_10830b1b0;
    }
    func_0x00010830c334();
    (*extraout_x8_01)();
    if (lVar3 == 0) goto LAB_10830b100;
    func_0x00010830c3b8();
    lVar2 = *(long *)(lVar2 + extraout_x8_02 + 0x10);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x91) == '\x01')) goto LAB_10830b100;
  }
  else {
    puVar8 = param_3 + 1;
    uVar9 = *param_3;
LAB_10830b1b0:
    uVar7 = *puVar8;
    plVar4 = &lStack_88;
    FUN_1082b27cc(plVar4);
    lStack_c0 = lStack_88;
    lStack_88 = 0;
    uStack_b8 = uStack_80;
    uStack_b4 = uStack_7c;
    FUN_1082b28ac(alStack_e8 + 2,lVar6,&lStack_c0,plVar4,uVar9,uVar7,1,uVar1,in_x7,&UNK_10f48a204,
                  0x1b);
    FUN_108279f20(&lStack_88,alStack_e8 + 2);
    FUN_1082764bc(alStack_e8 + 2);
    FUN_1082764bc(&lStack_c0);
  }
  lVar2 = *(long *)(param_2 + 0x38);
  alStack_e8[2] = 0;
  if (*(long *)(lVar2 + 0x10) != 0) {
    do {
      FUN_10830c2e4();
      lVar2 = extraout_x8_06;
      alStack_e8[2] = extraout_x9_00;
    } while (extraout_w11_02 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar2 + 0x20);
  uStack_d0 = *(undefined8 *)(lVar2 + 0x18);
  if (lStack_88 == 0) {
LAB_10830b304:
    *param_1 = 0;
  }
  else {
    lVar2 = lStack_88;
    func_0x00010830c334();
    (*extraout_x8_07)();
    if (lVar2 == 0) goto LAB_10830b304;
    if (lVar6 != 0) {
      do {
        func_0x00010830c310();
      } while (extraout_w10_00 != 0);
    }
    uVar9 = 0x68;
    alStack_e8[0] = lVar6;
    __Znwm();
    lStack_68 = lStack_88;
    alStack_e8[0] = 0;
    lStack_88 = 0;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    uStack_78 = 0;
    lStack_58 = lVar6;
    if (alStack_e8[2] != 0) {
      do {
        func_0x00010830c310();
        uStack_78 = extraout_x8_08;
      } while (extraout_w10_01 != 0);
    }
    uStack_70 = uStack_d0;
    FUN_1082e230c(uVar9,&lStack_58,0,&lStack_68,&uStack_78);
    FUN_10810a400(&uStack_78);
    FUN_1082764bc(&lStack_68);
    FUN_108281b98(&lStack_58);
    alStack_e8[1] = 0;
    *param_1 = uVar9;
    FUN_1082e1f7c(alStack_e8 + 1);
    FUN_10827f63c(alStack_e8);
  }
  func_0x00010830c340();
LAB_10830b30c:
  FUN_1082764bc(&lStack_88);
  return;
}



/* Entry: 10830b3c8; end: 10830b3d7;  */

void FUN_10830b3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010830b3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x1e0))();
  return;
}



/* Entry: 10830b3d8; end: 10830b40f;  */

void FUN_10830b3d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_4;
  FUN_10827e49c(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_20,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 10830b410; end: 10830b473;  */

void FUN_10830b410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *param_4;
  *param_4 = 0;
  uStack_30 = param_5;
  uStack_28 = param_6;
  FUN_10827e52c(uVar1,param_2,param_3,&uStack_38,&uStack_30,param_7,param_8,param_9,param_11,
                param_12);
  func_0x00010830c378();
  return;
}



/* Entry: 10830b474; end: 10830b53f;  */

undefined8 FUN_10830b474(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  undefined8 uVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x138);
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != 0) {
    do {
      FUN_10830c2e4();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_38 = *(undefined4 *)(lVar2 + 0x18);
  uStack_34 = *(undefined2 *)(lVar2 + 0x1c);
  lStack_40 = lVar4;
  func_0x00010830c3a4();
  lVar2 = lStack_48 + 0x38;
  FUN_1082e27b4(lVar2,lVar4);
  if ((int)lVar2 == 0) {
    if ((int)param_2 == 0) {
      FUN_10830b540(param_1);
    }
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x38);
    FUN_10827e274(uVar1,param_2);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      goto LAB_10830b500;
    }
  }
  uVar3 = 1;
LAB_10830b500:
  func_0x00010830c35c();
  FUN_1082764bc(&lStack_40);
  return uVar3;
}



/* Entry: 10830b540; end: 10830b54f;  */

void FUN_10830b540(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x138);
  func_0x0001082c4e98();
  if ((uVar1 & 1) == 0) {
    func_0x0001082c4ed4();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    func_0x0001082c4f10();
    if (*(int *)(uVar1 + 0x8a8) == 0) {
      *(undefined4 *)(uVar1 + 0x98) = 2;
      *(undefined4 *)(uVar1 + 0xac) = 0;
      *(undefined8 *)(uVar1 + 0x8d0) = 0;
      *(undefined8 *)(uVar1 + 0x8c8) = 0;
    }
  }
  return;
}



/* Entry: 10830b550; end: 10830b863;  */

long ** FUN_10830b550(long param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 in_ZR;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  code *extraout_x8_11;
  long *plVar14;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long **pplVar15;
  undefined1 uVar16;
  long *plVar17;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined2 uStack_26c;
  long *plStack_268;
  long lStack_260;
  long lStack_258;
  undefined4 uStack_250;
  undefined2 uStack_24c;
  long *plStack_248;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined4 uStack_1c0;
  undefined2 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long alStack_1a0 [11];
  char cStack_148;
  long alStack_130 [5];
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined1 uStack_b0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  undefined2 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  lVar9 = param_1;
  plVar10 = param_2;
  func_0x00010830c380();
  lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x128);
  uStack_70 = extraout_x8;
  func_0x00010830c320();
  if (lVar9 == 0) {
    pplVar15 = (long **)0x0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x38);
    uStack_1b8 = 0;
    if (*(long *)(lVar13 + 0x10) != 0) {
      do {
        func_0x00010830c2e4();
        lVar13 = extraout_x8_00;
        uStack_1b8 = extraout_x9;
      } while (extraout_w11 != 0);
    }
    uStack_1a8 = *(undefined8 *)(lVar13 + 0x20);
    uStack_1b0 = *(undefined8 *)(lVar13 + 0x18);
    in_ZR = *(int *)(lVar13 + 0x18) == 0;
    pplVar15 = (long **)(ulong)!(bool)in_ZR;
    if (*(int *)(lVar13 + 0x18) != 0) {
      lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 0x138);
      plVar10 = *(long **)(lVar13 + 0x10);
      if (plVar10 != (long *)0x0) {
        do {
          func_0x00010830c2e4();
          lVar13 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      uStack_1c0 = *(undefined4 *)(lVar13 + 0x18);
      uStack_1bc = *(undefined2 *)(lVar13 + 0x1c);
      lVar13 = *(long *)(*(long *)(lVar9 + 0x78) + 0x70);
      plStack_1c8 = plVar10;
      func_0x00010830c334();
      (*extraout_x8_02)();
      if (plVar10 == (long *)0x0) {
        uVar16 = 0;
      }
      else {
        plVar10 = plStack_1c8;
        if (plStack_1c8 != (long *)0x0) {
          func_0x00010830c334();
          (*extraout_x8_03)();
        }
        uVar16 = SUB81(plVar10,0);
        FUN_1082b33e8();
      }
      func_0x00010830c36c(plStack_1c8);
      (*extraout_x8_04)();
      func_0x00010830c300();
      uVar2 = *(uint *)(extraout_x8_05 + 0x18);
      func_0x00010830c36c(plStack_1c8);
      (*extraout_x8_06)();
      func_0x00010830c300();
      uVar3 = *(uint *)(extraout_x8_07 + 0x18);
      FUN_108283324(alStack_1a0,plStack_1c8 + 4);
      plVar10 = plStack_1c8;
      func_0x00010830c36c();
      (*extraout_x8_08)();
      lVar7 = plVar10[1];
      (**(code **)(*plStack_1c8 + 0x28))(plStack_1c8);
      func_0x00010830c300();
      uVar4 = *(undefined1 *)(extraout_x8_09 + 0xcb);
      uStack_1d0 = 0;
      if (*(long *)(lVar9 + 0x10) != 0) {
        do {
          func_0x00010830c2e4();
          uStack_1d0 = extraout_x8_10;
        } while (extraout_w11_01 != 0);
      }
      uVar8 = uStack_1c0;
      plVar11 = plStack_1c8;
      if (plStack_1c8 != (long *)0x0) {
        func_0x00010830c334();
        (*extraout_x8_11)();
      }
      uVar12 = uStack_1d0;
      if ((*(byte *)(param_1 + 0xc) >> 1 & 1) == 0) {
        uStack_1d0 = 0;
        FUN_10828c198(param_2,uVar12);
        param_2[1] = lVar13;
        func_0x000108152830(param_2 + 2,&uStack_1b8);
        plVar10 = alStack_1a0;
        FUN_1082833e8(param_2 + 5);
        *(undefined4 *)(param_2 + 0x13) = uVar8;
        *(int *)((long)param_2 + 0x9c) = (int)(char)lVar7;
        *(bool *)(param_2 + 0x14) = plVar11 != (long *)0x0;
        *(undefined1 *)((long)param_2 + 0xa1) = uVar16;
        *(byte *)((long)param_2 + 0xa2) = (byte)(uVar2 >> 1) & 1;
        *(byte *)((long)param_2 + 0xa3) = (byte)(uVar3 >> 4) & 1;
        *(undefined1 *)((long)param_2 + 0xa4) = 0;
        *(undefined1 *)((long)param_2 + 0xa5) = uVar4;
        lVar9 = *(long *)(param_1 + 0xc);
        param_2[0x16] = *(long *)(param_1 + 0x14);
        param_2[0x15] = lVar9;
      }
      else {
        alStack_130[4] = 0;
        alStack_130[1] = 0;
        alStack_130[0] = 0;
        alStack_130[3] = 0;
        alStack_130[2] = 0;
        uStack_108 = 4;
        uStack_104 = 0;
        uStack_b0 = 0;
        uStack_9c = 0x100000000;
        uStack_94 = 0;
        uStack_90 = 0x101;
        uStack_8e = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_80 = 0x3f000000;
        plVar10 = alStack_130;
        FUN_10828c11c(param_2);
        FUN_10828c1d4(alStack_130);
      }
      FUN_108267a54(&uStack_1d0);
      in_ZR = cStack_148 == '\x01';
      if ((bool)in_ZR) {
        func_0x00010830c2f4(alStack_1a0);
      }
      FUN_1082764bc();
    }
    func_0x00010830c340();
  }
  func_0x00010830c348(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10828c1d4(alStack_130);
    FUN_108267a54(&uStack_1d0);
    if (cStack_148 == '\x01') {
      func_0x00010830c2f4(alStack_1a0);
    }
    pplVar15 = &plStack_1c8;
    FUN_1082764bc();
    func_0x00010830c340();
    func_0x00010830c32c();
    lVar9 = pplVar15[7][0x25];
    plVar11 = plVar10;
    (**(code **)(*plVar10 + 0x18))();
    if (((plVar11 != (long *)0x0) && (func_0x00010830c320(), plVar11 != (long *)0x0)) &&
       (*(int *)(plVar11[2] + 0xb0) == *(int *)(*(long *)(lVar9 + 0x10) + 0xb0))) {
      lVar9 = pplVar15[7][0x27];
      lStack_278 = *(long *)(lVar9 + 0x10);
      if (lStack_278 != 0) {
        piVar1 = (int *)(lStack_278 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_270 = *(undefined4 *)(lVar9 + 0x18);
      uStack_26c = *(undefined2 *)(lVar9 + 0x1c);
      FUN_1082b27f4(&plStack_290,&lStack_278);
      func_0x00010827aaa0(&plStack_290);
      if (plStack_290 != (long *)0x0) {
        plVar14 = pplVar15[7];
        plVar17 = (long *)plVar14[2];
        if (plVar17 != (long *)0x0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        lStack_280 = plVar14[4];
        lStack_288 = plVar14[3];
        lVar9 = plVar14[3];
        plStack_290 = plVar17;
        do {
          func_0x00010830c310();
        } while (extraout_w10 != 0);
        uVar12 = 0x68;
        plStack_2a8 = plVar11;
        __Znwm();
        lStack_258 = lStack_278;
        plStack_2a8 = (long *)0x0;
        lStack_278 = 0;
        uStack_250 = uStack_270;
        uStack_24c = uStack_26c;
        if (plVar17 != (long *)0x0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plStack_268 = plVar17;
        lStack_260 = lVar9;
        plStack_248 = plVar11;
        FUN_1082e230c(uVar12,&plStack_248,0,&lStack_258,&plStack_268);
        FUN_10810a400(&plStack_268);
        FUN_1082764bc(&lStack_258);
        FUN_108281b98(&plStack_248);
        uStack_2a0 = 0;
        uStack_298 = uVar12;
        FUN_1082e1f7c(&uStack_2a0);
        func_0x000108114364(&plStack_2a8);
        func_0x00010830c3c4(plVar10,uVar12);
        FUN_10834001c();
        func_0x000106f47184(&uStack_298);
        pplVar15 = &plStack_290;
        FUN_10810a400(pplVar15);
        func_0x00010830c390();
        return pplVar15;
      }
      func_0x00010830c390();
    }
    func_0x00010830c3c4(pplVar15,plVar10);
    FUN_1083b8ff0();
    return pplVar15;
  }
  return pplVar15;
}



/* Entry: 10830b864; end: 10830bab3;  */

void FUN_10830b864(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  int extraout_w10;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int *piStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  int *piStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  long *plStack_68;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x128);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x18))();
  if (((plVar3 != (long *)0x0) && (func_0x00010830c320(), plVar3 != (long *)0x0)) &&
     (*(int *)(plVar3[2] + 0xb0) == *(int *)(*(long *)(lVar5 + 0x10) + 0xb0))) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x138);
    lStack_98 = *(long *)(lVar5 + 0x10);
    if (lStack_98 != 0) {
      piVar6 = (int *)(lStack_98 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_90 = *(undefined4 *)(lVar5 + 0x18);
    uStack_8c = *(undefined2 *)(lVar5 + 0x1c);
    FUN_1082b27f4(&piStack_b0,&lStack_98);
    func_0x00010827aaa0(&piStack_b0);
    if (piStack_b0 != (int *)0x0) {
      lVar5 = *(long *)(param_1 + 0x38);
      piVar6 = *(int **)(lVar5 + 0x10);
      if (piVar6 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x18);
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      piStack_b0 = piVar6;
      do {
        func_0x00010830c310();
      } while (extraout_w10 != 0);
      uVar4 = 0x68;
      plStack_c8 = plVar3;
      __Znwm();
      lStack_78 = lStack_98;
      plStack_c8 = (long *)0x0;
      lStack_98 = 0;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      if (piVar6 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = *piVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      piStack_88 = piVar6;
      uStack_80 = uVar7;
      plStack_68 = plVar3;
      FUN_1082e230c(uVar4,&plStack_68,0,&lStack_78,&piStack_88);
      FUN_10810a400(&piStack_88);
      FUN_1082764bc(&lStack_78);
      FUN_108281b98(&plStack_68);
      uStack_c0 = 0;
      uStack_b8 = uVar4;
      FUN_1082e1f7c(&uStack_c0);
      func_0x000108114364(&plStack_c8);
      func_0x00010830c3c4(param_2,uVar4);
      FUN_10834001c();
      func_0x000106f47184(&uStack_b8);
      FUN_10810a400(&piStack_b0);
      func_0x00010830c390();
      return;
    }
    func_0x00010830c390();
  }
  func_0x00010830c3c4(param_1,param_2);
  FUN_1083b8ff0();
  return;
}



/* Entry: 10830bab4; end: 10830bdaf;  */

undefined8 * FUN_10830bab4(long param_1,long *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined1 in_ZR;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long *extraout_x8_09;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  long lStack_f8;
  int iStack_f0;
  undefined2 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [88];
  char cStack_70;
  undefined8 uStack_58;
  
  lVar7 = param_1;
  func_0x00010830c380();
  lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x128);
  uStack_58 = extraout_x8;
  func_0x00010830c320();
  puVar11 = (undefined8 *)0x0;
  if (((lVar7 == 0) || ((int)param_2[3] == 0)) || ((*(byte *)((long)param_2 + 0xa4) & 1) != 0))
  goto LAB_10830bcdc;
  lVar10 = *(long *)(param_1 + 0x38);
  uStack_e8 = 0;
  if (*(long *)(lVar10 + 0x10) != 0) {
    do {
      func_0x00010830c2e4();
      lVar10 = extraout_x8_00;
      uStack_e8 = extraout_x9;
    } while (extraout_w11 != 0);
  }
  uStack_d8 = *(undefined8 *)(lVar10 + 0x20);
  uStack_e0 = *(undefined8 *)(lVar10 + 0x18);
  if (*(int *)(lVar10 + 0x18) == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x38) + 0x138);
    lVar8 = *(long *)(lVar10 + 0x10);
    if (lVar8 != 0) {
      do {
        func_0x00010830c2e4();
        lVar10 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    iStack_f0 = *(int *)(lVar10 + 0x18);
    uStack_ec = *(undefined2 *)(lVar10 + 0x1c);
    uVar12 = *(ulong *)(*(long *)(lVar7 + 0x78) + 0x70);
    in_ZR = (char)param_2[0x14] == '\x01';
    lStack_f8 = lVar8;
    if (!(bool)in_ZR) goto LAB_10830bbac;
    if (lVar8 == 0) {
LAB_10830bbe0:
      puVar11 = (undefined8 *)0x0;
    }
    else {
      func_0x00010830c334();
      (*extraout_x8_02)();
      if (lVar8 == 0) goto LAB_10830bbe0;
      in_ZR = *(char *)((long)param_2 + 0xa1) == '\x01';
      if ((bool)in_ZR) {
        lVar10 = lStack_f8;
        if (lStack_f8 != 0) {
          func_0x00010830c334();
          (*extraout_x8_03)();
        }
        iVar6 = (int)lVar10;
        FUN_1082b33e8();
        if (iVar6 == 0) goto LAB_10830bbe0;
      }
LAB_10830bbac:
      bVar2 = *(byte *)((long)param_2 + 0xa2);
      func_0x00010830c36c();
      (*extraout_x8_04)();
      func_0x00010830c300();
      if (((uint)bVar2 != (*(byte *)(extraout_x8_05 + 0x18) & 2) >> 1) &&
         (bVar5 = *(char *)((long)param_2 + 0xa2) == '\x01',
         in_ZR = bVar5 && *(int *)((long)param_2 + 0x9c) == 1,
         !bVar5 || 1 < *(int *)((long)param_2 + 0x9c))) goto LAB_10830bbe0;
      func_0x00010830c36c(lStack_f8);
      (*extraout_x8_06)();
      func_0x00010830c300();
      FUN_108283324(auStack_c8,extraout_x8_07 + 0x20);
      lVar10 = lStack_f8;
      func_0x00010830c36c();
      (*extraout_x8_08)();
      lVar8 = *param_2;
      if (lVar8 == 0) {
LAB_10830bcb4:
        puVar11 = (undefined8 *)0x0;
      }
      else {
        cVar3 = *(char *)(lVar10 + 8);
        cVar4 = *(char *)(lStack_f8 + 0xcb);
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          do {
            func_0x00010830c310();
          } while (extraout_w10 != 0);
        }
        lStack_d0 = lVar7;
        FUN_108267a54(&lStack_d0);
        if ((lVar8 != lVar7 || uVar12 < (ulong)param_2[1]) || ((int)param_2[0x13] != iStack_f0))
        goto LAB_10830bcb4;
        plVar9 = param_2 + 5;
        FUN_1082834b8(plVar9,auStack_c8);
        if (((int)plVar9 == 0) ||
           ((((int)param_2[4] != (int)uStack_d8 ||
             (*(int *)((long)param_2 + 0x24) != uStack_d8._4_4_)) ||
            ((int)param_2[3] != (int)uStack_e0 || *(int *)((long)param_2 + 0x9c) != (int)cVar3))))
        goto LAB_10830bcb4;
        lVar7 = param_2[2];
        FUN_108343f98(lVar7,uStack_e8);
        puVar11 = (undefined8 *)0x0;
        if (((int)lVar7 != 0) && (*(char *)((long)param_2 + 0xa5) == cVar4)) {
          lVar7 = *(long *)(param_1 + 0x38);
          if (((int)param_2[0x15] != *(int *)(lVar7 + 0x28)) ||
             ((*(int *)((long)param_2 + 0xac) != *(int *)(lVar7 + 0x2c) ||
              (*(float *)(param_2 + 0x16) != *(float *)(lVar7 + 0x30))))) goto LAB_10830bcb4;
          puVar11 = (undefined8 *)
                    (ulong)(*(float *)((long)param_2 + 0xb4) == *(float *)(lVar7 + 0x34));
        }
      }
      in_ZR = cStack_70 == '\x01';
      if ((bool)in_ZR) {
        func_0x00010830c2f4(auStack_c8);
      }
    }
    FUN_1082764bc(&lStack_f8);
  }
  func_0x00010830c378();
LAB_10830bcdc:
  func_0x00010830c348(uStack_58);
  if ((bool)in_ZR) {
    return puVar11;
  }
  ___stack_chk_fail();
  if (cStack_70 == '\x01') {
    func_0x00010830c2f4(auStack_c8);
  }
  plVar9 = &lStack_f8;
  FUN_1082764bc();
  func_0x00010830c378();
  func_0x00010830c32c();
  pcStack_108 = FUN_10830bdb0;
  lVar7 = *(long *)(*(long *)(*(long *)(plVar9[7] + 0x128) + 0x10) + 0xb8);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_118 = 0;
  *extraout_x8_09 = lVar7;
  puVar11 = &uStack_118;
  puStack_110 = &stack0xfffffffffffffff0;
  FUN_10826b6c8(puVar11);
  return puVar11;
}



/* Entry: 10830bdb0; end: 10830bdbb;  */

void FUN_10830bdb0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_18;
  
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x38) + 0x128) + 0x10) + 0xb8);
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
  uStack_18 = 0;
  *param_1 = lVar4;
  FUN_10826b6c8(&uStack_18);
  return;
}



/* Entry: 10830bdbc; end: 10830c237;  */

long FUN_10830bdbc(long *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar8;
  long lVar9;
  ulong uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  uint uStack_1d0;
  char cStack_180;
  long *aplStack_d8 [11];
  char cStack_80;
  undefined8 uStack_68;
  
  func_0x00010830c380();
  uStack_68 = extraout_x8;
  FUN_1082836d4(&uStack_1e0,param_5,param_6);
  plVar8 = *(long **)(param_1[7] + 0x128);
  plVar4 = plVar8;
  (**(code **)(*plVar8 + 0x40))();
  lVar9 = 0;
  if ((((ulong)plVar4 & 1) == 0) && ((*param_2 & 1) != 0)) {
    in_ZR = false;
    if (*(int *)(param_2 + 4) == *(int *)((long)param_1 + 0x1c)) {
      in_ZR = *(int *)(param_2 + 8) == (int)param_1[4];
      if ((bool)in_ZR) {
        plVar4 = (long *)param_1[7];
        FUN_10827e094();
        lVar9 = (long)plVar4 + *(long *)(*plVar4 + -0x18);
        (**(code **)(*(long *)((long)plVar4 + *(long *)(*plVar4 + -0x18)) + 0x18))();
        if (lVar9 == 0) {
          lVar9 = 0;
          lStack_1e8 = 0;
        }
        else {
          func_0x00010830c300();
          do {
            func_0x00010830c310();
          } while (extraout_w10 != 0);
          lStack_1e8 = lVar9;
          func_0x00010830c300();
          plVar4 = *(long **)(extraout_x8_00 + 0x10);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x58))();
            lVar9 = 0;
            if (plVar4 == (long *)0x0) goto LAB_10830c10c;
            func_0x00010830c3b8();
            in_ZR = 0;
            if (*(char *)((long)plVar4 + extraout_x8_01 + 0x91) == '\x01') {
              (**(code **)(*(long *)((long)plVar4 + extraout_x8_01) + 0x50))(&uStack_1d8);
              func_0x0001082835f0(aplStack_d8,param_2);
              puVar5 = &uStack_1d8;
              FUN_10828a698(puVar5,aplStack_d8);
              if (cStack_80 == '\x01') {
                func_0x00010830c2f4(aplStack_d8);
              }
              in_ZR = cStack_180 == '\x01';
              if ((bool)in_ZR) {
                func_0x00010830c2f4(&uStack_1d8);
              }
              if (((ulong)puVar5 & 1) == 0) {
                (**(code **)(*plVar4 + 0x10))(&uStack_1d8,plVar4);
                puVar5 = &uStack_1d8;
                func_0x000108283588(puVar5,param_2);
                FUN_108283550(&uStack_1d8);
                if (((ulong)puVar5 & 1) == 0) {
                  func_0x00010830c3b8();
                  lVar9 = (long)plVar4 + extraout_x8_02;
                  (**(code **)(*(long *)((long)plVar4 + extraout_x8_02) + 0x68))();
                  uVar1 = *(undefined4 *)(lVar9 + 0x18);
                  plVar4 = param_1;
                  FUN_1083b8df0();
                  (**(code **)(*plVar4 + 0x50))(&uStack_1d8);
                  if (0x1a < uStack_1d0) goto LAB_10830c164;
                  uVar2 = *(undefined4 *)(&UNK_10df19484 + (ulong)uStack_1d0 * 4);
                  func_0x00010830c340();
                  in_ZR = 0;
                  if (*param_2 == 1) {
                    plVar4 = *(long **)(plVar8[2] + 0xb8);
                    func_0x0001082835f0(&uStack_1d8,param_2);
                    if ((((uStack_1d8 & 0x100000000) == 0) ||
                        (plVar6 = plVar4, FUN_10828a920(plVar4,uVar2,&uStack_1d8), (int)plVar6 == 0)
                        ) || (plVar6 = plVar4,
                             (**(code **)(*plVar4 + 0x38))(plVar4,uVar2,&uStack_1d8,uVar1),
                             (int)plVar6 == 0)) {
                      plVar4 = (long *)0x0;
                    }
                    else {
                      (**(code **)(*plVar4 + 0x20))
                                (plVar4,&uStack_1d8,*(undefined4 *)(param_2 + 0x30));
                    }
                    in_ZR = cStack_180 == '\x01';
                    if ((bool)in_ZR) {
                      func_0x00010830c2f4(&uStack_1d8);
                    }
                    if (((ulong)plVar4 & 1) != 0) {
                      uStack_1d8 = 0;
                      if (*(long *)(param_1[7] + 0x10) != 0) {
                        do {
                          func_0x00010830c310();
                          uStack_1d8 = extraout_x8_03;
                        } while (extraout_w10_00 != 0);
                      }
                      uStack_1f0 = uStack_1e0;
                      uStack_1e0 = 0;
                      FUN_1082a5748(aplStack_d8,plVar8[9],param_2,uVar1,0,0,&uStack_1f0);
                      func_0x000108267174(&uStack_1f0);
                      if (aplStack_d8[0] == (long *)0x0) {
                        lVar9 = 0;
                      }
                      else {
                        lVar9 = param_1[7];
                        lVar7 = (long)aplStack_d8[0] + *(long *)(*aplStack_d8[0] + -0x18);
                        (**(code **)(*(long *)((long)aplStack_d8[0] +
                                              *(long *)(*aplStack_d8[0] + -0x18)) + 0x28))();
                        if (lVar7 != 0) {
                          func_0x00010830c300();
                          do {
                            func_0x00010830c310();
                          } while (extraout_w10_01 != 0);
                        }
                        uStack_200 = uStack_1d8;
                        uStack_1d8 = 0;
                        lStack_1f8 = lVar7;
                        FUN_10827e11c(lVar9,param_4,&lStack_1f8,uVar2,&uStack_200,param_3,
                                      (long)param_1 + 0xc);
                        FUN_10810a400(&uStack_200);
                        func_0x00010830c364();
                      }
                      func_0x00010827aaa0(aplStack_d8);
                      func_0x00010830c340();
                      goto LAB_10830c10c;
                    }
                  }
                }
              }
            }
          }
          lVar9 = 0;
        }
LAB_10830c10c:
        func_0x00010827aaa0(&lStack_1e8);
        goto LAB_10830c114;
      }
    }
    lVar9 = 0;
  }
LAB_10830c114:
  func_0x000108267174(&uStack_1e0);
  func_0x00010830c348(uStack_68);
  if ((bool)in_ZR) {
    return lVar9;
  }
  ___stack_chk_fail();
LAB_10830c164:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10830c168);
  (*pcVar3)();
}



/* Entry: 10830c238; end: 10830c283;  */

void FUN_10830c238(long *param_1)

{
  param_1 = (long *)*param_1;
  if ((param_1 != (long *)0x0) && ((**(code **)(*param_1 + 0x30))(), param_1 != (long *)0x0)) {
    func_0x00010830c320();
    FUN_10828f448();
    FUN_10828f41c(param_1,0);
    return;
  }
  return;
}



/* Entry: 10830c284; end: 10830c293;  */

undefined8 FUN_10830c284(void)

{
  return 1;
}



/* Entry: 10830c294; end: 10830c2e3;  */

long * FUN_10830c294(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10830c2e4; end: 10830c3d7;  */

void FUN_10830c2e4(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10830c3d8; end: 10830c633;  */

undefined8 *
FUN_10830c3d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined1 uStack_45;
  undefined4 uStack_44;
  
  puVar1 = param_2;
  func_0x00010830cff0(param_2,0x119);
  iVar5 = *(int *)(param_2 + 1);
  param_2[1] = puVar1 + 0x22;
  puVar1[0x22] = FUN_10830c9c4;
  puVar2 = puVar1;
  func_0x00010830cfa0((int)puVar1 - iVar5);
  *(undefined4 *)(puVar2 + 1) = 0x3f;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *puVar2 = &PTR_FUN_110a3b6d0;
  *(undefined1 *)((long)puVar2 + 0x44) = 0;
  uVar4 = param_3[4];
  uVar10 = *param_3;
  uVar9 = param_3[3];
  uVar8 = param_3[2];
  puVar2[10] = param_3[1];
  puVar2[9] = uVar10;
  puVar2[0xc] = uVar9;
  puVar2[0xb] = uVar8;
  puVar2[0xd] = uVar4;
  uVar4 = *param_4;
  puVar2[0xf] = param_4[1];
  puVar2[0xe] = uVar4;
  *(undefined4 *)(puVar2 + 0x10) = param_5;
  *puVar2 = &PTR_FUN_110a3b630;
  puVar2[0x20] = puVar2 + 0x11;
  puVar2[0x21] = 0xa00000000;
  func_0x00010830d01c(puVar2 + 0x20,&UNK_10f48a268);
  func_0x00010830d01c(puVar1 + 0x20,&UNK_10f48a26c);
  uVar3 = *(uint *)(puVar1 + 0x10);
  if ((uVar3 >> 1 & 1) != 0) {
    iVar5 = *(int *)(puVar1 + 0x21);
    if (iVar5 < (int)(*(uint *)((long)puVar1 + 0x10c) >> 1)) {
      puVar7 = (undefined8 *)(puVar1[0x20] + (long)iVar5 * 0x18);
      *puVar7 = &UNK_10f48a270;
      *(undefined4 *)(puVar7 + 1) = 1;
      *(undefined1 *)((long)puVar7 + 0xc) = 0xe;
      *(undefined4 *)(puVar7 + 2) = 1;
    }
    else {
      puVar7 = puVar1 + 0x20;
      uVar4 = 1;
      FUN_1082eb3b0(0x3ff8000000000000,puVar7,1);
      puVar6 = puVar7 + (long)*(int *)(puVar1 + 0x21) * 3;
      *puVar6 = &UNK_10f48a270;
      *(undefined4 *)(puVar6 + 1) = 1;
      *(undefined1 *)((long)puVar6 + 0xc) = 0xe;
      *(undefined4 *)(puVar6 + 2) = 1;
      FUN_1082eb3d4(puVar1 + 0x20,puVar7,uVar4);
      iVar5 = *(int *)(puVar1 + 0x21);
      uVar3 = *(uint *)(puVar1 + 0x10);
    }
    *(int *)(puVar1 + 0x21) = iVar5 + 1;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    uStack_44 = 0x11;
    if ((uVar3 & 0x40) != 0) {
      uStack_44 = 3;
    }
    uStack_45 = 0x17;
    func_0x0001082eb098(puVar1 + 0x20,&UNK_10f48a27f,&uStack_44,&uStack_45);
    uVar3 = *(uint *)(puVar1 + 0x10);
  }
  if ((uVar3 >> 5 & 1) != 0) {
    uStack_4c = 0;
    uStack_4d = 0xd;
    func_0x0001082eb028(puVar1 + 0x20,&UNK_10f48a28b,&uStack_4c,&uStack_4d);
  }
  FUN_10829e324(puVar1 + 5,puVar1[0x20],*(undefined4 *)(puVar1 + 0x21));
  FUN_10829e324(puVar2 + 2,&PTR_DAT_110a3b660,1);
  return puVar1;
}



/* Entry: 10830c634; end: 10830c70f;  */

long * FUN_10830c634(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = param_1;
  func_0x00010830cff0(param_1,0x91);
  lVar3 = param_1[1];
  param_1[1] = (long)(plVar1 + 0x11);
  plVar1[0x11] = (long)FUN_10830cdd4;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 8;
  *(char *)(lVar2 + 8) = (char)plVar1 - (char)(int)lVar3;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  *(undefined4 *)(plVar1 + 1) = 0x40;
  lVar2 = param_3[1];
  lVar3 = *param_3;
  plVar1[5] = 0;
  plVar1[4] = 0;
  plVar1[7] = 0;
  plVar1[6] = 0;
  *(undefined4 *)(plVar1 + 8) = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  *plVar1 = (long)&PTR_FUN_110a3b6d0;
  *(undefined1 *)((long)plVar1 + 0x44) = 0;
  lVar7 = param_2[1];
  lVar6 = *param_2;
  lVar5 = param_2[3];
  lVar4 = param_2[2];
  plVar1[0xd] = param_2[4];
  plVar1[10] = lVar7;
  plVar1[9] = lVar6;
  plVar1[0xc] = lVar5;
  plVar1[0xb] = lVar4;
  plVar1[0xf] = lVar2;
  plVar1[0xe] = lVar3;
  *(undefined4 *)(plVar1 + 0x10) = 0;
  *plVar1 = (long)&PTR_FUN_110a3b760;
  FUN_10829e324(plVar1 + 2,&PTR_DAT_110a3b790,1);
  return plVar1;
}



/* Entry: 10830c710; end: 10830c7ab;  */

undefined8
FUN_10830c710(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined2 uStack_38;
  
  uStack_50 = 0;
  uStack_4c = 0x3210;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x3210;
  uStack_60 = param_1[5];
  uStack_58 = 0;
  uVar1 = *param_1;
  auStack_68[0] = param_4;
  func_0x0001082c8a70(auStack_70);
  FUN_10830c7ac(uVar1,auStack_68,auStack_70,param_3);
  func_0x00010830cfd8();
  FUN_1082764bc(&uStack_58);
  return param_3;
}



/* Entry: 10830c7ac; end: 10830c7d3;  */

void FUN_10830c7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x00010830ceac(param_1,&uStack_28);
  return;
}



/* Entry: 10830c7d4; end: 10830c9c3;  */

void FUN_10830c7d4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long lVar2;
  long extraout_x9_01;
  long lVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_2[5];
  FUN_1082dd9a4(param_2[2],lVar3);
  uVar1 = param_2[3];
  func_0x00010828bb5c(uVar1,0,1,0x10,&UNK_10f488a2d,&uStack_38);
  *(int *)(param_1 + 6) = (int)uVar1;
  uVar1 = param_2[3];
  func_0x00010828bb5c(uVar1,0,1,0xe,"translate",&uStack_40);
  *(int *)((long)param_1 + 0x34) = (int)uVar1;
  FUN_10828bae8(*param_2,&UNK_10f48a220);
  FUN_10828bae8(*param_2,&UNK_10f48a251);
  (**(code **)(*param_1 + 0x20))
            (param_1,param_2[4],lVar3,*param_2,param_2[2],param_3,in_x6,in_x7,uStack_40,uStack_38);
  if ((*(byte *)(lVar3 + 0x80) >> 3 & 1) == 0) {
    uVar1 = param_2[3];
    func_0x00010828bb5c(uVar1,0,2,0x17,&DAT_10f68f0f0,auStack_48);
    *(int *)(param_1 + 7) = (int)uVar1;
    func_0x00010830cfc0();
    lVar3 = extraout_x8;
    lVar2 = extraout_x9;
  }
  else {
    func_0x00010830cfc0();
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  FUN_10828bae8(lVar3 + lVar2,&UNK_10f489ed1);
  func_0x00010830cfc0();
  FUN_10828bae8(extraout_x8_01 + extraout_x9_01,&UNK_10f481ead);
  return;
}



/* Entry: 10830c9c4; end: 10830c9e7;  */

undefined8 * FUN_10830c9c4(long param_1)

{
  func_0x00010830cfe4(*(undefined8 *)(param_1 + -0x119));
  return (undefined8 *)(param_1 + -0x119);
}



/* Entry: 10830c9e8; end: 10830ca9f;  */

void FUN_10830c9e8(long *param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar3 = (long *)(*param_1 + (long)iVar2 * 0x18);
    *plVar3 = param_2;
    *(undefined4 *)(plVar3 + 1) = param_3;
    *(undefined1 *)((long)plVar3 + 0xc) = param_4;
    *(undefined4 *)(plVar3 + 2) = 1;
  }
  else {
    uVar1 = 1;
    plVar3 = param_1;
    FUN_1082eb3b0(0x3ff8000000000000,param_1,1);
    plVar4 = plVar3 + (long)(int)param_1[1] * 3;
    *plVar4 = param_2;
    *(undefined4 *)(plVar4 + 1) = param_3;
    *(undefined1 *)((long)plVar4 + 0xc) = param_4;
    *(undefined4 *)(plVar4 + 2) = 1;
    FUN_1082eb3d4(param_1,plVar3,uVar1);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  return;
}



/* Entry: 10830caa0; end: 10830cacf;  */

undefined8 * FUN_10830caa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3b630;
  FUN_1082f4638(param_1 + 0x20);
  return param_1;
}



/* Entry: 10830cad0; end: 10830cae3;  */

void FUN_10830cad0(void)

{
  undefined1 *unaff_x19;
  
  FUN_10830caa0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}


