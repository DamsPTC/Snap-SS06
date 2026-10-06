/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0071a140; end: 0071a19f;  */

long FUN_0071a140(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lStack_30;
  
  FUN_0071a4d8();
  func_0x0071a534();
  lVar1 = lStack_30;
  FUN_0071a1f4();
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x0071a540();
  func_0x0071a50c();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0071a540();
  func_0x0071a5b4();
  *(undefined8 *)(lVar1 + 8) = unaff_x20;
  lVar2 = lVar1;
  FUN_0071a1c8();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 0071a1a0; end: 0071a1c7;  */

long FUN_0071a1a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0071a1c8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0071a1c8; end: 0071a1f3;  */

void FUN_0071a1c8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x30);
    return;
  }
  FUN_0040cee8();
  func_0x0071a4f4();
  func_0x0071a244();
  return;
}



/* Entry: 0071a1f4; end: 0071a21b;  */

void FUN_0071a1f4(void)

{
  func_0x0071a4f4();
  func_0x0071a244();
  return;
}



/* Entry: 0071a21c; end: 0071a21f;  */

void FUN_0071a21c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f340;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0071a220; end: 0071a233;  */

void FUN_0071a220(void)

{
  FUN_0071a318();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071a234; end: 0071a24b;  */

void FUN_0071a234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0071a23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0071a24c; end: 0071a2b3;  */

void FUN_0071a24c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0071a560();
  *param_1 = extraout_x8;
  func_0x0071a270();
  return;
}



/* Entry: 0071a2b4; end: 0071a2b7;  */

void FUN_0071a2b4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0071a560();
  *param_1 = extraout_x8;
  _CFRelease(param_1[1]);
  return;
}



/* Entry: 0071a2b8; end: 0071a2cb;  */

void FUN_0071a2b8(void)

{
  FUN_0071a2ec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071a2cc; end: 0071a2eb;  */

void FUN_0071a2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFDataGetBytePtr_00999a18)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 0071a2ec; end: 0071a317;  */

void FUN_0071a2ec(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0071a560();
  *param_1 = extraout_x8;
  _CFRelease(param_1[1]);
  return;
}



/* Entry: 0071a318; end: 0071a337;  */

void FUN_0071a318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f340;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0071a338; end: 0071a35f;  */

long FUN_0071a338(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0071a360; end: 0071a3bf;  */

long FUN_0071a360(void)

{
  undefined1 in_ZR;
  long lVar1;
  long *unaff_x19;
  long lStack_30;
  
  FUN_0071a4d8();
  func_0x0071a534();
  lVar1 = lStack_30;
  FUN_0071a3c0();
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x0071a540();
  func_0x0071a50c();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0071a540();
  func_0x0071a5b4();
  func_0x0071a4f4();
  FUN_0071a3e8();
  return lVar1;
}



/* Entry: 0071a3c0; end: 0071a3e7;  */

void FUN_0071a3c0(void)

{
  func_0x0071a4f4();
  FUN_0071a3e8();
  return;
}



/* Entry: 0071a3e8; end: 0071a3ef;  */

void FUN_0071a3e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  uVar1 = *param_2;
  func_0x0071a560();
  *param_1 = extraout_x8;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  _CFRetain(uVar1);
  return;
}



/* Entry: 0071a3f0; end: 0071a41b;  */

void FUN_0071a3f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  
  func_0x0071a560();
  *param_1 = extraout_x8;
  param_1[1] = param_2;
  param_1[2] = param_2;
  _CFRetain(param_2);
  return;
}



/* Entry: 0071a41c; end: 0071a47b;  */

long FUN_0071a41c(void)

{
  undefined1 in_ZR;
  long lVar1;
  long *unaff_x19;
  long lStack_30;
  
  FUN_0071a4d8();
  func_0x0071a534();
  lVar1 = lStack_30;
  FUN_0071a47c();
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x0071a540();
  func_0x0071a50c();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0071a540();
  func_0x0071a5b4();
  func_0x0071a4f4();
  FUN_0071a4a4();
  return lVar1;
}



/* Entry: 0071a47c; end: 0071a4a3;  */

void FUN_0071a47c(void)

{
  func_0x0071a4f4();
  FUN_0071a4a4();
  return;
}



/* Entry: 0071a4a4; end: 0071a4ab;  */

void FUN_0071a4a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  uVar1 = *param_2;
  func_0x0071a560();
  *param_1 = extraout_x8;
  param_1[1] = uVar1;
  param_1[2] = 0;
  _CFRetain(uVar1);
  return;
}



/* Entry: 0071a4ac; end: 0071a4d7;  */

void FUN_0071a4ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  
  func_0x0071a560();
  *param_1 = extraout_x8;
  param_1[1] = param_2;
  param_1[2] = 0;
  _CFRetain(param_2);
  return;
}



/* Entry: 0071a4d8; end: 0071a5bb;  */

void FUN_0071a4d8(void)

{
  return;
}



/* Entry: 0071a5bc; end: 0071a67b;  */

void FUN_0071a5bc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_0071d1e4();
  lVar3 = param_2;
  func_0x0071d9f4();
  do {
    lVar5 = param_2 + -0xff8;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x24;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x49;
        }
        param_1[4] = lVar3;
        return;
      }
      func_0x0071d9e0();
      param_2 = param_2 + 0x38;
      lVar5 = lVar5 + 0x38;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 0071a67c; end: 0071ae3b;  */

undefined1 ** FUN_0071a67c(undefined1 **param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined1 *puVar9;
  undefined1 auStack_120 [24];
  undefined4 auStack_108 [2];
  long lStack_100;
  long lStack_f8;
  undefined1 *apuStack_f0 [3];
  undefined1 *apuStack_d8 [3];
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  int aiStack_80 [6];
  undefined1 *apuStack_68 [5];
  
  if (param_1[0x1a] < param_1[5]) {
    FUN_00425cb4(apuStack_68,&UNK_0091cf94);
    FUN_0071dac0();
LAB_0071ad2c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x71ad30);
    (*pcVar1)();
  }
  ppuVar4 = param_1;
  FUN_0071ae3c(param_1,auStack_108);
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    if (*(char *)((long)param_1 + 0xbf) < '\0') {
      if (param_1[0x16] != (undefined1 *)0x0) goto LAB_0071a6d4;
    }
    else if (*(char *)((long)param_1 + 0xbf) != '\0') {
LAB_0071a6d4:
      func_0x0071d768();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_120,param_1 + 0x15);
      FUN_0071f370(ppuVar4,auStack_120,0);
      func_0x0071d9c4();
      ppuVar4 = param_1 + 0x15;
      func_0x0048d000();
    }
  }
  switch(auStack_108[0]) {
  case 1:
    puStack_98 = (undefined1 *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    ppuVar4 = apuStack_68;
    FUN_0071de14(ppuVar4,7);
    func_0x0071d768();
    func_0x0071d6b8();
    func_0x0071da1c();
    do {
      iVar2 = (int)ppuVar4;
      func_0x0071d7f8();
      if (iVar2 == 0) {
code_r0x0071ab90:
        FUN_00425cb4(&puStack_c0,&UNK_0091d042);
        func_0x0071d7c8();
code_r0x0071abac:
        ppuVar4 = &puStack_c0;
code_r0x0071ac4c:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
code_r0x0071ac50:
        ppuVar8 = (undefined1 **)0x0;
        goto code_r0x0071ac54;
      }
      uVar5 = 1;
      while (((uVar5 & 1) != 0 && (aiStack_80[0] == 0xf))) {
        func_0x0071d7f8();
      }
      if ((uVar5 & 1) == 0) goto code_r0x0071ab90;
      if (aiStack_80[0] == 2) {
        uVar5 = uStack_90;
        if (-1 < (long)uStack_88) {
          uVar5 = uStack_88 >> 0x38;
        }
        if ((uVar5 == 0) || ((*(byte *)((long)param_1 + 0xc1) & 1) != 0)) break;
      }
      if ((long)uStack_88 < 0) {
        *puStack_98 = 0;
        uStack_90 = 0;
      }
      else {
        puStack_98 = (undefined1 *)((ulong)puStack_98 & 0xffffffffffffff00);
        uStack_88 = uStack_88 & 0xffffffffffffff;
      }
      if (aiStack_80[0] == 6) {
        if (*(char *)((long)param_1 + 0xc4) != '\x01') goto code_r0x0071ab90;
        FUN_0071de14(&puStack_c0,0);
        ppuVar4 = param_1;
        FUN_0071bab4(param_1,aiStack_80,&puStack_c0);
        if (((ulong)ppuVar4 & 1) == 0) {
          func_0x0071d894();
        }
        else {
          FUN_0071e480(apuStack_d8,&puStack_c0);
          FUN_004575b8(&puStack_98,apuStack_d8);
          func_0x0071d940();
        }
        ppuVar8 = &puStack_c0;
        func_0x0071e360();
        if (((ulong)ppuVar4 & 1) != 0) goto code_r0x0071a9bc;
        goto code_r0x0071ac50;
      }
      if (aiStack_80[0] != 5) goto code_r0x0071ab90;
      ppuVar8 = param_1;
      FUN_0071b6ec(param_1,aiStack_80,&puStack_98);
      if (((ulong)ppuVar8 & 1) == 0) {
        func_0x0071d894();
        goto code_r0x0071ac50;
      }
code_r0x0071a9bc:
      if (((long)uStack_88 < 0) && (uStack_90 >> 0x1e != 0)) {
        FUN_00425cb4(&puStack_c0,&UNK_0091d249);
        FUN_0071dac0(&puStack_c0);
        goto LAB_0071ad2c;
      }
      if (*(char *)((long)param_1 + 199) == '\x01') {
        func_0x0071d768();
        FUN_0071f110();
        if ((int)ppuVar8 == 0) goto code_r0x0071a9ec;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (apuStack_d8,&UNK_0091d25b,&puStack_98);
        FUN_0052fce8(&puStack_c0,apuStack_d8,"\'");
        func_0x0071d940();
        func_0x0071d7c8();
        goto code_r0x0071abac;
      }
code_r0x0071a9ec:
      func_0x0071d7dc();
      uVar3 = 0;
      if ((int)puStack_c0 == 0xe) {
        uVar3 = (uint)ppuVar8;
      }
      if ((uVar3 & 1) == 0) {
        FUN_00425cb4(apuStack_d8,&UNK_0091cff4);
        func_0x0071d7c8();
        ppuVar4 = apuStack_d8;
        goto code_r0x0071ac4c;
      }
      func_0x0071d768();
      FUN_0071f0dc();
      FUN_0071cd9c(param_1,ppuVar8);
      ppuVar4 = param_1;
      FUN_0071a67c();
      ppuVar8 = param_1;
      FUN_0071cd34();
      iVar2 = (int)ppuVar8;
      if (((ulong)ppuVar4 & 1) == 0) {
        func_0x0071d894();
        goto code_r0x0071ac50;
      }
      func_0x0071d7f8();
      if (((iVar2 == 0) || (0xf < (uint)apuStack_d8[0])) ||
         ((1 << (ulong)((uint)apuStack_d8[0] & 0x1f) & 0xa004U) == 0)) {
        FUN_00425cb4(apuStack_f0,&UNK_0091d019);
        func_0x0071d7c8();
        ppuVar4 = apuStack_f0;
        goto code_r0x0071ac4c;
      }
      ppuVar4 = (undefined1 **)((long)&MACH_HEADER.magic + 1);
      while ((((ulong)ppuVar4 & 1) != 0 && ((uint)apuStack_d8[0] == 0xf))) {
        func_0x0071d7f8();
      }
    } while ((uint)apuStack_d8[0] != 2);
    ppuVar8 = (undefined1 **)((long)&MACH_HEADER.magic + 1);
code_r0x0071ac54:
    func_0x0071d800();
    ppuVar4 = &puStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    goto code_r0x0071ac60;
  case 2:
  case 4:
  case 0xd:
    if (*(char *)((long)param_1 + 0xc3) != '\x01') goto LAB_0071a76c;
    param_1[0x11] = param_1[0x11] + -1;
    func_0x0071d850();
    func_0x0071d768();
    func_0x0071d6b8();
    puVar7 = param_1[0x11];
    puVar9 = param_1[0xf];
    func_0x0071d748(puVar7 + ~(ulong)puVar9);
    puVar7 = puVar7 + -(long)puVar9;
    goto code_r0x0071ab80;
  case 3:
    FUN_0071de14(apuStack_68,6);
    func_0x0071d768();
    func_0x0071d6b8();
    iVar2 = 0;
    func_0x0071da1c();
    do {
      ppuVar4 = param_1;
      FUN_0071b530();
      if (((param_1[0x11] != param_1[0x10]) && (*param_1[0x11] == ']')) &&
         ((iVar2 == 0 ||
          ((*(char *)((long)param_1 + 0xc1) == '\x01' &&
           ((*(byte *)((long)param_1 + 0xc3) & 1) == 0)))))) {
        func_0x0071d7dc();
        break;
      }
      func_0x0071d768();
      FUN_0071ed48();
      FUN_0071cd9c(param_1,ppuVar4);
      ppuVar8 = param_1;
      FUN_0071a67c();
      ppuVar4 = param_1;
      FUN_0071cd34();
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar4 = param_1;
        FUN_0071ba4c(param_1,4);
code_r0x0071abf0:
        ppuVar8 = (undefined1 **)0x0;
        goto code_r0x0071ac00;
      }
      func_0x0071d7dc();
      iVar2 = iVar2 + 1;
      while( true ) {
        if ((((ulong)ppuVar4 & 1) == 0) || ((int)puStack_c0 != 0xf)) break;
        func_0x0071d7dc();
      }
      if (((uint)ppuVar4 & (uint)((int)puStack_c0 == 0xd || (int)puStack_c0 == 4)) == 0) {
        FUN_00425cb4(aiStack_80,&UNK_0091d064);
        func_0x0071bba8(param_1,aiStack_80,&puStack_c0,4);
        ppuVar4 = (undefined1 **)aiStack_80;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        goto code_r0x0071abf0;
      }
    } while ((int)puStack_c0 != 4);
    ppuVar8 = (undefined1 **)((long)&MACH_HEADER.magic + 1);
code_r0x0071ac00:
    func_0x0071d800();
code_r0x0071ac60:
    func_0x0071d768();
    ppuVar4[4] = param_1[0x11] + -(long)param_1[0xf];
    goto code_r0x0071ac74;
  case 5:
    puStack_c0 = (undefined1 *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuVar8 = param_1;
    FUN_0071b6ec(param_1,auStack_108,&puStack_c0);
    if (((ulong)ppuVar8 & 1) != 0) {
      ppuVar4 = apuStack_68;
      FUN_0071e134(ppuVar4,&puStack_c0);
      func_0x0071d768();
      func_0x0071d6b8();
      puVar7 = param_1[0xf];
      func_0x0071d748(lStack_100 - (long)puVar7);
      ppuVar4[4] = (undefined1 *)(lStack_f8 - (long)puVar7);
      func_0x0071d800();
    }
    ppuVar4 = &puStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    goto code_r0x0071ac74;
  case 6:
    func_0x0071d850();
    ppuVar4 = param_1;
    FUN_0071bab4(param_1,auStack_108,apuStack_68);
    ppuVar8 = ppuVar4;
    if (((ulong)ppuVar4 & 1) != 0) goto code_r0x0071ab14;
    goto code_r0x0071ab38;
  case 7:
    ppuVar4 = apuStack_68;
    FUN_0071e18c(ppuVar4,1);
    ppuVar8 = (undefined1 **)((long)&MACH_HEADER.magic + 1);
code_r0x0071ab14:
    func_0x0071d768();
    func_0x0071d6b8();
    puVar7 = param_1[0xf];
    func_0x0071d748(lStack_100 - (long)puVar7);
    ppuVar4[4] = (undefined1 *)(lStack_f8 - (long)puVar7);
code_r0x0071ab38:
    func_0x0071d800();
    goto code_r0x0071ac74;
  case 8:
    ppuVar4 = apuStack_68;
    FUN_0071e18c(ppuVar4,0);
    goto code_r0x0071ab60;
  case 9:
    func_0x0071d850();
    goto code_r0x0071ab60;
  case 10:
    uVar6 = 0x7ff8000000000000;
    break;
  case 0xb:
    uVar6 = 0x7ff0000000000000;
    break;
  case 0xc:
    uVar6 = 0xfff0000000000000;
    break;
  default:
LAB_0071a76c:
    func_0x0071d768();
    puVar7 = param_1[0xf];
    func_0x0071d748(lStack_100 - (long)puVar7);
    ppuVar4[4] = (undefined1 *)(lStack_f8 - (long)puVar7);
    FUN_00425cb4(apuStack_68,&UNK_0091cfb8);
    func_0x0071d8c4(param_1,apuStack_68,auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_68);
    return (undefined1 **)0x0;
  }
  ppuVar4 = apuStack_68;
  FUN_0071df80(uVar6);
code_r0x0071ab60:
  func_0x0071d768();
  func_0x0071d6b8();
  puVar7 = param_1[0xf];
  func_0x0071d748(lStack_100 - (long)puVar7);
  puVar7 = (undefined1 *)(lStack_f8 - (long)puVar7);
code_r0x0071ab80:
  ppuVar4[4] = puVar7;
  func_0x0071d800();
  ppuVar8 = (undefined1 **)((long)&MACH_HEADER.magic + 1);
code_r0x0071ac74:
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    param_1[0x12] = param_1[0x11];
    *(undefined1 *)(param_1 + 0x14) = 0;
    func_0x0071d768();
    param_1[0x13] = (undefined1 *)ppuVar4;
  }
  return ppuVar8;
}



/* Entry: 0071ae3c; end: 0071ae93;  */

ulong FUN_0071ae3c(ulong param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *extraout_x8;
  char *extraout_x8_00;
  char *pcVar7;
  char *extraout_x9;
  char *extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    do {
      uVar4 = param_1;
      FUN_0071b094(param_1,param_2);
    } while (*param_2 == 0xf);
    return uVar4;
  }
  uVar4 = param_1;
  FUN_0071b530();
  iVar3 = (int)uVar4;
  pcVar5 = *(char **)(param_1 + 0x80);
  pcVar8 = *(char **)(param_1 + 0x88);
  *(char **)(param_2 + 2) = pcVar8;
  if (pcVar8 == pcVar5) {
LAB_0071b15c:
    *param_2 = 0;
    goto LAB_0071b368;
  }
  pcVar7 = pcVar8 + 1;
  *(char **)(param_1 + 0x88) = pcVar7;
  cVar1 = *pcVar8;
  switch(cVar1) {
  case '\"':
    *param_2 = 5;
    do {
      while( true ) {
        bVar2 = pcVar7 == pcVar5;
        if (bVar2) goto LAB_0071b3f4;
        func_0x0071d970();
        pcVar5 = extraout_x8_00;
        pcVar7 = extraout_x9_00;
        if (!bVar2) break;
        if (extraout_x9_00 != extraout_x8_00) {
          pcVar7 = (char *)(extraout_x10_00 + 2);
          *(char **)(param_1 + 0x88) = pcVar7;
        }
      }
    } while (extraout_w11_00 != 0x22);
    goto LAB_0071b368;
  case '#':
  case '$':
  case '%':
  case '&':
  case '(':
  case ')':
  case '*':
  case '.':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case '@':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
    break;
  case '\'':
    if (*(char *)(param_1 + 0xc5) != '\x01') break;
    *param_2 = 5;
    do {
      while( true ) {
        bVar2 = pcVar7 == pcVar5;
        if (bVar2) goto LAB_0071b3f4;
        func_0x0071d970();
        pcVar5 = extraout_x8;
        pcVar7 = extraout_x9;
        if (!bVar2) break;
        if (extraout_x9 != extraout_x8) {
          pcVar7 = (char *)(extraout_x10 + 2);
          *(char **)(param_1 + 0x88) = pcVar7;
        }
      }
    } while (extraout_w11 != 0x27);
    goto LAB_0071b368;
  case '+':
    func_0x0071d9b8();
    if (iVar3 != 0) {
code_r0x0071b2cc:
      iVar3 = 6;
      goto LAB_0071b334;
    }
    *param_2 = 0xb;
    if ((*(byte *)(param_1 + 200) & 1) != 0) goto code_r0x0071b350;
    break;
  case ',':
    iVar3 = 0xd;
    goto LAB_0071b334;
  case '-':
    func_0x0071d9b8();
    if (iVar3 != 0) goto code_r0x0071b2cc;
    *param_2 = 0xc;
    if (*(char *)(param_1 + 200) == '\x01') goto code_r0x0071b350;
    break;
  case '/':
    *param_2 = 0xf;
    if (pcVar7 != pcVar5) {
      pcVar7 = pcVar8 + 2;
      *(char **)(param_1 + 0x88) = pcVar7;
      if (pcVar8[1] == '*') {
        bVar2 = false;
        do {
          while( true ) {
            pcVar9 = pcVar7 + 1;
            if (pcVar5 <= pcVar9) goto code_r0x0071b3d4;
            *(char **)(param_1 + 0x88) = pcVar9;
            cVar1 = *pcVar7;
            pcVar7 = pcVar9;
            if (cVar1 == '*') break;
            if (cVar1 == '\n') {
              bVar2 = true;
            }
          }
        } while (*pcVar9 != '/');
code_r0x0071b3d4:
        if (pcVar7 != pcVar5) {
          pcVar9 = pcVar7 + 1;
          *(char **)(param_1 + 0x88) = pcVar9;
          if (*pcVar7 == '/') goto code_r0x0071b414;
        }
      }
      else if (pcVar8[1] == '/') {
        do {
          pcVar9 = pcVar7;
          if (pcVar9 == pcVar5) {
            bVar2 = false;
            goto code_r0x0071b414;
          }
          pcVar7 = pcVar9 + 1;
          *(char **)(param_1 + 0x88) = pcVar7;
          if (*pcVar9 == '\n') goto code_r0x0071b404;
        } while (*pcVar9 != '\r');
        if ((pcVar7 == pcVar5) || (*pcVar7 != '\n')) {
code_r0x0071b404:
          bVar2 = false;
          pcVar9 = pcVar7;
        }
        else {
          bVar2 = false;
          *(char **)(param_1 + 0x88) = pcVar9 + 2;
          pcVar9 = pcVar9 + 2;
        }
code_r0x0071b414:
        if (*(char *)(param_1 + 0xd8) == '\x01') {
          if (((*(byte *)(param_1 + 0xa0) & 1) == 0) &&
             (pcVar5 = *(char **)(param_1 + 0x90), *(char **)(param_1 + 0x90) != (char *)0x0)) {
            do {
              if (pcVar5 == pcVar8) {
                bVar10 = true;
                if (!bVar2) {
                  *(undefined1 *)(param_1 + 0xa0) = 1;
                  bVar10 = false;
                }
                goto code_r0x0071b450;
              }
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\n' && cVar1 != '\r');
          }
          bVar10 = true;
code_r0x0071b450:
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                    (&uStack_68,(long)pcVar9 - (long)pcVar8);
          while (pcVar8 != pcVar9) {
            pcVar5 = pcVar8 + 1;
            if (*pcVar8 == '\r') {
              pcVar7 = pcVar9;
              if ((pcVar5 != pcVar9) && (pcVar7 = pcVar8 + 2, pcVar8[1] != '\n')) {
                pcVar7 = pcVar5;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (&uStack_68,10);
              pcVar8 = pcVar7;
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (&uStack_68);
              pcVar8 = pcVar5;
            }
          }
          if (bVar10) {
            FUN_004bab3c(param_1 + 0xa8,&uStack_68);
          }
          else {
            uVar6 = *(undefined8 *)(param_1 + 0x98);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_80,&uStack_68);
            FUN_0071f370(uVar6,auStack_80,1);
            func_0x0071d9c4();
          }
          func_0x0071d8f0();
        }
        goto LAB_0071b368;
      }
    }
    break;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    *param_2 = 6;
    func_0x0071b56c(param_1,0);
    goto LAB_0071b368;
  case ':':
    iVar3 = 0xe;
    goto LAB_0071b334;
  case 'I':
    if (*(char *)(param_1 + 200) == '\x01') {
      *param_2 = 0xb;
code_r0x0071b350:
      pcVar5 = "nfinity";
      uVar6 = 7;
LAB_0071b360:
      uVar4 = param_1;
      func_0x0071b69c(param_1,pcVar5,uVar6);
      if ((uVar4 & 1) != 0) goto LAB_0071b368;
    }
    break;
  case 'N':
    if (*(char *)(param_1 + 200) == '\x01') {
      *param_2 = 10;
      pcVar5 = "aN";
      uVar6 = 2;
      goto LAB_0071b360;
    }
    break;
  default:
    if (cVar1 == '\0') goto LAB_0071b15c;
    if (cVar1 == '[') {
      iVar3 = 3;
    }
    else {
      if (cVar1 != ']') {
        if (cVar1 == 'f') {
          *param_2 = 8;
          pcVar5 = "alse";
          uVar6 = 4;
          goto LAB_0071b360;
        }
        if (cVar1 == 'n') {
          *param_2 = 9;
          pcVar5 = "ull";
        }
        else {
          if (cVar1 != 't') {
            if (cVar1 != '}') {
              if (cVar1 == '{') {
                uVar4 = 1;
                *param_2 = 1;
                goto LAB_0071b36c;
              }
              break;
            }
            iVar3 = 2;
            goto LAB_0071b334;
          }
          *param_2 = 7;
          pcVar5 = "rue";
        }
        uVar6 = 3;
        goto LAB_0071b360;
      }
      iVar3 = 4;
    }
LAB_0071b334:
    *param_2 = iVar3;
LAB_0071b368:
    uVar4 = 1;
    goto LAB_0071b36c;
  }
LAB_0071b3f4:
  uVar4 = 0;
  *param_2 = 0x10;
LAB_0071b36c:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x88);
  return uVar4;
}



/* Entry: 0071ae94; end: 0071b06f;  */

void FUN_0071ae94(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar10 = param_3[1];
  uVar9 = *param_3;
  uVar3 = param_3[2];
  uStack_a8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_a8);
  puVar7 = (undefined8 *)(param_1 + 0x30);
  uStack_90 = param_4;
  func_0x0071d238();
  puVar2 = param_2;
  if (puVar7 != (undefined8 *)0x0) goto LAB_0071afdc;
  if (*(ulong *)(param_1 + 0x50) < 0x49) {
    lVar6 = *(long *)(param_1 + 0x48);
    lVar1 = *(long *)(param_1 + 0x40);
    uVar8 = lVar1 - *(long *)(param_1 + 0x38);
    uVar5 = lVar6 - *(long *)(param_1 + 0x30);
    if (uVar5 <= uVar8) {
      puVar2 = (undefined8 *)((long)uVar5 >> 2);
      if (lVar6 == *(long *)(param_1 + 0x30)) {
        puVar2 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      plStack_50 = (long *)(param_1 + 0x48);
      FUN_0071d558();
      puStack_68 = (undefined8 *)((long)puVar2 + uVar8);
      puStack_58 = puVar2 + (long)param_2;
      puStack_70 = puVar2;
      puStack_60 = (undefined1 *)puStack_68;
      func_0x0071d8e8();
      lStack_80 = param_1 + 0x58;
      uStack_78 = 0x49;
      puStack_88 = puVar2;
      FUN_0071d3f8(&puStack_70);
      puStack_88 = (undefined8 *)0x0;
      puVar7 = *(undefined8 **)(param_1 + 0x40);
      while (puVar4 = *(undefined8 **)(param_1 + 0x38), puVar7 != puVar4) {
        puVar7 = puVar7 + -1;
        puVar2 = puVar7;
        FUN_0071d488(&puStack_70);
      }
      puVar7 = *(undefined8 **)(param_1 + 0x30);
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 **)(param_1 + 0x38) = puStack_68;
      *(undefined8 **)(param_1 + 0x30) = puStack_70;
      *(undefined8 **)(param_1 + 0x48) = puStack_58;
      *(undefined1 **)(param_1 + 0x40) = puStack_60;
      puStack_70 = puVar7;
      puStack_68 = puVar4;
      puStack_60 = (undefined1 *)uVar11;
      puStack_58 = (undefined8 *)uVar12;
      func_0x0071d584(&puStack_88);
      func_0x0071d5b0(&puStack_70);
      goto LAB_0071afdc;
    }
    func_0x0071d8e8();
    if (lVar6 != lVar1) {
      func_0x0071d2d4(param_1 + 0x30);
      puVar2 = puVar7;
      goto LAB_0071afdc;
    }
    FUN_0071d350(param_1 + 0x30);
  }
  else {
    *(ulong *)(param_1 + 0x50) = *(ulong *)(param_1 + 0x50) - 0x49;
  }
  puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = *(undefined8 **)(param_1 + 0x38) + 1;
  FUN_0071d258(param_1 + 0x30);
LAB_0071afdc:
  func_0x0071d20c(param_1 + 0x30);
  puVar2[1] = uVar10;
  *puVar2 = uVar9;
  puVar2[2] = uVar3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2 + 3,&uStack_a8);
  puVar2[6] = uStack_90;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  func_0x0071d9e0();
  return;
}



/* Entry: 0071b070; end: 0071b093;  */

undefined8 FUN_0071b070(long param_1)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8)
  ;
}



/* Entry: 0071b094; end: 0071b52f;  */

undefined8 FUN_0071b094(ulong param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *extraout_x8;
  char *extraout_x8_00;
  char *pcVar8;
  char *extraout_x9;
  char *extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uVar4;
  
  uVar4 = param_1;
  FUN_0071b530();
  iVar3 = (int)uVar4;
  pcVar6 = *(char **)(param_1 + 0x80);
  pcVar9 = *(char **)(param_1 + 0x88);
  *(char **)(param_2 + 2) = pcVar9;
  if (pcVar9 == pcVar6) {
LAB_0071b15c:
    *param_2 = 0;
    goto LAB_0071b368;
  }
  pcVar8 = pcVar9 + 1;
  *(char **)(param_1 + 0x88) = pcVar8;
  cVar1 = *pcVar9;
  switch(cVar1) {
  case '\"':
    *param_2 = 5;
    do {
      while( true ) {
        bVar2 = pcVar8 == pcVar6;
        if (bVar2) goto LAB_0071b3f4;
        func_0x0071d970();
        pcVar6 = extraout_x8_00;
        pcVar8 = extraout_x9_00;
        if (!bVar2) break;
        if (extraout_x9_00 != extraout_x8_00) {
          pcVar8 = (char *)(extraout_x10_00 + 2);
          *(char **)(param_1 + 0x88) = pcVar8;
        }
      }
    } while (extraout_w11_00 != 0x22);
    goto LAB_0071b368;
  case '#':
  case '$':
  case '%':
  case '&':
  case '(':
  case ')':
  case '*':
  case '.':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case '@':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
    break;
  case '\'':
    if (*(char *)(param_1 + 0xc5) != '\x01') break;
    *param_2 = 5;
    do {
      while( true ) {
        bVar2 = pcVar8 == pcVar6;
        if (bVar2) goto LAB_0071b3f4;
        func_0x0071d970();
        pcVar6 = extraout_x8;
        pcVar8 = extraout_x9;
        if (!bVar2) break;
        if (extraout_x9 != extraout_x8) {
          pcVar8 = (char *)(extraout_x10 + 2);
          *(char **)(param_1 + 0x88) = pcVar8;
        }
      }
    } while (extraout_w11 != 0x27);
    goto LAB_0071b368;
  case '+':
    func_0x0071d9b8();
    if (iVar3 != 0) {
code_r0x0071b2cc:
      uVar7 = 6;
      goto LAB_0071b334;
    }
    *param_2 = 0xb;
    if ((*(byte *)(param_1 + 200) & 1) != 0) goto code_r0x0071b350;
    break;
  case ',':
    uVar7 = 0xd;
    goto LAB_0071b334;
  case '-':
    func_0x0071d9b8();
    if (iVar3 != 0) goto code_r0x0071b2cc;
    *param_2 = 0xc;
    if (*(char *)(param_1 + 200) == '\x01') goto code_r0x0071b350;
    break;
  case '/':
    *param_2 = 0xf;
    if (pcVar8 != pcVar6) {
      pcVar8 = pcVar9 + 2;
      *(char **)(param_1 + 0x88) = pcVar8;
      if (pcVar9[1] == '*') {
        bVar2 = false;
        do {
          while( true ) {
            pcVar10 = pcVar8 + 1;
            if (pcVar6 <= pcVar10) goto code_r0x0071b3d4;
            *(char **)(param_1 + 0x88) = pcVar10;
            cVar1 = *pcVar8;
            pcVar8 = pcVar10;
            if (cVar1 == '*') break;
            if (cVar1 == '\n') {
              bVar2 = true;
            }
          }
        } while (*pcVar10 != '/');
code_r0x0071b3d4:
        if (pcVar8 != pcVar6) {
          pcVar10 = pcVar8 + 1;
          *(char **)(param_1 + 0x88) = pcVar10;
          if (*pcVar8 == '/') goto code_r0x0071b414;
        }
      }
      else if (pcVar9[1] == '/') {
        do {
          pcVar10 = pcVar8;
          if (pcVar10 == pcVar6) {
            bVar2 = false;
            goto code_r0x0071b414;
          }
          pcVar8 = pcVar10 + 1;
          *(char **)(param_1 + 0x88) = pcVar8;
          if (*pcVar10 == '\n') goto code_r0x0071b404;
        } while (*pcVar10 != '\r');
        if ((pcVar8 == pcVar6) || (*pcVar8 != '\n')) {
code_r0x0071b404:
          bVar2 = false;
          pcVar10 = pcVar8;
        }
        else {
          bVar2 = false;
          *(char **)(param_1 + 0x88) = pcVar10 + 2;
          pcVar10 = pcVar10 + 2;
        }
code_r0x0071b414:
        if (*(char *)(param_1 + 0xd8) == '\x01') {
          if (((*(byte *)(param_1 + 0xa0) & 1) == 0) &&
             (pcVar6 = *(char **)(param_1 + 0x90), *(char **)(param_1 + 0x90) != (char *)0x0)) {
            do {
              if (pcVar6 == pcVar9) {
                bVar11 = true;
                if (!bVar2) {
                  *(undefined1 *)(param_1 + 0xa0) = 1;
                  bVar11 = false;
                }
                goto code_r0x0071b450;
              }
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\n' && cVar1 != '\r');
          }
          bVar11 = true;
code_r0x0071b450:
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                    (&uStack_68,(long)pcVar10 - (long)pcVar9);
          while (pcVar9 != pcVar10) {
            pcVar6 = pcVar9 + 1;
            if (*pcVar9 == '\r') {
              pcVar8 = pcVar10;
              if ((pcVar6 != pcVar10) && (pcVar8 = pcVar9 + 2, pcVar9[1] != '\n')) {
                pcVar8 = pcVar6;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (&uStack_68,10);
              pcVar9 = pcVar8;
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (&uStack_68);
              pcVar9 = pcVar6;
            }
          }
          if (bVar11) {
            FUN_004bab3c(param_1 + 0xa8,&uStack_68);
          }
          else {
            uVar5 = *(undefined8 *)(param_1 + 0x98);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_80,&uStack_68);
            FUN_0071f370(uVar5,auStack_80,1);
            func_0x0071d9c4();
          }
          func_0x0071d8f0();
        }
        goto LAB_0071b368;
      }
    }
    break;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    *param_2 = 6;
    func_0x0071b56c(param_1,0);
    goto LAB_0071b368;
  case ':':
    uVar7 = 0xe;
    goto LAB_0071b334;
  case 'I':
    if (*(char *)(param_1 + 200) == '\x01') {
      *param_2 = 0xb;
code_r0x0071b350:
      pcVar6 = "nfinity";
      uVar5 = 7;
LAB_0071b360:
      uVar4 = param_1;
      func_0x0071b69c(param_1,pcVar6,uVar5);
      if ((uVar4 & 1) != 0) goto LAB_0071b368;
    }
    break;
  case 'N':
    if (*(char *)(param_1 + 200) == '\x01') {
      *param_2 = 10;
      pcVar6 = "aN";
      uVar5 = 2;
      goto LAB_0071b360;
    }
    break;
  default:
    if (cVar1 == '\0') goto LAB_0071b15c;
    if (cVar1 == '[') {
      uVar7 = 3;
    }
    else {
      if (cVar1 != ']') {
        if (cVar1 == 'f') {
          *param_2 = 8;
          pcVar6 = "alse";
          uVar5 = 4;
          goto LAB_0071b360;
        }
        if (cVar1 == 'n') {
          *param_2 = 9;
          pcVar6 = "ull";
        }
        else {
          if (cVar1 != 't') {
            if (cVar1 != '}') {
              if (cVar1 == '{') {
                uVar5 = 1;
                *param_2 = 1;
                goto LAB_0071b36c;
              }
              break;
            }
            uVar7 = 2;
            goto LAB_0071b334;
          }
          *param_2 = 7;
          pcVar6 = "rue";
        }
        uVar5 = 3;
        goto LAB_0071b360;
      }
      uVar7 = 4;
    }
LAB_0071b334:
    *param_2 = uVar7;
LAB_0071b368:
    uVar5 = 1;
    goto LAB_0071b36c;
  }
LAB_0071b3f4:
  uVar5 = 0;
  *param_2 = 0x10;
LAB_0071b36c:
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x88);
  return uVar5;
}



/* Entry: 0071b530; end: 0071b6eb;  */

void FUN_0071b530(long param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x88);
  while ((pbVar1 != *(byte **)(param_1 + 0x80) &&
         (*pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
    *(byte **)(param_1 + 0x88) = pbVar1 + 1;
    pbVar1 = pbVar1 + 1;
  }
  return;
}



/* Entry: 0071b6ec; end: 0071ba4b;  */

undefined8 FUN_0071b6ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long unaff_x19;
  undefined8 unaff_x21;
  char *pcVar5;
  uint uVar6;
  uint uStack_84;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0071d960();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_3,(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) + -2);
  pcStack_80 = (char *)(*(long *)(unaff_x19 + 8) + 1);
  pcVar5 = (char *)(*(long *)(unaff_x19 + 0x10) + -1);
LAB_0071b73c:
  iVar4 = (int)param_3;
  if (pcStack_80 == pcVar5) {
    return 1;
  }
  cVar2 = *pcStack_80;
  param_3 = unaff_x21;
  if (cVar2 != '\\') {
    pcStack_80 = pcStack_80 + 1;
    if (cVar2 == '\"') {
      return 1;
    }
    goto LAB_0071b768;
  }
  if (pcStack_80 + 1 == pcVar5) {
    func_0x0071d958();
    func_0x0071d754();
    goto LAB_0071b9bc;
  }
  pcVar1 = pcStack_80 + 2;
  cVar2 = pcStack_80[1];
  switch(cVar2) {
  case 'n':
    pcStack_80 = pcVar1;
    break;
  case 'o':
  case 'p':
  case 'q':
  case 's':
LAB_0071b9e4:
    func_0x0071d958();
    func_0x0071d754();
LAB_0071b9bc:
    func_0x0071d8f0();
    return 0;
  case 'r':
    pcStack_80 = pcVar1;
    break;
  case 't':
    pcStack_80 = pcVar1;
    break;
  case 'u':
    func_0x0071d930();
    if (iVar4 == 0) {
      return 0;
    }
    if (uStack_84 >> 10 == 0x36) {
      if ((long)pcVar5 - (long)pcVar1 < 6) {
        func_0x0071d958();
        func_0x0071d90c();
        FUN_0071ae94();
        goto LAB_0071b9bc;
      }
      if ((*pcVar1 != '\\') || (pcStack_80[3] != 'u')) {
        func_0x0071d958();
        func_0x0071d754();
        goto LAB_0071b9bc;
      }
      func_0x0071d930();
      if (iVar4 == 0) {
        return 0;
      }
      uStack_84 = ((uint)uStack_78 & 0x3ff | (uStack_84 & 0x3ff) << 10) + 0x10000;
      pcStack_80 = pcStack_80 + 4;
code_r0x0071b870:
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      FUN_004625e8(&uStack_78,4);
      func_0x0071d78c(uStack_84 & 0x3f | 0x80);
      *(undefined1 *)(extraout_x9 + 3) = extraout_w8;
      func_0x0071d78c(uStack_84 >> 6 & 0x3f | 0x80);
      *(undefined1 *)(extraout_x9_00 + 2) = extraout_w8_00;
      func_0x0071d78c(uStack_84 >> 0xc & 0x3f | 0x80);
      *(undefined1 *)(extraout_x9_01 + 1) = extraout_w8_01;
      uVar6 = uStack_84 >> 0x12 | 0xfffffff0;
code_r0x0071b978:
      func_0x0071d86c();
      *extraout_x8_01 = (char)uVar6;
    }
    else {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      if (uStack_84 < 0x80) {
        FUN_004625e8(&uStack_78,1);
        uVar6 = uStack_84;
        pcStack_80 = pcVar1;
        goto code_r0x0071b978;
      }
      bVar3 = (byte)uStack_84 & 0x3f | 0x80;
      if (uStack_84 < 0x800) {
        FUN_004625e8(&uStack_78,2);
        func_0x0071d86c();
        *(byte *)(extraout_x8 + 1) = bVar3;
        uVar6 = uStack_84 >> 6 | 0xffffffc0;
        pcStack_80 = pcVar1;
        goto code_r0x0071b978;
      }
      if (uStack_84 >> 0x10 == 0) {
        FUN_004625e8(&uStack_78,3);
        func_0x0071d86c();
        *(byte *)(extraout_x8_00 + 2) = bVar3;
        func_0x0071d78c(uStack_84 >> 6 & 0x3f | 0x80);
        *(undefined1 *)(extraout_x9_02 + 1) = extraout_w8_02;
        uVar6 = uStack_84 >> 0xc | 0xffffffe0;
        pcStack_80 = pcVar1;
        goto code_r0x0071b978;
      }
      pcStack_80 = pcVar1;
      if (uStack_84 >> 0x10 < 0x11) goto code_r0x0071b870;
    }
    FUN_004bab3c();
    func_0x0071d8f0();
    goto LAB_0071b73c;
  default:
    pcStack_80 = pcVar1;
    if ((((cVar2 != 'f') && (cVar2 != '/')) && (cVar2 != '\\')) &&
       ((cVar2 != 'b' && (cVar2 != '\"')))) goto LAB_0071b9e4;
  }
LAB_0071b768:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
  goto LAB_0071b73c;
}



/* Entry: 0071ba4c; end: 0071bab3;  */

void FUN_0071ba4c(ulong param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long extraout_x8;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  int aiStack_48 [6];
  
  plVar12 = *(long **)(param_1 + 0x58);
  do {
    uVar13 = param_1;
    FUN_0071b094(param_1,aiStack_48);
    if ((uVar13 & 1) == 0) {
      FUN_0071be7c(param_1 + 0x30,plVar12);
    }
  } while (aiStack_48[0] != param_2 && aiStack_48[0] != 0);
  plVar5 = (long *)(param_1 + 0x30);
  func_0x0071da3c();
  plVar9 = (long *)plVar5[5];
  plVar19 = (long *)((long)plVar12 - (long)plVar9);
  if (plVar12 < plVar9 || plVar19 == (long *)0x0) {
    if (plVar12 < plVar9) {
      plVar9 = plVar5;
      plVar22 = plVar12;
      func_0x0071d1e4();
      plVar19 = (long *)&stack0x00000020;
      in_stack_00000020 = plVar9;
      in_stack_00000028 = plVar22;
      func_0x0071d5f0();
      plVar15 = plVar19;
      plVar8 = plVar12;
      func_0x0071d9f4();
      func_0x0071d670();
      if (0 < (long)plVar15) {
        in_stack_00000048 = plVar9;
        in_stack_00000050 = plVar22;
        func_0x0071d670(plVar19,plVar12,plVar9,plVar22);
        puVar6 = &stack0x00000048;
        func_0x0071d5f0();
        do {
          plVar12 = plVar19 + -0x1ff;
          do {
            if (plVar19 == plVar8) {
              plVar5[5] = plVar5[5] - (long)plVar15;
              while (plVar12 = plVar5, func_0x0071d238(),
                    (long *)((long)&section_00000068.size + 1) < plVar12) {
                func_0x0071d9e8();
                FUN_0071cccc(plVar5,plVar5[2] + -8);
              }
              return;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar19 + 3);
            plVar19 = plVar19 + 7;
            plVar12 = plVar12 + 7;
          } while ((long *)*puVar6 != plVar12);
          puVar6 = puVar6 + 1;
          plVar19 = (long *)*puVar6;
        } while( true );
      }
    }
  }
  else {
    plVar9 = plVar5;
    func_0x0071d238();
    uVar13 = (long)plVar19 - (long)plVar9;
    if (plVar9 <= plVar19 && uVar13 != 0) {
      if (plVar5[2] - plVar5[1] == 0) {
        uVar13 = uVar13 + 1;
      }
      uVar16 = uVar13 / 0x49;
      bVar4 = uVar13 % 0x49 != 0;
      uVar18 = (ulong)bVar4;
      uVar13 = uVar16;
      if (bVar4) {
        uVar13 = uVar16 + 1;
      }
      uVar1 = (ulong)plVar5[4] / 0x49;
      uVar21 = uVar13;
      if (uVar1 <= uVar13) {
        uVar21 = uVar1;
      }
      if (uVar1 < uVar13) {
        plVar15 = plVar5 + 3;
        uVar13 = uVar13 - uVar21;
        lVar11 = plVar5[2] - plVar5[1] >> 3;
        if ((ulong)((*plVar15 - *plVar5 >> 3) - lVar11) < uVar13) {
          plVar9 = (long *)(*plVar15 - *plVar5 >> 2);
          if (plVar9 <= (long *)(uVar13 + lVar11)) {
            plVar9 = (long *)(uVar13 + lVar11);
          }
          in_stack_00000040 = plVar15;
          if (plVar9 == (long *)0x0) {
            plVar12 = (long *)0x0;
          }
          else {
            FUN_0071d558();
          }
          lVar17 = uVar21 * -0x49;
          in_stack_00000028 = plVar9 + (lVar11 - uVar21);
          in_stack_00000038 = plVar9 + (long)plVar12;
          in_stack_00000030 = in_stack_00000028;
          in_stack_00000020 = plVar9;
          plVar15 = in_stack_00000040;
          for (; plVar22 = plVar9, plVar9 = in_stack_00000020, plVar8 = in_stack_00000028,
              plVar20 = in_stack_00000030, plVar14 = in_stack_00000038, in_stack_00000040 = plVar15,
              uVar13 != 0; uVar13 = uVar13 - 1) {
            func_0x0071d8e8();
            plVar9 = (long *)&stack0x00000020;
            FUN_0071d3f8();
            plVar12 = plVar22;
            plVar15 = in_stack_00000040;
          }
          for (; uVar21 != 0; uVar21 = uVar21 - 1) {
            plVar22 = (long *)plVar5[1];
            if (plVar20 == plVar14) {
              if (plVar8 < plVar9 || (long)plVar8 - (long)plVar9 == 0) {
                plVar10 = (long *)((long)plVar14 - (long)plVar9 >> 2);
                if ((long)plVar14 - (long)plVar9 == 0) {
                  plVar10 = (long *)((long)&MACH_HEADER.magic + 1);
                }
                plVar7 = plVar10;
                in_stack_00000068 = plVar15;
                FUN_0071d558();
                in_stack_00000050 = plVar7 + ((ulong)plVar10 >> 2);
                in_stack_00000060 = plVar7 + (long)plVar12;
                plVar12 = plVar8;
                in_stack_00000048 = plVar7;
                in_stack_00000058 = in_stack_00000050;
                FUN_0071d530(&stack0x00000048,plVar8,plVar14);
                plVar3 = in_stack_00000060;
                plVar2 = in_stack_00000058;
                plVar7 = in_stack_00000050;
                plVar10 = in_stack_00000048;
                in_stack_00000048 = plVar9;
                in_stack_00000050 = plVar8;
                in_stack_00000058 = plVar20;
                in_stack_00000060 = plVar14;
                func_0x0071d5b0(&stack0x00000048);
                plVar14 = plVar3;
                plVar8 = plVar7;
                plVar20 = plVar2;
                plVar9 = plVar10;
              }
              else {
                func_0x0071da08((long)plVar8 - (long)plVar9);
                plVar20 = plVar8 + extraout_x8;
                lVar11 = (long)plVar14 - (long)plVar8;
                if (lVar11 != 0) {
                  _memmove(plVar20,plVar8,lVar11);
                  plVar12 = plVar8;
                }
                plVar8 = plVar20;
                plVar20 = (long *)((long)plVar20 + lVar11);
              }
            }
            *plVar20 = *plVar22;
            plVar5[1] = plVar5[1] + 8;
            plVar20 = plVar20 + 1;
          }
          plVar15 = (long *)plVar5[2];
          in_stack_00000020 = plVar9;
          in_stack_00000028 = plVar8;
          in_stack_00000030 = plVar20;
          in_stack_00000038 = plVar14;
          while (plVar22 = (long *)plVar5[1], plVar15 != plVar22) {
            plVar15 = plVar15 + -1;
            plVar12 = plVar15;
            FUN_0071d488(&stack0x00000020);
          }
          lVar11 = *plVar5;
          lVar24 = plVar5[3];
          lVar23 = plVar5[2];
          plVar5[1] = (long)in_stack_00000028;
          *plVar5 = (long)in_stack_00000020;
          plVar5[3] = (long)in_stack_00000038;
          plVar5[2] = (long)in_stack_00000030;
          plVar5[4] = plVar5[4] + lVar17;
          plVar9 = (long *)&stack0x00000020;
          in_stack_00000020 = (long *)lVar11;
          in_stack_00000028 = plVar22;
          in_stack_00000030 = (long *)lVar23;
          in_stack_00000038 = (long *)lVar24;
          func_0x0071d5b0();
        }
        else {
          lVar11 = uVar18 - uVar21;
          for (; lVar11 + uVar16 != 0; uVar16 = uVar16 - 1) {
            if (plVar5[3] == plVar5[2]) {
              uVar21 = uVar18 + uVar16;
              break;
            }
            func_0x0071d8e8();
            plVar15 = plVar5;
            plVar12 = plVar9;
            func_0x0071d2d4();
            plVar9 = plVar15;
          }
          lVar11 = lVar11 + uVar16;
          plVar15 = plVar9;
          while (plVar9 = plVar15, lVar11 != 0) {
            func_0x0071d8e8();
            plVar15 = plVar5;
            FUN_0071d350();
            lVar11 = lVar11 + -1;
            lVar17 = 0x48;
            if (plVar5[2] - plVar5[1] != 8) {
              lVar17 = 0x49;
            }
            plVar5[4] = lVar17 + plVar5[4];
            plVar12 = plVar9;
          }
          plVar5[4] = plVar5[4] + uVar21 * -0x49;
          for (; uVar21 != 0; uVar21 = uVar21 - 1) {
            func_0x0071d880();
            func_0x0071d258();
          }
        }
      }
      else {
        plVar5[4] = plVar5[4] + uVar21 * -0x49;
        for (; uVar21 != 0; uVar21 = uVar21 - 1) {
          func_0x0071d880();
          func_0x0071d258();
        }
      }
    }
    func_0x0071d9f4();
    plVar15 = (long *)&stack0x00000048;
    in_stack_00000048 = plVar9;
    in_stack_00000050 = plVar12;
    func_0x0071d5f0();
    while (plVar22 = plVar9, plVar12 != plVar19) {
      plVar9 = plVar12;
      plVar8 = plVar19;
      if (plVar22 != plVar15) {
        plVar8 = (long *)(*plVar22 + 0xff8);
      }
      for (; plVar9 != plVar8; plVar9 = plVar9 + 7) {
        plVar9[6] = 0;
        plVar9[3] = 0;
        plVar9[2] = 0;
        plVar9[5] = 0;
        plVar9[4] = 0;
        plVar9[1] = 0;
        *plVar9 = 0;
      }
      plVar5[5] = plVar5[5] + ((long)plVar8 - (long)plVar12) / 0x38;
      plVar12 = plVar19;
      plVar9 = plVar15;
      if (plVar22 != plVar15) {
        plVar12 = (long *)plVar22[1];
        plVar9 = plVar22 + 1;
      }
    }
  }
  return;
}



/* Entry: 0071bab4; end: 0071bbd3;  */

undefined8 FUN_0071bab4(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined1 auStack_1b8 [40];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  long alStack_160 [34];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  double dStack_38;
  
  uVar4 = 0;
  pbVar7 = *(byte **)(param_2 + 8);
  bVar1 = *pbVar7;
  uVar5 = 8;
  if (bVar1 != 0x2d) {
    uVar5 = 5;
  }
  uVar6 = 0x1999999999999999;
  if (bVar1 == 0x2d) {
    pbVar7 = pbVar7 + 1;
    uVar6 = 0xccccccccccccccc;
  }
  while (pbVar7 < *(byte **)(param_2 + 0x10)) {
    if ((*pbVar7 - 0x3a < 0xfffffff6) ||
       ((uVar2 = *pbVar7 - 0x30, uVar6 <= uVar4 &&
        ((uVar6 < uVar4 || pbVar7 + 1 != *(byte **)(param_2 + 0x10)) || uVar5 < uVar2)))) {
      func_0x0071d960(param_1,param_2,param_3);
      dStack_38 = 0.0;
      FUN_0052fda0(auStack_50,*(undefined8 *)(param_2 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      FUN_004c367c(alStack_160,auStack_50,8);
      plVar3 = alStack_160;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(plVar3,&dStack_38);
      if ((*(byte *)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0x20) & 5) != 0) {
        if (dStack_38 == 1.79769313486232e+308) {
          dStack_38 = INFINITY;
        }
        else if (dStack_38 == -1.79769313486232e+308) {
          dStack_38 = -INFINITY;
        }
        else if (ABS(dStack_38) != INFINITY) {
          FUN_0052fda0(auStack_190,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10))
          ;
          FUN_00461b38(auStack_178,"\'",auStack_190);
          FUN_0052fce8(auStack_1b8,auStack_178,&UNK_0091d08c);
          func_0x0071d90c();
          func_0x0071d8c4();
          func_0x0071d928();
          func_0x0071d940();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
          uVar8 = 0;
          goto LAB_0071bc8c;
        }
      }
      FUN_0071df80(auStack_1b8);
      func_0x0071e318(auStack_1b8);
      func_0x0071d7a0();
      uVar8 = 1;
LAB_0071bc8c:
      FUN_004c3858(alStack_160);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
      return uVar8;
    }
    uVar4 = uVar4 * 10 + (ulong)uVar2;
    pbVar7 = pbVar7 + 1;
  }
  if (bVar1 == 0x2d) {
    uVar4 = -uVar4;
  }
  else if ((long)uVar4 < 0) {
    func_0x0071df54(auStack_48);
    goto LAB_0071bb78;
  }
  func_0x0071df28(auStack_48,uVar4);
LAB_0071bb78:
  func_0x0071e318(auStack_48,param_3);
  func_0x0071d7a0();
  return 1;
}



/* Entry: 0071bbd4; end: 0071bd6b;  */

undefined8 FUN_0071bbd4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined1 auStack_1b8 [40];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  long alStack_160 [34];
  undefined1 auStack_50 [24];
  double dStack_38;
  
  func_0x0071d960();
  dStack_38 = 0.0;
  FUN_0052fda0(auStack_50,*(undefined8 *)(param_2 + 8),*(undefined8 *)(unaff_x19 + 0x10));
  FUN_004c367c(alStack_160,auStack_50,8);
  plVar1 = alStack_160;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(plVar1,&dStack_38);
  if ((*(byte *)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 0x20) & 5) != 0) {
    if (dStack_38 == 1.79769313486232e+308) {
      dStack_38 = INFINITY;
    }
    else if (dStack_38 == -1.79769313486232e+308) {
      dStack_38 = -INFINITY;
    }
    else if (ABS(dStack_38) != INFINITY) {
      FUN_0052fda0(auStack_190,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      FUN_00461b38(auStack_178,"\'",auStack_190);
      FUN_0052fce8(auStack_1b8,auStack_178,&UNK_0091d08c);
      func_0x0071d90c();
      func_0x0071d8c4();
      func_0x0071d928();
      func_0x0071d940();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
      uVar2 = 0;
      goto LAB_0071bc8c;
    }
  }
  FUN_0071df80(auStack_1b8);
  func_0x0071e318(auStack_1b8);
  func_0x0071d7a0();
  uVar2 = 1;
LAB_0071bc8c:
  FUN_004c3858(alStack_160);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return uVar2;
}



/* Entry: 0071bd6c; end: 0071be7b;  */

undefined8
FUN_0071bd6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,int *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0071d960();
  if (param_4 - (long)*param_3 < 4) {
    FUN_00425cb4(auStack_48,&UNK_0091d171);
    func_0x0071d90c();
    FUN_0071ae94();
LAB_0071bdb4:
    func_0x0071d928();
    uVar2 = 0;
  }
  else {
    iVar5 = 0;
    iVar4 = 4;
    pbVar3 = (byte *)*param_3;
    do {
      *unaff_x21 = pbVar3 + 1;
      bVar1 = *pbVar3;
      iVar5 = iVar5 * 0x10;
      uVar6 = (uint)bVar1;
      if (bVar1 - 0x30 < 10) {
        iVar5 = uVar6 + iVar5 + -0x30;
      }
      else if (bVar1 - 0x61 < 6) {
        iVar5 = iVar5 + uVar6 + -0x57;
      }
      else {
        if (5 < uVar6 - 0x41) {
          FUN_00425cb4(auStack_48,&UNK_0091d1ae);
          func_0x0071d90c();
          FUN_0071ae94();
          goto LAB_0071bdb4;
        }
        iVar5 = iVar5 + uVar6 + -0x37;
      }
      iVar4 = iVar4 + -1;
      pbVar3 = pbVar3 + 1;
    } while (iVar4 != 0);
    *param_5 = iVar5;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 0071be7c; end: 0071c33b;  */

void FUN_0071be7c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long extraout_x8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  
  func_0x0071da3c();
  plVar8 = (long *)param_1[5];
  plVar17 = (long *)((long)param_2 - (long)plVar8);
  if (param_2 < plVar8 || plVar17 == (long *)0x0) {
    if (param_2 < plVar8) {
      plVar8 = param_1;
      plVar20 = param_2;
      func_0x0071d1e4();
      plVar17 = (long *)&stack0x00000020;
      in_stack_00000020 = plVar8;
      in_stack_00000028 = plVar20;
      func_0x0071d5f0();
      plVar13 = plVar17;
      plVar7 = param_2;
      func_0x0071d9f4();
      func_0x0071d670();
      if (0 < (long)plVar13) {
        in_stack_00000048 = plVar8;
        in_stack_00000050 = plVar20;
        func_0x0071d670(plVar17,param_2,plVar8,plVar20);
        puVar5 = &stack0x00000048;
        func_0x0071d5f0();
        do {
          plVar8 = plVar17 + -0x1ff;
          do {
            if (plVar17 == plVar7) {
              param_1[5] = param_1[5] - (long)plVar13;
              while (plVar17 = param_1, func_0x0071d238(),
                    (long *)((long)&section_00000068.size + 1) < plVar17) {
                func_0x0071d9e8();
                FUN_0071cccc(param_1,param_1[2] + -8);
              }
              return;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar17 + 3);
            plVar17 = plVar17 + 7;
            plVar8 = plVar8 + 7;
          } while ((long *)*puVar5 != plVar8);
          puVar5 = puVar5 + 1;
          plVar17 = (long *)*puVar5;
        } while( true );
      }
    }
  }
  else {
    plVar8 = param_1;
    func_0x0071d238();
    uVar11 = (long)plVar17 - (long)plVar8;
    if (plVar8 <= plVar17 && uVar11 != 0) {
      if (param_1[2] - param_1[1] == 0) {
        uVar11 = uVar11 + 1;
      }
      uVar14 = uVar11 / 0x49;
      bVar4 = uVar11 % 0x49 != 0;
      uVar16 = (ulong)bVar4;
      uVar11 = uVar14;
      if (bVar4) {
        uVar11 = uVar14 + 1;
      }
      uVar1 = (ulong)param_1[4] / 0x49;
      uVar19 = uVar11;
      if (uVar1 <= uVar11) {
        uVar19 = uVar1;
      }
      if (uVar1 < uVar11) {
        plVar13 = param_1 + 3;
        uVar11 = uVar11 - uVar19;
        lVar10 = param_1[2] - param_1[1] >> 3;
        if ((ulong)((*plVar13 - *param_1 >> 3) - lVar10) < uVar11) {
          plVar8 = (long *)(*plVar13 - *param_1 >> 2);
          if (plVar8 <= (long *)(uVar11 + lVar10)) {
            plVar8 = (long *)(uVar11 + lVar10);
          }
          in_stack_00000040 = plVar13;
          if (plVar8 == (long *)0x0) {
            param_2 = (long *)0x0;
          }
          else {
            FUN_0071d558();
          }
          lVar15 = uVar19 * -0x49;
          in_stack_00000028 = plVar8 + (lVar10 - uVar19);
          in_stack_00000038 = plVar8 + (long)param_2;
          in_stack_00000030 = in_stack_00000028;
          in_stack_00000020 = plVar8;
          plVar13 = in_stack_00000040;
          for (; plVar20 = plVar8, plVar8 = in_stack_00000020, plVar7 = in_stack_00000028,
              plVar18 = in_stack_00000030, plVar12 = in_stack_00000038, in_stack_00000040 = plVar13,
              uVar11 != 0; uVar11 = uVar11 - 1) {
            func_0x0071d8e8();
            plVar8 = (long *)&stack0x00000020;
            FUN_0071d3f8();
            param_2 = plVar20;
            plVar13 = in_stack_00000040;
          }
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            plVar20 = (long *)param_1[1];
            if (plVar18 == plVar12) {
              if (plVar7 < plVar8 || (long)plVar7 - (long)plVar8 == 0) {
                plVar9 = (long *)((long)plVar12 - (long)plVar8 >> 2);
                if ((long)plVar12 - (long)plVar8 == 0) {
                  plVar9 = (long *)((long)&MACH_HEADER.magic + 1);
                }
                plVar6 = plVar9;
                in_stack_00000068 = plVar13;
                FUN_0071d558();
                in_stack_00000050 = plVar6 + ((ulong)plVar9 >> 2);
                in_stack_00000060 = plVar6 + (long)param_2;
                param_2 = plVar7;
                in_stack_00000048 = plVar6;
                in_stack_00000058 = in_stack_00000050;
                FUN_0071d530(&stack0x00000048,plVar7,plVar12);
                plVar3 = in_stack_00000060;
                plVar2 = in_stack_00000058;
                plVar6 = in_stack_00000050;
                plVar9 = in_stack_00000048;
                in_stack_00000048 = plVar8;
                in_stack_00000050 = plVar7;
                in_stack_00000058 = plVar18;
                in_stack_00000060 = plVar12;
                func_0x0071d5b0(&stack0x00000048);
                plVar12 = plVar3;
                plVar7 = plVar6;
                plVar18 = plVar2;
                plVar8 = plVar9;
              }
              else {
                func_0x0071da08((long)plVar7 - (long)plVar8);
                plVar18 = plVar7 + extraout_x8;
                lVar10 = (long)plVar12 - (long)plVar7;
                if (lVar10 != 0) {
                  _memmove(plVar18,plVar7,lVar10);
                  param_2 = plVar7;
                }
                plVar7 = plVar18;
                plVar18 = (long *)((long)plVar18 + lVar10);
              }
            }
            *plVar18 = *plVar20;
            param_1[1] = param_1[1] + 8;
            plVar18 = plVar18 + 1;
          }
          plVar13 = (long *)param_1[2];
          in_stack_00000020 = plVar8;
          in_stack_00000028 = plVar7;
          in_stack_00000030 = plVar18;
          in_stack_00000038 = plVar12;
          while (plVar20 = (long *)param_1[1], plVar13 != plVar20) {
            plVar13 = plVar13 + -1;
            param_2 = plVar13;
            FUN_0071d488(&stack0x00000020);
          }
          lVar10 = *param_1;
          lVar22 = param_1[3];
          lVar21 = param_1[2];
          param_1[1] = (long)in_stack_00000028;
          *param_1 = (long)in_stack_00000020;
          param_1[3] = (long)in_stack_00000038;
          param_1[2] = (long)in_stack_00000030;
          param_1[4] = param_1[4] + lVar15;
          plVar8 = (long *)&stack0x00000020;
          in_stack_00000020 = (long *)lVar10;
          in_stack_00000028 = plVar20;
          in_stack_00000030 = (long *)lVar21;
          in_stack_00000038 = (long *)lVar22;
          func_0x0071d5b0();
        }
        else {
          lVar10 = uVar16 - uVar19;
          for (; lVar10 + uVar14 != 0; uVar14 = uVar14 - 1) {
            if (param_1[3] == param_1[2]) {
              uVar19 = uVar16 + uVar14;
              break;
            }
            func_0x0071d8e8();
            plVar13 = param_1;
            param_2 = plVar8;
            func_0x0071d2d4();
            plVar8 = plVar13;
          }
          lVar10 = lVar10 + uVar14;
          plVar13 = plVar8;
          while (plVar8 = plVar13, lVar10 != 0) {
            func_0x0071d8e8();
            plVar13 = param_1;
            FUN_0071d350();
            lVar10 = lVar10 + -1;
            lVar15 = 0x48;
            if (param_1[2] - param_1[1] != 8) {
              lVar15 = 0x49;
            }
            param_1[4] = lVar15 + param_1[4];
            param_2 = plVar8;
          }
          param_1[4] = param_1[4] + uVar19 * -0x49;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            func_0x0071d880();
            func_0x0071d258();
          }
        }
      }
      else {
        param_1[4] = param_1[4] + uVar19 * -0x49;
        for (; uVar19 != 0; uVar19 = uVar19 - 1) {
          func_0x0071d880();
          func_0x0071d258();
        }
      }
    }
    func_0x0071d9f4();
    plVar13 = (long *)&stack0x00000048;
    in_stack_00000048 = plVar8;
    in_stack_00000050 = param_2;
    func_0x0071d5f0();
    while (plVar20 = plVar8, param_2 != plVar17) {
      plVar8 = param_2;
      plVar7 = plVar17;
      if (plVar20 != plVar13) {
        plVar7 = (long *)(*plVar20 + 0xff8);
      }
      for (; plVar8 != plVar7; plVar8 = plVar8 + 7) {
        plVar8[6] = 0;
        plVar8[3] = 0;
        plVar8[2] = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
      }
      param_1[5] = param_1[5] + ((long)plVar7 - (long)param_2) / 0x38;
      param_2 = plVar17;
      plVar8 = plVar13;
      if (plVar20 != plVar13) {
        param_2 = (long *)plVar20[1];
        plVar8 = plVar20 + 1;
      }
    }
  }
  return;
}



/* Entry: 0071c33c; end: 0071c40b;  */

undefined8 * FUN_0071c33c(undefined8 *param_1,long param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_5b [51];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar1 = *(char **)(param_2 + 0x78);
  while ((pcVar2 = pcVar1, pcVar2 < param_3 && (pcVar2 != *(char **)(param_2 + 0x80)))) {
    pcVar3 = pcVar2 + 1;
    pcVar1 = pcVar3;
    if (((*pcVar2 != '\n') && (*pcVar2 == '\r')) && (pcVar1 = pcVar2 + 2, *pcVar3 != '\n')) {
      pcVar1 = pcVar3;
    }
  }
  _snprintf(auStack_5b,0x33,&UNK_0091d1f1);
  FUN_00425cb4(param_1,auStack_5b);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    *param_1 = &PTR_FUN_00a1f3e0;
    FUN_0071de14(param_1 + 1,0);
    FUN_0071c45c();
    return param_1;
  }
  return param_1;
}



/* Entry: 0071c40c; end: 0071c45b;  */

undefined8 * FUN_0071c40c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f3e0;
  FUN_0071de14(param_1 + 1,0);
  FUN_0071c45c();
  return param_1;
}



/* Entry: 0071c45c; end: 0071c60f;  */

void FUN_0071c45c(void)

{
  undefined1 auStack_48 [40];
  
  func_0x0071d7b0();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d7b0();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d7b0();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d724();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d724();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d724();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d724();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071def4(auStack_48,1000);
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d724();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d724();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d724();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  func_0x0071d7b0();
  func_0x0071d7d4();
  func_0x0071d7a8();
  func_0x0071d7a0();
  return;
}



/* Entry: 0071c610; end: 0071c63b;  */

undefined8 * FUN_0071c610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f3e0;
  func_0x0071e360(param_1 + 1);
  return param_1;
}



/* Entry: 0071c63c; end: 0071c63f;  */

undefined8 * FUN_0071c63c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f3e0;
  func_0x0071e360(param_1 + 1);
  return param_1;
}



/* Entry: 0071c640; end: 0071c653;  */

void FUN_0071c640(void)

{
  FUN_0071c610();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071c654; end: 0071c803;  */

dword * FUN_0071c654(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  dword *pdVar13;
  ulong uVar14;
  
  uVar5 = param_1 + 8;
  FUN_0071f044(uVar5,&UNK_0091d26c);
  FUN_0071ea2c();
  uVar6 = uVar5;
  func_0x0071d7e8();
  FUN_0071ea2c();
  uVar7 = uVar6;
  func_0x0071d7e8();
  FUN_0071ea2c();
  uVar8 = uVar7;
  func_0x0071d7e8();
  FUN_0071ea2c();
  uVar9 = uVar8;
  func_0x0071d7e8();
  FUN_0071ea2c();
  uVar10 = uVar9;
  func_0x0071d7e8();
  FUN_0071ea2c();
  uVar11 = uVar10;
  func_0x0071d7e8();
  FUN_0071ea2c();
  uVar12 = uVar11;
  func_0x0071d7e8();
  FUN_0071e5cc();
  uVar14 = uVar12 & 0xffffffff;
  func_0x0071d7e8();
  uVar1 = (undefined1)uVar12;
  FUN_0071ea2c();
  uVar2 = uVar1;
  func_0x0071d7e8();
  FUN_0071ea2c();
  uVar3 = uVar2;
  func_0x0071d7e8();
  FUN_0071ea2c();
  uVar4 = uVar3;
  func_0x0071d7e8();
  FUN_0071ea2c();
  pdVar13 = &section_000000b8.reloff;
  __Znwm();
  *(undefined ***)pdVar13 = &PTR_FUN_00a1f430;
  *(char *)(pdVar13 + 2) = (char)uVar5;
  *(undefined8 *)(pdVar13 + 0x30) = 0;
  *(undefined8 *)(pdVar13 + 0x32) = 0;
  *(undefined8 *)(pdVar13 + 0x2e) = 0;
  _bzero(pdVar13 + 4,0xa1);
  *(char *)(pdVar13 + 0x34) = (char)uVar6;
  *(char *)((long)pdVar13 + 0xd1) = (char)uVar7;
  *(char *)((long)pdVar13 + 0xd2) = (char)uVar8;
  *(char *)((long)pdVar13 + 0xd3) = (char)uVar9;
  *(char *)(pdVar13 + 0x35) = (char)uVar10;
  *(char *)((long)pdVar13 + 0xd5) = (char)uVar11;
  *(undefined1 *)((long)pdVar13 + 0xd6) = uVar1;
  *(undefined1 *)((long)pdVar13 + 0xd7) = uVar2;
  *(undefined1 *)(pdVar13 + 0x36) = uVar3;
  *(undefined1 *)((long)pdVar13 + 0xd9) = uVar4;
  *(undefined4 *)((long)pdVar13 + 0xda) = 0;
  *(undefined2 *)((long)pdVar13 + 0xde) = 0;
  *(ulong *)(pdVar13 + 0x38) = uVar14;
  *(undefined1 *)(pdVar13 + 0x3a) = 0;
  return pdVar13;
}



/* Entry: 0071c804; end: 0071c807;  */

undefined8 * FUN_0071c804(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_00a1f430;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x17);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe);
  FUN_0071a5bc(param_1 + 8);
  puVar4 = (undefined8 *)param_1[10];
  for (puVar3 = (undefined8 *)param_1[9]; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  FUN_0071cccc(param_1 + 8,param_1[9]);
  if (param_1[8] != 0) {
    __ZdlPv();
  }
  puVar3 = (undefined8 *)param_1[3];
  param_1[7] = 0;
  while( true ) {
    puVar4 = (undefined8 *)param_1[4];
    uVar1 = (long)puVar4 - (long)puVar3 >> 3;
    if (uVar1 < 3) break;
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(param_1[3] + 8);
    param_1[3] = puVar3;
  }
  if (uVar1 == 1) {
    uVar2 = 0x100;
  }
  else {
    if (uVar1 != 2) goto LAB_0071cca0;
    uVar2 = 0x200;
  }
  param_1[6] = uVar2;
LAB_0071cca0:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  func_0x0071cd18(param_1 + 2,param_1[3]);
  if (param_1[2] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0071c808; end: 0071c81b;  */

void FUN_0071c808(void)

{
  FUN_0071cbdc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071c81c; end: 0071cbdb;  */

ulong FUN_0071c81c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  func_0x0071da3c();
  *(undefined8 *)(param_1 + 0x88) = param_2;
  *(undefined8 *)(param_1 + 0x90) = param_3;
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xd0) & *(byte *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x98) = param_2;
  func_0x0048d000(param_1 + 0xb8);
  FUN_0071a5bc(param_1 + 0x40);
  while (*(long *)(param_1 + 0x38) != 0) {
    FUN_0071cd34(param_1 + 0x10);
  }
  FUN_0071cd9c(param_1 + 0x10,param_4);
  if ((((*(char *)(param_1 + 0xd9) == '\x01') &&
       (pcVar1 = *(char **)(param_1 + 0x88), 2 < *(long *)(param_1 + 0x90) - (long)pcVar1)) &&
      (*pcVar1 == -0x11)) && ((pcVar1[1] == -0x45 && (pcVar1[2] == -0x41)))) {
    *(char **)(param_1 + 0x88) = pcVar1 + 3;
    *(char **)(param_1 + 0x98) = pcVar1 + 3;
  }
  uVar5 = param_1 + 0x10;
  FUN_0071a67c();
  FUN_0071cd34(param_1 + 0x10);
  FUN_0071ae3c(param_1 + 0x10,&stack0x00000058);
  if ((*(char *)(param_1 + 0xd6) == '\x01') && (in_stack_00000058 != 0)) {
    FUN_00425cb4(&stack0x00000040,&UNK_0091d21a);
    func_0x0071d8c4(param_1 + 0x10,&stack0x00000040,&stack0x00000058);
    puVar2 = &stack0x00000040;
  }
  else {
    if (*(char *)(param_1 + 0xe8) == '\x01') {
      if (*(char *)(param_1 + 0xcf) < '\0') {
        if (*(long *)(param_1 + 0xc0) != 0) goto LAB_0071c964;
      }
      else if (*(char *)(param_1 + 0xcf) != '\0') {
LAB_0071c964:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&stack0x00000040,param_1 + 0xb8);
        FUN_0071f370(param_4,&stack0x00000040,2);
        func_0x0071d8e0();
      }
    }
    if ((*(char *)(param_1 + 0xd2) != '\x01') || ((*(ushort *)(param_4 + 8) & 0xfe) == 6))
    goto LAB_0071c9a0;
    in_stack_00000058 = 0x10;
    in_stack_00000060 = param_2;
    in_stack_00000068 = param_3;
    FUN_00425cb4(&stack0x00000028,&UNK_0091cf52);
    func_0x0071d8c4(param_1 + 0x10,&stack0x00000028,&stack0x00000058);
    puVar2 = &stack0x00000028;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  uVar5 = 0;
LAB_0071c9a0:
  if (param_5 == 0) {
    return uVar5;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  uVar3 = *(ulong *)(param_1 + 0x60);
  lVar4 = *(long *)(param_1 + 0x48);
  plVar8 = (long *)(lVar4 + (uVar3 / 0x49) * 8);
  if (*(long *)(param_1 + 0x50) == lVar4) {
    lVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar7 = *(long *)(lVar4 + (uVar3 / 0x49) * 8) + (uVar3 % 0x49) * 0x38;
    uVar3 = *(long *)(param_1 + 0x68) + uVar3;
    lVar4 = *(long *)(lVar4 + (uVar3 / 0x49) * 8) + (uVar3 % 0x49) * 0x38;
  }
  do {
    lVar6 = lVar7 + -0xff8;
    do {
      if (lVar7 == lVar4) {
        FUN_004575b8(param_5,&stack0x00000010);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000010);
        return uVar5 & 0xffffffff;
      }
      func_0x0071d9a0();
      FUN_00461b38(&stack0x00000040,&UNK_0091d204,&stack0x00000028);
      func_0x0071d918();
      func_0x0071d82c();
      func_0x0071d8f8();
      func_0x0071d8e0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000028);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&stack0x00000040,&DAT_0091064a,lVar7 + 0x18);
      func_0x0071d918();
      func_0x0071d82c();
      func_0x0071d8f8();
      func_0x0071d8e0();
      if (*(long *)(lVar7 + 0x30) != 0) {
        func_0x0071d9a0();
        FUN_00461b38(&stack0x00000040,&UNK_0091d207,&stack0x00000028);
        FUN_0052fce8(&stack0x00000058,&stack0x00000040,&UNK_0091d20c);
        func_0x0071d82c();
        func_0x0071d8f8();
        func_0x0071d8e0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000028);
      }
      lVar6 = lVar6 + 0x38;
      lVar7 = lVar7 + 0x38;
    } while (*plVar8 != lVar6);
    plVar8 = plVar8 + 1;
    lVar7 = *plVar8;
  } while( true );
}



/* Entry: 0071cbdc; end: 0071cccb;  */

undefined8 * FUN_0071cbdc(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_00a1f430;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x17);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe);
  FUN_0071a5bc(param_1 + 8);
  puVar4 = (undefined8 *)param_1[10];
  for (puVar3 = (undefined8 *)param_1[9]; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  FUN_0071cccc(param_1 + 8,param_1[9]);
  if (param_1[8] != 0) {
    __ZdlPv();
  }
  puVar3 = (undefined8 *)param_1[3];
  param_1[7] = 0;
  while( true ) {
    puVar4 = (undefined8 *)param_1[4];
    uVar1 = (long)puVar4 - (long)puVar3 >> 3;
    if (uVar1 < 3) break;
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(param_1[3] + 8);
    param_1[3] = puVar3;
  }
  if (uVar1 == 1) {
    uVar2 = 0x100;
  }
  else {
    if (uVar1 != 2) goto LAB_0071cca0;
    uVar2 = 0x200;
  }
  param_1[6] = uVar2;
LAB_0071cca0:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  func_0x0071cd18(param_1 + 2,param_1[3]);
  if (param_1[2] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0071cccc; end: 0071cd33;  */

void FUN_0071cccc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 0071cd34; end: 0071cd83;  */

void FUN_0071cd34(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  uVar1 = param_1;
  FUN_0071cd84();
  if (0x3ff < uVar1) {
    func_0x0071d9e8();
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x10);
    while (lVar2 != lVar3 + -8) {
      lVar2 = lVar2 + -8;
      *(long *)(param_1 + 0x10) = lVar2;
    }
    return;
  }
  return;
}



/* Entry: 0071cd84; end: 0071cd9b;  */

long FUN_0071cd84(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x40 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 0071cd9c; end: 0071d08b;  */

void FUN_0071cd9c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  
  func_0x0071da3c();
  func_0x0071d900();
  FUN_0071cd84();
  if (param_1 != 0) goto LAB_0071cf7c;
  if ((ulong)unaff_x19[4] < 0x200) {
    puVar13 = (undefined8 *)unaff_x19[1];
    puVar12 = (undefined8 *)unaff_x19[2];
    puVar9 = (undefined8 *)*unaff_x19;
    uVar10 = (long)puVar12 - (long)puVar13;
    puVar11 = unaff_x19 + 3;
    puVar8 = (undefined8 *)*puVar11;
    if ((ulong)((long)puVar8 - (long)puVar9) <= uVar10) {
      puVar5 = (undefined8 *)((long)puVar8 - (long)puVar9 >> 2);
      if (puVar8 == puVar9) {
        puVar5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      in_stack_00000038 = puVar11;
      FUN_0071d14c();
      puVar8 = (undefined8 *)((long)puVar5 + uVar10);
      puVar9 = puVar5 + param_2;
      uVar4 = 0x1000;
      lVar7 = param_2;
      in_stack_00000018 = puVar5;
      in_stack_00000020 = puVar8;
      in_stack_00000028 = puVar8;
      in_stack_00000030 = puVar9;
      __Znwm();
      puVar6 = puVar8;
      if (uVar10 == param_2 * 8) {
        if (puVar12 == puVar13) {
          puVar13 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
          in_stack_00000060 = puVar11;
          FUN_0071d14c();
          in_stack_00000058 = puVar13 + lVar7;
          in_stack_00000040 = puVar13;
          in_stack_00000048 = puVar13;
          in_stack_00000050 = puVar13;
          FUN_0071d124(&stack0x00000040,puVar8,puVar8);
          puVar1 = in_stack_00000058;
          puVar6 = in_stack_00000050;
          puVar12 = in_stack_00000048;
          puVar13 = in_stack_00000040;
          in_stack_00000018 = in_stack_00000040;
          in_stack_00000020 = in_stack_00000048;
          in_stack_00000030 = in_stack_00000058;
          in_stack_00000040 = puVar5;
          in_stack_00000048 = puVar8;
          in_stack_00000050 = puVar8;
          in_stack_00000058 = puVar9;
          func_0x0071d9cc();
          puVar5 = puVar13;
          puVar8 = puVar12;
          puVar9 = puVar1;
        }
        else {
          func_0x0071da08((long)puVar8 - (long)puVar5);
          puVar8 = puVar8 + extraout_x8;
          puVar6 = puVar8;
          in_stack_00000020 = puVar8;
        }
      }
      puVar13 = puVar6 + 1;
      *puVar6 = uVar4;
      puVar12 = (undefined8 *)unaff_x19[2];
      in_stack_00000028 = puVar13;
      while (puVar6 = (undefined8 *)unaff_x19[1], puVar12 != puVar6) {
        puVar6 = puVar8;
        if (puVar8 == puVar5) {
          if (puVar13 < puVar9) {
            lVar7 = (long)puVar13 - (long)puVar5;
            puVar1 = puVar13 + (((long)puVar9 - (long)puVar13 >> 3) + 1) / 2;
            puVar6 = (undefined8 *)((long)puVar1 - ((long)puVar13 - (long)puVar5));
            puVar13 = puVar1;
            if (lVar7 != 0) {
              _memmove(puVar6,puVar8,lVar7);
            }
          }
          else {
            lVar7 = (long)puVar9 - (long)puVar5 >> 2;
            if ((long)puVar9 - (long)puVar5 == 0) {
              lVar7 = 1;
            }
            in_stack_00000060 = puVar11;
            FUN_0071d14c(lVar7);
            func_0x0071d988(lVar7 * 2 + 6);
            FUN_0071d124(&stack0x00000040,puVar5,puVar13);
            puVar3 = in_stack_00000058;
            puVar2 = in_stack_00000050;
            puVar6 = in_stack_00000048;
            puVar1 = in_stack_00000040;
            in_stack_00000040 = puVar5;
            in_stack_00000048 = puVar8;
            in_stack_00000050 = puVar13;
            in_stack_00000058 = puVar9;
            func_0x0071d9cc();
            puVar5 = puVar1;
            puVar13 = puVar2;
            puVar9 = puVar3;
          }
        }
        puVar12 = puVar12 + -1;
        puVar8 = puVar6 + -1;
        *puVar8 = *puVar12;
      }
      in_stack_00000018 = (undefined8 *)*unaff_x19;
      *unaff_x19 = puVar5;
      unaff_x19[1] = puVar8;
      in_stack_00000030 = (undefined8 *)unaff_x19[3];
      in_stack_00000028 = (undefined8 *)unaff_x19[2];
      unaff_x19[2] = puVar13;
      unaff_x19[3] = puVar9;
      in_stack_00000020 = puVar6;
      func_0x0071d178();
      func_0x0071d1a4(&stack0x00000018);
      goto LAB_0071cf7c;
    }
    uVar4 = 0x1000;
    __Znwm();
    if (puVar8 != puVar12) {
      *puVar12 = uVar4;
      unaff_x19[2] = puVar12 + 1;
      goto LAB_0071cf7c;
    }
    if (puVar13 == puVar9) {
      lVar7 = (long)puVar8 - (long)puVar13 >> 2;
      if (puVar12 == puVar13) {
        lVar7 = 1;
      }
      in_stack_00000060 = puVar11;
      FUN_0071d14c();
      func_0x0071d988(lVar7 * 2 + 6);
      FUN_0071d124(&stack0x00000040,unaff_x19[1],unaff_x19[2]);
      puVar12 = (undefined8 *)unaff_x19[1];
      puVar13 = (undefined8 *)*unaff_x19;
      puVar9 = (undefined8 *)unaff_x19[3];
      puVar8 = (undefined8 *)unaff_x19[2];
      unaff_x19[1] = in_stack_00000048;
      *unaff_x19 = in_stack_00000040;
      unaff_x19[3] = in_stack_00000058;
      unaff_x19[2] = in_stack_00000050;
      in_stack_00000040 = puVar13;
      in_stack_00000048 = puVar12;
      in_stack_00000050 = puVar8;
      in_stack_00000058 = puVar9;
      func_0x0071d9cc();
      puVar13 = (undefined8 *)unaff_x19[1];
    }
    puVar13[-1] = uVar4;
    unaff_x19[1] = puVar13;
  }
  else {
    unaff_x19[4] = unaff_x19[4] - 0x200;
    func_0x0071d880();
  }
  FUN_0071d08c();
LAB_0071cf7c:
  puVar13 = unaff_x19;
  func_0x0071cce8();
  *puVar13 = unaff_x20;
  unaff_x19[5] = unaff_x19[5] + 1;
  return;
}



/* Entry: 0071d08c; end: 0071d123;  */

void FUN_0071d08c(void)

{
  undefined1 in_ZR;
  bool bVar1;
  long extraout_x8;
  ulong uVar2;
  ulong *unaff_x19;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  func_0x0071d770();
  if ((bool)in_ZR) {
    uVar3 = *unaff_x19;
    bVar1 = unaff_x19[1] == uVar3;
    if (uVar3 < unaff_x19[1]) {
      func_0x0071d730();
      if (!bVar1) {
        func_0x0071d7bc();
      }
      func_0x0071d85c();
    }
    else {
      uVar2 = (long)(extraout_x8 - uVar3) >> 2;
      if (extraout_x8 - uVar3 == 0) {
        uVar2 = 1;
      }
      uVar3 = uVar2;
      FUN_0071d14c(uVar2);
      func_0x0071d6f8(uVar3 + (uVar2 >> 2) * 8);
      FUN_0071d124();
      uVar2 = unaff_x19[1];
      uVar3 = *unaff_x19;
      uVar5 = unaff_x19[3];
      uVar4 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar3;
      uStack_68 = uVar2;
      uStack_60 = uVar4;
      uStack_58 = uVar5;
      func_0x0071d1a4(&uStack_70);
    }
  }
  func_0x0071da30();
  return;
}



/* Entry: 0071d124; end: 0071d14b;  */

void FUN_0071d124(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0071d14c; end: 0071d1e3;  */

long * FUN_0071d14c(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x0071d9fc();
    return param_1;
  }
  FUN_0040cee8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0071d1e4; end: 0071d257;  */

void FUN_0071d1e4(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 0071d258; end: 0071d34f;  */

void FUN_0071d258(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x0071d770();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0071d730();
      if (!bVar2) {
        func_0x0071d7bc();
      }
      func_0x0071d85c();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0071d9ac();
      func_0x0071d6f8(param_1 + (uVar3 >> 2) * 8);
      FUN_0071d530();
      func_0x0071d6e0();
    }
  }
  func_0x0071da30();
  return;
}



/* Entry: 0071d350; end: 0071d3f7;  */

void FUN_0071d350(long *param_1)

{
  bool bVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x0071d900();
  lVar2 = param_1[1];
  if (lVar2 == *param_1) {
    uVar4 = *(ulong *)(unaff_x19 + 0x18);
    bVar1 = *(ulong *)(unaff_x19 + 0x10) == uVar4;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar4) {
      func_0x0071d8a0();
      lVar2 = extraout_x8;
      if (!bVar1) {
        _memmove();
        lVar2 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar2 + unaff_x22 * 8;
      lVar2 = unaff_x21;
    }
    else {
      lVar3 = (long)(uVar4 - lVar2) >> 2;
      if (uVar4 - lVar2 == 0) {
        lVar3 = 1;
      }
      lVar2 = lVar3 * 2;
      FUN_0071d558(lVar3);
      func_0x0071d6f8(lVar3 + (lVar2 + 6U & 0xfffffffffffffff8));
      FUN_0071d530();
      func_0x0071d6e0();
      lVar2 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar2 + -8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar2 + -8);
  return;
}



/* Entry: 0071d3f8; end: 0071d487;  */

void FUN_0071d3f8(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  
  func_0x0071d900();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar4;
    if (uVar4 < unaff_x19[1]) {
      func_0x0071d730();
      if (!bVar2) {
        func_0x0071d7bc();
      }
      func_0x0071d85c();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar4;
      uVar4 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar4 = 1;
      }
      uVar3 = uVar4;
      FUN_0071d558(uVar4);
      func_0x0071d6f8(uVar3 + (uVar4 >> 2) * 8);
      FUN_0071d530();
      func_0x0071d6e0();
    }
  }
  func_0x0071da30();
  return;
}



/* Entry: 0071d488; end: 0071d52f;  */

void FUN_0071d488(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x0071d900();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x0071d8a0();
      lVar3 = extraout_x8;
      if (!bVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar3 = lVar4 * 2;
      FUN_0071d558(lVar4);
      func_0x0071d6f8(lVar4 + (lVar3 + 6U & 0xfffffffffffffff8));
      FUN_0071d530();
      func_0x0071d6e0();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 0071d530; end: 0071d557;  */

void FUN_0071d530(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0071d558; end: 0071d5ef;  */

long * FUN_0071d558(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x0071d9fc();
    return param_1;
  }
  FUN_0040cee8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0071d5f0; end: 0071da57;  */

void FUN_0071d5f0(undefined8 *param_1,long param_2)

{
  if ((param_2 != 0) && (0 < (param_1[1] - *(long *)*param_1) / 0x38 + param_2)) {
    return;
  }
  return;
}



/* Entry: 0071da58; end: 0071dabf;  */

void FUN_0071da58(void)

{
  int iVar1;
  
  if ((bRam0000000000b6ce28 & 1) == 0) {
    iVar1 = 0xb6ce28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0071fde0();
      FUN_0071de14();
      ___cxa_guard_release(0xb6ce28);
    }
  }
  func_0x0071fde0();
  return;
}



/* Entry: 0071dac0; end: 0071dafb;  */

void FUN_0071dac0(undefined8 *param_1)

{
  func_0x0071fd20();
  FUN_0071db94();
  ___cxa_throw(param_1,&PTR_DAT_00a1f4e8,0x71dbd0);
  func_0x0071fd08();
  func_0x0071fc04();
  *param_1 = &PTR_FUN_00a1f480;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 0071dafc; end: 0071db2b;  */

void FUN_0071dafc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f480;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 0071db2c; end: 0071db2f;  */

void FUN_0071db2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f480;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 0071db30; end: 0071db43;  */

void FUN_0071db30(void)

{
  FUN_0071dafc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071db44; end: 0071db5f;  */

undefined8 * FUN_0071db44(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return (undefined8 *)(param_1 + 8);
  }
  return *(undefined8 **)(param_1 + 8);
}



/* Entry: 0071db60; end: 0071db93;  */

void FUN_0071db60(void)

{
  undefined8 *unaff_x19;
  
  func_0x0071fc2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0071fbd8();
  *unaff_x19 = &PTR_DAT_00a1f4a8;
  return;
}



/* Entry: 0071db94; end: 0071db97;  */

void FUN_0071db94(void)

{
  undefined8 *unaff_x19;
  
  func_0x0071fc2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0071fbd8();
  *unaff_x19 = &PTR_DAT_00a1f4a8;
  return;
}



/* Entry: 0071db98; end: 0071dbcb;  */

void FUN_0071db98(void)

{
  undefined8 *unaff_x19;
  
  func_0x0071fc2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0071fbd8();
  *unaff_x19 = &PTR_FUN_00a1f4d0;
  return;
}



/* Entry: 0071dbcc; end: 0071dbd3;  */

void FUN_0071dbcc(void)

{
  undefined8 *unaff_x19;
  
  func_0x0071fc2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x0071fbd8();
  *unaff_x19 = &PTR_FUN_00a1f4d0;
  return;
}



/* Entry: 0071dbd4; end: 0071dc0f;  */

void FUN_0071dbd4(undefined8 *param_1)

{
  func_0x0071fd20();
  FUN_0071dbcc();
  ___cxa_throw(param_1,&PTR_DAT_00a1f518,FUN_0071dc10);
  func_0x0071fd08();
  func_0x0071fc04();
  *param_1 = &PTR_FUN_00a1f480;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 0071dc10; end: 0071dc13;  */

void FUN_0071dc10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f480;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 0071dc14; end: 0071dce7;  */

void FUN_0071dc14(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  func_0x0071fc6c();
  lVar3 = *param_2;
  if (((*(uint *)(param_2 + 1) & 3) != 0) && (lVar3 != 0)) {
    uVar4 = (ulong)(*(uint *)(param_2 + 1) >> 2);
    lVar3 = uVar4 + 1;
    _malloc();
    if (lVar3 == 0) {
      FUN_00425cb4(auStack_58,&UNK_0091d6ee);
      FUN_0071dac0(auStack_58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71dce0);
      (*pcVar1)();
    }
    _memcpy();
    *(undefined1 *)(lVar3 + uVar4) = 0;
  }
  *unaff_x19 = lVar3;
  uVar2 = *(uint *)(unaff_x20 + 1) & 3;
  if (*unaff_x20 != 0) {
    uVar2 = (uint)(uVar2 != 0);
  }
  *(uint *)(unaff_x19 + 1) = uVar2 | *(uint *)(unaff_x19 + 1) & 0xfffffffc;
  *(uint *)(unaff_x19 + 1) = *(uint *)(unaff_x20 + 1) & 0xfffffffc | uVar2;
  return;
}



/* Entry: 0071dce8; end: 0071dd1f;  */

long * FUN_0071dce8(long *param_1)

{
  if ((*param_1 != 0) && ((*(uint *)(param_1 + 1) & 3) == 1)) {
    _free();
  }
  return param_1;
}



/* Entry: 0071dd20; end: 0071ddab;  */

bool FUN_0071dd20(ulong *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auStack_38 [24];
  
  uVar6 = *param_1;
  if (uVar6 == 0) {
    bVar5 = (uint)param_1[1] < *(uint *)(param_2 + 1);
  }
  else {
    if (*param_2 == 0) {
      func_0x0071fc78();
      FUN_0071dbd4(auStack_38);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x71dda4);
      (*pcVar4)();
    }
    uVar2 = (uint)param_1[1] >> 2;
    uVar3 = *(uint *)(param_2 + 1) >> 2;
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      uVar1 = uVar2;
    }
    _memcmp(uVar6,*param_2,uVar1);
    bVar5 = true;
    if ((uVar6 & 0x80000000) == 0) {
      bVar5 = (int)uVar6 == 0 && uVar2 < uVar3;
    }
  }
  return bVar5;
}



/* Entry: 0071ddac; end: 0071de13;  */

bool FUN_0071ddac(long param_1,ulong param_2,long param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  if (param_1 == 0) {
    bVar2 = (uint)param_2 == param_4;
  }
  else {
    uVar3 = param_2 >> 2 & 0x3fffffff;
    if ((uint)uVar3 == param_4 >> 2) {
      if (param_3 == 0) {
        func_0x0071fc78();
        FUN_0071dbd4(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x71de0c);
        (*pcVar1)();
      }
      _memcmp(param_1,param_3,uVar3);
      bVar2 = (int)param_1 == 0;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



/* Entry: 0071de14; end: 0071de9f;  */

undefined8 * FUN_0071de14(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  func_0x0071fc0c();
  switch(param_2) {
  case 1:
  case 2:
  case 3:
    *param_1 = 0;
    break;
  case 4:
    *param_1 = &UNK_0083bf86;
    break;
  case 5:
    *(undefined1 *)param_1 = 0;
    break;
  case 6:
  case 7:
    uVar1 = 0x18;
    __Znwm();
    func_0x0071fdec();
    *param_1 = uVar1;
  }
  return param_1;
}



/* Entry: 0071dea0; end: 0071df7f;  */

void FUN_0071dea0(long param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  
  uVar1 = 0x100;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 8) = uVar1 | param_2 & 0xff | *(ushort *)(param_1 + 8) & 0xfe00;
  FUN_0071f57c(param_1 + 0x10,0);
  func_0x0071fc48();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 0071df80; end: 0071dfbb;  */

undefined8 * FUN_0071df80(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  func_0x0071fc0c(param_2,3);
  *param_2 = param_1;
  return param_2;
}



/* Entry: 0071dfbc; end: 0071e05f;  */

void FUN_0071dfbc(long param_1)

{
  code *pcVar1;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [256];
  
  func_0x0071fdc0();
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x0071fcfc();
  if (unaff_x21 != 0) {
    _strlen();
    FUN_0071e060();
    *unaff_x20 = unaff_x21;
    return;
  }
  FUN_004799f4(auStack_138);
  func_0x0071fbac();
  FUN_0046296c(auStack_150,auStack_130);
  func_0x0071fba4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x71e034);
  (*pcVar1)();
}



/* Entry: 0071e060; end: 0071e133;  */

uint * FUN_0071e060(undefined8 param_1,uint param_2)

{
  code *pcVar1;
  uint *puVar2;
  ulong uVar3;
  undefined1 auStack_148 [264];
  
  if (param_2 < 0x7ffffffb) {
    uVar3 = (ulong)param_2;
    puVar2 = (uint *)(uVar3 + 5);
    _malloc();
    if (puVar2 != (uint *)0x0) {
      *puVar2 = param_2;
      _memcpy(puVar2 + 1,param_1,uVar3);
      *(undefined1 *)((long)puVar2 + uVar3 + 4) = 0;
      return puVar2;
    }
    FUN_00425cb4(auStack_148,&UNK_0091d78b);
    FUN_0071dac0(auStack_148);
  }
  else {
    FUN_0071fb6c();
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x71e110);
  (*pcVar1)();
}



/* Entry: 0071e134; end: 0071e18b;  */

long * FUN_0071e134(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  
  param_1[2] = 0;
  func_0x0071fcfc();
  iVar1 = (int)param_2[1];
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    iVar1 = (int)*(char *)((long)param_2 + 0x17);
    plVar2 = param_2;
  }
  FUN_0071e060(plVar2,iVar1);
  *param_1 = (long)plVar2;
  return param_1;
}



/* Entry: 0071e18c; end: 0071e1bb;  */

undefined1 * FUN_0071e18c(undefined1 *param_1,undefined1 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x0071fc0c(param_1,5);
  *param_1 = param_2;
  return param_1;
}



/* Entry: 0071e1bc; end: 0071e1ff;  */

void FUN_0071e1bc(long param_1)

{
  func_0x0071fdc0();
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_0071e200();
  FUN_0071e2bc();
  return;
}



/* Entry: 0071e200; end: 0071e2bb;  */

void FUN_0071e200(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint extraout_w8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  bVar1 = *(byte *)(param_2 + 8);
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfe00 | (ushort)bVar1;
  if (bVar1 < 8) {
    func_0x0071fc6c();
    uVar2 = 1 << (ulong)(extraout_w8 & 0x1f);
    if ((uVar2 & 0x2f) == 0) {
      if ((uVar2 & 0xc0) == 0) {
        puVar4 = (undefined4 *)*unaff_x20;
        if ((puVar4 == (undefined4 *)0x0) || ((*(ushort *)(unaff_x20 + 1) >> 8 & 1) == 0)) {
          *unaff_x19 = puVar4;
        }
        else {
          puVar5 = puVar4 + 1;
          FUN_0071e060(puVar5,*puVar4);
          *unaff_x19 = puVar5;
          *(ushort *)(unaff_x19 + 1) = *(ushort *)(unaff_x19 + 1) | 0x100;
        }
      }
      else {
        uVar3 = 0x18;
        __Znwm();
        FUN_0071f9c8();
        *unaff_x19 = uVar3;
      }
    }
    else {
      *unaff_x19 = *unaff_x20;
    }
  }
  return;
}



/* Entry: 0071e2bc; end: 0071e38b;  */

void FUN_0071e2bc(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0071fc14();
  FUN_0071ee54(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return;
}



/* Entry: 0071e38c; end: 0071e3d3;  */

void FUN_0071e38c(long *param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 1) & 0xff;
  if (uVar1 - 6 < 2) {
    if (*param_1 != 0) {
      FUN_0071fae4();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  if ((uVar1 == 4) && ((*(ushort *)(param_1 + 1) >> 8 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(*param_1);
    return;
  }
  return;
}



/* Entry: 0071e3d4; end: 0071e40f;  */

void FUN_0071e3d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_0071f2a4();
  FUN_0071f57c(param_2,uVar1);
  func_0x0071fc48();
  return;
}



/* Entry: 0071e410; end: 0071e47f;  */

undefined8 FUN_0071e410(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  
  if ((*(ushort *)(param_1 + 1) & 0xff) == 4) {
    puVar3 = (uint *)*param_1;
    if (puVar3 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      if ((*(ushort *)(param_1 + 1) >> 8 & 1) == 0) {
        puVar1 = puVar3;
        _strlen();
        puVar4 = puVar3;
      }
      else {
        puVar4 = puVar3 + 1;
        puVar1 = (uint *)(ulong)*puVar3;
      }
      *param_2 = puVar4;
      *param_3 = (long)puVar4 + ((ulong)puVar1 & 0xffffffff);
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 0071e480; end: 0071e5cb;  */

ulong * FUN_0071e480(ulong *param_1,double param_2,double *param_3)

{
  ulong uVar1;
  long *plVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  dword *pdVar7;
  code *pcVar8;
  long **pplVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  ulong *puVar14;
  double dVar15;
  uint *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  int iVar19;
  ulong *extraout_x8;
  char *extraout_x8_00;
  char *extraout_x8_01;
  long lVar20;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x11;
  long lVar21;
  long extraout_x11_00;
  char *pcVar22;
  ulong *unaff_x19;
  long *plVar23;
  undefined8 unaff_x20;
  uint *puVar24;
  uint *puVar25;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long *aplStack_50 [4];
  
  uVar3 = *(ushort *)(param_3 + 1) & 0xff;
  uVar12 = uVar3 == 5;
  switch(uVar3) {
  case 1:
    dVar15 = *param_3;
    func_0x007215b8(param_1);
    uVar12 = dVar15 == -0.0;
    if ((bool)uVar12) {
      lVar20 = -0x8000000000000000;
    }
    else {
      if (-1 < (long)dVar15) {
        FUN_0071fe90();
        plVar23 = aplStack_50[0];
        goto LAB_0071fe74;
      }
      lVar20 = -(long)dVar15;
    }
    FUN_0071fe90(lVar20,aplStack_50);
    *(undefined1 *)((long)aplStack_50[0] + -1) = 0x2d;
    plVar23 = (long *)((long)aplStack_50[0] + -1);
LAB_0071fe74:
    FUN_00425cb4();
    func_0x00721634();
    if ((bool)uVar12) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    lVar20 = *plVar23;
    *plVar23 = lVar20 + -1;
    *(undefined1 *)(lVar20 + -1) = 0;
    do {
      puVar17 = (ulong *)((ulong)unaff_x19 / 10);
      lVar20 = *plVar23;
      *plVar23 = lVar20 + -1;
      *(byte *)(lVar20 + -1) = (char)unaff_x19 + (char)puVar17 * -10 | 0x30;
      bVar6 = (ulong *)((long)&MACH_HEADER.cpusubtype + 1) < unaff_x19;
      unaff_x19 = puVar17;
    } while (bVar6);
    return puVar17;
  case 2:
    pplVar9 = aplStack_50;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x007215b8(param_1,*param_3);
    FUN_0071fe90();
    puVar17 = unaff_x19;
    iVar19 = (int)aplStack_50[0];
    FUN_00425cb4();
    func_0x00721634();
    if ((bool)uVar12) {
      return puVar17;
    }
    unaff_x30 = FUN_0071ff0c;
    ___stack_chk_fail();
    param_1 = extraout_x8;
    goto code_r0x0071ff0c;
  case 3:
    param_2 = *param_3;
    puVar17 = (ulong *)((long)&MACH_HEADER.ncmds + 1);
    iVar19 = 0;
    pplVar9 = (long **)register0x00000008;
code_r0x0071ff0c:
    *(undefined8 *)((long)pplVar9 + -0x40) = unaff_d9;
    *(undefined8 *)((long)pplVar9 + -0x38) = unaff_d8;
    *(undefined8 *)((long)pplVar9 + -0x30) = unaff_x22;
    *(undefined8 *)((long)pplVar9 + -0x28) = unaff_x21;
    *(undefined8 *)((long)pplVar9 + -0x20) = unaff_x20;
    *(ulong **)((long)pplVar9 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pplVar9 + -0x10) = unaff_x29;
    *(code **)((long)pplVar9 + -8) = unaff_x30;
    if ((ulong)ABS(param_2) < 0x7ff0000000000000) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(param_1,0x24,0);
      puVar4 = &DAT_0091d8de;
      if (iVar19 != 0) {
        puVar4 = &UNK_0091d8e3;
      }
      while( true ) {
        uVar5 = param_1[1];
        puVar18 = (ulong *)*param_1;
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
          puVar18 = param_1;
        }
        *(double *)((long)pplVar9 + -0x48) = param_2;
        *(ulong **)((long)pplVar9 + -0x50) = puVar17;
        _snprintf(puVar18,uVar5,puVar4);
        iVar13 = (int)puVar18;
        uVar5 = param_1[1];
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
        }
        uVar1 = (ulong)iVar13;
        cVar10 = SBORROW8(uVar5,uVar1);
        cVar11 = (long)(uVar5 - uVar1) < 0;
        if (uVar1 < uVar5) break;
        FUN_004625e8(param_1,(long)iVar13 + 1);
      }
      FUN_004625e8(param_1,(long)iVar13);
      func_0x0072161c();
      lVar21 = extraout_x11;
      pcVar22 = extraout_x8_00;
      lVar20 = extraout_x11;
      if (cVar11 == cVar10) {
        lVar21 = extraout_x9;
        lVar20 = extraout_x9;
      }
      for (; lVar21 != 0; lVar21 = lVar21 + -1) {
        if (*pcVar22 == ',') {
          *pcVar22 = '.';
        }
        pcVar22 = pcVar22 + 1;
      }
      uVar5 = param_1[1];
      puVar18 = (ulong *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
        puVar18 = param_1;
      }
      FUN_0052fbdc(param_1,extraout_x8_00 + lVar20,(long)puVar18 + uVar5);
      puVar18 = param_1;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x2e,0);
      if ((puVar18 == (ulong *)0xffffffffffffffff) &&
         (puVar18 = param_1,
         __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x65,0),
         puVar18 == (ulong *)0xffffffffffffffff)) {
        func_0x007215ec();
      }
      cVar10 = SBORROW4(iVar19,1);
      cVar11 = iVar19 + -1 < 0;
      if (iVar19 == 1) {
        func_0x0072161c();
        lVar21 = extraout_x11_00;
        lVar20 = extraout_x11_00;
        if (cVar11 == cVar10) {
          lVar21 = extraout_x9_00;
          lVar20 = extraout_x9_00;
        }
        for (; pcVar22 = extraout_x8_01, lVar21 != 0; lVar21 = lVar21 + -1) {
          pcVar22 = extraout_x8_01 + lVar21;
          if (pcVar22[-1] != '0') break;
          if (((extraout_x8_01 != pcVar22 + -1) &&
              (pcVar22 = extraout_x8_01 + lVar21 + -2, extraout_x8_01 != pcVar22)) &&
             (*pcVar22 == '.')) {
            if ((int)puVar17 != 0) {
              pcVar22 = extraout_x8_01 + lVar21;
            }
            break;
          }
        }
        FUN_0052fbdc(param_1,pcVar22,extraout_x8_01 + lVar20);
        puVar18 = param_1;
      }
      return puVar18;
    }
    lVar20 = 2;
    if (param_2 < 0.0) {
      lVar20 = 1;
    }
    lVar21 = 0;
    if (!NAN(param_2)) {
      lVar21 = lVar20;
    }
    unaff_x29 = *(undefined1 **)((long)pplVar9 + -0x10);
    unaff_x30 = *(code **)((long)pplVar9 + -8);
    unaff_x20 = *(undefined8 *)((long)pplVar9 + -0x20);
    unaff_x19 = *(ulong **)((long)pplVar9 + -0x18);
    unaff_x22 = *(undefined8 *)((long)pplVar9 + -0x30);
    unaff_x21 = *(undefined8 *)((long)pplVar9 + -0x28);
    puVar17 = (ulong *)(&PTR_DAT_00a1f5e8)[lVar21];
    register0x00000008 = (BADSPACEBASE *)pplVar9;
    break;
  case 4:
    puVar24 = (uint *)*param_3;
    if (puVar24 != (uint *)0x0) {
      if ((*(ushort *)(param_3 + 1) >> 8 & 1) == 0) {
        puVar16 = puVar24;
        _strlen(puVar24);
        puVar25 = puVar24;
      }
      else {
        puVar25 = puVar24 + 1;
        puVar16 = (uint *)(ulong)*puVar24;
      }
                    /* WARNING: Could not recover jumptable at 0x00779b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_00998990)
                (param_1,puVar25,(ulong)puVar16 & 0xffffffff);
      return param_1;
    }
  case 0:
    puVar17 = (ulong *)&UNK_0091d329;
    break;
  case 5:
    puVar17 = (ulong *)&UNK_0091d364;
    if (*(char *)param_3 == '\0') {
      puVar17 = (ulong *)&UNK_0091d369;
    }
    break;
  default:
    FUN_0071fb6c();
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x71e5b4);
    (*pcVar8)();
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar18 = puVar17;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar18) {
    FUN_0040d740();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x48) = FUN_00425d5c;
    plVar23 = (long *)puVar18[1];
    if (plVar23 != (long *)0x0) {
      plVar2 = plVar23 + 1;
      do {
        lVar20 = *plVar2;
        cVar11 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar20 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    return puVar18;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar18) {
    pdVar7 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar18 | 7) != (dword *)0x17) {
      pdVar7 = (dword *)((ulong)puVar18 | 7);
    }
    puVar14 = (ulong *)((long)pdVar7 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar18;
    param_1[2] = (ulong)((long)pdVar7 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar14;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar18;
    puVar14 = param_1;
    if (puVar18 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar14,puVar17,puVar18);
LAB_00425d3c:
  *(undefined1 *)((long)puVar14 + (long)puVar18) = 0;
  return param_1;
}



/* Entry: 0071e5cc; end: 0071e6ff;  */

uint FUN_0071e5cc(double *param_1)

{
  code *pcVar1;
  uint uVar2;
  double *pdVar3;
  double dVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 1);
  switch(uVar2) {
  case 0:
    break;
  case 1:
    pdVar3 = param_1;
    FUN_0071e700();
    if (((ulong)pdVar3 & 1) == 0) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
      goto code_r0x0071e6c0;
    }
    goto code_r0x0071e640;
  case 2:
    pdVar3 = param_1;
    FUN_0071e700();
    if (((ulong)pdVar3 & 1) == 0) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
      goto code_r0x0071e6c0;
    }
code_r0x0071e640:
    uVar2 = *(uint *)param_1;
    break;
  case 3:
    dVar4 = *param_1;
    if ((dVar4 < 0.0) || (4294967295.0 < dVar4)) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
      goto code_r0x0071e6c0;
    }
    uVar2 = (uint)dVar4;
    break;
  default:
    FUN_0071fb6c();
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
code_r0x0071e6c0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x71e6c4);
    (*pcVar1)();
  case 5:
    uVar2 = (uint)*(byte *)param_1;
  }
  return uVar2;
}



/* Entry: 0071e700; end: 0071e77b;  */

bool FUN_0071e700(double *param_1)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  undefined1 auStack_18 [8];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x03') {
    bVar2 = false;
    dVar3 = *param_1;
    if ((0.0 <= dVar3) && (dVar3 <= 4294967295.0)) {
      _modf(auStack_18);
      bVar2 = dVar3 == 0.0;
    }
    return bVar2;
  }
  if ((cVar1 != '\x02') && (cVar1 != '\x01')) {
    return false;
  }
  return *(int *)((long)param_1 + 4) == 0;
}



/* Entry: 0071e77c; end: 0071e873;  */

double FUN_0071e77c(double *param_1)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = (double)(ulong)*(byte *)(param_1 + 1);
  switch(dVar2) {
  case 0.0:
    break;
  case 4.94065645841247e-324:
    dVar2 = *param_1;
    break;
  case 9.88131291682493e-324:
    dVar2 = *param_1;
    if ((long)dVar2 < 0) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
      goto code_r0x0071e840;
    }
    break;
  case 1.48219693752374e-323:
    if (9.223372036854776e+18 < ABS(*param_1)) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
      goto code_r0x0071e840;
    }
    dVar2 = (double)(long)*param_1;
    break;
  default:
    FUN_0071fb6c();
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
code_r0x0071e840:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x71e844);
    (*pcVar1)();
  case 2.47032822920623e-323:
    dVar2 = (double)(ulong)*(byte *)param_1;
  }
  return dVar2;
}



/* Entry: 0071e874; end: 0071e96b;  */

double FUN_0071e874(double *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  dVar4 = (double)(ulong)*(byte *)(param_1 + 1);
  switch(dVar4) {
  case 0.0:
    break;
  case 4.94065645841247e-324:
    dVar4 = *param_1;
    if ((long)dVar4 < 0) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
      goto code_r0x0071e938;
    }
    break;
  case 9.88131291682493e-324:
    dVar4 = *param_1;
    break;
  case 1.48219693752374e-323:
    dVar4 = *param_1;
    bVar2 = false;
    bVar3 = true;
    if (0.0 <= dVar4) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar4)) {
        bVar2 = dVar4 == 1.8446744073709552e+19;
        bVar3 = 1.8446744073709552e+19 <= dVar4;
      }
    }
    if (bVar3 && !bVar2) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
      goto code_r0x0071e938;
    }
    dVar4 = (double)(long)dVar4;
    break;
  default:
    FUN_0071fb6c();
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
code_r0x0071e938:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x71e93c);
    (*pcVar1)();
  case 2.47032822920623e-323:
    dVar4 = (double)(ulong)*(byte *)param_1;
  }
  return dVar4;
}



/* Entry: 0071e96c; end: 0071ea2b;  */

double FUN_0071e96c(double *param_1)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = 0.0;
  switch(*(char *)(param_1 + 1)) {
  case '\0':
    break;
  case '\x01':
    dVar2 = (double)(long)*param_1;
    break;
  case '\x02':
    dVar2 = (double)((ulong)*param_1 & 1) + (double)((ulong)*param_1 >> 1) * 2.0;
    break;
  case '\x03':
    dVar2 = *param_1;
    break;
  default:
    FUN_0071fb6c(0);
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x71ea14);
    (*pcVar1)();
  case '\x05':
    dVar2 = 1.0;
    if (*(char *)param_1 == '\0') {
      dVar2 = 0.0;
    }
  }
  return dVar2;
}



/* Entry: 0071ea2c; end: 0071eacb;  */

byte FUN_0071ea2c(byte *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  
  bVar3 = 0;
  switch(param_1[8]) {
  case 0:
    goto code_r0x0071ea8c;
  case 1:
  case 2:
    bVar2 = *(long *)param_1 == 0;
    break;
  case 3:
    FUN_0071eacc(*(undefined8 *)param_1);
    bVar2 = ((uint)param_1 & 0xfffffffd) == 1;
    break;
  default:
    FUN_0071fb6c();
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x71eab4);
    (*pcVar1)();
  case 5:
    bVar3 = *param_1;
    goto code_r0x0071ea8c;
  }
  bVar3 = !bVar2;
code_r0x0071ea8c:
  return bVar3 & 1;
}



/* Entry: 0071eacc; end: 0071eb1f;  */

undefined4 FUN_0071eacc(double param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0.0) {
    return 3;
  }
  uVar2 = 4;
  if (ABS(param_1) < 2.2250738585072014e-308) {
    uVar2 = 5;
  }
  uVar1 = 2;
  if (ABS(param_1) != INFINITY) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if (!NAN(param_1)) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 0071eb20; end: 0071ebaf;  */

int FUN_0071eb20(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[1] == '\a') {
    return *(int *)(*param_1 + 0x10);
  }
  if (((char)param_1[1] == '\x06') && (*(long *)(*param_1 + 0x10) != 0)) {
    lVar1 = *param_1 + 8;
    FUN_00466844();
    return *(int *)(lVar1 + 0x28) + 1;
  }
  return 0;
}


