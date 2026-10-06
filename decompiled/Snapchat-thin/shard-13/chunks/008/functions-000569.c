/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae051dc; end: 10ae053af;  */

undefined1  [16] FUN_10ae051dc(long param_1,char *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = *(char **)(param_1 + 8);
  pcVar6 = *(char **)(param_1 + 0x10);
  pcVar3 = pcVar5;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (pcVar5 < pcVar6) {
        pcVar3 = pcVar5 + 1;
        *pcVar5 = (char)param_2;
      }
      goto LAB_10ae0536c;
    }
    if (param_3 == 2) {
      uVar8 = (long)pcVar6 - (long)pcVar5;
      lVar2 = param_1;
      pcVar4 = param_2;
      ____mb_cur_max();
      if ((long)uVar8 < (long)(int)lVar2) {
        param_2 = pcVar4;
        if (pcVar6 <= pcVar5) goto LAB_10ae0536c;
        if (2 < uVar8) {
          uVar8 = 3;
        }
        param_2 = "~~~";
      }
      else {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
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
        pcVar4 = pcVar5;
        param_3 = (int)&uStack_d0;
        _wcrtomb();
        if (pcVar4 != (char *)0xffffffffffffffff) {
          pcVar3 = pcVar5 + (long)pcVar4;
          goto LAB_10ae0536c;
        }
        if (pcVar6 <= pcVar5) goto LAB_10ae0536c;
        if (2 < uVar8) {
          uVar8 = 3;
        }
        param_2 = "???";
      }
      goto LAB_10ae0535c;
    }
  }
  else if (((param_3 != 3) && (param_3 != 4)) && (param_3 == 5)) {
    if (pcVar6 <= pcVar5) goto LAB_10ae0536c;
    bVar1 = (int)param_2 != 0;
    param_2 = "false";
    if (bVar1) {
      param_2 = "true";
    }
    uVar7 = 4;
    if (!bVar1) {
      uVar7 = 5;
    }
    uVar8 = (long)pcVar6 - (long)pcVar5;
    if (uVar7 <= (ulong)((long)pcVar6 - (long)pcVar5)) {
      uVar8 = uVar7;
    }
LAB_10ae0535c:
    uVar7 = uVar8;
    _memcpy(pcVar5);
    param_3 = (int)uVar7;
    pcVar3 = pcVar5 + uVar8;
    goto LAB_10ae0536c;
  }
  FUN_10ae053b0();
  param_3 = (int)param_2;
  param_2 = pcVar6;
LAB_10ae0536c:
  *(char **)(param_1 + 8) = pcVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcVar5 = pcVar3;
    if ((pcVar3 != param_2) && (param_3 < 0)) {
      *pcVar3 = '-';
      pcVar5 = pcVar3 + 1;
    }
    pcVar6 = param_2;
    func_0x00010ae04820(pcVar5);
    if (((int)pcVar6 != 0) && (pcVar5 = pcVar3, pcVar3 < param_2)) {
      uVar8 = (long)param_2 - (long)pcVar3;
      if (2 < uVar8) {
        uVar8 = 3;
      }
      pcVar6 = "~~~";
      _memcpy(pcVar3,&UNK_10f6c3454,uVar8);
      pcVar5 = pcVar3 + uVar8;
    }
    auVar10._8_8_ = pcVar6;
    auVar10._0_8_ = pcVar5;
    return auVar10;
  }
  auVar9._8_8_ = (long)pcVar3 - (long)pcVar5;
  auVar9._0_8_ = pcVar5;
  return auVar9;
}



/* Entry: 10ae053b0; end: 10ae0543b;  */

undefined1 * FUN_10ae053b0(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  puVar1 = param_1;
  if ((param_1 != param_2) && ((int)param_3 < 0)) {
    *param_1 = 0x2d;
    param_3 = (ulong)(uint)-(int)param_3;
    puVar1 = param_1 + 1;
  }
  puVar2 = param_2;
  func_0x00010ae04820(puVar1,param_2,param_3);
  if (((int)puVar2 != 0) && (puVar1 = param_1, param_1 < param_2)) {
    uVar3 = (long)param_2 - (long)param_1;
    if (2 < uVar3) {
      uVar3 = 3;
    }
    _memcpy(param_1,&UNK_10f6c3454,uVar3);
    puVar1 = param_1 + uVar3;
  }
  return puVar1;
}



/* Entry: 10ae0543c; end: 10ae0560f;  */

/* WARNING: Possible PIC construction at 0x00010ae05560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae05564) */

undefined1  [16] FUN_10ae0543c(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char acStack_d0 [136];
  long lStack_48;
  
  pcVar5 = acStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = *(char **)(param_1 + 8);
  pcVar6 = *(char **)(param_1 + 0x10);
  iVar7 = (int)param_3;
  pcVar2 = pcVar4;
  if (iVar7 < 3) {
    if (iVar7 == 1) {
      if (pcVar4 < pcVar6) {
        pcVar2 = pcVar4 + 1;
        *pcVar4 = (char)param_2;
      }
    }
    else {
      if (iVar7 != 2) goto FUN_10ae05610;
      pcVar9 = pcVar6 + -(long)pcVar4;
      lVar1 = param_1;
      pcVar3 = param_2;
      ____mb_cur_max();
      if ((long)pcVar9 < (long)(int)lVar1) {
        param_2 = pcVar3;
        if (pcVar4 < pcVar6) {
          if ((char *)0x2 < pcVar9) {
            pcVar9 = (char *)0x3;
          }
          pcVar5 = "~~~";
LAB_10ae055bc:
          param_3 = pcVar9;
          _memcpy(pcVar4);
          pcVar2 = pcVar4 + (long)pcVar9;
          param_2 = pcVar5;
        }
      }
      else {
        acStack_d0[0x68] = '\0';
        acStack_d0[0x69] = '\0';
        acStack_d0[0x6a] = '\0';
        acStack_d0[0x6b] = '\0';
        acStack_d0[0x6c] = '\0';
        acStack_d0[0x6d] = '\0';
        acStack_d0[0x6e] = '\0';
        acStack_d0[0x6f] = '\0';
        acStack_d0[0x60] = '\0';
        acStack_d0[0x61] = '\0';
        acStack_d0[0x62] = '\0';
        acStack_d0[99] = '\0';
        acStack_d0[100] = '\0';
        acStack_d0[0x65] = '\0';
        acStack_d0[0x66] = '\0';
        acStack_d0[0x67] = '\0';
        acStack_d0[0x78] = '\0';
        acStack_d0[0x79] = '\0';
        acStack_d0[0x7a] = '\0';
        acStack_d0[0x7b] = '\0';
        acStack_d0[0x7c] = '\0';
        acStack_d0[0x7d] = '\0';
        acStack_d0[0x7e] = '\0';
        acStack_d0[0x7f] = '\0';
        acStack_d0[0x70] = '\0';
        acStack_d0[0x71] = '\0';
        acStack_d0[0x72] = '\0';
        acStack_d0[0x73] = '\0';
        acStack_d0[0x74] = '\0';
        acStack_d0[0x75] = '\0';
        acStack_d0[0x76] = '\0';
        acStack_d0[0x77] = '\0';
        acStack_d0[0x48] = '\0';
        acStack_d0[0x49] = '\0';
        acStack_d0[0x4a] = '\0';
        acStack_d0[0x4b] = '\0';
        acStack_d0[0x4c] = '\0';
        acStack_d0[0x4d] = '\0';
        acStack_d0[0x4e] = '\0';
        acStack_d0[0x4f] = '\0';
        acStack_d0[0x40] = '\0';
        acStack_d0[0x41] = '\0';
        acStack_d0[0x42] = '\0';
        acStack_d0[0x43] = '\0';
        acStack_d0[0x44] = '\0';
        acStack_d0[0x45] = '\0';
        acStack_d0[0x46] = '\0';
        acStack_d0[0x47] = '\0';
        acStack_d0[0x58] = '\0';
        acStack_d0[0x59] = '\0';
        acStack_d0[0x5a] = '\0';
        acStack_d0[0x5b] = '\0';
        acStack_d0[0x5c] = '\0';
        acStack_d0[0x5d] = '\0';
        acStack_d0[0x5e] = '\0';
        acStack_d0[0x5f] = '\0';
        acStack_d0[0x50] = '\0';
        acStack_d0[0x51] = '\0';
        acStack_d0[0x52] = '\0';
        acStack_d0[0x53] = '\0';
        acStack_d0[0x54] = '\0';
        acStack_d0[0x55] = '\0';
        acStack_d0[0x56] = '\0';
        acStack_d0[0x57] = '\0';
        acStack_d0[0x28] = '\0';
        acStack_d0[0x29] = '\0';
        acStack_d0[0x2a] = '\0';
        acStack_d0[0x2b] = '\0';
        acStack_d0[0x2c] = '\0';
        acStack_d0[0x2d] = '\0';
        acStack_d0[0x2e] = '\0';
        acStack_d0[0x2f] = '\0';
        acStack_d0[0x20] = '\0';
        acStack_d0[0x21] = '\0';
        acStack_d0[0x22] = '\0';
        acStack_d0[0x23] = '\0';
        acStack_d0[0x24] = '\0';
        acStack_d0[0x25] = '\0';
        acStack_d0[0x26] = '\0';
        acStack_d0[0x27] = '\0';
        acStack_d0[0x38] = '\0';
        acStack_d0[0x39] = '\0';
        acStack_d0[0x3a] = '\0';
        acStack_d0[0x3b] = '\0';
        acStack_d0[0x3c] = '\0';
        acStack_d0[0x3d] = '\0';
        acStack_d0[0x3e] = '\0';
        acStack_d0[0x3f] = '\0';
        acStack_d0[0x30] = '\0';
        acStack_d0[0x31] = '\0';
        acStack_d0[0x32] = '\0';
        acStack_d0[0x33] = '\0';
        acStack_d0[0x34] = '\0';
        acStack_d0[0x35] = '\0';
        acStack_d0[0x36] = '\0';
        acStack_d0[0x37] = '\0';
        acStack_d0[8] = '\0';
        acStack_d0[9] = '\0';
        acStack_d0[10] = '\0';
        acStack_d0[0xb] = '\0';
        acStack_d0[0xc] = '\0';
        acStack_d0[0xd] = '\0';
        acStack_d0[0xe] = '\0';
        acStack_d0[0xf] = '\0';
        acStack_d0[0] = '\0';
        acStack_d0[1] = '\0';
        acStack_d0[2] = '\0';
        acStack_d0[3] = '\0';
        acStack_d0[4] = '\0';
        acStack_d0[5] = '\0';
        acStack_d0[6] = '\0';
        acStack_d0[7] = '\0';
        acStack_d0[0x18] = '\0';
        acStack_d0[0x19] = '\0';
        acStack_d0[0x1a] = '\0';
        acStack_d0[0x1b] = '\0';
        acStack_d0[0x1c] = '\0';
        acStack_d0[0x1d] = '\0';
        acStack_d0[0x1e] = '\0';
        acStack_d0[0x1f] = '\0';
        acStack_d0[0x10] = '\0';
        acStack_d0[0x11] = '\0';
        acStack_d0[0x12] = '\0';
        acStack_d0[0x13] = '\0';
        acStack_d0[0x14] = '\0';
        acStack_d0[0x15] = '\0';
        acStack_d0[0x16] = '\0';
        acStack_d0[0x17] = '\0';
        pcVar3 = pcVar4;
        _wcrtomb();
        param_3 = pcVar5;
        if (pcVar3 == (char *)0xffffffffffffffff) {
          if (pcVar4 < pcVar6) {
            if ((char *)0x2 < pcVar9) {
              pcVar9 = (char *)0x3;
            }
            pcVar5 = "???";
            goto LAB_10ae055bc;
          }
        }
        else {
          pcVar2 = pcVar4 + (long)pcVar3;
        }
      }
    }
  }
  else {
    if (((iVar7 == 3) || (iVar7 == 4)) || (iVar7 != 5)) goto FUN_10ae05610;
    if (pcVar4 < pcVar6) {
      pcVar5 = "false";
      if (param_2 != (char *)0x0) {
        pcVar5 = "true";
      }
      pcVar2 = (char *)0x4;
      if (param_2 == (char *)0x0) {
        pcVar2 = (char *)0x5;
      }
      pcVar9 = pcVar6 + -(long)pcVar4;
      if (pcVar2 <= pcVar6 + -(long)pcVar4) {
        pcVar9 = pcVar2;
      }
      goto LAB_10ae055bc;
    }
  }
  *(char **)(param_1 + 8) = pcVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar10._8_8_ = (long)pcVar2 - (long)pcVar4;
    auVar10._0_8_ = pcVar4;
    return auVar10;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcVar4 = pcVar2;
  pcVar6 = param_2;
  param_2 = param_3;
FUN_10ae05610:
  pcVar2 = pcVar4;
  if ((pcVar4 != pcVar6) && ((long)param_2 < 0)) {
    *pcVar4 = '-';
    pcVar2 = pcVar4 + 1;
  }
  pcVar5 = pcVar6;
  func_0x00010ae0569c(pcVar2);
  if (((int)pcVar5 != 0) && (pcVar2 = pcVar4, pcVar4 < pcVar6)) {
    uVar8 = (long)pcVar6 - (long)pcVar4;
    if (2 < uVar8) {
      uVar8 = 3;
    }
    pcVar5 = "~~~";
    _memcpy(pcVar4,&UNK_10f6c3454,uVar8);
    pcVar2 = pcVar4 + uVar8;
  }
  auVar11._8_8_ = pcVar5;
  auVar11._0_8_ = pcVar2;
  return auVar11;
}



/* Entry: 10ae05610; end: 10ae057fb;  */

undefined1 * FUN_10ae05610(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  puVar1 = param_1;
  if ((param_1 != param_2) && (param_3 < 0)) {
    *param_1 = 0x2d;
    param_3 = -param_3;
    puVar1 = param_1 + 1;
  }
  puVar2 = param_2;
  func_0x00010ae0569c(puVar1,param_2,param_3);
  if (((int)puVar2 != 0) && (puVar1 = param_1, param_1 < param_2)) {
    uVar3 = (long)param_2 - (long)param_1;
    if (2 < uVar3) {
      uVar3 = 3;
    }
    _memcpy(param_1,&UNK_10f6c3454,uVar3);
    puVar1 = param_1 + uVar3;
  }
  return puVar1;
}



/* Entry: 10ae057fc; end: 10ae05863;  */

int FUN_10ae057fc(ulong param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_1 < param_2) {
    return 1;
  }
  uVar1 = param_2 * param_2;
  uVar5 = (ulong)(uVar1 * uVar1);
  iVar3 = 4;
  do {
    iVar4 = iVar3;
    if (param_1 < uVar1) {
      return iVar4 + -2;
    }
    if (param_1 < uVar1 * param_2) {
      return iVar4 + -1;
    }
    if (param_1 < uVar5) {
      return iVar4;
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = param_1 / uVar5;
    }
    param_1 = uVar2;
    iVar3 = iVar4 + 4;
  } while (param_2 <= uVar2);
  return iVar4 + 1;
}



/* Entry: 10ae05864; end: 10ae058e7;  */

/* WARNING: Possible PIC construction at 0x00010ae058c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae058c8) */

byte * FUN_10ae05864(byte *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x20 != 0) {
    if (param_2 < 10000000000) {
      *(undefined2 *)param_1 = *(undefined2 *)(&UNK_10e51689f + (param_2 / 50000000 & 0xfffffffe));
      uVar3 = (int)param_2 + (int)(param_2 / 100000000) * -100000000;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar3 / 1000000) * 2);
      uVar3 = uVar3 % 1000000;
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar3 / 10000) * 2);
      uVar3 = uVar3 % 10000;
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar3 / 100) * 2);
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar3 % 100) * 2);
      return param_1 + 10;
    }
    param_2 = param_2 / 10000000000;
  }
  uVar3 = (uint)param_2;
  if (999999 < uVar3) {
    if (99999999 < uVar3) {
      if (999999999 < uVar3) {
        *(undefined2 *)param_1 =
             *(undefined2 *)(&UNK_10e51689f + ((param_2 & 0xffffffff) / 100000000) * 2);
        uVar3 = uVar3 + (int)((param_2 & 0xffffffff) / 100000000) * -100000000;
        *(undefined2 *)(param_1 + 2) =
             *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar3 / 1000000) * 2);
        uVar3 = uVar3 % 1000000;
        *(undefined2 *)(param_1 + 4) = *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar3 / 10000) * 2);
        uVar3 = uVar3 % 10000;
        *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar3 / 100) * 2);
        *(undefined2 *)(param_1 + 8) = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar3 % 100) * 2);
        return param_1 + 10;
      }
      *param_1 = (byte)((param_2 & 0xffffffff) / 100000000) | 0x30;
      uVar3 = uVar3 + (int)((param_2 & 0xffffffff) / 100000000) * -100000000;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar3 / 1000000) * 2);
      uVar3 = uVar3 % 1000000;
      *(undefined2 *)(param_1 + 3) = *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar3 / 10000) * 2);
      uVar3 = uVar3 % 10000;
      *(undefined2 *)(param_1 + 5) = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar3 / 100) * 2);
      *(undefined2 *)(param_1 + 7) = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar3 % 100) * 2);
      return param_1 + 9;
    }
    param_2 = param_2 & 0xffffffff;
    if (9999999 < uVar3) {
      *(undefined2 *)param_1 = *(undefined2 *)(&UNK_10e51689f + (param_2 / 1000000) * 2);
      uVar3 = uVar3 + (int)(param_2 / 1000000) * -1000000;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar3 / 10000) * 2);
      uVar3 = uVar3 % 10000;
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar3 / 100) * 2);
      *(undefined2 *)(param_1 + 6) = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar3 % 100) * 2);
      return param_1 + 8;
    }
    *param_1 = (char)(param_2 / 1000000) + 0x30;
    uVar3 = uVar3 + (int)(param_2 / 1000000) * -1000000;
    uVar4 = (ulong)uVar3 * 0x68db9;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&UNK_10e51689f + (uVar4 >> 0x20) * 2);
    uVar3 = uVar3 + (int)(uVar4 >> 0x20) * -10000;
    uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(&UNK_10e51689f + (ulong)uVar1 * 2);
    *(undefined2 *)(param_1 + 5) =
         *(undefined2 *)(&UNK_10e51689f + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
    return param_1 + 7;
  }
  if (0x270 < uVar3 >> 4) {
    param_2 = param_2 & 0xffffffff;
    if (0xc34 < uVar3 >> 5) {
      *(undefined2 *)param_1 = *(undefined2 *)(&UNK_10e51689f + (param_2 / 10000) * 2);
      uVar3 = uVar3 + (int)(param_2 / 10000) * -10000;
      uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(&UNK_10e51689f + (ulong)uVar1 * 2);
      *(undefined2 *)(param_1 + 4) =
           *(undefined2 *)(&UNK_10e51689f + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
      return param_1 + 6;
    }
    *param_1 = (byte)(param_2 / 10000) | 0x30;
    iVar2 = uVar3 + (int)(param_2 / 10000) * -10000;
    uVar3 = (uint)(iVar2 * 0x147b) >> 0x13;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(&UNK_10e51689f + (ulong)uVar3 * 2);
    *(undefined2 *)(param_1 + 3) =
         *(undefined2 *)(&UNK_10e51689f + ((ulong)(iVar2 + uVar3 * -100) & 0xffff) * 2);
    return param_1 + 5;
  }
  if (99 < uVar3) {
    uVar1 = (uVar3 >> 2 & 0x3fff) / 0x19;
    if (999 < uVar3) {
      *(undefined2 *)param_1 = *(undefined2 *)(&UNK_10e51689f + (ulong)uVar1 * 2);
      *(undefined2 *)(param_1 + 2) =
           *(undefined2 *)(&UNK_10e51689f + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
      return param_1 + 4;
    }
    *param_1 = (byte)uVar1 | 0x30;
    *(undefined2 *)(param_1 + 1) =
         *(undefined2 *)(&UNK_10e51689f + ((ulong)(uVar3 + uVar1 * -100) & 0xffff) * 2);
    return param_1 + 3;
  }
  if (9 < uVar3) {
    *(undefined2 *)param_1 = *(undefined2 *)(&UNK_10e51689f + (param_2 & 0xffffffff) * 2);
    return param_1 + 2;
  }
  *param_1 = (byte)param_2 | 0x30;
  return param_1 + 1;
}



/* Entry: 10ae058e8; end: 10ae05b73;  */

undefined2 * FUN_10ae058e8(undefined2 *param_1,ulong param_2)

{
  uint uVar1;
  
  *param_1 = *(undefined2 *)(&UNK_10e51689f + (param_2 / 50000000 & 0xfffffffe));
  uVar1 = (int)param_2 + (int)(param_2 / 100000000) * -100000000;
  param_1[1] = *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar1 / 1000000) * 2);
  uVar1 = uVar1 % 1000000;
  param_1[2] = *(undefined2 *)(&UNK_10e51689f + ((ulong)uVar1 / 10000) * 2);
  uVar1 = uVar1 % 10000;
  param_1[3] = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar1 / 100) * 2);
  param_1[4] = *(undefined2 *)(&UNK_10e51689f + (ulong)(uVar1 % 100) * 2);
  return param_1 + 5;
}



/* Entry: 10ae05b74; end: 10ae05d47;  */

undefined1  [16] FUN_10ae05b74(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char acStack_d0 [136];
  long lStack_48;
  
  pcVar6 = acStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = *(char **)(param_1 + 8);
  pcVar5 = *(char **)(param_1 + 0x10);
  iVar7 = (int)param_3;
  pcVar2 = pcVar4;
  if (iVar7 < 3) {
    if (iVar7 == 1) {
      if (pcVar4 < pcVar5) {
        pcVar2 = pcVar4 + 1;
        *pcVar4 = (char)param_2;
      }
      goto LAB_10ae05d04;
    }
    if (iVar7 == 2) {
      pcVar9 = pcVar5 + -(long)pcVar4;
      lVar1 = param_1;
      pcVar3 = param_2;
      ____mb_cur_max();
      if ((long)pcVar9 < (long)(int)lVar1) {
        param_2 = pcVar3;
        if (pcVar5 <= pcVar4) goto LAB_10ae05d04;
        if ((char *)0x2 < pcVar9) {
          pcVar9 = (char *)0x3;
        }
        pcVar6 = "~~~";
      }
      else {
        acStack_d0[0x68] = '\0';
        acStack_d0[0x69] = '\0';
        acStack_d0[0x6a] = '\0';
        acStack_d0[0x6b] = '\0';
        acStack_d0[0x6c] = '\0';
        acStack_d0[0x6d] = '\0';
        acStack_d0[0x6e] = '\0';
        acStack_d0[0x6f] = '\0';
        acStack_d0[0x60] = '\0';
        acStack_d0[0x61] = '\0';
        acStack_d0[0x62] = '\0';
        acStack_d0[99] = '\0';
        acStack_d0[100] = '\0';
        acStack_d0[0x65] = '\0';
        acStack_d0[0x66] = '\0';
        acStack_d0[0x67] = '\0';
        acStack_d0[0x78] = '\0';
        acStack_d0[0x79] = '\0';
        acStack_d0[0x7a] = '\0';
        acStack_d0[0x7b] = '\0';
        acStack_d0[0x7c] = '\0';
        acStack_d0[0x7d] = '\0';
        acStack_d0[0x7e] = '\0';
        acStack_d0[0x7f] = '\0';
        acStack_d0[0x70] = '\0';
        acStack_d0[0x71] = '\0';
        acStack_d0[0x72] = '\0';
        acStack_d0[0x73] = '\0';
        acStack_d0[0x74] = '\0';
        acStack_d0[0x75] = '\0';
        acStack_d0[0x76] = '\0';
        acStack_d0[0x77] = '\0';
        acStack_d0[0x48] = '\0';
        acStack_d0[0x49] = '\0';
        acStack_d0[0x4a] = '\0';
        acStack_d0[0x4b] = '\0';
        acStack_d0[0x4c] = '\0';
        acStack_d0[0x4d] = '\0';
        acStack_d0[0x4e] = '\0';
        acStack_d0[0x4f] = '\0';
        acStack_d0[0x40] = '\0';
        acStack_d0[0x41] = '\0';
        acStack_d0[0x42] = '\0';
        acStack_d0[0x43] = '\0';
        acStack_d0[0x44] = '\0';
        acStack_d0[0x45] = '\0';
        acStack_d0[0x46] = '\0';
        acStack_d0[0x47] = '\0';
        acStack_d0[0x58] = '\0';
        acStack_d0[0x59] = '\0';
        acStack_d0[0x5a] = '\0';
        acStack_d0[0x5b] = '\0';
        acStack_d0[0x5c] = '\0';
        acStack_d0[0x5d] = '\0';
        acStack_d0[0x5e] = '\0';
        acStack_d0[0x5f] = '\0';
        acStack_d0[0x50] = '\0';
        acStack_d0[0x51] = '\0';
        acStack_d0[0x52] = '\0';
        acStack_d0[0x53] = '\0';
        acStack_d0[0x54] = '\0';
        acStack_d0[0x55] = '\0';
        acStack_d0[0x56] = '\0';
        acStack_d0[0x57] = '\0';
        acStack_d0[0x28] = '\0';
        acStack_d0[0x29] = '\0';
        acStack_d0[0x2a] = '\0';
        acStack_d0[0x2b] = '\0';
        acStack_d0[0x2c] = '\0';
        acStack_d0[0x2d] = '\0';
        acStack_d0[0x2e] = '\0';
        acStack_d0[0x2f] = '\0';
        acStack_d0[0x20] = '\0';
        acStack_d0[0x21] = '\0';
        acStack_d0[0x22] = '\0';
        acStack_d0[0x23] = '\0';
        acStack_d0[0x24] = '\0';
        acStack_d0[0x25] = '\0';
        acStack_d0[0x26] = '\0';
        acStack_d0[0x27] = '\0';
        acStack_d0[0x38] = '\0';
        acStack_d0[0x39] = '\0';
        acStack_d0[0x3a] = '\0';
        acStack_d0[0x3b] = '\0';
        acStack_d0[0x3c] = '\0';
        acStack_d0[0x3d] = '\0';
        acStack_d0[0x3e] = '\0';
        acStack_d0[0x3f] = '\0';
        acStack_d0[0x30] = '\0';
        acStack_d0[0x31] = '\0';
        acStack_d0[0x32] = '\0';
        acStack_d0[0x33] = '\0';
        acStack_d0[0x34] = '\0';
        acStack_d0[0x35] = '\0';
        acStack_d0[0x36] = '\0';
        acStack_d0[0x37] = '\0';
        acStack_d0[8] = '\0';
        acStack_d0[9] = '\0';
        acStack_d0[10] = '\0';
        acStack_d0[0xb] = '\0';
        acStack_d0[0xc] = '\0';
        acStack_d0[0xd] = '\0';
        acStack_d0[0xe] = '\0';
        acStack_d0[0xf] = '\0';
        acStack_d0[0] = '\0';
        acStack_d0[1] = '\0';
        acStack_d0[2] = '\0';
        acStack_d0[3] = '\0';
        acStack_d0[4] = '\0';
        acStack_d0[5] = '\0';
        acStack_d0[6] = '\0';
        acStack_d0[7] = '\0';
        acStack_d0[0x18] = '\0';
        acStack_d0[0x19] = '\0';
        acStack_d0[0x1a] = '\0';
        acStack_d0[0x1b] = '\0';
        acStack_d0[0x1c] = '\0';
        acStack_d0[0x1d] = '\0';
        acStack_d0[0x1e] = '\0';
        acStack_d0[0x1f] = '\0';
        acStack_d0[0x10] = '\0';
        acStack_d0[0x11] = '\0';
        acStack_d0[0x12] = '\0';
        acStack_d0[0x13] = '\0';
        acStack_d0[0x14] = '\0';
        acStack_d0[0x15] = '\0';
        acStack_d0[0x16] = '\0';
        acStack_d0[0x17] = '\0';
        pcVar3 = pcVar4;
        _wcrtomb();
        param_3 = pcVar6;
        if (pcVar3 != (char *)0xffffffffffffffff) {
          pcVar2 = pcVar4 + (long)pcVar3;
          goto LAB_10ae05d04;
        }
        if (pcVar5 <= pcVar4) goto LAB_10ae05d04;
        if ((char *)0x2 < pcVar9) {
          pcVar9 = (char *)0x3;
        }
        pcVar6 = "???";
      }
      goto LAB_10ae05cf4;
    }
  }
  else if (((iVar7 != 3) && (iVar7 != 4)) && (iVar7 == 5)) {
    if (pcVar5 <= pcVar4) goto LAB_10ae05d04;
    pcVar6 = "false";
    if (param_2 != (char *)0x0) {
      pcVar6 = "true";
    }
    pcVar2 = (char *)0x4;
    if (param_2 == (char *)0x0) {
      pcVar2 = (char *)0x5;
    }
    pcVar9 = pcVar5 + -(long)pcVar4;
    if (pcVar2 <= pcVar5 + -(long)pcVar4) {
      pcVar9 = pcVar2;
    }
LAB_10ae05cf4:
    param_3 = pcVar9;
    _memcpy(pcVar4);
    pcVar2 = pcVar4 + (long)pcVar9;
    param_2 = pcVar6;
    goto LAB_10ae05d04;
  }
  param_3 = param_2;
  FUN_10ae05d48();
  param_2 = pcVar5;
LAB_10ae05d04:
  *(char **)(param_1 + 8) = pcVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcVar4 = pcVar2;
    if ((pcVar2 != param_2) && ((long)param_3 < 0)) {
      *pcVar2 = '-';
      pcVar4 = pcVar2 + 1;
    }
    pcVar5 = param_2;
    func_0x00010ae0569c(pcVar4);
    if (((int)pcVar5 != 0) && (pcVar4 = pcVar2, pcVar2 < param_2)) {
      uVar8 = (long)param_2 - (long)pcVar2;
      if (2 < uVar8) {
        uVar8 = 3;
      }
      pcVar5 = "~~~";
      _memcpy(pcVar2,&UNK_10f6c3454,uVar8);
      pcVar4 = pcVar2 + uVar8;
    }
    auVar11._8_8_ = pcVar5;
    auVar11._0_8_ = pcVar4;
    return auVar11;
  }
  auVar10._8_8_ = (long)pcVar2 - (long)pcVar4;
  auVar10._0_8_ = pcVar4;
  return auVar10;
}



/* Entry: 10ae05d48; end: 10ae05dd3;  */

undefined1 * FUN_10ae05d48(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  puVar1 = param_1;
  if ((param_1 != param_2) && (param_3 < 0)) {
    *param_1 = 0x2d;
    param_3 = -param_3;
    puVar1 = param_1 + 1;
  }
  puVar2 = param_2;
  func_0x00010ae0569c(puVar1,param_2,param_3);
  if (((int)puVar2 != 0) && (puVar1 = param_1, param_1 < param_2)) {
    uVar3 = (long)param_2 - (long)param_1;
    if (2 < uVar3) {
      uVar3 = 3;
    }
    _memcpy(param_1,&UNK_10f6c3454,uVar3);
    puVar1 = param_1 + uVar3;
  }
  return puVar1;
}



/* Entry: 10ae05dd4; end: 10ae06023;  */

undefined1  [16] FUN_10ae05dd4(long param_1,ulong *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  char *pcVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_388;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2b8;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
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
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  long lStack_118;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = *(ulong **)(param_1 + 8);
  puVar3 = *(ulong **)(param_1 + 0x10);
  uVar18 = (uint)param_2;
  puVar7 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar7 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae05fe0;
    }
    if (param_3 == 2) {
      uVar14 = (long)puVar3 - (long)puVar10;
      lVar16 = param_1;
      ____mb_cur_max();
      if ((long)(int)lVar16 <= (long)uVar14) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
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
        param_2 = (ulong *)(ulong)(uVar18 & 0xff);
        puVar8 = puVar10;
        param_3 = (uint)&uStack_d0;
        _wcrtomb();
        if (puVar8 == (ulong *)0xffffffffffffffff) {
          if (puVar10 < puVar3) {
            if (2 < uVar14) {
              uVar14 = 3;
            }
            param_2 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae05ef0;
          }
        }
        else {
          puVar7 = (ulong *)((long)puVar10 + (long)puVar8);
        }
        goto LAB_10ae05fe0;
      }
      if (puVar3 <= puVar10) goto LAB_10ae05fe0;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae05ee8;
    }
LAB_10ae05f1c:
    uVar18 = uVar18 & 0xff;
    param_2 = (ulong *)(ulong)uVar18;
    uVar14 = (long)puVar3 - (long)puVar10;
    if (((long)uVar14 < 10) &&
       (uVar5 = (uint)((0x20 - (int)LZCOUNT(uVar18 | 1)) * 0x4d1) >> 0xc,
       (long)uVar14 <
       (long)(ulong)((uVar5 - (uVar18 < *(uint *)(&UNK_10de6dc90 + (ulong)uVar5 * 4))) + 1))) {
      if (puVar3 <= puVar10) goto LAB_10ae05fe0;
      goto LAB_10ae05edc;
    }
    func_0x00010ae049e0();
  }
  else {
    if (param_3 == 3) {
      param_3 = uVar18 & 0xff;
      param_2 = puVar3;
      func_0x00010ae04e38();
      iVar11 = (int)param_2;
joined_r0x00010ae05eb0:
      if ((iVar11 == 0) || (puVar7 = puVar10, puVar3 <= puVar10)) goto LAB_10ae05fe0;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae05edc:
      if (2 < uVar14) {
        uVar14 = 3;
      }
LAB_10ae05ee8:
      param_2 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        param_3 = uVar18 & 0xff;
        param_2 = puVar3;
        func_0x00010ae04edc();
        iVar11 = (int)param_2;
        goto joined_r0x00010ae05eb0;
      }
      if (param_3 != 5) goto LAB_10ae05f1c;
      if (puVar3 <= puVar10) goto LAB_10ae05fe0;
      bVar6 = ((ulong)param_2 & 0xff) != 0;
      param_2 = (ulong *)&DAT_10f6842c6;
      if (bVar6) {
        param_2 = (ulong *)"true";
      }
      uVar13 = 4;
      if (!bVar6) {
        uVar13 = 5;
      }
      uVar14 = (long)puVar3 - (long)puVar10;
      if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
        uVar14 = uVar13;
      }
    }
LAB_10ae05ef0:
    uVar13 = uVar14;
    _memcpy(puVar10);
    param_3 = (uint)uVar13;
    puVar7 = (ulong *)((long)puVar10 + uVar14);
  }
LAB_10ae05fe0:
  *(ulong **)(param_1 + 8) = puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar19._8_8_ = (long)puVar7 - (long)puVar10;
    auVar19._0_8_ = puVar10;
    return auVar19;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (ulong *)puVar7[1];
  puVar3 = (ulong *)puVar7[2];
  uVar18 = (uint)param_2;
  puVar8 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar8 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae06230;
    }
    if (param_3 == 2) {
      uVar14 = (long)puVar3 - (long)puVar10;
      puVar9 = puVar7;
      ____mb_cur_max();
      if ((long)(int)puVar9 <= (long)uVar14) {
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        param_2 = (ulong *)(ulong)(uVar18 & 0xffff);
        puVar9 = puVar10;
        param_3 = (uint)&uStack_1a0;
        _wcrtomb();
        if (puVar9 == (ulong *)0xffffffffffffffff) {
          if (puVar10 < puVar3) {
            if (2 < uVar14) {
              uVar14 = 3;
            }
            param_2 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae06140;
          }
        }
        else {
          puVar8 = (ulong *)((long)puVar10 + (long)puVar9);
        }
        goto LAB_10ae06230;
      }
      if (puVar3 <= puVar10) goto LAB_10ae06230;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae06138;
    }
LAB_10ae0616c:
    uVar18 = uVar18 & 0xffff;
    param_2 = (ulong *)(ulong)uVar18;
    uVar14 = (long)puVar3 - (long)puVar10;
    if (((long)uVar14 < 10) &&
       (uVar5 = (uint)((0x20 - (int)LZCOUNT(uVar18 | 1)) * 0x4d1) >> 0xc,
       (long)uVar14 <
       (long)(ulong)((uVar5 - (uVar18 < *(uint *)(&UNK_10de6dc90 + (ulong)uVar5 * 4))) + 1))) {
      if (puVar3 <= puVar10) goto LAB_10ae06230;
      goto LAB_10ae0612c;
    }
    func_0x00010ae049e0();
  }
  else {
    if (param_3 == 3) {
      param_3 = uVar18 & 0xffff;
      param_2 = puVar3;
      func_0x00010ae04e38();
      iVar11 = (int)param_2;
joined_r0x00010ae06100:
      if ((iVar11 == 0) || (puVar8 = puVar10, puVar3 <= puVar10)) goto LAB_10ae06230;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae0612c:
      if (2 < uVar14) {
        uVar14 = 3;
      }
LAB_10ae06138:
      param_2 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        param_3 = uVar18 & 0xffff;
        param_2 = puVar3;
        func_0x00010ae04edc();
        iVar11 = (int)param_2;
        goto joined_r0x00010ae06100;
      }
      if (param_3 != 5) goto LAB_10ae0616c;
      if (puVar3 <= puVar10) goto LAB_10ae06230;
      bVar6 = ((ulong)param_2 & 0xffff) != 0;
      param_2 = (ulong *)&DAT_10f6842c6;
      if (bVar6) {
        param_2 = (ulong *)"true";
      }
      uVar13 = 4;
      if (!bVar6) {
        uVar13 = 5;
      }
      uVar14 = (long)puVar3 - (long)puVar10;
      if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
        uVar14 = uVar13;
      }
    }
LAB_10ae06140:
    uVar13 = uVar14;
    _memcpy(puVar10);
    param_3 = (uint)uVar13;
    puVar8 = (ulong *)((long)puVar10 + uVar14);
  }
LAB_10ae06230:
  puVar7[1] = (ulong)puVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    auVar20._8_8_ = (long)puVar8 - (long)puVar10;
    auVar20._0_8_ = puVar10;
    return auVar20;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (ulong *)puVar8[1];
  puVar3 = (ulong *)puVar8[2];
  uVar18 = (uint)param_2;
  puVar7 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar7 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae06480;
    }
    if (param_3 == 2) {
      uVar14 = (long)puVar3 - (long)puVar10;
      puVar9 = puVar8;
      puVar12 = param_2;
      ____mb_cur_max();
      if ((long)(int)puVar9 <= (long)uVar14) {
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        puVar9 = puVar10;
        param_3 = (uint)&uStack_270;
        _wcrtomb();
        if (puVar9 == (ulong *)0xffffffffffffffff) {
          if (puVar10 < puVar3) {
            if (2 < uVar14) {
              uVar14 = 3;
            }
            param_2 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae06390;
          }
        }
        else {
          puVar7 = (ulong *)((long)puVar10 + (long)puVar9);
        }
        goto LAB_10ae06480;
      }
      param_2 = puVar12;
      if (puVar3 <= puVar10) goto LAB_10ae06480;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae06388;
    }
LAB_10ae063bc:
    uVar14 = (long)puVar3 - (long)puVar10;
    if (((long)uVar14 < 10) &&
       (uVar5 = (uint)((0x20 - (int)LZCOUNT(uVar18 | 1)) * 0x4d1) >> 0xc,
       (long)uVar14 <
       (long)(ulong)((uVar5 - (uVar18 < *(uint *)(&UNK_10de6dc90 + (ulong)uVar5 * 4))) + 1))) {
      if (puVar3 <= puVar10) goto LAB_10ae06480;
      goto LAB_10ae0637c;
    }
    func_0x00010ae049e0();
  }
  else {
    puVar9 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae04e38();
      param_3 = (uint)param_2;
      iVar11 = (int)puVar9;
joined_r0x00010ae06350:
      param_2 = puVar9;
      if ((iVar11 == 0) || (puVar7 = puVar10, puVar3 <= puVar10)) goto LAB_10ae06480;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae0637c:
      if (2 < uVar14) {
        uVar14 = 3;
      }
LAB_10ae06388:
      param_2 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        func_0x00010ae04edc();
        param_3 = (uint)param_2;
        iVar11 = (int)puVar9;
        goto joined_r0x00010ae06350;
      }
      if (param_3 != 5) goto LAB_10ae063bc;
      if (puVar3 <= puVar10) goto LAB_10ae06480;
      param_2 = (ulong *)&DAT_10f6842c6;
      if (uVar18 != 0) {
        param_2 = (ulong *)"true";
      }
      uVar13 = 4;
      if (uVar18 == 0) {
        uVar13 = 5;
      }
      uVar14 = (long)puVar3 - (long)puVar10;
      if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
        uVar14 = uVar13;
      }
    }
LAB_10ae06390:
    uVar13 = uVar14;
    _memcpy(puVar10);
    param_3 = (uint)uVar13;
    puVar7 = (ulong *)((long)puVar10 + uVar14);
  }
LAB_10ae06480:
  puVar8[1] = (ulong)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    auVar21._8_8_ = (long)puVar7 - (long)puVar10;
    auVar21._0_8_ = puVar10;
    return auVar21;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (ulong *)puVar7[1];
  puVar3 = (ulong *)puVar7[2];
  puVar8 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar8 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae066d0;
    }
    if (param_3 == 2) {
      uVar14 = (long)puVar3 - (long)puVar10;
      puVar9 = puVar7;
      puVar12 = param_2;
      ____mb_cur_max();
      if ((long)(int)puVar9 <= (long)uVar14) {
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        puVar9 = puVar10;
        param_3 = (uint)&uStack_340;
        _wcrtomb();
        if (puVar9 == (ulong *)0xffffffffffffffff) {
          if (puVar10 < puVar3) {
            if (2 < uVar14) {
              uVar14 = 3;
            }
            puVar9 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae065e0;
          }
        }
        else {
          puVar8 = (ulong *)((long)puVar10 + (long)puVar9);
        }
        goto LAB_10ae066d0;
      }
      param_2 = puVar12;
      if (puVar3 <= puVar10) goto LAB_10ae066d0;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae065d8;
    }
LAB_10ae0660c:
    uVar14 = (long)puVar3 - (long)puVar10;
    if (((long)uVar14 < 0x14) &&
       (uVar18 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
       (long)uVar14 <
       (long)(ulong)((uVar18 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar18 * 8))) + 1))) {
      if (puVar3 <= puVar10) goto LAB_10ae066d0;
      goto LAB_10ae065cc;
    }
    FUN_10ae05864();
  }
  else {
    puVar9 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae05a34();
      param_3 = (uint)param_2;
      iVar11 = (int)puVar9;
joined_r0x00010ae065a0:
      param_2 = puVar9;
      if ((iVar11 == 0) || (puVar8 = puVar10, puVar3 <= puVar10)) goto LAB_10ae066d0;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae065cc:
      if (2 < uVar14) {
        uVar14 = 3;
      }
LAB_10ae065d8:
      puVar9 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        func_0x00010ae05ad8();
        param_3 = (uint)param_2;
        iVar11 = (int)puVar9;
        goto joined_r0x00010ae065a0;
      }
      if (param_3 != 5) goto LAB_10ae0660c;
      if (puVar3 <= puVar10) goto LAB_10ae066d0;
      puVar9 = (ulong *)&DAT_10f6842c6;
      if (param_2 != (ulong *)0x0) {
        puVar9 = (ulong *)"true";
      }
      uVar13 = 4;
      if (param_2 == (ulong *)0x0) {
        uVar13 = 5;
      }
      uVar14 = (long)puVar3 - (long)puVar10;
      if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
        uVar14 = uVar13;
      }
    }
LAB_10ae065e0:
    uVar13 = uVar14;
    _memcpy(puVar10);
    param_3 = (uint)uVar13;
    puVar8 = (ulong *)((long)puVar10 + uVar14);
    param_2 = puVar9;
  }
LAB_10ae066d0:
  puVar7[1] = (ulong)puVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    auVar22._8_8_ = (long)puVar8 - (long)puVar10;
    auVar22._0_8_ = puVar10;
    return auVar22;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (ulong *)puVar8[1];
  puVar3 = (ulong *)puVar8[2];
  puVar7 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar7 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae06920;
    }
    if (param_3 != 2) {
LAB_10ae0685c:
      uVar14 = (long)puVar3 - (long)puVar10;
      if ((0x13 < (long)uVar14) ||
         (uVar18 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
         (long)(ulong)((uVar18 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar18 * 8))) + 1)
         <= (long)uVar14)) {
        FUN_10ae05864(puVar10,param_2);
        goto LAB_10ae06920;
      }
      if (puVar3 <= puVar10) goto LAB_10ae06920;
      goto LAB_10ae0681c;
    }
    uVar14 = (long)puVar3 - (long)puVar10;
    puVar9 = puVar8;
    puVar12 = param_2;
    ____mb_cur_max();
    if ((long)(int)puVar9 <= (long)uVar14) {
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      puVar9 = puVar10;
      _wcrtomb(puVar10,param_2,&uStack_410);
      if (puVar9 != (ulong *)0xffffffffffffffff) {
        puVar7 = (ulong *)((long)puVar10 + (long)puVar9);
        goto LAB_10ae06920;
      }
      if (puVar3 <= puVar10) goto LAB_10ae06920;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      puVar9 = (ulong *)&DAT_10f4944a3;
      goto LAB_10ae06830;
    }
    param_2 = puVar12;
    if (puVar3 <= puVar10) goto LAB_10ae06920;
    if (2 < uVar14) {
      uVar14 = 3;
    }
LAB_10ae06828:
    puVar9 = (ulong *)&UNK_10f6c3454;
  }
  else {
    puVar9 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae05a34(puVar10,puVar3,param_2);
      iVar11 = (int)puVar9;
joined_r0x00010ae067f0:
      param_2 = puVar9;
      if ((iVar11 == 0) || (puVar7 = puVar10, puVar3 <= puVar10)) goto LAB_10ae06920;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae0681c:
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae06828;
    }
    if (param_3 == 4) {
      func_0x00010ae05ad8(puVar10,puVar3,param_2);
      iVar11 = (int)puVar9;
      goto joined_r0x00010ae067f0;
    }
    if (param_3 != 5) goto LAB_10ae0685c;
    if (puVar3 <= puVar10) goto LAB_10ae06920;
    puVar9 = (ulong *)&DAT_10f6842c6;
    if (param_2 != (ulong *)0x0) {
      puVar9 = (ulong *)"true";
    }
    uVar13 = 4;
    if (param_2 == (ulong *)0x0) {
      uVar13 = 5;
    }
    uVar14 = (long)puVar3 - (long)puVar10;
    if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
      uVar14 = uVar13;
    }
  }
LAB_10ae06830:
  _memcpy(puVar10,puVar9,uVar14);
  puVar7 = (ulong *)((long)puVar10 + uVar14);
  param_2 = puVar9;
LAB_10ae06920:
  puVar8[1] = (ulong)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    auVar23._8_8_ = (long)puVar7 - (long)puVar10;
    auVar23._0_8_ = puVar10;
    return auVar23;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar10 = puVar7;
  func_0x00010ae02d30();
  pcVar17 = (char *)*puVar7;
  pcVar1 = pcVar17 + puVar7[1];
  pcVar15 = pcVar17;
  if (pcVar1 <= pcVar17) {
    pcVar15 = (char *)0x0;
  }
  pcVar2 = pcVar17;
  if (pcVar17 <= pcVar1) {
    pcVar2 = pcVar1;
  }
  lVar16 = (long)pcVar17 - (long)pcVar2;
  pcVar17 = pcVar15;
  do {
    if (lVar16 == 0) {
      *puVar7 = (ulong)pcVar15;
      puVar7[1] = (long)pcVar1 - (long)pcVar15;
      *(char *)(puVar7 + 2) = '\x01';
      goto LAB_10ae069cc;
    }
    cVar4 = *pcVar17;
    lVar16 = lVar16 + 1;
    pcVar15 = pcVar15 + 1;
    pcVar17 = pcVar17 + 1;
  } while (cVar4 != '\0');
  *puVar7 = (ulong)pcVar15;
  puVar7[1] = (long)pcVar1 - (long)pcVar15;
LAB_10ae069cc:
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = puVar10;
  return auVar24;
}



/* Entry: 10ae06024; end: 10ae06273;  */

undefined1  [16] FUN_10ae06024(long param_1,ulong *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  char *pcVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2b8;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
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
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  long lStack_118;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = *(ulong **)(param_1 + 8);
  puVar3 = *(ulong **)(param_1 + 0x10);
  uVar18 = (uint)param_2;
  puVar7 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar7 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae06230;
    }
    if (param_3 == 2) {
      uVar14 = (long)puVar3 - (long)puVar10;
      lVar16 = param_1;
      ____mb_cur_max();
      if ((long)(int)lVar16 <= (long)uVar14) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
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
        param_2 = (ulong *)(ulong)(uVar18 & 0xffff);
        puVar8 = puVar10;
        param_3 = (uint)&uStack_d0;
        _wcrtomb();
        if (puVar8 == (ulong *)0xffffffffffffffff) {
          if (puVar10 < puVar3) {
            if (2 < uVar14) {
              uVar14 = 3;
            }
            param_2 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae06140;
          }
        }
        else {
          puVar7 = (ulong *)((long)puVar10 + (long)puVar8);
        }
        goto LAB_10ae06230;
      }
      if (puVar3 <= puVar10) goto LAB_10ae06230;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae06138;
    }
LAB_10ae0616c:
    uVar18 = uVar18 & 0xffff;
    param_2 = (ulong *)(ulong)uVar18;
    uVar14 = (long)puVar3 - (long)puVar10;
    if (((long)uVar14 < 10) &&
       (uVar5 = (uint)((0x20 - (int)LZCOUNT(uVar18 | 1)) * 0x4d1) >> 0xc,
       (long)uVar14 <
       (long)(ulong)((uVar5 - (uVar18 < *(uint *)(&UNK_10de6dc90 + (ulong)uVar5 * 4))) + 1))) {
      if (puVar3 <= puVar10) goto LAB_10ae06230;
      goto LAB_10ae0612c;
    }
    func_0x00010ae049e0();
  }
  else {
    if (param_3 == 3) {
      param_3 = uVar18 & 0xffff;
      param_2 = puVar3;
      func_0x00010ae04e38();
      iVar11 = (int)param_2;
joined_r0x00010ae06100:
      if ((iVar11 == 0) || (puVar7 = puVar10, puVar3 <= puVar10)) goto LAB_10ae06230;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae0612c:
      if (2 < uVar14) {
        uVar14 = 3;
      }
LAB_10ae06138:
      param_2 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        param_3 = uVar18 & 0xffff;
        param_2 = puVar3;
        func_0x00010ae04edc();
        iVar11 = (int)param_2;
        goto joined_r0x00010ae06100;
      }
      if (param_3 != 5) goto LAB_10ae0616c;
      if (puVar3 <= puVar10) goto LAB_10ae06230;
      bVar6 = ((ulong)param_2 & 0xffff) != 0;
      param_2 = (ulong *)&DAT_10f6842c6;
      if (bVar6) {
        param_2 = (ulong *)"true";
      }
      uVar13 = 4;
      if (!bVar6) {
        uVar13 = 5;
      }
      uVar14 = (long)puVar3 - (long)puVar10;
      if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
        uVar14 = uVar13;
      }
    }
LAB_10ae06140:
    uVar13 = uVar14;
    _memcpy(puVar10);
    param_3 = (uint)uVar13;
    puVar7 = (ulong *)((long)puVar10 + uVar14);
  }
LAB_10ae06230:
  *(ulong **)(param_1 + 8) = puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar19._8_8_ = (long)puVar7 - (long)puVar10;
    auVar19._0_8_ = puVar10;
    return auVar19;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (ulong *)puVar7[1];
  puVar3 = (ulong *)puVar7[2];
  uVar18 = (uint)param_2;
  puVar8 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar8 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae06480;
    }
    if (param_3 == 2) {
      uVar14 = (long)puVar3 - (long)puVar10;
      puVar9 = puVar7;
      puVar12 = param_2;
      ____mb_cur_max();
      if ((long)(int)puVar9 <= (long)uVar14) {
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        puVar9 = puVar10;
        param_3 = (uint)&uStack_1a0;
        _wcrtomb();
        if (puVar9 == (ulong *)0xffffffffffffffff) {
          if (puVar10 < puVar3) {
            if (2 < uVar14) {
              uVar14 = 3;
            }
            param_2 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae06390;
          }
        }
        else {
          puVar8 = (ulong *)((long)puVar10 + (long)puVar9);
        }
        goto LAB_10ae06480;
      }
      param_2 = puVar12;
      if (puVar3 <= puVar10) goto LAB_10ae06480;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae06388;
    }
LAB_10ae063bc:
    uVar14 = (long)puVar3 - (long)puVar10;
    if (((long)uVar14 < 10) &&
       (uVar5 = (uint)((0x20 - (int)LZCOUNT(uVar18 | 1)) * 0x4d1) >> 0xc,
       (long)uVar14 <
       (long)(ulong)((uVar5 - (uVar18 < *(uint *)(&UNK_10de6dc90 + (ulong)uVar5 * 4))) + 1))) {
      if (puVar3 <= puVar10) goto LAB_10ae06480;
      goto LAB_10ae0637c;
    }
    func_0x00010ae049e0();
  }
  else {
    puVar9 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae04e38();
      param_3 = (uint)param_2;
      iVar11 = (int)puVar9;
joined_r0x00010ae06350:
      param_2 = puVar9;
      if ((iVar11 == 0) || (puVar8 = puVar10, puVar3 <= puVar10)) goto LAB_10ae06480;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae0637c:
      if (2 < uVar14) {
        uVar14 = 3;
      }
LAB_10ae06388:
      param_2 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        func_0x00010ae04edc();
        param_3 = (uint)param_2;
        iVar11 = (int)puVar9;
        goto joined_r0x00010ae06350;
      }
      if (param_3 != 5) goto LAB_10ae063bc;
      if (puVar3 <= puVar10) goto LAB_10ae06480;
      param_2 = (ulong *)&DAT_10f6842c6;
      if (uVar18 != 0) {
        param_2 = (ulong *)"true";
      }
      uVar13 = 4;
      if (uVar18 == 0) {
        uVar13 = 5;
      }
      uVar14 = (long)puVar3 - (long)puVar10;
      if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
        uVar14 = uVar13;
      }
    }
LAB_10ae06390:
    uVar13 = uVar14;
    _memcpy(puVar10);
    param_3 = (uint)uVar13;
    puVar8 = (ulong *)((long)puVar10 + uVar14);
  }
LAB_10ae06480:
  puVar7[1] = (ulong)puVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    auVar20._8_8_ = (long)puVar8 - (long)puVar10;
    auVar20._0_8_ = puVar10;
    return auVar20;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (ulong *)puVar8[1];
  puVar3 = (ulong *)puVar8[2];
  puVar7 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar7 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae066d0;
    }
    if (param_3 == 2) {
      uVar14 = (long)puVar3 - (long)puVar10;
      puVar9 = puVar8;
      puVar12 = param_2;
      ____mb_cur_max();
      if ((long)(int)puVar9 <= (long)uVar14) {
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        puVar9 = puVar10;
        param_3 = (uint)&uStack_270;
        _wcrtomb();
        if (puVar9 == (ulong *)0xffffffffffffffff) {
          if (puVar10 < puVar3) {
            if (2 < uVar14) {
              uVar14 = 3;
            }
            puVar9 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae065e0;
          }
        }
        else {
          puVar7 = (ulong *)((long)puVar10 + (long)puVar9);
        }
        goto LAB_10ae066d0;
      }
      param_2 = puVar12;
      if (puVar3 <= puVar10) goto LAB_10ae066d0;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae065d8;
    }
LAB_10ae0660c:
    uVar14 = (long)puVar3 - (long)puVar10;
    if (((long)uVar14 < 0x14) &&
       (uVar18 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
       (long)uVar14 <
       (long)(ulong)((uVar18 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar18 * 8))) + 1))) {
      if (puVar3 <= puVar10) goto LAB_10ae066d0;
      goto LAB_10ae065cc;
    }
    FUN_10ae05864();
  }
  else {
    puVar9 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae05a34();
      param_3 = (uint)param_2;
      iVar11 = (int)puVar9;
joined_r0x00010ae065a0:
      param_2 = puVar9;
      if ((iVar11 == 0) || (puVar7 = puVar10, puVar3 <= puVar10)) goto LAB_10ae066d0;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae065cc:
      if (2 < uVar14) {
        uVar14 = 3;
      }
LAB_10ae065d8:
      puVar9 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        func_0x00010ae05ad8();
        param_3 = (uint)param_2;
        iVar11 = (int)puVar9;
        goto joined_r0x00010ae065a0;
      }
      if (param_3 != 5) goto LAB_10ae0660c;
      if (puVar3 <= puVar10) goto LAB_10ae066d0;
      puVar9 = (ulong *)&DAT_10f6842c6;
      if (param_2 != (ulong *)0x0) {
        puVar9 = (ulong *)"true";
      }
      uVar13 = 4;
      if (param_2 == (ulong *)0x0) {
        uVar13 = 5;
      }
      uVar14 = (long)puVar3 - (long)puVar10;
      if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
        uVar14 = uVar13;
      }
    }
LAB_10ae065e0:
    uVar13 = uVar14;
    _memcpy(puVar10);
    param_3 = (uint)uVar13;
    puVar7 = (ulong *)((long)puVar10 + uVar14);
    param_2 = puVar9;
  }
LAB_10ae066d0:
  puVar8[1] = (ulong)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    auVar21._8_8_ = (long)puVar7 - (long)puVar10;
    auVar21._0_8_ = puVar10;
    return auVar21;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (ulong *)puVar7[1];
  puVar3 = (ulong *)puVar7[2];
  puVar8 = puVar10;
  if ((int)param_3 < 3) {
    if (param_3 == 1) {
      if (puVar10 < puVar3) {
        *(char *)puVar10 = (char)param_2;
        puVar8 = (ulong *)((long)puVar10 + 1);
      }
      goto LAB_10ae06920;
    }
    if (param_3 != 2) {
LAB_10ae0685c:
      uVar14 = (long)puVar3 - (long)puVar10;
      if ((0x13 < (long)uVar14) ||
         (uVar18 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
         (long)(ulong)((uVar18 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar18 * 8))) + 1)
         <= (long)uVar14)) {
        FUN_10ae05864(puVar10,param_2);
        goto LAB_10ae06920;
      }
      if (puVar3 <= puVar10) goto LAB_10ae06920;
      goto LAB_10ae0681c;
    }
    uVar14 = (long)puVar3 - (long)puVar10;
    puVar9 = puVar7;
    puVar12 = param_2;
    ____mb_cur_max();
    if ((long)(int)puVar9 <= (long)uVar14) {
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      puVar9 = puVar10;
      _wcrtomb(puVar10,param_2,&uStack_340);
      if (puVar9 != (ulong *)0xffffffffffffffff) {
        puVar8 = (ulong *)((long)puVar10 + (long)puVar9);
        goto LAB_10ae06920;
      }
      if (puVar3 <= puVar10) goto LAB_10ae06920;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      puVar9 = (ulong *)&DAT_10f4944a3;
      goto LAB_10ae06830;
    }
    param_2 = puVar12;
    if (puVar3 <= puVar10) goto LAB_10ae06920;
    if (2 < uVar14) {
      uVar14 = 3;
    }
LAB_10ae06828:
    puVar9 = (ulong *)&UNK_10f6c3454;
  }
  else {
    puVar9 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae05a34(puVar10,puVar3,param_2);
      iVar11 = (int)puVar9;
joined_r0x00010ae067f0:
      param_2 = puVar9;
      if ((iVar11 == 0) || (puVar8 = puVar10, puVar3 <= puVar10)) goto LAB_10ae06920;
      uVar14 = (long)puVar3 - (long)puVar10;
LAB_10ae0681c:
      if (2 < uVar14) {
        uVar14 = 3;
      }
      goto LAB_10ae06828;
    }
    if (param_3 == 4) {
      func_0x00010ae05ad8(puVar10,puVar3,param_2);
      iVar11 = (int)puVar9;
      goto joined_r0x00010ae067f0;
    }
    if (param_3 != 5) goto LAB_10ae0685c;
    if (puVar3 <= puVar10) goto LAB_10ae06920;
    puVar9 = (ulong *)&DAT_10f6842c6;
    if (param_2 != (ulong *)0x0) {
      puVar9 = (ulong *)"true";
    }
    uVar13 = 4;
    if (param_2 == (ulong *)0x0) {
      uVar13 = 5;
    }
    uVar14 = (long)puVar3 - (long)puVar10;
    if (uVar13 <= (ulong)((long)puVar3 - (long)puVar10)) {
      uVar14 = uVar13;
    }
  }
LAB_10ae06830:
  _memcpy(puVar10,puVar9,uVar14);
  puVar8 = (ulong *)((long)puVar10 + uVar14);
  param_2 = puVar9;
LAB_10ae06920:
  puVar7[1] = (ulong)puVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    auVar22._8_8_ = (long)puVar8 - (long)puVar10;
    auVar22._0_8_ = puVar10;
    return auVar22;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar10 = puVar8;
  func_0x00010ae02d30();
  pcVar17 = (char *)*puVar8;
  pcVar1 = pcVar17 + puVar8[1];
  pcVar15 = pcVar17;
  if (pcVar1 <= pcVar17) {
    pcVar15 = (char *)0x0;
  }
  pcVar2 = pcVar17;
  if (pcVar17 <= pcVar1) {
    pcVar2 = pcVar1;
  }
  lVar16 = (long)pcVar17 - (long)pcVar2;
  pcVar17 = pcVar15;
  do {
    if (lVar16 == 0) {
      *puVar8 = (ulong)pcVar15;
      puVar8[1] = (long)pcVar1 - (long)pcVar15;
      *(char *)(puVar8 + 2) = '\x01';
      goto LAB_10ae069cc;
    }
    cVar4 = *pcVar17;
    lVar16 = lVar16 + 1;
    pcVar15 = pcVar15 + 1;
    pcVar17 = pcVar17 + 1;
  } while (cVar4 != '\0');
  *puVar8 = (ulong)pcVar15;
  puVar8[1] = (long)pcVar1 - (long)pcVar15;
LAB_10ae069cc:
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = puVar10;
  return auVar23;
}



/* Entry: 10ae06274; end: 10ae064c3;  */

undefined1  [16] FUN_10ae06274(long param_1,ulong *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  char *pcVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
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
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  long lStack_118;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = *(ulong **)(param_1 + 8);
  puVar3 = *(ulong **)(param_1 + 0x10);
  uVar17 = (uint)param_2;
  puVar6 = puVar9;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (puVar9 < puVar3) {
        *(char *)puVar9 = (char)param_2;
        puVar6 = (ulong *)((long)puVar9 + 1);
      }
      goto LAB_10ae06480;
    }
    if (param_3 == 2) {
      uVar13 = (long)puVar3 - (long)puVar9;
      lVar15 = param_1;
      puVar7 = param_2;
      ____mb_cur_max();
      if ((long)(int)lVar15 <= (long)uVar13) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
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
        puVar7 = puVar9;
        param_3 = (int)&uStack_d0;
        _wcrtomb();
        if (puVar7 == (ulong *)0xffffffffffffffff) {
          if (puVar9 < puVar3) {
            if (2 < uVar13) {
              uVar13 = 3;
            }
            param_2 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae06390;
          }
        }
        else {
          puVar6 = (ulong *)((long)puVar9 + (long)puVar7);
        }
        goto LAB_10ae06480;
      }
      param_2 = puVar7;
      if (puVar3 <= puVar9) goto LAB_10ae06480;
      if (2 < uVar13) {
        uVar13 = 3;
      }
      goto LAB_10ae06388;
    }
LAB_10ae063bc:
    uVar13 = (long)puVar3 - (long)puVar9;
    if (((long)uVar13 < 10) &&
       (uVar5 = (uint)((0x20 - (int)LZCOUNT(uVar17 | 1)) * 0x4d1) >> 0xc,
       (long)uVar13 <
       (long)(ulong)((uVar5 - (uVar17 < *(uint *)(&UNK_10de6dc90 + (ulong)uVar5 * 4))) + 1))) {
      if (puVar3 <= puVar9) goto LAB_10ae06480;
      goto LAB_10ae0637c;
    }
    func_0x00010ae049e0();
  }
  else {
    puVar7 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae04e38();
      param_3 = (int)param_2;
      iVar10 = (int)puVar7;
joined_r0x00010ae06350:
      param_2 = puVar7;
      if ((iVar10 == 0) || (puVar6 = puVar9, puVar3 <= puVar9)) goto LAB_10ae06480;
      uVar13 = (long)puVar3 - (long)puVar9;
LAB_10ae0637c:
      if (2 < uVar13) {
        uVar13 = 3;
      }
LAB_10ae06388:
      param_2 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        func_0x00010ae04edc();
        param_3 = (int)param_2;
        iVar10 = (int)puVar7;
        goto joined_r0x00010ae06350;
      }
      if (param_3 != 5) goto LAB_10ae063bc;
      if (puVar3 <= puVar9) goto LAB_10ae06480;
      param_2 = (ulong *)&DAT_10f6842c6;
      if (uVar17 != 0) {
        param_2 = (ulong *)"true";
      }
      uVar12 = 4;
      if (uVar17 == 0) {
        uVar12 = 5;
      }
      uVar13 = (long)puVar3 - (long)puVar9;
      if (uVar12 <= (ulong)((long)puVar3 - (long)puVar9)) {
        uVar13 = uVar12;
      }
    }
LAB_10ae06390:
    uVar12 = uVar13;
    _memcpy(puVar9);
    param_3 = (int)uVar12;
    puVar6 = (ulong *)((long)puVar9 + uVar13);
  }
LAB_10ae06480:
  *(ulong **)(param_1 + 8) = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar18._8_8_ = (long)puVar6 - (long)puVar9;
    auVar18._0_8_ = puVar9;
    return auVar18;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (ulong *)puVar6[1];
  puVar3 = (ulong *)puVar6[2];
  puVar7 = puVar9;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (puVar9 < puVar3) {
        *(char *)puVar9 = (char)param_2;
        puVar7 = (ulong *)((long)puVar9 + 1);
      }
      goto LAB_10ae066d0;
    }
    if (param_3 == 2) {
      uVar13 = (long)puVar3 - (long)puVar9;
      puVar8 = puVar6;
      puVar11 = param_2;
      ____mb_cur_max();
      if ((long)(int)puVar8 <= (long)uVar13) {
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        puVar8 = puVar9;
        param_3 = (int)&uStack_1a0;
        _wcrtomb();
        if (puVar8 == (ulong *)0xffffffffffffffff) {
          if (puVar9 < puVar3) {
            if (2 < uVar13) {
              uVar13 = 3;
            }
            puVar8 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae065e0;
          }
        }
        else {
          puVar7 = (ulong *)((long)puVar9 + (long)puVar8);
        }
        goto LAB_10ae066d0;
      }
      param_2 = puVar11;
      if (puVar3 <= puVar9) goto LAB_10ae066d0;
      if (2 < uVar13) {
        uVar13 = 3;
      }
      goto LAB_10ae065d8;
    }
LAB_10ae0660c:
    uVar13 = (long)puVar3 - (long)puVar9;
    if (((long)uVar13 < 0x14) &&
       (uVar17 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
       (long)uVar13 <
       (long)(ulong)((uVar17 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar17 * 8))) + 1))) {
      if (puVar3 <= puVar9) goto LAB_10ae066d0;
      goto LAB_10ae065cc;
    }
    FUN_10ae05864();
  }
  else {
    puVar8 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae05a34();
      param_3 = (int)param_2;
      iVar10 = (int)puVar8;
joined_r0x00010ae065a0:
      param_2 = puVar8;
      if ((iVar10 == 0) || (puVar7 = puVar9, puVar3 <= puVar9)) goto LAB_10ae066d0;
      uVar13 = (long)puVar3 - (long)puVar9;
LAB_10ae065cc:
      if (2 < uVar13) {
        uVar13 = 3;
      }
LAB_10ae065d8:
      puVar8 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        func_0x00010ae05ad8();
        param_3 = (int)param_2;
        iVar10 = (int)puVar8;
        goto joined_r0x00010ae065a0;
      }
      if (param_3 != 5) goto LAB_10ae0660c;
      if (puVar3 <= puVar9) goto LAB_10ae066d0;
      puVar8 = (ulong *)&DAT_10f6842c6;
      if (param_2 != (ulong *)0x0) {
        puVar8 = (ulong *)"true";
      }
      uVar12 = 4;
      if (param_2 == (ulong *)0x0) {
        uVar12 = 5;
      }
      uVar13 = (long)puVar3 - (long)puVar9;
      if (uVar12 <= (ulong)((long)puVar3 - (long)puVar9)) {
        uVar13 = uVar12;
      }
    }
LAB_10ae065e0:
    uVar12 = uVar13;
    _memcpy(puVar9);
    param_3 = (int)uVar12;
    puVar7 = (ulong *)((long)puVar9 + uVar13);
    param_2 = puVar8;
  }
LAB_10ae066d0:
  puVar6[1] = (ulong)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    auVar19._8_8_ = (long)puVar7 - (long)puVar9;
    auVar19._0_8_ = puVar9;
    return auVar19;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (ulong *)puVar7[1];
  puVar3 = (ulong *)puVar7[2];
  puVar6 = puVar9;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (puVar9 < puVar3) {
        *(char *)puVar9 = (char)param_2;
        puVar6 = (ulong *)((long)puVar9 + 1);
      }
      goto LAB_10ae06920;
    }
    if (param_3 != 2) {
LAB_10ae0685c:
      uVar13 = (long)puVar3 - (long)puVar9;
      if ((0x13 < (long)uVar13) ||
         (uVar17 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
         (long)(ulong)((uVar17 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar17 * 8))) + 1)
         <= (long)uVar13)) {
        FUN_10ae05864(puVar9,param_2);
        goto LAB_10ae06920;
      }
      if (puVar3 <= puVar9) goto LAB_10ae06920;
      goto LAB_10ae0681c;
    }
    uVar13 = (long)puVar3 - (long)puVar9;
    puVar8 = puVar7;
    puVar11 = param_2;
    ____mb_cur_max();
    if ((long)(int)puVar8 <= (long)uVar13) {
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      puVar8 = puVar9;
      _wcrtomb(puVar9,param_2,&uStack_270);
      if (puVar8 != (ulong *)0xffffffffffffffff) {
        puVar6 = (ulong *)((long)puVar9 + (long)puVar8);
        goto LAB_10ae06920;
      }
      if (puVar3 <= puVar9) goto LAB_10ae06920;
      if (2 < uVar13) {
        uVar13 = 3;
      }
      puVar8 = (ulong *)&DAT_10f4944a3;
      goto LAB_10ae06830;
    }
    param_2 = puVar11;
    if (puVar3 <= puVar9) goto LAB_10ae06920;
    if (2 < uVar13) {
      uVar13 = 3;
    }
LAB_10ae06828:
    puVar8 = (ulong *)&UNK_10f6c3454;
  }
  else {
    puVar8 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae05a34(puVar9,puVar3,param_2);
      iVar10 = (int)puVar8;
joined_r0x00010ae067f0:
      param_2 = puVar8;
      if ((iVar10 == 0) || (puVar6 = puVar9, puVar3 <= puVar9)) goto LAB_10ae06920;
      uVar13 = (long)puVar3 - (long)puVar9;
LAB_10ae0681c:
      if (2 < uVar13) {
        uVar13 = 3;
      }
      goto LAB_10ae06828;
    }
    if (param_3 == 4) {
      func_0x00010ae05ad8(puVar9,puVar3,param_2);
      iVar10 = (int)puVar8;
      goto joined_r0x00010ae067f0;
    }
    if (param_3 != 5) goto LAB_10ae0685c;
    if (puVar3 <= puVar9) goto LAB_10ae06920;
    puVar8 = (ulong *)&DAT_10f6842c6;
    if (param_2 != (ulong *)0x0) {
      puVar8 = (ulong *)"true";
    }
    uVar12 = 4;
    if (param_2 == (ulong *)0x0) {
      uVar12 = 5;
    }
    uVar13 = (long)puVar3 - (long)puVar9;
    if (uVar12 <= (ulong)((long)puVar3 - (long)puVar9)) {
      uVar13 = uVar12;
    }
  }
LAB_10ae06830:
  _memcpy(puVar9,puVar8,uVar13);
  puVar6 = (ulong *)((long)puVar9 + uVar13);
  param_2 = puVar8;
LAB_10ae06920:
  puVar7[1] = (ulong)puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    auVar20._8_8_ = (long)puVar6 - (long)puVar9;
    auVar20._0_8_ = puVar9;
    return auVar20;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar9 = puVar6;
  func_0x00010ae02d30();
  pcVar16 = (char *)*puVar6;
  pcVar1 = pcVar16 + puVar6[1];
  pcVar14 = pcVar16;
  if (pcVar1 <= pcVar16) {
    pcVar14 = (char *)0x0;
  }
  pcVar2 = pcVar16;
  if (pcVar16 <= pcVar1) {
    pcVar2 = pcVar1;
  }
  lVar15 = (long)pcVar16 - (long)pcVar2;
  pcVar16 = pcVar14;
  do {
    if (lVar15 == 0) {
      *puVar6 = (ulong)pcVar14;
      puVar6[1] = (long)pcVar1 - (long)pcVar14;
      *(char *)(puVar6 + 2) = '\x01';
      goto LAB_10ae069cc;
    }
    cVar4 = *pcVar16;
    lVar15 = lVar15 + 1;
    pcVar14 = pcVar14 + 1;
    pcVar16 = pcVar16 + 1;
  } while (cVar4 != '\0');
  *puVar6 = (ulong)pcVar14;
  puVar6[1] = (long)pcVar1 - (long)pcVar14;
LAB_10ae069cc:
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = puVar9;
  return auVar21;
}



/* Entry: 10ae064c4; end: 10ae06713;  */

undefined1  [16] FUN_10ae064c4(long param_1,ulong *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  char *pcVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  long lStack_118;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = *(ulong **)(param_1 + 8);
  puVar3 = *(ulong **)(param_1 + 0x10);
  puVar6 = puVar9;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (puVar9 < puVar3) {
        *(char *)puVar9 = (char)param_2;
        puVar6 = (ulong *)((long)puVar9 + 1);
      }
      goto LAB_10ae066d0;
    }
    if (param_3 == 2) {
      uVar13 = (long)puVar3 - (long)puVar9;
      lVar15 = param_1;
      puVar7 = param_2;
      ____mb_cur_max();
      if ((long)(int)lVar15 <= (long)uVar13) {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
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
        puVar7 = puVar9;
        param_3 = (int)&uStack_d0;
        _wcrtomb();
        if (puVar7 == (ulong *)0xffffffffffffffff) {
          if (puVar9 < puVar3) {
            if (2 < uVar13) {
              uVar13 = 3;
            }
            puVar7 = (ulong *)&DAT_10f4944a3;
            goto LAB_10ae065e0;
          }
        }
        else {
          puVar6 = (ulong *)((long)puVar9 + (long)puVar7);
        }
        goto LAB_10ae066d0;
      }
      param_2 = puVar7;
      if (puVar3 <= puVar9) goto LAB_10ae066d0;
      if (2 < uVar13) {
        uVar13 = 3;
      }
      goto LAB_10ae065d8;
    }
LAB_10ae0660c:
    uVar13 = (long)puVar3 - (long)puVar9;
    if (((long)uVar13 < 0x14) &&
       (uVar5 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
       (long)uVar13 <
       (long)(ulong)((uVar5 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar5 * 8))) + 1))) {
      if (puVar3 <= puVar9) goto LAB_10ae066d0;
      goto LAB_10ae065cc;
    }
    FUN_10ae05864();
  }
  else {
    puVar7 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae05a34();
      param_3 = (int)param_2;
      iVar10 = (int)puVar7;
joined_r0x00010ae065a0:
      param_2 = puVar7;
      if ((iVar10 == 0) || (puVar6 = puVar9, puVar3 <= puVar9)) goto LAB_10ae066d0;
      uVar13 = (long)puVar3 - (long)puVar9;
LAB_10ae065cc:
      if (2 < uVar13) {
        uVar13 = 3;
      }
LAB_10ae065d8:
      puVar7 = (ulong *)&UNK_10f6c3454;
    }
    else {
      if (param_3 == 4) {
        func_0x00010ae05ad8();
        param_3 = (int)param_2;
        iVar10 = (int)puVar7;
        goto joined_r0x00010ae065a0;
      }
      if (param_3 != 5) goto LAB_10ae0660c;
      if (puVar3 <= puVar9) goto LAB_10ae066d0;
      puVar7 = (ulong *)&DAT_10f6842c6;
      if (param_2 != (ulong *)0x0) {
        puVar7 = (ulong *)"true";
      }
      uVar12 = 4;
      if (param_2 == (ulong *)0x0) {
        uVar12 = 5;
      }
      uVar13 = (long)puVar3 - (long)puVar9;
      if (uVar12 <= (ulong)((long)puVar3 - (long)puVar9)) {
        uVar13 = uVar12;
      }
    }
LAB_10ae065e0:
    uVar12 = uVar13;
    _memcpy(puVar9);
    param_3 = (int)uVar12;
    puVar6 = (ulong *)((long)puVar9 + uVar13);
    param_2 = puVar7;
  }
LAB_10ae066d0:
  *(ulong **)(param_1 + 8) = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar17._8_8_ = (long)puVar6 - (long)puVar9;
    auVar17._0_8_ = puVar9;
    return auVar17;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = (ulong *)puVar6[1];
  puVar3 = (ulong *)puVar6[2];
  puVar7 = puVar9;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (puVar9 < puVar3) {
        *(char *)puVar9 = (char)param_2;
        puVar7 = (ulong *)((long)puVar9 + 1);
      }
      goto LAB_10ae06920;
    }
    if (param_3 != 2) {
LAB_10ae0685c:
      uVar13 = (long)puVar3 - (long)puVar9;
      if ((0x13 < (long)uVar13) ||
         (uVar5 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
         (long)(ulong)((uVar5 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar5 * 8))) + 1) <=
         (long)uVar13)) {
        FUN_10ae05864(puVar9,param_2);
        goto LAB_10ae06920;
      }
      if (puVar3 <= puVar9) goto LAB_10ae06920;
      goto LAB_10ae0681c;
    }
    uVar13 = (long)puVar3 - (long)puVar9;
    puVar8 = puVar6;
    puVar11 = param_2;
    ____mb_cur_max();
    if ((long)(int)puVar8 <= (long)uVar13) {
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      puVar8 = puVar9;
      _wcrtomb(puVar9,param_2,&uStack_1a0);
      if (puVar8 != (ulong *)0xffffffffffffffff) {
        puVar7 = (ulong *)((long)puVar9 + (long)puVar8);
        goto LAB_10ae06920;
      }
      if (puVar3 <= puVar9) goto LAB_10ae06920;
      if (2 < uVar13) {
        uVar13 = 3;
      }
      puVar8 = (ulong *)&DAT_10f4944a3;
      goto LAB_10ae06830;
    }
    param_2 = puVar11;
    if (puVar3 <= puVar9) goto LAB_10ae06920;
    if (2 < uVar13) {
      uVar13 = 3;
    }
LAB_10ae06828:
    puVar8 = (ulong *)&UNK_10f6c3454;
  }
  else {
    puVar8 = puVar3;
    if (param_3 == 3) {
      func_0x00010ae05a34(puVar9,puVar3,param_2);
      iVar10 = (int)puVar8;
joined_r0x00010ae067f0:
      param_2 = puVar8;
      if ((iVar10 == 0) || (puVar7 = puVar9, puVar3 <= puVar9)) goto LAB_10ae06920;
      uVar13 = (long)puVar3 - (long)puVar9;
LAB_10ae0681c:
      if (2 < uVar13) {
        uVar13 = 3;
      }
      goto LAB_10ae06828;
    }
    if (param_3 == 4) {
      func_0x00010ae05ad8(puVar9,puVar3,param_2);
      iVar10 = (int)puVar8;
      goto joined_r0x00010ae067f0;
    }
    if (param_3 != 5) goto LAB_10ae0685c;
    if (puVar3 <= puVar9) goto LAB_10ae06920;
    puVar8 = (ulong *)&DAT_10f6842c6;
    if (param_2 != (ulong *)0x0) {
      puVar8 = (ulong *)"true";
    }
    uVar12 = 4;
    if (param_2 == (ulong *)0x0) {
      uVar12 = 5;
    }
    uVar13 = (long)puVar3 - (long)puVar9;
    if (uVar12 <= (ulong)((long)puVar3 - (long)puVar9)) {
      uVar13 = uVar12;
    }
  }
LAB_10ae06830:
  _memcpy(puVar9,puVar8,uVar13);
  puVar7 = (ulong *)((long)puVar9 + uVar13);
  param_2 = puVar8;
LAB_10ae06920:
  puVar6[1] = (ulong)puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    auVar18._8_8_ = (long)puVar7 - (long)puVar9;
    auVar18._0_8_ = puVar9;
    return auVar18;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar9 = puVar7;
  func_0x00010ae02d30();
  pcVar16 = (char *)*puVar7;
  pcVar1 = pcVar16 + puVar7[1];
  pcVar14 = pcVar16;
  if (pcVar1 <= pcVar16) {
    pcVar14 = (char *)0x0;
  }
  pcVar2 = pcVar16;
  if (pcVar16 <= pcVar1) {
    pcVar2 = pcVar1;
  }
  lVar15 = (long)pcVar16 - (long)pcVar2;
  pcVar16 = pcVar14;
  do {
    if (lVar15 == 0) {
      *puVar7 = (ulong)pcVar14;
      puVar7[1] = (long)pcVar1 - (long)pcVar14;
      *(char *)(puVar7 + 2) = '\x01';
      goto LAB_10ae069cc;
    }
    cVar4 = *pcVar16;
    lVar15 = lVar15 + 1;
    pcVar14 = pcVar14 + 1;
    pcVar16 = pcVar16 + 1;
  } while (cVar4 != '\0');
  *puVar7 = (ulong)pcVar14;
  puVar7[1] = (long)pcVar1 - (long)pcVar14;
LAB_10ae069cc:
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = puVar9;
  return auVar19;
}



/* Entry: 10ae06714; end: 10ae06963;  */

undefined1  [16] FUN_10ae06714(long param_1,ulong *param_2,int param_3)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  ulong *puVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  char *pcVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = *(ulong **)(param_1 + 8);
  puVar4 = *(ulong **)(param_1 + 0x10);
  puVar7 = puVar9;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (puVar9 < puVar4) {
        *(char *)puVar9 = (char)param_2;
        puVar7 = (ulong *)((long)puVar9 + 1);
      }
      goto LAB_10ae06920;
    }
    if (param_3 != 2) {
LAB_10ae0685c:
      uVar11 = (long)puVar4 - (long)puVar9;
      if ((0x13 < (long)uVar11) ||
         (uVar6 = (uint)((0x40 - (int)LZCOUNT((ulong)param_2 | 1)) * 0x4d1) >> 0xc,
         (long)(ulong)((uVar6 - (param_2 < *(ulong **)(&UNK_10e00f6e8 + (ulong)uVar6 * 8))) + 1) <=
         (long)uVar11)) {
        FUN_10ae05864(puVar9,param_2);
        goto LAB_10ae06920;
      }
      if (puVar4 <= puVar9) goto LAB_10ae06920;
      goto LAB_10ae0681c;
    }
    uVar11 = (long)puVar4 - (long)puVar9;
    lVar13 = param_1;
    puVar8 = param_2;
    ____mb_cur_max();
    if ((long)(int)lVar13 <= (long)uVar11) {
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
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
      puVar8 = puVar9;
      _wcrtomb(puVar9,param_2,&uStack_d0);
      if (puVar8 != (ulong *)0xffffffffffffffff) {
        puVar7 = (ulong *)((long)puVar9 + (long)puVar8);
        goto LAB_10ae06920;
      }
      if (puVar4 <= puVar9) goto LAB_10ae06920;
      if (2 < uVar11) {
        uVar11 = 3;
      }
      puVar8 = (ulong *)&DAT_10f4944a3;
      goto LAB_10ae06830;
    }
    param_2 = puVar8;
    if (puVar4 <= puVar9) goto LAB_10ae06920;
    if (2 < uVar11) {
      uVar11 = 3;
    }
LAB_10ae06828:
    puVar8 = (ulong *)&UNK_10f6c3454;
  }
  else {
    puVar8 = puVar4;
    if (param_3 == 3) {
      func_0x00010ae05a34(puVar9,puVar4,param_2);
      iVar10 = (int)puVar8;
joined_r0x00010ae067f0:
      param_2 = puVar8;
      if ((iVar10 == 0) || (puVar7 = puVar9, puVar4 <= puVar9)) goto LAB_10ae06920;
      uVar11 = (long)puVar4 - (long)puVar9;
LAB_10ae0681c:
      if (2 < uVar11) {
        uVar11 = 3;
      }
      goto LAB_10ae06828;
    }
    if (param_3 == 4) {
      func_0x00010ae05ad8(puVar9,puVar4,param_2);
      iVar10 = (int)puVar8;
      goto joined_r0x00010ae067f0;
    }
    if (param_3 != 5) goto LAB_10ae0685c;
    if (puVar4 <= puVar9) goto LAB_10ae06920;
    puVar8 = (ulong *)&DAT_10f6842c6;
    if (param_2 != (ulong *)0x0) {
      puVar8 = (ulong *)"true";
    }
    uVar2 = 4;
    if (param_2 == (ulong *)0x0) {
      uVar2 = 5;
    }
    uVar11 = (long)puVar4 - (long)puVar9;
    if (uVar2 <= (ulong)((long)puVar4 - (long)puVar9)) {
      uVar11 = uVar2;
    }
  }
LAB_10ae06830:
  _memcpy(puVar9,puVar8,uVar11);
  puVar7 = (ulong *)((long)puVar9 + uVar11);
  param_2 = puVar8;
LAB_10ae06920:
  *(ulong **)(param_1 + 8) = puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar15._8_8_ = (long)puVar7 - (long)puVar9;
    auVar15._0_8_ = puVar9;
    return auVar15;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar9 = puVar7;
  func_0x00010ae02d30();
  pcVar14 = (char *)*puVar7;
  pcVar1 = pcVar14 + puVar7[1];
  pcVar12 = pcVar14;
  if (pcVar1 <= pcVar14) {
    pcVar12 = (char *)0x0;
  }
  pcVar3 = pcVar14;
  if (pcVar14 <= pcVar1) {
    pcVar3 = pcVar1;
  }
  lVar13 = (long)pcVar14 - (long)pcVar3;
  pcVar14 = pcVar12;
  do {
    if (lVar13 == 0) {
      *puVar7 = (ulong)pcVar12;
      puVar7[1] = (long)pcVar1 - (long)pcVar12;
      *(char *)(puVar7 + 2) = '\x01';
      goto LAB_10ae069cc;
    }
    cVar5 = *pcVar14;
    lVar13 = lVar13 + 1;
    pcVar12 = pcVar12 + 1;
    pcVar14 = pcVar14 + 1;
  } while (cVar5 != '\0');
  *puVar7 = (ulong)pcVar12;
  puVar7[1] = (long)pcVar1 - (long)pcVar12;
LAB_10ae069cc:
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = puVar9;
  return auVar16;
}



/* Entry: 10ae06964; end: 10ae06a5b;  */

void FUN_10ae06964(ulong *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  
  func_0x00010ae02d30();
  pcVar6 = (char *)*param_1;
  pcVar1 = pcVar6 + param_1[1];
  pcVar4 = pcVar6;
  if (pcVar1 <= pcVar6) {
    pcVar4 = (char *)0x0;
  }
  pcVar2 = pcVar6;
  if (pcVar6 <= pcVar1) {
    pcVar2 = pcVar1;
  }
  lVar5 = (long)pcVar6 - (long)pcVar2;
  pcVar6 = pcVar4;
  do {
    if (lVar5 == 0) {
      *param_1 = (ulong)pcVar4;
      param_1[1] = (long)pcVar1 - (long)pcVar4;
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
    cVar3 = *pcVar6;
    lVar5 = lVar5 + 1;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  *param_1 = (ulong)pcVar4;
  param_1[1] = (long)pcVar1 - (long)pcVar4;
  return;
}



/* Entry: 10ae06a5c; end: 10ae06b2b;  */

undefined1  [16] FUN_10ae06a5c(long param_1,ulong param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  puVar4 = puVar1;
  if (param_2 == 0) {
    if (puVar3 <= puVar1) goto LAB_10ae06b10;
    uVar5 = (long)puVar3 - (long)puVar1;
    if (5 < uVar5) {
      uVar5 = 6;
    }
    pcVar2 = "(null)";
  }
  else {
    uVar5 = (long)puVar3 - (long)puVar1;
    if (0xf < uVar5) {
      uVar5 = 0x3c;
      puVar3 = puVar1;
      do {
        puVar4 = puVar3 + 1;
        *puVar3 = (&UNK_10f416238)[param_2 >> (uVar5 & 0x3f) & 0xf];
        uVar5 = uVar5 - 4;
        puVar3 = puVar4;
      } while (uVar5 != 0xfffffffffffffffc);
      goto LAB_10ae06b10;
    }
    if (puVar3 <= puVar1) goto LAB_10ae06b10;
    if (2 < uVar5) {
      uVar5 = 3;
    }
    pcVar2 = "~~~";
  }
  _memcpy(puVar1,pcVar2,uVar5);
  puVar4 = puVar1 + uVar5;
LAB_10ae06b10:
  *(undefined1 **)(param_1 + 8) = puVar4;
  auVar6._8_8_ = (long)puVar4 - (long)puVar1;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 10ae06b2c; end: 10ae06d33;  */

ulong FUN_10ae06b2c(undefined1 *param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4,
                   undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined1 *puStack_298;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 auStack_270 [512];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_1;
  __ZNSt3__16chrono12system_clock3nowEv();
  uVar2 = 0;
  _vsnprintf(0,0,param_7);
  if ((int)uVar2 < 0) {
    uVar5 = 0;
LAB_10ae06cc4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return uVar5;
    }
    ___stack_chk_fail();
  }
  else {
    plVar3 = *(long **)(param_1 + 0x40);
    puStack_280 = auStack_270;
    uStack_288 = 0x21;
    uStack_2a4 = param_6;
    uStack_2a0 = param_5;
    puStack_298 = param_4;
    uStack_28c = param_3;
    puStack_278 = puVar6;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))
                (plVar3,&puStack_280,&uStack_288,&uStack_28c,&puStack_298,&uStack_2a0,&uStack_2a4,
                 &puStack_278);
      uVar5 = (long)plVar3 + (uVar2 & 0xffffffff);
      if (uVar5 < 0x200) {
        puVar6 = (undefined1 *)0x0;
        lVar4 = 0x200 - (long)plVar3;
        puVar7 = auStack_270;
      }
      else {
        puVar6 = (undefined1 *)(uVar5 + 1);
        __Znam();
        _bzero();
        _memcpy(puVar6,auStack_270,plVar3);
        lVar4 = (uVar2 & 0xffffffff) + 1;
        puVar7 = puVar6;
      }
      _vsnprintf(puVar7 + (long)plVar3,lVar4,param_7,param_8);
      if ((param_1[0x48] & 1) != 0) {
        for (; (uVar5 != 0 && (puVar7[uVar5 - 1] == '\n')); uVar5 = uVar5 - 1) {
          puVar7[uVar5 - 1] = 0;
        }
      }
      plVar3 = *(long **)(param_1 + 0x20);
      puStack_298 = (undefined1 *)CONCAT44(puStack_298._4_4_,param_3);
      uStack_2a0 = CONCAT44(uStack_2a0._4_4_,param_6);
      uStack_288 = param_5;
      puStack_280 = param_4;
      puStack_278 = puVar7;
      if (plVar3 == (long *)0x0) {
        func_0x000104c501e4();
        goto LAB_10ae06d10;
      }
      (**(code **)(*plVar3 + 0x30))
                (plVar3,&puStack_298,&puStack_278,&puStack_280,&uStack_288,&uStack_2a0);
      if (puVar6 != (undefined1 *)0x0) {
        __ZdaPv(puVar6);
      }
      goto LAB_10ae06cc4;
    }
  }
  func_0x000104c501e4();
LAB_10ae06d10:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ae06d14);
  (*pcVar1)();
}



/* Entry: 10ae06d34; end: 10ae06e3b;  */

undefined8 * FUN_10ae06d34(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c77890;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10ae06d7c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10ae06d7c:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
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



/* Entry: 10ae06e3c; end: 10ae06f2f;  */

void FUN_10ae06e3c(ulong param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined8 *)PTR____stdoutp_11034bdd8;
  if ((param_1 & 1) != 0) {
    puVar1 = (undefined8 *)PTR____stderrp_11034bdc8;
  }
  puVar2 = &UNK_10f63757c;
  if ((param_1 & 0x10) != 0) {
    puVar2 = &UNK_10f6c347d;
  }
  _fprintf(*puVar1,puVar2);
  return;
}



/* Entry: 10ae06f30; end: 10ae0701b;  */

undefined8 *
FUN_10ae06f30(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puStack_60;
  long *plStack_58;
  
  FUN_10ae0701c(&puStack_60);
  if (puStack_60 == (undefined8 *)0x0) {
    puStack_60 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*puStack_60)
              (puStack_60,param_1 != 0,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return puStack_60;
}



/* Entry: 10ae0701c; end: 10ae0708f;  */

void FUN_10ae0701c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_10ae07090();
  __ZNSt3__15mutex4lockEv();
  FUN_10ae07100();
  lVar5 = lRam0000000113836a68;
  uVar4 = uRam0000000113836a60;
  param_1[1] = lRam0000000113836a68;
  *param_1 = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x113836a10);
  return;
}



/* Entry: 10ae07090; end: 10ae070ff;  */

undefined8 FUN_10ae07090(void)

{
  int iVar1;
  
  if ((bRam0000000113836a50 & 1) == 0) {
    iVar1 = 0x13836a50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113836a10 = 0x32aaaba7;
      uRam0000000113836a20 = 0;
      uRam0000000113836a18 = 0;
      uRam0000000113836a30 = 0;
      uRam0000000113836a28 = 0;
      uRam0000000113836a40 = 0;
      uRam0000000113836a38 = 0;
      uRam0000000113836a48 = 0;
      ___cxa_guard_release(0x113836a50);
    }
  }
  return 0x113836a10;
}



/* Entry: 10ae07100; end: 10ae07193;  */

undefined8 FUN_10ae07100(void)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  
  if ((bRam0000000113836a70 & 1) == 0) {
    iVar1 = 0x13836a70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10ae07268(&uStack_40,&uStack_21);
      uRam0000000113836a68 = uStack_38;
      uRam0000000113836a60 = uStack_40;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_10ae072f8(&uStack_40);
      ___cxa_guard_release(0x113836a70);
    }
  }
  return 0x113836a60;
}



/* Entry: 10ae07194; end: 10ae071eb;  */

void FUN_10ae07194(undefined8 param_1)

{
  FUN_10ae07090();
  __ZNSt3__15mutex4lockEv();
  FUN_10ae07100();
  FUN_10ae071ec(0x113836a60,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x113836a10);
  return;
}



/* Entry: 10ae071ec; end: 10ae07267;  */

undefined8 * FUN_10ae071ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ae07268; end: 10ae072af;  */

void FUN_10ae07268(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x68;
  __Znwm();
  FUN_10ae072b0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10ae072b0; end: 10ae072f7;  */

undefined8 * FUN_10ae072b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba4f68;
  FUN_10a109650(param_1 + 3);
  return param_1;
}



/* Entry: 10ae072f8; end: 10ae0734f;  */

long FUN_10ae072f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ae07350; end: 10ae073e7;  */

void FUN_10ae07350(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  *param_1 = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 100) = 7;
  if (param_2 != (long *)0x0) {
    uVar3 = 0;
    uVar5 = 7;
    lVar2 = 1;
    do {
      if (lVar2 == 0xb) {
        *(undefined1 *)(param_1 + 0xc) = 1;
        return;
      }
      param_1[0xb] = lVar2;
      param_1[lVar2] = (long)param_2;
      uVar1 = *(uint *)(param_2 + 2) & 0xffffff;
      uVar4 = *(uint *)(param_2 + 2) >> 0x18 & 7;
      if (uVar3 < uVar1) {
        *(uint *)(param_1 + 0xd) = uVar1;
        uVar3 = uVar1;
LAB_10ae073bc:
        *(uint *)((long)param_1 + 100) = uVar4;
        uVar5 = uVar4;
      }
      else if (uVar1 == 0 && uVar3 == 0) {
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        goto LAB_10ae073bc;
      }
      lVar6 = param_2[1];
      *param_1 = lVar6;
      if (lVar6 != 0) {
        return;
      }
      param_2 = (long *)*param_2;
      lVar2 = lVar2 + 1;
    } while (param_2 != (long *)0x0);
  }
  return;
}



/* Entry: 10ae073e8; end: 10ae0751b;  */

long FUN_10ae073e8(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_40;
  ushort *puStack_38;
  
  lVar3 = param_1;
  FUN_10ae07350(param_1,*param_2);
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(ulong *)(lVar3 + 0x78) = 0;
  *(undefined4 *)(lVar3 + 0x70) = 7;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined **)(lVar3 + 0x98) = &DAT_10f388cfe;
  *(uint *)(lVar3 + 0x70) = *(ushort *)(param_2 + 1) >> 2 & 7;
  puStack_38 = (ushort *)(param_2 + 2);
  if ((*(ushort *)(param_2 + 1) >> 5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uStack_40 = 4;
    puVar2 = (ushort *)0x2;
    __ZNSt3__15alignEmmRPvRm(2,2,&puStack_38,&uStack_40);
    puStack_38 = puVar2 + 1;
    uVar5 = (ulong)*puVar2;
  }
  *(ulong *)(lVar3 + 0x78) = uVar5;
  uVar1 = *(ushort *)(param_2 + 1);
  uVar5 = (ulong)(uVar1 >> 6) & 0x1f;
  if ((int)uVar5 != 0) {
    uStack_40 = 0x10;
    lVar3 = 8;
    __ZNSt3__15alignEmmRPvRm(8,8,&puStack_38,&uStack_40);
    *(long *)(param_1 + 0x80) = lVar3;
    *(ulong *)(param_1 + 0x88) = uVar5;
    puStack_38 = (ushort *)(lVar3 + uVar5 * 8);
    uVar1 = *(ushort *)(param_2 + 1);
  }
  if ((uVar1 >> 0xb & 1) == 0) {
    lVar3 = 0;
  }
  else {
    uStack_40 = 0x30;
    lVar3 = 8;
    __ZNSt3__15alignEmmRPvRm(8,0x18,&puStack_38,&uStack_40);
    puStack_38 = (ushort *)(lVar3 + 0x18);
  }
  *(long *)(param_1 + 0x90) = lVar3;
  uStack_40 = 2;
  uVar4 = 1;
  __ZNSt3__15alignEmmRPvRm(1,1,&puStack_38,&uStack_40);
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  return param_1;
}



/* Entry: 10ae0751c; end: 10ae07587;  */

void FUN_10ae0751c(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long alStack_90 [14];
  
  FUN_10ae07350(alStack_90,param_1);
  if (alStack_90[0] != 0) {
    puVar1 = (uint *)(alStack_90[0] + 200);
    do {
      uVar3 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar2 = 0x7000000;
    if ((int)param_2 < 8) {
      uVar2 = (param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU) & 7) << 0x18;
    }
    *(uint *)(param_1 + 0x10) = uVar2 | uVar3 & 0xffffff;
  }
  return;
}



/* Entry: 10ae07588; end: 10ae0784b;  */

void FUN_10ae07588(char *param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  undefined **ppuVar12;
  ulong unaff_x19;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puStack_138;
  char *pcStack_130;
  char *pcStack_128;
  undefined8 *puStack_120;
  char *pcStack_118;
  undefined8 *puStack_110;
  char *pcStack_108;
  char *pcStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined2 *puStack_e0;
  char *pcStack_d8;
  ulong uStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined4 uStack_a4;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  undefined1 uStack_71;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = (undefined8 *)*param_2;
  if (7 < *(uint *)(puVar16 + 6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf000,0x10ae075e4);
    (*pcVar4)();
  }
  uVar2 = *(uint *)(&UNK_10e516c4c + (ulong)*(uint *)(puVar16 + 6) * 4);
  pcVar9 = param_1;
  if ((uRam000000011330a9e8 & uVar2) == 0) goto LAB_10ae07804;
  uVar15 = *(uint *)(param_1 + 4);
  lVar7 = puVar16[7];
  if ((*(long *)(lVar7 + 8) == 0) || (*(code **)(param_1 + 8) == (code *)0x0)) {
    uVar6 = 0;
  }
  else {
    (**(code **)(param_1 + 8))();
    uVar6 = (uint)lVar7;
  }
  unaff_x19 = 0x2f;
  uStack_70 = 0x2f;
  uStack_71 = 0;
  if (puVar16[1] == 0) {
LAB_10ae076d8:
    puStack_e0 = (undefined2 *)((long)&uStack_a0 + unaff_x19);
  }
  else {
    plVar17 = (long *)*puVar16;
    lVar7 = puVar16[1] << 3;
    uStack_b4 = uVar6;
    puStack_b0 = param_2;
    uStack_a4 = uVar15;
    do {
      uVar13 = uStack_70;
      lVar11 = *plVar17;
      uVar8 = lVar11 + 0x14U;
      _strlen();
      uVar1 = uVar8;
      if (uVar13 <= uVar8) {
        uVar1 = uVar13;
      }
      if (uVar1 != 0) {
        _memmove((long)&uStack_a0 + (uVar13 - uVar1),lVar11 + 0x14U + (uVar8 - uVar1),uVar1);
        uVar13 = uStack_70;
      }
      uStack_70 = uVar13 - uVar1;
      bVar5 = uStack_70 != 0;
      if (bVar5) {
        _memcpy((long)&uStack_a4 + uStack_70 + 3,&DAT_10f62a9de,1);
      }
      unaff_x19 = uStack_70 - bVar5;
      plVar17 = plVar17 + 1;
      lVar7 = lVar7 + -8;
      uStack_70 = unaff_x19;
    } while (lVar7 != 0);
    param_2 = puStack_b0;
    uVar15 = uStack_a4;
    uVar6 = uStack_b4;
    if (unaff_x19 != 0) goto LAB_10ae076d8;
    uStack_9e = 0x2e;
    uStack_a0 = 0x2e2e;
    puStack_e0 = &uStack_a0;
  }
  if (*(char *)(puVar16 + 3) == '\x01') {
    ppuVar12 = (undefined **)puVar16[2];
  }
  else {
    ppuVar12 = &PTR_s__110c778c0;
  }
  uVar6 = uVar6 | uVar2;
  param_3 = *ppuVar12;
  param_4 = ppuVar12[1];
  uStack_70 = unaff_x19;
  if (*param_1 == '\x01') {
    pcStack_d8 = param_3;
    if ((param_1[1] & 1U) == 0) {
      if (*param_3 == '\0') goto LAB_10ae077e4;
    }
    else {
      cVar3 = *param_4;
      if (*param_3 == '\0') goto joined_r0x00010ae07784;
      if (cVar3 != '\0') {
        uStack_c0 = *(undefined8 *)param_2[1];
        param_2 = (undefined8 *)(ulong)(uVar15 | uVar6);
        pcVar9 = (char *)0x0;
        uStack_d0 = (ulong)*(uint *)(ppuVar12 + 2);
        pcStack_c8 = param_4;
        func_0x00010ae06f08();
        goto LAB_10ae07804;
      }
    }
    pcStack_c8 = *(char **)param_2[1];
    param_2 = (undefined8 *)(ulong)(uVar15 | uVar6);
    pcVar9 = (char *)0x0;
    uStack_d0 = (ulong)*(uint *)(ppuVar12 + 2);
    func_0x00010ae06f08();
  }
  else {
    if (param_1[1] == '\x01') {
      cVar3 = *param_4;
joined_r0x00010ae07784:
      if (cVar3 != '\0') {
        uStack_d0 = *(ulong *)param_2[1];
        param_2 = (undefined8 *)(ulong)(uVar15 | uVar6);
        pcVar9 = (char *)0x0;
        pcStack_d8 = param_4;
        func_0x00010ae06f08();
        goto LAB_10ae07804;
      }
    }
LAB_10ae077e4:
    pcStack_d8 = *(char **)param_2[1];
    param_2 = (undefined8 *)(ulong)(uVar15 | uVar6);
    pcVar9 = (char *)0x0;
    func_0x00010ae06f08();
  }
LAB_10ae07804:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    pcStack_e8 = FUN_10ae0784c;
    if (*(long *)(pcVar9 + 0xc0) != 0) {
      piVar14 = (int *)(pcVar9 + 8);
      lVar7 = *(long *)(pcVar9 + 0xc0) * 0x18;
      puStack_138 = param_2;
      pcStack_130 = param_3;
      pcStack_128 = param_4;
      puStack_120 = param_2;
      pcStack_118 = param_4;
      puStack_110 = param_2;
      pcStack_108 = param_3;
      pcStack_100 = param_1;
      uStack_f8 = unaff_x19;
      puStack_f0 = &stack0xfffffffffffffff0;
      do {
        iVar10 = *piVar14;
        if (iVar10 == 0) {
          (**(code **)(piVar14 + -2))(&puStack_110,*(undefined8 *)(piVar14 + 2));
          iVar10 = *piVar14;
        }
        if (iVar10 == 1) {
          (**(code **)(piVar14 + -2))(&puStack_120,*(undefined8 *)(piVar14 + 2));
          iVar10 = *piVar14;
        }
        if (iVar10 == 2) {
          (**(code **)(piVar14 + -2))(&puStack_138,*(undefined8 *)(piVar14 + 2));
        }
        piVar14 = piVar14 + 6;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    return;
  }
  return;
}



/* Entry: 10ae0784c; end: 10ae0799f;  */

void FUN_10ae0784c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    piVar2 = (int *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0xc0) * 0x18;
    uStack_58 = param_2;
    uStack_50 = param_3;
    uStack_48 = param_4;
    uStack_40 = param_2;
    uStack_38 = param_4;
    uStack_30 = param_2;
    uStack_28 = param_3;
    do {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        (**(code **)(piVar2 + -2))(&uStack_30,*(undefined8 *)(piVar2 + 2));
        iVar1 = *piVar2;
      }
      if (iVar1 == 1) {
        (**(code **)(piVar2 + -2))(&uStack_40,*(undefined8 *)(piVar2 + 2));
        iVar1 = *piVar2;
      }
      if (iVar1 == 2) {
        (**(code **)(piVar2 + -2))(&uStack_58,*(undefined8 *)(piVar2 + 2));
      }
      piVar2 = piVar2 + 6;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10ae079a0; end: 10ae07cd3;  */

undefined ** FUN_10ae079a0(ulong param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_de8;
  undefined8 uStack_de0;
  undefined1 uStack_dd8;
  undefined *puStack_dd0;
  undefined8 uStack_dc8;
  undefined1 uStack_dc0;
  undefined **ppuStack_db8;
  undefined *puStack_db0;
  undefined *puStack_da8;
  ulong uStack_da0;
  ulong uStack_d98;
  ulong uStack_d90;
  undefined4 uStack_d88;
  undefined **ppuStack_d80;
  undefined *puStack_d78;
  undefined8 uStack_d70;
  undefined1 uStack_d68;
  undefined *puStack_d60;
  undefined8 uStack_d58;
  undefined1 uStack_d50;
  int iStack_d48;
  undefined1 auStack_d40 [1024];
  undefined1 auStack_940 [1024];
  long lStack_540;
  char *pcStack_4d0;
  long lStack_4c8;
  undefined1 uStack_4c0;
  char *pcStack_4b8;
  long lStack_4b0;
  undefined1 uStack_4a8;
  undefined **ppuStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  undefined4 uStack_470;
  undefined *puStack_468;
  char acStack_460 [1024];
  char acStack_60 [8];
  char *pcStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340d858;
  (*(code *)PTR___tlv_bootstrap_11340d858)();
  FUN_10ae073e8();
  if ((*(ushort *)(param_2 + 8) & 3) == 0) {
    ppuVar3 = (undefined **)0x0;
    if (((ulong)ppuVar6[0xc] & 1) != 0) {
      ppuVar8 = (undefined **)0x0;
      goto LAB_10ae079fc;
    }
    ppuVar8 = ppuVar3;
    if (*ppuVar6 == (undefined *)0x0) goto LAB_10ae079fc;
    if (*(int *)(ppuVar6 + 0xe) <= *(int *)((long)ppuVar6 + 100)) {
      if (param_1 < 0x401) {
        ppuVar3 = ppuVar6 + 0x14;
        ppuVar8 = ppuVar6;
        goto LAB_10ae079fc;
      }
      builtin_strncpy(acStack_460,"Message at path \"",0x11);
      pcStack_58 = acStack_460 + 0x11;
      if (ppuVar6[0xb] != (undefined *)0x0) {
        lVar10 = (long)ppuVar6[0xb] * 8 + 8;
        do {
          lVar10 = lVar10 + -8;
          if (pcStack_58 < acStack_60) {
            pcVar11 = (char *)(*(long *)((long)ppuVar6 + lVar10) + 0x14);
            do {
              if (*pcVar11 == '\0') break;
              pcVar1 = pcStack_58 + 1;
              *pcStack_58 = *pcVar11;
              pcStack_58 = pcVar1;
              pcVar11 = pcVar11 + 1;
            } while (pcStack_58 < acStack_60);
          }
          pcVar11 = pcStack_58;
          if (acStack_60 != pcStack_58) {
            *pcStack_58 = '.';
            pcStack_58 = pcStack_58 + 1;
          }
        } while (lVar10 != 8);
        if ((acStack_460 <= pcVar11) && (pcVar11 < acStack_60)) {
          pcStack_58 = pcVar11;
        }
      }
      uVar4 = (long)acStack_60 - (long)pcStack_58;
      if (0x15 < uVar4) {
        uVar4 = 0x16;
      }
      if (acStack_60 != pcStack_58) {
        _memcpy(pcStack_58,&UNK_10f6c34d2,uVar4);
      }
      pcStack_58 = pcStack_58 + uVar4;
      if (pcStack_58 < acStack_60) {
        pcVar11 = ppuVar6[0x13];
        do {
          if (*pcVar11 == '\0') break;
          pcVar1 = pcStack_58 + 1;
          *pcStack_58 = *pcVar11;
          pcStack_58 = pcVar1;
          pcVar11 = pcVar11 + 1;
        } while (pcStack_58 < acStack_60);
      }
      uVar4 = (long)acStack_60 - (long)pcStack_58;
      if (0x33 < uVar4) {
        uVar4 = 0x34;
      }
      if (acStack_60 != pcStack_58) {
        _memcpy(pcStack_58,&UNK_10f6c34e9,uVar4);
      }
      pcStack_58 = pcStack_58 + uVar4;
      func_0x00010ae078f0(acStack_460,param_1);
      uVar4 = (long)acStack_60 - (long)pcStack_58;
      if (0xe < uVar4) {
        uVar4 = 0xf;
      }
      if (acStack_60 != pcStack_58) {
        _memcpy(pcStack_58,&UNK_10f6c351e,uVar4);
      }
      pcStack_58 = pcStack_58 + uVar4;
      func_0x00010ae078f0(acStack_460,0x400);
      bVar2 = acStack_60 != pcStack_58;
      if (bVar2) {
        _memcpy(pcStack_58,&DAT_10f684600,1);
      }
      pcVar11 = pcStack_58 + bVar2;
      pcStack_58[bVar2] = '\0';
      puVar12 = *ppuVar6;
      uVar5 = 0;
      pcStack_58 = pcVar11;
      _clock_gettime_nsec_np();
      uVar4 = uVar5;
      _pthread_self();
      _pthread_mach_thread_np();
      ppuStack_4a0 = &PTR_DAT_11330aa20;
      uStack_498 = 1;
      lStack_4c8 = (long)pcVar11 - (long)acStack_460;
      uStack_478 = uVar4 & 0xffffffff;
      uStack_490 = 0;
      uStack_488 = 0;
      uStack_470 = 5;
      puStack_468 = &UNK_10e516c70;
      pcStack_4d0 = acStack_460;
      uStack_4a8 = 0;
      uStack_4c0 = 0;
      pcStack_4b8 = pcStack_4d0;
      lStack_4b0 = lStack_4c8;
      uStack_480 = uVar5;
      FUN_10ae0784c(puVar12,&ppuStack_4a0,&pcStack_4b8,&pcStack_4d0);
    }
  }
  ppuVar3 = (undefined **)0x0;
  ppuVar8 = (undefined **)0x0;
LAB_10ae079fc:
  iVar7 = (int)ppuVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_540 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_d78,auStack_940,0x400,auStack_d40,0x400,ppuVar3[0x13],ppuVar3[0xf],
                  ppuVar3 + 0x14,0x400);
    puStack_de8 = puStack_d60;
    uStack_de0 = uStack_d58;
    puStack_dd0 = puStack_d78;
    uStack_dc8 = uStack_d70;
    uStack_dd8 = uStack_d50;
    if (iStack_d48 != 0) {
      puStack_de8 = &UNK_10f6c352e;
      uStack_de0 = 0x10;
      puStack_dd0 = &UNK_10f6c352e;
      uStack_dc8 = 0x10;
      uStack_dd8 = 0;
      uStack_d68 = 0;
    }
    puVar13 = ppuVar3[0x12];
    puVar12 = ppuVar3[0xb];
    uVar5 = 0;
    _clock_gettime_nsec_np();
    uVar4 = uVar5;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_db8 = ppuVar3 + 1;
    uStack_d88 = *(undefined4 *)(ppuVar3 + 0xe);
    uStack_d90 = uVar4 & 0xffffffff;
    ppuStack_d80 = ppuVar3 + 0x10;
    ppuVar6 = (undefined **)*ppuVar3;
    pppuVar9 = &ppuStack_db8;
    uStack_dc0 = uStack_d68;
    puStack_db0 = puVar12;
    puStack_da8 = puVar13;
    uStack_da0 = (ulong)(puVar13 != (undefined *)0x0);
    uStack_d98 = uVar5;
    FUN_10ae0784c(ppuVar6,pppuVar9,&puStack_dd0,&puStack_de8);
    iVar7 = (int)pppuVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_540) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(ppuVar6);
  return ppuVar6;
}



/* Entry: 10ae07cd4; end: 10ae07e27;  */

undefined8 FUN_10ae07cd4(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined8 *puStack_8e8;
  undefined8 uStack_8e0;
  long lStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined8 *puStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,param_1[0x13],param_1[0xf],
                  param_1 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    lVar6 = param_1[0x12];
    uVar5 = param_1[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    puStack_8e8 = param_1 + 1;
    uStack_8b8 = *(undefined4 *)(param_1 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    puStack_8b0 = param_1 + 0x10;
    uVar3 = *param_1;
    ppuVar4 = &puStack_8e8;
    uStack_8f0 = uStack_898;
    uStack_8e0 = uVar5;
    lStack_8d8 = lVar6;
    uStack_8d0 = (ulong)(lVar6 != 0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(uVar3,ppuVar4,&puStack_900,&puStack_918);
    param_2 = (int)ppuVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(uVar3);
    return uVar3;
  }
  return uVar3;
}



/* Entry: 10ae07e28; end: 10ae07e53;  */

undefined8 FUN_10ae07e28(undefined8 param_1)

{
  func_0x00010ae087bc();
  FUN_10ae07e54(param_1);
  return param_1;
}



/* Entry: 10ae07e54; end: 10ae07e87;  */

void FUN_10ae07e54(void)

{
  long unaff_x19;
  
  func_0x00010ae08830();
  func_0x00010ae08820();
  if (*(int *)(unaff_x19 + 0x34) != 0) {
    if (*(int *)(unaff_x19 + 0x34) - 3U < 2) {
      func_0x000107c30258(unaff_x19 + 0x28);
    }
    *(undefined4 *)(unaff_x19 + 0x34) = 0;
  }
  return;
}



/* Entry: 10ae07e88; end: 10ae07e8b;  */

undefined8 FUN_10ae07e88(undefined8 param_1)

{
  func_0x00010ae087bc();
  FUN_10ae07e54(param_1);
  return param_1;
}



/* Entry: 10ae07e8c; end: 10ae07e9f;  */

void FUN_10ae07e8c(void)

{
  FUN_10ae07e28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae07ea0; end: 10ae07ed3;  */

void FUN_10ae07ea0(long param_1)

{
  if (*(int *)(param_1 + 0x34) - 3U < 2) {
    func_0x000107c30258(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10ae07ed4; end: 10ae07edf;  */

undefined ** FUN_10ae07ed4(void)

{
  return &PTR_DAT_110c77978;
}



/* Entry: 10ae07ee0; end: 10ae07f1b;  */

void FUN_10ae07ee0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae08730();
  func_0x00010ae08818();
  *(undefined2 *)(unaff_x19 + 0x20) = 0;
  FUN_10ae07ea0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10ae07f1c; end: 10ae080b7;  */

long * FUN_10ae07f1c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  int iVar5;
  long unaff_x22;
  long *plVar6;
  int iVar7;
  
  plVar1 = param_1;
  plVar2 = param_2;
  plVar6 = param_3;
  func_0x00010ae0875c(param_1[2]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae07f5c;
  }
  else if ((int)plVar2 != 0) {
LAB_10ae07f5c:
    func_0x00010ae08714();
    plVar2 = (long *)0x1;
    plVar1 = param_3;
    func_0x00010ae0879c();
    param_2 = plVar1;
  }
  func_0x00010ae0875c(param_1[3]);
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae07f9c;
  }
  else if ((int)plVar2 != 0) {
LAB_10ae07f9c:
    func_0x00010ae08714();
    plVar1 = param_3;
    func_0x00010ae0879c();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x34) == 4) {
    func_0x00010ae0875c(param_1[5]);
    func_0x00010ae08714();
    uVar3 = 4;
  }
  else {
    if (*(int *)((long)param_1 + 0x34) != 3) goto LAB_10ae08030;
    func_0x00010ae0875c(param_1[5]);
    func_0x00010ae08714();
    uVar3 = 3;
  }
  plVar1 = param_3;
  func_0x00010ae0879c(param_3,uVar3);
  param_2 = plVar1;
LAB_10ae08030:
  plVar2 = plVar1;
  if ((char)param_1[4] == '\x01') {
    func_0x00010ae08800();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar1);
    func_0x00010ae0883c();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    func_0x00010ae08800();
    param_2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010ae0883c();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010ae08850();
  if ((long)plVar6 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)plVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar4,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  while( true ) {
    iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar5 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar5 - iVar7);
    if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
    func_0x00010b4d5738();
    lVar4 = (long)param_2 + (long)iVar7;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar4);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar5);
}



/* Entry: 10ae080b8; end: 10ae0815f;  */

long FUN_10ae080b8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010ae08700();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010ae08774(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae087a8();
  }
  lVar2 = lVar2 + (ulong)*(byte *)(unaff_x19 + 0x20) * 2 + (ulong)*(byte *)(unaff_x19 + 0x21) * 2;
  if (*(int *)(unaff_x19 + 0x34) - 3U < 2) {
    func_0x000107c282a0(*(ulong *)(unaff_x19 + 0x28) & 0xfffffffffffffffc);
    func_0x00010ae087a8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0885c();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 10ae08160; end: 10ae082a7;  */

void FUN_10ae08160(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  ulong uVar7;
  
  uVar5 = *(ulong *)(param_1 + 8);
  uVar7 = uVar5;
  if ((uVar5 & 1) != 0) {
    uVar7 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar4 = param_2;
  func_0x00010ae08768(*(undefined8 *)(param_2 + 0x10));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      func_0x00010ae08780();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010ae08768(*(undefined8 *)(param_2 + 0x18));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010ae08780();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10ae07ea0(param_1);
      }
      *(int *)(param_1 + 0x34) = iVar2;
    }
    if ((iVar2 == 4) || (iVar2 == 3)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x28) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x34) != iVar2) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x28,puVar1,uVar7);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10ae082a8; end: 10ae08323;  */

undefined8 * FUN_10ae082a8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110c778e8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00010ae08848();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010ae08848();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010ae08848();
  param_1[4] = lVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10ae08324; end: 10ae0834f;  */

undefined8 FUN_10ae08324(undefined8 param_1)

{
  func_0x00010ae087bc();
  FUN_10ae08350(param_1);
  return param_1;
}



/* Entry: 10ae08350; end: 10ae08373;  */

void FUN_10ae08350(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x00010ae08830();
  func_0x00010ae08820();
  uVar1 = *(ulong *)(unaff_x19 + 0x20) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10ae08374; end: 10ae08377;  */

undefined8 FUN_10ae08374(undefined8 param_1)

{
  func_0x00010ae087bc();
  FUN_10ae08350(param_1);
  return param_1;
}



/* Entry: 10ae08378; end: 10ae0838b;  */

void FUN_10ae08378(void)

{
  FUN_10ae08324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0838c; end: 10ae08397;  */

undefined ** FUN_10ae0838c(void)

{
  return &PTR_DAT_110c779c0;
}



/* Entry: 10ae08398; end: 10ae083d3;  */

void FUN_10ae08398(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae08730();
  func_0x00010ae08818();
  func_0x000107c3025c(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10ae083d4; end: 10ae084e7;  */

long * FUN_10ae083d4(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010ae086e4();
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae08404;
  }
  else if ((int)param_2 != 0) {
LAB_10ae08404:
    func_0x00010ae08714();
    param_1 = unaff_x19;
    func_0x00010ae086cc();
    unaff_x20 = param_1;
  }
  lVar2 = *(long *)(unaff_x21 + 0x28);
  if (lVar2 != 0) {
    func_0x00010ae087f4();
    unaff_x20 = param_1;
  }
  func_0x00010ae0875c(*(undefined8 *)(unaff_x21 + 0x18));
  if (lVar2 < 0) {
    lVar2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae08454;
  }
  else if ((int)lVar2 != 0) {
LAB_10ae08454:
    func_0x00010ae08714();
    lVar2 = 3;
    unaff_x20 = unaff_x19;
    func_0x00010ae086cc();
  }
  func_0x00010ae0875c(*(undefined8 *)(unaff_x21 + 0x20));
  if (lVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae084b0;
  }
  else if ((int)lVar2 == 0) goto LAB_10ae084b0;
  func_0x00010ae08714();
  unaff_x20 = unaff_x19;
  func_0x00010ae086cc();
LAB_10ae084b0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae08850();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar3);
  }
  _memcpy(unaff_x20,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 10ae084e8; end: 10ae0858b;  */

long FUN_10ae084e8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010ae08700();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010ae08774(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae087a8();
  }
  func_0x00010ae08774(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae087a8();
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x00010ae087d4();
    lVar2 = extraout_x8_02 + lVar2;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0885c();
    lVar1 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 10ae0858c; end: 10ae0858f;  */

void FUN_10ae0858c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0873c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae08780();
    }
    func_0x00010ae08828();
  }
  func_0x00010ae08768(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae08780();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae08768(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae08780();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae087c4();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae08590; end: 10ae08633;  */

void FUN_10ae08590(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0873c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae08780();
    }
    func_0x00010ae08828();
  }
  func_0x00010ae08768(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae08780();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae08768(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae08780();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae087c4();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae08634; end: 10ae08643;  */

void FUN_10ae08634(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    param_2 = 0x38;
    __Znwm();
  }
  else {
    func_0x00010ae0880c();
  }
  func_0x00010ae0878c(&PTR_FUN_110c778e8);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined8 *)(param_2 + 0x18) = extraout_x8;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x20) = extraout_x8;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10ae08644; end: 10ae086cb;  */

void FUN_10ae08644(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    param_1 = 0x38;
    __Znwm();
  }
  else {
    func_0x00010ae0880c();
  }
  func_0x00010ae0878c(&PTR_FUN_110c778e8);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = extraout_x8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10ae086cc; end: 10ae08867;  */

long * FUN_10ae086cc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10ae08868; end: 10ae08897;  */

long FUN_10ae08868(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10ae08898(param_1);
  return param_1;
}



/* Entry: 10ae08898; end: 10ae088b7;  */

void FUN_10ae08898(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x00010ae08f68();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10ae088b8; end: 10ae088bb;  */

long FUN_10ae088b8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10ae08898(param_1);
  return param_1;
}



/* Entry: 10ae088bc; end: 10ae088cf;  */

void FUN_10ae088bc(void)

{
  FUN_10ae08868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae088d0; end: 10ae088db;  */

undefined ** FUN_10ae088d0(void)

{
  return &PTR_DAT_110c77ad8;
}



/* Entry: 10ae088dc; end: 10ae08917;  */

void FUN_10ae088dc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae08f74();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined2 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10ae08918; end: 10ae08a3f;  */

long * FUN_10ae08918(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x22;
  int iVar7;
  
  plVar1 = param_1;
  plVar2 = param_2;
  func_0x00010ae08f98(param_1[2]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae08958;
  }
  else if ((int)plVar2 != 0) {
LAB_10ae08958:
    func_0x00010ae08f10();
    plVar2 = (long *)0x1;
    plVar1 = param_3;
    func_0x00010ae08f8c();
    param_2 = plVar1;
  }
  func_0x00010ae08f98(param_1[3]);
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae089b4;
  }
  else if ((int)plVar2 == 0) goto LAB_10ae089b4;
  func_0x00010ae08f10();
  plVar1 = param_3;
  func_0x00010ae08f8c(param_3,2);
  param_2 = plVar1;
LAB_10ae089b4:
  plVar2 = plVar1;
  if ((char)param_1[4] == '\x01') {
    func_0x00010ae08f5c();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x00010ae08f38();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    func_0x00010ae08f5c();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010ae08f38();
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



/* Entry: 10ae08a40; end: 10ae08b77;  */

void FUN_10ae08a40(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1;
  func_0x00010ae08fa4(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  func_0x00010ae08fa4(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)lVar3 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2 + (uint)*(byte *)(param_1 + 0x21) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10ae08b78; end: 10ae08ba7;  */

long FUN_10ae08b78(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10ae08ba8(param_1);
  return param_1;
}



/* Entry: 10ae08ba8; end: 10ae08bc7;  */

void FUN_10ae08ba8(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x00010ae08f68();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10ae08bc8; end: 10ae08bcb;  */

long FUN_10ae08bc8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10ae08ba8(param_1);
  return param_1;
}



/* Entry: 10ae08bcc; end: 10ae08bdf;  */

void FUN_10ae08bcc(void)

{
  FUN_10ae08b78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae08be0; end: 10ae08beb;  */

undefined ** FUN_10ae08be0(void)

{
  return &PTR_DAT_110c77b20;
}



/* Entry: 10ae08bec; end: 10ae08c27;  */

void FUN_10ae08bec(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae08f74();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10ae08c28; end: 10ae08d17;  */

long * FUN_10ae08c28(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar1 = param_2;
  func_0x00010ae08f98(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae08c68;
  }
  else if ((int)plVar1 != 0) {
LAB_10ae08c68:
    func_0x00010ae08f10();
    param_2 = param_3;
    func_0x00010ae08f80(param_3,1);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  plVar1 = param_2;
  if (lVar2 != 0) {
    plVar1 = param_3;
    func_0x000107c282cc(param_3,lVar2,param_2);
  }
  func_0x00010ae08f98(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae08cdc;
  }
  else if ((int)lVar2 == 0) goto LAB_10ae08cdc;
  func_0x00010ae08f10();
  plVar1 = param_3;
  func_0x00010ae08f80(param_3,3);
LAB_10ae08cdc:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10ae08d18; end: 10ae08e4f;  */

long FUN_10ae08d18(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010ae08fa4(*(undefined8 *)(param_1 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar2 + 1;
  }
  func_0x00010ae08fa4(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + lVar2 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x28) = (int)lVar4;
  return lVar4;
}



/* Entry: 10ae08e50; end: 10ae08e5f;  */

void FUN_10ae08e50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110c77a48;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10ae08e60; end: 10ae08f07;  */

void FUN_10ae08e60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110c77a48;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10ae08f08; end: 10ae08fbb;  */

void FUN_10ae08f08(void)

{
  return;
}



/* Entry: 10ae08fbc; end: 10ae09063;  */

undefined8 * FUN_10ae08fbc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110c77c98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x00010ae0ac64();
  param_1[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x00010ae0ac64();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x00010ae0ac64();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x00010ae0ac64();
  param_1[5] = lVar2;
  lVar2 = param_3 + 0x30;
  func_0x00010ae0ac64();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010ae0ac64();
  param_1[7] = lVar2;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x50);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar1;
  return param_1;
}



/* Entry: 10ae09064; end: 10ae0908f;  */

undefined8 FUN_10ae09064(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae09090(param_1);
  return param_1;
}



/* Entry: 10ae09090; end: 10ae090d7;  */

/* WARNING: Possible PIC construction at 0x00010ae090a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae090b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae090c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae090b8) */
/* WARNING: Removing unreachable block (ram,0x00010ae090a8) */
/* WARNING: Removing unreachable block (ram,0x00010ae090c8) */

void FUN_10ae09090(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10ae090d8; end: 10ae090db;  */

undefined8 FUN_10ae090d8(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae09090(param_1);
  return param_1;
}



/* Entry: 10ae090dc; end: 10ae090ef;  */

void FUN_10ae090dc(void)

{
  FUN_10ae09064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae090f0; end: 10ae090fb;  */

undefined ** FUN_10ae090f0(void)

{
  return &PTR_DAT_110c77e18;
}



/* Entry: 10ae090fc; end: 10ae09157;  */

void FUN_10ae090fc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0aca8();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10ae09158; end: 10ae09373;  */

long * FUN_10ae09158(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long unaff_x22;
  long *plVar5;
  int iVar6;
  
  plVar1 = param_2;
  plVar5 = param_3;
  func_0x00010ae0ac30(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae09198;
  }
  else if ((int)plVar1 != 0) {
LAB_10ae09198:
    func_0x00010ae0abc0();
    param_2 = param_3;
    func_0x00010ae0ab34(param_3,1);
  }
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = param_3;
    func_0x000107c282cc();
    plVar5 = param_2;
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar2 = param_3;
    func_0x000107c282ac();
    plVar5 = plVar1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  plVar1 = plVar2;
  if (lVar3 != 0) {
    plVar1 = param_3;
    func_0x000107c282e8();
    plVar5 = plVar2;
  }
  func_0x00010ae0ac30(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 < 0) {
    lVar3 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae09220;
  }
  else if ((int)lVar3 != 0) {
LAB_10ae09220:
    func_0x00010ae0abc0();
    lVar3 = 5;
    plVar1 = param_3;
    func_0x00010ae0ab34();
  }
  func_0x00010ae0ac30(*(undefined8 *)(param_1 + 0x20));
  if (lVar3 < 0) {
    lVar3 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae09260;
  }
  else if ((int)lVar3 != 0) {
LAB_10ae09260:
    func_0x00010ae0abc0();
    lVar3 = 6;
    plVar1 = param_3;
    func_0x00010ae0ab34();
  }
  func_0x00010ae0ac30(*(undefined8 *)(param_1 + 0x28));
  if (lVar3 < 0) {
    lVar3 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae092a0;
  }
  else if ((int)lVar3 != 0) {
LAB_10ae092a0:
    func_0x00010ae0abc0();
    lVar3 = 7;
    plVar1 = param_3;
    func_0x00010ae0ab34();
  }
  func_0x00010ae0ac30(*(undefined8 *)(param_1 + 0x30));
  if (lVar3 < 0) {
    lVar3 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10ae092e0;
  }
  else if ((int)lVar3 != 0) {
LAB_10ae092e0:
    func_0x00010ae0abc0();
    lVar3 = 8;
    plVar1 = param_3;
    func_0x00010ae0ab34();
  }
  func_0x00010ae0ac30(*(undefined8 *)(param_1 + 0x38));
  if (lVar3 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae0933c;
  }
  else if ((int)lVar3 == 0) goto LAB_10ae0933c;
  func_0x00010ae0abc0();
  plVar1 = param_3;
  func_0x00010ae0ab34(param_3,9);
LAB_10ae0933c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  func_0x00010ae0acb4();
  if ((long)plVar5 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar4 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar4);
  }
  _memcpy(plVar1,lVar3,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)plVar5);
}



/* Entry: 10ae09374; end: 10ae0949b;  */

long FUN_10ae09374(long param_1)

{
  int extraout_w8;
  int extraout_w8_00;
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar3;
  long extraout_x9;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar3 + 1;
  }
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0ac3c();
  }
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0ac3c();
  }
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0ac3c();
  }
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0ac3c();
  }
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0ac3c();
  }
  iVar1 = -9;
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010ae0ab40();
    iVar1 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010ae0ab40();
    iVar1 = extraout_w8_00;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * iVar1 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae0ace4();
    lVar3 = extraout_x8_05;
    if (extraout_x8_05 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x54) = (int)lVar4;
  return lVar4;
}



/* Entry: 10ae0949c; end: 10ae0949f;  */

void FUN_10ae0949c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0abf8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    func_0x00010ae0ada8();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x19 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0ad68();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae094a0; end: 10ae095d3;  */

void FUN_10ae094a0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0abf8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    func_0x00010ae0ada8();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x19 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0ad68();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10ae095d4; end: 10ae095fb;  */

void FUN_10ae095d4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10ae095fc; end: 10ae0961f;  */

undefined8 FUN_10ae095fc(undefined8 param_1)

{
  func_0x00010ae0ac10();
  return param_1;
}



/* Entry: 10ae09620; end: 10ae09623;  */

undefined8 FUN_10ae09620(undefined8 param_1)

{
  func_0x00010ae0ac10();
  return param_1;
}



/* Entry: 10ae09624; end: 10ae09637;  */

void FUN_10ae09624(void)

{
  FUN_10ae095fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae09638; end: 10ae09657;  */

undefined ** FUN_10ae09638(void)

{
  return &PTR_DAT_110c77e68;
}



/* Entry: 10ae09658; end: 10ae096cb;  */

long * FUN_10ae09658(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010ae0ac98();
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010ae0abb4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010ae0acb4();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae096cc; end: 10ae0971b;  */

long FUN_10ae096cc(long param_1)

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



/* Entry: 10ae0971c; end: 10ae09733;  */

void FUN_10ae0971c(void)

{
  FUN_10ae096cc();
  func_0x00010ae0acf0();
  return;
}



/* Entry: 10ae09734; end: 10ae0975f;  */

undefined8 FUN_10ae09734(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae09760(param_1);
  return param_1;
}



/* Entry: 10ae09760; end: 10ae0979b;  */

void FUN_10ae09760(void)

{
  long unaff_x19;
  
  func_0x00010ae0ae24();
  func_0x000107c30258();
  func_0x000107c30258(unaff_x19 + 0x20);
  func_0x000107c30258(unaff_x19 + 0x28);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_10ae095fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0979c; end: 10ae0979f;  */

undefined8 FUN_10ae0979c(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae09760(param_1);
  return param_1;
}


