/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105986ffc; end: 105987023;  */

void FUN_105986ffc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000100066230(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = (ulong)*(char *)(param_1 + 0x57);
  lVar3 = param_1 + 0x40;
  if ((long)uVar2 < 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    *(ulong *)(param_1 + 0x20) = lVar3 + uVar2;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    if (*(char *)(param_1 + 0x57) < '\0') {
      lVar1 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar1 = 0x16;
    }
    func_0x0001001548a8(param_1 + 0x40,lVar1);
    lVar1 = (long)*(char *)(param_1 + 0x57);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(long *)(param_1 + 0x38) = lVar3 + lVar1;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      for (; uVar2 >> 0x1f != 0; uVar2 = uVar2 - 0x7fffffff) {
        lVar3 = lVar3 + 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar3;
      }
      if (uVar2 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar3 + uVar2;
      }
    }
  }
  return;
}



/* Entry: 105987024; end: 10598706f;  */

void FUN_105987024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 105987070; end: 1059870c3;  */

undefined8 * FUN_105987070(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = ((undefined8 *)*param_1)[1];
  uStack_30 = *(undefined8 *)*param_1;
  func_0x0001002a2640();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (0 < (long)puVar2) {
    func_0x00010bd483c4(auStack_88);
    puVar3 = auStack_88;
    func_0x0001005d466c();
    uStack_68 = 0;
    puStack_70 = (undefined1 *)puVar2;
    puStack_60 = puVar3;
    uStack_58 = param_2;
    func_0x0001003a91d4(&UNK_10f317301);
    func_0x0001003a9204(extraout_x8);
    puVar3 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    return (undefined8 *)puVar3;
  }
  puVar1 = &UNK_10f3172fd;
  func_0x00010002b82c(extraout_x8,&UNK_10f3172fd);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return (undefined8 *)unaff_x20;
}



/* Entry: 1059870c4; end: 105987153;  */

undefined1 * FUN_1059870c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  if (0 < param_2) {
    func_0x00010bd483c4(auStack_58);
    puVar2 = auStack_58;
    func_0x0001005d466c();
    uStack_38 = 0;
    lStack_40 = param_2;
    puStack_30 = puVar2;
    uStack_28 = param_3;
    func_0x0001003a91d4(&UNK_10f317301);
    func_0x0001003a9204(param_1);
    puVar2 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    return puVar2;
  }
  puVar1 = &UNK_10f3172fd;
  func_0x00010002b82c(param_1,&UNK_10f3172fd);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 105987154; end: 10598717b;  */

void FUN_105987154(undefined8 param_1,undefined1 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  func_0x0001003abe34(param_1,&uStack_11,1);
  return;
}



/* Entry: 10598717c; end: 105987187;  */

undefined1 * FUN_10598717c(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  ulong uStack_28;
  
  if ((param_3 & 1) == 0) {
    param_2 = 0;
  }
  if (0 < param_2) {
    func_0x00010bd483c4(auStack_58);
    puVar2 = auStack_58;
    func_0x0001005d466c();
    uStack_38 = 0;
    lStack_40 = param_2;
    puStack_30 = puVar2;
    uStack_28 = param_3;
    func_0x0001003a91d4(&UNK_10f317301);
    func_0x0001003a9204(param_1);
    puVar2 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
    return puVar2;
  }
  puVar1 = &UNK_10f3172fd;
  func_0x00010002b82c(param_1,&UNK_10f3172fd);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 105987188; end: 1059871b7;  */

void FUN_105987188(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_1059871b8(puVar1,param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 1059871b8; end: 1059871fb;  */

undefined8 FUN_1059871b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  FUN_105987070(auStack_38,param_2);
  func_0x0001059872b4();
  func_0x0001059872a8();
  return uVar1;
}



/* Entry: 1059871fc; end: 10598722b;  */

void FUN_1059871fc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_10598722c(puVar1,param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 10598722c; end: 1059872a7;  */

undefined8 FUN_10598722c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_3;
  if (*(char *)(param_2 + 1) == '\x01') {
    uStack_30 = *param_2;
    uStack_28 = 0;
    func_0x0001003a91d4(&DAT_10f2fb62f);
    func_0x0001003a9204(auStack_48);
  }
  else {
    func_0x00010002b838(auStack_48,&UNK_10f315c59);
  }
  func_0x0001059872b4();
  func_0x0001059872a8();
  return uVar1;
}



/* Entry: 1059872a8; end: 1059872d7;  */

void FUN_1059872a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1059872d8; end: 1059875eb;  */

long FUN_1059872d8(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  int **ppiVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *apiStack_108 [5];
  int iStack_dc;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  int *piStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar6 = 2;
  FUN_1059875ec();
  uVar8 = *(ulong *)(param_2 + 0x10);
  iStack_dc = *(int *)(param_2 + 0x18);
  switch(iStack_dc) {
  case 1:
    func_0x0001002a8234(param_1 + 0x30,uVar8 & 0xfffffffffffffffc);
    return param_1;
  case 2:
  case 5:
  case 0xb:
    FUN_105986b1c(&piStack_90,uVar8 & 0xfffffffffffffffc);
    func_0x000105987650(param_1,&piStack_90);
    ppiVar5 = &piStack_90;
code_r0x000105987468:
    func_0x00010028ad98(ppiVar5);
    return param_1;
  case 0xc:
    func_0x000100114fd0(&piStack_90,uVar8 & 0xfffffffffffffffc,0);
    if (((char)uStack_68 == '\x01') && ((char)pcStack_88 == '\a')) {
      ppiVar5 = &piStack_90;
      func_0x00010bcce248(ppiVar5,"data",4);
      if ((ppiVar5 != (int **)0x0) && (*(char *)(ppiVar5 + 1) == '\a')) {
        FUN_105986a44(apiStack_108);
        func_0x00010011a53c(&piStack_90);
        func_0x000105987908();
        ppiVar5 = apiStack_108;
        goto code_r0x000105987468;
      }
    }
    uVar6 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_105987cf8(auStack_c0,uVar8 & 0xfffffffffffffffc);
    puStack_60 = &UNK_10f317351;
    uStack_58 = 0;
    uStack_50 = 0x22;
    uStack_48 = 0;
    func_0x000105987998();
    func_0x0001003a9204(auStack_d8);
    FUN_10598789c(&puStack_60,auStack_c0,auStack_d8);
    func_0x0001003a91d4(&UNK_10f3173a9);
    func_0x0001003a9204(auStack_a8);
    FUN_1052768d8(uVar6,auStack_a8);
    func_0x000105987914();
    break;
  default:
    if (iStack_dc != -0x80000000 && iStack_dc != 0x7fffffff) {
      return param_1;
    }
  case 0:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    uVar2 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_105987cf8(&puStack_60,uVar8 & 0xfffffffffffffffc);
    piStack_90 = (int *)&UNK_10f317351;
    pcStack_88 = (code *)0x0;
    ppuStack_80 = (undefined **)0x51;
    uStack_78 = 0;
    func_0x000105987998();
    func_0x0001003a9204(auStack_a8);
    ppuVar3 = &puStack_60;
    func_0x0001005d466c();
    puVar4 = auStack_a8;
    uVar7 = uVar6;
    func_0x0001005d466c();
    piStack_90 = &iStack_dc;
    pcStack_88 = FUN_105976768;
    ppuStack_80 = ppuVar3;
    uStack_78 = uVar6;
    puStack_70 = puVar4;
    uStack_68 = uVar7;
    func_0x0001003a91d4(&UNK_10f317309);
    func_0x0001003a9204(apiStack_108);
    FUN_1052768d8(uVar2,apiStack_108);
    func_0x000105987914();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10598751c);
  (*pcVar1)();
}



/* Entry: 1059875ec; end: 105987687;  */

undefined8 FUN_1059875ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  auStack_50[0] = 0;
  uStack_28 = 0;
  auStack_70[0] = 0;
  uStack_58 = 0;
  FUN_10595bb48(param_1,auStack_50,auStack_70,param_2,param_3,0,0);
  func_0x0001001148fc(auStack_70);
  func_0x00010062706c(auStack_50);
  return param_1;
}



/* Entry: 105987688; end: 1059876eb;  */

void FUN_105987688(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010598795c();
  FUN_1059875ec();
  lVar1 = *(long *)(unaff_x21 + 0x88);
  if (lVar1 != 0) {
    if ((*(byte *)(unaff_x19 + 0x68) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x68) = 1;
    }
    *(long *)(unaff_x19 + 0x60) = lVar1;
  }
  func_0x00010598796c();
  FUN_1059876ec();
  return;
}



/* Entry: 1059876ec; end: 10598774f;  */

void FUN_1059876ec(undefined8 param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  
  bVar2 = param_2 == 4;
  if (param_2 < 5) {
    FUN_1059878e0();
    if (!bVar2) {
      lVar3 = unaff_x19 + 0x30;
      cVar1 = *(char *)(unaff_x19 + 0x48);
      if (cVar1 != *(char *)(extraout_x9 + 0x60)) {
        if (cVar1 != '\0') {
          if (*(char *)(unaff_x19 + 0x48) == '\x01') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            *(undefined1 *)(lVar3 + 0x18) = 0;
          }
          return;
        }
        func_0x000107c60c94();
        func_0x00010028b5dc();
        return;
      }
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)();
        return;
      }
      return;
    }
    if (*(char *)(extraout_x9 + 0x60) == '\x01') {
      func_0x00010598793c();
      func_0x000105987908();
      func_0x000105987954();
    }
  }
  return;
}



/* Entry: 105987750; end: 1059877a3;  */

void FUN_105987750(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010598795c();
  FUN_1059875ec();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x78);
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  func_0x00010598796c();
  FUN_1059877a4();
  return;
}



/* Entry: 1059877a4; end: 1059877f3;  */

long FUN_1059877a4(long param_1,uint param_2)

{
  bool bVar1;
  long extraout_x9;
  long unaff_x19;
  
  bVar1 = param_2 == 4;
  if (param_2 < 5) {
    FUN_1059878e0();
    if (!bVar1) {
      if (*(char *)(unaff_x19 + 0x48) == '\x01') {
        func_0x000107c60ca4();
      }
      else {
        func_0x00010028b5c4(unaff_x19 + 0x30,extraout_x9 + 0x48);
      }
      return unaff_x19 + 0x30;
    }
    func_0x00010598793c();
    func_0x000105987908();
    func_0x000105987954();
  }
  return param_1;
}



/* Entry: 1059877f4; end: 10598784b;  */

void FUN_1059877f4(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010598795c();
  FUN_1059875ec();
  lVar1 = *(long *)(unaff_x21 + 0x80);
  if (lVar1 != 0) {
    if ((*(byte *)(unaff_x19 + 0x68) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x68) = 1;
    }
    *(long *)(unaff_x19 + 0x60) = lVar1;
  }
  func_0x00010598796c();
  FUN_10598784c();
  return;
}



/* Entry: 10598784c; end: 10598789b;  */

long FUN_10598784c(long param_1,uint param_2)

{
  bool bVar1;
  long extraout_x9;
  long unaff_x19;
  
  bVar1 = param_2 == 4;
  if (param_2 < 5) {
    FUN_1059878e0();
    if (!bVar1) {
      if (*(char *)(unaff_x19 + 0x48) == '\x01') {
        func_0x000107c60ca4();
      }
      else {
        func_0x00010028b5c4(unaff_x19 + 0x30,extraout_x9 + 0x48);
      }
      return unaff_x19 + 0x30;
    }
    func_0x00010598793c();
    func_0x000105987908();
    func_0x000105987954();
  }
  return param_1;
}



/* Entry: 10598789c; end: 1059878df;  */

undefined8 * FUN_10598789c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 1059878e0; end: 1059879d3;  */

void FUN_1059878e0(void)

{
  return;
}



/* Entry: 1059879d4; end: 105987a37;  */

undefined1 * FUN_1059879d4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  FUN_105987a38();
  return param_1;
}



/* Entry: 105987a38; end: 105987c63;  */

/* WARNING: Removing unreachable block (ram,0x000105987b08) */

void FUN_105987a38(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [8];
  char cStack_a0;
  byte bStack_80;
  undefined1 auStack_78 [40];
  byte bStack_50;
  ulong auStack_48 [3];
  
  if (*(char *)(param_2 + 0x18) != '\x01') {
    return;
  }
  auStack_48[0] = 0;
  auStack_48[1] = 0;
  auStack_48[2] = 0;
  func_0x000100114fd0(auStack_78,param_2,auStack_48);
  if ((bStack_50 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  else {
    puVar1 = auStack_78;
    func_0x00010bcce248(puVar1,&DAT_10f31746a,7);
    if (puVar1 == (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 1;
      *(undefined1 *)(param_1 + 0x54) = 1;
      func_0x000105987cc0();
    }
    else {
      if (puVar1[8] == '\x04') {
        func_0x0001098f3384(auStack_a8);
        func_0x000100602604(param_1,auStack_a8);
        func_0x000105987cdc();
        auStack_48[0] = auStack_48[0] & 0xffffffffffffff00;
        auStack_48[2] = auStack_48[2] & 0xffffffffffffff;
        func_0x000100114fd0(auStack_a8,param_1,auStack_48);
        if ((bStack_80 & 1) == 0) {
          func_0x000105987cb0(3);
        }
        else if (cStack_a0 == '\a') {
          FUN_105986a44(auStack_d0,auStack_a8);
          func_0x000105987650(param_1 + 0x20,auStack_d0);
          func_0x00010028ad98(auStack_d0);
        }
        else {
          func_0x000105987cb0(4);
          func_0x00010002b838(auStack_d0,"");
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
        }
        func_0x00010011a53c(auStack_a8);
        goto LAB_105987b90;
      }
      func_0x000105987cb0(2);
      func_0x000105987cc0();
    }
    func_0x000105987cdc();
  }
LAB_105987b90:
  func_0x00010011a53c(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 105987c64; end: 105987caf;  */

void FUN_105987c64(undefined1 *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    param_2 = param_2 + 0x20;
    func_0x000104bdb3d4();
    if (param_2 != 0) {
      func_0x000107c60c94(param_1,param_2 + 0x28);
      param_1[0x18] = 1;
      return;
    }
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 105987cb0; end: 105987cf7;  */

void FUN_105987cb0(void)

{
  undefined4 in_w8;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x50) = in_w8;
  *(undefined1 *)(unaff_x19 + 0x54) = 1;
  return;
}



/* Entry: 105987cf8; end: 105987fb7;  */

void FUN_105987cf8(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  bool bVar8;
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [3];
  undefined8 uStack_218;
  ulong uStack_210;
  byte bStack_201;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 auStack_1e8 [5];
  byte bStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined1 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  func_0x0001059883b4();
  FUN_1054901a8(auStack_1a0);
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  puVar3 = &uStack_1b8;
  func_0x000100114fd0(auStack_1e8,param_1);
  if ((bStack_1c0 & 1) == 0) {
    puVar5 = &uStack_1b8;
    func_0x0001005d466c();
    puStack_90 = puVar5;
    puStack_88 = puVar3;
    func_0x0001003a91d4(&UNK_10f3174b5);
    func_0x0001003a9204(auStack_248);
  }
  else {
    func_0x0001098f428c(&puStack_200,auStack_1e8);
    bVar8 = true;
    for (puVar5 = puStack_200; puVar5 != puStack_1f8; puVar5 = puVar5 + 3) {
      puVar3 = auStack_1e8;
      func_0x0001098f422c(puVar3,puVar5);
      if (!bVar8) {
        FUN_10549023c(auStack_1a0,&DAT_10f68f19e);
      }
      puVar4 = puVar5;
      FUN_10598816c();
      if (puVar4 == (undefined8 *)&UNK_1108c59d0) {
        FUN_1059881b8(&uStack_218);
        bVar2 = bStack_201;
        uVar1 = uStack_210;
        uVar7 = (ulong)bStack_201;
        puVar4 = puVar5;
        func_0x0001005d466c();
        uStack_80 = uVar1;
        if (-1 < (char)bVar2) {
          uStack_80 = uVar7;
        }
        uStack_78 = 0;
        puStack_90 = puVar4;
        puStack_88 = puVar3;
        func_0x0001003a91d4(&UNK_10f3174d9);
        func_0x0001003a9204(auStack_230);
        puVar3 = auStack_230;
        func_0x0001006282fc(auStack_1a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
        puVar4 = &uStack_218;
      }
      else {
        FUN_1059881b8(auStack_230,puVar3);
        FUN_105988308(&puStack_90,puVar5,auStack_230);
        func_0x0001003a91d4(&UNK_10f3174d2);
        func_0x0001003a9204(&uStack_218);
        puVar3 = &uStack_218;
        func_0x0001006282fc(auStack_1a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_218);
        puVar4 = auStack_230;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
      bVar8 = false;
    }
    func_0x0001000e30f4(&puStack_200);
    FUN_105491b64(auStack_248,&uStack_198);
  }
  func_0x00010011a53c(auStack_1e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b8);
  FUN_105490284(auStack_1a0);
  puVar6 = auStack_248;
  func_0x0001005d466c();
  uStack_198 = 0;
  puStack_190 = puVar6;
  puStack_188 = puVar3;
  func_0x0001003a91d4(&UNK_10f31747a);
  func_0x000105988378();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_248);
  return;
}



/* Entry: 105987fb8; end: 105987fcb;  */

void FUN_105987fb8(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    puVar3 = auStack_1c0;
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    FUN_1054901a8(&uStack_190);
    plVar6 = (long *)(param_2 + 0x10);
    bVar4 = true;
    while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
      if (!bVar4) {
        param_3 = &DAT_10f68f19e;
        FUN_10549023c(&uStack_190);
      }
      puVar1 = (undefined *)(plVar6 + 2);
      FUN_10598816c();
      if (puVar1 == &UNK_1108c59d0) {
        lVar7 = (long)*(char *)((long)plVar6 + 0x3f);
        if (lVar7 < 0) {
          lVar7 = plVar6[6];
        }
        lVar2 = (long)(plVar6 + 2);
        func_0x0001005d466c();
        uStack_68 = 0;
        lStack_80 = lVar2;
        puStack_78 = param_3;
        lStack_70 = lVar7;
        func_0x0001003a91d4(&UNK_10f3174d9);
        func_0x0001003a9204(auStack_1a8);
        func_0x0001059883a0();
      }
      else {
        param_3 = (undefined *)(plVar6 + 2);
        FUN_10563bf9c(&lStack_80,param_3,plVar6 + 5);
        func_0x0001003a91d4(&UNK_10f3174d2);
        func_0x0001003a9204(auStack_1a8);
        func_0x0001059883a0();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
      bVar4 = false;
    }
    FUN_105491b64(auStack_1c0,&uStack_188);
    FUN_105490284(&uStack_190);
    func_0x0001005d466c();
    uStack_188 = 0;
    uStack_190 = uVar5;
    puStack_180 = puVar3;
    puStack_178 = param_3;
    func_0x0001003a91d4(&UNK_10f317498);
    func_0x000105988378();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
    return;
  }
  puVar1 = &UNK_10f317472;
  func_0x00010002b82c(param_1,&UNK_10f317472);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 105987fcc; end: 10598816b;  */

void FUN_105987fcc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar3 = auStack_1c0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_1054901a8(&uStack_190);
  plVar6 = (long *)(param_1 + 0x10);
  bVar4 = true;
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
    if (!bVar4) {
      param_2 = &DAT_10f68f19e;
      FUN_10549023c(&uStack_190);
    }
    puVar1 = (undefined *)(plVar6 + 2);
    FUN_10598816c();
    if (puVar1 == &UNK_1108c59d0) {
      lVar7 = (long)*(char *)((long)plVar6 + 0x3f);
      if (lVar7 < 0) {
        lVar7 = plVar6[6];
      }
      lVar2 = (long)(plVar6 + 2);
      func_0x0001005d466c();
      uStack_68 = 0;
      lStack_80 = lVar2;
      puStack_78 = param_2;
      lStack_70 = lVar7;
      func_0x0001003a91d4(&UNK_10f3174d9);
      func_0x0001003a9204(auStack_1a8);
      func_0x0001059883a0();
    }
    else {
      param_2 = (undefined *)(plVar6 + 2);
      FUN_10563bf9c(&lStack_80,param_2,plVar6 + 5);
      func_0x0001003a91d4(&UNK_10f3174d2);
      func_0x0001003a9204(auStack_1a8);
      func_0x0001059883a0();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    bVar4 = false;
  }
  FUN_105491b64(auStack_1c0,&uStack_188);
  FUN_105490284(&uStack_190);
  func_0x0001005d466c();
  uStack_188 = 0;
  uStack_190 = uVar5;
  puStack_180 = puVar3;
  puStack_178 = param_2;
  func_0x0001003a91d4(&UNK_10f317498);
  func_0x000105988378();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
  return;
}



/* Entry: 10598816c; end: 1059881b7;  */

undefined ** FUN_10598816c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  
  lVar3 = 0x28;
  ppuVar1 = &PTR_DAT_1108c59a8;
  do {
    ppuVar4 = ppuVar1;
    if (lVar3 == 0) {
      return ppuVar4;
    }
    uVar2 = param_1;
    func_0x000100152bb8(param_1,*ppuVar4);
    lVar3 = lVar3 + -8;
    ppuVar1 = ppuVar4 + 1;
  } while ((int)uVar2 == 0);
  return ppuVar4;
}



/* Entry: 1059881b8; end: 105988307;  */

void FUN_1059881b8(undefined8 param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [256];
  undefined1 auStack_88 [24];
  long alStack_70 [6];
  
  func_0x0001098f5ff8(alStack_70);
  func_0x0001098f3160(auStack_190,"");
  puVar1 = auStack_88;
  func_0x00010002b838(puVar1,&UNK_10f3172b8);
  func_0x00010598838c();
  func_0x0001001150b4(auStack_190,puVar1);
  func_0x000105988384();
  func_0x000105988398();
  func_0x0001098f3160(auStack_190,&DAT_10f684ec4);
  puVar1 = auStack_88;
  func_0x00010002b838(puVar1,&UNK_10f3172c4);
  func_0x00010598838c();
  func_0x0001001150b4(auStack_190,puVar1);
  func_0x000105988384();
  func_0x000105988398();
  FUN_1054901a8(auStack_190);
  plVar2 = alStack_70;
  func_0x0001098f62d4();
  (**(code **)(*plVar2 + 0x10))();
  FUN_105491b64(param_1,auStack_188);
  func_0x00010598835c();
  FUN_105490284(auStack_190);
  func_0x0001098f6274(alStack_70);
  return;
}



/* Entry: 105988308; end: 10598834b;  */

undefined8 * FUN_105988308(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10598834c; end: 1059883d7;  */

void FUN_10598834c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f317472;
  func_0x00010002b82c(param_1,&UNK_10f317472);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1059883d8; end: 1059884b7;  */

void FUN_1059883d8(undefined1 *param_1,long *param_2)

{
  bool bVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined8 uStack_70;
  int iStack_68;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar3 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      param_2 = (long *)*param_2;
      goto LAB_105988408;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
LAB_105988408:
    func_0x000100651b10(&uStack_70,param_2,lVar3);
    ppuStack_58 = &PTR_FUN_1108c5c60;
    uStack_50 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    pppuVar2 = &ppuStack_58;
    func_0x00010006369c(pppuVar2,uStack_70,iStack_68 - (int)uStack_70);
    bVar1 = ((ulong)pppuVar2 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_10596da90(param_1,&ppuStack_58);
    }
    param_1[0x38] = !bVar1;
    FUN_10598a384(&ppuStack_58);
    func_0x000100100fec(&uStack_70);
    return;
  }
  *param_1 = 0;
  param_1[0x38] = 0;
  return;
}



/* Entry: 1059884b8; end: 10598864b;  */

void FUN_1059884b8(long param_1,undefined8 *param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    plVar2 = (long *)*param_2;
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_1108c28b8;
    uStack_60 = 0;
    uStack_48 = 9;
    pppuVar1 = &ppuStack_68;
    FUN_1059779d8(pppuVar1,*(undefined4 *)(param_1 + 0x40));
    func_0x00010002b838(auStack_80,&UNK_10f317519);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_98,param_1 + 0x58);
    FUN_105973c64(pppuVar1,auStack_80,auStack_98);
    (**(code **)(*plVar2 + 0x18))(plVar2,pppuVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    func_0x000105988844();
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    plVar2 = (long *)*param_2;
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_1108c28b8;
    uStack_60 = 0;
    uStack_48 = 10;
    func_0x00010002b838(auStack_b0,&UNK_10f317519);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_c8,param_1 + 0x58);
    pppuVar1 = &ppuStack_68;
    FUN_105973c64(pppuVar1,auStack_b0,auStack_c8);
    (**(code **)(*plVar2 + 0x20))(plVar2,pppuVar1,param_1 + 0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    func_0x000105988844();
  }
  return;
}



/* Entry: 10598864c; end: 105988833;  */

void FUN_10598864c(undefined1 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x44] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  uStack_48 = 0;
  lVar1 = param_2;
  func_0x0001004b4e98();
  uStack_38 = 1;
  lStack_40 = lVar1;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x00010002b838(auStack_88,&DAT_10f317523);
    func_0x000100ab9b18(param_2,auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    if (param_2 == 0) goto LAB_105988768;
    FUN_1059883d8(auStack_88,param_2 + 0x28);
    func_0x00010598884c();
    FUN_10596db04(auStack_88);
  }
  else {
    if (*(char *)(param_3 + 0x128) != '\x01') goto LAB_105988768;
    lVar1 = param_3 + 0x100;
    func_0x00010bcce248(lVar1,&DAT_10f317523,8);
    if ((lVar1 == 0) || (*(char *)(lVar1 + 8) != '\x04')) goto LAB_105988768;
    func_0x0001098f3384(auStack_a0);
    FUN_1059883d8(auStack_88,auStack_a0);
    func_0x00010598884c();
    FUN_10596db04(auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  }
  if ((param_1[0x38] & 1) == 0) {
    func_0x000105988834(0x10005);
  }
LAB_105988768:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x58,param_3 + 0x18);
  puVar2 = &uStack_48;
  func_0x0001005e3518();
  if ((param_1[0x50] & 1) == 0) {
    param_1[0x50] = 1;
  }
  *(undefined8 **)(param_1 + 0x48) = puVar2;
  return;
}



/* Entry: 105988834; end: 105988857;  */

void FUN_105988834(void)

{
  undefined4 in_w8;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x40) = in_w8;
  *(undefined1 *)(unaff_x19 + 0x44) = 1;
  return;
}



/* Entry: 105988858; end: 105988fd3;  */

void FUN_105988858(long param_1,undefined8 ***param_2,undefined8 ***param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *extraout_x8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined **ppuStack_48;
  
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 10);
  if (param_3[0xb] != (undefined8 **)0x0) {
    param_2[0xd] = param_3[0xb];
    *(undefined1 *)(param_2 + 0xe) = 1;
  }
  pppuVar5 = param_3 + 6;
  uVar2 = *(char *)(param_3 + 5) == '\x01';
  if ((bool)uVar2) {
    if (*(char *)(param_3 + 9) == '\0') {
      pppuVar5 = param_2;
      pppuVar3 = param_3;
      func_0x0001059893ac();
      func_0x00010598935c();
      pppuVar4 = pppuVar5;
      func_0x0001059893a4();
      if (pppuVar5 == (undefined8 ***)0x0) {
        func_0x000105989394();
        func_0x000105989340();
        pcStack_a8 = (code *)0x0;
        ppuStack_a0 = (undefined8 **)0x58;
        ppuStack_98 = (undefined8 **)0x0;
        func_0x000105989308();
        func_0x000105989330();
        func_0x0001059893d8();
        ppuStack_b0 = (undefined8 **)&DAT_10f3174f2;
        pcStack_a8 = (code *)0x0;
        ppuStack_a0 = pppuVar4;
        ppuStack_98 = pppuVar3;
        func_0x000105989314();
        func_0x000105989384();
        func_0x000105989350();
        func_0x0001059892ec();
      }
      else {
        pppuVar5 = pppuVar5 + 5;
        pppuVar4 = param_2;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        func_0x0001059893ac();
        func_0x00010598935c();
        pppuVar3 = pppuVar4;
        func_0x0001059893a4();
        if (pppuVar4 == (undefined8 ***)0x0) {
          func_0x000105989394();
          func_0x000105989340();
          pcStack_a8 = (code *)0x0;
          ppuStack_a0 = (undefined8 **)0x60;
          ppuStack_98 = (undefined8 **)0x0;
          func_0x000105989308();
          func_0x000105989330();
          func_0x0001059893d8();
          ppuStack_b0 = (undefined8 **)&DAT_10f6389e8;
          pcStack_a8 = (code *)0x0;
          ppuStack_a0 = pppuVar3;
          ppuStack_98 = pppuVar5;
          func_0x000105989314();
          func_0x000105989384();
          func_0x000105989350();
          func_0x0001059892ec();
        }
        else {
          pppuVar5 = param_2 + 3;
          pppuVar4 = pppuVar4 + 5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
          func_0x0001059893ac();
          func_0x00010598935c();
          pppuVar3 = pppuVar5;
          func_0x0001059893a4();
          if (pppuVar5 != (undefined8 ***)0x0) {
            pppuVar5 = pppuVar5 + 5;
            func_0x000105989408();
            param_2[6] = pppuVar5;
            *(undefined4 *)(param_2 + 7) = 1;
            pppuVar5 = &ppuStack_b0;
            func_0x00010002b838(pppuVar5,&DAT_10f3174ff);
            func_0x00010598935c();
            func_0x0001059893a4();
            if (pppuVar5 == (undefined8 ***)0x0) {
              ppuVar7 = (undefined8 **)0x1;
            }
            else {
              pppuVar5 = pppuVar5 + 5;
              func_0x000100902494();
              ppuVar7 = (undefined8 **)((ulong)pppuVar5 & 0xffffffff);
            }
            param_2[0x12] = ppuVar7;
            pppuVar5 = &ppuStack_b0;
            func_0x00010002b838(pppuVar5,&DAT_10f31750d);
            func_0x00010598935c();
            func_0x0001059893a4();
            if (pppuVar5 == (undefined8 ***)0x0) {
              ppuVar7 = (undefined8 **)0x0;
            }
            else {
              pppuVar5 = pppuVar5 + 5;
              func_0x000100902494();
              ppuVar7 = (undefined8 **)((ulong)pppuVar5 & 0xffffffff);
            }
            param_2[0x14] = ppuVar7;
            FUN_105986c7c(&ppuStack_b0,param_3);
            func_0x000100602604(param_2 + 9,&ppuStack_b0);
            func_0x0001059893a4();
            if (*(char *)(param_2 + 0x20) == '\x01') {
              FUN_105976ac0(param_2,param_3);
            }
            func_0x000105989414();
            *(undefined1 *)(param_1 + 0x100) = 0;
            *(undefined1 *)(param_1 + 0x128) = 0;
            *(undefined1 *)(param_1 + 0x130) = 0;
            *(undefined1 *)(param_1 + 0x168) = 0;
            return;
          }
          func_0x000105989394();
          func_0x000105989340();
          pcStack_a8 = (code *)0x0;
          ppuStack_a0 = (undefined8 **)0x69;
          ppuStack_98 = (undefined8 **)0x0;
          func_0x000105989308();
          func_0x000105989330();
          func_0x0001059893d8();
          ppuStack_b0 = (undefined8 **)&DAT_10f3174f7;
          pcStack_a8 = (code *)0x0;
          ppuStack_a0 = pppuVar3;
          ppuStack_98 = pppuVar4;
          func_0x000105989314();
          func_0x000105989384();
          func_0x000105989350();
          func_0x0001059892ec();
        }
      }
    }
    else {
      func_0x000105989394();
      FUN_105987fb8(&puStack_78,param_3);
      func_0x000105987ce4(auStack_c8,pppuVar5);
      ppuStack_b0 = (undefined8 **)&UNK_10f317598;
      pcStack_a8 = (code *)0x0;
      ppuStack_a0 = (undefined8 ***)0x29;
      ppuStack_98 = (undefined8 ***)0x0;
      func_0x000105989308();
      func_0x0001003a9204(auStack_e0);
      FUN_105989090(&ppuStack_b0,&puStack_78,auStack_c8,auStack_e0);
      func_0x0001003a91d4(&UNK_10f31752c);
      func_0x0001003a9204(&puStack_60);
      func_0x000105989350();
      func_0x0001059892ec();
    }
  }
  else if (*(char *)(param_3 + 9) == '\0') {
    pppuVar4 = param_3;
    func_0x000105989394();
    func_0x000105989340();
    pcStack_a8 = (code *)0x0;
    ppuStack_a0 = (undefined8 **)0x34;
    ppuStack_98 = (undefined8 **)0x0;
    func_0x000105989308();
    func_0x000105989330();
    func_0x0001059893d8();
    pcStack_a8 = FUN_1059890fc;
    ppuStack_98 = (undefined8 ***)0x10596f1bc;
    ppuStack_b0 = param_3;
    ppuStack_a0 = pppuVar5;
    ppuStack_90 = param_2;
    ppuStack_88 = pppuVar4;
    func_0x0001003a91d4(&UNK_10f3175f7);
    func_0x0001003a9204(&puStack_60);
    func_0x000105989350();
    func_0x0001059892ec();
  }
  else {
    puStack_78 = (undefined *)0x0;
    uStack_70 = 0;
    uStack_68 = 0;
    ppuVar6 = &puStack_78;
    pppuVar4 = pppuVar5;
    func_0x000100114fd0(&ppuStack_b0);
    if (((ulong)ppuStack_88 & 1) == 0) {
      func_0x000105989394();
      func_0x000105989340();
      uStack_58 = 0;
      ppuStack_50 = (undefined8 ***)0x96;
      ppuStack_48 = (undefined **)0x0;
      puStack_60 = (undefined *)extraout_x8;
      func_0x000105989308();
      func_0x000105989320();
      FUN_10598789c(&puStack_60,&puStack_78,auStack_e0);
      func_0x0001003a91d4(&UNK_10f317683);
      func_0x0001003a9204(auStack_c8);
      func_0x000105989368();
      func_0x0001059892ec();
    }
    else {
      func_0x0001059893c8();
      if ((pppuVar4 == (undefined8 ***)0x0) || (func_0x0001059893ec(), !(bool)uVar2)) {
        func_0x000105989394();
        func_0x000105989340();
        uStack_58 = 0;
        ppuStack_50 = (undefined8 **)0x9e;
        ppuStack_48 = (undefined **)0x0;
        func_0x000105989308();
        func_0x000105989320();
        func_0x000105989400();
        puStack_60 = &DAT_10f3174f2;
        uStack_58 = 0;
        ppuStack_50 = pppuVar4;
        ppuStack_48 = ppuVar6;
        func_0x000105989314();
        func_0x000105989374();
        func_0x000105989368();
        func_0x0001059892ec();
      }
      else {
        func_0x0001059893c0();
        ppuVar6 = &puStack_60;
        pppuVar4 = param_2;
        func_0x000100066230();
        func_0x00010598939c();
        func_0x0001059893c8();
        if ((pppuVar4 == (undefined8 ***)0x0) || (func_0x0001059893ec(), !(bool)uVar2)) {
          func_0x000105989394();
          func_0x000105989340();
          uStack_58 = 0;
          ppuStack_50 = (undefined8 **)0xa6;
          ppuStack_48 = (undefined **)0x0;
          func_0x000105989308();
          func_0x000105989320();
          func_0x000105989400();
          puStack_60 = &DAT_10f6389e8;
          uStack_58 = 0;
          ppuStack_50 = pppuVar4;
          ppuStack_48 = ppuVar6;
          func_0x000105989314();
          func_0x000105989374();
          func_0x000105989368();
          func_0x0001059892ec();
        }
        else {
          func_0x0001059893c0();
          func_0x000100066230(param_2 + 3,&puStack_60);
          func_0x00010598939c();
          ppuVar6 = (undefined **)&DAT_10f3174f7;
          pppuVar4 = &ppuStack_b0;
          func_0x00010bcce248(pppuVar4,&DAT_10f3174f7,7);
          if ((pppuVar4 != (undefined8 ***)0x0) && (func_0x0001059893ec(), (bool)uVar2)) {
            func_0x0001059893c0();
            ppuVar7 = (undefined8 **)&puStack_60;
            func_0x000105989408();
            param_2[6] = ppuVar7;
            func_0x00010598939c();
            *(undefined4 *)(param_2 + 7) = 1;
            func_0x0001002a8234(param_2 + 9,pppuVar5);
            pppuVar5 = &ppuStack_b0;
            func_0x00010bcce248(pppuVar5,&DAT_10f3174ff,0xd);
            if ((pppuVar5 == (undefined8 ***)0x0) || (func_0x0001059893ec(), !(bool)uVar2)) {
              ppuVar7 = (undefined8 **)0x1;
            }
            else {
              func_0x0001059893c0();
              ppuVar6 = &puStack_60;
              func_0x000100902494();
              func_0x00010598939c();
              ppuVar7 = (undefined8 **)((ulong)ppuVar6 & 0xffffffff);
            }
            param_2[0x12] = ppuVar7;
            pppuVar5 = &ppuStack_b0;
            func_0x00010bcce248(pppuVar5,&DAT_10f31750d,0xb);
            if ((pppuVar5 == (undefined8 ***)0x0) || (func_0x0001059893ec(), !(bool)uVar2)) {
              ppuVar7 = (undefined8 **)0x0;
            }
            else {
              func_0x0001059893c0();
              ppuVar6 = &puStack_60;
              func_0x000100902494();
              func_0x00010598939c();
              ppuVar7 = (undefined8 **)((ulong)ppuVar6 & 0xffffffff);
            }
            param_2[0x14] = ppuVar7;
            if (*(char *)(param_2 + 0x20) == '\x01') {
              FUN_1059768a0(param_2,&ppuStack_b0);
            }
            func_0x000105989414();
            func_0x0001001154b4(param_1 + 0x100,&ppuStack_b0);
            *(undefined1 *)(param_1 + 0x128) = 1;
            *(undefined1 *)(param_1 + 0x130) = 0;
            *(undefined1 *)(param_1 + 0x168) = 0;
            func_0x00010011a53c(&ppuStack_b0);
            func_0x0001059893f8();
            return;
          }
          func_0x000105989394();
          func_0x000105989340();
          uStack_58 = 0;
          ppuStack_50 = (undefined8 **)0xb0;
          ppuStack_48 = (undefined **)0x0;
          func_0x000105989308();
          func_0x000105989320();
          func_0x000105989400();
          puStack_60 = &DAT_10f3174f7;
          uStack_58 = 0;
          ppuStack_50 = pppuVar4;
          ppuStack_48 = ppuVar6;
          func_0x000105989314();
          func_0x000105989374();
          func_0x000105989368();
          func_0x0001059892ec();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105988e60);
  (*pcVar1)();
}



/* Entry: 105988fd4; end: 10598908f;  */

long FUN_105988fd4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  func_0x00010028af84(param_1 + 0x48,param_2 + 0x48);
  _memcpy(param_1 + 0x68,param_2 + 0x68,0x58);
  func_0x00010028af84(param_1 + 0xc0,param_2 + 0xc0);
  func_0x00010028af84(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



/* Entry: 105989090; end: 1059890fb;  */

undefined8 *
FUN_105989090(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001005d466c();
  uVar3 = uVar2;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  param_1[4] = param_4;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 1059890fc; end: 10598919b;  */

void FUN_1059890fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  long lStack_30;
  code *pcStack_28;
  
  uVar1 = *param_3;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    pcStack_28 = FUN_10598919c;
    lStack_30 = param_1;
    func_0x0001003a91d4(&DAT_10f2fb62f);
    func_0x0001003a9204(auStack_48);
  }
  else {
    func_0x00010002b838(auStack_48,&UNK_10f315c59);
  }
  func_0x000100697a74(uVar1,&DAT_10f2fb62f,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  *param_3 = uVar1;
  return;
}



/* Entry: 10598919c; end: 105989293;  */

void FUN_10598919c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [256];
  long lStack_50;
  code *pcStack_48;
  
  FUN_105680760(auStack_168);
  plVar2 = (long *)(param_1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lStack_50 = (long)(plVar2 + 2);
    pcStack_48 = FUN_105989294;
    func_0x0001003a91d4(&UNK_10f3176d2);
    func_0x0001003a9204(auStack_180);
    func_0x0001006282fc(auStack_158,auStack_180);
    func_0x0001059893b8();
  }
  uVar1 = *param_3;
  FUN_105491b64(auStack_180,auStack_150);
  FUN_10596eb90(uVar1,&UNK_10f315a70,auStack_180);
  func_0x0001059893b8();
  func_0x000105673d7c(auStack_168);
  *param_3 = uVar1;
  return;
}



/* Entry: 105989294; end: 1059892eb;  */

void FUN_105989294(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [32];
  
  uVar2 = *param_3;
  FUN_10563bf9c(auStack_40,param_1,param_1 + 0x18);
  puVar1 = &UNK_10f3176d6;
  func_0x0001003a91d4();
  puStack_50 = puVar1;
  lStack_48 = param_1;
  func_0x0001005748e4(uVar2,&puStack_50,0xdd,auStack_40);
  *param_3 = uVar2;
  return;
}



/* Entry: 1059892ec; end: 10598945b;  */

void FUN_1059892ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 10598945c; end: 10598955f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10598945c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  long *plVar8;
  long *plStack_f8;
  undefined1 *puStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [8];
  long alStack_b0 [2];
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    FUN_1059895d4(alStack_b0);
    FUN_105989560(auStack_b8,alStack_b0);
    alStack_b0[1] = 0x10598975c;
    ppuStack_a0 = &PTR_FUN_1108c5a20;
    puStack_98 = param_1;
    plStack_90 = alStack_b0;
    (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,alStack_b0 + 1);
    FUN_105989904();
    puVar4 = auStack_b8;
    FUN_105989580();
    FUN_105989710(auStack_b8);
    plVar5 = alStack_b0;
    FUN_10598965c();
  } while ((int)puVar4 != 1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar8 = plVar5;
  func_0x000105989914();
  lVar6 = *plVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (lVar6 == 0) {
    pcStack_c8 = FUN_105989560;
    puVar7 = (undefined8 *)0x3;
    FUN_10538ceb0();
    pcStack_d8 = FUN_105989580;
    plVar8 = (long *)*puVar7;
    *puVar7 = 0;
    plStack_f8 = plVar8;
    puStack_f0 = puVar4;
    plStack_e8 = plVar5;
    puStack_e0 = (undefined1 *)&puStack_d0;
    FUN_105989858(plVar8);
    func_0x00010538d0f8(&plStack_f8);
    return plVar8;
  }
  *extraout_x8 = lVar6;
  pcStack_c8 = FUN_105989560;
  puStack_e0 = puVar4;
  pcStack_d8 = (code *)plVar5;
  func_0x000107c60d88(lVar6 + 0x18);
  if ((*(uint *)(lVar6 + 0x88) >> 1 & 1) == 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(uint *)(lVar6 + 0x88) = *(uint *)(lVar6 + 0x88) | 2;
    plVar5 = (long *)(lVar6 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar5);
    return plVar5;
  }
  FUN_10538ceb0(1);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003b7a30);
  (*pcVar3)();
}



/* Entry: 105989560; end: 10598957f;  */

long FUN_105989560(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lStack_38;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    plVar5 = (long *)0x3;
    FUN_10538ceb0();
    lVar4 = *plVar5;
    *plVar5 = 0;
    lStack_38 = lVar4;
    FUN_105989858(lVar4);
    func_0x00010538d0f8(&lStack_38);
    return lVar4;
  }
  *param_1 = lVar4;
  func_0x000107c60d88(lVar4 + 0x18);
  if ((*(uint *)(lVar4 + 0x88) >> 1 & 1) == 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(uint *)(lVar4 + 0x88) = *(uint *)(lVar4 + 0x88) | 2;
    lVar4 = lVar4 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar4);
    return lVar4;
  }
  FUN_10538ceb0(1);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003b7a30);
  (*pcVar3)();
}



/* Entry: 105989580; end: 1059895d3;  */

undefined8 FUN_105989580(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  *param_1 = 0;
  uStack_28 = uVar1;
  FUN_105989858(uVar1);
  func_0x00010538d0f8(&uStack_28);
  return uVar1;
}



/* Entry: 1059895d4; end: 105989637;  */

undefined8 * FUN_1059895d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  puVar1[2] = 0;
  puVar1[3] = 0x32aaaba7;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3cb0b1bb;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *puVar1 = &PTR_FUN_1108c5a48;
  puVar1[1] = 0;
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 105989638; end: 10598963b;  */

void FUN_105989638(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10598963c; end: 10598964f;  */

void FUN_10598963c(void)

{
  func_0x0001005f1a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105989650; end: 10598965b;  */

void FUN_105989650(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105989658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10598965c; end: 10598970f;  */

ulong * FUN_10598965c(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [8];
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    func_0x0001005ee0f0();
    plVar6 = (long *)*param_1;
    if (((uVar4 & 1) == 0) && (0 < plVar6[1])) {
      __ZNSt3__115future_categoryEv();
      __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_48,4,uVar4);
      FUN_10538cac0(auStack_28,auStack_48);
      __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar6,auStack_28);
      __ZNSt13exception_ptrD1Ev(auStack_28);
      __ZNSt3__112future_errorD1Ev(auStack_48);
      plVar6 = (long *)*param_1;
    }
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return param_1;
}



/* Entry: 105989710; end: 10598979f;  */

long * FUN_105989710(long *param_1)

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



/* Entry: 1059897a0; end: 1059897bb;  */

void FUN_1059897a0(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_38 [40];
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar3 = 3;
    unaff_x30 = FUN_1059897bc;
    FUN_10538ceb0();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x30) = lVar3 + 0x18;
  *(undefined1 *)((long)register0x00000008 + -0x28) = 1;
  __ZNSt3__15mutex4lockEv();
  lVar4 = lVar3;
  func_0x0001005ee0f0();
  if ((int)lVar4 != 0) {
    FUN_10538ceb0(2);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10598982c);
    (*pcVar2)();
  }
  uVar1 = *param_2;
  *(uint *)(lVar3 + 0x88) = *(uint *)(lVar3 + 0x88) | 5;
  *(undefined4 *)(lVar3 + 0x8c) = uVar1;
  __ZNSt3__118condition_variable10notify_allEv(lVar3 + 0x58);
  func_0x0001000df5a0((undefined1 *)((long)register0x00000008 + -0x30));
  return;
}



/* Entry: 1059897bc; end: 10598983b;  */

void FUN_1059897bc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x18;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = param_1;
  func_0x0001005ee0f0();
  if ((int)lVar3 == 0) {
    uVar1 = *param_2;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
    *(undefined4 *)(param_1 + 0x8c) = uVar1;
    __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
    func_0x0001000df5a0(&lStack_30);
    return;
  }
  FUN_10538ceb0(2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10598982c);
  (*pcVar2)();
}



/* Entry: 10598983c; end: 105989857;  */

void FUN_10598983c(void)

{
  return;
}



/* Entry: 105989858; end: 105989903;  */

undefined4 FUN_105989858(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_1 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar3 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_48);
  if (lVar3 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
    func_0x0001000df5a0(&lStack_40);
    return uVar1;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1059898e4);
  (*pcVar2)();
}



/* Entry: 105989904; end: 105989927;  */

void FUN_105989904(void)

{
  long unaff_x21;
  undefined8 *in_stack_00000020;
  
                    /* WARNING: Could not recover jumptable at 0x000105989910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_00000020)(unaff_x21 + 8);
  return;
}



/* Entry: 105989928; end: 10598997b;  */

void FUN_105989928(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000105989438(&uStack_40,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  return;
}



/* Entry: 10598997c; end: 1059899ef;  */

void FUN_10598997c(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_105989928(auStack_48);
  pcStack_28 = FUN_105987188;
  puStack_30 = auStack_48;
  func_0x0001003a91d4(&UNK_10f3176f9);
  func_0x0001003a9204(param_1);
  func_0x000100100fec(auStack_48);
  return;
}



/* Entry: 1059899f0; end: 105989a23;  */

undefined8 * FUN_1059899f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5a90;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x000100561eb4();
  return param_1;
}



/* Entry: 105989a24; end: 105989be3;  */

void FUN_105989a24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_158 [256];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  func_0x0001005ff708(param_2,&uStack_48);
  if ((int)param_2 == 0) {
    plVar4 = (long *)*param_4;
    func_0x000105989e1c();
    func_0x000105989de0();
    func_0x00010002b838(&puStack_1a8,"Failed to serialize message");
    func_0x000105989dc8();
    func_0x000105989db4(*(undefined8 *)(*plVar4 + 0x30));
    func_0x000105989dd8();
    func_0x000105989e04();
    func_0x000105989dfc();
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010002b838(auStack_158,"PushNotificationService");
    uVar1 = *param_4;
    lVar2 = param_4[1];
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_1108c5ac0;
    uStack_190 = uVar1;
    lStack_188 = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x000105989e0c();
      } while (extraout_w10 != 0);
      do {
        func_0x000105989e0c();
      } while (extraout_w10_00 != 0);
    }
    puVar3[4] = uVar1;
    puVar3[5] = lVar2;
    func_0x000100601d1c(&uStack_190);
    puStack_1a8 = puVar3 + 3;
    *puStack_1a8 = &PTR_DAT_1108c5b10;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_190 = 0;
    lStack_188 = 0;
    puStack_1a0 = puVar3;
    func_0x000100601d8c(uVar5,"/snapchat.notification.PushNotificationService/AckNotification",
                        &uStack_48,auStack_158,param_3,&puStack_1a8,&uStack_190);
    func_0x000100608514(&uStack_190);
    func_0x00010061cd5c(&puStack_1a8);
    FUN_105989d8c(&uStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  }
  func_0x000100601aa4(&uStack_48);
  return;
}



/* Entry: 105989be4; end: 105989c1f;  */

void FUN_105989be4(void)

{
  func_0x000105989e28();
  return;
}



/* Entry: 105989c20; end: 105989c23;  */

void FUN_105989c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5ac0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105989c24; end: 105989c37;  */

void FUN_105989c24(void)

{
  FUN_105989d7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105989c38; end: 105989c4b;  */

void FUN_105989c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105989c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105989c4c; end: 105989c5f;  */

void FUN_105989c4c(void)

{
  func_0x000100850ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105989c60; end: 105989d7b;  */

void FUN_105989c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  long *plVar1;
  undefined1 auStack_198 [80];
  long *plStack_148;
  long lStack_140;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = 0;
  ppuStack_48 = &PTR_FUN_1108c6c30;
  func_0x00010084f180(param_3,&ppuStack_48);
  if ((int)param_3 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    func_0x000105989e1c();
    func_0x000105989de0();
    func_0x00010002b838(auStack_198,"Failed to deserialize response");
    func_0x000105989dc8();
    func_0x000105989db4(*(undefined8 *)(*plVar1 + 0x30));
    func_0x000105989dd8();
    func_0x000105989e04();
    func_0x000105989dfc();
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    lStack_140 = *(long *)(param_1 + 0x10);
    plStack_148 = plVar1;
    if (lStack_140 != 0) {
      do {
        func_0x000105989e0c();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x38))();
    FUN_1059701b8(&plStack_148);
  }
  FUN_1059918f4(&ppuStack_48);
  return;
}



/* Entry: 105989d7c; end: 105989d8b;  */

void FUN_105989d7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5ac0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105989d8c; end: 105989db3;  */

long FUN_105989d8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105989db4; end: 105989e3b;  */

void FUN_105989db4(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000105989dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 105989e3c; end: 105989e6f;  */

undefined8 * FUN_105989e3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5b78;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x000100561eb4();
  return param_1;
}



/* Entry: 105989e70; end: 10598a077;  */

void FUN_105989e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_158 [104];
  undefined4 uStack_f0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_88;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  func_0x0001005ff708(param_2,&uStack_48);
  if ((int)param_2 == 0) {
    plVar4 = (long *)*param_4;
    _bzero(auStack_158,0xf0);
    uStack_f0 = 0x3f800000;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010002b838(&puStack_1a8,"Failed to serialize message");
    func_0x000105394120(&uStack_190,0xd,&puStack_1a8);
    func_0x00010598a2b4(*(undefined8 *)(*plVar4 + 0x30));
    func_0x000100601c8c(&uStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1a8);
    func_0x00010060867c(auStack_158);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010002b838(auStack_158,&UNK_10f3176fc);
    uVar1 = *param_4;
    lVar2 = param_4[1];
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_1108c5ba8;
    uStack_190 = uVar1;
    lStack_188 = lVar2;
    if (lVar2 != 0) {
      do {
        FUN_10598a290();
      } while (extraout_w10 != 0);
      do {
        FUN_10598a290();
      } while (extraout_w10_00 != 0);
    }
    puVar3[4] = uVar1;
    puVar3[5] = lVar2;
    func_0x000100601d1c(&uStack_190);
    puStack_1a8 = puVar3 + 3;
    *puStack_1a8 = &PTR_DAT_1108c5bf8;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_190 = 0;
    lStack_188 = 0;
    puStack_1a0 = puVar3;
    func_0x000100601d8c(uVar5,&DAT_10f317720,&uStack_48,auStack_158,param_3,&puStack_1a8,&uStack_190
                       );
    func_0x000100608514(&uStack_190);
    func_0x00010061cd5c(&puStack_1a8);
    FUN_10598a268(&uStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  }
  func_0x000100601aa4(&uStack_48);
  return;
}



/* Entry: 10598a078; end: 10598a0b3;  */

void FUN_10598a078(void)

{
  func_0x00010598a2a0();
  return;
}



/* Entry: 10598a0b4; end: 10598a0b7;  */

void FUN_10598a0b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5ba8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10598a0b8; end: 10598a0cb;  */

void FUN_10598a0b8(void)

{
  FUN_10598a258();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598a0cc; end: 10598a0df;  */

void FUN_10598a0cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010598a0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10598a0e0; end: 10598a0f3;  */

void FUN_10598a0e0(void)

{
  func_0x000100850ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598a0f4; end: 10598a257;  */

void FUN_10598a0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  long *plVar1;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [56];
  long *plStack_150;
  long lStack_148;
  undefined4 uStack_e8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_80;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  
  ppuStack_50 = &PTR_FUN_1108c8ce8;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x00010084f180(param_3,&ppuStack_50);
  if ((int)param_3 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    _bzero(&plStack_150,0xf0);
    uStack_e8 = 0x3f800000;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_80 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010002b838(auStack_1a0,"Failed to deserialize response");
    func_0x000105394120(auStack_188,0xd,auStack_1a0);
    func_0x00010598a2b4(*(undefined8 *)(*plVar1 + 0x30));
    func_0x000100601c8c(auStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
    func_0x00010060867c(&plStack_150);
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    lStack_148 = *(long *)(param_1 + 0x10);
    plStack_150 = plVar1;
    if (lStack_148 != 0) {
      do {
        FUN_10598a290();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x38))();
    func_0x0001059861f8(&plStack_150);
  }
  FUN_10599c9e0(&ppuStack_50);
  return;
}



/* Entry: 10598a258; end: 10598a267;  */

void FUN_10598a258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5ba8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10598a268; end: 10598a28f;  */

long FUN_10598a268(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10598a290; end: 10598a2bf;  */

void FUN_10598a290(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10598a2c0; end: 10598a383;  */

undefined8 * FUN_10598a2c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1108c5c60;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010598a898(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010598a8cc(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010598a900(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010598a93c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 10598a384; end: 10598a3b7;  */

long FUN_10598a384(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_10598a3b8(param_1);
  return param_1;
}



/* Entry: 10598a3b8; end: 10598a40f;  */

void FUN_10598a3b8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1059938dc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10598fe6c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10598afa4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10599309c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598a410; end: 10598a413;  */

long FUN_10598a410(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_10598a3b8(param_1);
  return param_1;
}



/* Entry: 10598a414; end: 10598a427;  */

void FUN_10598a414(void)

{
  FUN_10598a384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598a428; end: 10598a433;  */

undefined ** FUN_10598a428(void)

{
  return &PTR_DAT_1108c5ca0;
}



/* Entry: 10598a434; end: 10598a4b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10598a434(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_105993960(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10598fef4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10598b030(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_105993120(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10598a4b8; end: 10598a63f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10598a4b8(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x1;
    func_0x00010598a9a0(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010598a9a0(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010598a9a0(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010598a9a0(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10598a640; end: 10598a69f;  */

void FUN_10598a640(void)

{
  func_0x000105993aac();
  FUN_10598a978();
  return;
}



/* Entry: 10598a6a0; end: 10598a6a3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10598a6a0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00010598a898(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_105993b64();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00010598a8cc(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1059900e0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x00010598a900(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10598b2e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010598a93c(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
      else {
        FUN_10599337c();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10598a6a4; end: 10598a7d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10598a6a4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00010598a898(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_105993b64();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00010598a8cc(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1059900e0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x00010598a900(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10598b2e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010598a93c(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
      else {
        FUN_10599337c();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10598a7d4; end: 10598a807;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10598a7d4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010598a9a8();
  FUN_10598a434();
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00010598a898(uVar3,*(undefined8 *)(unaff_x19 + 0x18));
        *(ulong *)(unaff_x20 + 0x18) = uVar2;
      }
      else {
        FUN_105993b64();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00010598a8cc(uVar3,*(undefined8 *)(unaff_x19 + 0x20));
        *(ulong *)(unaff_x20 + 0x20) = uVar2;
      }
      else {
        FUN_1059900e0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x00010598a900(uVar3,*(undefined8 *)(unaff_x19 + 0x28));
        *(ulong *)(unaff_x20 + 0x28) = uVar2;
      }
      else {
        FUN_10598b2e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) {
        func_0x00010598a93c(uVar3,*(undefined8 *)(unaff_x19 + 0x30));
        *(ulong *)(unaff_x20 + 0x30) = uVar3;
      }
      else {
        FUN_10599337c();
      }
    }
  }
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
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



/* Entry: 10598a808; end: 10598a847;  */

undefined1  [16] FUN_10598a808(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x38);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x38);
  return auVar7;
}



/* Entry: 10598a848; end: 10598a977;  */

void FUN_10598a848(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_1108c5c60;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10598a978; end: 10598a9cb;  */

long FUN_10598a978(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10598a9cc; end: 10598a9fb;  */

long FUN_10598a9cc(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10598a9fc; end: 10598a9ff;  */

long FUN_10598a9fc(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10598aa00; end: 10598aa13;  */

void FUN_10598aa00(void)

{
  FUN_10598a9cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598aa14; end: 10598aa1f;  */

undefined ** FUN_10598aa14(void)

{
  return &PTR_DAT_1108c5d50;
}


