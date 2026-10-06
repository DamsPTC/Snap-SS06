/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10793baac; end: 10793bab7;  */

undefined ** FUN_10793baac(void)

{
  return &PTR_DAT_1109ef4d8;
}



/* Entry: 10793be08; end: 10793be33;  */

undefined8 FUN_10793be08(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793be34(param_1);
  return param_1;
}



/* Entry: 10793c118; end: 10793c11b;  */

void FUN_10793c118(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x38);
    if (param_1 == (ulong *)0x0) {
      func_0x0001079458d4();
      *(ulong **)(unaff_x21 + 0x38) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010793bc84();
    }
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  func_0x000107946584();
  if ((extraout_x8_03 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793c2fc; end: 10793c3b3;  */

long * FUN_10793c2fc(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001079463c8();
  while (unaff_w22 != unaff_w21) {
    func_0x000107946318();
    func_0x000107946d7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
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



/* Entry: 10793c4d4; end: 10793c51f;  */

void FUN_10793c4d4(undefined8 param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ec830);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946b2c();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  lVar1 = unaff_x21 + 0x18;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 10793c668; end: 10793c6d7;  */

void FUN_10793c668(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x000107946514();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x0001079470c0();
  return;
}



/* Entry: 10793c7f4; end: 10793c89f;  */

long * FUN_10793c7f4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946414();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10793c824;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10793c824:
      param_4 = (long *)&UNK_10f438d7f;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946964();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10793c86c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793c86c;
  param_4 = (long *)&UNK_10f438dc1;
  func_0x000107946aa4();
  func_0x000107946498();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10793c86c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
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



/* Entry: 10793cadc; end: 10793cbb7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793cadc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107944db8(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001079472b4();
  }
  func_0x000107944db8(param_1 + 0x48);
  func_0x00010029b2d4(param_1 + 0x60);
  func_0x00010029b2d4(param_1 + 0x68);
  func_0x00010029b2d4(param_1 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010793c58c(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000107931420(*(undefined8 *)(param_1 + 0x90));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x98));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x0001079339c8(*(undefined8 *)(param_1 + 0xa0));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
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



/* Entry: 10793d2e4; end: 10793d30b;  */

undefined8 FUN_10793d2e4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 10793d468; end: 10793d4bb;  */

void FUN_10793d468(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793d660; end: 10793d6c3;  */

long FUN_10793d660(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10793d968; end: 10793da47;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793d968(ulong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar2 = (uVar1 & 7) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      func_0x000107947080();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079459e0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10793d468();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        func_0x000107945a2c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x00010793d4bc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001079470a4();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb0();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x000107931364();
      }
    }
  }
  func_0x000107947390();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x30) = extraout_w8;
  }
  func_0x000107947384();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x31) = extraout_w8_00;
  }
  if (*(char *)(unaff_x20 + 0x32) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x32) = 1;
  }
  func_0x000107946584();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010794672c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10793db80; end: 10793db97;  */

void FUN_10793db80(void)

{
  func_0x00010793e518();
  func_0x0001079462e4();
  return;
}



/* Entry: 10793dca0; end: 10793dccb;  */

undefined8 FUN_10793dca0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793dccc(param_1);
  return param_1;
}



/* Entry: 10793de70; end: 10793de73;  */

void FUN_10793de70(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107947294();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010793def4();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793e0cc; end: 10793e0fb;  */

void FUN_10793e0cc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107946b20();
  func_0x00010738f258();
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



/* Entry: 10793e38c; end: 10793e39f;  */

void FUN_10793e38c(long param_1)

{
  undefined4 extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000107946e64();
  switch(extraout_w8) {
  case 2:
    func_0x000107946c3c();
  default:
    goto code_r0x00010793e288;
  case 6:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto code_r0x00010793e288;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010793da48();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto code_r0x00010793e288;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010793dbe8();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto code_r0x00010793e288;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010793e07c();
    }
  }
  __ZdlPv();
code_r0x00010793e288:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10793e600; end: 10793e637;  */

long FUN_10793e600(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010793e360();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10793e808; end: 10793e833;  */

undefined8 FUN_10793e808(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793e834(param_1);
  return param_1;
}



/* Entry: 10793eb54; end: 10793eb7f;  */

undefined8 FUN_10793eb54(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793eb80(param_1);
  return param_1;
}



/* Entry: 10793ecf4; end: 10793ecf7;  */

void FUN_10793ecf4(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107947294();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010793def4();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793edfc; end: 10793ee2f;  */

void FUN_10793edfc(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
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



/* Entry: 10793ef70; end: 10793ef7b;  */

undefined ** FUN_10793ef70(void)

{
  return &PTR_DAT_1109efab0;
}



/* Entry: 10793f15c; end: 10793f193;  */

void FUN_10793f15c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10793f4c4; end: 10793f5a3;  */

long FUN_10793f4c4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 5;
  if (*(int *)(param_1 + 0x20) != 1) {
    lVar1 = 0;
  }
  lVar2 = lVar1 + 5;
  if (*(int *)(param_1 + 0x24) != 2) {
    lVar2 = lVar1;
  }
  lVar1 = lVar2 + 5;
  if (*(int *)(param_1 + 0x28) != 3) {
    lVar1 = lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10793f764; end: 10793f7d7;  */

long FUN_10793f764(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 2;
  if (1 < *(int *)(param_1 + 0x18) - 1U) {
    lVar1 = 0;
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



/* Entry: 10793fa78; end: 10793fa7b;  */

undefined8 FUN_10793fa78(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793fb84; end: 10793fc3b;  */

long * FUN_10793fb84(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946448();
  while (unaff_x26 != 0) {
    func_0x000107946378();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x000107946894();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x000107946ea4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x000107946764(), in_NG != in_OV)) {
      func_0x000107946598();
      unaff_x20 = param_1;
    }
    else {
      func_0x0001079469b8();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x0001079464f0();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x000107946e98();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 10793fd08; end: 10793fd37;  */

void FUN_10793fd08(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10793fee8; end: 10793fefb;  */

void FUN_10793fee8(void)

{
  func_0x00010793fec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079400e4; end: 10794016b;  */

void FUN_1079400e4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x00010794678c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107931520(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946dc4();
  return;
}



/* Entry: 107940294; end: 10794036b;  */

long * FUN_107940294(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946448();
  while (unaff_x26 != 0) {
    func_0x000107946378();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x000107946894();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x000107946ea4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x000107946764(), in_NG != in_OV)) {
      func_0x000107946598();
      unaff_x20 = param_1;
    }
    else {
      func_0x0001079469b8();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x0001079464f0();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x000107946e98();
  }
  if ((*(byte *)(unaff_x21 + 0x28) & 1) != 0) {
    func_0x0001079468c8();
    func_0x000107946bd4();
    func_0x000107946b6c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 107940448; end: 10794047b;  */

void FUN_107940448(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
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



/* Entry: 1079406c8; end: 1079406d3;  */

undefined ** FUN_1079406c8(void)

{
  return &PTR_DAT_1109efee8;
}



/* Entry: 10794085c; end: 10794086f;  */

void FUN_10794085c(void)

{
  func_0x000107940830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079409ec; end: 107940a0f;  */

undefined8 FUN_1079409ec(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107940b74; end: 107940b97;  */

undefined8 FUN_107940b74(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107940c78; end: 107940ca3;  */

void FUN_107940c78(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
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



/* Entry: 107940e10; end: 107940e23;  */

void FUN_107940e10(void)

{
  func_0x000107940de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10794126c; end: 10794140b;  */

void FUN_10794126c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107940ea0();
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



/* Entry: 107941900; end: 107941913;  */

void FUN_107941900(void)

{
  func_0x0001079418d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107941a48; end: 107941a7b;  */

void FUN_107941a48(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 107941d18; end: 107941d23;  */

undefined ** FUN_107941d18(void)

{
  return &PTR_DAT_1109f02c0;
}



/* Entry: 107941f60; end: 107941f8f;  */

void FUN_107941f60(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
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



/* Entry: 107942184; end: 1079421b7;  */

void FUN_107942184(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107946b20();
  FUN_107944da4();
  func_0x000107946ef0();
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



/* Entry: 1079423a0; end: 1079423ab;  */

undefined ** FUN_1079423a0(void)

{
  return &PTR_DAT_1109f03a0;
}



/* Entry: 107942600; end: 107942613;  */

void FUN_107942600(void)

{
  func_0x0001079425d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10794273c; end: 107942767;  */

void FUN_10794273c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010794673c();
  func_0x000107947378();
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



/* Entry: 1079428fc; end: 10794290f;  */

void FUN_1079428fc(void)

{
  func_0x0001079428b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107942b00; end: 107942b5f;  */

void FUN_107942b00(long param_1)

{
  long unaff_x19;
  
  func_0x0001079473cc();
  if (param_1 != 0) {
    func_0x00010794232c();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0001079425d8();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x0001079426f0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x000107935cfc();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x0001079428b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107942ef8; end: 107942f4f;  */

void FUN_107942ef8(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed0f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x00010598fd00();
  lVar1 = unaff_x21 + 0x28;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 1079430fc; end: 10794316b;  */

long FUN_1079430fc(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010794656c();
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 107943318; end: 107943723;  */

long FUN_107943318(long param_1)

{
  undefined8 uVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int extraout_w11;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = 5;
  }
  func_0x00010794742c(uVar1);
  lVar2 = extraout_x8;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = extraout_x8 +
            (ulong)((uint)(extraout_w11 + (int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9) >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar2;
  return lVar2;
}



/* Entry: 107943834; end: 10794385b;  */

void FUN_107943834(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107943988; end: 1079439af;  */

void FUN_107943988(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107944da4; end: 107944dcb;  */

void FUN_107944da4(ulong *param_1)

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



/* Entry: 107945230; end: 10794532f;  */

void FUN_107945230(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946b0c();
  if (param_1 == 0) {
    func_0x000107946da0();
  }
  else {
    func_0x00010794691c();
  }
  func_0x000107946e4c();
  func_0x000107946e58(&PTR_DAT_1109edc30);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107946fc0();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107946fc0();
  }
  *(long *)(unaff_x21 + 0x20) = param_1;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107946fc0();
  }
  *(long *)(unaff_x21 + 0x28) = param_1;
  if ((uVar1 >> 3 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107946fc0();
  }
  *(long *)(unaff_x21 + 0x30) = param_1;
  return;
}



/* Entry: 10794564c; end: 10794569b;  */

long FUN_10794564c(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109ecdd0);
  FUN_10793ada4();
  return param_1;
}



/* Entry: 107945a8c; end: 107945adb;  */

void FUN_107945a8c(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079467e4();
  }
  func_0x000107946d24();
  func_0x000107946d3c(&PTR_DAT_1109ed550);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946778();
  func_0x00010793dbcc();
  func_0x000107946dd0();
  return;
}



/* Entry: 107945ee4; end: 107945f33;  */

long FUN_107945ee4(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109eca60);
  func_0x000107940aa4();
  return param_1;
}



/* Entry: 107946280; end: 1079474cf;  */

void FUN_107946280(void)

{
  return;
}



/* Entry: 107947678; end: 1079476af;  */

void FUN_107947678(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107947558();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 1;
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



/* Entry: 107948214; end: 10794829b;  */

undefined8 FUN_107948214(long param_1)

{
  long lVar1;
  
  func_0x00010c247d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bc92e28();
  _objc_release(param_1);
  if (lVar1 < 0x27) {
    if (lVar1 == 0x1c) {
      return 4;
    }
    if (lVar1 == 0x22) {
      return 3;
    }
  }
  else {
    if (lVar1 == 0x6c) {
      return 2;
    }
    if (lVar1 == 0x65) {
      return 2;
    }
    if (lVar1 == 0x27) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10794a2bc; end: 10794a3ab;  */

void FUN_10794a2bc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(puVar2);
    func_0x00010bf97e80(param_2);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10794b750; end: 10794b7b7; +[SCMTGetPlaylistResponse descriptor] */

void FUN_10794b750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726f70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64c10,
                        &PTR____CFConstantStringClassReference_110e0b378,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_DAT_11323a768,2,0x18,0x1c);
    puRam0000000113726f70 = puVar1;
  }
  return;
}



/* Entry: 10794ba90; end: 10794baf7; +[SCMTInternalGetAllPoisResponse descriptor] */

void FUN_10794ba90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726fb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64e90,
                        &PTR____CFConstantStringClassReference_110ea62b8,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_DAT_11323a748,1,0x10,0x1c);
    puRam0000000113726fb0 = puVar1;
  }
  return;
}



/* Entry: 10794c5a0; end: 10794c637;  */

void FUN_10794c5a0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bf1f3c0();
  puVar2 = PTR_PTR_1126ae6b8;
  if (param_2 == 0) {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010be99a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10794ccbc; end: 10794ce27;  */

void FUN_10794ccbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf002e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c0dff20(lVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR_PTR_1126af4c0;
    if (lVar5 == 0) {
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar5 = lVar4;
      func_0x00010bf97200(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0(puVar6,param_2,lVar5,*(undefined8 *)(lVar1 + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar7 = puVar6;
      func_0x00010bfb3860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar7 == (undefined *)0x0) {
        func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        puVar7 = puVar6;
        func_0x00010bf59960(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5cf60(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),uVar3,
                            *(undefined8 *)(param_1 + 0x38),lVar4,puVar7,
                            *(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
    }
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10794e42c; end: 10794e55f;  */

void FUN_10794e42c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0b760();
    if (iVar1 == 5) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = uVar3;
      _objc_release(uVar2);
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0ed100();
      uVar2 = 3;
      if (iVar1 != 1) {
        uVar2 = 0;
      }
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar2;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010c0c0800(param_2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10794edb0; end: 10794ee7b;  */

void FUN_10794edb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf99260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010794ee7c(param_1,0,0,0,param_2,0,0,param_3,0);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10794fe10; end: 10794fe27;  */

void FUN_10794fe10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107950698; end: 10795082f;  */

void FUN_107950698(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    func_0x000108dfcd80(0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010794f724();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      func_0x000108dfcd80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126bcdd8;
      _objc_alloc(PTR_PTR_1126bcdd8);
      func_0x00010c0206e0();
      _objc_release(puVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107951290; end: 1079514f3; -[SCMediaReferenceFactoryImpl createMediaReferenceForSnapDocKey:localContentKey:config:mediaId:serializedFeatureMetadata:] */

void FUN_107951290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c08fa60(param_7);
  puVar1 = PTR_PTR_1126b25d8;
  _objc_alloc_init();
  func_0x00010c1bf080();
  func_0x00010c0c55e0(param_6);
  func_0x00010c1c4aa0(puVar1);
  if (param_5 != 0) {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    puVar7 = PTR_PTR_1126bfc90;
    func_0x00010c0c46a0(param_3);
    func_0x00010c119380(puVar7);
    func_0x00010c0295e0();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c0d7e00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010bf93ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    func_0x00010bf93e80(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c0c46a0(puVar2);
    func_0x0001079520f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071640(param_5);
    _objc_retain(param_6);
    _objc_retain(puVar2);
    func_0x00010c1261a0(uVar3);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107951db4; end: 107951eb3;  */

void FUN_107951db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7ff0;
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc860;
  func_0x00010bf4c8c0(PTR_PTR_1126bc860);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c003760(puVar1);
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d5768;
  _objc_alloc(PTR_PTR_1126d5768);
  func_0x00010c029620();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079527ec; end: 1079527ff;  */

void FUN_1079527ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_boolValueForConfigKeySync_featur_1125a56c0,
             &PTR____CFConstantStringClassReference_110ea6438,0);
  return;
}



/* Entry: 107952de4; end: 107952f4f; -[SCSnapDocManagerImpl queryMediaStatusForKey:mediaMetadata:snapDoc:] */

undefined8
FUN_107952de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = 0;
  lVar2 = param_1;
  func_0x00010bee77e0(param_1,param_2,param_3,param_5,param_4,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  _objc_release(param_4);
  if (lVar1 == 0) {
    lVar3 = param_1;
    func_0x00010bde7e60(param_1,param_2,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdf7ce0(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c11d220();
      _objc_release(uVar6);
    }
    else {
      uVar7 = 0;
    }
    _objc_release(lVar3);
  }
  else {
    func_0x00010be52ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea64d8,lVar1);
    uVar7 = 3;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1079537dc; end: 10795381b;  */

void FUN_1079537dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107951f74();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079541f8; end: 1079543c7;  */

void FUN_1079541f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  lVar3 = lVar2;
  func_0x00010be96600(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107954ec8; end: 107954ed3;  */

void FUN_107954ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107954ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 107955368; end: 1079553fb; -[SCSnapDocManagerImpl cloneAndUpdateMediaReferenceForSnapDoc:mediaListId:newContentKey:error:] */

void FUN_107955368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010bf51e00(param_3);
  func_0x00010bedb600(param_1,param_2,param_3,0,param_5,param_4,param_6);
  _objc_release(param_5);
  uVar1 = param_3;
  if ((int)param_1 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107955998; end: 107955b07; -[SCSnapDocManagerImpl authClaimMediaWithKey:mediaReferences:error:] */

void FUN_107955998(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  long *param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined1 *puStack_408;
  undefined1 *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined1 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined1 *puStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  long lStack_1b8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar18 = auStack_e8;
  uVar13 = 0x10;
  puVar1 = param_4;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar16 = *plStack_120;
    do {
      puVar18 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_4);
        }
        lVar20 = param_1;
        func_0x00010bf106a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar20 != 0) {
          puVar12 = (undefined8 *)param_3;
          puVar18 = param_4;
          func_0x00010c0bb280(param_1);
          if (param_5 != (long *)0x0) {
            _objc_retainAutorelease(lVar20);
            *param_5 = lVar20;
          }
          _objc_release(lVar20);
          goto LAB_107955ab4;
        }
        puVar18 = puVar18 + 1;
      } while (puVar1 != puVar18);
      puVar18 = auStack_e8;
      uVar13 = 0x10;
      puVar1 = param_4;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
LAB_107955ab4:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  _objc_retain(puVar18);
  _objc_retain(uVar13);
  uVar2 = param_6;
  _objc_retain();
  puStack_2d0 = &uStack_2d8;
  uStack_2d8 = 0;
  uStack_2c8 = 0x2020000000;
  uStack_2c0 = 1;
  _dispatch_group_create();
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  puVar1 = puVar18;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puStack_408 = puVar1;
  func_0x00010bf52a60();
  if (puStack_408 != (undefined1 *)0x0) {
    lVar16 = *plStack_310;
    do {
      puStack_3e0 = (undefined1 *)0x0;
      do {
        if (*plStack_310 != lVar16) {
          _objc_enumerationMutation(puVar1);
        }
        lVar19 = *(long *)(lStack_318 + (long)puStack_3e0 * 8);
        _dispatch_group_enter(uVar2);
        lVar20 = lVar19;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar20;
        func_0x00010c08fa60();
        if (lVar14 != 0) {
          _objc_release(lVar20);
code_r0x000107955c80:
          uVar4 = *(undefined8 *)(param_3 + 0x40);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bf1f3c0();
          _objc_release(uVar4);
          if ((int)uVar5 != 0) {
            puVar10 = param_3;
            func_0x00010bf106a0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar10 == (undefined1 *)0x0) {
              _dispatch_group_leave(uVar2);
              goto code_r0x000107955e88;
            }
            _objc_release();
          }
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_348 = 0;
          plStack_350 = (long *)0x0;
          lStack_358 = 0;
          uStack_360 = 0;
          puVar10 = puVar18;
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar10;
          func_0x00010c0ff660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          puVar10 = puVar6;
          func_0x00010bf52a60();
          if (puVar10 == (undefined1 *)0x0) {
            _objc_release(puVar6);
          }
          else {
            lVar20 = 0;
            lVar14 = *plStack_350;
            do {
              puVar15 = (undefined1 *)0x0;
              do {
                if (*plStack_350 != lVar14) {
                  _objc_enumerationMutation(puVar6);
                }
                lVar17 = *(long *)(lStack_358 + (long)puVar15 * 8);
                lVar3 = lVar17;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar3 != 0) {
                  lVar3 = lVar17;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar7 = lVar3;
                  func_0x00010c0c5180();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar7;
                  func_0x00010c0c55e0();
                  lVar9 = lVar19;
                  func_0x00010c0c55e0();
                  _objc_release(lVar7);
                  _objc_release(lVar3);
                  if (lVar8 == lVar9) {
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar20);
                    lVar20 = lVar17;
                  }
                }
                puVar15 = puVar15 + 1;
              } while (puVar10 != puVar15);
              puVar10 = puVar6;
              func_0x00010bf52a60();
            } while (puVar10 != (undefined1 *)0x0);
            _objc_release(puVar6);
            if (lVar20 != 0) {
              puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_398 = 0xc2000000;
              puStack_390 = &UNK_107956064;
              puStack_388 = &UNK_1109f1710;
              _objc_retain(puVar12);
              puStack_368 = &uStack_2d8;
              puStack_380 = (undefined1 *)puVar12;
              lStack_378 = lVar19;
              uStack_370 = uVar2;
              func_0x00010be5e160(param_3);
              _objc_release(puStack_380);
              _objc_release(lVar20);
              goto code_r0x000107955e88;
            }
          }
          *(undefined1 *)(puStack_2d0 + 3) = 0;
          _dispatch_group_leave(uVar2);
          goto code_r0x000107955f38;
        }
        lVar14 = lVar19;
        func_0x00010bf4cce0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar14;
        func_0x00010c08fa60();
        _objc_release(lVar14);
        _objc_release(lVar20);
        if (lVar3 != 0) goto code_r0x000107955c80;
        puVar10 = param_3;
        func_0x00010bf106a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar10 != (undefined1 *)0x0) {
          func_0x00010c0bb2a0(param_3);
          *(undefined1 *)(puStack_2d0 + 3) = 0;
        }
        _dispatch_group_leave(uVar2);
        _objc_release(puVar10);
code_r0x000107955e88:
        puStack_3e0 = puStack_3e0 + 1;
      } while (puStack_3e0 != puStack_408);
      puStack_408 = puVar1;
      func_0x00010bf52a60();
    } while (puStack_408 != (undefined1 *)0x0);
  }
code_r0x000107955f38:
  _objc_release(puVar1);
  puStack_3d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3d0 = 0xc2000000;
  puStack_3c8 = &UNK_10795607c;
  puStack_3c0 = &UNK_110883360;
  puStack_3a8 = &uStack_2d8;
  puStack_3b8 = (undefined1 *)puVar12;
  uStack_3b0 = param_6;
  _objc_retain();
  _objc_retain(puVar12);
  func_0x000100bc0718(uVar2,uVar13,&puStack_3d8);
  _objc_release(uStack_3b0);
  _objc_release(puStack_3b8);
  _objc_release(param_6);
  _objc_release(puVar12);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_2d8,8);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    uVar11 = 0;
    __Block_object_dispose(&uStack_2d8);
    __Unwind_Resume();
    if ((uVar11 & 1) == 0) {
      *(undefined1 *)(*(long *)(*(long *)(puVar18 + 0x38) + 8) + 0x18) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(puVar18 + 0x30));
    return;
  }
  return;
}



/* Entry: 1079563e0; end: 1079565f7; -[SCSnapDocManagerImpl removeClaimForKey:mediaReferences:completion:] */

void FUN_1079563e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      lVar3 = param_1;
      func_0x00010bde7e60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(lVar3);
      lVar7 = lVar7 + 1;
    } while (lVar5 != lVar7);
    lVar5 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  func_0x00010be8c300(param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  func_0x00010c12b940(uVar4);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_4 + 0x30);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107956608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x10))(lVar5,1);
    return;
  }
  return;
}



/* Entry: 107957004; end: 107957173; -[SCSnapDocManagerImpl _maybeRegisterMediaForSnapDocKey:mediaReference:mediaMetadata:snapDoc:successBlock:failureBlock:] */

void FUN_107957004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126b7fc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_107957174;
  puStack_78 = &UNK_1109f17a0;
  uStack_60 = param_8;
  _objc_retain();
  puStack_70 = puVar2;
  uStack_68 = param_3;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010be5e160(param_1,param_2,param_3,param_4,param_5,param_6,&puStack_90);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar1 = uStack_58;
  _objc_retain(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(uStack_60);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107957e30; end: 1079583d3; -[SCSnapDocManagerImpl _processRetrieveContentWithContentBundle:mediaMetadata:mediaReference:completion:] */

void FUN_107957e30(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar10 = param_4;
  func_0x00010bf93e60();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar11;
  func_0x00010c08fa60();
  puVar4 = param_4;
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar11);
    _objc_release(puVar10);
LAB_107957f64:
    func_0x00010bf93e40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08fa60();
    if (puVar11 == (undefined *)0x0) {
      _objc_release(puVar10);
      puVar11 = (undefined *)0x0;
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar11 = param_4;
      func_0x00010bf93e40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar11;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c08fa60();
      _objc_release(puVar1);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar4);
      if (puVar2 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        puVar10 = (undefined *)0x0;
        goto LAB_10795814c;
      }
      uVar5 = *(ulong *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      if ((uVar6 & 1) == 0) {
        puVar11 = param_4;
        func_0x00010bf93e40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar11;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x000107952038();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar11);
        puVar4 = param_4;
        func_0x00010bf93e40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar4;
        func_0x00010c085300();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x000107952038();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        puVar11 = param_4;
        func_0x00010bf93e40(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar11;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340();
        _objc_release(puVar1);
        _objc_release(puVar11);
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        puVar4 = param_4;
        func_0x00010bf93e40(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar4;
        func_0x00010c085300();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340();
      }
      _objc_release(puVar1);
    }
  }
  else {
    puVar1 = param_4;
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar11);
    _objc_release(puVar10);
    if (puVar3 == (undefined *)0x0) goto LAB_107957f64;
    puVar11 = param_4;
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
LAB_10795814c:
  lVar7 = param_3;
  func_0x00010bfc68a0();
  if ((int)lVar7 == 0) {
    if (puVar10 != (undefined *)0x0 && puVar11 != (undefined *)0x0) {
      func_0x00010c0c6c20(param_5);
      lVar7 = param_1;
      func_0x00010beb4700();
      if ((int)lVar7 != 0) {
        func_0x00010c0c6c20(param_5);
        func_0x00010bdf8a00(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        param_3 = param_1;
      }
    }
    puVar1 = PTR_PTR_1126d5768;
    _objc_alloc(PTR_PTR_1126d5768);
    puVar4 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(param_5);
    func_0x00010bf0b760(param_4);
    func_0x00010c029620(puVar1);
    (**(code **)(param_6 + 0x10))(param_6,puVar1,param_5);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_6);
    _objc_retain(param_5);
    uStack_70 = puVar10 != (undefined *)0x0 && puVar11 != (undefined *)0x0;
    _objc_retain(param_3);
    _objc_retain(puVar10);
    _objc_retain(puVar11);
    _objc_retain(param_4);
    func_0x00010c13e420(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(param_4);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107958bb8; end: 107958bef; -[SCSnapDocManagerImpl _supportsPlaintextMediaDetectionForMediaType:] */

undefined8 FUN_107958bb8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((param_3 < 0xc) && ((1 << (ulong)(param_3 & 0x1f) & 0xdb3U) != 0)) || (param_3 == 0xfbadbeef)
     ) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1079596c4; end: 107959767; -[SCSnapDocManagerImpl _decryptData:key:iv:] */

void FUN_1079596c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c156ca0(param_3,param_2,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10795973c;
    }
  }
  lVar1 = 0;
LAB_10795973c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10795a0ec; end: 10795a17f; -[SCSnapDocManagerImpl _handleSingleResultCompletionForSingleResult:resultList:multipleTasksCompletionCallback:] */

void FUN_10795a0ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x60);
  func_0x00010befa120(param_4,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x60);
  func_0x00010c0e7120(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10795ab74; end: 10795acab; -[SCSnapDocManagerImpl _addMediaReferenceForLocalContentKey:localCacheKey:snapDoc:mediaType:newMediaListIdCounter:] */

void FUN_10795ab74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b25d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1bf080(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1bf020(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1c4aa0(puVar1,param_2,param_7);
  func_0x00010c1c5440(puVar1,param_2,param_6);
  func_0x00010c1c4ac0(param_5,param_2,param_7);
  uVar2 = param_5;
  func_0x00010c0c6280(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010befa120(uVar2,param_2,puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bcf20;
  _objc_alloc_init(PTR_PTR_1126bcf20);
  puVar4 = puVar1;
  func_0x00010c0c55e0(puVar1);
  func_0x00010c1c4aa0(puVar3,param_2,puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10795b474; end: 10795b50b; -[SCSnapDocManagerImpl _dataFromInMemoryCacheForKey:] */

void FUN_10795b474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010b0ee738(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10795b910; end: 10795b937; -[SCSnapDocMediaResultImpl getMediaId] */

void FUN_10795b910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795ba7c; end: 10795baa3; -[SCSnapDocPlaybackMediaResultImpl getMediaResultsMap] */

void FUN_10795ba7c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795c2c8; end: 10795c367;  */

void FUN_10795c2c8(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if ((param_4 == 0) || (lVar2 == 0)) {
    puVar1 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained(puVar1);
    func_0x00010be1a880();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126d57b8;
    _objc_alloc(PTR_PTR_1126d57b8);
    func_0x00010c008560();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10795cd24; end: 10795d193; -[SCSnapDocThumbnailResolverImpl _generateThumbnailFromBaseMediaResult:overlayImageResult:snapDoc:snapDocKey:thumbnailSize:completion:] */

void FUN_10795cd24(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_148;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_7;
  func_0x00010bfdc7e0();
  lVar2 = param_6;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puStack_148 = (undefined *)0x0;
  }
  else {
    puStack_148 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_5;
  func_0x00010bfc7700();
  if ((int)lVar2 == 2) {
    lVar2 = param_5;
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar6;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar8 = PTR_PTR_1126d57b8;
      _objc_alloc(PTR_PTR_1126d57b8);
      func_0x00010c008560();
      (**(code **)(param_9 + 0x10))(param_9,puVar8);
      _objc_release(puVar8);
      _objc_release(lVar6);
    }
    else {
      puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 == (undefined *)0x0) {
        param_3 = PTR_PTR_1126d57b8;
        _objc_alloc(PTR_PTR_1126d57b8);
        func_0x00010c008560();
        (**(code **)(param_9 + 0x10))(param_9,param_3);
      }
      else {
        func_0x00010be1c200(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d57b8;
        _objc_alloc(PTR_PTR_1126d57b8);
        func_0x00010c08fa60(param_3);
        func_0x00010c008560(puVar4);
        (**(code **)(param_9 + 0x10))(param_9,puVar4);
        _objc_release(puVar4);
      }
      _objc_release(param_3);
      _objc_release(puVar8);
      _objc_release(lVar6);
    }
  }
  else {
    _objc_initWeak(auStack_80,param_3);
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010bfc4120(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf549c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(uVar5);
    if ((int)uVar1 == 0) {
      uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    }
    else {
      uStack_98 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
      uStack_a0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
      uStack_90 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    }
    uVar5 = uVar7;
    func_0x00010c0d5720(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar7);
    _objc_copyWeak(auStack_c0,auStack_80);
    _objc_retain(puStack_148);
    uStack_a8 = (undefined1)uVar1;
    uStack_b8 = param_1;
    uStack_b0 = param_2;
    _objc_retain(param_9);
    func_0x00010bfe6c40(uVar5);
    _objc_release(uVar5);
    _objc_release(param_9);
    _objc_release(puStack_148);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uVar7);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(puStack_148);
  _objc_release(lVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10795d600; end: 10795d82f;  */

void FUN_10795d600(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109f1a40,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar2);
  if (lRam0000000113726fc8 != -1) {
    func_0x00010002a2fc(0x113726fc8,&PTR___NSConcreteGlobalBlock_1109f1ab0);
  }
  uVar1 = uRam0000000113726fc0;
  _objc_retain(uRam0000000113726fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795e04c; end: 10795e1e3;  */

void FUN_10795e04c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  func_0x00010795d830();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010795d830();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c14bee0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    _CACurrentMediaTime();
    func_0x00010c14c040(lVar2);
    func_0x00010c1b92e0(lVar3);
    func_0x00010c1f5900(lVar3);
    lVar1 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(lVar3);
    _objc_release(lVar1);
    func_0x00010c0b2e60(param_4);
    if (param_3 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e29d58;
      func_0x000108e00200(&PTR____CFConstantStringClassReference_110e29d58,param_3,
                          &PTR____CFConstantStringClassReference_110ea6918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60(param_4);
      _objc_release(ppuVar4);
    }
    func_0x00010795d940(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10795e2c8; end: 10795e43b;  */

undefined8 FUN_10795e2c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c06d560();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010901c6c4();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar3 = 0;
      if (uVar1 != 0) {
        puStack_48 = &uStack_50;
        uStack_50 = 0;
        uStack_40 = 0x2020000000;
        uStack_38 = 0;
        uVar1 = param_1;
        func_0x00010bfb8280(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c261440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bdea0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar3 = puStack_48[3];
        __Block_object_dispose(&uStack_50,8);
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 4;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10795e760; end: 10795e98f; -[SCCollectionViewLeftAlignedLayout layoutAttributesForItemAtIndexPath:] */

void FUN_10795e760(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_7);
  puStack_88 = PTR_PTR_1126f8f18;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_layoutAttributesForItemAtIndexPa_112600c70,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  func_0x00010c1554e0(param_7);
  func_0x00010bf99b00(param_5);
  lVar3 = param_7;
  dVar6 = param_1;
  dVar8 = param_2;
  dVar10 = param_3;
  dVar12 = param_4;
  func_0x00010c0840e0();
  uVar4 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if (lVar3 == 0) {
    func_0x00010c08e3a0(param_1,param_2,param_3,param_4,puVar2);
  }
  else {
    dVar6 = dVar6 - param_2;
    dVar14 = dVar6 - param_4;
    func_0x00010c0840e0(param_7);
    func_0x00010c1554e0(param_7);
    func_0x00010bfed020(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c08c980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar9 = dVar8;
    dVar13 = dVar12;
    _objc_release(uVar4);
    puVar1 = puVar2;
    func_0x00010bfb68e0();
    dVar7 = dVar6;
    dVar11 = dVar10;
    _CGRectIntersectsRect(dVar6,dVar8,dVar10,dVar12,param_2,dVar9,dVar14,dVar13);
    if (((ulong)puVar1 & 1) == 0) {
      func_0x00010c08e3a0(param_1,param_2,param_3,param_4,puVar2);
    }
    else {
      func_0x00010bfb68e0(puVar2);
      func_0x00010c1554e0(param_7);
      func_0x00010bf99ae0(param_5);
      func_0x00010c19f0e0(dVar6 + dVar10 + dVar7,dVar8,dVar11,dVar12,puVar2);
    }
    _objc_release(puVar5);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10795ec7c; end: 10795ecab; -[SCS2RBaseAdapter .cxx_destruct] */

void FUN_10795ec7c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10795f3f0; end: 10795f403; -[SCShakeSeparatorView intrinsicContentSize] */

undefined1  [16] FUN_10795f3f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4030000000000000;
  return auVar1;
}



/* Entry: 10795f51c; end: 10795f573; -[SCSnapchatDeviceInfoProvider networkConnectionType:] */

undefined8 FUN_10795f51c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf48f60();
  _objc_release(param_3);
  if (uVar1 < 5) {
    uVar2 = *(undefined8 *)(&UNK_10dee0698 + uVar1 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


