/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004ba21c; end: 004ba25f;  */

void FUN_004ba21c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_0040d974();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 004ba260; end: 004ba333;  */

long FUN_004ba260(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puStack_108;
  undefined1 auStack_d8 [16];
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  
  func_0x004ba524();
  plVar5 = (long *)(unaff_x19 + 0x68);
  do {
    lVar4 = *plVar5;
    uVar1 = lVar4 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      FUN_00456f00(auStack_d8);
      lVar4 = (long)*(char *)(unaff_x19 + 0x5f);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        lVar4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        lVar3 = unaff_x19 + 0x48;
      }
      FUN_00648ba8(appuStack_c8,*(undefined8 *)(unaff_x19 + 0x40),lVar3,lVar4);
      appuStack_c8[0] = &PTR_FUN_009ed0b0;
      uStack_40 = 0;
      func_0x00456f38(auStack_d8);
      __Znwm();
      func_0x004ba5d0();
      func_0x004ba4e8();
      goto LAB_004ba2fc;
    }
    plVar5 = (long *)(lVar4 + 8);
  } while (*(long *)(lVar4 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar5;
  if (!(bool)uVar1) {
    func_0x004ba58c();
  }
LAB_004ba2fc:
  func_0x004ba5b0();
  func_0x004ba5f0();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  puVar2 = auStack_d8;
  FUN_0040d514();
  func_0x004ba63c();
  lVar4 = extraout_x8;
  puStack_108 = puVar2;
  func_0x004ba3d0(extraout_x8,&puStack_108);
  return lVar4;
}



/* Entry: 004ba334; end: 004ba393;  */

void FUN_004ba334(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x004ba3d0(param_1,&uStack_28);
  return;
}



/* Entry: 004ba394; end: 004ba397;  */

undefined8 * FUN_004ba394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004ba398; end: 004ba3ab;  */

void FUN_004ba398(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ba3ac; end: 004ba493;  */

void FUN_004ba3ac(void)

{
  long unaff_x19;
  
  func_0x004ba5c0();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 004ba494; end: 004ba4e7;  */

void FUN_004ba494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_004b82c0(param_1,1,param_2);
  FUN_00457810(param_1,2,param_3);
  FUN_00648c94(param_1,3);
  iVar1 = (int)param_1;
  func_0x00649404();
  _sqlite3_bind_blob();
  if (iVar1 != 0) {
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



/* Entry: 004ba4e8; end: 004ba663;  */

undefined1 * FUN_004ba4e8(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **ppuStack0000000000000018;
  long in_stack_000000a0;
  
  unaff_x20[1] = unaff_x21;
  unaff_x20[2] = unaff_x22;
  unaff_x20[0x13] = in_stack_000000a0;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  *unaff_x20 = lVar1;
  *(long **)(lVar1 + 8) = unaff_x20;
  *(long **)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
  ppuStack0000000000000018 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000070);
  __ZNSt3__15mutexD1Ev(&stack0x00000030);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 004ba664; end: 004ba7a3;  */

void FUN_004ba664(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long *plStack_48;
  
  plVar2 = (long *)((long)&section_00000158.reserved1 + 3);
  func_0x006eca3c();
  plStack_48 = plVar2;
  if (plVar2 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    lVar6 = *plVar2;
    lVar3 = lVar6;
    FUN_006ebef0();
    lStack_50 = lVar3;
    if ((lVar3 == 0) ||
       (lVar4 = lVar6, FUN_006edb34(lVar6,lVar3,param_2,param_3,0), (int)lVar4 == 0)) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      uVar1 = 0x21;
      if (param_4 == 0) {
        uVar1 = 0x41;
      }
      FUN_004b8cec(&lStack_70,uVar1);
      uVar5 = 2;
      if (param_4 == 0) {
        uVar5 = 4;
      }
      FUN_006ecd54(lVar6,lVar3,uVar5,lStack_70,lStack_68 - lStack_70,0);
      if (lVar6 == 0) {
        *(undefined1 *)param_1 = 0;
      }
      else {
        param_1[1] = lStack_68;
        *param_1 = lStack_70;
        param_1[2] = lStack_60;
        lStack_68 = 0;
        lStack_60 = 0;
        lStack_70 = 0;
      }
      *(bool *)(param_1 + 3) = lVar6 != 0;
      FUN_0040d974(&lStack_70);
    }
    func_0x004ba7f0(&lStack_50);
  }
  func_0x004ba7c0(&plStack_48);
  return;
}



/* Entry: 004ba7a4; end: 004ba7bf;  */

void FUN_004ba7a4(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long *plStack_48;
  
  if (param_3 != 0x21) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  plVar1 = (long *)((long)&section_00000158.reserved1 + 3);
  func_0x006eca3c();
  plStack_48 = plVar1;
  if (plVar1 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    lVar4 = *plVar1;
    lVar2 = lVar4;
    FUN_006ebef0();
    lStack_50 = lVar2;
    if ((lVar2 == 0) || (lVar3 = lVar4, FUN_006edb34(lVar4,lVar2,param_2,0x21,0), (int)lVar3 == 0))
    {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      FUN_004b8cec(&lStack_70,0x41);
      FUN_006ecd54(lVar4,lVar2,4,lStack_70,lStack_68 - lStack_70,0);
      if (lVar4 == 0) {
        *(undefined1 *)param_1 = 0;
      }
      else {
        param_1[1] = lStack_68;
        *param_1 = lStack_70;
        param_1[2] = lStack_60;
        lStack_68 = 0;
        lStack_60 = 0;
        lStack_70 = 0;
      }
      *(bool *)(param_1 + 3) = lVar4 != 0;
      FUN_0040d974(&lStack_70);
    }
    func_0x004ba7f0(&lStack_50);
  }
  func_0x004ba7c0(&plStack_48);
  return;
}



/* Entry: 004ba7c0; end: 004ba81f;  */

long * FUN_004ba7c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x006eca8c();
  }
  return param_1;
}



/* Entry: 004ba820; end: 004ba9b7;  */

void FUN_004ba820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [32];
  long lStack_58;
  
  pplVar4 = &puStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = 0x19f;
  FUN_006eb954();
  pplVar5 = (long **)0x0;
  lStack_88 = lVar1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_006ebef0();
    lStack_90 = lVar2;
    FUN_006e405c(param_4,param_5,0);
    lVar3 = lVar1;
    lStack_98 = param_4;
    FUN_006ebef0();
    plStack_c8 = &lStack_88;
    plStack_c0 = &lStack_90;
    plStack_b8 = &lStack_98;
    plStack_b0 = &lStack_a0;
    puStack_a8 = &uStack_79;
    lStack_a0 = lVar3;
    if ((((lVar2 != 0) && (FUN_006edb34(lVar1,lVar2,param_2,param_3,0), (int)lVar1 != 0)) &&
        (lStack_98 != 0)) && (lStack_a0 != 0)) {
      lVar1 = lStack_88;
      FUN_006ec630(lStack_88,lStack_a0,0,lStack_90,lStack_98,0);
      if ((int)lVar1 != 0) {
        lVar1 = lStack_88;
        FUN_006ecd54(lStack_88,lStack_a0,2,&uStack_79,0x21,0);
        if (lVar1 == 0x21) {
          FUN_004baa7c(&puStack_e0,auStack_78,&lStack_58);
          FUN_004ba9b8(&plStack_c8);
          param_1[1] = uStack_d8;
          *param_1 = puStack_e0;
          param_1[2] = uStack_d0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          puStack_e0 = (long *)0x0;
          *(undefined1 *)(param_1 + 3) = 1;
          FUN_0040d974();
          goto LAB_004ba97c;
        }
      }
    }
    pplVar5 = &plStack_c8;
    FUN_004ba9b8();
  }
  pplVar4 = pplVar5;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_004ba97c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (**pplVar4 != 0) {
    FUN_006eb8ec();
  }
  if (*pplVar4[1] != 0) {
    FUN_006ebf84();
  }
  if (*pplVar4[2] != 0) {
    FUN_006e3cd0();
  }
  if (*pplVar4[3] != 0) {
    FUN_006ebf84();
  }
  plVar6 = pplVar4[4];
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  return;
}



/* Entry: 004ba9b8; end: 004baa23;  */

void FUN_004ba9b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)*param_1 != 0) {
    FUN_006eb8ec();
  }
  if (*(long *)param_1[1] != 0) {
    FUN_006ebf84();
  }
  if (*(long *)param_1[2] != 0) {
    FUN_006e3cd0();
  }
  if (*(long *)param_1[3] != 0) {
    FUN_006ebf84();
  }
  puVar1 = (undefined8 *)param_1[4];
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 004baa24; end: 004baa7b;  */

undefined8 * FUN_004baa24(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uStack_38;
  undefined1 uStack_34;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_006eafa8(param_1,param_2,&uStack_38);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return (undefined8 *)(ulong)CONCAT14(uStack_34,uStack_38);
  }
  ___stack_chk_fail();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_004baaac();
  return param_1;
}



/* Entry: 004baa7c; end: 004baaab;  */

undefined8 * FUN_004baa7c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_004baaac();
  return param_1;
}



/* Entry: 004baaac; end: 004bab3b;  */

void FUN_004baaac(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  lStack_40 = param_1;
  if (param_4 != 0) {
    FUN_0040d8a0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  uStack_38 = 1;
  func_0x0040d92c(&lStack_40);
  return;
}



/* Entry: 004bab3c; end: 004bab57;  */

void FUN_004bab3c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)
            (param_1,puVar2,uVar1);
  return;
}



/* Entry: 004bab58; end: 004babc3;  */

long FUN_004bab58(long param_1,long param_2,long param_3)

{
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = (undefined1)((ulong)param_3 >> 8);
  FUN_004bac74(param_1,&uStack_31);
  uStack_32 = (undefined1)param_3;
  FUN_004bac74(param_1,&uStack_32);
  FUN_004babc4(param_1,*(undefined8 *)(param_1 + 8),param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 004babc4; end: 004babcb;  */

long FUN_004babc4(long *param_1,long param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  long lVar5;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar4 = param_4 - (long)param_3;
  if (0 < lVar4) {
    plVar3 = param_1 + 2;
    lVar5 = param_1[1];
    if (*plVar3 - lVar5 < lVar4) {
      plVar2 = param_1;
      FUN_004bad58(param_1,(lVar4 - *param_1) + lVar5);
      lVar5 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        FUN_0040d90c();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + (param_2 - lVar5));
      lStack_50 = (long)plStack_68 + (long)plVar2;
      puStack_58 = puStack_60 + lVar4;
      puVar1 = puStack_60;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      FUN_004bafdc(param_1,&plStack_68,param_2);
      FUN_004bb094();
    }
    else {
      lVar5 = lVar5 - param_2;
      if (lVar4 - lVar5 == 0 || lVar4 < lVar5) {
        FUN_004bb0b4();
        puVar1 = extraout_x8_00;
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
      }
      else {
        FUN_0040d8d8(param_1,param_3 + lVar5,param_4,lVar4 - lVar5);
        if (0 < lVar5) {
          FUN_004bb0b4();
          puVar1 = extraout_x8;
          for (; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar1 = *param_3;
            puVar1 = puVar1 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
    }
  }
  return param_2;
}



/* Entry: 004babcc; end: 004babf7;  */

void FUN_004babcc(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uStack_14;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_004bab58(param_1,&uStack_14,4);
  return;
}



/* Entry: 004babf8; end: 004babfb;  */

long FUN_004babf8(long param_1,long param_2,long param_3)

{
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = (undefined1)((ulong)param_3 >> 8);
  FUN_004bac74(param_1,&uStack_31);
  uStack_32 = (undefined1)param_3;
  FUN_004bac74(param_1,&uStack_32);
  FUN_004babc4(param_1,*(undefined8 *)(param_1 + 8),param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 004babfc; end: 004bac73;  */

long *** FUN_004babfc(long *param_1,undefined1 *param_2)

{
  long ***ppplVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long **pplStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  long **pplStack_28;
  
  ppplVar1 = (long ***)(param_1 + 2);
  lVar4 = *param_1;
  if ((undefined1 *)((long)*ppplVar1 - lVar4) < param_2) {
    if ((long)param_2 < 0) {
      FUN_0040d8f8();
      func_0x004bb094();
      __Unwind_Resume();
      puVar2 = (undefined1 *)param_1[1];
      if (puVar2 < (undefined1 *)param_1[2]) {
        plVar3 = (long *)(puVar2 + 1);
        *puVar2 = *param_2;
      }
      else {
        plVar3 = param_1;
        FUN_004bacb8();
      }
      param_1[1] = (long)plVar3;
      return (long ***)((long)plVar3 + -1);
    }
    lVar5 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_0040d90c();
    puStack_40 = (undefined1 *)((long)ppplVar1 + (lVar5 - lVar4));
    puStack_30 = (undefined1 *)((long)ppplVar1 + (long)param_2);
    pplStack_48 = (long **)ppplVar1;
    puStack_38 = puStack_40;
    func_0x004bb0a0();
    ppplVar1 = &pplStack_48;
    FUN_004bae18(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 004bac74; end: 004bacb7;  */

undefined1 * FUN_004bac74(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (puVar1 < *(undefined1 **)(param_1 + 0x10)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_004bacb8();
  }
  *(undefined1 **)(param_1 + 8) = puVar2;
  return puVar2 + -1;
}



/* Entry: 004bacb8; end: 004bad57;  */

long FUN_004bacb8(long *param_1,undefined1 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_004bad58(param_1,(param_1[1] - *param_1) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_0040d90c();
  }
  puStack_50 = (undefined1 *)((long)plStack_58 + (lVar1 - lVar3));
  lStack_40 = (long)plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  func_0x004bb0a0();
  lVar3 = param_1[1];
  FUN_004bae18(&plStack_58);
  return lVar3;
}



/* Entry: 004bad58; end: 004bad93;  */

undefined8 * FUN_004bad58(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (-1 < (long)param_2) {
    puVar3 = (undefined8 *)((param_1[2] - *param_1) * 2);
    if (puVar3 < param_2 || (long)puVar3 - (long)param_2 == 0) {
      puVar3 = param_2;
    }
    if (0x3ffffffffffffffe < (ulong)(param_1[2] - *param_1)) {
      puVar3 = (undefined8 *)0x7fffffffffffffff;
    }
    return puVar3;
  }
  FUN_0040d8f8();
  lVar2 = *param_1;
  puVar3 = (undefined8 *)(param_2[1] + (lVar2 - param_1[1]));
  puVar1 = puVar3;
  _memcpy(puVar3,lVar2,param_1[1] - lVar2);
  param_2[1] = puVar3;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return puVar1;
}



/* Entry: 004bad94; end: 004bae17;  */

void FUN_004bad94(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_2[1] + (lVar1 - param_1[1]);
  _memcpy(lVar2,lVar1,param_1[1] - lVar1);
  param_2[1] = lVar2;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 004bae18; end: 004bae43;  */

long * FUN_004bae18(long *param_1)

{
  FUN_004bae44();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 004bae44; end: 004bae67;  */

void FUN_004bae44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -1;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 004bae68; end: 004baf9b;  */

long FUN_004bae68(long *param_1,long param_2,undefined1 *param_3,undefined8 param_4,long param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  long lVar4;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    plVar3 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar3 - lVar4 < param_5) {
      plVar2 = param_1;
      FUN_004bad58(param_1,(param_5 - *param_1) + lVar4);
      lVar4 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        FUN_0040d90c();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + (param_2 - lVar4));
      lStack_50 = (long)plStack_68 + (long)plVar2;
      puStack_58 = puStack_60 + param_5;
      puVar1 = puStack_60;
      for (; param_5 != 0; param_5 = param_5 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      FUN_004bafdc(param_1,&plStack_68,param_2);
      FUN_004bb094();
    }
    else {
      lVar4 = lVar4 - param_2;
      if (param_5 - lVar4 == 0 || param_5 < lVar4) {
        FUN_004bb0b4();
        puVar1 = extraout_x8_00;
        for (; param_5 != 0; param_5 = param_5 + -1) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
      }
      else {
        FUN_0040d8d8(param_1,param_3 + lVar4,param_4,param_5 - lVar4);
        if (0 < lVar4) {
          FUN_004bb0b4();
          puVar1 = extraout_x8;
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar1 = *param_3;
            puVar1 = puVar1 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
    }
  }
  return param_2;
}



/* Entry: 004baf9c; end: 004bafdb;  */

void FUN_004baf9c(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined1 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x0077a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_0099a400)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 004bafdc; end: 004bb093;  */

undefined8 FUN_004bafdc(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  _memcpy(param_2[2],param_3,param_1[1] - param_3);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 + (lVar2 - param_3);
  _memcpy(lVar3,lVar2,param_3 - lVar2);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return uVar1;
}



/* Entry: 004bb094; end: 004bb0b3;  */

undefined8 * FUN_004bb094(void)

{
  long in_stack_00000008;
  
  FUN_004bae44();
  if (in_stack_00000008 != 0) {
    __ZdlPv();
  }
  return &stack0x00000008;
}



/* Entry: 004bb0b4; end: 004bb0d7;  */

void FUN_004bb0b4(void)

{
  FUN_004baf9c();
  return;
}



/* Entry: 004bb0d8; end: 004bb6ab;  */

undefined4
FUN_004bb0d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar13;
  undefined *puVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined8 *puStack_120;
  long lStack_118;
  ulong uStack_110;
  char cStack_108;
  undefined1 auStack_100 [24];
  byte bStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte bStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined4 uStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  ppuVar20 = &PTR_PTR_00b12d08;
  if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
    ppuVar20 = *(undefined ***)(param_1 + 0x28);
  }
  if (((ulong)ppuVar20[2] & 1) == 0) {
    uVar12 = 0;
  }
  else {
    iVar4 = *(int *)(ppuVar20[0xd] + 0x1c);
    if (iVar4 == 5) {
      uVar9 = param_4;
      FUN_004baa24(param_4,param_5);
      uStack_70 = (undefined4)uVar9;
      uStack_6c = (undefined1)((ulong)uVar9 >> 0x20);
      bVar8 = *(undefined ***)(param_1 + 0x28) == (undefined **)0x0;
      ppuVar20 = &PTR_PTR_00b12d08;
      if (!bVar8) {
        ppuVar20 = *(undefined ***)(param_1 + 0x28);
      }
      func_0x004bba00(ppuVar20[0xd]);
      if (bVar8) {
        ppuVar20 = *(undefined ***)(extraout_x8 + 0x10);
      }
      else {
        ppuVar20 = &PTR_PTR_00b12a88;
      }
      bVar8 = *(undefined ***)(param_1 + 0x20) == (undefined **)0x0;
      ppuVar19 = &PTR_PTR_00b11fb0;
      if (!bVar8) {
        ppuVar19 = *(undefined ***)(param_1 + 0x20);
      }
      func_0x004bba00(ppuVar19[3]);
      if (bVar8) {
        ppuVar19 = *(undefined ***)(extraout_x8_00 + 0x10);
      }
      else {
        ppuVar19 = &PTR_PTR_00b124d8;
      }
      ppuVar2 = &PTR_PTR_00b0b978;
      if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(param_1 + 0x18);
      }
      puVar18 = (undefined8 *)((ulong)ppuVar2[2] & 0xfffffffffffffffc);
      cVar7 = *(char *)((long)puVar18 + 0x17);
      puStack_c0 = (undefined8 *)*puVar18;
      if (-1 < (long)cVar7) {
        puStack_c0 = puVar18;
      }
      puStack_88 = (undefined8 *)0x0;
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      lStack_b8 = puVar18[1];
      if (-1 < cVar7) {
        lStack_b8 = (long)cVar7;
      }
      puVar13 = (ulong *)((ulong)ppuVar20[4] & 0xfffffffffffffffc);
      cVar7 = *(char *)((long)puVar13 + 0x17);
      uStack_b0 = *puVar13;
      if (-1 < (long)cVar7) {
        uStack_b0 = (ulong)puVar13;
      }
      uStack_a8 = puVar13[1];
      if (-1 < cVar7) {
        uStack_a8 = (long)cVar7;
      }
      uStack_a0 = *(undefined4 *)(ppuVar20 + 6);
      ppuStack_98 = ppuVar19 + 2;
      func_0x004bb9ec();
      puVar14 = ppuVar19[5];
      ppuVar2 = ppuVar19 + 5;
      if (((ulong)puVar14 & 1) != 0) {
        ppuVar2 = (undefined **)(puVar14 + 7);
      }
      puVar18 = puStack_88;
      puVar3 = puStack_80;
      for (lVar16 = (long)*(int *)(ppuVar19 + 6) << 3; puStack_88 = puVar18, puStack_80 = puVar3,
          lVar16 != 0; lVar16 = lVar16 + -8) {
        puVar14 = *ppuVar2;
        ppuVar19 = &PTR_PTR_00b0b978;
        if (*(undefined ***)(puVar14 + 0x38) != (undefined **)0x0) {
          ppuVar19 = *(undefined ***)(puVar14 + 0x38);
        }
        puVar18 = (undefined8 *)((ulong)ppuVar19[2] & 0xfffffffffffffffc);
        cVar7 = *(char *)((long)puVar18 + 0x17);
        puStack_c0 = (undefined8 *)*puVar18;
        if (-1 < (long)cVar7) {
          puStack_c0 = puVar18;
        }
        lStack_b8 = puVar18[1];
        if (-1 < cVar7) {
          lStack_b8 = (long)cVar7;
        }
        puVar13 = (ulong *)(*(ulong *)(puVar14 + 0x30) & 0xfffffffffffffffc);
        cVar7 = *(char *)((long)puVar13 + 0x17);
        uStack_b0 = *puVar13;
        if (-1 < (long)cVar7) {
          uStack_b0 = (ulong)puVar13;
        }
        uStack_a8 = puVar13[1];
        if (-1 < cVar7) {
          uStack_a8 = (long)cVar7;
        }
        uStack_a0 = *(undefined4 *)(puVar14 + 0x40);
        ppuStack_98 = (undefined **)(puVar14 + 0x18);
        func_0x004bb9ec();
        ppuVar2 = ppuVar2 + 1;
        puVar18 = puStack_88;
        puVar3 = puStack_80;
      }
      bVar8 = false;
      puStack_c0 = (undefined8 *)((ulong)puStack_c0 & 0xffffffffffffff00);
      uStack_a8 = uStack_a8 & 0xffffffffffffff00;
      uVar11 = 0;
      while ((puVar18 != puVar3 && ((uVar11 & 1) == 0))) {
        FUN_004ba7a4(&lStack_e0,puVar18[2],puVar18[3]);
        if ((bStack_c8 & 1) != 0) {
          FUN_004ba820(auStack_100,lStack_e0,lStack_d8 - lStack_e0,param_6,param_7);
          if ((bStack_e8 & 1) != 0) {
            puVar15 = (ulong *)puVar18[5];
            uVar11 = *puVar15;
            puVar13 = puVar15;
            if ((uVar11 & 1) != 0) {
              puVar13 = (ulong *)(uVar11 + 7);
            }
            puVar13 = puVar13 + (int)puVar15[1];
            while( true ) {
              if ((uVar11 & 1) != 0) {
                puVar15 = (ulong *)(uVar11 + 7);
              }
              if ((puVar13 == puVar15) || ((uStack_a8 & 1) != 0)) break;
              puVar13 = puVar13 + -1;
              puVar15 = (ulong *)(*(ulong *)(*puVar13 + 0x10) & 0xfffffffffffffffc);
              bVar5 = *(byte *)((long)puVar15 + 0x17);
              uVar11 = puVar15[1];
              if (-1 < (char)bVar5) {
                uVar11 = (ulong)bVar5;
              }
              if (uVar11 == 5) {
                puVar10 = (ulong *)*puVar15;
                if (-1 < (char)bVar5) {
                  puVar10 = puVar15;
                }
                func_0x004bb8e0(puVar10,&uStack_70,5);
                if ((int)puVar10 != 0) {
                  FUN_004bba14(&puStack_120,*(ulong *)(*puVar13 + 0x18) & 0xfffffffffffffffc,
                               *puVar18,puVar18[1],lStack_e0,lStack_d8 - lStack_e0,
                               *(undefined4 *)(puVar18 + 4),param_2,param_3,param_4,param_5,
                               *(undefined4 *)(*puVar13 + 0x20));
                  if ((char)uStack_a8 == cStack_108) {
                    if ((char)uStack_a8 != '\0') {
                      FUN_004b8084(&puStack_c0,&puStack_120);
                    }
                  }
                  else if ((char)uStack_a8 == '\0') {
                    lStack_b8 = lStack_118;
                    puStack_c0 = puStack_120;
                    uStack_b0 = uStack_110;
                    lStack_118 = 0;
                    uStack_110 = 0;
                    puStack_120 = (undefined8 *)0x0;
                    uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
                  }
                  else {
                    FUN_0040d974(&puStack_c0);
                    uStack_a8 = uStack_a8 & 0xffffffffffffff00;
                  }
                  FUN_004bb774(&puStack_120);
                  bVar8 = true;
                }
              }
              puVar15 = (ulong *)puVar18[5];
              uVar11 = *puVar15;
            }
          }
          FUN_004bb774(auStack_100);
        }
        func_0x004bb9f8();
        puVar18 = puVar18 + 6;
        uVar11 = uStack_a8 & 0xff;
      }
      if ((uVar11 & 1) == 0) {
        uVar12 = 5;
        if (!bVar8) {
          uVar12 = 2;
        }
      }
      else {
        puVar18 = (undefined8 *)((ulong)ppuVar20[2] & 0xfffffffffffffffc);
        bVar5 = *(byte *)((long)puVar18 + 0x17);
        ppuVar20 = &PTR_PTR_00b12d08;
        if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
          ppuVar20 = *(undefined ***)(param_1 + 0x28);
        }
        uVar11 = puVar18[1];
        if (-1 < (char)bVar5) {
          uVar11 = (ulong)bVar5;
        }
        puVar3 = (undefined8 *)*puVar18;
        if (-1 < (char)bVar5) {
          puVar3 = puVar18;
        }
        FUN_004bbc18(&lStack_e0,puStack_c0,lStack_b8 - (long)puStack_c0,puVar3,uVar11,
                     (ulong)ppuVar20[0xc] & 0xfffffffffffffffc);
        if ((bStack_c8 & 1) == 0) {
          uVar12 = 5;
        }
        else {
          lVar16 = param_1;
          FUN_004bb6ac();
          uVar11 = *(ulong *)(lVar16 + 8);
          if ((uVar11 & 1) != 0) {
            uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
          }
          FUN_004bb9d8(lVar16 + 0x60,lStack_e0,lStack_d8 - lStack_e0,uVar11);
          FUN_004bb6ac(param_1);
          FUN_004bb6bc();
          FUN_004bb6f0(param_1);
          func_0x004f2138();
          uVar12 = 0;
        }
        func_0x004bb9f8();
      }
      func_0x004bb9dc();
      func_0x004bb9ac(&puStack_88);
    }
    else if (iVar4 == 6) {
      lVar16 = *(long *)(ppuVar20[0xd] + 0x10);
      puVar18 = (undefined8 *)(*(ulong *)(lVar16 + 0x18) & 0xfffffffffffffffc);
      bVar5 = *(byte *)((long)puVar18 + 0x17);
      uVar11 = puVar18[1];
      if (-1 < (char)bVar5) {
        uVar11 = (ulong)bVar5;
      }
      puVar17 = (undefined8 *)(*(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffc);
      bVar6 = *(byte *)((long)puVar17 + 0x17);
      puVar3 = (undefined8 *)*puVar18;
      if (-1 < (char)bVar5) {
        puVar3 = puVar18;
      }
      uVar1 = puVar17[1];
      if (-1 < (char)bVar6) {
        uVar1 = (ulong)bVar6;
      }
      puVar18 = (undefined8 *)*puVar17;
      if (-1 < (char)bVar6) {
        puVar18 = puVar17;
      }
      FUN_004bbc18(&puStack_c0,puVar3,uVar11,puVar18,uVar1,(ulong)ppuVar20[0xc] & 0xfffffffffffffffc
                  );
      if ((char)uStack_a8 == '\x01') {
        lVar16 = param_1;
        FUN_004bb6ac();
        uVar11 = *(ulong *)(lVar16 + 8);
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_004bb9d8(lVar16 + 0x60,puStack_c0,lStack_b8 - (long)puStack_c0,uVar11);
        FUN_004bb6ac(param_1);
        FUN_004bb6bc();
        uVar12 = 0;
      }
      else {
        uVar12 = 5;
      }
      FUN_004bb9d8();
    }
    else {
      uVar12 = 3;
    }
  }
  return uVar12;
}



/* Entry: 004bb6ac; end: 004bb6bb;  */

void FUN_004bb6ac(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x004bb738();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 004bb6bc; end: 004bb6ef;  */

void FUN_004bb6bc(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x004f7c7c();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}



/* Entry: 004bb6f0; end: 004bb6ff;  */

void FUN_004bb6f0(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x004bb960();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 004bb700; end: 004bb773;  */

void FUN_004bb700(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x004bb738();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 004bb774; end: 004bb793;  */

void FUN_004bb774(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_0040d974();
  }
  return;
}



/* Entry: 004bb794; end: 004bb8cb;  */

ulong * FUN_004bb794(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    uVar14 = param_2[2];
    uVar16 = param_2[5];
    uVar15 = param_2[4];
    puVar9[3] = param_2[3];
    puVar9[2] = uVar14;
    puVar9[5] = uVar16;
    puVar9[4] = uVar15;
    puVar9[1] = uVar13;
    *puVar9 = uVar12;
    puVar9 = puVar9 + 6;
    puVar5 = param_1;
  }
  else {
    puVar10 = (undefined8 *)*param_1;
    lVar11 = (long)puVar9 - (long)puVar10;
    uVar1 = lVar11 / 0x30 + 1;
    if (0x555555555555555 < uVar1) {
      FUN_004bb8cc();
LAB_004bb8c8:
      FUN_0040cee8();
      iVar4 = 0x8d55ef;
      FUN_0040d774("vector");
      _memcmp();
      return (ulong *)(ulong)(iVar4 == 0);
    }
    uVar3 = ((long)param_1[2] - (long)puVar10) / 0x30;
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar3) {
      uVar8 = 0x555555555555555;
    }
    if (uVar8 == 0) {
      puVar5 = (ulong *)0x0;
    }
    else {
      if (0x555555555555555 < uVar8) goto LAB_004bb8c8;
      puVar5 = (ulong *)(uVar8 * 0x30);
      __Znwm();
    }
    puVar2 = (undefined8 *)((long)puVar5 + lVar11);
    uVar12 = *param_2;
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar12;
    puVar2[3] = uVar14;
    puVar2[2] = uVar13;
    uVar12 = param_2[4];
    puVar2[5] = param_2[5];
    puVar2[4] = uVar12;
    puVar7 = puVar2 + (lVar11 / -0x30) * 6;
    for (; puVar10 != puVar9; puVar10 = puVar10 + 6) {
      uVar13 = puVar10[1];
      uVar12 = *puVar10;
      uVar14 = puVar10[2];
      uVar16 = puVar10[5];
      uVar15 = puVar10[4];
      puVar7[3] = puVar10[3];
      puVar7[2] = uVar14;
      puVar7[5] = uVar16;
      puVar7[4] = uVar15;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7 = puVar7 + 6;
    }
    puVar9 = puVar2 + 6;
    puVar6 = (ulong *)*param_1;
    *param_1 = (ulong)(puVar2 + (lVar11 / -0x30) * 6);
    param_1[1] = (ulong)puVar9;
    param_1[2] = (ulong)(puVar5 + uVar8 * 6);
    if (puVar6 != (ulong *)0x0) {
      __ZdlPv(puVar6);
      puVar5 = puVar6;
    }
  }
  param_1[1] = (ulong)puVar9;
  return puVar5;
}



/* Entry: 004bb8cc; end: 004bb8fb;  */

bool FUN_004bb8cc(void)

{
  int iVar1;
  
  iVar1 = 0x8d55ef;
  FUN_0040d774("vector");
  _memcmp();
  return iVar1 == 0;
}



/* Entry: 004bb8fc; end: 004bb927;  */

void FUN_004bb8fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 004bb928; end: 004bb9d7;  */

void FUN_004bb928(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x004bb960();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 004bb9d8; end: 004bba13;  */

void FUN_004bb9d8(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if ((*param_1 & 3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_009989c8)
              (*param_1 & 0xfffffffffffffffc);
    return;
  }
  if (param_4 == 0) {
    FUN_00532d74(param_2,param_3);
  }
  else {
    FUN_00532d40();
    param_2 = param_4;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 004bba14; end: 004bbadb;  */

undefined1 *
FUN_004bba14(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
            undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [12];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  puVar2 = auStack_54;
  FUN_004bbadc(param_3,param_4,param_8,param_9,param_5,param_6,param_7);
  if (((ulong)param_3 & 1) == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    param_3 = auStack_54;
    param_8 = auStack_44;
    param_4 = 0x10;
    param_9 = 0xc;
    FUN_004bbc18(param_1,param_3,0x10,param_8,0xc,param_2);
    param_5 = param_2;
  }
  FUN_004bbcc4(uStack_38);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  FUN_004babfc(&uStack_120,200);
  FUN_004babf8(&uStack_120,param_3,param_4);
  FUN_004babf8(&uStack_120,param_8,param_9);
  FUN_004babf8(&uStack_120,param_5,param_6);
  FUN_004babcc(&uStack_120,param_7);
  FUN_004babf8(&uStack_120,param_10,param_11);
  FUN_004babcc(&uStack_120,param_12);
  FUN_004babf8(&uStack_120,param_16,param_17);
  FUN_004bbc8c(&lStack_108,&uStack_120);
  puVar1 = &uStack_120;
  FUN_0040d974(puVar1);
  FUN_006eabc0();
  FUN_006fecac(puVar2,0x1c,puVar1,param_14,param_15,&UNK_008073f7,0x20,lStack_108,
               lStack_100 - lStack_108);
  FUN_0040d974(&lStack_108);
  return puVar2;
}



/* Entry: 004bbadc; end: 004bbc17;  */

undefined8
FUN_004bbadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
            undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_004babfc(&uStack_80,200);
  FUN_004babf8(&uStack_80,param_1,param_2);
  FUN_004babf8(&uStack_80,param_3,param_4);
  FUN_004babf8(&uStack_80,param_5,param_6);
  FUN_004babcc(&uStack_80,param_7);
  FUN_004babf8(&uStack_80,param_9,param_10);
  FUN_004babcc(&uStack_80,param_11);
  FUN_004babf8(&uStack_80,param_13,param_14);
  FUN_004bbc8c(&lStack_68,&uStack_80);
  puVar1 = &uStack_80;
  FUN_0040d974(puVar1);
  FUN_006eabc0();
  FUN_006fecac(param_17,0x1c,puVar1,param_15,param_16,&UNK_008073f7,0x20,lStack_68,
               lStack_60 - lStack_68);
  FUN_0040d974(&lStack_68);
  return param_17;
}



/* Entry: 004bbc18; end: 004bbc8b;  */

undefined8 *
FUN_004bbc18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [6];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_2;
  uStack_60 = param_3;
  FUN_00651e24(auStack_58,&uStack_68,&uStack_78);
  puVar1 = auStack_58;
  FUN_0065201c(param_1);
  FUN_004bbcc4(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_004baaac();
  return puVar1;
}



/* Entry: 004bbc8c; end: 004bbcc3;  */

undefined8 * FUN_004bbc8c(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_004baaac(param_1,*param_2,param_2[1],param_2[1] - *param_2);
  return param_1;
}



/* Entry: 004bbcc4; end: 004bbcd7;  */

void FUN_004bbcc4(void)

{
  return;
}



/* Entry: 004bbcd8; end: 004bc32f;  */

undefined8 FUN_004bbcd8(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 in_x7;
  undefined **ppuVar15;
  undefined8 *puVar16;
  ulong extraout_x8;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  byte bStack_1a0;
  long lStack_198;
  long lStack_190;
  byte bStack_180;
  undefined1 auStack_178 [24];
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  byte bStack_148;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte bStack_c8;
  long lStack_c0;
  long lStack_b8;
  byte bStack_a8;
  undefined8 *****pppppuStack_a0;
  long lStack_98;
  char cStack_89;
  byte bStack_88;
  long lStack_80;
  long lStack_78;
  
  ppuVar15 = &PTR_PTR_00b11fb0;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar15 = *(undefined ***)(param_1 + 0x20);
  }
  ppuVar2 = &PTR_PTR_00b12520;
  if ((undefined **)ppuVar15[3] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar15[3];
  }
  if (*(int *)((long)ppuVar2 + 0x1c) == 7) {
    ppuVar1 = &PTR_PTR_00b12d08;
    if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x28);
    }
    if ((((ulong)ppuVar1[2] & 1) == 0) || (*(int *)(ppuVar1[0xd] + 0x1c) != 7)) {
      uVar19 = 1;
    }
    else {
      if (*(int *)(ppuVar15 + 5) == 1) {
        ppuVar1 = &PTR_PTR_00b0b978;
        if (*(undefined ***)(ppuVar15[4] + 0x18) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(ppuVar15[4] + 0x18);
        }
        lVar17 = (long)*(char *)(((ulong)ppuVar1[2] & 0xfffffffffffffffc) + 0x17);
        if (lVar17 < 0) {
          lVar17 = *(long *)(((ulong)ppuVar1[2] & 0xfffffffffffffffc) + 8);
        }
        if (lVar17 == 0x10) {
          puVar21 = ppuVar2[2];
          uVar7 = *(undefined4 *)(puVar21 + 0x20);
          FUN_004c75b0(auStack_178);
          ppuVar15 = &PTR_PTR_00b0b978;
          if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
            ppuVar15 = *(undefined ***)(param_1 + 0x18);
          }
          lVar17 = (long)*(char *)(((ulong)ppuVar15[2] & 0xfffffffffffffffc) + 0x17);
          if (lVar17 < 0) {
            lVar17 = *(long *)(((ulong)ppuVar15[2] & 0xfffffffffffffffc) + 8);
          }
          if (lVar17 == 0x10) {
            plVar13 = *(long **)(param_2 + 0x18);
            lStack_160 = CONCAT44(lStack_160._4_4_,uVar7);
            if (plVar13 == (long *)0x0) {
              func_0x004686dc();
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x4bc240);
              (*pcVar12)();
            }
            (**(code **)(*plVar13 + 0x30))(&lStack_198,plVar13,auStack_178,&lStack_160);
            if ((bStack_180 & 1) == 0) {
              uVar19 = 2;
            }
            else {
              ppuVar15 = &PTR_PTR_00b12d08;
              if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
                ppuVar15 = *(undefined ***)(param_1 + 0x28);
              }
              ppuVar2 = &PTR_PTR_00b12cc8;
              if ((undefined **)ppuVar15[0xd] != (undefined **)0x0) {
                ppuVar2 = (undefined **)ppuVar15[0xd];
              }
              if (*(int *)((long)ppuVar2 + 0x1c) == 7) {
                ppuVar15 = (undefined **)ppuVar2[2];
              }
              else {
                ppuVar15 = &PTR_PTR_00b12a40;
              }
              puVar20 = (undefined8 *)((ulong)ppuVar15[3] & 0xfffffffffffffffc);
              bVar8 = *(byte *)((long)puVar20 + 0x17);
              puVar6 = (undefined8 *)*puVar20;
              uVar14 = puVar20[1];
              ppuVar15 = &PTR_PTR_00b0b978;
              if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
                ppuVar15 = *(undefined ***)(param_1 + 0x18);
              }
              FUN_004c75b0(&lStack_1d0,ppuVar15);
              if (-1 < (char)bVar8) {
                uVar14 = (ulong)bVar8;
              }
              ppuVar15 = &PTR_PTR_00b12d08;
              if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
                ppuVar15 = *(undefined ***)(param_1 + 0x28);
              }
              puVar18 = (undefined8 *)(*(ulong *)(puVar21 + 0x10) & 0xfffffffffffffffc);
              bVar9 = *(byte *)((long)puVar18 + 0x17);
              uVar3 = puVar18[1];
              if (-1 < (char)bVar9) {
                uVar3 = (ulong)bVar9;
              }
              puVar16 = (undefined8 *)((ulong)ppuVar15[0xc] & 0xfffffffffffffffc);
              puVar4 = (undefined8 *)*puVar18;
              if (-1 < (char)bVar9) {
                puVar4 = puVar18;
              }
              puVar18 = (undefined8 *)*puVar16;
              uVar10 = puVar16[1];
              if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
                puVar18 = puVar16;
                uVar10 = (ulong)*(byte *)((long)puVar16 + 0x17);
              }
              lStack_160 = 0;
              lStack_158 = 0;
              uStack_150 = 0;
              FUN_004babfc(&lStack_160,uVar14 + (lStack_190 - lStack_198) + 0x19);
              if (-1 < (char)bVar8) {
                puVar6 = puVar20;
              }
              FUN_004bc5a0(&lStack_160,puVar6,uVar14);
              FUN_004bc5a0(&lStack_160,lStack_1d0,lStack_1c8 - lStack_1d0);
              FUN_004bc5a0(&lStack_160,lStack_198,lStack_190 - lStack_198);
              FUN_004bbc8c(&lStack_80,&lStack_160);
              FUN_0040d974(&lStack_160);
              FUN_00425cb4(&pppppuStack_a0,"Wrapping-Key-Derive");
              ppppppuVar5 = (undefined8 ******)pppppuStack_a0;
              if (-1 < (long)cStack_89) {
                ppppppuVar5 = &pppppuStack_a0;
              }
              lVar17 = lStack_98;
              if (-1 < cStack_89) {
                lVar17 = (long)cStack_89;
              }
              FUN_004bc330(&lStack_160,lStack_80,lStack_78 - lStack_80,ppppppuVar5,lVar17,0x10);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_a0);
              if ((bStack_148 & 1) == 0) {
                func_0x004bc4d0();
              }
              else {
                FUN_00425cb4(&lStack_c0,"CEK-IV-Derive");
                FUN_004bc4b8(&pppppuStack_a0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_c0);
                if ((bStack_88 & 1) == 0) {
                  func_0x004bc4d0();
                }
                else {
                  FUN_00425cb4(&lStack_e0,"WK-IV-Derive");
                  FUN_004bc4b8(&lStack_c0);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_e0);
                  lVar11 = lStack_158;
                  lVar17 = lStack_160;
                  if ((bStack_a8 & 1) == 0) {
                    func_0x004bc4d0();
                  }
                  else {
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_e8 = 0;
                    FUN_004bc570(&uStack_f8,uVar7);
                    FUN_004bbc8c(&lStack_118,&uStack_f8);
                    FUN_004bc3f4(&lStack_e0,lVar17,lVar11 - lVar17,lStack_c0,lStack_b8 - lStack_c0,
                                 puVar4,uVar3,in_x7,lStack_118,lStack_110 - lStack_118);
                    FUN_0040d974(&lStack_118);
                    func_0x004bc4c8();
                    if ((bStack_c8 & 1) == 0) {
                      func_0x004bc4d0();
                    }
                    else {
                      uStack_f8 = 0;
                      uStack_f0 = 0;
                      uStack_e8 = 0;
                      FUN_004bc3f4(&lStack_118,lStack_e0,lStack_d8 - lStack_e0,pppppuStack_a0,
                                   lStack_98 - (long)pppppuStack_a0,puVar18,uVar10,in_x7,0,0);
                      func_0x004bc4c8();
                      func_0x004bc4d0(uStack_100);
                      if ((extraout_x8 & 1) != 0) {
                        FUN_004bbc8c(&lStack_1b8,&lStack_118);
                        bStack_1a0 = 1;
                      }
                      FUN_004bb774(&lStack_118);
                    }
                    FUN_004bb774(&lStack_e0);
                  }
                  FUN_004bb774(&lStack_c0);
                }
                FUN_004bb774(&pppppuStack_a0);
              }
              FUN_004bb774(&lStack_160);
              FUN_0040d974(&lStack_80);
              FUN_0040d974(&lStack_1d0);
              if ((bStack_1a0 & 1) == 0) {
                uVar19 = 5;
              }
              else {
                lVar17 = param_1;
                FUN_004bb6ac();
                uVar14 = *(ulong *)(lVar17 + 8);
                if ((uVar14 & 1) != 0) {
                  uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
                }
                FUN_004bb9d8(lVar17 + 0x60,lStack_1b8,lStack_1b0 - lStack_1b8,uVar14);
                FUN_004bb6ac(param_1);
                FUN_004bb6bc();
                FUN_004bb6f0(param_1);
                func_0x004f2138();
                uVar19 = 0;
              }
              FUN_004bb774(&lStack_1b8);
            }
            FUN_004bb774(&lStack_198);
          }
          else {
            FUN_004bc480(&lStack_160,3);
            func_0x004bc4dc(*(undefined8 *)(*param_3 + 0x10));
            uVar19 = 4;
          }
          FUN_0040d974(auStack_178);
          return uVar19;
        }
      }
      uVar19 = 2;
    }
  }
  else {
    uVar19 = 0;
  }
  FUN_004bc480(&lStack_160,uVar19);
  func_0x004bc4dc(*(undefined8 *)(*param_3 + 0x10));
  return 4;
}



/* Entry: 004bc330; end: 004bc3f3;  */

void FUN_004bc330(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  plVar3 = &lStack_70;
  FUN_004b8cec(plVar3,param_6);
  lVar2 = lStack_68;
  lVar4 = lStack_70;
  FUN_006eabc0();
  FUN_006fecac(lVar4,lVar2 - lVar4,plVar3,param_2,param_3,&UNK_00807417,0x20,param_4,param_5);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = lStack_70;
    param_1[2] = lStack_60;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_70 = 0;
  }
  *(bool *)(param_1 + 3) = !bVar1;
  FUN_0040d974(&lStack_70);
  return;
}



/* Entry: 004bc3f4; end: 004bc47f;  */

void FUN_004bc3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [6];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_98 = param_9;
  uStack_90 = param_10;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_2;
  uStack_60 = param_3;
  FUN_00651e24(auStack_58,&uStack_68,&uStack_78);
  puVar1 = auStack_58;
  puVar3 = &uStack_88;
  func_0x00652038(param_1,puVar1,puVar3,&uStack_98);
  uVar2 = (uint)puVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x004bf984();
  *puVar1 = &PTR_DAT_009ed150;
  lVar4 = puVar1[8];
  if (lVar4 != 3) {
    puVar1[8] = lVar4 + 1;
    *(undefined1 *)((long)puVar1 + lVar4 * 0x10 + 0xc) = 1;
    puVar1[lVar4 * 2 + 2] = (ulong)(uVar2 | 0x40);
    if ((*(byte *)(puVar1 + lVar4 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(puVar1 + lVar4 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 004bc480; end: 004bc4b7;  */

void FUN_004bc480(undefined8 *param_1,uint param_2)

{
  long lVar1;
  
  func_0x004bf984(param_1,10);
  *param_1 = &PTR_DAT_009ed150;
  lVar1 = param_1[8];
  if (lVar1 != 3) {
    param_1[8] = lVar1 + 1;
    *(undefined1 *)((long)param_1 + lVar1 * 0x10 + 0xc) = 1;
    param_1[lVar1 * 2 + 2] = (ulong)(param_2 | 0x40);
    if ((*(byte *)(param_1 + lVar1 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar1 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 004bc4b8; end: 004bc4f3;  */

void FUN_004bc4b8(long *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  plVar3 = &lStack_70;
  FUN_004b8cec(plVar3,0xc);
  lVar2 = lStack_68;
  lVar4 = lStack_70;
  FUN_006eabc0();
  FUN_006fecac(lVar4,lVar2 - lVar4,plVar3);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = lStack_70;
    param_1[2] = lStack_60;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_70 = 0;
  }
  *(bool *)(param_1 + 3) = !bVar1;
  FUN_0040d974(&lStack_70);
  return;
}



/* Entry: 004bc4f4; end: 004bc56f;  */

long FUN_004bc4f4(long param_1,undefined1 param_2,long param_3,long param_4)

{
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = param_2;
  FUN_004bac74(param_1,&uStack_31);
  uStack_32 = (undefined1)((ulong)param_4 >> 8);
  FUN_004bac74(param_1,&uStack_32);
  uStack_33 = (undefined1)param_4;
  FUN_004bac74(param_1,&uStack_33);
  FUN_004babc4(param_1,*(undefined8 *)(param_1 + 8),param_3,param_3 + param_4);
  return param_1;
}



/* Entry: 004bc570; end: 004bc59f;  */

void FUN_004bc570(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uStack_14;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_004bc4f4(param_1,0x81,&uStack_14,4);
  return;
}



/* Entry: 004bc5a0; end: 004bc5af;  */

long FUN_004bc5a0(long param_1,long param_2,long param_3)

{
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = 1;
  FUN_004bac74(param_1,&uStack_31);
  uStack_32 = (undefined1)((ulong)param_3 >> 8);
  FUN_004bac74(param_1,&uStack_32);
  uStack_33 = (undefined1)param_3;
  FUN_004bac74(param_1,&uStack_33);
  FUN_004babc4(param_1,*(undefined8 *)(param_1 + 8),param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 004bc5b0; end: 004bc603;  */

void FUN_004bc5b0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  
  puVar2 = param_2;
  func_0x004cd39c();
  puVar1 = (undefined1 *)register0x00000008;
  puVar3 = param_2;
  puVar5 = param_1;
  if ((int)puVar2 != 0) goto code_r0x004c7c98;
  while( true ) {
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x70);
    param_2 = puVar1 + -0x70;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar4 = param_3;
    FUN_004c76ac();
    *(undefined1 **)(puVar1 + -0x48) = puVar3;
    *(undefined1 **)(puVar1 + -0x40) = puVar4;
    puVar2 = param_3;
    FUN_004c76ac();
    *(undefined1 **)(puVar1 + -0x58) = puVar2;
    *(undefined1 **)(puVar1 + -0x50) = puVar4;
    puVar2 = puVar1 + -0x48;
    puVar3 = puVar1 + -0x58;
    FUN_00523d20();
    *(undefined1 **)(puVar1 + -0x38) = puVar2;
    *(undefined1 **)(puVar1 + -0x30) = puVar3;
    FUN_004baa7c(puVar1 + -0x70,puVar1 + -0x38,puVar1 + -0x28);
    uVar6 = *(undefined8 *)(puVar1 + -0x70);
    puVar5[1] = *(undefined8 *)(puVar1 + -0x68);
    *puVar5 = uVar6;
    puVar5[2] = *(undefined8 *)(puVar1 + -0x60);
    *(undefined8 *)(puVar1 + -0x68) = 0;
    *(undefined8 *)(puVar1 + -0x60) = 0;
    *(undefined8 *)(puVar1 + -0x70) = 0;
    FUN_0040d974();
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)(puVar1 + -0x28)) break;
    ___stack_chk_fail();
    unaff_x30 = FUN_004c7c98;
    __Unwind_Resume();
    param_1 = extraout_x8;
    unaff_x19 = puVar5;
    unaff_x20 = param_3;
code_r0x004c7c98:
    puVar1 = (undefined1 *)register0x00000008;
    puVar3 = param_2;
    param_3 = param_2;
    puVar5 = param_1;
  }
  return;
}



/* Entry: 004bc604; end: 004bc65b;  */

void FUN_004bc604(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_009ed188;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 004bc65c; end: 004bc717;  */

bool FUN_004bc65c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  code *extraout_x8;
  
  func_0x004bd860();
  FUN_004bc718();
  if (param_1 != 0) {
    ppuVar1 = &PTR_PTR_00b11808;
    if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_3 + 0x18);
    }
    FUN_004b8ef4(param_1,param_2,ppuVar1[7],param_3);
    func_0x004bd850();
    (*extraout_x8)();
  }
  return param_1 != 0;
}



/* Entry: 004bc718; end: 004bc733;  */

void FUN_004bc718(void)

{
  FUN_004bceb0();
  return;
}



/* Entry: 004bc734; end: 004bc833;  */

undefined1  [16] FUN_004bc734(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  code *extraout_x8;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_50 [8];
  long lStack_48;
  ulong uStack_40;
  char cStack_38;
  
  func_0x004bd860();
  FUN_004bc718();
  if (param_1 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    FUN_004b8e78(auStack_50);
    cVar2 = cStack_38;
    lVar1 = lStack_48;
    if (cStack_38 == '\0') {
      uVar7 = 0;
    }
    else {
      cStack_38 = '\0';
      uVar7 = uStack_40;
    }
    lStack_48 = 0;
    FUN_004bd6bc(auStack_50);
    func_0x004bd850();
    (*extraout_x8)();
    bVar3 = lVar1 != 0;
    uVar6 = 0;
    if (bVar3) {
      uVar6 = uVar7 & 0xffffffffffffff00;
    }
    uVar5 = 0;
    if (bVar3) {
      uVar5 = uVar7 & 0xff;
    }
    bVar4 = cVar2 != '\0';
    uVar7 = 0;
    if (bVar4) {
      uVar7 = uVar6;
    }
    uVar6 = 0;
    if (bVar4) {
      uVar6 = uVar5;
    }
    uVar5 = 0;
    if (bVar4) {
      uVar5 = (ulong)bVar3;
    }
  }
  auVar8._0_8_ = uVar6 | uVar7;
  auVar8._8_8_ = uVar5;
  return auVar8;
}



/* Entry: 004bc834; end: 004bca5b;  */

void FUN_004bc834(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = param_1;
  func_0x004bd8a4();
  FUN_004bc718();
  if (lVar1 != 0) {
    func_0x004b8ea4(auStack_b8,lVar1 + 0x78);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),6);
    uStack_d8 = uStack_d8 & 0xffffffffffffff00;
    bStack_c0 = 0;
    if (cStack_90 != '\0') {
      uStack_d0 = uStack_a0;
      uStack_d8 = uStack_a8;
      uStack_c8 = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      bStack_c0 = 1;
      FUN_004b9490(&uStack_a8);
    }
    lStack_e0 = lStack_b0;
    lStack_b0 = 0;
    while (((bStack_c0 & 1) != 0 && (lStack_e0 != 0))) {
      if ((bStack_c0 & 1) == 0) {
        uVar2 = *(undefined8 *)(lStack_e0 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_70,lStack_e0 + 0x58);
        FUN_00461b38(auStack_58,"expected row but query reported done. sql:",auStack_70);
        FUN_00641f40(uVar2,0x65,auStack_58);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
      }
      FUN_004bbc8c(auStack_88,&uStack_d8);
      func_0x004bd120();
      FUN_0040d974(auStack_88);
      FUN_004b93f8(&lStack_e0);
    }
    func_0x004bd880();
    FUN_004b9508(&uStack_d8);
    FUN_004bd6f0(auStack_b8);
  }
  return;
}



/* Entry: 004bca5c; end: 004bce0f;  */

void FUN_004bca5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_190;
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [48];
  byte bStack_138;
  undefined1 auStack_130 [8];
  long lStack_128;
  undefined1 auStack_120 [80];
  char cStack_d0;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar8 = param_1;
  func_0x004bd8a4();
  FUN_004bc718();
  if (lVar8 != 0) {
    func_0x004b8ec8(auStack_130,lVar8 + 0xf0,param_2);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),7);
    lStack_190 = 0;
    auStack_188[0] = 0;
    bStack_138 = 0;
    if (cStack_d0 == '\0') {
      lVar8 = 0;
    }
    else {
      FUN_004b98d8(auStack_188,auStack_120);
      FUN_004b9798(auStack_120);
      lVar8 = lStack_190;
    }
    uVar7 = 0;
    uVar5 = 0;
    lStack_190 = lStack_128;
    lStack_128 = lVar8;
    while (((bStack_138 & 1) != 0 && (lStack_190 != 0))) {
      if ((bStack_138 & 1) == 0) {
        uVar6 = *(undefined8 *)(lStack_190 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_98,lStack_190 + 0x58);
        FUN_00461b38(auStack_80,"expected row but query reported done. sql:",auStack_98);
        FUN_00641f40(uVar6,0x65,auStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      }
      FUN_004d3020(auStack_c8,0,auStack_168);
      if (uVar5 < uVar7) {
        FUN_004b99a4(uVar5,auStack_c8);
        uVar5 = uVar5 + 0x30;
      }
      else {
        lVar8 = uVar5 - *unaff_x19;
        uVar3 = lVar8 / 0x30 + 1;
        if (0x555555555555555 < uVar3) {
          unaff_x19[1] = uVar5;
          unaff_x19[2] = uVar7;
          FUN_004bd62c();
LAB_004bcdbc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x4bcdc0);
          (*pcVar1)();
        }
        uVar9 = (long)(uVar7 - *unaff_x19) / 0x30;
        uVar4 = uVar9 * 2;
        if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
          uVar4 = uVar3;
        }
        if (0x2aaaaaaaaaaaaa9 < uVar9) {
          uVar4 = 0x555555555555555;
        }
        if (uVar4 == 0) {
          lVar2 = 0;
        }
        else {
          if (0x555555555555555 < uVar4) {
            unaff_x19[1] = uVar5;
            unaff_x19[2] = uVar7;
            FUN_0040cee8();
            goto LAB_004bcdbc;
          }
          lVar2 = uVar4 * 0x30;
          __Znwm();
        }
        lVar8 = lVar2 + lVar8;
        FUN_004b99a4(lVar8,auStack_c8);
        uVar9 = *unaff_x19;
        uVar10 = lVar8 + ((long)(uVar5 - uVar9) / -0x30) * 0x30;
        uVar3 = uVar10;
        for (uVar7 = uVar9; uVar7 != uVar5; uVar7 = uVar7 + 0x30) {
          FUN_004b99a4(uVar3,uVar7);
          uVar3 = uVar3 + 0x30;
        }
        for (; uVar9 != uVar5; uVar9 = uVar9 + 0x30) {
          FUN_004d3084(uVar9);
        }
        uVar5 = lVar8 + 0x30;
        uVar7 = lVar2 + uVar4 * 0x30;
        uVar3 = *unaff_x19;
        *unaff_x19 = uVar10;
        if (uVar3 != 0) {
          __ZdlPv();
        }
      }
      FUN_004d3084(auStack_c8);
      FUN_004b96ec(&lStack_190);
    }
    unaff_x19[1] = uVar5;
    unaff_x19[2] = uVar7;
    func_0x004bd88c();
    FUN_004b9a14(auStack_188);
    FUN_004bd75c(auStack_130);
  }
  return;
}



/* Entry: 004bce10; end: 004bce97;  */

void FUN_004bce10(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x004bd860();
  FUN_004bc718();
  if (param_1 != 0) {
    FUN_004b7c30(param_1 + 0x1f0,param_2);
    func_0x004bd850();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 004bce98; end: 004bce9b;  */

undefined8 * FUN_004bce98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed188;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004bce9c; end: 004bceaf;  */

void FUN_004bce9c(void)

{
  FUN_004bd638();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004bceb0; end: 004bd08f;  */

long FUN_004bceb0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long alStack_68 [7];
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 == 0) {
    FUN_0046133c(alStack_68,param_1,param_1 + 0x18);
    lVar5 = alStack_68[0];
    alStack_68[0] = 0;
    lVar2 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar5;
    if (lVar2 != 0) {
      FUN_004bd7cc();
      lVar5 = alStack_68[0];
      alStack_68[0] = 0;
      if (lVar5 != 0) {
        FUN_004bd7cc();
      }
    }
    FUN_004b70a4(alStack_68);
    plVar3 = alStack_68;
    FUN_006451b8(plVar3,*(undefined8 *)(param_1 + 0x80));
    func_0x00461890(alStack_68);
    if ((int)plVar3 == -1) {
      uVar4 = 0x58;
      ___cxa_allocate_exception(0x58);
      FUN_0064177c();
      ___cxa_throw(uVar4,&PTR_DAT_00a0c630,FUN_004bd090);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x4bd068);
      (*pcVar1)();
    }
    FUN_004bd094(alStack_68,*(undefined8 *)(param_1 + 0x80));
    lVar5 = alStack_68[0];
    alStack_68[0] = 0;
    lVar2 = *(long *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = lVar5;
    if (lVar2 != 0) {
      FUN_004bd7cc();
      lVar5 = alStack_68[0];
      alStack_68[0] = 0;
      if (lVar5 != 0) {
        FUN_004bd7cc();
      }
    }
    lVar5 = *(long *)(param_1 + 0x88);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x40);
  return lVar5;
}



/* Entry: 004bd090; end: 004bd093;  */

void FUN_004bd090(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c618;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 004bd094; end: 004bd0db;  */

void FUN_004bd094(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  FUN_004b7220();
  *param_1 = uVar1;
  return;
}



/* Entry: 004bd0dc; end: 004bd15b;  */

void FUN_004bd0dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c618;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 004bd15c; end: 004bd18b;  */

void FUN_004bd15c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 004bd18c; end: 004bd24b;  */

long FUN_004bd18c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_004bd24c(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_004bd32c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  uVar3 = *param_2;
  puStack_48[1] = param_2[1];
  *puStack_48 = uVar3;
  puStack_48[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puStack_48 = puStack_48 + 3;
  FUN_004bd29c(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x004bd510(auStack_58);
  return lVar2;
}



/* Entry: 004bd24c; end: 004bd29b;  */

long * FUN_004bd24c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar2 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_004bd320();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_004bd3c8(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 004bd29c; end: 004bd31f;  */

void FUN_004bd29c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_004bd3c8(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 004bd320; end: 004bd32b;  */

long * FUN_004bd320(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x004bd898();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004bd378();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 004bd32c; end: 004bd39b;  */

long * FUN_004bd32c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004bd378();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 004bd39c; end: 004bd3c7;  */

void FUN_004bd39c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)((long)param_2 * 0x18);
    return;
  }
  FUN_0040cee8();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    puStack_38[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_004bd460();
  FUN_004bd490(&uStack_60);
  return;
}



/* Entry: 004bd3c8; end: 004bd45f;  */

void FUN_004bd3c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_004bd460();
  FUN_004bd490(&uStack_50);
  return;
}



/* Entry: 004bd460; end: 004bd48f;  */

void FUN_004bd460(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    FUN_0040d974();
  }
  return;
}



/* Entry: 004bd490; end: 004bd4bf;  */

long FUN_004bd490(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_004bd4c0(param_1);
  }
  return param_1;
}



/* Entry: 004bd4c0; end: 004bd4df;  */

void FUN_004bd4c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    FUN_0040d974();
  }
  return;
}



/* Entry: 004bd4e0; end: 004bd53b;  */

void FUN_004bd4e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5
                 )

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    FUN_0040d974();
  }
  return;
}



/* Entry: 004bd53c; end: 004bd543;  */

void FUN_004bd53c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    FUN_0040d974();
  }
  return;
}



/* Entry: 004bd544; end: 004bd5eb;  */

void FUN_004bd544(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    FUN_0040d974();
  }
  return;
}



/* Entry: 004bd5ec; end: 004bd5f3;  */

void FUN_004bd5ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    FUN_0040d974();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 004bd5f4; end: 004bd62b;  */

void FUN_004bd5f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    FUN_0040d974();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 004bd62c; end: 004bd637;  */

undefined8 * FUN_004bd62c(undefined8 *param_1)

{
  func_0x004bd898();
  *param_1 = &PTR_FUN_009ed188;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004bd638; end: 004bd6bb;  */

undefined8 * FUN_004bd638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ed188;
  func_0x004bd674(param_1 + 3);
  func_0x004bd698(param_1 + 1);
  return param_1;
}



/* Entry: 004bd6bc; end: 004bd6ef;  */

undefined8 * FUN_004bd6bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00648ea0(uVar1);
  return param_1;
}



/* Entry: 004bd6f0; end: 004bd75b;  */

undefined8 * FUN_004bd6f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_004b9490(param_1 + 2);
  }
  FUN_004b9508((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  FUN_004b9508(param_1 + 2);
  return param_1;
}



/* Entry: 004bd75c; end: 004bd7cb;  */

undefined8 * FUN_004bd75c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
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
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_004b9798(param_1 + 2);
  }
  FUN_004b9a14((ulong)&uStack_80 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  FUN_004b9a14(param_1 + 2);
  return param_1;
}



/* Entry: 004bd7cc; end: 004bd90f;  */

void FUN_004bd7cc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 004bd910; end: 004bda37;  */

undefined8
FUN_004bd910(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [64];
  
  func_0x004be088();
  FUN_004bda38();
  lVar1 = *(long *)(unaff_x19 + 8);
  FUN_004bda54();
  uVar2 = 0;
  if ((param_1 != 0) && (lVar1 != 0)) {
    FUN_00425cb4(auStack_a8,"KrakenEkStore");
    FUN_0064942c(auStack_90,lVar1,auStack_a8);
    func_0x004be06c();
    FUN_004b9e60(param_1,param_2,param_3,param_4);
    FUN_004b9f14(param_1,param_2,param_5);
    FUN_006495bc(auStack_90);
    func_0x004be038();
    (*extraout_x8)();
    func_0x004be064();
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 004bda38; end: 004bda53;  */

void FUN_004bda38(void)

{
  FUN_004bceb0();
  return;
}



/* Entry: 004bda54; end: 004bda77;  */

void FUN_004bda54(void)

{
  FUN_004bceb0();
  return;
}



/* Entry: 004bda78; end: 004bdb97;  */

undefined8 FUN_004bda78(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  if (*param_2 == param_2[1]) {
    uVar3 = 0;
  }
  else {
    func_0x004be088();
    FUN_004bda38();
    lVar2 = *(long *)(unaff_x19 + 8);
    FUN_004bda54();
    uVar3 = 0;
    if ((param_1 != 0) && (lVar2 != 0)) {
      FUN_00425cb4(auStack_88,"KrakenEkStoreBatch");
      FUN_0064942c(auStack_70,lVar2,auStack_88);
      func_0x004be06c();
      lVar1 = param_2[1];
      for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
        FUN_004b9e60(param_1,lVar2,*(undefined4 *)(lVar2 + 0x18),lVar2 + 0x20);
      }
      FUN_006495bc(auStack_70);
      func_0x004be038();
      (*extraout_x8)();
      func_0x004be064();
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 004bdb98; end: 004bddd3;  */

void FUN_004bdb98(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *extraout_x8;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_110 [8];
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  undefined1 auStack_68 [24];
  
  func_0x004be048();
  lVar2 = *(long *)(param_1 + 8);
  FUN_004bda38();
  if (lVar2 == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return;
  }
  FUN_004b9de0(auStack_110);
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  bStack_70 = 0;
  if (cStack_e8 != '\0') {
    uStack_80 = uStack_f8;
    uStack_88 = uStack_100;
    uStack_78 = uStack_f0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    bStack_70 = 1;
    FUN_004ba21c(&uStack_100);
  }
  lVar2 = lStack_108;
  lStack_90 = lStack_108;
  lStack_108 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (cStack_e8 == '\0') {
    func_0x004ba240((ulong)&uStack_c0 | 8);
  }
  else {
    func_0x004ba240((ulong)&uStack_c0 | 8);
    if (lVar2 != 0) {
      if ((bStack_70 & 1) == 0) {
        uVar3 = *(undefined8 *)(lStack_90 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_68,lStack_90 + 0x58);
        FUN_00461b38(&uStack_c0,"expected row but query reported done. sql:",auStack_68);
        FUN_00641f40(uVar3,0x65,&uStack_c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
      }
      uStack_d8 = uStack_80;
      uStack_e0 = uStack_88;
      uStack_d0 = uStack_78;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      bVar1 = true;
      goto LAB_004bdcc8;
    }
  }
  bVar1 = false;
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
LAB_004bdcc8:
  uStack_c8 = bVar1;
  func_0x004ba240(&uStack_88);
  FUN_004bdf80(auStack_110);
  (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x10))(*(long **)(unaff_x20 + 0x18),0xf);
  if (bVar1) {
    func_0x004bdf28(extraout_x8,&uStack_e0);
  }
  else {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
  }
  func_0x004ba240(&uStack_e0);
  return;
}



/* Entry: 004bddd4; end: 004bde4b;  */

void FUN_004bddd4(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  
  func_0x004be088();
  FUN_004bda38();
  if (param_1 != 0) {
    FUN_004b7c30(param_1 + 0x200,param_2);
    func_0x004be038();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 004bde4c; end: 004bdf0f;  */

void FUN_004bde4c(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  char cStack_37;
  
  func_0x004be088();
  FUN_004bda38();
  if (param_1 != 0) {
    FUN_004b9e3c(auStack_48,param_1 + 0x78);
    if (cStack_37 != '\0') {
      cStack_37 = '\0';
    }
    uStack_40 = 0;
    FUN_004bdfec(auStack_48);
    func_0x004be038();
    (*extraout_x8)();
  }
  return;
}


