/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0064771c; end: 006478c7;  */

bool FUN_0064771c(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x006484b8();
  iVar8 = 1;
  switch((param_2 - param_1) / 0x30) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0064832c();
    if (iVar8 != 0) {
      func_0x00648538();
    }
    break;
  case 3:
    FUN_00647598();
    break;
  case 4:
    func_0x00647618();
    break;
  case 5:
    FUN_0064767c();
    break;
  default:
    FUN_00647598();
    lVar7 = 0;
    iVar8 = 0;
    puVar2 = (undefined8 *)(unaff_x19 + 0x90);
    puVar5 = (undefined8 *)(unaff_x19 + 0x60);
    while (puVar4 = puVar2, puVar4 != unaff_x20) {
      puVar2 = puVar4;
      FUN_006478c8(puVar4,puVar5);
      if ((int)puVar2 != 0) {
        uStack_78 = puVar4[1];
        uStack_80 = *puVar4;
        uStack_70 = puVar4[2];
        *puVar4 = 0;
        puVar4[1] = 0;
        uStack_60 = puVar4[4];
        uStack_68 = puVar4[3];
        puVar4[2] = 0;
        puVar4[3] = 0;
        uStack_58 = puVar4[5];
        puVar4[4] = 0;
        puVar4[5] = 0;
        lVar6 = lVar7;
        do {
          lVar1 = unaff_x19 + lVar6;
          func_0x00647970(lVar1 + 0x90,lVar1 + 0x60);
          if (lVar6 == -0x60) break;
          uVar3 = 0;
          FUN_006478c8(&uStack_80,lVar1 + 0x30);
          lVar6 = lVar6 + -0x30;
        } while ((uVar3 & 1) != 0);
        func_0x00647970();
        iVar8 = iVar8 + 1;
        func_0x00648450();
        if (iVar8 == 8) {
          return puVar4 + 6 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 0x30;
      puVar5 = puVar4;
      puVar2 = puVar4 + 6;
    }
  }
  return true;
}



/* Entry: 006478c8; end: 006479c3;  */

bool FUN_006478c8(uint param_1)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00648460();
  func_0x004278bc();
  if ((param_1 >> 7 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = unaff_x20 + 0x18;
    func_0x004278bc(lVar2,unaff_x19 + 0x18);
    bVar1 = (char)lVar2 < '\0';
  }
  return bVar1;
}



/* Entry: 006479c4; end: 00647b0f;  */

void FUN_006479c4(ulong param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (1 < param_2) {
    lVar3 = (long)((long)param_3 - param_1) / 0x30;
    uVar9 = param_2 - 2U >> 1;
    if (lVar3 <= (long)uVar9) {
      uVar2 = lVar3 << 1 | 1;
      puVar6 = (undefined8 *)(param_1 + uVar2 * 0x30);
      uVar1 = lVar3 * 2 + 2;
      uVar5 = param_1;
      puVar8 = puVar6;
      uVar10 = uVar2;
      if ((long)uVar1 < param_2) {
        func_0x006484c4();
        puVar8 = puVar6 + 6;
        uVar10 = uVar1;
        if ((int)uVar5 == 0) {
          puVar8 = puVar6;
          uVar10 = uVar2;
        }
      }
      func_0x006483b4();
      FUN_006478c8();
      if ((uVar5 & 1) == 0) {
        uStack_88 = param_3[1];
        uStack_90 = *param_3;
        uStack_80 = param_3[2];
        *param_3 = 0;
        param_3[1] = 0;
        uStack_70 = param_3[4];
        uStack_78 = param_3[3];
        param_3[2] = 0;
        param_3[3] = 0;
        uStack_68 = param_3[5];
        param_3[4] = 0;
        param_3[5] = 0;
        do {
          puVar6 = puVar8;
          iVar4 = (int)param_3;
          func_0x006484d0();
          if ((long)uVar9 < (long)uVar10) break;
          uVar2 = uVar10 << 1 | 1;
          puVar7 = (undefined8 *)(param_1 + uVar2 * 0x30);
          uVar1 = uVar10 * 2 + 2;
          puVar8 = puVar7;
          uVar10 = uVar2;
          if ((long)uVar1 < param_2) {
            func_0x006483b4();
            FUN_006478c8();
            puVar8 = puVar7 + 6;
            uVar10 = uVar1;
            if (iVar4 == 0) {
              puVar8 = puVar7;
              uVar10 = uVar2;
            }
          }
          puVar7 = puVar8;
          FUN_006478c8(puVar8,&uStack_90);
          param_3 = puVar6;
        } while ((int)puVar7 == 0);
        func_0x00647970(puVar6,&uStack_90);
        func_0x00648450();
      }
    }
  }
  return;
}



/* Entry: 00647b10; end: 00647da3;  */

void FUN_00647b10(uint param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x9;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  for (uVar14 = (ulong)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU)); uVar14 != 0;
      uVar14 = uVar14 - 1) {
    func_0x006483cc();
    iVar4 = 0x8cf9c1;
    func_0x006484e0("name",4);
    if (iVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_d0,*param_2);
    }
    func_0x006483cc();
    iVar4 = 0x8cf5fc;
    func_0x006484e0("type",4);
    if (iVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_b8,*param_2);
    }
    func_0x006483cc();
    iVar4 = 0x910054;
    func_0x006484e0(&UNK_00910054,7);
    if (iVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_a0,*param_2);
    }
    param_2 = param_2 + 1;
  }
  plVar12 = *(long **)(param_4 + 0x10);
  uVar14 = plVar12[1];
  puVar7 = (ulong *)(plVar12 + 2);
  if (uVar14 < *puVar7) {
    FUN_00647da4(uVar14,&uStack_d0);
    lVar10 = uVar14 + 0x48;
    plVar12[1] = lVar10;
  }
  else {
    lVar10 = uVar14 - *plVar12;
    uVar14 = lVar10 / 0x48 + 1;
    if (0x38e38e38e38e38e < uVar14) {
      FUN_00647dfc();
LAB_00647d70:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x647d74);
      (*pcVar3)();
    }
    uVar2 = (long)(*puVar7 - *plVar12) / 0x48;
    uVar9 = uVar2 * 2;
    if (uVar9 < uVar14 || uVar9 - uVar14 == 0) {
      uVar9 = uVar14;
    }
    if (0x1c71c71c71c71c6 < uVar2) {
      uVar9 = 0x38e38e38e38e38e;
    }
    puStack_68 = puVar7;
    if (uVar9 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x38e38e38e38e38e < uVar9) {
        FUN_0040cee8();
        goto LAB_00647d70;
      }
      lVar5 = uVar9 * 0x48;
      __Znwm();
    }
    lVar10 = lVar5 + lVar10;
    lVar11 = lVar5 + uVar9 * 0x48;
    lStack_88 = lVar5;
    lStack_80 = lVar10;
    lStack_78 = lVar10;
    lStack_70 = lVar11;
    FUN_00647da4(lVar10,&uStack_d0);
    lVar6 = *plVar12;
    lVar1 = plVar12[1];
    lVar13 = lVar10 + ((lVar1 - lVar6) / -0x48) * 0x48;
    lVar8 = lVar13;
    lVar5 = lVar6;
    while (lVar5 != lVar1) {
      func_0x00648380(lVar8);
      uVar16 = *(undefined8 *)(extraout_x9 + 0x38);
      uVar15 = *(undefined8 *)(extraout_x9 + 0x30);
      *(undefined8 *)(extraout_x8 + 0x40) = *(undefined8 *)(extraout_x9 + 0x40);
      *(undefined8 *)(extraout_x8 + 0x38) = uVar16;
      *(undefined8 *)(extraout_x8 + 0x30) = uVar15;
      *(undefined8 *)(extraout_x9 + 0x38) = 0;
      *(undefined8 *)(extraout_x9 + 0x40) = 0;
      *(undefined8 *)(extraout_x9 + 0x30) = 0;
      lVar8 = extraout_x8 + 0x48;
      lVar5 = extraout_x9 + 0x48;
    }
    for (; lVar6 != lVar1; lVar6 = lVar6 + 0x48) {
      func_0x00647e50();
    }
    lVar10 = lVar10 + 0x48;
    lStack_88 = *plVar12;
    *plVar12 = lVar13;
    plVar12[1] = lVar10;
    lStack_70 = plVar12[2];
    plVar12[2] = lVar11;
    lStack_80 = lStack_88;
    lStack_78 = lStack_88;
    func_0x00647e08(&lStack_88);
  }
  plVar12[1] = lVar10;
  func_0x00647e50(&uStack_d0);
  func_0x00648404(0,unaff_x30);
  return;
}



/* Entry: 00647da4; end: 00647dfb;  */

void FUN_00647da4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x006484b8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 00647dfc; end: 00647e07;  */

long * FUN_00647dfc(long *param_1)

{
  long lVar1;
  
  func_0x00648514();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x48;
    func_0x00647e50();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00647e08; end: 00647e7f;  */

long * FUN_00647e08(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x48;
    func_0x00647e50();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00647e80; end: 00647e97;  */

void FUN_00647e80(void)

{
  return;
}



/* Entry: 00647e98; end: 00647f0b;  */

long * FUN_00647e98(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      func_0x00647e50();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 00647f0c; end: 00647f67;  */

void FUN_00647f0c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x30;
      func_0x0064799c();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 00647f68; end: 00647fdf;  */

undefined8 * FUN_00647f68(undefined8 *param_1,undefined8 param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_0090ffe5;
  uStack_28 = 0x53;
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  FUN_00456d78(param_1 + 9,&puStack_30);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 00647fe0; end: 00647fe3;  */

undefined8 * FUN_00647fe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 00647fe4; end: 00647ff7;  */

void FUN_00647fe4(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00647ff8; end: 00648027;  */

void FUN_00647ff8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__15mutex4lockEv(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(uVar1);
  return;
}



/* Entry: 00648028; end: 0064810b;  */

void FUN_00648028(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_006490e4(), (int)lVar1 != 0)) {
    lVar1 = *param_1;
    FUN_00648c94(lVar1);
    FUN_00644fe8(&lStack_60);
    FUN_00644fe8(&lStack_48,lVar1,1);
    if ((char)param_1[7] == '\x01') {
      func_0x00647970(param_1 + 1,&lStack_60);
    }
    else {
      param_1[2] = lStack_58;
      param_1[1] = lStack_60;
      param_1[3] = lStack_50;
      lStack_58 = 0;
      lStack_50 = 0;
      lStack_60 = 0;
      param_1[5] = lStack_40;
      param_1[4] = lStack_48;
      param_1[6] = lStack_38;
      lStack_48 = 0;
      lStack_40 = 0;
      lStack_38 = 0;
      *(undefined1 *)(param_1 + 7) = 1;
    }
    func_0x00648450();
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[7] == '\x01') {
    func_0x0064799c();
    *(undefined1 *)(plVar2 + 6) = 0;
  }
  return;
}



/* Entry: 0064810c; end: 0064814f;  */

void FUN_0064810c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x0064799c();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 00648150; end: 006481bb;  */

undefined8 * FUN_00648150(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0064810c(param_1 + 2);
  }
  func_0x00648130((ulong)&uStack_60 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  func_0x00648130(param_1 + 2);
  return param_1;
}



/* Entry: 006481bc; end: 0064826f;  */

void FUN_006481bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_2 + 7) & 1) == 0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_2[3] = 0;
    param_2[4] = 0;
    uVar2 = param_2[6];
    param_2[5] = 0;
    param_2[6] = 0;
    *param_1 = *param_2;
    param_1[3] = uVar1;
    param_1[2] = uVar4;
    param_1[1] = uVar3;
    param_1[6] = uVar2;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  func_0x00648338();
  return;
}



/* Entry: 00648270; end: 0064829b;  */

long FUN_00648270(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_00647f0c(param_1);
  }
  return param_1;
}



/* Entry: 0064829c; end: 0064832b;  */

undefined8 * FUN_0064829c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 1,param_2 + 1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_1 + 4,param_2 + 4);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return param_1;
}



/* Entry: 0064832c; end: 00648543;  */

bool FUN_0064832c(void)

{
  bool bVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20;
  func_0x00648460();
  uVar2 = (uint)lVar3;
  func_0x004278bc();
  if ((uVar2 >> 7 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = unaff_x20 + 0x18;
    func_0x004278bc(lVar3,unaff_x19 + 0x18);
    bVar1 = (char)lVar3 < '\0';
  }
  return bVar1;
}



/* Entry: 00648544; end: 00648983;  */

undefined8 *
FUN_00648544(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar6;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte bStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined5 uStack_77;
  undefined8 uStack_72;
  undefined2 uStack_6a;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  bVar1 = *(byte *)((long)param_4 + 0x16);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_79 = 0;
  if (bVar1 == 1) {
    plVar2 = (long *)*param_2;
    (**(code **)(*plVar2 + 0x38))();
    if ((int)plVar2 != 0) {
      param_5 = 1;
      uStack_78 = 1;
    }
  }
  (**(code **)(*(long *)*param_2 + 0x10))(&uStack_b0,(long *)*param_2,param_5);
  if ((bStack_98 & 1) == 0) {
    if (((int)uStack_b0 == 1) && ((bVar1 & 1) != 0)) {
      (**(code **)(*(long *)*param_2 + 0x10))(&uStack_d0,(long *)*param_2,1);
      if (((bStack_98 & 1) == 0) && (bStack_b8 != 0)) {
        uStack_a8 = uStack_c8;
        uStack_b0 = uStack_d0;
        uStack_a0 = uStack_c0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d0 = 0;
        bStack_98 = 1;
      }
      else if (bStack_98 == 0) {
        if ((bStack_b8 & 1) == 0) {
          uStack_b0 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_d0);
        }
      }
      else if (bStack_b8 == 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_d0);
        bStack_98 = 0;
      }
      else {
        FUN_004575b8(&uStack_b0,&uStack_d0);
      }
      FUN_00648afc(&uStack_d0);
      uStack_78 = 1;
      if (bStack_98 == 1) goto LAB_006485e4;
    }
    FUN_00425cb4(&uStack_d0,&UNK_0091005c);
    FUN_00641f40(0,1,&uStack_d0);
    func_0x00648ba0();
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    bStack_b8 = 0;
  }
  else {
LAB_006485e4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_90,&uStack_b0);
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_c0 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    uStack_90 = 0;
    bStack_b8 = uStack_78;
  }
  bVar1 = bStack_b8;
  FUN_00648afc(&uStack_b0);
  func_0x00648b98();
  param_1[0x36] = uStack_c8;
  param_1[0x35] = uStack_d0;
  param_1[0x37] = uStack_c0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  *(byte *)(param_1 + 0x38) = bVar1;
  func_0x00648ba0();
  *param_1 = &PTR_FUN_00a0c9f0;
  param_1[0x39] = &PTR_DAT_00a0ca20;
  uStack_88 = param_4[1];
  uStack_90 = *param_4;
  uStack_80 = *(undefined4 *)(param_4 + 2);
  uStack_7c = 0;
  uStack_72 = *(undefined8 *)((long)param_4 + 0x1e);
  uVar6 = *(undefined8 *)((long)param_4 + 0x16);
  uStack_79 = (undefined1)((ulong)uVar6 >> 8);
  uStack_78 = (undefined1)((ulong)uVar6 >> 0x10);
  uStack_77 = (undefined5)((ulong)uVar6 >> 0x18);
  uStack_6a = *(undefined2 *)((long)param_4 + 0x26);
  uStack_7a = 0;
  FUN_0063faf4(param_1,param_1 + 0x35,&uStack_90,param_6);
  *param_1 = &PTR_FUN_00a0c9f0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = &PTR_DAT_00a0ca20;
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[0x3d] = param_2[1];
  param_1[0x3c] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x00648b80();
    } while (extraout_w10 != 0);
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  pcVar3 = segment_command_00000020.segname;
  __Znwm();
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  pcVar3[0xc] = '\0';
  pcVar3[0xd] = '\0';
  pcVar3[0xe] = '\0';
  pcVar3[0xf] = '\0';
  *(qword *)(pcVar3 + 0x10) = 0;
  *(undefined ***)pcVar3 = &PTR_FUN_00a0cae0;
  *(undefined ***)(pcVar3 + 0x18) = &PTR_DAT_00a0ca48;
  *(undefined8 **)(pcVar3 + 0x20) = param_1;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  param_1[0x3e] = pcVar3 + 0x18;
  param_1[0x3f] = pcVar3;
  FUN_00648b1c(&uStack_90);
  FUN_00648b1c(&uStack_b0);
  if ((*(byte *)((long)param_4 + 1) & 1) == 0) {
    FUN_00425cb4(&uStack_90,"*");
    func_0x004618e0(auStack_e8,&uStack_90,1);
    FUN_0064315c(&uStack_b0,param_1,param_1 + 0x39,auStack_e8,0,param_3,"",0);
    FUN_0042771c(param_1 + 0x3a,&uStack_b0);
    FUN_00648ad4(&uStack_b0);
    func_0x00459128(auStack_e8);
    func_0x00648b98();
  }
  plVar2 = (long *)*param_2;
  uStack_88 = param_1[0x3f];
  uStack_90 = param_1[0x3e];
  if (param_1[0x3f] != 0) {
    do {
      func_0x00648b80();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar2 + 0x20))();
  puVar4 = &uStack_90;
  FUN_00427eac();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x1a1) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    FUN_00648afc(&uStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
    __Unwind_Resume();
    *puVar4 = &PTR_FUN_00a0c9f0;
    puVar4[0x39] = &PTR_DAT_00a0ca20;
    FUN_00642d90(puVar4 + 0x3a);
    plVar2 = (long *)puVar4[0x3c];
    if (puVar4[0x3f] != 0) {
      do {
        func_0x00648b80();
      } while (extraout_w10_01 != 0);
    }
    (**(code **)(*plVar2 + 0x28))();
    func_0x00648b90();
    FUN_00648b1c(puVar4 + 0x3e);
    FUN_00425d5c(puVar4 + 0x3c);
    FUN_00648ad4(puVar4 + 0x3a);
    FUN_0064072c(puVar4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 0x35);
    return puVar4;
  }
  return param_1;
}



/* Entry: 00648984; end: 00648a27;  */

undefined8 * FUN_00648984(undefined8 *param_1)

{
  long *plVar1;
  int extraout_w10;
  
  *param_1 = &PTR_FUN_00a0c9f0;
  param_1[0x39] = &PTR_DAT_00a0ca20;
  FUN_00642d90(param_1 + 0x3a);
  plVar1 = (long *)param_1[0x3c];
  if (param_1[0x3f] != 0) {
    do {
      func_0x00648b80();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x28))();
  func_0x00648b90();
  FUN_00648b1c(param_1 + 0x3e);
  FUN_00425d5c(param_1 + 0x3c);
  FUN_00648ad4(param_1 + 0x3a);
  FUN_0064072c(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x35);
  return param_1;
}



/* Entry: 00648a28; end: 00648a33;  */

undefined8 * FUN_00648a28(undefined8 *param_1)

{
  long *plVar1;
  int extraout_w10;
  
  *param_1 = &PTR_FUN_00a0c9f0;
  param_1[0x39] = &PTR_DAT_00a0ca20;
  FUN_00642d90(param_1 + 0x3a);
  plVar1 = (long *)param_1[0x3c];
  if (param_1[0x3f] != 0) {
    do {
      func_0x00648b80();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x28))();
  func_0x00648b90();
  FUN_00648b1c(param_1 + 0x3e);
  FUN_00425d5c(param_1 + 0x3c);
  FUN_00648ad4(param_1 + 0x3a);
  FUN_0064072c(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x35);
  return param_1;
}



/* Entry: 00648a34; end: 00648a47;  */

void FUN_00648a34(void)

{
  FUN_00648984();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00648a48; end: 00648a4f;  */

void FUN_00648a48(long param_1)

{
  FUN_00648984(param_1 + -0x1c8);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00648a50; end: 00648abb;  */

void FUN_00648a50(long param_1)

{
  long *plVar1;
  int extraout_w10;
  
  plVar1 = *(long **)(param_1 + 0x1e0);
  if (*(long *)(param_1 + 0x1f8) != 0) {
    do {
      func_0x00648b80();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x18))();
  func_0x00648b90();
  return;
}



/* Entry: 00648abc; end: 00648ad3;  */

void FUN_00648abc(long param_1)

{
  long *plVar1;
  int extraout_w10;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x00648b80();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar1 + 0x18))();
  func_0x00648b90();
  return;
}



/* Entry: 00648ad4; end: 00648afb;  */

undefined8 FUN_00648ad4(undefined8 param_1)

{
  FUN_00642d90();
  return param_1;
}



/* Entry: 00648afc; end: 00648b1b;  */

void FUN_00648afc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 00648b1c; end: 00648b47;  */

long FUN_00648b1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 00648b48; end: 00648b4b;  */

void FUN_00648b48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cae0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00648b4c; end: 00648b5f;  */

void FUN_00648b4c(void)

{
  func_0x00648b70();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00648b60; end: 00648ba7;  */

void FUN_00648b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00648b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00648ba8; end: 00648c93;  */

undefined8 * FUN_00648ba8(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  *param_1 = &PTR_FUN_00a0cb30;
  param_1[1] = param_2;
  param_1[3] = 0x32aaaba7;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  lVar3 = param_3;
  for (lVar2 = 0; lVar3 = lVar3 + -1, lStack_48 = param_4, param_4 != lVar2; lVar2 = lVar2 + 1) {
    iVar1 = (int)*(char *)(lVar3 + param_4);
    FUN_00649338();
    lStack_48 = lVar2;
    if (iVar1 == 0) break;
  }
  lStack_48 = param_4 - lStack_48;
  lStack_50 = param_3;
  FUN_00456d78(param_1 + 0xb,&lStack_50);
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((*(byte *)(param_1[1] + 0x16c) & 1) == 0) {
    FUN_00648c94(param_1);
  }
  return param_1;
}



/* Entry: 00648c94; end: 00648cc3;  */

long FUN_00648c94(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_00648da0(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
  }
  return lVar1;
}



/* Entry: 00648cc4; end: 00648d17;  */

void FUN_00648cc4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_00a0cb30;
  param_1[1] = uVar1;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0x32aaaba7;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = uVar2;
  param_1[0xb] = uVar1;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0x10] = uVar1;
  *(undefined8 *)(param_2 + 0x80) = 0;
  return;
}



/* Entry: 00648d18; end: 00648d5b;  */

undefined8 * FUN_00648d18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 00648d5c; end: 00648d87;  */

void FUN_00648d5c(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    _sqlite3_finalize();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



/* Entry: 00648d88; end: 00648d8b;  */

undefined8 * FUN_00648d88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 00648d8c; end: 00648d9f;  */

void FUN_00648d8c(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00648da0; end: 00648e77;  */

void FUN_00648da0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_00640844(*(undefined8 *)(param_1 + 8),1);
  uStack_50 = 0;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x188);
  lVar2 = param_1 + 0x58;
  lVar4 = (long)*(char *)(param_1 + 0x6f);
  lVar3 = lVar2;
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 0x60);
    lVar3 = *(long *)(param_1 + 0x58);
  }
  _sqlite3_prepare_v2(uVar1,lVar3,lVar4,&uStack_48,&uStack_50);
  if ((int)uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_00457d70();
    lStack_40 = lVar2;
    lStack_38 = lVar3;
    func_0x00461914(&UNK_0091007b);
    FUN_00721c60(auStack_68);
    FUN_00641f40(uVar5,uVar1,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  *(undefined8 *)(param_1 + 0x80) = uStack_48;
  _sqlite3_bind_parameter_count();
  *(long *)(param_1 + 0x78) = (long)(int)uStack_48;
  return;
}



/* Entry: 00648e78; end: 00648e9f;  */

void FUN_00648e78(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00644d68(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(unaff_x19 + 0x40);
  if (lVar1 != *(long *)(unaff_x19 + 0x48)) {
    if (*(char *)(lVar1 + 0x17) < '\0') {
      if (*(long *)(lVar1 + 8) == 0) goto LAB_00643800;
    }
    else if (*(char *)(lVar1 + 0x17) == '\0') goto LAB_00643800;
    FUN_00643814();
  }
LAB_00643800:
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(unaff_x19 + 0x58);
  return;
}



/* Entry: 00648ea0; end: 00648ef3;  */

void FUN_00648ea0(long *param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 3);
  func_0x00648e80(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00648edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 00648ef4; end: 00648f63;  */

void FUN_00648ef4(int param_1)

{
  func_0x006493a0();
  _sqlite3_bind_int64();
  if (param_1 != 0) {
    func_0x0064935c();
    func_0x00649398();
    func_0x006493f4();
    func_0x00461914(&UNK_00910092);
    func_0x00649378();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 00648f64; end: 00648fdf;  */

void FUN_00648f64(int param_1)

{
  FUN_00648c94();
  func_0x00649404();
  _sqlite3_bind_text();
  if (param_1 != 0) {
    func_0x006493ac();
    func_0x00649398();
    func_0x00649418();
    func_0x00461914(&UNK_009100b3);
    func_0x006493e4();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 00648fe0; end: 00648fef;  */

void FUN_00648fe0(int param_1)

{
  FUN_00648c94();
  func_0x00649404();
  _sqlite3_bind_blob();
  if (param_1 != 0) {
    func_0x006493ac();
    func_0x00649398();
    func_0x00649418();
    func_0x00461914(&UNK_009100de);
    func_0x006493e4();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 00648ff0; end: 0064907b;  */

void FUN_00648ff0(int param_1)

{
  FUN_00648c94();
  func_0x00649404();
  _sqlite3_bind_blob();
  if (param_1 != 0) {
    func_0x006493ac();
    func_0x00649398();
    func_0x00649418();
    func_0x00461914(&UNK_009100de);
    func_0x006493e4();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 0064907c; end: 006490e3;  */

void FUN_0064907c(int param_1)

{
  func_0x006493a0();
  _sqlite3_bind_null();
  if (param_1 != 0) {
    func_0x0064935c();
    func_0x00649398();
    func_0x006493f4();
    func_0x00461914(&UNK_00910107);
    func_0x00649378();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 006490e4; end: 00649337;  */

undefined8 FUN_006490e4(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  uint *puStack_130;
  undefined8 uStack_128;
  undefined1 auStack_98 [24];
  uint *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  uint *puStack_48;
  
  puVar5 = auStack_160;
  if ((param_1[0x1c] & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  FUN_00640844(*(undefined8 *)(param_1 + 2),2);
  puVar2 = param_1;
  FUN_00648c94();
  puVar7 = (uint *)0x0;
  puStack_130 = (uint *)((long)&MACH_HEADER.reserved + 2);
  for (iVar9 = -5; iVar9 != 0; iVar9 = iVar9 + 1) {
    puVar7 = puVar2;
    _sqlite3_step();
    if ((int)puVar7 != 5) {
      if ((int)puVar7 == 0x1b0a) {
        _sqlite3_db_handle();
        _sqlite3_db_filename();
        uStack_128 = 0;
        puStack_130 = puVar2;
        func_0x00461914(&UNK_0090fcf5);
        FUN_00721c60(auStack_98);
        puVar7 = puVar2;
        _stat(puVar2,&puStack_130);
        puVar3 = puVar7;
        ___error();
        uVar6 = *puVar3;
        puVar4 = auStack_98;
        _stat(puVar4,&puStack_130);
        if ((int)puVar7 != 0) {
          uVar8 = *(undefined8 *)(param_1 + 2);
          puVar7 = param_1 + 0x16;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          func_0x00649398();
          uStack_60 = (ulong)((int)puVar4 == 0);
          uStack_78 = 0;
          uStack_68 = 0;
          uStack_58 = 0;
          puStack_80 = puVar2;
          uStack_70 = (ulong)uVar6;
          puStack_50 = puVar5;
          puStack_48 = puVar7;
          func_0x00461914(&UNK_00910128);
          FUN_00721c60(auStack_148);
          FUN_00641f40(uVar8,"",auStack_148);
          func_0x00649370();
          func_0x00649388();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
        bVar1 = false;
        puVar7 = (uint *)0x1b0a;
        goto LAB_00649288;
      }
      break;
    }
    func_0x00640f88(&puStack_130);
    puStack_130 = (uint *)((long)puStack_130 << 1);
  }
  uVar6 = (uint)puVar7;
  bVar1 = uVar6 == 100;
  if ((uVar6 & 0xfffffffe) == 100) {
    if (uVar6 != 100) {
LAB_00649278:
      func_0x00648e80(param_1);
      return 0;
    }
  }
  else {
LAB_00649288:
    uVar8 = *(undefined8 *)(param_1 + 2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&puStack_80,param_1 + 0x16);
    FUN_00461b38(&puStack_130,&UNK_00910177,&puStack_80);
    FUN_00641f40(uVar8,puVar7,&puStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_80);
    if (!bVar1) goto LAB_00649278;
  }
  return 1;
}



/* Entry: 00649338; end: 0064942b;  */

bool FUN_00649338(uint param_1)

{
  if (0x7f < param_1) {
    ___maskrune();
    return param_1 != 0;
  }
  return (*(uint *)(PTR___DefaultRuneLocale_00999f28 + (ulong)param_1 * 4 + 0x3c) & 0x4000) != 0;
}



/* Entry: 0064942c; end: 00649517;  */

long * FUN_0064942c(long *param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar5;
  long *plVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long lVar8;
  int unaff_w21;
  long *plVar9;
  long lVar10;
  undefined1 auStack_1e8 [24];
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_188;
  
  plVar5 = param_1;
  func_0x006497e4();
  *plVar5 = param_2;
  do {
    iVar7 = iRam0000000000b6c6a8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb6c6a8,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      iRam0000000000b6c6a8 = iRam0000000000b6c6a8 + 1;
    }
  } while (cVar2 != '\0');
  *(int *)(param_1 + 1) = iVar7;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  lVar10 = param_3[1];
  lVar8 = *param_3;
  param_1[4] = param_3[2];
  param_1[3] = lVar10;
  param_1[2] = lVar8;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_00649708(param_1 + 5,1);
  func_0x00461914(&UNK_00910189);
  func_0x00649780();
  func_0x00649794();
  iVar7 = extraout_w10;
  if (in_NG == in_OV) {
    iVar7 = unaff_w21;
  }
  func_0x00649758();
  func_0x006497d4();
  func_0x00649748();
  func_0x006497a8();
  plVar5 = (long *)*param_1;
  FUN_00643870();
  func_0x006497b0(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00649748();
    func_0x006497a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
    __Unwind_Resume();
    plVar6 = plVar5;
    func_0x006497e4();
    if ((*(byte *)((long)plVar6 + 0xc) & 1) == 0) {
      lVar8 = *plVar5;
      func_0x00461914(&UNK_00910198);
      func_0x00649780();
      func_0x00649794();
      iVar7 = extraout_w10_00;
      if (in_NG == in_OV) {
        iVar7 = unaff_w21;
      }
      func_0x00649758();
      FUN_006405bc(lVar8);
      func_0x00649748();
      func_0x006497a8();
      FUN_0064397c(*plVar5);
    }
    plVar6 = plVar5 + 2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x006497b0(extraout_x8_00);
    param_1 = plVar5;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      if (iVar7 == 0) {
        __Unwind_Resume();
      }
      func_0x0040cf10();
      func_0x006497e4();
      plVar5 = plVar6;
      uStack_188 = extraout_x8_01;
      if ((*(byte *)((long)plVar6 + 0xc) & 1) == 0) {
        uStack_1d0 = (ulong)*(uint *)(plVar6 + 1);
        uStack_1c8 = 0;
        func_0x00461914(&UNK_009101b9);
        func_0x00649780();
        func_0x00649794();
        iVar7 = extraout_w10_01;
        if (in_NG == in_OV) {
          iVar7 = unaff_w21;
        }
        func_0x00649758();
        func_0x006497d4();
        func_0x00649748();
        func_0x006497a8();
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        plVar5 = (long *)*plVar6;
        FUN_006438e0();
        if (*(char *)((long)plVar6 + 0x27) < '\0') {
          if (plVar6[3] == 0) goto LAB_006496bc;
        }
        else if (*(char *)((long)plVar6 + 0x27) == '\0') goto LAB_006496bc;
        FUN_006428a8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e8,*plVar6 + 0xf8);
        func_0x00649794();
        uVar1 = extraout_x11;
        puVar4 = extraout_x10;
        if (in_NG == in_OV) {
          uVar1 = extraout_x8_02;
          puVar4 = auStack_1e8;
        }
        lVar8 = (long)*(char *)((long)plVar6 + 0x27);
        if (lVar8 < 0) {
          plVar9 = (long *)plVar6[2];
          lVar8 = plVar6[3];
        }
        else {
          plVar9 = plVar6 + 2;
        }
        plVar6 = plVar6 + 5;
        FUN_006407a0(plVar6);
        plVar5 = (long *)0xb6c688;
        iVar7 = 0;
        (**(code **)(lRam0000000000b6c688 + 0x30))(0xb6c688,0,puVar4,uVar1,plVar9,lVar8,2,plVar6);
        func_0x006497a8();
      }
LAB_006496bc:
      func_0x006497b0(uStack_188);
      if ((bool)in_ZR) {
        return plVar5;
      }
      ___stack_chk_fail();
      func_0x00649748();
      func_0x006497a8();
      __Unwind_Resume();
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined1 *)(plVar5 + 2) = 0;
      if (iVar7 == 1) {
        plVar6 = plVar5;
        FUN_00716c1c();
        plVar5[1] = (long)plVar6;
        *(undefined1 *)(plVar5 + 2) = 1;
      }
      return plVar5;
    }
  }
  return param_1;
}



/* Entry: 00649518; end: 006495bb;  */

long * FUN_00649518(long *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  long lVar5;
  int unaff_w21;
  long *plVar6;
  undefined1 auStack_148 [24];
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_e8;
  
  plVar3 = param_1;
  func_0x006497e4();
  if ((*(byte *)((long)plVar3 + 0xc) & 1) == 0) {
    lVar5 = *param_1;
    func_0x00461914(&UNK_00910198);
    func_0x00649780();
    func_0x00649794();
    param_2 = extraout_w10;
    if (in_NG == in_OV) {
      param_2 = unaff_w21;
    }
    func_0x00649758();
    FUN_006405bc(lVar5);
    func_0x00649748();
    func_0x006497a8();
    FUN_0064397c(*param_1);
  }
  plVar3 = param_1 + 2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x006497b0(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  func_0x006497e4();
  plVar4 = plVar3;
  uStack_e8 = extraout_x8_00;
  if ((*(byte *)((long)plVar3 + 0xc) & 1) == 0) {
    uStack_130 = (ulong)*(uint *)(plVar3 + 1);
    uStack_128 = 0;
    func_0x00461914(&UNK_009101b9);
    func_0x00649780();
    func_0x00649794();
    param_2 = extraout_w10_00;
    if (in_NG == in_OV) {
      param_2 = unaff_w21;
    }
    func_0x00649758();
    func_0x006497d4();
    func_0x00649748();
    func_0x006497a8();
    *(undefined1 *)((long)plVar3 + 0xc) = 1;
    plVar4 = (long *)*plVar3;
    FUN_006438e0();
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      if (plVar3[3] == 0) goto LAB_006496bc;
    }
    else if (*(char *)((long)plVar3 + 0x27) == '\0') goto LAB_006496bc;
    FUN_006428a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_148,*plVar3 + 0xf8);
    func_0x00649794();
    uVar1 = extraout_x11;
    puVar2 = extraout_x10;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_01;
      puVar2 = auStack_148;
    }
    lVar5 = (long)*(char *)((long)plVar3 + 0x27);
    if (lVar5 < 0) {
      plVar6 = (long *)plVar3[2];
      lVar5 = plVar3[3];
    }
    else {
      plVar6 = plVar3 + 2;
    }
    plVar3 = plVar3 + 5;
    FUN_006407a0(plVar3);
    plVar4 = (long *)0xb6c688;
    param_2 = 0;
    (**(code **)(lRam0000000000b6c688 + 0x30))(0xb6c688,0,puVar2,uVar1,plVar6,lVar5,2,plVar3);
    func_0x006497a8();
  }
LAB_006496bc:
  func_0x006497b0(uStack_e8);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00649748();
  func_0x006497a8();
  __Unwind_Resume();
  *plVar4 = 0;
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 2) = 0;
  if (param_2 == 1) {
    plVar3 = plVar4;
    FUN_00716c1c();
    plVar4[1] = (long)plVar3;
    *(undefined1 *)(plVar4 + 2) = 1;
  }
  return plVar4;
}



/* Entry: 006495bc; end: 00649707;  */

long * FUN_006495bc(long *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  int unaff_w21;
  long lVar5;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_48;
  
  func_0x006497e4();
  plVar3 = param_1;
  uStack_48 = extraout_x8;
  if ((*(byte *)((long)param_1 + 0xc) & 1) == 0) {
    uStack_90 = (ulong)*(uint *)(param_1 + 1);
    uStack_88 = 0;
    func_0x00461914(&UNK_009101b9);
    func_0x00649780();
    func_0x00649794();
    param_2 = extraout_w10;
    if (in_NG == in_OV) {
      param_2 = unaff_w21;
    }
    func_0x00649758();
    func_0x006497d4();
    func_0x00649748();
    func_0x006497a8();
    *(undefined1 *)((long)param_1 + 0xc) = 1;
    plVar3 = (long *)*param_1;
    FUN_006438e0();
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      if (param_1[3] == 0) goto LAB_006496bc;
    }
    else if (*(char *)((long)param_1 + 0x27) == '\0') goto LAB_006496bc;
    FUN_006428a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_a8,*param_1 + 0xf8);
    func_0x00649794();
    uVar1 = extraout_x11;
    puVar2 = extraout_x10;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_00;
      puVar2 = auStack_a8;
    }
    lVar5 = (long)*(char *)((long)param_1 + 0x27);
    if (lVar5 < 0) {
      plVar4 = (long *)param_1[2];
      lVar5 = param_1[3];
    }
    else {
      plVar4 = param_1 + 2;
    }
    param_1 = param_1 + 5;
    FUN_006407a0(param_1);
    plVar3 = (long *)0xb6c688;
    param_2 = 0;
    (**(code **)(lRam0000000000b6c688 + 0x30))(0xb6c688,0,puVar2,uVar1,plVar4,lVar5,2,param_1);
    func_0x006497a8();
  }
LAB_006496bc:
  func_0x006497b0(uStack_48);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00649748();
  func_0x006497a8();
  __Unwind_Resume();
  *plVar3 = 0;
  plVar3[1] = 0;
  *(undefined1 *)(plVar3 + 2) = 0;
  if (param_2 == 1) {
    plVar4 = plVar3;
    FUN_00716c1c();
    plVar3[1] = (long)plVar4;
    *(undefined1 *)(plVar3 + 2) = 1;
  }
  return plVar3;
}



/* Entry: 00649708; end: 00649747;  */

undefined8 * FUN_00649708(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_2 == 1) {
    puVar1 = param_1;
    FUN_00716c1c();
    param_1[1] = puVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 00649748; end: 006497f3;  */

void FUN_00649748(void)

{
  long unaff_x21;
  undefined8 *in_stack_00000040;
  
                    /* WARNING: Could not recover jumptable at 0x00649754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000040)(unaff_x21 + 8);
  return;
}



/* Entry: 006497f4; end: 0064987b;  */

void FUN_006497f4(void)

{
  long *plVar1;
  long lVar2;
  long alStack_90 [2];
  char acStack_79 [73];
  
  FUN_0064987c(alStack_90);
  for (lVar2 = 0; lVar2 != 0x60; lVar2 = lVar2 + 0x18) {
    plVar1 = (long *)((long)alStack_90 + lVar2);
    if (acStack_79[lVar2] < '\0') {
      plVar1 = (long *)*plVar1;
    }
    _open_dprotected_np(plVar1,0x201,4,0);
    _close();
  }
  func_0x00649d58();
  return;
}



/* Entry: 0064987c; end: 00649987;  */

void FUN_0064987c(long param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_2;
  func_0x00461914(&UNK_0090fcf5);
  FUN_00721c60(auStack_58);
  if (param_3 == 0) {
    func_0x00649d74();
    func_0x00649d68();
    uStack_38 = 0;
    uStack_40 = param_2;
    func_0x00461914(&UNK_0090fcea);
    func_0x00649d38();
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    func_0x00649d74();
    func_0x00649d68();
    uStack_38 = 0;
    uStack_40 = param_2;
    func_0x00461914(&UNK_0090fce3);
    func_0x00649d38();
    uStack_38 = 0;
    uStack_40 = param_2;
    func_0x00461914(&UNK_0090fcdc);
    func_0x00649d38();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 00649988; end: 00649bb7;  */

void FUN_00649988(undefined8 param_1,uint param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *unaff_x23;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_1b0 [96];
  long lStack_150;
  undefined1 *puStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  uint uStack_ec;
  undefined1 auStack_e8 [96];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  uStack_ec = param_2;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  FUN_0064987c(auStack_e8,param_1,param_3);
  uVar5 = *(undefined8 *)PTR__NSFileProtectionKey_00998ee0;
  uVar6 = *(undefined8 *)PTR__NSFileProtectionNone_00998ee8;
  ppuVar3 = &PTR_s_initWithExecutionStartDateNanos__00ac2000;
  for (lVar7 = 0; lVar7 != 0x60; lVar7 = lVar7 + 0x18) {
    param_3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    uStack_78 = uVar5;
    uStack_70 = uVar6;
    func_0x00782080();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078cce0(puVar1);
    func_0x00649d60();
    func_0x00649d48();
  }
  FUN_00649d00(auStack_e8);
  if ((uStack_ec & 1) != 0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00791ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00649d48();
    param_3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    uStack_88 = uVar5;
    uStack_80 = uVar6;
    func_0x00782080();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078cce0(puVar1);
    func_0x00649d48();
    func_0x00649d50();
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00649d48();
  func_0x00649d50();
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
  ppuStack_140 = &PTR_s_initWithExecutionStartDateNanos__00ac2000;
  pcStack_f8 = FUN_00649bb8;
  lStack_150 = lVar7;
  puStack_148 = auStack_e8;
  uStack_138 = uVar6;
  uStack_130 = uVar5;
  puStack_128 = unaff_x23;
  puStack_120 = param_3;
  ppuStack_118 = ppuVar3;
  puStack_110 = puVar2;
  puStack_108 = puVar1;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_0064987c(auStack_1b0);
  for (lVar7 = 0; lVar7 != 0x60; lVar7 = lVar7 + 0x18) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x007840a0();
    uVar4 = 0;
    _objc_retain(0);
    if (((int)puVar2 == 0) || (func_0x0077fbc0(), (uVar4 & 1) == 0)) {
      func_0x0078ff40(puVar1);
    }
    func_0x00649d60();
    func_0x00649d48();
    func_0x00649d50();
  }
  func_0x00649d58();
  return;
}



/* Entry: 00649bb8; end: 00649cff;  */

void FUN_00649bb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long alStack_c0 [2];
  char acStack_a9 [73];
  
  FUN_0064987c(alStack_c0);
  puVar1 = PTR____kCFBooleanTrue_00999d28;
  uVar5 = *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_00999d00;
  for (lVar7 = 0; lVar7 != 0x60; lVar7 = lVar7 + 0x18) {
    plVar4 = (long *)((long)alStack_c0 + lVar7);
    if (acStack_a9[lVar7] < '\0') {
      plVar4 = (long *)*plVar4;
    }
    puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988,param_2,plVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x007840a0();
    uVar6 = 0;
    _objc_retain(0);
    if (((int)puVar2 == 0) || (func_0x0077fbc0(), (uVar6 & 1) == 0)) {
      func_0x0078ff40(puVar3,param_2,puVar1,uVar5,0);
    }
    func_0x00649d60();
    func_0x00649d48();
    func_0x00649d50();
  }
  func_0x00649d58();
  return;
}



/* Entry: 00649d00; end: 00649d37;  */

long FUN_00649d00(long param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return param_1;
}



/* Entry: 00649d38; end: 00649d8b;  */

/* WARNING: Removing unreachable block (ram,0x00721cb8) */
/* WARNING: Removing unreachable block (ram,0x00721d24) */
/* WARNING: Removing unreachable block (ram,0x00721d2c) */
/* WARNING: Removing unreachable block (ram,0x00721ed8) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00649d38(undefined8 *param_1,long param_2)

{
  bool bVar1;
  float fVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  uint uVar19;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  ulong uVar20;
  undefined1 *puVar21;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  float in_stack_00000020;
  int in_stack_00000024;
  code *in_stack_00000028;
  undefined1 auStack_270 [8];
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_58;
  
  iVar23 = 0xc;
  lVar17 = param_2;
  func_0x00729854();
  uVar8 = lVar17 == 2;
  uStack_58 = extraout_x8;
  if ((!(bool)uVar8) ||
     (puVar10 = param_1, FUN_00722310(), pcVar7 = in_stack_00000028, fVar2 = in_stack_00000020,
     (int)puVar10 == 0)) {
    func_0x0072a438();
    lStack_268 = extraout_x9 + 0x20;
    uStack_258 = 500;
    uStack_260 = 0;
    auStack_270 = (undefined1  [8])extraout_x8_00;
    FUN_00722388(auStack_270,param_1,param_2,0xc,&stack0x00000020,0);
    func_0x0072a2dc();
code_r0x00721cf4:
    puVar14 = (undefined8 *)auStack_270;
    func_0x006420e4(puVar14);
    goto LAB_00721cfc;
  }
  uVar8 = 0;
  lVar11 = CONCAT44(in_stack_00000024,in_stack_00000020);
  puVar15 = (undefined2 *)CONCAT44(in_stack_00000024,in_stack_00000020);
  uVar6 = CONCAT44(in_stack_00000024,in_stack_00000020);
  uVar12 = CONCAT44(in_stack_00000024,in_stack_00000020);
  puVar14 = (undefined8 *)CONCAT44(in_stack_00000024,in_stack_00000020);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(0x721ddc) {
  case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar14 = (undefined8 *)auStack_270;
    if ((int)in_stack_00000020 < 0) {
      puVar14 = (undefined8 *)((long)auStack_270 + 1);
      auStack_270[0] = 0x2d;
    }
    uVar8 = in_stack_00000020 == 0.0;
    fVar2 = (float)-(int)in_stack_00000020;
    if (-1 < (int)in_stack_00000020) {
      fVar2 = in_stack_00000020;
    }
    func_0x0072a294();
    func_0x00723bf8(puVar14,fVar2,puVar10);
    func_0x00729950();
    break;
  case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x0072a294();
    puVar14 = (undefined8 *)auStack_270;
    func_0x00723bf8(puVar14,fVar2,puVar10);
    func_0x00729950();
    break;
  case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar14 = (undefined8 *)auStack_270;
    if (in_stack_00000024 < 0) {
      puVar14 = (undefined8 *)((long)auStack_270 + 1);
      auStack_270[0] = 0x2d;
    }
    uVar8 = lVar11 == 0;
    lVar17 = -lVar11;
    if (-1 < in_stack_00000024) {
      lVar17 = lVar11;
    }
    func_0x00729fe0();
    func_0x00723c7c(puVar14,lVar17,puVar10);
    func_0x00729950();
    break;
  case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00729fe0();
    puVar14 = (undefined8 *)auStack_270;
    func_0x00723c7c(puVar14,uVar12,puVar10);
    func_0x00729950();
    break;
  case 4:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar14 = (undefined8 *)auStack_270;
    if ((long)in_stack_00000028 < 0) {
      puVar14 = (undefined8 *)((long)auStack_270 + 1);
      auStack_270[0] = 0x2d;
    }
    uVar25 = (long)in_stack_00000028 >> 0x3f;
    uVar20 = CONCAT44(in_stack_00000024,in_stack_00000020) ^ uVar25;
    lVar17 = uVar20 - uVar25;
    uVar8 = lVar17 == 0;
    lVar22 = ((ulong)in_stack_00000028 ^ uVar25) - (uVar25 + (uVar20 < uVar25));
    lVar11 = lVar17;
    FUN_00723cd4(lVar17,lVar22);
    FUN_00723d5c(puVar14,lVar17,lVar22,lVar11);
    func_0x00729950();
    break;
  case 5:
    uVar12 = uVar6;
                    /* WARNING: This code block may not be properly labeled as switch case */
    FUN_00723cd4(uVar6,in_stack_00000028);
    puVar14 = (undefined8 *)auStack_270;
    FUN_00723d5c(puVar14,uVar6,pcVar7,uVar12);
    func_0x00729950();
    break;
  case 6:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uVar8 = ((uint)in_stack_00000020 & 1) == 0;
    uVar12 = 4;
    if ((bool)uVar8) {
      uVar12 = 5;
    }
    pcVar3 = "true";
    if ((bool)uVar8) {
      pcVar3 = "false";
    }
    _memcpy(auStack_270,pcVar3,uVar12);
    FUN_0052fd1c();
    puVar14 = unaff_x21;
    break;
  case 7:
                    /* WARNING: This code block may not be properly labeled as switch case */
    auStack_270[0] = SUB41(in_stack_00000020,0);
    FUN_0052fd1c();
    puVar14 = unaff_x21;
    break;
  case 8:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00729ee4();
    if ((((uint)fVar2 ^ 0xffffffff) & 0x7f800000) == 0) {
      uVar8 = ABS(fVar2) == INFINITY;
      FUN_00723df0();
      puVar14 = unaff_x21;
      break;
    }
    FUN_00722620(ABS(fVar2));
    uVar25 = (ulong)puVar10 >> 0x20;
    puVar13 = puVar10;
    FUN_00721bf0();
    iVar9 = (int)puVar13;
    iVar23 = iVar9 + (int)((ulong)puVar10 >> 0x20);
    if (iVar23 - 0x11U < 0xffffffec) {
      uVar5 = iVar23 - 1;
      uVar8 = iVar9 == 1;
      func_0x00729b74();
      puVar14 = puVar13;
      if ((int)fVar2 < 0) {
        func_0x007298e0();
        puVar14 = (undefined8 *)((long)puVar13 + 1);
        *(undefined1 *)puVar13 = extraout_w8;
      }
      func_0x00723f54();
      puVar21 = (undefined1 *)((long)puVar14 + 1);
      *(undefined1 *)puVar14 = 0x65;
      func_0x0072975c(uStack_58);
      if ((bool)uVar8) {
        uVar8 = 0x2d;
        if (-1 < (int)uVar5) {
          uVar8 = 0x2b;
        }
        uVar19 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar19 = uVar5;
        }
        puVar15 = (undefined2 *)(puVar21 + 1);
        *puVar21 = uVar8;
        if (99 < uVar19) {
          lVar17 = (ulong)(uVar19 / 100) * 2;
          puVar16 = puVar15;
          if (999 < uVar19) {
            puVar16 = (undefined2 *)(puVar21 + 2);
            puVar21[1] = (&UNK_0083ccd4)[lVar17];
          }
          puVar15 = (undefined2 *)((long)puVar16 + 1);
          *(undefined *)puVar16 = (&UNK_0083ccd5)[lVar17];
          uVar19 = uVar19 % 100;
        }
        *puVar15 = *(undefined2 *)(&UNK_0083ccd4 + (ulong)uVar19 * 2);
        return (undefined8 *)(puVar15 + 1);
      }
    }
    else {
      if ((long)puVar10 < 0) {
        uVar8 = iVar23 == 1;
        if (0 < iVar23) {
          func_0x00729b74();
          func_0x00729b0c();
          puVar14 = puVar13;
          if ((int)fVar2 < 0) {
            func_0x007298e0();
            puVar14 = (undefined8 *)((long)puVar13 + 1);
            *(undefined1 *)puVar13 = extraout_w8_01;
          }
          func_0x00723f54();
          func_0x0072975c(uStack_58);
          if ((bool)uVar8) goto code_r0x00722268;
          goto LAB_00722288;
        }
        uVar8 = iVar9 == 0;
        iVar24 = 0;
        if (!(bool)uVar8) {
          iVar24 = -iVar23;
        }
        func_0x00729b74();
        func_0x00729b0c();
        puVar14 = puVar13;
        if ((int)fVar2 < 0) {
          func_0x007298e0();
          puVar14 = (undefined8 *)((long)puVar13 + 1);
          *(undefined1 *)puVar13 = extraout_w8_02;
        }
        puVar21 = (undefined1 *)((long)puVar14 + 1);
        *(undefined1 *)puVar14 = 0x30;
        if (iVar24 != 0 || iVar9 != 0) {
          *(undefined1 *)((long)puVar14 + 1) = 0x2e;
          puVar14 = (undefined8 *)((long)puVar14 + 2);
          while( true ) {
            uVar8 = iVar24 + -1 == 0;
            if (iVar24 < 1) break;
            *(undefined1 *)puVar14 = 0x30;
            puVar14 = (undefined8 *)((long)puVar14 + 1);
            iVar24 = iVar24 + -1;
          }
          func_0x0072a34c(puVar14,puVar21);
        }
      }
      else {
        puVar21 = (undefined1 *)(uVar25 + (uint)(iVar9 - ((int)fVar2 >> 0x1f)));
        func_0x00729b74();
        func_0x00729b0c();
        puVar14 = puVar13;
        if ((int)fVar2 < 0) {
          func_0x007298e0();
          puVar14 = (undefined8 *)((long)puVar13 + 1);
          *(undefined1 *)puVar13 = extraout_w8_00;
        }
        func_0x0072a34c();
        while( true ) {
          iVar23 = (int)uVar25;
          uVar5 = iVar23 - 1;
          uVar8 = uVar5 == 0;
          uVar25 = (ulong)uVar5;
          if (iVar23 < 1) break;
          *puVar21 = 0x30;
          puVar21 = puVar21 + 1;
        }
      }
      func_0x0072975c(uStack_58);
      if ((bool)uVar8) {
code_r0x00722268:
        puVar18 = &UNK_0083ce56;
        func_0x00729d0c();
        bVar4 = puVar18[4];
        if (bVar4 == 1) {
          for (; unaff_x21 != (undefined8 *)0x0; unaff_x21 = (undefined8 *)((long)unaff_x21 + -1)) {
            *(undefined1 *)unaff_x19 = *unaff_x20;
            unaff_x19 = (undefined8 *)((long)unaff_x19 + 1);
          }
        }
        else {
          for (; unaff_x21 != (undefined8 *)0x0; unaff_x21 = (undefined8 *)((long)unaff_x21 + -1)) {
            if (bVar4 != 0) {
              func_0x0072a134();
              _memmove();
            }
            unaff_x19 = (undefined8 *)((long)unaff_x19 + (ulong)bVar4);
          }
        }
        return unaff_x19;
      }
    }
    goto LAB_00722288;
  case 9:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00729ec4();
    uVar8 = (extraout_x9_01 & 0x7ff00000) == 0;
    if ((bool)uVar8) {
      func_0x0072a3bc();
      func_0x0072a310();
      puVar14 = puVar10;
    }
    else {
      func_0x00729f54(fVar2);
      auStack_270 = (undefined1  [8])puVar10;
      lStack_268 = lVar17;
      func_0x0072a27c();
      puVar14 = puVar10;
    }
    break;
  case 10:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00729ec4();
    uVar8 = (extraout_x9_02 & 0x7ff00000) == 0;
    if ((bool)uVar8) {
      func_0x0072a3bc();
      func_0x0072a310();
      puVar14 = puVar10;
    }
    else {
      func_0x00729f54(fVar2);
      auStack_270 = (undefined1  [8])puVar10;
      lStack_268 = lVar17;
      func_0x0072a27c();
      puVar14 = puVar10;
    }
    break;
  case 0xb:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00729ee4();
    if (puVar14 == (undefined8 *)0x0) goto code_r0x00722290;
    _strlen(puVar14);
    func_0x0072a134();
    func_0x0072442c();
    break;
  case 0xc:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00729ee4();
    func_0x0072442c();
    puVar14 = unaff_x21;
    break;
  case 0xd:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x00729ee4();
    FUN_00724460();
    uVar25 = ((ulong)puVar15 & 0xffffffff) + 2;
    func_0x00729b74();
    puVar14 = (undefined8 *)(puVar15 + 1);
    *puVar15 = 0x7830;
    func_0x0072975c(uStack_58);
    if ((bool)uVar8) {
      func_0x00729e1c();
      puVar21 = (undefined1 *)((long)puVar14 + (long)iVar23);
      do {
        puVar21 = puVar21 + -1;
        *puVar21 = (&UNK_0091db3e)[uVar25 & 0xf];
        bVar1 = 0xf < uVar25;
        uVar25 = uVar25 >> 4;
      } while (bVar1);
      return puVar14;
    }
    goto LAB_00722288;
  case 0xe:
                    /* WARNING: This code block may not be properly labeled as switch case */
    func_0x0072a438(CONCAT44(in_stack_00000024,in_stack_00000020));
    lStack_268 = extraout_x9_00 + 0x20;
    uStack_258 = 500;
    uStack_260 = 0;
    auStack_270 = (undefined1  [8])extraout_x8_01;
    (*pcVar7)();
    func_0x0072a2dc();
    goto code_r0x00721cf4;
  }
LAB_00721cfc:
  func_0x0072975c(uStack_58);
  if ((bool)uVar8) {
    return puVar14;
  }
LAB_00722288:
  ___stack_chk_fail();
  func_0x007299d8();
  puVar10 = puVar14;
code_r0x00722290:
  func_0x00729b24();
  FUN_007217e8();
  ___cxa_throw(puVar10,&PTR_DAT_00a1f600,0x721c1c);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x7222c0);
  (*pcVar7)();
}



/* Entry: 00649d8c; end: 00649da7;  */

void FUN_00649d8c(void)

{
  _objc_alloc_init(PTR_PTR_00ac36a0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00649da8; end: 00649ddb; -[SCNCoreVoid init] */

void FUN_00649da8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac45d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00649ddc; end: 00649f37;  */

undefined8 * FUN_00649ddc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar5;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  func_0x0064b5f4();
  plVar5 = *(long **)(param_1 + 0x30);
  lStack_d0 = param_2[1];
  uStack_d8 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__17promiseIvEC1Ev(&uStack_a0);
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_a8,&uStack_a0);
  uStack_88 = uStack_a0;
  uStack_a0 = 0;
  uStack_b8 = uStack_d8;
  lStack_b0 = lStack_d0;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_98 = FUN_0064a17c;
  ppuStack_90 = &PTR_DAT_00a0cb98;
  uStack_c8 = 0;
  uStack_78 = uStack_d8;
  lStack_70 = lStack_d0;
  lStack_c0 = param_1;
  lStack_80 = param_1;
  if (lStack_d0 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar5 + 0x10))(plVar5,&pcStack_98);
  func_0x0064b574();
  FUN_0064a154(&uStack_c8);
  __ZNSt3__117__assoc_sub_state4waitEv(uStack_a8);
  __ZNSt3__16futureIvED1Ev(&uStack_a8);
  __ZNSt3__17promiseIvED1Ev(&uStack_a0);
  puVar4 = &uStack_d8;
  func_0x0063fa4c();
  func_0x0064b594();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__16futureIvED1Ev(&uStack_a8);
    __ZNSt3__17promiseIvED1Ev(&uStack_a0);
    puVar4 = &uStack_d8;
    func_0x0063fa4c();
    func_0x0064b53c();
    *puVar4 = &PTR_DAT_00a0cb68;
    FUN_0064c54c(puVar4[6]);
    func_0x0045a078(puVar4 + 6);
    FUN_0064a0b4(puVar4 + 1);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 00649f38; end: 00649f7f;  */

undefined8 * FUN_00649f38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a0cb68;
  FUN_0064c54c(param_1[6]);
  func_0x0045a078(param_1 + 6);
  FUN_0064a0b4(param_1 + 1);
  return param_1;
}



/* Entry: 00649f80; end: 0064a063;  */

void FUN_00649f80(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lStack_f0;
  undefined1 auStack_e8 [40];
  undefined8 auStack_c0 [5];
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  func_0x0064b5f4();
  FUN_0063eb8c(auStack_c0);
  FUN_0063eac0(param_1,auStack_c0);
  plVar2 = *(long **)(param_2 + 0x30);
  lStack_f0 = param_2;
  FUN_0064a064(auStack_e8,auStack_c0);
  pcStack_98 = FUN_0064a5f4;
  func_0x0064b4a4(auStack_90,&lStack_f0);
  (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_98);
  func_0x0064b564();
  func_0x0064b5b4();
  FUN_0063edd4(auStack_c0);
  func_0x0064b594();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0064b564();
  FUN_0063edd4(auStack_e8);
  func_0x0063b6c4(param_1);
  puVar1 = auStack_c0;
  FUN_0063edd4();
  func_0x0064b554();
  FUN_0064a088();
  *puVar1 = &PTR_FUN_00a0c070;
  return;
}



/* Entry: 0064a064; end: 0064a087;  */

void FUN_0064a064(undefined8 *param_1)

{
  FUN_0064a088();
  *param_1 = &PTR_FUN_00a0c070;
  return;
}



/* Entry: 0064a088; end: 0064a0b3;  */

void FUN_0064a088(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00a0c0b8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 0064a0b4; end: 0064a13b;  */

long FUN_0064a0b4(long param_1)

{
  func_0x0064a0dc(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_0064a13c(param_1,0);
  return param_1;
}



/* Entry: 0064a13c; end: 0064a153;  */

void FUN_0064a13c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0064a154; end: 0064a17b;  */

void FUN_0064a154(long param_1)

{
  func_0x0063fa4c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00779f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_00998c70)(param_1);
  return;
}



/* Entry: 0064a17c; end: 0064a547;  */

void FUN_0064a17c(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  segment_command *psVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  segment_command **ppsVar10;
  int extraout_w10;
  segment_command **ppsVar11;
  long *plVar12;
  long *plVar13;
  segment_command **ppsVar14;
  segment_command **ppsVar15;
  segment_command **unaff_x22;
  segment_command **ppsVar16;
  long lVar17;
  qword qVar18;
  float fVar19;
  segment_command *psStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_1 + 0x18);
  psStack_78 = *(segment_command **)(param_1 + 0x20);
  ppsVar10 = &psStack_78;
  FUN_004597ec(ppsVar10,8);
  ppsVar16 = *(segment_command ***)(lVar1 + 0x10);
  if (ppsVar16 == (segment_command **)0x0) {
    lVar17 = *(long *)(param_1 + 0x20);
  }
  else {
    puVar5 = (undefined1 *)((long)ppsVar16 + -1);
    if (((ulong)ppsVar16 & (ulong)puVar5) == 0) {
      unaff_x22 = (segment_command **)((ulong)puVar5 & (ulong)ppsVar10);
    }
    else {
      unaff_x22 = ppsVar10;
      if (ppsVar16 <= ppsVar10) {
        uVar2 = 0;
        if (ppsVar16 != (segment_command **)0x0) {
          uVar2 = (ulong)ppsVar10 / (ulong)ppsVar16;
        }
        unaff_x22 = (segment_command **)((long)ppsVar10 - uVar2 * (long)ppsVar16);
      }
    }
    plVar7 = *(long **)(*(long *)(lVar1 + 8) + (long)unaff_x22 * 8);
    lVar17 = *(long *)(param_1 + 0x20);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0064a24c;
          ppsVar11 = (segment_command **)plVar7[1];
          if (ppsVar11 != ppsVar10) break;
          if (plVar7[2] == lVar17) goto LAB_0064a50c;
        }
        if (((ulong)ppsVar16 & (ulong)puVar5) == 0) {
          ppsVar11 = (segment_command **)((ulong)ppsVar11 & (ulong)puVar5);
        }
        else if (ppsVar16 <= ppsVar11) {
          uVar2 = 0;
          if (ppsVar16 != (segment_command **)0x0) {
            uVar2 = (ulong)ppsVar11 / (ulong)ppsVar16;
          }
          ppsVar11 = (segment_command **)((long)ppsVar11 - uVar2 * (long)ppsVar16);
        }
      } while (ppsVar11 == unaff_x22);
    }
  }
LAB_0064a24c:
  qVar18 = *(qword *)(param_1 + 0x28);
  plVar7 = (long *)(lVar1 + 0x18);
  psVar4 = &segment_command_00000020;
  __Znwm();
  uStack_68 = 1;
  psVar4->cmd = 0;
  psVar4->cmdsize = 0;
  *(segment_command ***)psVar4->segname = ppsVar10;
  *(long *)(psVar4->segname + 8) = lVar17;
  psVar4->vmaddr = qVar18;
  psStack_78 = psVar4;
  plStack_70 = plVar7;
  if (qVar18 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
  }
  fVar19 = (float)(*(long *)(lVar1 + 0x20) + 1);
  if ((ppsVar16 != (segment_command **)0x0) &&
     (fVar19 <= *(float *)(lVar1 + 0x28) * (float)ppsVar16)) goto LAB_0064a494;
  uVar2 = 1;
  if ((segment_command **)((long)&MACH_HEADER.magic + 2) < ppsVar16) {
    uVar2 = (ulong)(((ulong)ppsVar16 & (ulong)((long)ppsVar16 + -1)) != 0);
  }
  ppsVar11 = (segment_command **)(uVar2 | (long)ppsVar16 << 1);
  ppsVar16 = (segment_command **)(long)(fVar19 / *(float *)(lVar1 + 0x28));
  if (ppsVar11 <= ppsVar16) {
    ppsVar11 = ppsVar16;
  }
  if ((undefined1 *)((long)ppsVar11 - 1U) == (undefined1 *)0x0) {
    ppsVar11 = (segment_command **)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)ppsVar11 & (long)ppsVar11 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  ppsVar16 = *(segment_command ***)(lVar1 + 0x10);
  if (ppsVar16 < ppsVar11) {
LAB_0064a308:
    if ((ulong)ppsVar11 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x64a538);
      (*pcVar3)();
    }
    lVar17 = (long)ppsVar11 << 3;
    __Znwm(lVar17);
    FUN_0064a548(lVar1 + 8,lVar17);
    *(segment_command ***)(lVar1 + 0x10) = ppsVar11;
    lVar17 = *(long *)(lVar1 + 8);
    for (ppsVar16 = (segment_command **)0x0; ppsVar11 != ppsVar16;
        ppsVar16 = (segment_command **)((long)ppsVar16 + 1)) {
      *(undefined8 *)(lVar17 + (long)ppsVar16 * 8) = 0;
    }
    plVar12 = (long *)*plVar7;
    ppsVar16 = ppsVar11;
    if (plVar12 != (long *)0x0) {
      ppsVar14 = (segment_command **)plVar12[1];
      puVar5 = (undefined1 *)((long)ppsVar11 + -1);
      uVar2 = 0;
      if (ppsVar11 != (segment_command **)0x0) {
        uVar2 = (ulong)ppsVar14 / (ulong)ppsVar11;
      }
      ppsVar15 = ppsVar14;
      if (ppsVar11 <= ppsVar14) {
        ppsVar15 = (segment_command **)((long)ppsVar14 - uVar2 * (long)ppsVar11);
      }
      if (((ulong)ppsVar11 & (ulong)puVar5) == 0) {
        ppsVar15 = (segment_command **)((ulong)ppsVar14 & (ulong)puVar5);
      }
      *(long **)(lVar17 + (long)ppsVar15 * 8) = plVar7;
      while (plVar13 = plVar12, plVar12 = (long *)*plVar13, plVar12 != (long *)0x0) {
        ppsVar14 = (segment_command **)plVar12[1];
        if (((ulong)ppsVar11 & (ulong)puVar5) == 0) {
          ppsVar14 = (segment_command **)((ulong)ppsVar14 & (ulong)puVar5);
        }
        else if (ppsVar11 <= ppsVar14) {
          uVar2 = 0;
          if (ppsVar11 != (segment_command **)0x0) {
            uVar2 = (ulong)ppsVar14 / (ulong)ppsVar11;
          }
          ppsVar14 = (segment_command **)((long)ppsVar14 - uVar2 * (long)ppsVar11);
        }
        if (ppsVar14 != ppsVar15) {
          if (*(long *)(lVar17 + (long)ppsVar14 * 8) == 0) {
            *(long **)(lVar17 + (long)ppsVar14 * 8) = plVar13;
            ppsVar15 = ppsVar14;
          }
          else {
            *plVar13 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar17 + (long)ppsVar14 * 8);
            **(long **)(lVar17 + (long)ppsVar14 * 8) = (long)plVar12;
            plVar12 = plVar13;
          }
        }
      }
    }
  }
  else if (ppsVar11 < ppsVar16) {
    ppsVar14 = (segment_command **)
               (long)((float)*(ulong *)(lVar1 + 0x20) / *(float *)(lVar1 + 0x28));
    if ((ppsVar16 < (segment_command **)((long)&MACH_HEADER.magic + 3)) ||
       (((ulong)ppsVar16 & (ulong)((long)ppsVar16 + -1)) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((segment_command **)((long)&MACH_HEADER.magic + 1) < ppsVar14) {
      ppsVar14 = (segment_command **)(1L << (-LZCOUNT((undefined1 *)((long)ppsVar14 + -1)) & 0x3fU))
      ;
    }
    if (ppsVar11 <= ppsVar14) {
      ppsVar11 = ppsVar14;
    }
    if (ppsVar11 < ppsVar16) {
      if (ppsVar11 != (segment_command **)0x0) goto LAB_0064a308;
      FUN_0064a548(lVar1 + 8,0);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      ppsVar16 = (segment_command **)0x0;
    }
    else {
      ppsVar16 = *(segment_command ***)(lVar1 + 0x10);
    }
  }
  if (((ulong)ppsVar16 & (ulong)((long)ppsVar16 + -1)) == 0) {
    unaff_x22 = (segment_command **)((ulong)((long)ppsVar16 + -1) & (ulong)ppsVar10);
  }
  else {
    unaff_x22 = ppsVar10;
    if (ppsVar16 <= ppsVar10) {
      uVar2 = 0;
      if (ppsVar16 != (segment_command **)0x0) {
        uVar2 = (ulong)ppsVar10 / (ulong)ppsVar16;
      }
      unaff_x22 = (segment_command **)((long)ppsVar10 - uVar2 * (long)ppsVar16);
    }
  }
LAB_0064a494:
  lVar17 = *(long *)(lVar1 + 8);
  puVar8 = *(undefined8 **)(lVar17 + (long)unaff_x22 * 8);
  if (puVar8 == (undefined8 *)0x0) {
    lVar9 = *plVar7;
    psVar4->cmd = (int)lVar9;
    psVar4->cmdsize = (int)((ulong)lVar9 >> 0x20);
    *plVar7 = (long)psVar4;
    *(long **)(lVar17 + (long)unaff_x22 * 8) = plVar7;
    if (*(long *)psVar4 != 0) {
      ppsVar10 = *(segment_command ***)(*(long *)psVar4 + 8);
      if (((ulong)ppsVar16 & (ulong)((long)ppsVar16 + -1)) == 0) {
        ppsVar10 = (segment_command **)((ulong)ppsVar10 & (ulong)((long)ppsVar16 + -1));
      }
      else if (ppsVar16 <= ppsVar10) {
        uVar2 = 0;
        if (ppsVar16 != (segment_command **)0x0) {
          uVar2 = (ulong)ppsVar10 / (ulong)ppsVar16;
        }
        ppsVar10 = (segment_command **)((long)ppsVar10 - uVar2 * (long)ppsVar16);
      }
      *(segment_command **)(lVar17 + (long)ppsVar10 * 8) = psVar4;
    }
  }
  else {
    uVar6 = *puVar8;
    psVar4->cmd = (int)uVar6;
    psVar4->cmdsize = (int)((ulong)uVar6 >> 0x20);
    *puVar8 = psVar4;
  }
  psStack_78 = (segment_command *)0x0;
  *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 1;
  FUN_0064a560(&psStack_78);
LAB_0064a50c:
                    /* WARNING: Could not recover jumptable at 0x00779f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvE9set_valueEv_00998c60)(param_1 + 0x10);
  return;
}



/* Entry: 0064a548; end: 0064a55f;  */

void FUN_0064a548(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0064a560; end: 0064a5a3;  */

long * FUN_0064a560(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0063fa4c(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 0064a5a4; end: 0064a5f3;  */

void FUN_0064a5a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_00a0cb98;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  *param_2 = 0;
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 0064a5f4; end: 0064abd3;  */

void FUN_0064a5f4(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  qword *pqVar4;
  segment_command *psVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar10;
  long *plVar11;
  long lVar12;
  qword *pqVar13;
  dword *pdVar14;
  long lStack_180;
  long alStack_178 [6];
  undefined1 auStack_148 [16];
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  dword *pdStack_120;
  qword *pqStack_118;
  long *plStack_110;
  dword *pdStack_f0;
  dword *pdStack_e0;
  qword *pqStack_d8;
  dword *pdStack_d0;
  long lStack_c8;
  dword *pdStack_c0;
  qword *pqStack_b8;
  dword *pdStack_b0;
  long lStack_a8;
  dword *pdStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_78;
  long alStack_70 [2];
  
  lVar12 = *(long *)(param_1 + 0x10);
  plStack_138 = (long *)0x0;
  plStack_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  uVar6 = *(ulong *)(lVar12 + 0x20);
  if (uVar6 != 0) {
    if (uVar6 >> 0x3c != 0) {
      FUN_0064abd4();
LAB_0064aa88:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x64aa8c);
      (*pcVar3)();
    }
    func_0x0064ac88(&pdStack_120,uVar6,0,&plStack_128);
    func_0x0064b5c4();
    FUN_0064acec(&pdStack_120);
  }
  plVar10 = (long *)(lVar12 + 0x18);
  while (plVar8 = plStack_130, plVar11 = plStack_138, plVar10 = (long *)*plVar10,
        plVar10 != (long *)0x0) {
    FUN_00649f80(&lStack_180,plVar10[2]);
    if (plStack_130 < plStack_128) {
      plVar11 = plStack_130 + 2;
      plStack_130[1] = alStack_178[0];
      *plStack_130 = lStack_180;
      lStack_180 = 0;
      alStack_178[0] = 0;
    }
    else {
      lVar7 = (long)plStack_130 - (long)plStack_138 >> 4;
      uVar6 = lVar7 + 1;
      if (uVar6 >> 0x3c != 0) {
        FUN_0064abd4();
        goto LAB_0064aa88;
      }
      uVar9 = (long)plStack_128 - (long)plStack_138 >> 3;
      if (uVar9 <= uVar6) {
        uVar9 = uVar6;
      }
      if (0x7fffffffffffffef < (ulong)((long)plStack_128 - (long)plStack_138)) {
        uVar9 = 0xfffffffffffffff;
      }
      func_0x0064ac88(&pdStack_120,uVar9,lVar7,&plStack_128);
      plStack_110[1] = alStack_178[0];
      *plStack_110 = lStack_180;
      lStack_180 = 0;
      alStack_178[0] = 0;
      plStack_110 = plStack_110 + 2;
      func_0x0064b5c4();
      plVar11 = plStack_130;
      FUN_0064acec(&pdStack_120);
    }
    plStack_130 = plVar11;
    func_0x0064b508();
  }
  pqVar4 = &segment_command_00000020.fileoff;
  __Znwm();
  pqVar13 = pqVar4 + 1;
  *pqVar13 = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_00a0cbc0;
  pdVar14 = (dword *)(pqVar4 + 3);
  *(long *)pdVar14 = (long)plVar8 - (long)plVar11 >> 4;
  func_0x0040d038(pqVar4 + 4);
  pdStack_c0 = pdVar14;
  pqStack_b8 = pqVar4;
  func_0x0040cfec(auStack_148,pqVar4 + 4);
  plVar10 = plStack_130;
  plVar11 = plStack_138;
  if (plStack_138 == plStack_130) {
    FUN_0040d544(pqVar4 + 4);
  }
  else {
    for (; plVar11 != plVar10; plVar11 = plVar11 + 2) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pqVar13,0x10);
        if (bVar2) {
          *pqVar13 = *pqVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lStack_180 = 0;
      alStack_178[0] = 0;
      alStack_70[0] = 0;
      alStack_70[1] = 0;
      pdStack_e0 = pdVar14;
      pqStack_d8 = pqVar4;
      FUN_0063b9c0(&pdStack_120,plVar11,alStack_70);
      FUN_0063ba14(&lStack_180,&pdStack_120);
      func_0x0064b5d8();
      func_0x0063b6c4(alStack_70);
      FUN_0040cf9c(&plStack_78);
      func_0x0040cfec(&plStack_90,plStack_78);
      plStack_110 = plStack_78;
      pdStack_e0 = (dword *)0x0;
      pqStack_d8 = (qword *)0x0;
      plStack_78 = (long *)0x0;
      pdStack_a0 = (dword *)0x0;
      lStack_98 = 0;
      pdStack_b0 = (dword *)(lStack_180 + 0x38);
      lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
      pdStack_120 = pdVar14;
      pqStack_118 = pqVar4;
      __ZNSt3__15mutex4lockEv();
      lVar7 = lStack_180;
      func_0x0063ba54();
      if ((int)lVar7 == 0) {
        psVar5 = &segment_command_00000020;
        __Znwm();
        plVar8 = plStack_110;
        *(undefined ***)psVar5 = &PTR_FUN_00a0cc10;
        *(qword **)(psVar5->segname + 8) = pqStack_118;
        *(dword **)psVar5->segname = pdStack_120;
        pdStack_120 = (dword *)0x0;
        pqStack_118 = (qword *)0x0;
        plStack_110 = (long *)0x0;
        psVar5->vmaddr = (qword)plVar8;
        plVar8 = *(long **)(lStack_180 + 0x80);
        *(segment_command **)(lStack_180 + 0x80) = psVar5;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
      else {
        FUN_0063ba14(&pdStack_a0,&lStack_180);
      }
      FUN_0040d514(&pdStack_b0);
      if (pdStack_a0 != (dword *)0x0) {
        pdStack_b0 = pdStack_a0;
        lStack_a8 = lStack_98;
        if (lStack_98 != 0) {
          do {
            func_0x0064b4f0();
          } while (extraout_w10 != 0);
        }
        FUN_0064ad68(&pdStack_120);
        func_0x0063b6c4(&pdStack_b0);
      }
      lStack_c8 = uStack_88;
      pdStack_d0 = (dword *)plStack_90;
      plStack_90 = (long *)0x0;
      uStack_88 = 0;
      func_0x0063b6c4(&pdStack_a0);
      func_0x0064aed0(&pdStack_120);
      func_0x0064b544();
      plVar8 = plStack_78;
      plStack_78 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        func_0x0064b4e4();
      }
      func_0x0064b508();
      func_0x0040d2ac(&pdStack_d0);
      func_0x0064aef8(&pdStack_e0);
    }
  }
  func_0x0064aef8(&pdStack_c0);
  lStack_180 = lVar12;
  FUN_0064a064(alStack_178,param_1 + 0x18);
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  FUN_0040d46c(&pdStack_120,auStack_148,&plStack_90);
  FUN_0040d4c8(alStack_70,&pdStack_120);
  func_0x0040d2ac(&pdStack_120);
  func_0x0064b544();
  FUN_0040cf9c(&pdStack_e0);
  func_0x0040cfec(&pdStack_a0,pdStack_e0);
  func_0x0064af20(&pdStack_120,&lStack_180);
  pdStack_f0 = pdStack_e0;
  pdStack_e0 = (dword *)0x0;
  pdStack_b0 = (dword *)0x0;
  lStack_a8 = 0;
  pdStack_c0 = (dword *)(alStack_70[0] + 0x38);
  pqStack_b8 = (qword *)CONCAT71(pqStack_b8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(alStack_70[0] + 1) & 1) == 0) {
    pdStack_d0 = (dword *)0x0;
    lVar12 = *(long *)(alStack_70[0] + 0x78);
    __ZNSt13exception_ptrD1Ev(&pdStack_d0);
    if (lVar12 == 0) {
      __Znwm(0x40);
      func_0x0064b5e0();
      func_0x0064af20();
      segment_command_00000020.vmaddr = (qword)pdStack_f0;
      pdStack_f0 = (dword *)0x0;
                    /* WARNING: Read-only address (ram,0x00000038) is written */
      lVar12 = *(long *)(alStack_70[0] + 0x80);
      *(undefined8 *)(alStack_70[0] + 0x80) = 0;
      if (lVar12 != 0) {
        func_0x0064b4e4();
      }
      goto LAB_0064a99c;
    }
  }
  FUN_0040d4c8(&pdStack_b0,alStack_70);
LAB_0064a99c:
  FUN_0040d514(&pdStack_c0);
  if (pdStack_b0 != (dword *)0x0) {
    pdStack_c0 = pdStack_b0;
    pqStack_b8 = (qword *)lStack_a8;
    if (lStack_a8 != 0) {
      do {
        func_0x0064b4f0();
      } while (extraout_w10_00 != 0);
    }
    FUN_0064af48(&pdStack_120);
    func_0x0040d2ac(&pdStack_c0);
  }
  lStack_c8 = lStack_98;
  pdStack_d0 = pdStack_a0;
  pdStack_a0 = (dword *)0x0;
  lStack_98 = 0;
  func_0x0040d2ac(&pdStack_b0);
  FUN_0064b244(&pdStack_120);
  func_0x0040d2ac(&pdStack_a0);
  pdVar14 = pdStack_e0;
  pdStack_e0 = (dword *)0x0;
  if (pdVar14 != (dword *)0x0) {
    func_0x0064b4e4();
  }
  func_0x0064b55c();
  func_0x0040d2ac(&pdStack_d0);
  func_0x0064b5b4();
  func_0x0064b5bc();
  FUN_0064b45c(&plStack_138);
  return;
}



/* Entry: 0064abd4; end: 0064abe7;  */

void FUN_0064abd4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  pcVar3 = "vector";
  FUN_0040d774();
  puVar4 = *(undefined8 **)pcVar3;
  puVar2 = *(undefined8 **)((long)pcVar3 + 8);
  puVar1 = (undefined8 *)((long)puVar4 + (param_2[1] - (long)puVar2));
  puVar5 = puVar1;
  for (puVar7 = puVar4; puVar7 != puVar2; puVar7 = puVar7 + 2) {
    uVar8 = *puVar7;
    puVar5[1] = puVar7[1];
    *puVar5 = uVar8;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar5 = puVar5 + 2;
  }
  for (; puVar4 != puVar2; puVar4 = puVar4 + 2) {
    func_0x0063b6c4();
  }
  param_2[1] = puVar1;
  lVar6 = *(long *)pcVar3;
  *(undefined8 **)pcVar3 = puVar1;
  *(long *)((long)pcVar3 + 8) = lVar6;
  param_2[1] = lVar6;
  lVar6 = *(long *)((long)pcVar3 + 8);
  *(undefined8 *)((long)pcVar3 + 8) = param_2[2];
  param_2[2] = lVar6;
  lVar6 = *(long *)((long)pcVar3 + 0x10);
  *(undefined8 *)((long)pcVar3 + 0x10) = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 0064abe8; end: 0064aceb;  */

void FUN_0064abe8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puVar4 = puVar1;
  for (puVar6 = puVar3; puVar6 != puVar2; puVar6 = puVar6 + 2) {
    uVar7 = *puVar6;
    puVar4[1] = puVar6[1];
    *puVar4 = uVar7;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar4 = puVar4 + 2;
  }
  for (; puVar3 != puVar2; puVar3 = puVar3 + 2) {
    func_0x0063b6c4();
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = lVar5;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 0064acec; end: 0064ad33;  */

long * FUN_0064acec(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x10;
    func_0x0063b6c4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0064ad34; end: 0064ad37;  */

void FUN_0064ad34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cbc0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0064ad38; end: 0064ad4b;  */

void FUN_0064ad38(void)

{
  func_0x0064ad58();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064ad4c; end: 0064ad67;  */

void FUN_0064ad4c(long param_1)

{
  long unaff_x19;
  undefined1 auStack_28 [8];
  
  param_1 = param_1 + 0x20;
  func_0x0040d6e0();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040d6d0();
    FUN_0040d340();
    __ZNSt9exceptionD2Ev(auStack_28);
  }
  func_0x0040d2ac(unaff_x19 + 0x18);
  func_0x0040d2ac((long *)(param_1 + 8));
  return;
}



/* Entry: 0064ad68; end: 0064ae47;  */

void FUN_0064ad68(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = param_2;
  lStack_48 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
    do {
      func_0x0064b4f0();
    } while (extraout_w10_00 != 0);
  }
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_40 = param_2;
  lStack_38 = param_3;
  if (lVar4 + -1 == 0) {
    FUN_0040d544(*param_1 + 8);
  }
  func_0x0063b6c4(&uStack_40);
  func_0x0063b6c4(&uStack_50);
  FUN_0040d544(param_1[2]);
  return;
}



/* Entry: 0064ae48; end: 0064ae4b;  */

undefined8 * FUN_0064ae48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cc10;
  func_0x0064aed0(param_1 + 1);
  return param_1;
}



/* Entry: 0064ae4c; end: 0064ae5f;  */

void FUN_0064ae4c(void)

{
  FUN_0064aea4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064ae60; end: 0064aea3;  */

void FUN_0064ae60(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0064b528();
  if (param_3 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
  }
  FUN_0064ad68(param_1 + 8);
  func_0x0064b508();
  return;
}



/* Entry: 0064aea4; end: 0064af47;  */

undefined8 * FUN_0064aea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cc10;
  func_0x0064aed0(param_1 + 1);
  return param_1;
}



/* Entry: 0064af48; end: 0064b243;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0064af48(undefined8 *param_1,undefined8 param_2,long param_3)

{
  qword *pqVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar4;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_108 [40];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [40];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_58 [5];
  
  uStack_128 = param_2;
  lStack_120 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
    do {
      func_0x0064b4f0();
    } while (extraout_w10_00 != 0);
  }
  plVar4 = (long *)*param_1;
  uStack_118 = param_2;
  lStack_110 = param_3;
  if (plVar4[4] != 0) {
    func_0x0064a0dc(plVar4 + 1,plVar4[3]);
    plVar4[3] = 0;
    lVar3 = plVar4[2];
    for (lVar2 = 0; lVar3 != lVar2; lVar2 = lVar2 + 1) {
      *(undefined8 *)(plVar4[1] + lVar2 * 8) = 0;
    }
    plVar4[4] = 0;
  }
  (**(code **)(*plVar4 + 0x18))(auStack_d0,plVar4);
  FUN_0064a064(auStack_108,param_1 + 1);
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  FUN_0063b9c0(auStack_a0,auStack_d0,alStack_58 + 1);
  FUN_0063ba14(alStack_58 + 3,auStack_a0);
  func_0x0063b6c4(auStack_a0);
  func_0x0063b6c4(alStack_58 + 1);
  FUN_0040cf9c(alStack_58);
  FUN_0040cfec(&uStack_70,alStack_58[0]);
  FUN_0064a064(auStack_a0,auStack_108);
  lStack_78 = alStack_58[0];
  alStack_58[0] = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_c0 = alStack_58[3] + 0x38;
  lStack_b8 = CONCAT71(lStack_b8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar2 = alStack_58[3];
  func_0x0063ba54();
  if ((int)lVar2 == 0) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
    *pqVar1 = (qword)&PTR_SUB_00a0cca0;
    FUN_0064a064(pqVar1 + 1,auStack_a0);
    lVar2 = lStack_78;
    lStack_78 = 0;
    pqVar1[6] = lVar2;
    lVar2 = *(long *)(alStack_58[3] + 0x80);
    *(qword **)(alStack_58[3] + 0x80) = pqVar1;
    if (lVar2 != 0) {
      func_0x0064b4e4();
    }
  }
  else {
    FUN_0063ba14(&lStack_b0,alStack_58 + 3);
  }
  FUN_0040d514(&lStack_c0);
  if (lStack_b0 != 0) {
    lStack_c0 = lStack_b0;
    lStack_b8 = lStack_a8;
    if (lStack_a8 != 0) {
      do {
        func_0x0064b4f0();
      } while (extraout_w10_01 != 0);
    }
    FUN_0064b2f0(auStack_a0);
    func_0x0063b6c4(&lStack_c0);
  }
  uStack_d8 = uStack_68;
  uStack_e0 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0063b6c4(&lStack_b0);
  FUN_0064b3b0(auStack_a0);
  func_0x0064b55c();
  lVar2 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar2 != 0) {
    func_0x0064b4e4();
  }
  func_0x0063b6c4(alStack_58 + 3);
  func_0x0040d2ac(&uStack_e0);
  FUN_0063edd4(auStack_108);
  func_0x0064b5d8();
  func_0x0040d2ac(&uStack_118);
  func_0x0040d2ac(&uStack_128);
  FUN_0040d544(param_1[6]);
  return;
}



/* Entry: 0064b244; end: 0064b28f;  */

long FUN_0064b244(long param_1)

{
  FUN_0040d650(param_1 + 0x30);
  FUN_0063edd4(param_1 + 8);
  return param_1;
}



/* Entry: 0064b290; end: 0064b2a3;  */

void FUN_0064b290(void)

{
  func_0x0064b270();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064b2a4; end: 0064b2ef;  */

void FUN_0064b2a4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x0064b528();
  if (param_3 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
  }
  FUN_0064af48(param_1 + 8);
  func_0x0040d2ac(auStack_30);
  return;
}



/* Entry: 0064b2f0; end: 0064b3af;  */

void FUN_0064b2f0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  uStack_58 = param_2;
  lStack_50 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
    do {
      func_0x0064b4f0();
    } while (extraout_w10_00 != 0);
  }
  uStack_48 = param_2;
  lStack_40 = param_3;
  func_0x0063eb0c(param_1,&uStack_31);
  func_0x0063b6c4(&uStack_48);
  func_0x0063b6c4(&uStack_58);
  FUN_0040d544(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 0064b3b0; end: 0064b403;  */

long FUN_0064b3b0(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  FUN_0040d650(param_1 + 0x28);
  func_0x0063f350();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_FUN_009e2c70;
    FUN_0063ee38(unaff_x19,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0063b6c4(unaff_x19 + 0x18);
  func_0x0063b6c4((long *)(param_1 + 8));
  return unaff_x19;
}



/* Entry: 0064b404; end: 0064b417;  */

void FUN_0064b404(void)

{
  func_0x0064b3d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0064b418; end: 0064b45b;  */

void FUN_0064b418(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0064b528();
  if (param_3 != 0) {
    do {
      func_0x0064b4f0();
    } while (extraout_w10 != 0);
  }
  FUN_0064b2f0(param_1 + 8);
  func_0x0064b508();
  return;
}



/* Entry: 0064b45c; end: 0064b4d3;  */

long * FUN_0064b45c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x0063b6c4();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 0064b4d4; end: 0064b607;  */

void FUN_0064b4d4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  param_1 = param_1 + 0x10;
  func_0x0063f350();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_FUN_009e2c70;
    FUN_0063ee38();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0063b6c4(unaff_x19 + 0x18);
  func_0x0063b6c4((long *)(param_1 + 8));
  return;
}



/* Entry: 0064b608; end: 0064b6eb;  */

void FUN_0064b608(undefined1 *param_1)

{
  long *plVar1;
  long alStack_88 [6];
  undefined1 auStack_58 [40];
  
  FUN_0071de14(auStack_58,0);
  FUN_0071c40c(alStack_88);
  plVar1 = alStack_88;
  FUN_0071c654();
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    FUN_0064b708(param_1,auStack_58);
  }
  FUN_0064b724();
  FUN_0071c610(alStack_88);
  func_0x0071e360(auStack_58);
  return;
}



/* Entry: 0064b6ec; end: 0064b707;  */

long FUN_0064b6ec(long *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_128;
  int iStack_120;
  
  if ((char)param_1[1] != '\a') {
    return 0;
  }
  if ((char)param_1[1] == '\0') {
    lVar3 = 0;
  }
  else {
    if ((char)param_1[1] != '\a') {
      func_0x0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71f020);
      (*pcVar1)();
    }
    iStack_120 = param_3 * 4;
    lVar2 = *param_1;
    uStack_128 = param_2;
    FUN_0071f658(lVar2,&uStack_128);
    lVar3 = 0;
    if (*param_1 + 8 != lVar2) {
      lVar3 = lVar2 + 0x30;
    }
    func_0x0071fcb8();
  }
  return lVar3;
}


