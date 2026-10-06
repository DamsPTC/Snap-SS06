/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100063830; end: 100063917;  */

void FUN_100063830(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [80];
  int iStack_58;
  undefined8 uStack_38;
  
  func_0x000100063820();
  uStack_c0 = param_1;
  uStack_b8 = param_2;
  uStack_38 = extraout_x8;
  FUN_1000639c4(auStack_a8,uRam0000000113375758,0,&puStack_c8,&uStack_c0);
  puStack_b0 = puStack_c8;
  while( true ) {
    puVar1 = auStack_a8;
    func_0x000100063a24(puVar1,&puStack_b0);
    if (((ulong)puVar1 & 1) != 0) break;
    FUN_100063a9c();
    func_0x000100063abc();
    puStack_b0 = puVar1;
    if ((puVar1 == (undefined1 *)0x0) || (iStack_58 != 0)) break;
  }
  puStack_c8 = puStack_b0;
  if ((*(byte *)(param_4 + 9) & 1) != 0) {
    func_0x0001006af8bc(*(undefined8 *)(param_4 + 0x28));
    puStack_c8 = puVar1;
  }
  if ((puStack_c8 != (undefined1 *)0x0) && (iStack_58 == 0)) {
    func_0x000100065438(0);
  }
  func_0x0001000659a8(uStack_38);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    return;
  }
  return;
}



/* Entry: 100063918; end: 100063923;  */

void FUN_100063918(void)

{
  return;
}



/* Entry: 100063924; end: 1000639c3;  */

void FUN_100063924(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  
  uVar1 = param_3;
  FUN_100063918();
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (uVar1 < 0x11) {
    if (param_3 != 0) {
      FUN_1001a3d14(unaff_x20 + 5);
      func_0x000107c610b4();
    }
    *(undefined4 *)((long)unaff_x20 + 0x1c) = 0;
    lVar2 = (long)(unaff_x20 + 5) + param_3;
    *unaff_x20 = lVar2;
    unaff_x20[1] = lVar2;
    unaff_x20[2] = 0;
    if (unaff_x20[9] == 1) {
      unaff_x20[9] = unaff_x19 - (long)(unaff_x20 + 5);
    }
  }
  else {
    *(undefined4 *)((long)unaff_x20 + 0x1c) = 0x10;
    lVar2 = unaff_x19 + param_3 + -0x10;
    *unaff_x20 = lVar2;
    unaff_x20[1] = lVar2;
    unaff_x20[2] = (long)(unaff_x20 + 5);
    if (unaff_x20[9] == 1) {
      unaff_x20[9] = 2;
    }
  }
  return;
}



/* Entry: 1000639c4; end: 100063a17;  */

long FUN_1000639c4(long param_1,undefined4 param_2,ulong param_3,long *param_4,undefined8 *param_5)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(ulong *)(param_1 + 0x48) = param_3 & 0xffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0x7ff8000000000000;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar1 = param_1;
  FUN_100063924(param_1,*param_5,param_5[1]);
  *param_4 = lVar1;
  return param_1;
}



/* Entry: 100063a18; end: 100063a2b;  */

void FUN_100063a18(void)

{
  return;
}



/* Entry: 100063a2c; end: 100063a9b;  */

uint FUN_100063a2c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  
  if (*param_2 < *param_1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (int)*param_2 - (int)param_1[1];
    if (*(uint *)((long)param_1 + 0x1c) == uVar1) {
      if ((0 < (int)uVar1) && (param_1[2] == 0)) {
        *param_2 = 0;
      }
      uVar1 = 1;
    }
    else {
      FUN_100065388();
      *param_2 = (ulong)param_1;
    }
  }
  return uVar1 & 1;
}



/* Entry: 100063a9c; end: 100063adb;  */

void FUN_100063a9c(void)

{
  return;
}



/* Entry: 100063adc; end: 100063b6f;  */

byte * FUN_100063adc(byte *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5,
                    undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x19;
  byte *unaff_x20;
  ulong uVar4;
  
  func_0x000100063acc();
  uVar2 = 0;
  if ((param_4 & 0xff) == 0) {
    FUN_100063b70();
    if ((param_4 & 1) != 0) {
      func_0x000107c39b7c();
    }
    if (param_4 == 0) {
      param_1 = param_2 + 1;
      func_0x000100063b88();
    }
    else {
      func_0x000107c39b5c();
    }
    if (param_1 != (byte *)0x0) {
      pbVar3 = param_1;
      func_0x000100063e28();
      if (!(bool)uVar2) {
        func_0x000100063e34();
                    /* WARNING: Could not recover jumptable at 0x000100063e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
      if (*unaff_x19 != 0) {
        func_0x0001000644fc();
      }
      return pbVar3;
    }
    func_0x000107c39a00();
DAT_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (byte *)0x0;
  }
  func_0x000107c399e0();
  func_0x000100064c34();
  uVar4 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar4 = (uVar4 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            goto DAT_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar4 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar4 = (uVar4 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar4 = uVar4 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar4 = uVar4 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar3 = unaff_x20;
  FUN_100064d5c(unaff_x20,uVar4 >> 3 & 0x1fffffff);
  if (pbVar3 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)*(ushort *)(pbVar3 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar3;
}



/* Entry: 100063b70; end: 100063b97;  */

void FUN_100063b70(void)

{
  return;
}



/* Entry: 100063b98; end: 100063bf3;  */

void FUN_100063b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100063b90();
  if (param_1 != 0) {
    FUN_100063c34(param_3);
    FUN_100063cb0(param_2,param_1,lVar1,param_3);
  }
  return;
}



/* Entry: 100063bf4; end: 100063c33;  */

ulong FUN_100063bf4(long *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = (byte *)*param_1;
  uVar2 = (ulong)*pbVar1;
  if ((char)*pbVar1 < '\0') {
    func_0x000100064178();
  }
  else {
    pbVar1 = pbVar1 + 1;
  }
  *param_1 = (long)pbVar1;
  return uVar2;
}



/* Entry: 100063c34; end: 100063c4f;  */

/* WARNING: Removing unreachable block (ram,0x000100063c68) */

ulong * FUN_100063c34(ulong *param_1)

{
  ulong *puVar1;
  
  if (((uint)*param_1 >> 1 & 1) != 0) {
    return (ulong *)(*param_1 & 0xfffffffffffffffc);
  }
  puVar1 = param_1;
  FUN_100063c9c();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_1 = (ulong)puVar1 | 2;
  return puVar1;
}



/* Entry: 100063c50; end: 100063c9b;  */

void FUN_100063c50(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_28;
  
  if (param_2 == 0) {
    puVar1 = param_1;
    FUN_100063c9c();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    uVar2 = 2;
  }
  else {
    puVar1 = &uStack_28;
    uStack_28 = param_2;
    FUN_10006903c();
    uVar2 = 3;
  }
  *param_1 = uVar2 | (ulong)puVar1;
  return;
}



/* Entry: 100063c9c; end: 100063caf;  */

void FUN_100063c9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 100063cb0; end: 100063d2b;  */

long FUN_100063cb0(long param_1,long **param_2,int param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long **pplVar5;
  long lVar6;
  long lVar7;
  long *plStack_38;
  
  if ((long)param_3 <= (*(long *)(param_1 + 8) - (long)param_2) + 0x10) {
    lVar7 = (long)param_3;
    FUN_100063d2c(param_4,lVar7);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      param_4 = (long *)*param_4;
    }
    func_0x000107c610b4(param_4,param_2,lVar7);
    return (long)param_2 + lVar7;
  }
  func_0x000107c27fa8(param_4);
  lVar6 = *(long *)(param_1 + 8);
  lVar2 = (lVar6 - (long)param_2) + (long)*(int *)(param_1 + 0x1c);
  lVar7 = (long)param_3;
  cVar3 = SBORROW8(lVar2,lVar7);
  cVar4 = lVar2 - lVar7 < 0;
  if (lVar7 <= lVar2) {
    lVar7 = (long)*(char *)((long)param_4 + 0x17);
    if (lVar7 < 0) {
      lVar7 = param_4[1];
    }
    func_0x00010b4d366c(lVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_4);
    lVar6 = *(long *)(param_1 + 8);
  }
  iVar1 = ((int)lVar6 - (int)param_2) + 0x10;
  plStack_38 = param_4;
  do {
    if (*(long *)(param_1 + 0x10) == 0) {
      return 0;
    }
    pplVar5 = &plStack_38;
    func_0x00010b4d2518(pplVar5,param_2,iVar1);
    func_0x00010b4d3608();
    if (cVar4 != cVar3) {
      return 0;
    }
    func_0x00010b4d35d0();
    if (pplVar5 == (long **)0x0) {
      return 0;
    }
    param_3 = param_3 - iVar1;
    param_2 = pplVar5 + 2;
    iVar1 = (*(int *)(param_1 + 8) - (int)param_2) + 0x10;
    cVar3 = SBORROW4(param_3,iVar1);
    cVar4 = param_3 - iVar1 < 0;
  } while (iVar1 < param_3);
  func_0x00010b4d2518(&plStack_38,param_2,param_3);
  return (long)param_2 + (long)param_3;
}



/* Entry: 100063d2c; end: 100063d67;  */

void FUN_100063d2c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar3 < 0) {
    uVar3 = param_1[1];
    if (uVar3 < param_2) goto LAB_100063d50;
    param_1[1] = param_2;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    if (uVar3 < param_2) {
LAB_100063d50:
      param_2 = param_2 - uVar3;
      if (param_2 != 0) {
        uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
        if ((long)uVar3 < 0) {
          uVar4 = param_1[1];
          lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
          uVar3 = (ulong)param_1[2] >> 0x38;
        }
        else {
          lVar1 = 0x16;
          uVar4 = uVar3;
        }
        uVar2 = (uint)uVar3;
        if (lVar1 - uVar4 < param_2) {
          FUN_1000644b8(param_1,lVar1,(param_2 - lVar1) + uVar4,uVar4,uVar4,0,0);
          uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
        }
        if ((uVar2 >> 7 & 1) == 0) {
          *(byte *)((long)param_1 + 0x17) = (char)uVar4 + (char)param_2 & 0x7f;
        }
        else {
          param_1[1] = uVar4 + param_2;
          param_1 = (undefined8 *)*param_1;
        }
        *(undefined1 *)((long)param_1 + uVar4 + param_2) = 0;
      }
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)param_2;
  }
  *(undefined1 *)((long)param_1 + param_2) = 0;
  return;
}



/* Entry: 100063d68; end: 100063e0b;  */

void FUN_100063d68(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar3 < 0) {
      uVar4 = param_1[1];
      lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar3 = (ulong)param_1[2] >> 0x38;
    }
    else {
      lVar1 = 0x16;
      uVar4 = uVar3;
    }
    uVar2 = (uint)uVar3;
    if (lVar1 - uVar4 < param_2) {
      FUN_1000644b8(param_1,lVar1,(param_2 - lVar1) + uVar4,uVar4,uVar4,0,0);
      uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    if ((uVar2 >> 7 & 1) == 0) {
      *(byte *)((long)param_1 + 0x17) = (char)uVar4 + (char)param_2 & 0x7f;
    }
    else {
      param_1[1] = uVar4 + param_2;
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((long)param_1 + uVar4 + param_2) = 0;
  }
  return;
}



/* Entry: 100063e0c; end: 100063e87;  */

void FUN_100063e0c(void)

{
  return;
}



/* Entry: 100063e88; end: 100063fbf;  */

char * FUN_100063e88(char *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  char *pcVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x20;
  long unaff_x22;
  ulong uVar6;
  char *unaff_x25;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcStack0000000000000018;
  char *in_stack_00000060;
  
  func_0x000100063e6c();
  FUN_100063fc0();
  if ((param_4 & 0xff) == 0) {
    cVar2 = *unaff_x25;
    func_0x000100063fd4();
    func_0x000100063fe4();
    while( true ) {
      func_0x000100063ff4();
      pcVar5 = param_1;
      func_0x000100064170();
      if ((unaff_x25 + 1 == (char *)0x0) || (uVar4 = 1, *(int *)(unaff_x22 + 0x58) < 1)) break;
      func_0x0001000641e8();
      func_0x0001000641fc();
      pcStack0000000000000018 = unaff_x25 + 1;
      while (func_0x000100064220(), ((ulong)pcVar5 & 1) == 0) {
        func_0x000100064228(*(undefined2 *)pcStack0000000000000018);
        pcVar5 = param_1;
        func_0x000100064238();
        pcStack0000000000000018 = pcVar5;
        if ((pcVar5 == (char *)0x0) || (*(int *)(unaff_x22 + 0x50) != 0)) break;
      }
      param_1 = pcVar5;
      pbVar1 = (byte *)(unaff_x25 + -0x2e);
      unaff_x25 = pcStack0000000000000018;
      if ((*pbVar1 & 1) != 0) {
        func_0x000107c39b3c();
        unaff_x25 = param_1;
      }
      func_0x000100064518();
      if ((((ulong)param_1 & 1) == 0) || (unaff_x25 == (char *)0x0)) break;
      func_0x000100064568();
      if ((bool)uVar4) {
        if (*unaff_x20 != 0) {
          func_0x0001000648c4();
        }
        return unaff_x25;
      }
      if (*unaff_x25 != cVar2) {
        func_0x000100064790(*(undefined2 *)unaff_x25);
        func_0x0001000647b0();
                    /* WARNING: Could not recover jumptable at 0x0001000647d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
DAT_10b4c5d10:
    if (*unaff_x20 != 0) {
      func_0x000107c39bb4();
    }
    return (char *)0x0;
  }
  func_0x000107c39974();
  func_0x000100064c34();
  uVar6 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar3 = param_2[1];
    if ((char)bVar3 < '\0') {
      uVar6 = (uVar6 & 0x7f) << 0x32 | (ulong)bVar3 << 0x39;
      bVar3 = param_2[2];
      if ((char)bVar3 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            unaff_x20 = param_5;
            goto DAT_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar6 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar6 = (uVar6 >> 7 | (long)(char)bVar3 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar6 = uVar6 >> 0x32 | (ulong)bVar3 << 0xe;
      }
    }
    else {
      uVar6 = uVar6 & 0x7f | (ulong)bVar3 << 7;
    }
  }
  pcVar5 = in_stack_00000060;
  FUN_100064d5c(in_stack_00000060,uVar6 >> 3 & 0x1fffffff);
  if (pcVar5 == (char *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000060 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)*(ushort *)(pcVar5 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pcVar5;
}



/* Entry: 100063fc0; end: 100063fff;  */

void FUN_100063fc0(void)

{
  return;
}



/* Entry: 100064000; end: 1000640a3;  */

void FUN_100064000(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4();
    func_0x0001000640b0();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4();
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x0001000640b0();
        *puVar2 = (ulong)puVar3;
        FUN_10006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x0001000640b0();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1000640a4; end: 1000640cb;  */

void FUN_1000640a4(void)

{
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 8) = 1;
  return;
}



/* Entry: 1000640cc; end: 100064107;  */

undefined8 * FUN_1000640cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xe8;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0xe8);
  }
  *puVar1 = &PTR_DAT_110d9c7a0;
  puVar1[1] = param_1;
  FUN_100064108();
  return puVar1;
}



/* Entry: 100064108; end: 100064137;  */

void FUN_100064108(long param_1,undefined8 param_2)

{
  FUN_100063620();
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined **)(param_1 + 0xd8) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



/* Entry: 100064138; end: 100064163;  */

undefined8 * FUN_100064138(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d9c7a0;
  param_1[1] = param_2;
  FUN_100064108();
  return param_1;
}



/* Entry: 100064164; end: 100064247;  */

void FUN_100064164(void)

{
  return;
}



/* Entry: 100064248; end: 100064277;  */

undefined8 * FUN_100064248(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000100064278();
  }
  else {
    func_0x000107c3a600();
  }
  *puVar1 = &PTR_DAT_110d9c610;
  puVar1[1] = param_1;
  func_0x000100064280();
  return puVar1;
}



/* Entry: 100064278; end: 1000642ab;  */

void FUN_100064278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x60);
  return;
}



/* Entry: 1000642ac; end: 1000642d7;  */

undefined8 * FUN_1000642ac(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d9c610;
  param_1[1] = param_2;
  func_0x000100064280();
  return param_1;
}



/* Entry: 1000642d8; end: 1000644b7;  */

void FUN_1000642d8(void)

{
  return;
}



/* Entry: 1000644b8; end: 1000644ef;  */

void FUN_1000644b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  func_0x000107c60c88();
  *(long *)(param_1 + 8) = (param_4 - param_6) + param_7;
  return;
}



/* Entry: 1000644f0; end: 10006457f;  */

void FUN_1000644f0(void)

{
  return;
}



/* Entry: 100064580; end: 100064707;  */

undefined1  [16] FUN_100064580(ulong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint **ppuVar4;
  uint *puVar5;
  uint **ppuVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint *apuStack_58 [2];
  undefined8 uStack_48;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + 1;
  uVar2 = uVar1 + (int)param_2;
  puVar7 = (uint *)param_1[2];
  uVar10 = 1;
  if (0 < (int)uVar2) {
    if ((int)uVar2 < (int)(uVar1 * 2 | 1)) {
      uVar2 = uVar1 * 2 + 1;
    }
    uVar3 = 0x7fffffff;
    if (*(int *)((long)param_1 + 0xc) < 0x3ffffffb) {
      uVar3 = uVar2;
    }
    uVar10 = (ulong)uVar3;
  }
  puVar5 = (uint *)(uVar10 * 8 + 8);
  if (puVar7 == (uint *)0x0) {
    FUN_100064708();
    uVar10 = (ulong)(param_2 + 0x1fffffffe) >> 3;
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    ppuVar4 = apuStack_58;
    apuStack_58[0] = puVar5;
    func_0x0001053abb00(ppuVar4,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (ppuVar4 != (uint **)0x0) {
      puVar7 = (uint *)(long)*(char *)((long)ppuVar4 + 0x17);
      ppuVar6 = ppuVar4;
      if ((long)puVar7 < 0) {
        ppuVar6 = (uint **)*ppuVar4;
        puVar7 = ppuVar4[1];
      }
      func_0x000107c2b940(apuStack_58,
                          "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                          ,0x10a,ppuVar6,puVar7);
      func_0x0001053abb1c(apuStack_58,"Requested size is too large to fit into size_t.");
      ppuVar4 = apuStack_58;
      func_0x000107c2b948(ppuVar4);
      ppuVar6 = ppuVar4;
      func_0x000107c60e20();
      auVar12._8_8_ = ppuVar4;
      auVar12._0_8_ = ppuVar6;
      return auVar12;
    }
    puVar9 = puVar7;
    func_0x0001053abb54(puVar7,puVar5,1);
    param_2 = puVar5;
    puVar5 = puVar9;
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    *puVar5 = (uint)(uVar8 != 0);
    *(ulong *)(puVar5 + 2) = uVar8;
  }
  else {
    puVar9 = (uint *)(uVar8 - 1);
    param_2 = puVar9;
    func_0x000107c610b4(puVar5,puVar9,(long)(int)*puVar9 * 8 + 8);
    if (puVar7 == (uint *)0x0) {
      func_0x000107c60e14(puVar9);
    }
    else {
      func_0x0001053abbbc(puVar7,puVar9,
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 8);
      param_2 = puVar9;
    }
  }
  *param_1 = (long)puVar5 + 1;
  *(int *)((long)param_1 + 0xc) = (int)uVar10 + -1;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = puVar5 + (long)(int)param_1[1] * 2 + 2;
  return auVar11;
}



/* Entry: 100064708; end: 10006472b;  */

void FUN_100064708(void)

{
  func_0x000107c60e20();
  return;
}



/* Entry: 10006472c; end: 1000647e3;  */

void FUN_10006472c(void)

{
  long *unaff_x19;
  
  *(undefined4 *)(*unaff_x19 + -1) = 2;
  *(undefined4 *)(unaff_x19 + 1) = 2;
  return;
}



/* Entry: 1000647e4; end: 100064813;  */

void FUN_1000647e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_100064814();
  }
  else {
    func_0x000107c3a5fc();
  }
  *puVar1 = &PTR_DAT_110d9c750;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_1;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = param_1;
  puVar1[0xc] = &DAT_11383d918;
  puVar1[0xd] = 0;
  return;
}



/* Entry: 100064814; end: 100064853;  */

void FUN_100064814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x70);
  return;
}



/* Entry: 100064854; end: 100064893;  */

void FUN_100064854(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    param_1 = 0x30;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c3a610();
  }
  FUN_100064894(&UNK_110d9c650);
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 100064894; end: 1000648fb;  */

void FUN_100064894(long param_1,long *param_2)

{
  long unaff_x19;
  
  *param_2 = param_1 + 0x10;
  param_2[1] = unaff_x19;
  param_2[2] = 0;
  return;
}



/* Entry: 1000648fc; end: 100064933;  */

void FUN_1000648fc(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    FUN_100064934();
  }
  else {
    func_0x000107c3a5f8();
  }
  FUN_100064894(&UNK_110d9c560);
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 100064934; end: 100064947;  */

void FUN_100064934(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 100064948; end: 100064a73;  */

undefined2 *
FUN_100064948(undefined2 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,short *param_5
             )

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  long extraout_x8_00;
  undefined2 *extraout_x8_01;
  ulong extraout_x8_02;
  uint extraout_w9;
  long extraout_x9;
  long unaff_x19;
  undefined2 *unaff_x20;
  byte *unaff_x21;
  long lVar6;
  ulong uVar7;
  undefined2 *puStack_48;
  
  func_0x00010006493c();
  uVar4 = (param_4 & 0xff) == 0;
  cVar2 = '\0';
  cVar3 = '\0';
  if (!(bool)uVar4) {
    func_0x000100064c34(param_1);
    uVar7 = (ulong)*unaff_x21;
    if ((char)*unaff_x21 < '\0') {
      bVar1 = unaff_x21[1];
      if ((char)bVar1 < '\0') {
        uVar7 = (uVar7 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
        bVar1 = unaff_x21[2];
        if ((char)bVar1 < '\0') {
          if ((char)unaff_x21[3] < '\0') {
            if ((char)unaff_x21[4] < '\0') {
              func_0x000100064e38(param_1);
              if (*param_5 != 0) {
                func_0x000107c39bb4();
              }
              return (undefined2 *)0x0;
            }
            func_0x000107c39ba4();
            uVar7 = extraout_x8_02 >> 0x24 | extraout_x8_02 << 0x1c;
          }
          else {
            uVar7 = (uVar7 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)unaff_x21[3] << 0x15;
          }
        }
        else {
          uVar7 = uVar7 >> 0x32 | (ulong)bVar1 << 0xe;
        }
      }
      else {
        uVar7 = uVar7 & 0x7f | (ulong)bVar1 << 7;
      }
    }
    puVar5 = unaff_x20;
    FUN_100064d5c(unaff_x20,uVar7 >> 3 & 0x1fffffff);
    if (puVar5 == (undefined2 *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)(ushort)puVar5[5] & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar5;
  }
  puVar5 = param_1;
  if (*param_5 != 0) {
    FUN_100064a74();
    *(uint *)((long)param_1 + extraout_x8) = *(uint *)((long)param_1 + extraout_x8) | extraout_w9;
  }
  func_0x000100064a88();
  lVar6 = *(long *)(extraout_x8_00 + extraout_x9 * 8);
  if (*(long *)((long)param_1 + (param_4 >> 0x30)) == 0) {
    puVar5 = *(undefined2 **)(lVar6 + 0x20);
    if ((*(ulong *)(param_1 + 4) & 1) != 0) {
      func_0x000107c39ac4();
    }
    func_0x000100064a98();
    *(undefined2 **)((long)param_1 + (param_4 >> 0x30)) = puVar5;
  }
  FUN_100064b58(unaff_x21 + 1);
  if ((puStack_48 == (undefined2 *)0x0) || (func_0x000100064b64(), (bool)uVar4 || cVar2 != cVar3)) {
    puStack_48 = (undefined2 *)0x0;
  }
  else {
    func_0x000100064b70();
    func_0x000100064b94();
    puStack_48 = extraout_x8_01;
    do {
      func_0x000100064ba4();
      if ((((ulong)puVar5 & 1) != 0) ||
         (func_0x000100064bb0(*puStack_48), puStack_48 = puVar5, puVar5 == (undefined2 *)0x0))
      break;
    } while (*(int *)(unaff_x19 + 0x50) == 0);
    if ((*(byte *)(lVar6 + 9) & 1) != 0) {
      func_0x000107c39a28(*(undefined8 *)(lVar6 + 0x28));
      puStack_48 = puVar5;
    }
    func_0x000100065154();
    func_0x000100064534();
    if ((int)unaff_x19 == 0) {
      puStack_48 = (undefined2 *)0x0;
    }
  }
  return puStack_48;
}



/* Entry: 100064a74; end: 100064aab;  */

void FUN_100064a74(void)

{
  return;
}



/* Entry: 100064aac; end: 100064ae7;  */

undefined8 * FUN_100064aac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xb0;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0xb0);
  }
  *puVar1 = &PTR_DAT_110d9c390;
  puVar1[1] = param_1;
  FUN_100064ae8();
  return puVar1;
}



/* Entry: 100064ae8; end: 100064b2b;  */

void FUN_100064ae8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined1 *)(param_1 + 0xac) = 1;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x68) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x70) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x78) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x80) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x88) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined **)(param_1 + 0x90) = &DAT_11383d918;
  return;
}



/* Entry: 100064b2c; end: 100064b57;  */

undefined8 * FUN_100064b2c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d9c390;
  param_1[1] = param_2;
  FUN_100064ae8();
  return param_1;
}



/* Entry: 100064b58; end: 100064c3f;  */

ulong FUN_100064b58(byte *param_1)

{
  ulong uVar1;
  byte *pbStack0000000000000008;
  
  uVar1 = (ulong)*param_1;
  if ((char)*param_1 < '\0') {
    pbStack0000000000000008 = param_1;
    func_0x000100064178();
  }
  return uVar1;
}



/* Entry: 100064c40; end: 100064d5b;  */

long FUN_100064c40(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  short *param_5)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  func_0x000100064c34();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x000100064e38(param_1);
      if (*param_5 != 0) {
        func_0x000107c39bb4();
      }
      return 0;
    }
    func_0x000107c39ba4();
  }
  lVar1 = unaff_x20;
  FUN_100064d5c();
  if (lVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)*(ushort *)(lVar1 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return lVar1;
}



/* Entry: 100064d5c; end: 100064e5b;  */

long FUN_100064d5c(long param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar3 = param_2 - 1;
  if (uVar3 < 0x20) {
    uVar5 = 1 << (ulong)(uVar3 & 0x1f);
    if ((*(uint *)(param_1 + 0xc) & uVar5) == 0) {
      uVar5 = *(uint *)(param_1 + 0xc) & uVar5 - 1;
      uVar3 = uVar3 - (byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                             POPCOUNT((char)(uVar5 >> 0x10)) + POPCOUNT((char)(uVar5 >> 0x18)));
LAB_100064d9c:
      return (ulong)*(uint *)(param_1 + 0x10) + param_1 + (ulong)uVar3 * 0xc;
    }
  }
  else {
    for (puVar4 = (uint *)((ulong)*(ushort *)(param_1 + 10) + param_1); uVar3 = param_2 - *puVar4,
        *puVar4 <= param_2; puVar4 = (uint *)((long)puVar4 + (ulong)(uint)(ushort)puVar4[1] * 4 + 6)
        ) {
      uVar5 = uVar3 >> 4;
      if (uVar5 < (ushort)puVar4[1]) {
        puVar1 = (ushort *)((long)puVar4 + (ulong)(uVar5 << 1) * 2 + 6);
        uVar3 = uVar3 & 0xf;
        uVar2 = 1 << (ulong)uVar3;
        uVar5 = (uint)*puVar1;
        if ((uVar2 & uVar5) != 0) {
          return 0;
        }
        uVar5 = uVar2 - 1 & uVar5;
        uVar3 = (uVar3 - (byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)))) +
                (uint)puVar1[1];
        goto LAB_100064d9c;
      }
    }
  }
  return 0;
}



/* Entry: 100064e5c; end: 100064ff7;  */

undefined8 *
FUN_100064e5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
             ushort *param_5,uint param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  short *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *in_stack_00000018;
  
  func_0x000100064e44();
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
  FUN_100064ff8();
  func_0x000100065008();
  if (((uint)param_4 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    goto LAB_100064eb4;
  }
  puVar1 = (uint *)((long)unaff_x20 + (param_4 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar4 = uVar3 & 0x30;
  if (uVar4 == 0x20) {
    func_0x000100068b4c();
    func_0x000107c39ac0();
    func_0x000107c39b38();
    func_0x00010b4cf1c4();
    if (((uint)puVar1 & 7) != 2) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
      func_0x00010b4ceccc(param_1,param_2);
      goto LAB_1000647c0;
    }
    puVar1 = (uint *)((long)param_5 + ((ulong)puVar1 >> 0x20));
    uVar5 = (*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0x100;
    puVar6 = param_2;
    if ((bool)uVar5) {
      puVar2 = (undefined8 *)((long)param_1 + (ulong)*puVar1);
      if (puVar2[2] != 0) {
        puVar6 = param_1;
        func_0x00010b4ce140();
        func_0x00010b4ce510();
        if ((bool)uVar5) {
          puVar11 = (undefined8 *)puVar6[2];
          puVar6 = puVar2;
          func_0x00010b4cc3a0();
          if ((int)puVar6 != 0) {
            do {
              in_stack_00000018 = param_2;
              func_0x000107c39a58();
              if (in_stack_00000018 == (undefined8 *)0x0) goto DAT_10b4c5d10;
              if (puVar11[5] == 0) {
                puVar8 = puVar11;
                func_0x00010b4d75d0();
              }
              else {
                lVar10 = puVar11[5] + -0x18;
                puVar11[5] = lVar10;
                puVar8 = (undefined8 *)(puVar11[4] + lVar10 + 0x10);
              }
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar6 = puVar2;
              func_0x00010b4cc3c8();
              func_0x00010b4cecd8();
              func_0x000107c30268();
              if (puVar6 == (undefined8 *)0x0) goto DAT_10b4c5d10;
              puVar7 = puVar6;
              func_0x00010b4ceba4();
              if ((long)puVar8 < 0) {
                puVar7 = (undefined8 *)*puVar7;
              }
              func_0x00010b4ce828();
              if (((ulong)puVar7 & 1) == 0) goto DAT_10b4c5d10;
              uVar5 = puVar6 == (undefined8 *)*unaff_x22;
              if ((undefined8 *)*unaff_x22 <= puVar6) goto code_r0x00010b4cc344;
              param_2 = puVar6;
              func_0x00010b4ce6b8(puVar6,&stack0x00000014);
              func_0x00010b4cf124();
            } while ((bool)uVar5);
            goto code_r0x00010b4cc2e4;
          }
        }
      }
      do {
        puVar11 = puVar2;
        func_0x000107c303b4();
        puVar6 = puVar11;
        func_0x000107c39ab8();
        if (puVar6 == (undefined8 *)0x0) goto DAT_10b4c5d10;
        lVar10 = (long)*(char *)((long)puVar11 + 0x17);
        puVar8 = puVar11;
        if (lVar10 < 0) {
          puVar8 = (undefined8 *)*puVar11;
          lVar10 = puVar11[1];
        }
        func_0x00010b4ce828(puVar8,lVar10);
        if (((ulong)puVar8 & 1) == 0) goto DAT_10b4c5d10;
        uVar5 = puVar6 == (undefined8 *)*unaff_x22;
        if ((undefined8 *)*unaff_x22 <= puVar6) goto code_r0x00010b4cc344;
        func_0x00010b4ce6b8(puVar6,&stack0x00000014);
        func_0x00010b4cf124();
      } while ((bool)uVar5);
    }
code_r0x00010b4cc2e4:
    if (puVar6 < (undefined8 *)*unaff_x22) {
      func_0x000107c39948(*(undefined2 *)puVar6);
LAB_1000647c0:
                    /* WARNING: Could not recover jumptable at 0x0001000647d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return param_1;
    }
    uVar4 = *param_5;
joined_r0x00010b4cc350:
    if (uVar4 != 0) {
      *(uint *)((long)param_1 + (ulong)uVar4) = *(uint *)((long)param_1 + (ulong)uVar4) | param_6;
    }
    return puVar6;
  }
  uVar5 = 0x2f < uVar4;
  if (uVar4 == 0x30) {
    param_2 = (undefined8 *)(ulong)puVar1[1];
    func_0x000107c39b08();
    if ((uVar3 & 0x1c0) != 0) {
      if ((int)param_1 == 0) {
        param_1 = *(undefined8 **)(unaff_x21 + (ulong)*puVar1);
      }
      else {
        if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
          func_0x000107c39b30();
        }
        func_0x000107c39acc();
        func_0x000107c302f0();
        *(undefined8 **)(unaff_x21 + (ulong)*puVar1) = param_1;
      }
      goto LAB_100064ee8;
    }
    puVar6 = (undefined8 *)(unaff_x21 + (ulong)*puVar1);
    if ((int)param_1 != 0) {
      *puVar6 = &DAT_11383d918;
    }
LAB_100064f38:
    uVar9 = *(ulong *)(unaff_x21 + 8);
    if ((uVar9 & 1) == 0) {
      if (uVar9 == 0) goto LAB_100064f8c;
LAB_100064f44:
      func_0x000107c30260();
      param_2 = unaff_x24;
    }
    else {
      if (*(long *)(uVar9 & 0xfffffffffffffffe) != 0) goto LAB_100064f44;
LAB_100064f8c:
      unaff_x22 = puVar6;
      FUN_100063c34();
      func_0x000100065034();
      FUN_100065040();
    }
    if (unaff_x22 == (undefined8 *)0x0) goto LAB_100064fd4;
    param_1 = unaff_x22;
    func_0x000100065098(*puVar6);
    if ((long)param_2 < 0) {
      param_1 = (undefined8 *)*param_1;
    }
    param_5 = (ushort *)(ulong)(uVar3 & 0x600);
    func_0x0001000650a4();
    puVar6 = (undefined8 *)((ulong)param_1 & 1);
  }
  else {
    uVar5 = 0xf < uVar4;
    if (uVar4 == 0x10) {
      func_0x000100065014(puVar1[1]);
    }
    if ((uVar3 & 0x1c0) == 0) {
      puVar6 = (undefined8 *)(unaff_x21 + (ulong)*puVar1);
      goto LAB_100064f38;
    }
    param_1 = (undefined8 *)(unaff_x21 + (ulong)*puVar1);
LAB_100064ee8:
    func_0x000100065034();
    func_0x000107c302ec();
    unaff_x22 = param_1;
    puVar6 = param_1;
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_100065120();
    if ((bool)uVar5) {
      if (*unaff_x20 != 0) {
        func_0x00010006512c();
      }
      return unaff_x22;
    }
    func_0x000100068b30(*(undefined2 *)unaff_x22);
LAB_100064eb4:
    func_0x000100068b4c();
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
LAB_100064fd4:
  func_0x000107c39998();
DAT_10b4c5d10:
  if (*param_5 != 0) {
    func_0x000107c39bb4();
  }
  return (undefined8 *)0x0;
code_r0x00010b4cc344:
  uVar4 = *param_5;
  goto joined_r0x00010b4cc350;
}



/* Entry: 100064ff8; end: 10006503f;  */

void FUN_100064ff8(void)

{
  return;
}



/* Entry: 100065040; end: 10006508b;  */

void FUN_100065040(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lStack_28;
  
  plVar1 = &lStack_28;
  lStack_28 = param_2;
  FUN_100063bf4(plVar1);
  if (lStack_28 != 0) {
    FUN_100063cb0(param_3,lStack_28,plVar1,param_1);
  }
  return;
}



/* Entry: 10006508c; end: 1000650af;  */

void FUN_10006508c(void)

{
  return;
}



/* Entry: 1000650b0; end: 10006511f;  */

bool FUN_1000650b0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  bool bVar1;
  
  if (param_5 != 0x400) {
    return true;
  }
  func_0x00010029f6ec();
  bVar1 = (param_1 & 1) == 0;
  if (bVar1) {
    func_0x000107c302c4(param_3);
    func_0x000107c302c8(param_3,param_4);
    func_0x000107c39a44();
    func_0x000107c303d0();
  }
  return !bVar1;
}



/* Entry: 100065120; end: 100065177;  */

void FUN_100065120(void)

{
  return;
}



/* Entry: 100065178; end: 100065387;  */

undefined8 * FUN_100065178(long param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uStack_4c;
  undefined8 *puStack_48;
  
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x28);
    if (puVar8 == puVar2) {
      uVar9 = **(undefined8 **)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x30) = (*(undefined8 **)(param_1 + 8))[1];
      *puVar2 = uVar9;
      if (*(int *)(param_1 + 0x54) < 1) {
LAB_1000652fc:
        if (*(long *)(param_1 + 0x48) == 2) {
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 8) - (long)puVar8;
        }
        *(long *)(param_1 + 8) = param_1 + 0x38;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        puVar8 = puVar2;
      }
      else {
        if (-1 < param_3) {
          puStack_48 = (undefined8 *)((long)puVar2 + (long)param_2);
          puVar3 = (undefined8 *)(param_1 + 0x38);
code_r0x000100065210:
          if (((puVar3 <= puStack_48) || (func_0x000107c302b0(), puStack_48 == (undefined8 *)0x0))
             || (puVar3 < puStack_48)) goto LAB_1000652dc;
          if (uStack_4c == 0) goto LAB_1000652fc;
          switch(uStack_4c & 7) {
          case 0:
            func_0x0001002a9118();
            if (puStack_48 == (undefined8 *)0x0) break;
            goto code_r0x000100065210;
          case 1:
            puStack_48 = puStack_48 + 1;
            goto code_r0x000100065210;
          case 2:
            iVar5 = (int)&puStack_48;
            FUN_100063bf4();
            if ((puStack_48 == (undefined8 *)0x0) || ((long)puVar3 - (long)puStack_48 < (long)iVar5)
               ) break;
            puStack_48 = (undefined8 *)((long)puStack_48 + (long)iVar5);
            goto code_r0x000100065210;
          case 3:
            param_3 = param_3 + 1;
            goto code_r0x000100065210;
          case 4:
            goto code_r0x00010006526c;
          case 5:
            puStack_48 = (undefined8 *)((long)puStack_48 + 4);
            goto code_r0x000100065210;
          default:
            break;
          }
        }
LAB_1000652dc:
        do {
          plVar6 = *(long **)(param_1 + 0x20);
          (**(code **)(*plVar6 + 0x10))(plVar6,&puStack_48,param_1 + 0x18);
          if ((int)plVar6 == 0) {
            *(undefined4 *)(param_1 + 0x54) = 0;
            goto LAB_1000652fc;
          }
          uVar4 = *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - uVar4;
          if (0x10 < (int)uVar4) {
            lVar7 = param_1 + 0x38;
            uVar9 = *puStack_48;
            *(undefined8 *)(param_1 + 0x40) = puStack_48[1];
            *(undefined8 *)(param_1 + 0x38) = uVar9;
            *(undefined8 **)(param_1 + 0x10) = puStack_48;
            goto LAB_100065354;
          }
        } while ((int)uVar4 < 1);
        func_0x000107c610b4(param_1 + 0x38,puStack_48,(ulong)uVar4);
        lVar7 = (long)puVar2 + (ulong)uVar4;
        *(undefined8 **)(param_1 + 0x10) = puVar2;
LAB_100065354:
        *(long *)(param_1 + 8) = lVar7;
        puVar8 = puVar2;
        if (1 < *(ulong *)(param_1 + 0x48)) {
          *(undefined8 *)(param_1 + 0x48) = 1;
        }
      }
    }
    else {
      *(long *)(param_1 + 8) = (long)puVar8 + (long)*(int *)(param_1 + 0x18) + -0x10;
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      if (*(long *)(param_1 + 0x48) == 1) {
        *(undefined8 *)(param_1 + 0x48) = 2;
      }
    }
  }
  return puVar8;
code_r0x00010006526c:
  bVar1 = param_3 < 1;
  param_3 = param_3 + -1;
  if (bVar1) goto LAB_1000652fc;
  goto code_r0x000100065210;
}



/* Entry: 100065388; end: 100065423;  */

undefined1  [16] FUN_100065388(long *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  uint extraout_w9;
  undefined1 auVar5 [16];
  
  if (*(int *)((long)param_1 + 0x1c) < (int)param_2) {
    return ZEXT816(1) << 0x40;
  }
  do {
    plVar2 = param_1;
    FUN_100065178(param_1,param_2,param_3);
    if (plVar2 == (long *)0x0) {
      uVar4 = 1;
      if ((int)param_2 == 0) {
        lVar3 = param_1[1];
        *param_1 = lVar3;
        *(undefined4 *)(param_1 + 10) = 1;
      }
      else {
        lVar3 = 0;
      }
      goto LAB_100065400;
    }
    FUN_100065424(param_1[1]);
    lVar3 = (long)plVar2 + (long)(int)param_2;
    uVar1 = (int)lVar3 - (int)extraout_x8;
    param_2 = (ulong)uVar1;
  } while (-1 < (int)uVar1);
  uVar4 = 0;
  *param_1 = extraout_x8 + (int)(extraout_w9 & (int)extraout_w9 >> 0x1f);
LAB_100065400:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Entry: 100065424; end: 10006545f;  */

void FUN_100065424(int param_1)

{
  int in_w8;
  long unaff_x19;
  
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + (param_1 - in_w8);
  return;
}



/* Entry: 100065460; end: 1000654c7;  */

long FUN_100065460(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100065454();
  if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100065488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(param_1);
    return param_1;
  }
  return 1;
}



/* Entry: 1000654c8; end: 100065583;  */

void FUN_1000654c8(uint param_1)

{
  char in_NG;
  char in_OV;
  
  FUN_100065584();
  do {
    func_0x000100065598();
    if (in_NG != in_OV) break;
    func_0x0001000655a4();
    func_0x0001000655fc();
  } while ((param_1 & 1) != 0);
  FUN_1000656dc();
  return;
}



/* Entry: 100065584; end: 1000655c3;  */

void FUN_100065584(void)

{
  return;
}



/* Entry: 1000655c4; end: 1000656b3;  */

void FUN_1000655c4(uint param_1)

{
  char in_NG;
  char in_OV;
  
  FUN_100065584();
  do {
    func_0x000100065598();
    if (in_NG != in_OV) break;
    func_0x0001000655a4();
    FUN_1000656b4();
  } while ((param_1 & 1) != 0);
  FUN_1000656dc();
  return;
}



/* Entry: 1000656b4; end: 1000656db;  */

void FUN_1000656b4(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) {
    func_0x000107c31604();
  }
  return;
}



/* Entry: 1000656dc; end: 1000656f3;  */

bool FUN_1000656dc(void)

{
  int unaff_w20;
  
  return unaff_w20 < 1;
}



/* Entry: 1000656f4; end: 10006572b;  */

void FUN_1000656f4(uint param_1)

{
  char in_NG;
  char in_OV;
  
  FUN_100065584();
  do {
    func_0x000100065598();
    if (in_NG != in_OV) break;
    func_0x0001000655a4();
    FUN_100065744();
  } while ((param_1 & 1) != 0);
  FUN_1000656dc();
  return;
}



/* Entry: 10006572c; end: 100065743;  */

void FUN_10006572c(void)

{
  return;
}



/* Entry: 100065744; end: 1000657a3;  */

void FUN_100065744(ulong param_1)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10006572c();
  do {
    func_0x000100065738();
    if (in_NG != in_OV) {
      if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
        return;
      }
      func_0x000107c31614();
      return;
    }
    FUN_1000657a4();
    FUN_1000657c4();
  } while ((uVar1 & 1) != 0);
  return;
}



/* Entry: 1000657a4; end: 1000657c3;  */

ulong FUN_1000657a4(long param_1)

{
  ulong *unaff_x20;
  
  if ((*unaff_x20 & 1) != 0) {
    unaff_x20 = (ulong *)(*unaff_x20 + param_1 + -1);
  }
  return *unaff_x20;
}



/* Entry: 1000657c4; end: 100065813;  */

void FUN_1000657c4(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
    func_0x000107c3161c();
  }
  return;
}



/* Entry: 100065814; end: 10006585b;  */

void FUN_100065814(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10006585c(param_1,&PTR_PTR_1134061c0);
  iVar1 = (int)lVar2;
  if (((iVar1 != 0) && (FUN_100065940(), iVar1 != 0)) && ((*(byte *)(param_1 + 0x29) >> 2 & 1) != 0)
     ) {
    func_0x000107c31628();
  }
  return;
}



/* Entry: 10006585c; end: 100065877;  */

bool FUN_10006585c(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  
  param_1 = param_1 + 0x10;
  func_0x000100065864();
  FUN_100063918();
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (*(short *)(param_1 + 10) < 0) {
    lVar7 = *(long *)*puVar6;
    lVar8 = puVar6[1];
    cVar1 = *(char *)(lVar8 + 10);
    while (bVar3 = cVar1 == '\0', bVar2 = lVar7 == lVar8 && bVar3, lVar7 != lVar8 || !bVar3) {
      iVar4 = (int)lVar7 + 0x18;
      func_0x000107c398dc();
      if (iVar4 == 0) {
        return bVar2;
      }
      func_0x000107c398e8();
    }
  }
  else {
    do {
      if (puVar6 == (undefined8 *)
                    (*(long *)(unaff_x20 + 0x10) + (ulong)*(ushort *)(unaff_x20 + 10) * 0x20)) {
        return true;
      }
      puVar5 = puVar6 + 1;
      func_0x000107c398dc();
      bVar2 = false;
      puVar6 = puVar6 + 4;
    } while (((ulong)puVar5 & 1) != 0);
  }
  return bVar2;
}



/* Entry: 100065878; end: 10006593f;  */

bool FUN_100065878(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  
  func_0x000100065864();
  FUN_100063918();
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (*(short *)(param_1 + 10) < 0) {
    lVar7 = *(long *)*puVar6;
    lVar8 = puVar6[1];
    cVar1 = *(char *)(lVar8 + 10);
    while (bVar3 = cVar1 == '\0', bVar2 = lVar7 == lVar8 && bVar3, lVar7 != lVar8 || !bVar3) {
      iVar4 = (int)lVar7 + 0x18;
      func_0x000107c398dc();
      if (iVar4 == 0) {
        return bVar2;
      }
      func_0x000107c398e8();
    }
  }
  else {
    do {
      if (puVar6 == (undefined8 *)
                    (*(long *)(unaff_x20 + 0x10) + (ulong)*(ushort *)(unaff_x20 + 10) * 0x20)) {
        return true;
      }
      puVar5 = puVar6 + 1;
      func_0x000107c398dc();
      bVar2 = false;
      puVar6 = puVar6 + 4;
    } while (((ulong)puVar5 & 1) != 0);
  }
  return bVar2;
}



/* Entry: 100065940; end: 100065947;  */

bool FUN_100065940(void)

{
  int iVar1;
  char in_NG;
  char in_OV;
  ulong uVar2;
  long unaff_x19;
  
  uVar2 = unaff_x19 + 0x30;
  iVar1 = *(int *)(unaff_x19 + 0x38);
  do {
    func_0x000100065738();
    if (in_NG != in_OV) break;
    func_0x000107c3a768();
    func_0x000107c31620();
  } while ((uVar2 & 1) != 0);
  return iVar1 + 1 < 1;
}



/* Entry: 100065948; end: 100065997;  */

bool FUN_100065948(ulong param_1)

{
  int iVar1;
  char in_NG;
  char in_OV;
  
  iVar1 = *(int *)(param_1 + 8);
  do {
    func_0x000100065738();
    if (in_NG != in_OV) break;
    func_0x000107c3a768();
    func_0x000107c31620();
  } while ((param_1 & 1) != 0);
  return iVar1 + 1 < 1;
}



/* Entry: 100065998; end: 1000659c3;  */

void FUN_100065998(void)

{
  return;
}



/* Entry: 1000659c4; end: 10006601b;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1000659c4(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  undefined4 extraout_w8;
  uint uVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  undefined8 *puVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  long *plVar18;
  undefined4 *puVar19;
  byte bVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  pplVar9 = &plStack_b0;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,param_4);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  puVar13 = (undefined8 *)param_1[1];
  plStack_b0 = param_3;
  if (puVar13 < (undefined8 *)param_1[2]) {
    *(undefined4 *)(puVar13 + 1) = param_4;
    *puVar13 = param_3;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[2] = 0;
    puVar13 = puVar13 + 5;
  }
  else {
    uVar22 = ((long)puVar13 - *param_1) / 0x28 + 1;
    if (0x666666666666666 < uVar22) {
      func_0x000107c3169c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100065fec);
      (*pcVar1)();
    }
    uVar23 = (param_1[2] - *param_1) / 0x28;
    uVar25 = uVar23 * 2;
    if (uVar25 < uVar22 || uVar25 - uVar22 == 0) {
      uVar25 = uVar22;
    }
    if (0x333333333333332 < uVar23) {
      uVar25 = 0x666666666666666;
    }
    FUN_10006601c(&lStack_88,uVar25);
    *puStack_78 = plStack_b0;
    *(undefined4 *)(puStack_78 + 1) = (undefined4)uStack_a8;
    puStack_78[3] = uStack_98;
    puStack_78[2] = uStack_a0;
    puStack_78[4] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_78 + 5;
    FUN_100066098(param_1,&lStack_88);
    puVar13 = (undefined8 *)param_1[1];
    FUN_10006617c(&lStack_88);
  }
  param_1[1] = (long)puVar13;
  func_0x000107c60ca0(&uStack_a0);
  puVar14 = (undefined8 *)(*(ulong *)(param_2 + 0xb8) & 0xfffffffffffffffc);
  cVar3 = *(char *)((long)puVar14 + 0x17);
  plVar17 = (long *)(long)cVar3;
  puVar13 = puVar14;
  plVar6 = plVar17;
  if ((long)plVar17 < 0) {
    puVar13 = (undefined8 *)*puVar14;
    plVar6 = (long *)puVar14[1];
  }
  FUN_1000661c4(puVar13,plVar6);
  if (((ulong)puVar13 & 1) != 0) {
    puVar13 = puVar14;
    if (cVar3 < '\0') {
      puVar13 = (undefined8 *)*puVar14;
      plVar17 = (long *)puVar14[1];
    }
    puVar19 = (undefined4 *)&lStack_88;
    FUN_10006620c(&lStack_88,puVar13);
    plVar6 = &lStack_88;
    FUN_100066230(param_1[1] + -0x18);
    func_0x000107c60ca0(&lStack_88);
    FUN_100066278(param_1[1]);
    lStack_88._0_4_ = extraout_w8;
    func_0x00010006628c(*(undefined8 *)(param_2 + 0xb0));
    plVar8 = plVar6;
    if ((long)plVar17 < 0) {
      plVar8 = (long *)*plVar6;
      plVar17 = (long *)plVar6[1];
    }
    plVar6 = &lStack_80;
    FUN_10006620c();
    if (param_1[6] == 0) {
      plVar6 = (long *)0x1;
      FUN_1000662bc();
      param_1[5] = (long)plVar6;
      param_1[3] = (long)plVar6;
    }
    plVar7 = param_1 + 3;
    plVar15 = plVar7;
    while( true ) {
      uVar22 = 0;
      plVar15 = (long *)*plVar15;
      uVar25 = (ulong)*(byte *)((long)plVar15 + 10);
      while (uVar23 = uVar25, uVar22 != uVar23) {
        uVar25 = uVar22 + uVar23 >> 1;
        plVar6 = plVar15 + uVar25 * 4 + 2;
        plVar8 = &lStack_88;
        FUN_100068c10();
        if ((int)plVar6 != 0) {
          uVar22 = uVar25 + 1;
          uVar25 = uVar23;
        }
      }
      bVar20 = *(byte *)((long)plVar15 + 0xb);
      if (bVar20 != 0) break;
      func_0x000107c3a808();
      plVar15 = plVar6 + (uVar23 & 0xff);
    }
    plVar12 = plVar15;
    uVar22 = uVar23;
    do {
      if ((uint)uVar22 != (uint)*(byte *)((long)plVar12 + 10)) {
        plVar6 = &lStack_88;
        plVar8 = (long *)((long)plVar12 + ((long)(uVar22 << 0x20) >> 0x1b) + 0x10);
        FUN_100068c10();
        if ((int)plVar6 == 0) {
          func_0x000100066394();
          goto LAB_100065f8c;
        }
        bVar20 = *(byte *)((long)plVar15 + 0xb);
        break;
      }
      uVar22 = (ulong)*(byte *)(plVar12 + 1);
      plVar12 = (long *)*plVar12;
    } while (*(char *)((long)plVar12 + 0xb) == '\0');
    uStack_a8 = uVar23 & 0xffffffff;
    if (bVar20 == 0) {
      plStack_b0 = plVar15;
      func_0x000107c3a808();
      plVar15 = plVar6 + (uVar23 & 0xff);
      while( true ) {
        plVar15 = (long *)*plVar15;
        bVar20 = *(byte *)((long)plVar15 + 0xb);
        uVar23 = (ulong)*(byte *)((long)plVar15 + 10);
        if (bVar20 != 0) break;
        plStack_b0 = plVar15;
        func_0x000107c3a808();
        plVar15 = plVar6 + uVar23;
      }
      uStack_a8 = CONCAT44(uStack_a8._4_4_,(uint)*(byte *)((long)plVar15 + 10));
      uVar22 = uVar23;
    }
    else {
      uVar22 = (ulong)*(byte *)((long)plVar15 + 10);
    }
    uVar21 = (uint)uVar23;
    uVar11 = (uint)uVar22;
    plStack_b0 = plVar15;
    if (uVar11 == bVar20) {
      if (uVar11 < 7) {
        uVar11 = (uVar11 & 0x7f) << 1;
        if (6 < uVar11) {
          uVar11 = 7;
        }
        plVar7 = (long *)(ulong)uVar11;
        FUN_1000662bc();
        plVar8 = (long *)(ulong)*(byte *)((long)plVar15 + 10);
        plVar17 = (long *)0x0;
        plStack_b0 = plVar7;
        FUN_100068c6c();
        *(undefined1 *)((long)plVar7 + 10) = *(undefined1 *)((long)plVar15 + 10);
        *(undefined1 *)((long)plVar15 + 10) = 0;
        FUN_100068ca8();
        param_1[5] = (long)plVar7;
        param_1[3] = (long)plVar7;
        plVar6 = plVar15;
        plVar15 = plVar7;
      }
      else {
        FUN_1000691b0();
        uVar21 = (uint)(byte)uStack_a8;
        plVar6 = plVar7;
        plVar8 = (long *)pplVar9;
        plVar15 = plStack_b0;
      }
    }
    uVar11 = uVar21 & 0xff;
    bVar20 = *(byte *)((long)plVar15 + 10);
    uVar21 = uVar21 & 0xff;
    cVar2 = SBORROW4((uint)bVar20,uVar21);
    uVar10 = (uint)bVar20;
    cVar3 = (int)(uVar10 - uVar21) < 0;
    if (uVar21 <= bVar20 && uVar10 != uVar21) {
      plVar8 = (long *)(ulong)(uVar10 - uVar11);
      plVar17 = (long *)(ulong)(uVar11 + 1);
      plVar6 = plVar15;
      FUN_100068dac();
    }
    *(undefined4 *)(plVar15 + (ulong)uVar11 * 4 + 2) = (undefined4)lStack_88;
    plVar15[(ulong)uVar11 * 4 + 5] = lStack_70;
    plVar15[(ulong)uVar11 * 4 + 4] = (long)puStack_78;
    plVar15[(ulong)uVar11 * 4 + 3] = lStack_80;
    puStack_78 = (undefined8 *)0x0;
    lStack_70 = 0;
    lStack_80 = 0;
    bVar20 = *(char *)((long)plVar15 + 10) + 1;
    *(byte *)((long)plVar15 + 10) = bVar20;
    if (*(char *)((long)plVar15 + 0xb) == '\0') {
      uVar11 = uVar11 + 1;
      uVar21 = (uint)bVar20;
      cVar2 = SBORROW4(uVar11,uVar21);
      cVar3 = (int)(uVar11 - uVar21) < 0;
      if (uVar11 < uVar21) {
        while( true ) {
          uVar21 = (uint)bVar20;
          cVar2 = SBORROW4(uVar11,uVar21);
          cVar3 = (int)(uVar11 - uVar21) < 0;
          if (uVar21 <= uVar11) break;
          func_0x000107c3a808();
          lVar24 = plVar6[(byte)(bVar20 - 1)];
          plVar6 = plVar15;
          FUN_100069484();
          plVar6[bVar20] = lVar24;
          *(byte *)(lVar24 + 8) = bVar20;
          bVar20 = bVar20 - 1;
        }
      }
    }
    param_1[6] = param_1[6] + 1;
    plVar12 = (long *)param_1[8];
    plVar7 = (long *)(*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc);
    plVar15 = (long *)param_1[7];
    uVar22 = (long)plVar12 - param_1[7] >> 5;
    while (plVar18 = plVar15, uVar22 != 0) {
      uVar25 = uVar22 >> 1;
      func_0x000107c3a8dc();
      plVar8 = extraout_x10;
      plVar17 = extraout_x11;
      if (cVar3 == cVar2) {
        plVar8 = plVar7;
        plVar17 = extraout_x8;
      }
      plVar6 = plVar18 + uVar25 * 4;
      func_0x000107c31670();
      cVar2 = '\0';
      cVar3 = (int)plVar6 < 0;
      plVar15 = plVar18 + uVar25 * 4 + 4;
      uVar22 = uVar22 + (uVar22 >> 1 ^ 0xffffffffffffffff);
      if ((int)plVar6 == 0) {
        plVar15 = plVar18;
        uVar22 = uVar25;
      }
    }
    cVar2 = SBORROW8((long)plVar12,(long)plVar18);
    cVar3 = (long)plVar12 - (long)plVar18 < 0;
    if (plVar12 == plVar18) {
      func_0x000100066394();
    }
    else {
      func_0x000107c3a8dc();
      plVar15 = extraout_x10_00;
      plVar8 = extraout_x11_00;
      if (cVar3 == cVar2) {
        plVar15 = plVar7;
        plVar8 = extraout_x8_00;
      }
      plVar7 = plVar18 + 1;
      plVar17 = (long *)*plVar7;
      if (-1 < *(char *)((long)plVar18 + 0x1f)) {
        plVar17 = plVar7;
      }
      FUN_10006725c();
      plVar6 = plVar15;
      func_0x000100066394();
      plVar18 = plVar7;
      if (((uint)plVar15 >> 7 & 1) == 0) {
LAB_100065f8c:
        func_0x000107c3a844();
        func_0x000107c2b930(&lStack_88);
        func_0x000107c31690(&lStack_88,&UNK_10f834896);
        func_0x000107c3a874(*(undefined8 *)(param_2 + 0xb0));
        goto LAB_100065fb4;
      }
    }
    func_0x00010006639c();
    while( true ) {
      iVar5 = (int)plVar6;
      if (puVar19 == (undefined4 *)0x0) {
        uVar22 = *(ulong *)(param_2 + 0x48);
        puVar16 = (ulong *)(param_2 + 0x48);
        if ((uVar22 & 1) != 0) {
          puVar16 = (ulong *)(uVar22 + 7);
        }
        lVar24 = (long)*(int *)(param_2 + 0x50) << 3;
        do {
          if (lVar24 == 0) {
            func_0x00010006639c();
            lVar24 = 0;
            plVar15 = (long *)0x0;
            while( true ) {
              iVar5 = (int)plVar6;
              if (lVar24 == 0) {
                uVar22 = *(ulong *)(param_2 + 0x60);
                puVar16 = (ulong *)(param_2 + 0x60);
                if ((uVar22 & 1) != 0) {
                  puVar16 = (ulong *)(uVar22 + 7);
                }
                lVar24 = (long)*(int *)(param_2 + 0x68) << 3;
                do {
                  bVar4 = lVar24 == 0;
                  if (lVar24 == 0) {
                    return (bool)1;
                  }
                  func_0x00010006628c(*(undefined8 *)(*puVar16 + 0x30));
                  if ((long)plVar17 < 0) {
                    plVar17 = (long *)plVar8[1];
                    plVar8 = (long *)*plVar8;
                  }
                  func_0x0001000663b4();
                  puVar16 = puVar16 + 1;
                  lVar24 = lVar24 + -8;
                } while (((ulong)plVar6 & 1) != 0);
                return bVar4;
              }
              func_0x00010006628c(*(undefined8 *)(*plVar15 + 0x18));
              plVar6 = plVar8;
              if ((long)plVar17 < 0) {
                plVar6 = (long *)*plVar8;
                plVar17 = (long *)plVar8[1];
              }
              func_0x0001000663b4();
              if (iVar5 == 0) break;
              func_0x00010006628c(*(undefined8 *)(param_2 + 0xb0));
              plVar8 = plVar6;
              if ((long)plVar17 < 0) {
                plVar8 = (long *)*plVar6;
                plVar17 = (long *)plVar6[1];
              }
              plVar6 = param_1;
              func_0x000107c31698();
              plVar15 = plVar15 + 1;
              lVar24 = lVar24 + -8;
              if (((ulong)plVar6 & 1) == 0) {
                return false;
              }
            }
            return false;
          }
          func_0x00010006628c(*(undefined8 *)(*puVar16 + 0x60));
          if ((long)plVar17 < 0) {
            plVar17 = (long *)plVar8[1];
            plVar8 = (long *)*plVar8;
          }
          func_0x0001000663b4();
          puVar16 = puVar16 + 1;
          lVar24 = lVar24 + -8;
        } while (((ulong)plVar6 & 1) != 0);
        return false;
      }
      func_0x00010006628c(*(undefined8 *)(*plVar18 + 0xd8));
      plVar6 = plVar8;
      if ((long)plVar17 < 0) {
        plVar6 = (long *)*plVar8;
        plVar17 = (long *)plVar8[1];
      }
      func_0x0001000663b4();
      if (iVar5 == 0) break;
      func_0x00010006628c(*(undefined8 *)(param_2 + 0xb0));
      plVar8 = plVar6;
      if ((long)plVar17 < 0) {
        plVar8 = (long *)*plVar6;
        plVar17 = (long *)plVar6[1];
      }
      plVar6 = param_1;
      FUN_100066fa4();
      plVar18 = plVar18 + 1;
      puVar19 = puVar19 + 0xfffffffffffffffe;
      if (((ulong)plVar6 & 1) == 0) {
        return false;
      }
    }
    return false;
  }
  func_0x000107c3a844();
  func_0x000107c2b930(&lStack_88);
  func_0x000107c31694(&lStack_88,&UNK_10f834936);
  func_0x000107c3a874(*(undefined8 *)(param_2 + 0xb8));
LAB_100065fb4:
  func_0x000107c2b934(&lStack_88);
  return false;
}



/* Entry: 10006601c; end: 10006608b;  */

void FUN_10006601c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x666666666666666 < param_2) {
      func_0x000104bd35f4();
      return;
    }
    lVar1 = param_2 * 0x28;
    func_0x000107c60e20();
  }
  lVar2 = lVar1 + param_3 * 0x28;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x28;
  return;
}



/* Entry: 10006608c; end: 100066097;  */

void FUN_10006608c(void)

{
  return;
}



/* Entry: 100066098; end: 10006616f;  */

void FUN_100066098(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  FUN_100066170();
  puVar5 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar5) / -0x28) * 0x28);
  puVar2 = puVar6;
  for (puVar3 = puVar5; puVar3 != puVar1; puVar3 = puVar3 + 5) {
    uVar4 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *puVar2 = uVar4;
    uVar7 = puVar3[3];
    uVar4 = puVar3[2];
    puVar2[4] = puVar3[4];
    puVar2[3] = uVar7;
    puVar2[2] = uVar4;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
    puVar2 = puVar2 + 5;
  }
  for (; puVar5 != puVar1; puVar5 = puVar5 + 5) {
    func_0x000107c60ca0(puVar5 + 2);
  }
  unaff_x19[1] = puVar6;
  uVar4 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar4;
  unaff_x19[1] = uVar4;
  uVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar4;
  uVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 100066170; end: 10006617b;  */

void FUN_100066170(void)

{
  return;
}



/* Entry: 10006617c; end: 1000661c3;  */

long * FUN_10006617c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x28;
    func_0x000107c3a878();
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1000661c4; end: 10006620b;  */

bool FUN_1000661c4(byte *param_1,long param_2)

{
  byte bVar1;
  
  while ((param_2 != 0 &&
         (((bVar1 = *param_1, bVar1 == 0x2e || (bVar1 == 0x5f)) ||
          (0xfffffff5 < bVar1 - 0x3a || 0xffffffe5 < (bVar1 & 0xffffffdf) - 0x5b))))) {
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return param_2 == 0;
}



/* Entry: 10006620c; end: 10006622f;  */

void FUN_10006620c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_100060b18(param_1,&uStack_20);
  return;
}



/* Entry: 100066230; end: 100066277;  */

void FUN_100066230(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 100066278; end: 100066297;  */

void FUN_100066278(void)

{
  return;
}



/* Entry: 100066298; end: 1000662bb;  */

void FUN_100066298(void)

{
  FUN_1000662e4(1);
  FUN_100066300();
  return;
}



/* Entry: 1000662bc; end: 1000662e3;  */

void FUN_1000662bc(undefined4 param_1)

{
  FUN_100066298(param_1);
  FUN_100066350();
  func_0x000100066380();
  return;
}



/* Entry: 1000662e4; end: 1000662ff;  */

void FUN_1000662e4(void)

{
  return;
}



/* Entry: 100066300; end: 100066323;  */

long FUN_100066300(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001000662fc();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 100066324; end: 10006634f;  */

ulong FUN_100066324(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + param_1[3] * 0x20 + 7U & 0xfffffffffffffff8;
}



/* Entry: 100066350; end: 100066367;  */

void FUN_100066350(void)

{
  FUN_100066368();
  return;
}



/* Entry: 100066368; end: 1000663bb;  */

/* WARNING: Removing unreachable block (ram,0x00010006313c) */

void FUN_100066368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_1 + 7U & 0xfffffffffffffff8);
  return;
}



/* Entry: 1000663bc; end: 100066a53;  */

undefined8 FUN_1000663bc(undefined8 *param_1,ulong **param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulong **ppuVar11;
  undefined8 *puVar12;
  ulong **ppuVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  ulong *puVar15;
  undefined8 extraout_x8_00;
  ulong **ppuVar16;
  ulong **extraout_x10;
  ulong **extraout_x10_00;
  undefined8 extraout_x11;
  ulong *puVar17;
  undefined8 extraout_x11_00;
  undefined8 uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  ulong *puStack_88;
  ulong uStack_80;
  ulong *puStack_70;
  ulong uStack_68;
  
  FUN_100066278(param_1[1]);
  FUN_10006620c(auStack_a0);
  FUN_100066a54(auStack_c0,auStack_a8,*param_1);
  FUN_1000661c4(param_2,param_3);
  if (((ulong)param_2 & 1) == 0) {
    func_0x000107c3a844();
    func_0x000107c2b930(&puStack_88);
    func_0x000107c302e0(&puStack_88,&UNK_10f834880);
    func_0x000107c2b938();
    ppuVar13 = &puStack_88;
  }
  else {
    ppuVar16 = (ulong **)(param_1 + 10);
    ppuVar13 = ppuVar16;
    while( true ) {
      uVar23 = 0;
      puVar19 = *ppuVar13;
      puStack_88 = (ulong *)param_1[0xb];
      uVar24 = (ulong)*(byte *)((long)puVar19 + 10);
      while (uVar14 = uVar24, uVar23 != uVar14) {
        uVar24 = uVar23 + uVar14 >> 1;
        param_2 = &puStack_88;
        FUN_10006709c(param_2,auStack_a8,puVar19 + uVar24 * 4 + 2);
        if ((int)param_2 == 0) {
          uVar23 = uVar24 + 1;
          uVar24 = uVar14;
        }
      }
      if (*(char *)((long)puVar19 + 0xb) != '\0') break;
      func_0x000100067bfc();
      ppuVar13 = param_2 + (uVar14 & 0xff);
    }
    uVar14 = uVar14 & 0xffffffff;
    FUN_100066d04();
    if (puVar19 == (ulong *)0x0) {
      puVar19 = (ulong *)param_1[0xc];
      uVar14 = (ulong)*(byte *)((long)puVar19 + 10);
    }
    else {
      uVar14 = uVar14 & 0xffffffff;
    }
    puVar20 = puVar19;
    if ((ulong *)**ppuVar16 == puVar19 && uVar14 == 0) {
      uVar23 = 0;
    }
    else if (*(char *)((long)puVar19 + 0xb) == '\0') {
      FUN_100067c04();
      puVar20 = puVar19 + (uVar14 & 0xff);
      while( true ) {
        puVar20 = (ulong *)*puVar20;
        bVar4 = *(byte *)((long)puVar20 + 10);
        if (*(char *)((long)puVar20 + 0xb) != '\0') break;
        func_0x000100067bfc();
        puVar20 = puVar19 + bVar4;
      }
      uVar23 = (ulong)(bVar4 - 1);
    }
    else {
      uVar22 = (int)uVar14 - 1;
      uVar24 = (ulong)uVar22;
      uVar23 = uVar24;
      puVar21 = puVar19;
      if ((int)uVar14 < 1) {
        while ((puVar20 = puVar21, (int)uVar22 < 0 &&
               (puVar20 = puVar19, uVar23 = uVar24, *(char *)((long)*puVar21 + 0xb) == '\0'))) {
          uVar22 = (byte)puVar21[1] - 1;
          uVar23 = (ulong)uVar22;
          puVar21 = (ulong *)*puVar21;
        }
      }
    }
    func_0x000100066d38();
    puVar19 = (ulong *)param_1[0xc];
    bVar4 = *(byte *)((long)puVar19 + 10);
    cVar6 = false;
    bVar7 = false;
    cVar8 = false;
    uVar22 = (uint)uVar23;
    if (puVar20 == puVar19) {
      uVar26 = (uint)bVar4;
      cVar8 = SBORROW4(uVar22,uVar26);
      cVar6 = (int)(uVar22 - uVar26) < 0;
      bVar7 = uVar22 == uVar26;
    }
    puVar21 = puVar20;
    if (bVar7) {
LAB_100066658:
      puStack_88 = (ulong *)param_1[0xb];
      lVar2 = param_1[0xe];
      uVar24 = (long)(param_1[0xf] - param_1[0xe]) >> 5;
      while (uVar24 != 0) {
        uVar25 = uVar24 >> 1;
        lVar1 = lVar2 + uVar25 * 0x20;
        ppuVar13 = &puStack_88;
        FUN_10006709c(ppuVar13,auStack_a8,lVar1);
        uVar14 = uVar24 + ~uVar25;
        uVar24 = uVar25;
        if ((int)ppuVar13 == 0) {
          lVar2 = lVar1 + 0x20;
          uVar24 = uVar14;
        }
      }
      lVar3 = param_1[0xf];
      lVar1 = 0;
      if (param_1[0xe] != lVar2) {
        lVar1 = -0x20;
      }
      lVar2 = lVar2 + lVar1;
      func_0x000100066d38();
      cVar8 = SBORROW8(lVar2,lVar3);
      cVar6 = lVar2 - lVar3 < 0;
      if (lVar2 != lVar3) {
        func_0x000107c3a7d8();
        func_0x0001000672a0();
        uVar18 = extraout_x11_00;
        ppuVar13 = extraout_x10_00;
        if (cVar6 == cVar8) {
          uVar18 = extraout_x8_00;
          ppuVar13 = &puStack_88;
        }
        func_0x0001000672b4(ppuVar13,uVar18);
        iVar9 = iVar10;
        FUN_100067364();
        iVar10 = (int)ppuVar13;
        if (iVar10 != 0) {
          func_0x000107c3a7f4();
          func_0x000107c2b930();
          func_0x000107c3a7a4();
          func_0x000107c3a790();
          func_0x000107c3a79c();
          func_0x000107c3a8c8();
          func_0x000107c3a7d8();
          func_0x000107c3a7d0();
          func_0x000107c3a798();
          goto LAB_1000669b8;
        }
        if (lVar2 + 0x20 != lVar3) {
          func_0x000107c3a7d8();
          func_0x0001000672a0();
          func_0x000100067658();
          FUN_100067364();
          if (iVar9 != 0) {
            func_0x000107c3a7f4();
            func_0x000107c2b930();
            func_0x000107c3a7a4();
            func_0x000107c3a790();
            func_0x000107c3a79c();
            func_0x000107c3a8c8();
            func_0x000107c3a7d8();
            func_0x000107c3a7d0();
            func_0x000107c3a798();
            goto LAB_1000669b8;
          }
        }
      }
      puStack_70 = puVar21;
      uStack_68 = uVar23;
      if (param_1[0xd] == 0) {
LAB_1000667ac:
        ppuVar13 = (ulong **)0x1;
        FUN_100066d74();
        param_1[0xc] = ppuVar13;
        param_1[10] = ppuVar13;
LAB_1000667c0:
        while( true ) {
          uVar23 = 0;
          puVar19 = *ppuVar16;
          uVar24 = (ulong)*(byte *)((long)puVar19 + 10);
          while (uVar14 = uVar24, uVar23 != uVar14) {
            uVar24 = uVar23 + uVar14 >> 1;
            ppuVar13 = (ulong **)(param_1 + 0xb);
            func_0x000100067430(ppuVar13,puVar19 + uVar24 * 4 + 2);
            if ((int)ppuVar13 != 0) {
              uVar23 = uVar24 + 1;
              uVar24 = uVar14;
            }
          }
          if (*(char *)((long)puVar19 + 0xb) != '\0') break;
          func_0x000100067bfc();
          ppuVar16 = ppuVar13 + (uVar14 & 0xff);
        }
        uVar14 = uVar14 & 0xffffffff;
        FUN_100066d04(puVar19,uVar14);
        if ((puVar19 == (ulong *)0x0) ||
           (func_0x000100067438((long)puVar19 + ((long)(uVar14 << 0x20) >> 0x1b)),
           ((ulong)puVar19 & 1) != 0)) goto LAB_100066880;
      }
      else {
        if ((ulong *)param_1[0xc] == puVar21 && uVar23 == *(byte *)((long)param_1[0xc] + 10)) {
LAB_100066768:
          if ((ulong *)**ppuVar16 != puVar21 || uVar23 != 0) {
            puStack_88 = puVar21;
            uStack_80 = uVar23;
            FUN_10006736c(&puStack_88);
            ppuVar13 = (ulong **)(param_1 + 0xb);
            func_0x000100067430(ppuVar13,(long)puStack_88 +
                                         ((long)(uStack_80 << 0x20) >> 0x1b) + 0x10);
            iVar10 = (int)ppuVar13;
joined_r0x0001000667a0:
            if (iVar10 == 0) {
              if (param_1[0xd] == 0) goto LAB_1000667ac;
              goto LAB_1000667c0;
            }
          }
        }
        else {
          lVar2 = (long)(uVar23 << 0x20) >> 0x1b;
          puVar12 = param_1 + 0xb;
          FUN_10006709c(puVar12,auStack_a8,(long)puVar21 + lVar2 + 0x10);
          if ((int)puVar12 != 0) goto LAB_100066768;
          puVar12 = param_1 + 0xb;
          func_0x000100067430(puVar12,(long)puVar21 + lVar2 + 0x10);
          if ((int)puVar12 == 0) goto LAB_100066890;
          ppuVar13 = &puStack_70;
          func_0x000107c316ac();
          if (puStack_70 != (ulong *)param_1[0xc] ||
              (uint)uStack_68 != *(byte *)((long)param_1[0xc] + 10)) {
            func_0x000100067438(puStack_70 + (long)(int)(uint)uStack_68 * 4);
            iVar10 = (int)ppuVar13;
            goto joined_r0x0001000667a0;
          }
        }
LAB_100066880:
        FUN_100066ddc();
        FUN_100066de8();
      }
LAB_100066890:
      uVar18 = 1;
      goto LAB_100066894;
    }
    FUN_100066a54(&puStack_88,puVar20 + (uVar23 & 0xff) * 4 + 2,*param_1);
    func_0x0001000672a0();
    uVar18 = extraout_x11;
    ppuVar13 = extraout_x10;
    if (cVar6 == cVar8) {
      uVar18 = extraout_x8;
      ppuVar13 = &puStack_88;
    }
    func_0x0001000672b4(ppuVar13,uVar18);
    ppuVar11 = ppuVar13;
    FUN_100067364();
    if ((int)ppuVar13 == 0) {
      if (*(char *)((long)puVar20 + 0xb) == '\0') {
        func_0x000100067bfc();
        puVar21 = ppuVar11[(ulong)(uVar22 + 1) & 0xff];
        while (*(char *)((long)puVar21 + 0xb) == '\0') {
          func_0x000107c31678();
        }
        uVar23 = 0;
      }
      else {
        uVar24 = (ulong)(uVar22 + 1);
        bVar5 = *(byte *)((long)puVar20 + 10);
        puVar15 = puVar20;
        uVar23 = uVar24;
        if ((int)(uint)bVar5 <= (int)(uVar22 + 1)) {
          while ((puVar21 = puVar15, (uint)uVar23 == (uint)bVar5 &&
                 (puVar17 = (ulong *)*puVar15, puVar21 = puVar20, uVar23 = uVar24,
                 *(char *)((long)puVar17 + 0xb) == '\0'))) {
            puVar21 = puVar15 + 1;
            bVar5 = *(byte *)((long)puVar17 + 10);
            puVar15 = puVar17;
            uVar23 = (ulong)(byte)*puVar21;
          }
        }
      }
      if (puVar21 != puVar19 || (uint)uVar23 != (uint)bVar4) {
        ppuVar13 = &puStack_88;
        FUN_100066a54(ppuVar13,puVar21 + (uVar23 & 0xff) * 4 + 2,*param_1);
        iVar9 = (int)ppuVar13;
        func_0x0001000672a0();
        func_0x000100067658();
        FUN_100067364();
        if (iVar9 != 0) {
          func_0x000107c3a7f4();
          func_0x000107c2b930();
          func_0x000107c3a7a4();
          func_0x000107c3a790();
          func_0x000107c3a79c();
          func_0x000107c3a8c8();
          FUN_100066a54(&puStack_88,puVar21 + (uVar23 & 0xff) * 4 + 2);
          func_0x000107c3a7d0();
          func_0x000107c3a798();
          goto LAB_1000669b8;
        }
      }
      goto LAB_100066658;
    }
    func_0x000107c3a7f4();
    func_0x000107c2b930();
    func_0x000107c3a7a4();
    func_0x000107c3a790();
    func_0x000107c3a79c();
    func_0x000107c3a8c8();
    FUN_100066a54(&puStack_88,puVar20 + (uVar23 & 0xff) * 4 + 2);
    func_0x000107c3a7d0();
    func_0x000107c3a798();
LAB_1000669b8:
    FUN_100067364();
    ppuVar13 = &puStack_70;
  }
  func_0x000107c2b934(ppuVar13);
  uVar18 = 0;
LAB_100066894:
  func_0x000100066f9c();
  func_0x000107c60ca0(auStack_a0);
  return uVar18;
}



/* Entry: 100066a54; end: 100066b07;  */

undefined1  [16] FUN_100066a54(undefined8 param_1,uint *param_2,long param_3)

{
  char *pcVar1;
  byte bVar2;
  char **ppcVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  char **ppcVar7;
  long unaff_x19;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puStack_b8;
  ulong uStack_b0;
  char *pcStack_88;
  long lStack_80;
  ulong uStack_58;
  long lStack_50;
  long lStack_28;
  
  FUN_100066170();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (ulong)*param_2;
  FUN_100066b08();
  pcStack_88 = "";
  if (param_3 != 0) {
    pcStack_88 = ".";
  }
  uStack_58 = uVar5;
  lStack_50 = param_3;
  FUN_100066b30();
  uStack_b0 = *(ulong *)(unaff_x19 + 0x10);
  puStack_b8 = *(undefined8 **)(unaff_x19 + 8);
  if (-1 < (char)*(byte *)(unaff_x19 + 0x1f)) {
    uStack_b0 = (ulong)*(byte *)(unaff_x19 + 0x1f);
    puStack_b8 = (undefined8 *)(unaff_x19 + 8);
  }
  puVar6 = &uStack_58;
  ppcVar7 = &pcStack_88;
  lStack_80 = param_3;
  FUN_100066c24(puVar6,ppcVar7,&puStack_b8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    iVar4 = (int)puVar6;
    bVar2 = *(byte *)((long)ppcVar7 + (long)iVar4 * 0x28 + 0x27);
    pcVar1 = ppcVar7[(long)iVar4 * 5 + 3];
    ppcVar3 = (char **)ppcVar7[(long)iVar4 * 5 + 2];
    if (-1 < (char)bVar2) {
      pcVar1 = (char *)(ulong)bVar2;
      ppcVar3 = ppcVar7 + (long)iVar4 * 5 + 2;
    }
    auVar9._8_8_ = pcVar1;
    auVar9._0_8_ = ppcVar3;
    return auVar9;
  }
  auVar8._8_8_ = ppcVar7;
  auVar8._0_8_ = puVar6;
  return auVar8;
}



/* Entry: 100066b08; end: 100066b2f;  */

undefined1  [16] FUN_100066b08(int param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  param_2 = param_2 + (long)param_1 * 0x28;
  uVar1 = *(ulong *)(param_2 + 0x18);
  plVar2 = (long *)*(long *)(param_2 + 0x10);
  if (-1 < (char)*(byte *)(param_2 + 0x27)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x27);
    plVar2 = (long *)(param_2 + 0x10);
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = plVar2;
  return auVar3;
}



/* Entry: 100066b30; end: 100066b67;  */

undefined1  [16] FUN_100066b30(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c613d0(param_1);
  }
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 100066b68; end: 100066c23;  */

void FUN_100066b68(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar3 < 0) {
    uVar4 = param_1[1];
    if (uVar4 < param_2) {
      lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar3 = (ulong)param_1[2] >> 0x38;
      goto LAB_100066bb8;
    }
  }
  else {
    if (param_2 <= uVar3) {
      *(byte *)((long)param_1 + 0x17) = (byte)param_2;
      goto LAB_100066c10;
    }
    lVar1 = 0x16;
    uVar4 = uVar3;
LAB_100066bb8:
    uVar2 = (uint)uVar3;
    if (lVar1 - uVar4 < param_2 - uVar4) {
      func_0x000107c60c88(param_1,lVar1,((param_2 - uVar4) - lVar1) + uVar4,uVar4,uVar4,0,0);
      param_1[1] = uVar4;
      uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    if ((uVar2 >> 7 & 1) == 0) {
      *(byte *)((long)param_1 + 0x17) = (byte)param_2 & 0x7f;
      goto LAB_100066c10;
    }
  }
  param_1[1] = param_2;
  param_1 = (undefined8 *)*param_1;
LAB_100066c10:
  *(undefined1 *)((long)param_1 + param_2) = 0;
  return;
}



/* Entry: 100066c24; end: 100066d03;  */

/* WARNING: Possible PIC construction at 0x000100066c90: Changing call to branch */

void FUN_100066c24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100066b68(param_1,param_3[1] + param_2[1] + param_4[1]);
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    lVar3 = param_3[1];
    if (lVar3 != 0) {
      func_0x000107c610b4(puVar1,*param_3,lVar3);
    }
    lVar4 = param_4[1];
    if (lVar4 == 0) {
      return;
    }
    uVar2 = *param_4;
    puVar1 = (undefined8 *)((long)puVar1 + lVar3);
  }
  else {
    uVar2 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(puVar1,uVar2,lVar4);
  return;
}



/* Entry: 100066d04; end: 100066d4f;  */

undefined1  [16] FUN_100066d04(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  do {
    if ((uint)uVar1 != (uint)*(byte *)((long)param_1 + 10)) goto LAB_100066d28;
    uVar1 = (ulong)*(byte *)(param_1 + 1);
    param_1 = (long *)*param_1;
  } while (*(char *)((long)param_1 + 0xb) == '\0');
  param_1 = (long *)0x0;
LAB_100066d28:
  auVar2._8_8_ = param_2 & 0xffffffff00000000 | uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 100066d50; end: 100066d73;  */

void FUN_100066d50(void)

{
  FUN_1000662e4(1);
  FUN_100066da0();
  return;
}


