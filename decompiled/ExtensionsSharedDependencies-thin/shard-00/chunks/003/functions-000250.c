/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00507d04; end: 00507d6b;  */

void FUN_00507d04(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f5fc();
  FUN_004df824();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f4c8();
    if (param_1 == (ulong *)0x0) {
      FUN_004dfb94();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x004f3ba4();
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00507d6c; end: 00507d8f;  */

void FUN_00507d6c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00507d90; end: 00507e97;  */

void FUN_00507d90(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f4e0();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f67c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_00508c64();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        FUN_004fe0b4();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004fbffc();
      }
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00507e98; end: 00507f3b;  */

void FUN_00507e98(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00507f3c; end: 00507fbb;  */

void FUN_00507f3c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0050eedc();
  if ((unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f4e0();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f484();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004f8528();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f484();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004f8528();
      }
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00507fbc; end: 00508017;  */

void FUN_00507fbc(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508018; end: 00508137;  */

void FUN_00508018(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_004fd4b4();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004f8528();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508138; end: 00508193;  */

void FUN_00508138(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050f224();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x00532e08(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f164();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508194; end: 005081fb;  */

void FUN_00508194(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f5fc();
  FUN_004df824();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f4c8();
    if (param_1 == (ulong *)0x0) {
      FUN_004dfb94();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x004f3ba4();
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 005081fc; end: 0050821f;  */

void FUN_005081fc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508220; end: 00508287;  */

void FUN_00508220(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x004ef708();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_0051b640();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508288; end: 00508293;  */

void FUN_00508288(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508294; end: 00508393;  */

void FUN_00508294(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong extraout_x8;
  
  puVar5 = (ulong *)param_1[1];
  puVar3 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  puVar2 = param_1;
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
    }
    puVar2 = param_1 + 3;
    func_0x00532e08(puVar2,uVar4,puVar5);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0050f3d0();
      if (puVar2 == (ulong *)0x0) {
        func_0x0050f484();
        param_1[4] = (ulong)puVar2;
      }
      else {
        FUN_004f8528();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (ulong *)param_1[5];
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_005015cc();
        param_1[5] = (ulong)puVar2;
      }
      else {
        FUN_004ff494();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0050f4c8();
      if (puVar2 == (ulong *)0x0) {
        FUN_005018b4();
        param_1[6] = (ulong)puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_00510fb0();
      }
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00508394; end: 005083b7;  */

void FUN_00508394(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 005083b8; end: 00508413;  */

void FUN_005083b8(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_0050e1f4();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_00505acc();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508414; end: 0050841f;  */

void FUN_00508414(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508420; end: 00508443;  */

undefined8 FUN_00508420(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00508444; end: 00508457;  */

void FUN_00508444(void)

{
  FUN_00508420();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508458; end: 005084cb;  */

undefined ** FUN_00508458(void)

{
  return &PTR_DAT_009fb7c8;
}



/* Entry: 005084cc; end: 005084ef;  */

undefined8 FUN_005084cc(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 005084f0; end: 00508537;  */

undefined8 * FUN_005084f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009fa5c0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_00507a40(param_1,param_3);
  return param_1;
}



/* Entry: 00508538; end: 0050854b;  */

void FUN_00508538(void)

{
  FUN_005084cc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050854c; end: 0050856b;  */

undefined ** FUN_0050854c(void)

{
  return &PTR_DAT_009fb800;
}



/* Entry: 0050856c; end: 005085d3;  */

long * FUN_0050856c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  if (param_1[2] != 0) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f028();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 005085d4; end: 0050861f;  */

ulong FUN_005085d4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 00508620; end: 00508643;  */

undefined8 FUN_00508620(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00508644; end: 00508657;  */

void FUN_00508644(void)

{
  FUN_00508620();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508658; end: 005086cb;  */

undefined ** FUN_00508658(void)

{
  return &PTR_DAT_009fb840;
}



/* Entry: 005086cc; end: 005086ef;  */

undefined8 FUN_005086cc(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 005086f0; end: 00508703;  */

void FUN_005086f0(void)

{
  FUN_005086cc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508704; end: 00508777;  */

undefined ** FUN_00508704(void)

{
  return &PTR_DAT_009fb880;
}



/* Entry: 00508778; end: 005087a3;  */

undefined8 FUN_00508778(undefined8 param_1)

{
  func_0x0050f184();
  FUN_005087a4(param_1);
  return param_1;
}



/* Entry: 005087a4; end: 005087d3;  */

void FUN_005087a4(long param_1)

{
  long unaff_x19;
  
  func_0x0050f4f8();
  if (param_1 != 0) {
    FUN_004f92f4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_004f92f4();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005087d4; end: 005087e7;  */

void FUN_005087d4(void)

{
  FUN_00508778();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005087e8; end: 005087f3;  */

undefined ** FUN_005087e8(void)

{
  return &PTR_DAT_009fb8c8;
}



/* Entry: 005087f4; end: 00508837;  */

void FUN_005087f4(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0050f19c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0050f574();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x004f7c7c(unaff_x19[4]);
    }
  }
  func_0x0050f2b8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00508838; end: 00508913;  */

long * FUN_00508838(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0050ee84();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0050f620();
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00508914; end: 00508917;  */

void FUN_00508914(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0050eedc();
  if ((unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f4e0();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f484();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004f8528();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f484();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004f8528();
      }
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00508918; end: 005089bb;  */

void FUN_00508918(undefined8 param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w22;
  
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fb100);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  func_0x0050f5f0();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f468();
    FUN_004fd4b4();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x20;
    FUN_0050eb4c();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  if ((unaff_w22 >> 2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x20;
    FUN_004efbac();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  if ((unaff_w22 >> 3 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_004fd4b4();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 005089bc; end: 005089e7;  */

undefined8 FUN_005089bc(undefined8 param_1)

{
  func_0x0050f184();
  FUN_005089e8(param_1);
  return param_1;
}



/* Entry: 005089e8; end: 00508a37;  */

void FUN_005089e8(long param_1)

{
  long unaff_x19;
  
  func_0x0050f4f8();
  if (param_1 != 0) {
    FUN_004f92f4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_00508c94();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_004f6714();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_004f92f4();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508a38; end: 00508a4b;  */

void FUN_00508a38(void)

{
  FUN_005089bc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508a4c; end: 00508a57;  */

undefined ** FUN_00508a4c(void)

{
  return &PTR_DAT_009fb900;
}



/* Entry: 00508a58; end: 00508afb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00508a58(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0050f574();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00508acc(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004f6764(param_1[5]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x004f7c7c(param_1[6]);
    }
  }
  func_0x0050f2b8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 00508afc; end: 00508c47;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_00508afc(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    func_0x0050ee84();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x28);
    func_0x0050f14c();
    param_4 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = &MACH_HEADER.cputype;
    func_0x0050f17c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00508c48; end: 00508c5f;  */

void FUN_00508c48(void)

{
  FUN_00508d50();
  func_0x0050ee50();
  return;
}



/* Entry: 00508c60; end: 00508c63;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00508c60(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f484();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004f8528();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f67c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_00508c64();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_004efbac();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004f6874();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0050f4c8();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f484();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_004f8528();
      }
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508c64; end: 00508c93;  */

void FUN_00508c64(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0050f120();
  func_0x004f8518();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f164();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508c94; end: 00508cbf;  */

long FUN_00508c94(long param_1)

{
  func_0x0050f184();
  FUN_004fc708(param_1 + 0x10);
  return param_1;
}



/* Entry: 00508cc0; end: 00508cc3;  */

long FUN_00508cc0(long param_1)

{
  func_0x0050f184();
  FUN_004fc708(param_1 + 0x10);
  return param_1;
}



/* Entry: 00508cc4; end: 00508cd7;  */

void FUN_00508cc4(void)

{
  FUN_00508c94();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508cd8; end: 00508ce3;  */

undefined ** FUN_00508cd8(void)

{
  return &PTR_DAT_009fb940;
}



/* Entry: 00508ce4; end: 00508d4f;  */

long * FUN_00508ce4(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x0050ef9c();
  func_0x0050f5c4();
  while (unaff_w22 != unaff_w21) {
    func_0x0050ee34();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x0050eff4();
    func_0x0050f2f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00508d50; end: 00508daf;  */

long FUN_00508d50(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0050f504();
  func_0x0050efdc();
  while (unaff_x22 != 0) {
    FUN_004f81a4(*unaff_x21);
    func_0x0050f330();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 00508db0; end: 00508db3;  */

void FUN_00508db0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0050f120();
  func_0x004f8518();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f164();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00508db4; end: 00508dd7;  */

undefined8 FUN_00508db4(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00508dd8; end: 00508deb;  */

void FUN_00508dd8(void)

{
  FUN_00508db4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508dec; end: 00508e5f;  */

undefined ** FUN_00508dec(void)

{
  return &PTR_DAT_009fb988;
}



/* Entry: 00508e60; end: 00508e83;  */

undefined8 FUN_00508e60(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00508e84; end: 00508e97;  */

void FUN_00508e84(void)

{
  FUN_00508e60();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508e98; end: 00508f0b;  */

undefined ** FUN_00508e98(void)

{
  return &PTR_DAT_009fb9c8;
}



/* Entry: 00508f0c; end: 00508f2f;  */

undefined8 FUN_00508f0c(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00508f30; end: 00508f43;  */

void FUN_00508f30(void)

{
  FUN_00508f0c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508f44; end: 00508fb7;  */

undefined ** FUN_00508f44(void)

{
  return &PTR_DAT_009fba08;
}



/* Entry: 00508fb8; end: 00508fdb;  */

undefined8 FUN_00508fb8(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00508fdc; end: 00508fef;  */

void FUN_00508fdc(void)

{
  FUN_00508fb8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00508ff0; end: 00509063;  */

undefined ** FUN_00508ff0(void)

{
  return &PTR_DAT_009fba48;
}



/* Entry: 00509064; end: 005090b7;  */

void FUN_00509064(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fb330);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f468();
    func_0x004e035c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 005090b8; end: 005090e3;  */

undefined8 FUN_005090b8(undefined8 param_1)

{
  func_0x0050f184();
  FUN_005090e4(param_1);
  return param_1;
}



/* Entry: 005090e4; end: 00509113;  */

void FUN_005090e4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00504c30();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509114; end: 0050911f;  */

undefined ** FUN_00509114(void)

{
  return &PTR_DAT_009fba90;
}



/* Entry: 00509120; end: 005091ff;  */

void FUN_00509120(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    FUN_00504d20(unaff_x19[3]);
  }
  func_0x0050f2b8();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00509200; end: 00509203;  */

void FUN_00509200(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x004e035c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_005052ac();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00509204; end: 0050926f;  */

void FUN_00509204(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w22;
  
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009fb240);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  func_0x0050f5f0();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f468();
    FUN_0050eb4c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_004efbac();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  return;
}



/* Entry: 00509270; end: 0050929b;  */

undefined8 FUN_00509270(undefined8 param_1)

{
  func_0x0050f184();
  FUN_0050929c(param_1);
  return param_1;
}



/* Entry: 0050929c; end: 005092cb;  */

void FUN_0050929c(long param_1)

{
  long unaff_x19;
  
  func_0x0050f4f8();
  if (param_1 != 0) {
    FUN_00508c94();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_004f6714();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005092cc; end: 005092df;  */

void FUN_005092cc(void)

{
  FUN_00509270();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005092e0; end: 005092eb;  */

undefined ** FUN_005092e0(void)

{
  return &PTR_DAT_009fbad0;
}



/* Entry: 005092ec; end: 00509333;  */

void FUN_005092ec(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0050f19c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00508acc(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_004f6764(unaff_x19[4]);
    }
  }
  func_0x0050f2b8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00509334; end: 0050941f;  */

long * FUN_00509334(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    func_0x0050eff4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00509420; end: 00509423;  */

void FUN_00509420(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f4e0();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f67c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_00508c64();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        FUN_004efbac();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004f6874();
      }
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00509424; end: 00509447;  */

undefined8 FUN_00509424(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509448; end: 0050945b;  */

void FUN_00509448(void)

{
  FUN_00509424();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050945c; end: 005094cf;  */

undefined ** FUN_0050945c(void)

{
  return &PTR_DAT_009fbb20;
}



/* Entry: 005094d0; end: 00509503;  */

long FUN_005094d0(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00505af0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00509504; end: 00509517;  */

void FUN_00509504(void)

{
  FUN_005094d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509518; end: 00509523;  */

undefined ** FUN_00509518(void)

{
  return &PTR_DAT_009fbb58;
}



/* Entry: 00509524; end: 00509603;  */

void FUN_00509524(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    func_0x00505b38(unaff_x19[3]);
  }
  func_0x0050f2b8();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00509604; end: 00509607;  */

void FUN_00509604(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_0050e1f4();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_00505acc();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00509608; end: 0050962b;  */

undefined8 FUN_00509608(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 0050962c; end: 0050963f;  */

void FUN_0050962c(void)

{
  FUN_00509608();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509640; end: 005096b3;  */

undefined ** FUN_00509640(void)

{
  return &PTR_DAT_009fbba0;
}



/* Entry: 005096b4; end: 005096d7;  */

undefined8 FUN_005096b4(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 005096d8; end: 005096eb;  */

void FUN_005096d8(void)

{
  FUN_005096b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005096ec; end: 0050975f;  */

undefined ** FUN_005096ec(void)

{
  return &PTR_DAT_009fbbf8;
}



/* Entry: 00509760; end: 00509783;  */

undefined8 FUN_00509760(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509784; end: 00509797;  */

void FUN_00509784(void)

{
  FUN_00509760();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00509798; end: 0050980b;  */

undefined ** FUN_00509798(void)

{
  return &PTR_DAT_009fbc58;
}



/* Entry: 0050980c; end: 0050982f;  */

undefined8 FUN_0050980c(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00509830; end: 00509843;  */

void FUN_00509830(void)

{
  FUN_0050980c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


