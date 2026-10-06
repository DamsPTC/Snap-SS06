/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0050595c; end: 00505967;  */

undefined ** FUN_0050595c(void)

{
  return &PTR_DAT_009fb458;
}



/* Entry: 00505968; end: 00505a4f;  */

long * FUN_00505968(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  plVar5 = (long *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar5 + 0x17);
  plVar2 = param_1;
  plVar6 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar5[1];
    if (lVar3 == 0) goto LAB_005059d4;
    plVar1 = (long *)*plVar5;
  }
  else {
    plVar1 = plVar5;
    if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_005059d4;
  }
  FUN_0054ddb8(plVar1,lVar3,1,"snapchat.messaging.PublicGroupMessageMetadata.sender_display_name");
  plVar2 = param_3;
  FUN_00435e9c(param_3,1,plVar5,param_2);
  plVar6 = plVar5;
  param_2 = plVar2;
LAB_005059d4:
  if ((int)param_1[3] != 0) {
    func_0x0050f670();
    func_0x0050f2dc();
    func_0x0050f140();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    func_0x0050f670();
    func_0x0050f48c();
    func_0x0050f074();
    param_2 = plVar2;
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0050f1f4();
    if ((long)plVar6 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar6) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar4 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar4 - iVar7);
        if (iVar4 - iVar7 == 0 || iVar4 < iVar7) break;
        func_0x0054f690();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar3);
      }
      func_0x0054f690();
      return (long *)((long)param_2 + (long)iVar4);
    }
    _memcpy(param_2,lVar3,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  return param_2;
}



/* Entry: 00505a50; end: 00505acb;  */

void FUN_00505a50(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0050f6ec();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    FUN_0048910c();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x1c) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  return;
}



/* Entry: 00505acc; end: 00505aef;  */

void FUN_00505acc(ulong *param_1,long param_2)

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
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x1c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x1c) = 1;
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



/* Entry: 00505af0; end: 00505b13;  */

undefined8 FUN_00505af0(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00505b14; end: 00505b17;  */

undefined8 FUN_00505b14(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 00505b18; end: 00505b2b;  */

void FUN_00505b18(void)

{
  FUN_00505af0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00505b2c; end: 00505b4b;  */

undefined ** FUN_00505b2c(void)

{
  return &PTR_DAT_009fb4a8;
}



/* Entry: 00505b4c; end: 00505bb3;  */

long * FUN_00505b4c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  if ((int)param_1[2] != 0) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f074();
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



/* Entry: 00505bb4; end: 00505be3;  */

long FUN_00505bb4(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0050f494();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 00505be4; end: 00505c0f;  */

undefined8 FUN_00505be4(undefined8 param_1)

{
  func_0x0050f184();
  FUN_00505c10(param_1);
  return param_1;
}



/* Entry: 00505c10; end: 00505c3f;  */

long FUN_00505c10(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00505af0();
  }
  __ZdlPv();
  if (0 < *(int *)(param_1 + 0x1c)) {
    FUN_004eb500(param_1 + 0x18);
  }
  return param_1 + 0x18;
}



/* Entry: 00505c40; end: 00505c43;  */

undefined8 FUN_00505c40(undefined8 param_1)

{
  func_0x0050f184();
  FUN_00505c10(param_1);
  return param_1;
}



/* Entry: 00505c44; end: 00505c57;  */

void FUN_00505c44(void)

{
  FUN_00505be4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00505c58; end: 00505c63;  */

undefined ** FUN_00505c58(void)

{
  return &PTR_DAT_009fb4e8;
}



/* Entry: 00505c64; end: 00505ca3;  */

void FUN_00505c64(ulong *param_1)

{
  ulong extraout_x8;
  
  *(undefined4 *)(param_1 + 3) = 0;
  if ((param_1[2] & 1) != 0) {
    func_0x00505b38(param_1[6]);
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
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 00505ca4; end: 00505d63;  */

long * FUN_00505ca4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  func_0x0050ef9c();
  uVar2 = *(uint *)(param_1 + 5);
  if (0 < (int)uVar2) {
    func_0x0050ef54();
    func_0x0050f5a4();
    while (0x7f < uVar2) {
      func_0x0050f410();
    }
    *(char *)((long)param_4 + -1) = (char)uVar2;
    puVar5 = *(uint **)(unaff_x20 + 0x20);
    puVar1 = puVar5 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x0050ef54();
      uVar4 = (ulong)*puVar5;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < (uint)uVar4) {
        func_0x0050f6b0();
        uVar4 = extraout_x8;
      }
      puVar5 = puVar5 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar4;
    } while (puVar5 < puVar1);
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar2 = iVar6 - iVar7;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00505d64; end: 00505dd7;  */

void FUN_00505d64(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0050f588();
  func_0x0054de60();
  *(int *)(unaff_x19 + 0x28) = param_1;
  func_0x0050f5e4((long)param_1);
  func_0x0050f208();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_00505dd8(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x0050f264();
  }
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar1 & 0xfffffffffffffffe;
    uVar1 = (ulong)*(char *)(uVar2 + 0x1f);
    if ((long)uVar1 < 0) {
      uVar1 = *(ulong *)(uVar2 + 0x10);
    }
  }
  func_0x0050f354(uVar1);
  return;
}



/* Entry: 00505dd8; end: 00505def;  */

void FUN_00505dd8(void)

{
  FUN_00505bb4();
  func_0x0050ee50();
  return;
}



/* Entry: 00505df0; end: 00505df3;  */

void FUN_00505df0(ulong *param_1)

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
  FUN_004ead8c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f4c8();
    if (param_1 == (ulong *)0x0) {
      FUN_0050e1f4();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_00505acc();
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



/* Entry: 00505df4; end: 00505e5b;  */

void FUN_00505df4(ulong *param_1)

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
  FUN_004ead8c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f4c8();
    if (param_1 == (ulong *)0x0) {
      FUN_0050e1f4();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_00505acc();
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



/* Entry: 00505e5c; end: 00505e8f;  */

long FUN_00505e5c(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00505e90; end: 00505e93;  */

long FUN_00505e90(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00505e94; end: 00505ea7;  */

void FUN_00505e94(void)

{
  FUN_00505e5c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00505ea8; end: 00505eb3;  */

undefined ** FUN_00505ea8(void)

{
  return &PTR_DAT_009fb548;
}



/* Entry: 00505eb4; end: 00505ee7;  */

void FUN_00505eb4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f38c();
  }
  func_0x0050f400();
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



/* Entry: 00505ee8; end: 00505f53;  */

long * FUN_00505ee8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ee84();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0050ef54();
    func_0x0050f110();
    func_0x0050f074();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 00505f54; end: 00505faf;  */

void FUN_00505f54(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f384();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0050f080();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 00505fb0; end: 00506013;  */

void FUN_00505fb0(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0050f54c();
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



/* Entry: 00506014; end: 0050603f;  */

long FUN_00506014(long param_1)

{
  func_0x0050f184();
  FUN_0050d1c0(param_1 + 0x10);
  return param_1;
}



/* Entry: 00506040; end: 00506043;  */

long FUN_00506040(long param_1)

{
  func_0x0050f184();
  FUN_0050d1c0(param_1 + 0x10);
  return param_1;
}



/* Entry: 00506044; end: 00506057;  */

void FUN_00506044(void)

{
  FUN_00506014();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00506058; end: 00506063;  */

undefined ** FUN_00506058(void)

{
  return &PTR_DAT_009fb5b0;
}



/* Entry: 00506064; end: 00506093;  */

void FUN_00506064(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0050f378();
  FUN_0050e0e4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00506094; end: 005060fb;  */

long * FUN_00506094(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x0050ef60();
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



/* Entry: 005060fc; end: 0050615b;  */

long FUN_005060fc(void)

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
    FUN_0050615c(*unaff_x21);
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



/* Entry: 0050615c; end: 00506173;  */

void FUN_0050615c(void)

{
  FUN_00505f54();
  func_0x0050ee50();
  return;
}



/* Entry: 00506174; end: 00506177;  */

void FUN_00506174(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0050f120();
  FUN_005061a8();
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



/* Entry: 00506178; end: 005061a7;  */

void FUN_00506178(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0050f120();
  FUN_005061a8();
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



/* Entry: 005061a8; end: 005061b7;  */

void FUN_005061a8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 005061b8; end: 00506237;  */

void FUN_005061b8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x34) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_00506214;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00506014();
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 4) goto LAB_00506214;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00506214;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00505be4();
    }
  }
  __ZdlPv();
LAB_00506214:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 00506238; end: 005062b7;  */

void FUN_00506238(void)

{
  int iVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0050f0a8();
  func_0x0050f3ac(&PTR_DAT_009faed0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x34);
  *(int *)(unaff_x19 + 0x34) = iVar1;
  uVar3 = *(undefined8 *)(unaff_x21 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  if (iVar1 == 5) {
    func_0x0050e2cc();
  }
  else {
    if (iVar1 != 4) {
      return;
    }
    FUN_0050e24c();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  return;
}



/* Entry: 005062b8; end: 005062e3;  */

undefined8 FUN_005062b8(undefined8 param_1)

{
  func_0x0050f184();
  FUN_005062e4(param_1);
  return param_1;
}



/* Entry: 005062e4; end: 005062f7;  */

void FUN_005062e4(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_00506214;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00506014();
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 4) goto LAB_00506214;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00506214;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_00505be4();
    }
  }
  __ZdlPv();
LAB_00506214:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 005062f8; end: 0050630b;  */

void FUN_005062f8(void)

{
  FUN_005062b8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050630c; end: 00506317;  */

undefined ** FUN_0050630c(void)

{
  return &PTR_DAT_009fb608;
}



/* Entry: 00506318; end: 00506417;  */

char * FUN_00506318(char *param_1,undefined8 param_2,ulong param_3,char *param_4)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  long extraout_x8;
  char *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0050ef9c();
  if (*(qword *)(param_1 + 0x10) != 0) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f028();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x0050ef54();
    func_0x0050f2dc();
    func_0x0050f074();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0050ef54();
    func_0x0050f48c();
    func_0x0050f028();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x34);
  pcVar2 = (char *)(ulong)uVar1;
  if (uVar1 == 4) {
    lVar3 = 0x14;
  }
  else {
    if (uVar1 != 5) goto LAB_005063c0;
    lVar3 = 0x28;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + lVar3);
  func_0x0050f17c();
  param_4 = pcVar2;
LAB_005063c0:
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0050ef54();
    param_4 = segment_command_00000020.segname + 8;
    func_0x00487cbc(0x30,pcVar2);
    func_0x0050f140();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return param_4 + iVar4;
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 00506418; end: 005064e3;  */

long FUN_00506418(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar3 = uVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x34) == 5) {
    func_0x005064fc(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    if (*(int *)(param_1 + 0x34) != 4) goto LAB_005064b4;
    FUN_005064e4(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x0050f264();
LAB_005064b4:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 005064e4; end: 00506513;  */

void FUN_005064e4(void)

{
  FUN_00505d64();
  func_0x0050ee50();
  return;
}



/* Entry: 00506514; end: 00506517;  */

void FUN_00506514(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  if (*(ulong *)(unaff_x20 + 0x18) != 0) {
    unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 4) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)((long)unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_00505890;
  iVar2 = *(int *)((long)unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_005061b8();
    }
    *(int *)((long)unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_00506178();
      goto LAB_00505890;
    }
    func_0x0050e2cc();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 4) goto LAB_00505890;
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_00505df4();
      goto LAB_00505890;
    }
    FUN_0050e24c();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_00505890:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 00506518; end: 00506543;  */

long FUN_00506518(long param_1)

{
  func_0x0050f184();
  FUN_004eb4cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 00506544; end: 00506547;  */

long FUN_00506544(long param_1)

{
  func_0x0050f184();
  FUN_004eb4cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 00506548; end: 0050655b;  */

void FUN_00506548(void)

{
  FUN_00506518();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050655c; end: 0050657f;  */

undefined ** FUN_0050655c(void)

{
  return &PTR_DAT_009fb650;
}



/* Entry: 00506580; end: 0050663f;  */

long * FUN_00506580(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  func_0x0050ef9c();
  uVar2 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar2) {
    func_0x0050ef54();
    func_0x0050f5a4();
    while (0x7f < uVar2) {
      func_0x0050f410();
    }
    *(char *)((long)param_4 + -1) = (char)uVar2;
    puVar5 = *(uint **)(unaff_x20 + 0x18);
    puVar1 = puVar5 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x0050ef54();
      uVar4 = (ulong)*puVar5;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < (uint)uVar4) {
        func_0x0050f6b0();
        uVar4 = extraout_x8;
      }
      puVar5 = puVar5 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar4;
    } while (puVar5 < puVar1);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0050ef54();
    func_0x0050f2cc();
    func_0x0050f028();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar2 = iVar6 - iVar7;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00506640; end: 005066cf;  */

void FUN_00506640(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1 + 0x10;
  func_0x0054de60();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  return;
}



/* Entry: 005066d0; end: 005066d3;  */

void FUN_005066d0(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050f120();
  FUN_004ead8c();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 005066d4; end: 0050670f;  */

void FUN_005066d4(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050f120();
  FUN_004ead8c();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 00506710; end: 0050673b;  */

long FUN_00506710(long param_1)

{
  func_0x0050f184();
  FUN_0050d1c0(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050673c; end: 0050673f;  */

long FUN_0050673c(long param_1)

{
  func_0x0050f184();
  FUN_0050d1c0(param_1 + 0x10);
  return param_1;
}



/* Entry: 00506740; end: 00506753;  */

void FUN_00506740(void)

{
  FUN_00506710();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00506754; end: 0050675f;  */

undefined ** FUN_00506754(void)

{
  return &PTR_DAT_009fb6a0;
}



/* Entry: 00506760; end: 00506793;  */

void FUN_00506760(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0050f378();
  FUN_0050e0e4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00506794; end: 00506827;  */

long * FUN_00506794(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  if (param_1[5] != 0) {
    func_0x0050ef54();
    param_2 = param_1;
    func_0x0050f2c4();
    func_0x0050f028();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x0050f0d4();
    func_0x0050f2f0();
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



/* Entry: 00506828; end: 0050689f;  */

long FUN_00506828(void)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0050f504();
  func_0x0050efdc();
  while (unaff_x22 != 0) {
    FUN_0050615c(*unaff_x21);
    func_0x0050f330();
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x0050f5e4();
    func_0x0050f208();
    unaff_x20 = extraout_x8 + unaff_x20;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 005068a0; end: 005068a3;  */

void FUN_005068a0(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050f120();
  FUN_005061a8();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 005068a4; end: 005068df;  */

void FUN_005068a4(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050f120();
  FUN_005061a8();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 005068e0; end: 00506913;  */

long FUN_005068e0(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00506914; end: 00506917;  */

long FUN_00506914(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00506918; end: 0050692b;  */

void FUN_00506918(void)

{
  FUN_005068e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050692c; end: 00506937;  */

undefined ** FUN_0050692c(void)

{
  return &PTR_DAT_009fb6f0;
}



/* Entry: 00506938; end: 005069d7;  */

long * FUN_00506938(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ee84();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar2 = extraout_x8_00 + 8;
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



/* Entry: 005069d8; end: 005069db;  */

void FUN_005069d8(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0050f54c();
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



/* Entry: 005069dc; end: 00506a57;  */

void FUN_005069dc(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0050f430();
  func_0x0050f3ac(&PTR_FUN_009fb3d0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0050e320();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x004e035c();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 00506a58; end: 00506a83;  */

undefined8 FUN_00506a58(undefined8 param_1)

{
  func_0x0050f184();
  FUN_00506a84(param_1);
  return param_1;
}



/* Entry: 00506a84; end: 00506ab3;  */

void FUN_00506a84(long param_1)

{
  long unaff_x19;
  
  func_0x0050f4f8();
  if (param_1 != 0) {
    FUN_005075f4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_00504c30();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00506ab4; end: 00506ab7;  */

undefined8 FUN_00506ab4(undefined8 param_1)

{
  func_0x0050f184();
  FUN_00506a84(param_1);
  return param_1;
}



/* Entry: 00506ab8; end: 00506acb;  */

void FUN_00506ab8(void)

{
  FUN_00506a58();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00506acc; end: 00506ad7;  */

undefined ** FUN_00506acc(void)

{
  return &PTR_DAT_009fb738;
}



/* Entry: 00506ad8; end: 00506b77;  */

void FUN_00506ad8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x0050f19c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00506b28(*(undefined8 *)(unaff_x19 + 0x18));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_00504d20(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00506b78; end: 00506c8b;  */

long * FUN_00506b78(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  if (param_1[5] != 0) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f028();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x0050f14c();
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



/* Entry: 00506c8c; end: 00506ca3;  */

void FUN_00506c8c(void)

{
  func_0x005077c0();
  func_0x0050ee50();
  return;
}



/* Entry: 00506ca4; end: 00506ca7;  */

void FUN_00506ca4(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
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
        param_1 = unaff_x22;
        func_0x0050e320();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00506d3c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        func_0x004e035c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_005052ac();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 00506ca8; end: 0050723f;  */

void FUN_00506ca8(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
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
        param_1 = unaff_x22;
        func_0x0050e320();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00506d3c();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        func_0x004e035c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_005052ac();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 00507240; end: 005075f3;  */

void FUN_00507240(long param_1)

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
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_005084cc();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_005086cc();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_005089bc();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00508e60();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_005090b8();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00509d10();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00509e68();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00509fc0();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050a118();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050a2b4();
    }
    break;
  default:
    goto LAB_005074e0;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050b700();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050a71c();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050b528();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050ab54();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050ae98();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050b13c();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050b38c();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00509270();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00509c64();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00509964();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_005096b4();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0050980c();
    }
  }
  __ZdlPv();
LAB_005074e0:
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 005075f4; end: 0050761f;  */

undefined8 FUN_005075f4(undefined8 param_1)

{
  func_0x0050f184();
  FUN_00507620(param_1);
  return param_1;
}



/* Entry: 00507620; end: 0050766b;  */

void FUN_00507620(long param_1)

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
  long unaff_x19;
  
  func_0x0050f4f8();
  if (param_1 != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x40) == 0) {
    return;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x40)) {
  case 4:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_005084cc();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_005086cc();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_005089bc();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_00508e60();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_005090b8();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_00509d10();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_00509e68();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_00509fc0();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050a118();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050a2b4();
    }
    break;
  default:
    goto LAB_005074e0;
  case 0xf:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050b700();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050a71c();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050b528();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050ab54();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050ae98();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050b13c();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050b38c();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_00509270();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_00509c64();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_00509964();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_005096b4();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_005074e0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0050980c();
    }
  }
  __ZdlPv();
LAB_005074e0:
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  return;
}



/* Entry: 0050766c; end: 0050766f;  */

undefined8 FUN_0050766c(undefined8 param_1)

{
  func_0x0050f184();
  FUN_00507620(param_1);
  return param_1;
}



/* Entry: 00507670; end: 00507683;  */

void FUN_00507670(void)

{
  FUN_005075f4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00507684; end: 005076e7;  */

undefined8 FUN_00507684(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 005076e8; end: 00507997;  */

long * FUN_005076e8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0050ef9c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0050ee84();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0050ef54();
    func_0x0050f2cc();
    func_0x0050f028();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0050f620();
    func_0x0050f14c();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x40);
  if (*(uint *)(unaff_x20 + 0x40) - 4 < 10) {
    func_0x0050f0fc();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x0050ef54();
    func_0x0050f554();
    func_0x0050f028();
    param_4 = plVar2;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x40);
  if (*(uint *)(unaff_x20 + 0x40) - 0xf < 0xc) {
    func_0x0050f0fc();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00507998; end: 00507a3f;  */

void FUN_00507998(void)

{
  FUN_005085d4();
  func_0x0050ee50();
  return;
}



/* Entry: 00507a40; end: 00507a6f;  */

void FUN_00507a40(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
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
        func_0x0050f3c0();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f3c0();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  func_0x0050f0ec();
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (iVar1 != 0) {
    iVar2 = (int)unaff_x21[8];
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_00507240();
      }
      *(int *)(unaff_x21 + 8) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x00507a44();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e4dc();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507a64();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e510();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        FUN_00507a70();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e560();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        FUN_00507b4c();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e594();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        FUN_00507b58();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e5e4();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507bb4();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e618();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507bc0();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e668();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507bcc();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e6b8();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507bd8();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e708();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x00507be4();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e758();
      break;
    default:
      goto LAB_00507224;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x00507c04();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      func_0x0050e790();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x00507c60();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      func_0x0050e7f0();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        FUN_00507cc8();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e84c();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        FUN_00507cd4();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      func_0x0050e89c();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        FUN_00507d04();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      func_0x0050e8cc();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        FUN_00507d6c();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e900();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x00507d90();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e958();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x00507e14();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050e9dc();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507e98();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050ea0c();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507ea4();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050ea5c();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507eb0();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050eaac();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x0050ef8c();
        func_0x0050f2a0();
        func_0x00507ebc();
        goto LAB_00507224;
      }
      func_0x0050f1dc();
      FUN_0050eafc();
    }
    unaff_x21[7] = (ulong)param_1;
  }
LAB_00507224:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 00507a70; end: 00507b4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00507a70(ulong *param_1)

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



/* Entry: 00507b4c; end: 00507b57;  */

void FUN_00507b4c(long param_1,ulong param_2)

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



/* Entry: 00507b58; end: 00507bb3;  */

void FUN_00507b58(ulong *param_1)

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



/* Entry: 00507bb4; end: 00507c03;  */

void FUN_00507bb4(long param_1,ulong param_2)

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



/* Entry: 00507c04; end: 00507cc7;  */

void FUN_00507c04(ulong *param_1)

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



/* Entry: 00507cc8; end: 00507cd3;  */

void FUN_00507cc8(long param_1,ulong param_2)

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



/* Entry: 00507cd4; end: 00507d03;  */

void FUN_00507cd4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0050f120();
  FUN_004df824();
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


