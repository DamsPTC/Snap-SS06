/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004e3408; end: 004e342b;  */

undefined8 FUN_004e3408(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e342c; end: 004e342f;  */

undefined8 FUN_004e342c(undefined8 param_1)

{
  func_0x004e5020();
  return param_1;
}



/* Entry: 004e3430; end: 004e3443;  */

void FUN_004e3430(void)

{
  FUN_004e3408();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e3444; end: 004e344f;  */

undefined ** FUN_004e3444(void)

{
  return &PTR_DAT_009f2f98;
}



/* Entry: 004e3450; end: 004e34f3;  */

long * FUN_004e3450(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((char)param_1[4] == '\x01') {
    func_0x004e4eb0();
    func_0x004e5100();
    func_0x004e4f0c();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x004e4eb0();
    func_0x004e50b8();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x004e4eb0();
    func_0x004e51b4();
    func_0x004e4f00();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004e50ac();
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



/* Entry: 004e34f4; end: 004e355b;  */

long FUN_004e34f4(long param_1)

{
  int iVar1;
  int extraout_w8;
  long lVar2;
  long extraout_x9;
  long lVar3;
  ulong uVar4;
  
  iVar1 = -9;
  lVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x004e4ffc();
    lVar2 = extraout_x9;
    iVar1 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * iVar1 + 0x2c0U >> 6) + lVar2;
  }
  lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 004e355c; end: 004e35ab;  */

void FUN_004e355c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004e5060();
  func_0x004e53b0(&PTR_FUN_009f2ae8);
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4ff0();
  }
  FUN_004e43c8(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 004e35ac; end: 004e35d7;  */

long FUN_004e35ac(long param_1)

{
  func_0x004e5020();
  FUN_004e43e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 004e35d8; end: 004e35db;  */

long FUN_004e35d8(long param_1)

{
  func_0x004e5020();
  FUN_004e43e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 004e35dc; end: 004e35ef;  */

void FUN_004e35dc(void)

{
  FUN_004e35ac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e35f0; end: 004e35fb;  */

undefined ** FUN_004e35f0(void)

{
  return &PTR_DAT_009f2fe0;
}



/* Entry: 004e35fc; end: 004e36b3;  */

long * FUN_004e35fc(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((int)param_1[5] != 0) {
    func_0x004e4eb0();
    param_2 = param_1;
    func_0x004e5100();
    func_0x004e4f0c();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x004e4e60();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x54);
    param_1 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004e5018();
    func_0x004e51a0();
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x004e4eb0();
    func_0x004e51b4();
    func_0x004e4f90();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004e50ac();
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



/* Entry: 004e36b4; end: 004e3743;  */

long FUN_004e36b4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004e4edc();
  while (unaff_x22 != 0) {
    FUN_004e3744(*unaff_x21);
    func_0x004e5240();
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x004e5224();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    unaff_x20 = unaff_x20 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6)
                + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004e5108();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 004e3744; end: 004e375f;  */

long FUN_004e3744(long param_1)

{
  long extraout_x8;
  
  func_0x004e39d8();
  FUN_004e4e48();
  return param_1 + extraout_x8;
}



/* Entry: 004e3760; end: 004e3773;  */

void FUN_004e3760(ulong *param_1,long param_2)

{
  long unaff_x19;
  
  func_0x004e531c();
  FUN_004e3760();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004e529c();
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



/* Entry: 004e3774; end: 004e380b;  */

void FUN_004e3774(void)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004e5060();
  func_0x004e53b0(&PTR_FUN_009f2a98);
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4ff0();
  }
  func_0x004e5354(unaff_x19 + 0x10);
  FUN_004e4410(unaff_x19 + 0x28);
  lVar1 = unaff_x20 + 0x40;
  func_0x00487c6c();
  *(long *)(unaff_x19 + 0x40) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x54) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  return;
}



/* Entry: 004e380c; end: 004e3837;  */

undefined8 FUN_004e380c(undefined8 param_1)

{
  func_0x004e5020();
  FUN_004e3838(param_1);
  return param_1;
}



/* Entry: 004e3838; end: 004e385f;  */

long * FUN_004e3838(long param_1)

{
  long *unaff_x19;
  
  func_0x00532f74(param_1 + 0x40);
  func_0x004e53c8(param_1 + 0x10);
  FUN_004e4430();
  if (*unaff_x19 != 0) {
    FUN_0054cf94(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 004e3860; end: 004e3863;  */

undefined8 FUN_004e3860(undefined8 param_1)

{
  func_0x004e5020();
  FUN_004e3838(param_1);
  return param_1;
}



/* Entry: 004e3864; end: 004e3877;  */

void FUN_004e3864(void)

{
  FUN_004e380c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e3878; end: 004e3883;  */

undefined ** FUN_004e3878(void)

{
  return &PTR_DAT_009f3030;
}



/* Entry: 004e3884; end: 004e38d7;  */

void FUN_004e3884(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e531c();
  FUN_004ddfbc();
  if (0 < *(int *)(unaff_x19 + 0x30)) {
    FUN_00437de0(unaff_x19 + 0x28);
  }
  FUN_00532fa8(unaff_x19 + 0x40);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 004e38d8; end: 004e3a97;  */

long * FUN_004e38d8(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((int)param_1[10] != 0) {
    func_0x004e4eb0();
    param_2 = param_1;
    func_0x004e5100();
    func_0x004e4f0c();
    param_4 = param_1;
  }
  func_0x004e5200(*(undefined8 *)(unaff_x20 + 0x40));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004e5194();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x004e4e60();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x004e5018();
    func_0x004e51a0();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x004e4eb0();
    param_2 = param_1;
    func_0x004e5260();
    func_0x004e4f00();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x30);
  while (iVar3 != 0) {
    func_0x004e4e60();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x004e5018(5);
    func_0x004e51a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004e50ac();
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



/* Entry: 004e3a98; end: 004e3a9b;  */

void FUN_004e3a98(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  
  func_0x004e531c();
  FUN_004dbabc();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = param_2 + 0x28;
  FUN_004e3b20();
  func_0x004e51f4(*(undefined8 *)(param_2 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004e51e8();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x00532e08();
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004e529c();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 004e3a9c; end: 004e3b1f;  */

void FUN_004e3a9c(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  
  func_0x004e531c();
  FUN_004dbabc();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = param_2 + 0x28;
  FUN_004e3b20();
  func_0x004e51f4(*(undefined8 *)(param_2 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004e51e8();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x00532e08();
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004e529c();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 004e3b20; end: 004e3b2f;  */

void FUN_004e3b20(long *param_1,long param_2)

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



/* Entry: 004e3b30; end: 004e3b7f;  */

long FUN_004e3b30(long param_1)

{
  func_0x004e5020();
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 004e3b80; end: 004e3b83;  */

long FUN_004e3b80(long param_1)

{
  func_0x004e5020();
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 004e3b84; end: 004e3b97;  */

void FUN_004e3b84(void)

{
  FUN_004e3b30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e3b98; end: 004e3ba3;  */

undefined ** FUN_004e3b98(void)

{
  return &PTR_DAT_009f3070;
}



/* Entry: 004e3ba4; end: 004e3bf3;  */

void FUN_004e3ba4(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e52ac();
  if (in_NG == in_OV) {
    func_0x004e5364();
  }
  FUN_00532fa8(unaff_x19 + 0x30);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_004d9bf4(*(undefined8 *)(unaff_x19 + 0x38));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 004e3bf4; end: 004e3db3;  */

long * FUN_004e3bf4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x004e4f50();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x38);
    func_0x004e4f80();
    param_4 = param_1;
  }
  func_0x004e5200(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004e5194();
    param_4 = param_1;
  }
  func_0x004e513c();
  while (unaff_w22 != unaff_w21) {
    func_0x004e4e60();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x004e5018(3);
    func_0x004e51a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004e50ac();
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



/* Entry: 004e3db4; end: 004e3dfb;  */

long FUN_004e3db4(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 004e3dfc; end: 004e3dff;  */

long FUN_004e3dfc(long param_1)

{
  func_0x004e5020();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 004e3e00; end: 004e3e13;  */

void FUN_004e3e00(void)

{
  FUN_004e3db4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e3e14; end: 004e3e1f;  */

undefined ** FUN_004e3e14(void)

{
  return &PTR_DAT_009f30b8;
}



/* Entry: 004e3e20; end: 004e3e67;  */

void FUN_004e3e20(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e52ac();
  if (in_NG == in_OV) {
    func_0x004e5364();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_004d9bf4(*(undefined8 *)(unaff_x19 + 0x30));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 004e3e68; end: 004e3fc7;  */

long * FUN_004e3e68(long *param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x004e4f50();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x30);
    func_0x004e4f80();
    param_4 = param_1;
  }
  func_0x004e513c();
  while (unaff_w22 != unaff_w21) {
    func_0x004e4e60();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x004e5018(2);
    func_0x004e51a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004e50ac();
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



/* Entry: 004e3fc8; end: 004e4003;  */

long FUN_004e3fc8(long param_1)

{
  func_0x004e5020();
  func_0x00532f74(param_1 + 0x10);
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  return param_1;
}



/* Entry: 004e4004; end: 004e4007;  */

long FUN_004e4004(long param_1)

{
  func_0x004e5020();
  func_0x00532f74(param_1 + 0x10);
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  return param_1;
}



/* Entry: 004e4008; end: 004e401b;  */

void FUN_004e4008(void)

{
  FUN_004e3fc8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e401c; end: 004e4027;  */

undefined ** FUN_004e401c(void)

{
  return &PTR_DAT_009f3108;
}



/* Entry: 004e4028; end: 004e424f;  */

void FUN_004e4028(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004e531c();
  FUN_00532fa8();
  FUN_00532fa8(unaff_x19 + 0x18);
  FUN_00532fa8(unaff_x19 + 0x20);
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



/* Entry: 004e4250; end: 004e42e7;  */

void FUN_004e4250(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x004e51ac();
  }
  else {
    func_0x004e50c8();
  }
  *puVar1 = &PTR_FUN_009f2598;
  puVar1[1] = param_2;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 004e42e8; end: 004e4307;  */

void FUN_004e42e8(void)

{
  func_0x004e5090();
  FUN_004e18a8();
  return;
}



/* Entry: 004e4308; end: 004e432f;  */

void FUN_004e4308(void)

{
  long extraout_x8;
  
  func_0x004e5280();
  if (extraout_x8 != 0) {
    func_0x004e518c();
  }
  return;
}



/* Entry: 004e4330; end: 004e4357;  */

void FUN_004e4330(void)

{
  long extraout_x8;
  
  func_0x004e5280();
  if (extraout_x8 != 0) {
    func_0x004e518c();
  }
  return;
}



/* Entry: 004e4358; end: 004e437f;  */

void FUN_004e4358(void)

{
  long extraout_x8;
  
  func_0x004e5280();
  if (extraout_x8 != 0) {
    func_0x004e518c();
  }
  return;
}



/* Entry: 004e4380; end: 004e439f;  */

void FUN_004e4380(void)

{
  func_0x004e5090();
  FUN_004e24e4();
  return;
}



/* Entry: 004e43a0; end: 004e43c7;  */

void FUN_004e43a0(void)

{
  long extraout_x8;
  
  func_0x004e5280();
  if (extraout_x8 != 0) {
    func_0x004e518c();
  }
  return;
}



/* Entry: 004e43c8; end: 004e43e7;  */

void FUN_004e43c8(void)

{
  func_0x004e5090();
  FUN_004e3760();
  return;
}



/* Entry: 004e43e8; end: 004e440f;  */

void FUN_004e43e8(void)

{
  long extraout_x8;
  
  func_0x004e5280();
  if (extraout_x8 != 0) {
    func_0x004e518c();
  }
  return;
}



/* Entry: 004e4410; end: 004e442f;  */

void FUN_004e4410(void)

{
  func_0x004e5090();
  FUN_004e3b20();
  return;
}



/* Entry: 004e4430; end: 004e4457;  */

void FUN_004e4430(void)

{
  long extraout_x8;
  
  func_0x004e5280();
  if (extraout_x8 != 0) {
    func_0x004e518c();
  }
  return;
}



/* Entry: 004e4458; end: 004e49a7;  */

void FUN_004e4458(void)

{
  long *unaff_x19;
  
  func_0x004e53c8();
  FUN_004e4430();
  if (*unaff_x19 != 0) {
    FUN_0054cf94();
  }
  return;
}



/* Entry: 004e49a8; end: 004e49cf;  */

void FUN_004e49a8(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004e49d0; end: 004e4a07;  */

undefined8 * FUN_004e49d0(undefined8 *param_1)

{
  int iVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x004e53bc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e5124();
  }
  else {
    param_1 = unaff_x20;
    func_0x004e512c();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_009f0e90;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004d8d8c();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    FUN_004d8cc4();
    param_1[2] = unaff_x20;
  }
  return param_1;
}



/* Entry: 004e4a08; end: 004e4acb;  */

qword * FUN_004e4a08(long param_1)

{
  qword *pqVar1;
  long unaff_x19;
  qword *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x004e5268();
  if (param_1 == 0) {
    pqVar1 = &section_00000068.addr;
    __Znwm();
  }
  else {
    pqVar1 = unaff_x21;
    func_0x005510c4();
  }
  pqVar1[1] = (qword)unaff_x21;
  *pqVar1 = (qword)&PTR_FUN_009f2958;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004e4ff0();
  }
  *(dword *)(pqVar1 + 2) = *(dword *)(unaff_x19 + 0x10);
  *(dword *)((long)pqVar1 + 0x14) = 0;
  func_0x004e5354(pqVar1 + 3);
  func_0x004e5354(pqVar1 + 6);
  if ((*(dword *)(pqVar1 + 2) & 1) == 0) {
    unaff_x21 = (qword *)0x0;
  }
  else {
    FUN_004e4d58();
  }
  pqVar1[9] = (qword)unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined4 *)(pqVar1 + 0x10) = *(undefined4 *)(unaff_x19 + 0x80);
  pqVar1[0xd] = uVar5;
  pqVar1[0xc] = uVar4;
  pqVar1[0xf] = uVar7;
  pqVar1[0xe] = uVar6;
  pqVar1[0xb] = uVar3;
  pqVar1[10] = uVar2;
  return pqVar1;
}



/* Entry: 004e4acc; end: 004e4b03;  */

undefined8 * FUN_004e4acc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x004e53bc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e5344();
  }
  else {
    param_1 = unaff_x20;
    func_0x004e534c();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_009f02d0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004d5260();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    func_0x004d3428();
  }
  param_1[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    func_0x004d50e0();
  }
  param_1[4] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_004d5124();
  }
  param_1[5] = unaff_x20;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(unaff_x19 + 0x38);
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 004e4b04; end: 004e4b5f;  */

undefined8 * FUN_004e4b04(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004e5268();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e5214();
  }
  else {
    param_1 = unaff_x21;
    func_0x004e521c();
  }
  *param_1 = &PTR_FUN_009f2728;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_004e19cc();
  return param_1;
}



/* Entry: 004e4b60; end: 004e4bc3;  */

undefined8 * FUN_004e4b60(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004e5268();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e5124();
  }
  else {
    param_1 = unaff_x21;
    func_0x004e512c();
  }
  *param_1 = &PTR_FUN_009f25e8;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x004e19e8();
  return param_1;
}



/* Entry: 004e4bc4; end: 004e4c2b;  */

undefined8 * FUN_004e4bc4(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004e5268();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e51ac();
  }
  else {
    param_1 = unaff_x21;
    func_0x005510c4();
  }
  *param_1 = &PTR_FUN_009f2598;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  func_0x004e1a14();
  return param_1;
}



/* Entry: 004e4c2c; end: 004e4cbf;  */

undefined8 * FUN_004e4c2c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x004e53bc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e536c();
  }
  else {
    param_1 = unaff_x20;
    func_0x004e5374();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_009f2a48;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004e4ff0();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = unaff_x19 + 0x18;
  func_0x00487c6c();
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    func_0x004de264();
  }
  param_1[4] = unaff_x20;
  param_1[5] = *(undefined8 *)(unaff_x19 + 0x28);
  return param_1;
}



/* Entry: 004e4cc0; end: 004e4d1f;  */

undefined8 * FUN_004e4cc0(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004e5268();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e5214();
  }
  else {
    param_1 = unaff_x21;
    func_0x004e521c();
  }
  *param_1 = &PTR_FUN_009f2688;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_004e1af0();
  return param_1;
}



/* Entry: 004e4d20; end: 004e4d57;  */

long FUN_004e4d20(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004e53bc();
  if (param_1 == 0) {
    func_0x004e5334();
  }
  else {
    func_0x004e533c();
  }
  func_0x004e5060();
  func_0x004e53b0(&PTR_FUN_009f2ae8);
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4ff0();
  }
  FUN_004e43c8(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  return unaff_x19;
}



/* Entry: 004e4d58; end: 004e4deb;  */

undefined8 * FUN_004e4d58(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e51ac();
  }
  else {
    func_0x004e50c8();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_009f28b8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004e4ff0();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_004e4dec(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_004e4dec(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = param_1;
  return puVar2;
}



/* Entry: 004e4dec; end: 004e4e47;  */

undefined8 * FUN_004e4dec(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004e5268();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004e5124();
  }
  else {
    param_1 = unaff_x21;
    func_0x004e512c();
  }
  *param_1 = &PTR_FUN_009f2638;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_004e3010();
  return param_1;
}



/* Entry: 004e4e48; end: 004e53f7;  */

void FUN_004e4e48(void)

{
  return;
}



/* Entry: 004e53f8; end: 004e5423;  */

undefined8 FUN_004e53f8(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e5424(param_1);
  return param_1;
}



/* Entry: 004e5424; end: 004e543f;  */

void FUN_004e5424(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e5700();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e5440; end: 004e5443;  */

undefined8 FUN_004e5440(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e5424(param_1);
  return param_1;
}



/* Entry: 004e5444; end: 004e5457;  */

void FUN_004e5444(void)

{
  FUN_004e53f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e5458; end: 004e5463;  */

undefined ** FUN_004e5458(void)

{
  return &PTR_DAT_009f40d8;
}



/* Entry: 004e5464; end: 004e54ff;  */

void FUN_004e5464(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004e549c(unaff_x19[3]);
  }
  func_0x004ecbf0();
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



/* Entry: 004e5500; end: 004e557f;  */

long * FUN_004e5500(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  if (param_1[4] != 0) {
    func_0x004ec774();
    func_0x004ecb68();
    func_0x004ec880();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x004ec868();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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



/* Entry: 004e5580; end: 004e55df;  */

void FUN_004e5580(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_004e58a4();
    func_0x004ec6a0();
    func_0x004eccf4();
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x004ec8f0();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 004e55e0; end: 004e5647;  */

void FUN_004e55e0(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_004ebefc();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004e5648();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
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



/* Entry: 004e5648; end: 004e56ff;  */

void FUN_004e5648(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecd70();
  func_0x004ecdbc();
  func_0x004e5994();
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004df474();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_004d5818();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ece3c();
      if (param_1 == (ulong *)0x0) {
        FUN_004ebfe8();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004e14b4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x58) = 1;
  }
  if (*(char *)(unaff_x20 + 0x59) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x59) = 1;
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e5700; end: 004e572b;  */

undefined8 FUN_004e5700(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e572c(param_1);
  return param_1;
}



/* Entry: 004e572c; end: 004e576b;  */

long FUN_004e572c(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_004e07d8();
  }
  __ZdlPv();
  FUN_004eb284(param_1 + 0x30);
  FUN_004eb228(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 004e576c; end: 004e576f;  */

undefined8 FUN_004e576c(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e572c(param_1);
  return param_1;
}



/* Entry: 004e5770; end: 004e5783;  */

void FUN_004e5770(void)

{
  FUN_004e5700();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e5784; end: 004e578f;  */

undefined ** FUN_004e5784(void)

{
  return &PTR_DAT_009f4128;
}



/* Entry: 004e5790; end: 004e58a3;  */

dword * FUN_004e5790(dword *param_1,dword *param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  if (*(char *)(param_1 + 0x16) == '\x01') {
    func_0x004ec774();
    unaff_w21 = (uint)*(byte *)(unaff_x20 + 0x58);
    param_2 = param_1;
    func_0x004ecb68();
    func_0x004ec898();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x48);
    param_3 = (ulong)param_2[5];
    func_0x004ec868();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x59) == '\x01') {
    func_0x004ec774();
    unaff_w21 = (uint)*(byte *)(unaff_x20 + 0x59);
    param_2 = param_1;
    func_0x004ecc3c();
    func_0x004ec898();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0x50);
    param_3 = (ulong)param_2[5];
    param_4 = &MACH_HEADER.cputype;
    func_0x004ec988();
  }
  func_0x004ecbc4();
  while (uVar1 != unaff_w21) {
    func_0x004ec758();
    param_3 = (ulong)param_2[5];
    func_0x004ec988(5);
    func_0x004ecd00();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x004ec758();
    param_3 = (ulong)param_2[5];
    func_0x004ec988(6);
    func_0x004ecd00();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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



/* Entry: 004e58a4; end: 004e5947;  */

/* WARNING: Removing unreachable block (ram,0x004e58d4) */

void FUN_004e58a4(void)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004ec66c();
  while (unaff_x22 != 0) {
    FUN_004dff90(*unaff_x21);
    func_0x004ecb7c();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x004ec808();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004df1ec(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x004eca54();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004e5964(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x004eca54();
    }
  }
  iVar2 = unaff_w20 + (uint)*(byte *)(unaff_x19 + 0x58) * 2 + (uint)*(byte *)(unaff_x19 + 0x59) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 004e5948; end: 004e597f;  */

long FUN_004e5948(long param_1)

{
  long extraout_x8;
  
  FUN_004ea790();
  func_0x004ec6a0();
  return param_1 + extraout_x8;
}



/* Entry: 004e5980; end: 004e59a3;  */

void FUN_004e5980(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecd70();
  func_0x004ecdbc();
  func_0x004e5994();
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004df474();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_004d5818();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ece3c();
      if (param_1 == (ulong *)0x0) {
        FUN_004ebfe8();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004e14b4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x58) = 1;
  }
  if (*(char *)(unaff_x20 + 0x59) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x59) = 1;
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e59a4; end: 004e5a23;  */

void FUN_004e59a4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  lVar3 = param_3;
  func_0x004eca78();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_009f3fa8;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x004ec780();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    FUN_004ebfe8();
  }
  unaff_x19[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x004e035c();
  }
  unaff_x19[4] = unaff_x20;
  return;
}



/* Entry: 004e5a24; end: 004e5a4f;  */

undefined8 FUN_004e5a24(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e5a50(param_1);
  return param_1;
}



/* Entry: 004e5a50; end: 004e5a87;  */

void FUN_004e5a50(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e07d8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00504c30();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e5a88; end: 004e5a8b;  */

undefined8 FUN_004e5a88(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e5a50(param_1);
  return param_1;
}



/* Entry: 004e5a8c; end: 004e5a9f;  */

void FUN_004e5a8c(void)

{
  FUN_004e5a24();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e5aa0; end: 004e5aab;  */

undefined ** FUN_004e5aa0(void)

{
  return &PTR_DAT_009f4178;
}



/* Entry: 004e5aac; end: 004e5af3;  */

void FUN_004e5aac(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x004eca2c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_004e0950(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_00504d20(unaff_x19[4]);
    }
  }
  func_0x004eca84();
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



/* Entry: 004e5af4; end: 004e5bdb;  */

long * FUN_004e5af4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    func_0x004ec78c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x004ec868();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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



/* Entry: 004e5bdc; end: 004e5bdf;  */

void FUN_004e5bdc(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004ebfe8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004e14b4();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ecc0c();
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
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e5be0; end: 004e5c67;  */

void FUN_004e5be0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004ebfe8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004e14b4();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ecc0c();
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
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e5c68; end: 004e5cd3;  */

long FUN_004e5c68(long param_1)

{
  func_0x004ec990();
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e5cd4; end: 004e5d0b;  */

long FUN_004e5cd4(long param_1)

{
  long extraout_x8;
  
  FUN_004e87c0();
  func_0x004ec6a0();
  return param_1 + extraout_x8;
}



/* Entry: 004e5d0c; end: 004e5f7b;  */

void FUN_004e5d0c(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec9d0();
  uVar1 = param_1[1];
  func_0x004ecdb0(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004ece48();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08();
  }
  func_0x004ecdb0(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x004ece48();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x00532e08();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x28);
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      *(ulong **)(unaff_x21 + 0x28) = param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  func_0x004ec714();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x004ec7b8();
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


