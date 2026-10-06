/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae18644; end: 10ae186ab;  */

void FUN_10ae18644(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae186ac; end: 10ae186db;  */

undefined8 FUN_10ae186ac(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  return param_1;
}



/* Entry: 10ae186dc; end: 10ae186df;  */

undefined8 FUN_10ae186dc(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  return param_1;
}



/* Entry: 10ae186e0; end: 10ae186f3;  */

void FUN_10ae186e0(void)

{
  FUN_10ae186ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae186f4; end: 10ae186ff;  */

undefined ** FUN_10ae186f4(void)

{
  return &PTR_DAT_110c7afb0;
}



/* Entry: 10ae18700; end: 10ae18733;  */

void FUN_10ae18700(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  func_0x00010ae1c1c0();
  func_0x00010ae1c250();
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



/* Entry: 10ae18734; end: 10ae1880f;  */

long * FUN_10ae18734(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010ae1bce0();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae18764;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae18764:
      param_4 = (long *)&UNK_10f6c45d6;
      func_0x00010ae1bf84();
      func_0x00010ae1bc64();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  uVar3 = *(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x00010ae1c124();
    func_0x00010ae1bf94();
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae187dc;
  }
  else if ((int)param_2 == 0) goto LAB_10ae187dc;
  param_4 = (long *)&UNK_10f6c45f7;
  func_0x00010ae1bf84();
  func_0x00010ae1bd2c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae187dc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)uVar3 < 0) {
    uVar3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)uVar3);
}



/* Entry: 10ae18810; end: 10ae1889b;  */

void FUN_10ae18810(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long unaff_x19;
  
  func_0x00010ae1bd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010ae1bf74();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae1889c; end: 10ae1889f;  */

void FUN_10ae1889c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c2d8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae188a0; end: 10ae1892b;  */

void FUN_10ae188a0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c2d8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae1892c; end: 10ae18947;  */

void FUN_10ae1892c(long param_1,long param_2)

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



/* Entry: 10ae18948; end: 10ae1896b;  */

undefined8 FUN_10ae18948(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  return param_1;
}



/* Entry: 10ae1896c; end: 10ae1896f;  */

undefined8 FUN_10ae1896c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  return param_1;
}



/* Entry: 10ae18970; end: 10ae18983;  */

void FUN_10ae18970(void)

{
  FUN_10ae18948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae18984; end: 10ae189a3;  */

undefined ** FUN_10ae18984(void)

{
  return &PTR_DAT_110c7aff0;
}



/* Entry: 10ae189a4; end: 10ae189fb;  */

long * FUN_10ae189a4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010ae1be3c();
  if ((int)param_1[2] != 0) {
    func_0x00010ae1c1a4();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae189fc; end: 10ae18a93;  */

ulong FUN_10ae189fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 10ae18a94; end: 10ae18ab7;  */

undefined8 FUN_10ae18a94(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  return param_1;
}



/* Entry: 10ae18ab8; end: 10ae18abb;  */

undefined8 FUN_10ae18ab8(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  return param_1;
}



/* Entry: 10ae18abc; end: 10ae18acf;  */

void FUN_10ae18abc(void)

{
  FUN_10ae18a94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae18ad0; end: 10ae18afb;  */

undefined ** FUN_10ae18ad0(void)

{
  return &PTR_DAT_110c7b030;
}



/* Entry: 10ae18afc; end: 10ae18ba3;  */

long * FUN_10ae18afc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010ae1be3c();
  if ((int)param_1[6] != 0) {
    func_0x00010ae1c1a4();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x00010ae1c1a4();
    func_0x000107c282cc();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010ae1c1a4();
    func_0x00010599ccb0();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010ae1c1a4();
    func_0x000107c282e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010ae1c1a4();
    func_0x000107c282c4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10ae18ba4; end: 10ae18c43;  */

ulong FUN_10ae18ba4(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = -9;
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010ae1c3fc();
    uVar1 = extraout_x8;
    iVar2 = extraout_w9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010ae1c3fc();
    uVar1 = extraout_x8_00;
    iVar2 = extraout_w9_00;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010ae1c3fc();
    uVar1 = extraout_x8_01;
    iVar2 = extraout_w9_01;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * iVar2 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar1 = lVar3 + uVar1;
  }
  *(int *)(param_1 + 0x34) = (int)uVar1;
  return uVar1;
}



/* Entry: 10ae18c44; end: 10ae18c6b;  */

undefined8 FUN_10ae18c44(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  return param_1;
}



/* Entry: 10ae18c6c; end: 10ae18c6f;  */

undefined8 FUN_10ae18c6c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  return param_1;
}



/* Entry: 10ae18c70; end: 10ae18c83;  */

void FUN_10ae18c70(void)

{
  FUN_10ae18c44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae18c84; end: 10ae18c8f;  */

undefined ** FUN_10ae18c84(void)

{
  return &PTR_DAT_110c7b070;
}



/* Entry: 10ae18c90; end: 10ae18cbb;  */

void FUN_10ae18c90(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
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



/* Entry: 10ae18cbc; end: 10ae18d3f;  */

long * FUN_10ae18cbc(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010ae1bd98();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae18d08;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10ae18d08;
  func_0x00010ae1bf84();
  func_0x00010ae1bfc8();
  param_2 = unaff_x22;
LAB_10ae18d08:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010ae1c030();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10ae18d40; end: 10ae18d97;  */

void FUN_10ae18d40(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010ae1bd38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10ae18d98; end: 10ae18d9b;  */

void FUN_10ae18d98(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae18d9c; end: 10ae18de3;  */

void FUN_10ae18d9c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae18de4; end: 10ae18e0f;  */

undefined8 FUN_10ae18de4(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  return param_1;
}



/* Entry: 10ae18e10; end: 10ae18e13;  */

undefined8 FUN_10ae18e10(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  return param_1;
}



/* Entry: 10ae18e14; end: 10ae18e27;  */

void FUN_10ae18e14(void)

{
  FUN_10ae18de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae18e28; end: 10ae18e33;  */

undefined ** FUN_10ae18e28(void)

{
  return &PTR_DAT_110c7b0a8;
}



/* Entry: 10ae18e34; end: 10ae18e63;  */

void FUN_10ae18e34(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  func_0x00010ae1c1c0();
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



/* Entry: 10ae18e64; end: 10ae18f13;  */

long * FUN_10ae18e64(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae1bce0();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae18e94;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae18e94:
      param_4 = (long *)&UNK_10f6c463f;
      func_0x00010ae1bf84();
      func_0x00010ae1bc64();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae18ee0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae18ee0;
  param_4 = (long *)&UNK_10f6c4663;
  func_0x00010ae1bf84();
  func_0x00010ae1bbfc();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae18ee0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae18f14; end: 10ae18f83;  */

void FUN_10ae18f14(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x00010ae1bd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010ae1bf74();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c3c0();
  return;
}



/* Entry: 10ae18f84; end: 10ae18f87;  */

void FUN_10ae18f84(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae18f88; end: 10ae18fef;  */

void FUN_10ae18f88(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae18ff0; end: 10ae19023;  */

long FUN_10ae18ff0(long param_1)

{
  func_0x00010ae1bf6c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10ae1c4d8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae19024; end: 10ae19027;  */

long FUN_10ae19024(long param_1)

{
  func_0x00010ae1bf6c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10ae1c4d8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae19028; end: 10ae1903b;  */

void FUN_10ae19028(void)

{
  FUN_10ae18ff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1903c; end: 10ae19047;  */

undefined ** FUN_10ae1903c(void)

{
  return &PTR_DAT_110c7b0e8;
}



/* Entry: 10ae19048; end: 10ae19133;  */

void FUN_10ae19048(ulong *param_1)

{
  ulong extraout_x8;
  
  if ((param_1[2] & 1) != 0) {
    FUN_10ae1c530(param_1[3]);
  }
  func_0x00010ae1c3e4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10ae19134; end: 10ae1914f;  */

long FUN_10ae19134(long param_1)

{
  long extraout_x8;
  
  FUN_10ae1c860();
  func_0x00010ae1bcb0();
  return param_1 + extraout_x8;
}



/* Entry: 10ae19150; end: 10ae19153;  */

void FUN_10ae19150(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae1c098();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x00010ae1af28();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      FUN_10ae1c96c(*(long *)(unaff_x21 + 0x18));
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c05c();
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



/* Entry: 10ae19154; end: 10ae191df;  */

void FUN_10ae19154(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae1c098();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x00010ae1af28();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      FUN_10ae1c96c(*(long *)(unaff_x21 + 0x18));
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c05c();
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



/* Entry: 10ae191e0; end: 10ae1921b;  */

long FUN_10ae191e0(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10ae1c4d8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae1921c; end: 10ae1921f;  */

long FUN_10ae1921c(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10ae1c4d8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae19220; end: 10ae19233;  */

void FUN_10ae19220(void)

{
  FUN_10ae191e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae19234; end: 10ae1923f;  */

undefined ** FUN_10ae19234(void)

{
  return &PTR_DAT_110c7b128;
}



/* Entry: 10ae19240; end: 10ae1927f;  */

void FUN_10ae19240(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010ae1c3b4();
  func_0x00010ae1c250();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_10ae1c530(unaff_x19[5]);
  }
  func_0x00010ae1c3e4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10ae19280; end: 10ae1935b;  */

long * FUN_10ae19280(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae1bdb8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    param_3 = (ulong)*(uint *)(param_2 + 0x78);
    param_1 = (long *)0x1;
    func_0x00010ae1bec8();
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae192d4;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae192d4:
      param_4 = (long *)&UNK_10f6c4687;
      func_0x00010ae1bf84();
      func_0x00010ae1bbfc();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae19328;
  }
  else if ((int)param_2 == 0) goto LAB_10ae19328;
  param_4 = (long *)&UNK_10f6c46ba;
  func_0x00010ae1bf84();
  func_0x00010ae1bd2c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae19328:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae1935c; end: 10ae193ef;  */

long FUN_10ae1935c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010ae1c024(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x00010ae1c024(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10ae19134(*(undefined8 *)(param_1 + 0x28));
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10ae193f0; end: 10ae193f3;  */

void FUN_10ae193f0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae1c098();
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x00010ae1bed4();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
      func_0x00010ae1af28();
      *(ulong *)(unaff_x21 + 0x28) = uVar1;
    }
    else {
      FUN_10ae1c96c();
    }
  }
  func_0x00010ae1c30c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c05c();
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



/* Entry: 10ae193f4; end: 10ae194bb;  */

void FUN_10ae193f4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae1c098();
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = uVar2;
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x00010ae1bed4();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
      func_0x00010ae1af28();
      *(ulong *)(unaff_x21 + 0x28) = uVar1;
    }
    else {
      FUN_10ae1c96c();
    }
  }
  func_0x00010ae1c30c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c05c();
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



/* Entry: 10ae194bc; end: 10ae19a27;  */

void FUN_10ae194bc(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  ulong extraout_x8_26;
  ulong extraout_x8_27;
  ulong extraout_x8_28;
  ulong extraout_x8_29;
  ulong extraout_x8_30;
  ulong extraout_x8_31;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae10ef8();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae17e08();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae13ed0();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae1425c();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae143ec();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae147c0();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae14be8();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae14f74();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_23;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15104();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae152b4();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_22;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15ab8();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae1615c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae16560();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae16700();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae16dc4();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae174e8();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae17654();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae178c8();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae17b20();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_27;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15e38();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae17f34();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18294();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_26;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae184a0();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_28;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae186ac();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18948();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18a94();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_31;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18c44();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18de4();
    }
    break;
  case 0x1d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_29;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18ff0();
    }
    break;
  case 0x1e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_30;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae191e0();
    }
    break;
  case 0x1f:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_24;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15464();
    }
    break;
  case 0x20:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15614();
    }
    break;
  case 0x21:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_25;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae180f4();
    }
    break;
  default:
    goto LAB_10ae19890;
  }
  __ZdlPv();
LAB_10ae19890:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10ae19a28; end: 10ae19c2b;  */

void FUN_10ae19a28(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  lVar3 = param_3;
  func_0x00010ae1bf9c();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = param_2;
  *unaff_x19 = &PTR_DAT_110c7a6e0;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  *(undefined4 *)(unaff_x19 + 4) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)((long)unaff_x19 + 0x24) = uVar1;
  unaff_x19[2] = *(undefined8 *)(param_3 + 0x10);
  switch(uVar1) {
  case 1:
    func_0x00010ae1c08c();
    func_0x00010ae1af68();
    break;
  case 2:
    func_0x00010ae1c08c();
    FUN_10ae1afa4();
    break;
  case 3:
    func_0x00010ae1c08c();
    func_0x00010ae1b008();
    break;
  case 4:
    func_0x00010ae1c08c();
    FUN_10ae1ae3c();
    break;
  case 5:
    func_0x00010ae1c08c();
    func_0x00010ae1b058();
    break;
  case 6:
    func_0x00010ae1c08c();
    func_0x00010ae1b0a4();
    break;
  case 7:
    func_0x00010ae1c08c();
    func_0x00010ae1b0f4();
    break;
  case 8:
    func_0x00010ae1c08c();
    func_0x00010ae1b144();
    break;
  case 9:
    func_0x00010ae1c08c();
    func_0x00010ae1b194();
    break;
  case 10:
    func_0x00010ae1c08c();
    func_0x00010ae1b1e0();
    break;
  case 0xb:
    func_0x00010ae1c08c();
    func_0x00010ae1b22c();
    break;
  case 0xc:
    func_0x00010ae1c08c();
    func_0x00010ae1b27c();
    break;
  case 0xd:
    func_0x00010ae1c08c();
    func_0x00010ae1b328();
    break;
  case 0xe:
    func_0x00010ae1c08c();
    func_0x00010ae1b374();
    break;
  case 0xf:
    func_0x00010ae1c08c();
    FUN_10ae1b3dc();
    break;
  case 0x10:
    func_0x00010ae1c08c();
    FUN_10ae1b4fc();
    break;
  case 0x11:
    func_0x00010ae1c08c();
    FUN_10ae1b554();
    break;
  case 0x12:
    func_0x00010ae1c08c();
    FUN_10ae1b5bc();
    break;
  case 0x13:
    func_0x00010ae1c08c();
    func_0x00010ae1b638();
    break;
  case 0x14:
    func_0x00010ae1c08c();
    func_0x00010ae1b6a0();
    break;
  case 0x15:
    func_0x00010ae1c08c();
    FUN_10ae1ae8c();
    break;
  case 0x16:
    func_0x00010ae1c08c();
    func_0x00010ae1b6f0();
    break;
  case 0x17:
    func_0x00010ae1c08c();
    func_0x00010ae1b740();
    break;
  case 0x18:
    func_0x00010ae1c08c();
    func_0x00010ae1b790();
    break;
  case 0x19:
    func_0x00010ae1c08c();
    FUN_10ae1b7f0();
    break;
  case 0x1a:
    func_0x00010ae1c08c();
    FUN_10ae1b854();
    break;
  case 0x1b:
    func_0x00010ae1c08c();
    func_0x00010ae1b8b8();
    break;
  case 0x1c:
    func_0x00010ae1c08c();
    func_0x00010ae1b904();
    break;
  case 0x1d:
    func_0x00010ae1c08c();
    func_0x00010ae1b954();
    break;
  case 0x1e:
    func_0x00010ae1c08c();
    func_0x00010ae1b9c0();
    break;
  case 0x1f:
    func_0x00010ae1c08c();
    func_0x00010ae1ba44();
    break;
  case 0x20:
    func_0x00010ae1c08c();
    func_0x00010ae1ba90();
    break;
  case 0x21:
    func_0x00010ae1c08c();
    func_0x00010ae1badc();
    break;
  default:
    goto LAB_10ae1bd0c;
  }
  unaff_x19[3] = puVar2;
LAB_10ae1bd0c:
  return;
}



/* Entry: 10ae19c2c; end: 10ae19c57;  */

undefined8 FUN_10ae19c2c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  FUN_10ae19c58(param_1);
  return param_1;
}



/* Entry: 10ae19c58; end: 10ae19c6b;  */

void FUN_10ae19c58(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  ulong extraout_x8_26;
  ulong extraout_x8_27;
  ulong extraout_x8_28;
  ulong extraout_x8_29;
  ulong extraout_x8_30;
  ulong extraout_x8_31;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae10ef8();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae17e08();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae13ed0();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae1425c();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae143ec();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae147c0();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae14be8();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae14f74();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_23;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15104();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae152b4();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_22;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15ab8();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae1615c();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae16560();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae16700();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae16dc4();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae174e8();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae17654();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae178c8();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae17b20();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_27;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15e38();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae17f34();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18294();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_26;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae184a0();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_28;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae186ac();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18948();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18a94();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_31;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18c44();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18de4();
    }
    break;
  case 0x1d:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_29;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae18ff0();
    }
    break;
  case 0x1e:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_30;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae191e0();
    }
    break;
  case 0x1f:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_24;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15464();
    }
    break;
  case 0x20:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae15614();
    }
    break;
  case 0x21:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010ae1c080();
      uVar1 = extraout_x8_25;
    }
    if (uVar1 != 0) goto LAB_10ae19890;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10ae180f4();
    }
    break;
  default:
    goto LAB_10ae19890;
  }
  __ZdlPv();
LAB_10ae19890:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10ae19c6c; end: 10ae19c7f;  */

void FUN_10ae19c6c(void)

{
  FUN_10ae19c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae19c80; end: 10ae19c8b;  */

undefined ** FUN_10ae19c80(void)

{
  return &PTR_DAT_110c7b168;
}



/* Entry: 10ae19c8c; end: 10ae19cbf;  */

void FUN_10ae19c8c(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_10ae194bc();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10ae19cc0; end: 10ae19d6b;  */

long * FUN_10ae19cc0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010ae1be3c();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x24);
  uVar1 = *(uint *)(param_1 + 0x24) - 1;
  if (uVar1 < 0x21) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) +
                              *(long *)(&UNK_10e517a60 + (ulong)uVar1 * 8));
    func_0x000107c303cc();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = *(long **)(unaff_x20 + 0x10);
    uVar3 = 800;
    func_0x000107c280a8(800,plVar2);
    func_0x000107c280ac(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10ae19d6c; end: 10ae19f97;  */

void FUN_10ae19d6c(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    FUN_10ae11088(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 2:
    FUN_10ae17ed0(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 3:
    FUN_10ae13fb8(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 4:
    func_0x00010ae172a0(*(undefined8 *)(param_1 + 0x18));
    goto LAB_10ae19f70;
  case 5:
    FUN_10ae1451c(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 6:
    func_0x00010ae148b4(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 7:
    FUN_10ae14cd0(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 8:
    func_0x00010ae15068(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 9:
    FUN_10ae15234(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 10:
    FUN_10ae153e4(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 0xb:
    func_0x00010ae15bac(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 0xc:
    FUN_10ae16384(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 0xd:
    FUN_10ae1665c(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 0xe:
    FUN_10ae168a8(*(undefined8 *)(param_1 + 0x18));
    goto code_r0x00010ae19ef8;
  case 0xf:
    FUN_10ae17138(*(undefined8 *)(param_1 + 0x18));
code_r0x00010ae19ef8:
    func_0x00010ae1bcb0();
    func_0x00010ae1c3cc();
    goto LAB_10ae19f70;
  case 0x10:
    FUN_10ae175d0(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x11:
    FUN_10ae17814(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x12:
    FUN_10ae17a4c(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x13:
    FUN_10ae17ca8(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x14:
    func_0x00010ae15f2c(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x15:
    func_0x00010ae172bc(*(undefined8 *)(param_1 + 0x18));
    goto LAB_10ae19f70;
  case 0x16:
    FUN_10ae183c4(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x17:
    FUN_10ae185d0(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x18:
    FUN_10ae18810(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x19:
    FUN_10ae189fc(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x1a:
    FUN_10ae18ba4(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x1b:
    FUN_10ae18d40(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x1c:
    FUN_10ae18f14(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x1d:
    func_0x00010ae190e0(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x1e:
    FUN_10ae1935c(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x1f:
    FUN_10ae15594(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x20:
    FUN_10ae15744(*(undefined8 *)(param_1 + 0x18));
    break;
  case 0x21:
    FUN_10ae181f0(*(undefined8 *)(param_1 + 0x18));
    break;
  default:
    goto LAB_10ae19f70;
  }
  func_0x00010ae1bcb0();
  func_0x00010ae1c3cc();
LAB_10ae19f70:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c3c0();
  return;
}



/* Entry: 10ae19f98; end: 10ae19f9b;  */

void FUN_10ae19f98(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae1c098();
  puVar3 = (ulong *)(param_1 + 8);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10ae194bc();
      }
      *(int *)(unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae11240();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1af68();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17de0();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1afa4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae14028();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b008();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae143ac();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1ae3c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae14570();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b058();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae14910();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b0a4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae14d40();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b0f4();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae150c4();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b144();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15288();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b194();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15438();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b1e0();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15c08();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b22c();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae1643c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b27c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae166b8();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b328();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae16948();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b374();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae172dc();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b3dc();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17624();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b4fc();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17890();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b554();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17ac8();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b5bc();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17d48();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b638();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15f88();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b6a0();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae1749c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1ae8c();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae18438();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b6f0();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae18644();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b740();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae188a0();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b790();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae1892c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b7f0();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        func_0x00010ae18a48();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b854();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae18d9c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b8b8();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae18f88();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b904();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae19154();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b954();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae193f4();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b9c0();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae155e8();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1ba44();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15798();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1ba90();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae1824c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1badc();
      break;
    default:
      goto LAB_10ae1a64c;
    }
    *(long *)(unaff_x21 + 0x18) = param_1;
  }
LAB_10ae1a64c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c05c();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10ae19f9c; end: 10ae1a66b;  */

void FUN_10ae19f9c(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae1c098();
  puVar3 = (ulong *)(param_1 + 8);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10ae194bc();
      }
      *(int *)(unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae11240();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1af68();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17de0();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1afa4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae14028();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b008();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae143ac();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1ae3c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae14570();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b058();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae14910();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b0a4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae14d40();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b0f4();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae150c4();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b144();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15288();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b194();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15438();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b1e0();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15c08();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b22c();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae1643c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b27c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae166b8();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b328();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae16948();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b374();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae172dc();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b3dc();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17624();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b4fc();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17890();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b554();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17ac8();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b5bc();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae17d48();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b638();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15f88();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b6a0();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae1749c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1ae8c();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae18438();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b6f0();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae18644();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b740();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae188a0();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b790();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae1892c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b7f0();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        func_0x00010ae18a48();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      FUN_10ae1b854();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae18d9c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b8b8();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae18f88();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b904();
      break;
    case 0x1d:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae19154();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b954();
      break;
    case 0x1e:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae193f4();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1b9c0();
      break;
    case 0x1f:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae155e8();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1ba44();
      break;
    case 0x20:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae15798();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1ba90();
      break;
    case 0x21:
      if (iVar2 == iVar1) {
        func_0x00010ae1bd78();
        FUN_10ae1824c();
        goto LAB_10ae1a64c;
      }
      func_0x00010ae1c068();
      func_0x00010ae1badc();
      break;
    default:
      goto LAB_10ae1a64c;
    }
    *(long *)(unaff_x21 + 0x18) = param_1;
  }
LAB_10ae1a64c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c05c();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10ae1a66c; end: 10ae1a7bb;  */

void FUN_10ae1a66c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010ae1c360();
  }
  else {
    func_0x00010ae1c224();
  }
  *puVar1 = &PTR_FUN_110c79a10;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_2;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10ae1a7bc; end: 10ae1a7e7;  */

long * FUN_10ae1a7bc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010ae1c3ac();
  }
  return param_1;
}



/* Entry: 10ae1a7e8; end: 10ae1a813;  */

long * FUN_10ae1a7e8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010ae1c3ac();
  }
  return param_1;
}



/* Entry: 10ae1a814; end: 10ae1a83f;  */

undefined8 * FUN_10ae1a814(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10ae1748c(param_1,param_3);
  return param_1;
}



/* Entry: 10ae1a840; end: 10ae1a86b;  */

long * FUN_10ae1a840(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010ae1c3ac();
  }
  return param_1;
}



/* Entry: 10ae1a86c; end: 10ae1ad9f;  */

void FUN_10ae1a86c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae1c360();
  }
  else {
    func_0x00010ae1c224();
  }
  *puVar1 = &PTR_FUN_110c79a10;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10ae1ada0; end: 10ae1addb;  */

void FUN_10ae1ada0(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10ae1addc; end: 10ae1ae3b;  */

undefined8 * FUN_10ae1addc(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010ae1c2b4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae1c230();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  *param_1 = &PTR_FUN_110c79ec0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010ae15fc8();
  return param_1;
}



/* Entry: 10ae1ae3c; end: 10ae1ae8b;  */

void FUN_10ae1ae3c(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010ae1c130();
  if (param_1 == 0) {
    func_0x00010ae1c048();
  }
  else {
    func_0x00010ae1be70();
  }
  func_0x00010ae1c1e0();
  func_0x00010ae1c1ec(&PTR_FUN_110c7a640);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  func_0x00010ae1be08();
  FUN_10ae143dc();
  func_0x00010ae1c154();
  return;
}



/* Entry: 10ae1ae8c; end: 10ae1aeef;  */

void FUN_10ae1ae8c(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae1bf9c();
  if (param_1 == 0) {
    func_0x00010ae1c17c();
  }
  else {
    func_0x00010ae1bf30();
  }
  func_0x00010ae1c0fc();
  func_0x00010ae1c108(&PTR_FUN_110c79fb0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  func_0x00010ae1bdc8();
  lVar1 = unaff_x20 + 0x28;
  func_0x00010ae1c0c0();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}



/* Entry: 10ae1aef0; end: 10ae1afa3;  */

undefined8 * FUN_10ae1aef0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010ae1c130();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae1c17c();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010ae1c184();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110c778e8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x00010ae08848();
  param_1[2] = lVar1;
  lVar1 = unaff_x19 + 0x18;
  func_0x00010ae08848();
  param_1[3] = lVar1;
  lVar1 = unaff_x19 + 0x20;
  func_0x00010ae08848();
  param_1[4] = lVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(unaff_x19 + 0x28);
  return param_1;
}



/* Entry: 10ae1afa4; end: 10ae1b007;  */

undefined8 * FUN_10ae1afa4(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010ae1c2b4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae1c1b0();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  *param_1 = &PTR_FUN_110c79b00;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10ae17de0();
  return param_1;
}



/* Entry: 10ae1b008; end: 10ae1b3db;  */

void FUN_10ae1b008(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010ae1c130();
  if (param_1 == 0) {
    func_0x00010ae1c048();
  }
  else {
    func_0x00010ae1be70();
  }
  func_0x00010ae1c1e0();
  func_0x00010ae1c1ec(&PTR_FUN_110c7a5a0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  func_0x00010ae1be08();
  FUN_10ae14058();
  func_0x00010ae1c154();
  return;
}



/* Entry: 10ae1b3dc; end: 10ae1b4fb;  */

undefined8 * FUN_10ae1b3dc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x70);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110c7a690;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  FUN_10ae1a814(puVar2 + 3,param_1,param_2 + 0x18);
  lVar3 = param_2 + 0x30;
  func_0x00010ae1c0f4();
  puVar2[6] = lVar3;
  lVar3 = param_2 + 0x38;
  func_0x00010ae1c0f4();
  puVar2[7] = lVar3;
  lVar3 = param_2 + 0x40;
  func_0x00010ae1c0f4();
  puVar2[8] = lVar3;
  lVar3 = param_2 + 0x48;
  func_0x00010ae1c0f4();
  puVar2[9] = lVar3;
  lVar3 = param_2 + 0x50;
  func_0x00010ae1c0f4();
  puVar2[10] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    FUN_10ae1ae3c(param_1,*(undefined8 *)(param_2 + 0x58));
  }
  puVar2[0xb] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    FUN_10ae1ae8c(param_1,*(undefined8 *)(param_2 + 0x60));
  }
  puVar2[0xc] = puVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10ae1aef0(param_1,*(undefined8 *)(param_2 + 0x68));
  }
  puVar2[0xd] = param_1;
  return puVar2;
}



/* Entry: 10ae1b4fc; end: 10ae1b553;  */

void FUN_10ae1b4fc(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010ae1bf9c();
  if (param_1 == 0) {
    func_0x00010ae1c048();
  }
  else {
    func_0x00010ae1bdac();
  }
  func_0x00010ae1c0fc();
  func_0x00010ae1c108(&PTR_FUN_110c7a1e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  FUN_10ae1a814(unaff_x21 + 0x10);
  func_0x00010ae1c154();
  return;
}



/* Entry: 10ae1b554; end: 10ae1b5bb;  */

void FUN_10ae1b554(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010ae1bf9c();
  if (param_1 == 0) {
    func_0x00010ae1c360();
  }
  else {
    func_0x00010ae1c224();
  }
  func_0x00010ae1c0fc();
  func_0x00010ae1c108(&PTR_FUN_110c79a10);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  func_0x00010ae1bdc8();
  func_0x00010598fd00(unaff_x21 + 0x28);
  *(undefined4 *)(unaff_x21 + 0x40) = 0;
  return;
}



/* Entry: 10ae1b5bc; end: 10ae1b637;  */

void FUN_10ae1b5bc(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010ae1c130();
  if (param_1 == 0) {
    func_0x00010ae1c17c();
  }
  else {
    func_0x00010ae1c184();
  }
  func_0x00010ae1c1e0();
  func_0x00010ae1c1ec(&PTR_FUN_110c79bf0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  func_0x00010598fd00(unaff_x21 + 0x10);
  lVar1 = unaff_x19 + 0x28;
  func_0x00010ae1c0f4();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x34) = 0;
  *(undefined4 *)(unaff_x21 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 10ae1b638; end: 10ae1b7ef;  */

void FUN_10ae1b638(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010ae1c130();
  if (param_1 == 0) {
    func_0x00010ae1c048();
  }
  else {
    func_0x00010ae1be70();
  }
  func_0x00010ae1c1e0();
  func_0x00010ae1c1ec(&PTR_FUN_110c79dd0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x00010ae1c0f4();
  *(long *)(unaff_x21 + 0x10) = lVar1;
  lVar1 = unaff_x19 + 0x18;
  func_0x00010ae1c0f4();
  *(long *)(unaff_x21 + 0x18) = lVar1;
  func_0x00010ae1c0f4(unaff_x19 + 0x20);
  func_0x00010ae1c33c();
  return;
}



/* Entry: 10ae1b7f0; end: 10ae1b853;  */

undefined8 * FUN_10ae1b7f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  
  func_0x00010ae1c2b4();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  *puVar1 = &PTR_FUN_110c7a000;
  puVar1[1] = unaff_x21;
  puVar1[2] = 0;
  FUN_10ae1892c();
  return puVar1;
}



/* Entry: 10ae1b854; end: 10ae1b8b7;  */

undefined8 * FUN_10ae1b854(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010ae1c2b4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae1c17c();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010ae1c184();
  }
  *param_1 = &PTR_FUN_110c7a190;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  func_0x00010ae18a48();
  return param_1;
}



/* Entry: 10ae1b8b8; end: 10ae1bb27;  */

void FUN_10ae1b8b8(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010ae1bf9c();
  if (param_1 == 0) {
    func_0x00010ae1c230();
  }
  else {
    func_0x00010ae1bfdc();
  }
  func_0x00010ae1c0fc();
  func_0x00010ae1c108(&PTR_FUN_110c79c40);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae1bd4c();
  }
  func_0x00010ae1bebc();
  func_0x00010ae1c32c();
  return;
}



/* Entry: 10ae1bb28; end: 10ae1c413;  */

long FUN_10ae1bb28(void)

{
  ulong uVar1;
  byte bVar2;
  ulong *unaff_x21;
  long unaff_x23;
  
  if ((*unaff_x21 & 1) != 0) {
    unaff_x21 = (ulong *)(*unaff_x21 + unaff_x23 + -1);
  }
  bVar2 = *(byte *)(*unaff_x21 + 0x17);
  uVar1 = *(ulong *)(*unaff_x21 + 8);
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  return uVar1 + ((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
}



/* Entry: 10ae1c414; end: 10ae1c4d7;  */

undefined8 * FUN_10ae1c414(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110c7b5a8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010ae1cad0(param_1 + 2);
  func_0x00010ae1cad0(param_1 + 5);
  func_0x00010ae1cad0(param_1 + 8);
  func_0x00010ae1cad0(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x70);
  return param_1;
}



/* Entry: 10ae1c4d8; end: 10ae1c50b;  */

long FUN_10ae1c4d8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10ae1c9fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae1c50c; end: 10ae1c50f;  */

long FUN_10ae1c50c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10ae1c9fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae1c510; end: 10ae1c523;  */

void FUN_10ae1c510(void)

{
  FUN_10ae1c4d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1c524; end: 10ae1c52f;  */

undefined ** FUN_10ae1c524(void)

{
  return &PTR_DAT_110c7b5e8;
}



/* Entry: 10ae1c530; end: 10ae1c587;  */

void FUN_10ae1c530(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  func_0x000107c282c0(param_1 + 0x28);
  func_0x000107c282c0(param_1 + 0x40);
  func_0x000107c282c0(param_1 + 0x58);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x70) = 0;
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



/* Entry: 10ae1c588; end: 10ae1c85f;  */

/* WARNING: Removing unreachable block (ram,0x00010ae1c718) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c728) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c72c) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c738) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c740) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c768) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c748) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c750) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c754) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c75c) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c698) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6a8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6ac) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6b8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6e8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6c8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6d0) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c6dc) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c798) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7a8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7ac) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7b8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7e8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7c8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7d0) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c7dc) */

long * FUN_10ae1c588(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int extraout_w8;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *unaff_x23;
  int iVar9;
  long unaff_x26;
  
  plVar7 = param_2;
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 0x70);
    param_2 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8();
  }
  func_0x00010ae1cb00(*(undefined4 *)(param_1 + 0x18));
  while (unaff_x26 != 0) {
    func_0x00010ae1ca50();
    puVar3 = unaff_x23;
    if ((long)param_2 < 0) {
      param_2 = (long *)unaff_x23[1];
      puVar3 = (undefined8 *)*unaff_x23;
    }
    func_0x00010ae1caa4(puVar3);
    cVar1 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar1 < 0) && (func_0x00010ae1caf4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1ca84(), in_NG != in_OV)) {
      param_2 = (long *)0x2;
      plVar7 = param_3;
      func_0x00010ae1ca98();
    }
    else {
      func_0x00010ae1cab0();
      if (extraout_w8 < 0) {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      func_0x00010ae1ca70();
      plVar7 = (long *)((long)plVar7 + (long)cVar1);
    }
    func_0x00010ae1cae8();
  }
  plVar2 = plVar7;
  if (*(int *)(param_1 + 0x74) != 0) {
    plVar2 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x74),plVar7);
  }
  func_0x00010ae1cb00(*(undefined4 *)(param_1 + 0x30));
  func_0x00010ae1cb00(*(undefined4 *)(param_1 + 0x48));
  func_0x00010ae1cb00(*(undefined4 *)(param_1 + 0x60));
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
    if (*param_3 - (long)plVar2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar2 + (long)iVar9;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar8);
    }
    _memcpy(plVar2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  return plVar2;
}



/* Entry: 10ae1c860; end: 10ae1c967;  */

/* WARNING: Removing unreachable block (ram,0x00010ae1c8c4) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c8a8) */
/* WARNING: Removing unreachable block (ram,0x00010ae1c8e0) */

ulong FUN_10ae1c860(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar1;
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    FUN_10ae1ca34();
    func_0x00010ae1cac0();
  }
  func_0x00010ae1cad8(*(undefined4 *)(param_1 + 0x30));
  func_0x00010ae1cad8(*(undefined4 *)(param_1 + 0x48));
  func_0x00010ae1cad8(*(undefined4 *)(param_1 + 0x60));
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar4 = uVar4 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x70)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar4 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x74)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar4 = lVar2 + uVar4;
  }
  *(int *)(param_1 + 0x78) = (int)uVar4;
  return uVar4;
}



/* Entry: 10ae1c968; end: 10ae1c96b;  */

void FUN_10ae1c968(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  func_0x00010598fce8(param_1 + 0x40,param_2 + 0x40);
  func_0x00010598fce8(param_1 + 0x58,param_2 + 0x58);
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
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


