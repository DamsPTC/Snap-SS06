/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014bedc4; end: 1014bedfb;  */

undefined1  [16] FUN_1014bedc4(void)

{
  return ZEXT816(0x1103cd448);
}



/* Entry: 1014bedfc; end: 1014bee7b;  */

void FUN_1014bedfc(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1014bee7c; end: 1014beec3;  */

void FUN_1014bee7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da159d0;
  func_0x000107c61520(&UNK_10da159d0);
  func_0x000107c5f0a4(param_1,param_2,puVar1);
  return;
}



/* Entry: 1014beec4; end: 1014bef1b;  */

void FUN_1014beec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  puVar1 = &UNK_10da159d0;
  func_0x000107c61520(&UNK_10da159d0,param_2);
  func_0x000107c5f0a4(auStack_68,param_2,puVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1014bef1c; end: 1014bef67;  */

void FUN_1014bef1c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = &UNK_10da159d0;
  func_0x000107c61520(&UNK_10da159d0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ_11034f618)
            (uVar2,uVar3,param_3,puVar1);
  return;
}



/* Entry: 1014bef68; end: 1014befaf;  */

void FUN_1014bef68(void)

{
  FUN_1014befb0(0x112da8f90,&UNK_10dcb8d78);
  return;
}



/* Entry: 1014befb0; end: 1014befef;  */

void FUN_1014befb0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001014bede8(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1014beff0; end: 1014bf03f;  */

void FUN_1014beff0(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined **)(unaff_x20 + 0x28) = &UNK_1103cd5f0;
  *(undefined ***)(unaff_x20 + 0x30) = &PTR_DAT_1103cd608;
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000017;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010ef86050;
  return;
}



/* Entry: 1014bf040; end: 1014bf0b3;  */

void FUN_1014bf040(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f168(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112da8fa8);
  func_0x000107c5f164(uVar1,0xd000000000000012,0x800000010ef86070,0x6e6961686379656b,
                      0xe800000000000000);
  return;
}



/* Entry: 1014bf0b4; end: 1014bf0eb;  */

void FUN_1014bf0b4(void)

{
  long unaff_x20;
  
  *(undefined **)(unaff_x20 + 0x28) = &UNK_1103cd5f0;
  *(undefined ***)(unaff_x20 + 0x30) = &PTR_DAT_1103cd608;
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000017;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010ef86050;
  return;
}



/* Entry: 1014bf0ec; end: 1014bf217;  */

/* WARNING: Removing unreachable block (ram,0x0001014bf1c0) */

void FUN_1014bf0ec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  uVar3 = param_3;
  uStack_58 = param_2;
  func_0x000107c614e4();
  puVar4 = &uStack_58;
  func_0x000107c5fb20(puVar4);
  uVar6 = uVar3;
  (**(code **)(lVar2 + 8))();
  func_0x000107c6142c(uVar3);
  bVar1 = uVar6 >> 0x3c < 0xf;
  if (bVar1) {
    uVar5 = 0;
    func_0x000107c5eb24();
    func_0x000107c613fc();
    func_0x000107c5eb20();
    func_0x000107c5eb1c(param_1,param_3,puVar4,uVar6,param_3,param_4);
    func_0x0001000b44c0(puVar4,uVar6);
    func_0x000107c61574(uVar5);
  }
  (**(code **)(*(long *)(param_3 - 8) + 0x38))(param_1,!bVar1,1,param_3);
  return;
}



/* Entry: 1014bf218; end: 1014bf62f;  */

/* WARNING: Removing unreachable block (ram,0x0001014bf3c8) */
/* WARNING: Removing unreachable block (ram,0x0001014bf618) */
/* WARNING: Removing unreachable block (ram,0x0001014bf3dc) */
/* WARNING: Removing unreachable block (ram,0x0001014bf59c) */
/* WARNING: Removing unreachable block (ram,0x0001014bf444) */

void FUN_1014bf218(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [24];
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_88 = param_5;
  func_0x000107c5f168();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar3 = 0;
  puStack_98 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60188(0,param_3);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar10 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_3;
  uStack_68 = param_2;
  func_0x000107c614e4(param_3);
  puVar4 = &uStack_68;
  func_0x000107c5fb20(puVar4,lVar2);
  uStack_78 = param_1;
  (**(code **)(lVar7 + 0x10))(lVar6,param_1,lVar3);
  lVar5 = lVar6;
  (**(code **)(lVar10 + 0x30))(lVar6,1,param_3);
  uVar1 = uStack_78;
  if ((int)lVar5 == 1) {
    pcVar8 = *(code **)(lVar7 + 8);
    (*pcVar8)(lVar6,lVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar5 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
    (**(code **)(lVar5 + 0x18))(puVar4,lVar2,uVar1,lVar5);
    func_0x000107c6142c(lVar2);
    (*pcVar8)(uStack_78,lVar3);
  }
  else {
    puStack_a8 = puVar4;
    lStack_a0 = lVar7;
    (**(code **)(lVar10 + 0x20))(lVar9,lVar6,param_3);
    FUN_1014bf630(lVar9,param_3);
    func_0x000107c6142c(lVar2);
    (**(code **)(lStack_a0 + 8))(uVar1,lVar3);
    (**(code **)(lVar10 + 8))(lVar9,param_3);
  }
  return;
}



/* Entry: 1014bf630; end: 1014bf7f3;  */

void FUN_1014bf630(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = param_2;
  func_0x000107c614e4();
  puVar2 = &stack0xffffffffffffffa8;
  func_0x000107c5fb20();
  uVar3 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  func_0x000107c5eb4c(param_1,param_2,param_4);
  if (unaff_x21 == 0) {
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar4 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar3);
    plVar6 = param_1;
    (**(code **)(lVar4 + 0x10))(param_1,param_2,puVar2,lVar1,uVar3,lVar4);
    if (((ulong)plVar6 & 1) == 0) {
      FUN_1014bfe84();
      func_0x000107c613f8(&UNK_1106efa90,plVar6,0,0);
      *plVar6 = (long)puVar2;
      plVar6[1] = lVar1;
      plVar6[2] = 0;
      plVar6[3] = 0;
      *(undefined1 *)(plVar6 + 4) = 1;
      func_0x000107c61654();
    }
    else {
      func_0x000107c6142c(lVar1);
    }
    func_0x00010006c090(param_1,param_2);
  }
  else {
    func_0x000107c61574(uVar3);
    func_0x000107c614b0();
    lVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar6 = (long *)&stack0xffffffffffffffa8;
    func_0x000107c5fb18();
    plVar5 = plVar6;
    FUN_1014bfe84();
    func_0x000107c613f8(&UNK_1106efa90,plVar5,0,0);
    *plVar5 = (long)puVar2;
    plVar5[1] = lVar1;
    plVar5[2] = (long)plVar6;
    plVar5[3] = lVar4;
    *(undefined1 *)(plVar5 + 4) = 0;
    func_0x000107c61654();
    func_0x000107c614ac();
  }
  return;
}



/* Entry: 1014bf7f4; end: 1014bf817;  */

void FUN_1014bf7f4(void)

{
  long unaff_x20;
  
  FUN_1014bfec4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014bf818; end: 1014bf857;  */

void FUN_1014bf818(void)

{
  FUN_1014bf0ec();
  return;
}



/* Entry: 1014bf858; end: 1014bf947;  */

undefined1  [16]
FUN_1014bf858(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_11034f288;
  puVar2 = (undefined8 *)0x48;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x48,0x5edd);
  }
  *param_1 = (long)puVar2;
  puVar2[2] = param_4;
  puVar2[3] = param_5;
  *puVar2 = param_2;
  puVar2[1] = param_3;
  lVar3 = 0;
  func_0x000107c60188(0,param_3);
  puVar2[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  puVar2[5] = lVar3;
  uVar5 = *(undefined8 *)(lVar3 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    uVar4 = uVar5;
    func_0x000107c610a0();
    puVar2[6] = uVar4;
    func_0x000107c610a0();
  }
  else {
    uVar4 = uVar5;
    func_0x000107c61458(uVar5,0x5edd);
    puVar2[6] = uVar4;
    func_0x000107c61458(uVar5,0x5edd);
  }
  uVar4 = *unaff_x20;
  puVar2[7] = uVar5;
  puVar2[8] = uVar4;
  FUN_1014bf0ec(uVar5,param_2,param_3,param_4);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = FUN_1014bf948;
  return auVar6;
}



/* Entry: 1014bf948; end: 1014bf9ff;  */

/* WARNING: Possible PIC construction at 0x0001014bf9d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014bf9d8) */

void FUN_1014bf948(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[7];
  uVar8 = param_1[6];
  if ((param_2 & 1) == 0) {
    FUN_1014bf218(uVar1,*param_1,param_1[1],param_1[2],param_1[3]);
  }
  else {
    uVar2 = param_1[4];
    lVar5 = param_1[5];
    uVar3 = param_1[2];
    uVar6 = param_1[3];
    uVar4 = *param_1;
    uVar7 = param_1[1];
    (**(code **)(lVar5 + 0x10))(uVar8,uVar1,uVar2);
    FUN_1014bf218(uVar8,uVar4,uVar7,uVar3,uVar6);
    (**(code **)(lVar5 + 8))(uVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 1014bfa00; end: 1014bfa1f;  */

void FUN_1014bfa00(void)

{
  FUN_1014bf630();
  return;
}



/* Entry: 1014bfa20; end: 1014bfae7;  */

undefined * FUN_1014bfa20(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_60;
  func_0x000107c61434(param_2);
  FUN_1014bfae8(&puStack_60,0,0,1,param_1,param_2);
  puVar1 = puStack_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    puStack_60 = param_1;
    puStack_48 = PTR___ss11_StringGutsVN_11034e4c8;
  }
  else {
    func_0x000107c6142c(param_2);
    puVar3 = (undefined *)ppuVar2;
    func_0x000107c614f0();
    lVar4 = *param_3;
    puStack_60 = (undefined *)ppuVar2;
    puStack_48 = puVar3;
  }
  if (lVar4 != 0) {
    func_0x0001000bb420(&puStack_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_1014bfec4(&puStack_60);
  return puVar1;
}



/* Entry: 1014bfae8; end: 1014bfbf7;  */

void FUN_1014bfae8(ulong *param_1,ulong param_2,long param_3,char param_4,ulong param_5,
                  ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if ((param_5 >> 0x3c & 1) == 0) {
        func_0x000107c60358(param_5,param_6);
        if (param_5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014bfbf8);
          (*pcVar1)();
        }
      }
      else {
        param_5 = (param_6 & 0xfffffffffffffff) + 0x20;
      }
      *param_1 = param_5;
      if ((long)param_6 < 0) {
        return;
      }
      func_0x000107c615f0(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != 0)) &&
          (uVar2 = param_6 >> 0x38 & 0xf, uVar2 < param_3 - param_2)) {
    uStack_38 = param_6 & 0xffffffffffffff;
    uStack_40 = param_5;
    func_0x000107c610b4(param_2,&uStack_40,uVar2);
    *(undefined1 *)(param_2 + uVar2) = 0;
    *param_1 = param_2;
    return;
  }
  FUN_1014bfbf8(param_5);
  *param_1 = param_6;
  return;
}



/* Entry: 1014bfbf8; end: 1014bfc5b;  */

void FUN_1014bfbf8(void)

{
  FUN_10149b58c();
  func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
  func_0x000107c61538();
  FUN_1014bfc5c();
  return;
}



/* Entry: 1014bfc5c; end: 1014bfd4b;  */

void FUN_1014bfc5c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014bfd40);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1014bfd4c();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014bfd44);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014bfd48);
      (*pcVar1)();
    }
    func_0x000107c610b4(lVar4 + *(long *)(lVar4 + 0x10) + 0x20,param_1 + 0x20,uVar5);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014bfd4c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1014bfd4c; end: 1014bfe3b;  */

undefined * FUN_1014bfd4c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014bfe3c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014bfe3c; end: 1014bfe83;  */

undefined8 FUN_1014bfe3c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112da8fc0;
  func_0x0001000285a8(0x112da8fc0,&UNK_10dc6b9b0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1014bfe84; end: 1014bfec3;  */

void FUN_1014bfe84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da8fc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a2c0;
  func_0x000107c61520(&UNK_10dc6a2c0,&UNK_1106efa90);
  puRam0000000112da8fc8 = puVar1;
  return;
}



/* Entry: 1014bfec4; end: 1014bfef3;  */

void FUN_1014bfec4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001014bfed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1014bfef4; end: 1014bff13;  */

void FUN_1014bfef4(void)

{
  func_0x000107c61168(&PTR_PTR_112da9010);
  return;
}



/* Entry: 1014bff14; end: 1014bff1b;  */

void FUN_1014bff14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1014bff1c; end: 1014bff8b;  */

undefined8 * FUN_1014bff1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1014bff8c; end: 1014c001f;  */

int FUN_1014bff8c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1014c0020; end: 1014c0acf;  */

undefined1  [16]
FUN_1014c0020(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_418 [112];
  long lStack_3a8;
  long *plStack_3a0;
  undefined *puStack_390;
  undefined1 auStack_388 [32];
  long lStack_368;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long alStack_1b0 [40];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f0 = param_4;
  func_0x000107c61434(param_2);
  FUN_100e35e30();
  lVar4 = 0x112da90a0;
  func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 0xe;
  *(undefined8 *)(lVar4 + 0x10) = 7;
  uStack_1e8 = *(undefined8 *)PTR__kSecClass_1103477e0;
  puStack_1d0 = (undefined8 *)(lVar4 + 0x20);
  *puStack_1d0 = uStack_1e8;
  uVar20 = *(undefined8 *)PTR__kSecClassGenericPassword_1103477e8;
  uVar5 = 0;
  uStack_1f8 = uVar20;
  func_0x0001014bede8();
  *(undefined8 *)(lVar4 + 0x28) = uVar20;
  uStack_200 = *(undefined8 *)PTR__kSecAttrService_1103477d0;
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  *(undefined8 *)(lVar4 + 0x48) = uStack_200;
  puVar7 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar4 + 0x50) = param_3;
  *(undefined8 *)(lVar4 + 0x58) = param_4;
  puVar9 = PTR___s10Foundation4DataVN_110350ae0;
  uStack_208 = *(undefined8 *)PTR__kSecAttrGeneric_1103477c8;
  *(undefined **)(lVar4 + 0x68) = puVar7;
  *(undefined8 *)(lVar4 + 0x70) = uStack_208;
  *(undefined8 *)(lVar4 + 0x78) = param_1;
  *(long **)(lVar4 + 0x80) = param_2;
  uVar21 = *(undefined8 *)PTR__kSecAttrAccount_1103477c0;
  *(undefined **)(lVar4 + 0x90) = puVar9;
  *(undefined8 *)(lVar4 + 0x98) = uVar21;
  *(undefined8 *)(lVar4 + 0xa0) = param_1;
  *(long **)(lVar4 + 0xa8) = param_2;
  uVar18 = *(undefined8 *)PTR__kSecAttrSynchronizable_1103477d8;
  *(undefined **)(lVar4 + 0xb8) = puVar9;
  *(undefined8 *)(lVar4 + 0xc0) = uVar18;
  uVar19 = *(undefined8 *)PTR__kCFBooleanFalse_11034ab88;
  uVar20 = 0x112da90a8;
  uStack_1e0 = uVar5;
  func_0x0001000285a8(0x112da90a8,&UNK_10d950508);
  puVar7 = PTR__kSecMatchLimit_1103477f0;
  *(undefined8 *)(lVar4 + 200) = uVar19;
  uVar16 = *(undefined8 *)puVar7;
  *(undefined8 *)(lVar4 + 0xe0) = uVar20;
  *(undefined8 *)(lVar4 + 0xe8) = uVar16;
  uVar17 = *(undefined8 *)PTR__kSecMatchLimitOne_110347800;
  *(undefined8 *)(lVar4 + 0xf0) = uVar17;
  uVar22 = *(undefined8 *)PTR__kSecReturnData_110347818;
  *(undefined8 *)(lVar4 + 0x108) = uVar5;
  *(undefined8 *)(lVar4 + 0x110) = uVar22;
  uVar24 = *(undefined8 *)PTR__kCFBooleanTrue_11034ab90;
  *(undefined8 *)(lVar4 + 0x130) = uVar20;
  *(undefined8 *)(lVar4 + 0x118) = uVar24;
  uStack_1d8 = param_1;
  func_0x00010006c00c(param_1,param_2);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61174(uVar24);
  func_0x000107c61174(uStack_1e8);
  func_0x000107c61174(uStack_1f8);
  func_0x000107c61174(uStack_200);
  func_0x000107c61434(uStack_1f0);
  func_0x000107c61174(uStack_208);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar22);
  lVar6 = lVar4;
  FUN_1014c14a8();
  func_0x000107c61588(lVar4);
  uVar20 = 0x112da90b0;
  func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
  func_0x000107c61408(puStack_1d0,7,uVar20);
  alStack_1b0[0] = 0;
  puVar7 = (undefined *)0x112da8f90;
  func_0x0001014c15fc(0x112da8f90,&UNK_10dcb8d78);
  puVar9 = PTR___sypN_11034f1a8 + 8;
  lVar8 = lVar6;
  func_0x000107c5f9dc(lVar6,uStack_1e0);
  func_0x000107c6142c(lVar6);
  lVar6 = lVar8;
  func_0x000107c60b5c(lVar8,alStack_1b0);
  plVar15 = param_2;
  func_0x00010006c090(uStack_1d8);
  func_0x000107c61170(lVar8);
  uVar20 = 0;
  uVar5 = 0xf000000000000000;
  if (((int)lVar6 == 0) && (alStack_1b0[0] != 0)) {
    lStack_1c8 = alStack_1b0[0];
    func_0x000107c615f0();
    iVar3 = (int)&uStack_1c0;
    plVar15 = &lStack_1c8;
    puVar9 = PTR___syXlN_11034f1a0 + 8;
    param_5 = 6;
    puVar7 = PTR___s10Foundation4DataVN_110350ae0;
    func_0x000107c6147c();
    uVar20 = uStack_1c0;
    uVar5 = uStack_1b8;
    if (iVar3 == 0) {
      uVar20 = 0;
      uVar5 = 0xf000000000000000;
    }
  }
  lVar8 = alStack_1b0[0];
  func_0x000107c615e8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar25._8_8_ = uVar5;
    auVar25._0_8_ = uVar20;
    return auVar25;
  }
  func_0x000107c60e78();
  uStack_218 = 0x1014c0370;
  plStack_270 = param_2;
  uStack_268 = param_1;
  uStack_260 = uVar24;
  uStack_258 = uVar22;
  uStack_250 = uVar21;
  lStack_248 = lVar4;
  uStack_240 = uVar19;
  lStack_238 = lVar6;
  uStack_230 = uVar5;
  uStack_228 = uVar20;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x000107c61434(puVar7);
  FUN_100e35e30();
  lVar4 = 0x112da90a0;
  func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
  lVar6 = lVar4;
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 10;
  *(undefined8 *)(lVar6 + 0x10) = 5;
  uVar5 = *(undefined8 *)PTR__kSecClass_1103477e0;
  *(undefined8 *)(lVar6 + 0x20) = uVar5;
  uVar21 = *(undefined8 *)PTR__kSecClassGenericPassword_1103477e8;
  lVar10 = 0;
  func_0x0001014bede8();
  *(undefined8 *)(lVar6 + 0x28) = uVar21;
  uVar22 = *(undefined8 *)PTR__kSecAttrService_1103477d0;
  *(long *)(lVar6 + 0x40) = lVar10;
  *(undefined8 *)(lVar6 + 0x48) = uVar22;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar6 + 0x50) = param_5;
  *(undefined8 *)(lVar6 + 0x58) = param_6;
  puVar2 = PTR___s10Foundation4DataVN_110350ae0;
  uVar19 = *(undefined8 *)PTR__kSecAttrGeneric_1103477c8;
  *(undefined **)(lVar6 + 0x68) = puVar1;
  *(undefined8 *)(lVar6 + 0x70) = uVar19;
  *(undefined **)(lVar6 + 0x78) = puVar9;
  *(undefined **)(lVar6 + 0x80) = puVar7;
  uVar16 = *(undefined8 *)PTR__kSecAttrAccount_1103477c0;
  *(undefined **)(lVar6 + 0x90) = puVar2;
  *(undefined8 *)(lVar6 + 0x98) = uVar16;
  *(undefined **)(lVar6 + 0xa0) = puVar9;
  *(undefined **)(lVar6 + 0xa8) = puVar7;
  uVar17 = *(undefined8 *)PTR__kSecAttrSynchronizable_1103477d8;
  *(undefined **)(lVar6 + 0xb8) = puVar2;
  *(undefined8 *)(lVar6 + 0xc0) = uVar17;
  uVar18 = *(undefined8 *)PTR__kCFBooleanFalse_11034ab88;
  uVar20 = 0x112da90a8;
  func_0x0001000285a8(0x112da90a8,&UNK_10d950508);
  *(undefined8 *)(lVar6 + 0xe0) = uVar20;
  *(undefined8 *)(lVar6 + 200) = uVar18;
  func_0x00010006c00c(puVar9,puVar7);
  func_0x00010006c00c(puVar9,puVar7);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar22);
  func_0x000107c61434(param_6);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar17);
  lVar11 = lVar6;
  FUN_1014c14a8();
  func_0x000107c61588(lVar6);
  uVar20 = 0x112da90b0;
  func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
  func_0x000107c61408((undefined8 *)(lVar6 + 0x20),5);
  uVar5 = *(undefined8 *)PTR__kSecValueData_110347828;
  puStack_390 = PTR___s10Foundation4DataVN_110350ae0;
  lStack_3a8 = lVar8;
  plStack_3a0 = plVar15;
  func_0x000100102924(&lStack_3a8,auStack_388);
  func_0x000107c61434(lVar11);
  func_0x000107c61174();
  func_0x00010006c00c(lVar8,plVar15);
  lVar6 = lVar11;
  func_0x000107c61558(lVar11);
  lStack_3a8 = lVar11;
  func_0x0001014c0d74(auStack_388,uVar5,lVar6);
  func_0x000107c61170(uVar5);
  lVar6 = lStack_3a8;
  lStack_368 = lStack_3a8;
  uVar16 = *(undefined8 *)PTR__kSecAttrAccessible_110347790;
  lVar23 = *(long *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_1103477a0;
  lStack_3a8 = lVar23;
  puStack_390 = (undefined *)lVar10;
  if (lVar10 == 0) {
    uVar17 = uVar16;
    func_0x000107c61174(uVar16);
    func_0x000107c61174(lVar23);
    func_0x0001014c163c(&lStack_3a8,0x112d387f8,&UNK_10d902650);
    func_0x0001014c0cb0(auStack_388,uVar17);
    func_0x000107c61170(uVar17);
    func_0x0001014c163c(auStack_388,0x112d387f8,&UNK_10d902650);
    lVar6 = lStack_368;
  }
  else {
    func_0x000100102924(&lStack_3a8,auStack_388);
    uVar17 = uVar16;
    func_0x000107c61174(uVar16);
    func_0x000107c61174(lVar23);
    lVar12 = lVar6;
    func_0x000107c61558(lVar6);
    lStack_3a8 = lVar6;
    func_0x0001014c0d74(auStack_388,uVar17,lVar12);
    func_0x000107c61170(uVar17);
    lVar6 = lStack_3a8;
  }
  uVar17 = 0x112da8f90;
  func_0x0001014c15fc(0x112da8f90,&UNK_10dcb8d78);
  lVar12 = lVar6;
  func_0x000107c5f9dc(lVar6,lVar10,PTR___sypN_11034f1a8 + 8,uVar17);
  lVar13 = lVar12;
  func_0x000107c60b58();
  func_0x000107c61170(lVar12);
  if ((int)lVar13 == -0x62d3) {
    func_0x000107c61534(lVar4,auStack_418);
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(long *)(lVar4 + 0x28) = lVar8;
    *(long **)(lVar4 + 0x30) = plVar15;
    *(undefined **)(lVar4 + 0x40) = PTR___s10Foundation4DataVN_110350ae0;
    *(undefined8 *)(lVar4 + 0x48) = uVar16;
    *(long *)(lVar4 + 0x68) = lVar10;
    *(long *)(lVar4 + 0x50) = lVar23;
    func_0x000107c61174(uVar5);
    func_0x00010006c00c(lVar8,plVar15);
    func_0x000107c61174(uVar16);
    func_0x000107c61174(lVar23);
    lVar8 = lVar4;
    FUN_1014c14a8(lVar4);
    func_0x000107c61588(lVar4);
    func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar20);
    puVar1 = PTR___sypN_11034f1a8;
    lVar4 = lVar11;
    func_0x000107c5f9dc(lVar11,lVar10,PTR___sypN_11034f1a8 + 8,uVar17);
    func_0x000107c6142c(lVar11);
    lVar11 = lVar8;
    func_0x000107c5f9dc(lVar8,lVar10,puVar1 + 8,uVar17);
    func_0x000107c6142c(lVar8);
    lVar8 = lVar4;
    func_0x000107c60b64(lVar4,lVar11);
    func_0x00010006c090(puVar9,puVar7);
    func_0x000107c6142c(lVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar11);
    uVar14 = (ulong)((int)lVar8 == 0);
  }
  else if ((int)lVar13 == 0) {
    func_0x00010006c090(puVar9,puVar7);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar11);
    uVar14 = 1;
  }
  else {
    func_0x00010006c090(puVar9,puVar7);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar11);
    uVar14 = 0;
  }
  auVar26._8_8_ = puVar7;
  auVar26._0_8_ = uVar14;
  return auVar26;
}



/* Entry: 1014c0ad0; end: 1014c0ae7;  */

undefined1  [16]
FUN_1014c0ad0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_418 [112];
  long lStack_3a8;
  long *plStack_3a0;
  undefined *puStack_390;
  undefined1 auStack_388 [32];
  long lStack_368;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long alStack_1b0 [40];
  long lStack_70;
  
  uVar6 = *unaff_x20;
  uVar17 = unaff_x20[1];
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f0 = uVar17;
  func_0x000107c61434(param_2);
  FUN_100e35e30();
  lVar4 = 0x112da90a0;
  func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 0xe;
  *(undefined8 *)(lVar4 + 0x10) = 7;
  uStack_1e8 = *(undefined8 *)PTR__kSecClass_1103477e0;
  puStack_1d0 = (undefined8 *)(lVar4 + 0x20);
  *puStack_1d0 = uStack_1e8;
  uVar20 = *(undefined8 *)PTR__kSecClassGenericPassword_1103477e8;
  uVar5 = 0;
  uStack_1f8 = uVar20;
  func_0x0001014bede8();
  *(undefined8 *)(lVar4 + 0x28) = uVar20;
  uStack_200 = *(undefined8 *)PTR__kSecAttrService_1103477d0;
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  *(undefined8 *)(lVar4 + 0x48) = uStack_200;
  puVar8 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar4 + 0x50) = uVar6;
  *(undefined8 *)(lVar4 + 0x58) = uVar17;
  puVar10 = PTR___s10Foundation4DataVN_110350ae0;
  uStack_208 = *(undefined8 *)PTR__kSecAttrGeneric_1103477c8;
  *(undefined **)(lVar4 + 0x68) = puVar8;
  *(undefined8 *)(lVar4 + 0x70) = uStack_208;
  *(undefined8 *)(lVar4 + 0x78) = param_1;
  *(long **)(lVar4 + 0x80) = param_2;
  uVar21 = *(undefined8 *)PTR__kSecAttrAccount_1103477c0;
  *(undefined **)(lVar4 + 0x90) = puVar10;
  *(undefined8 *)(lVar4 + 0x98) = uVar21;
  *(undefined8 *)(lVar4 + 0xa0) = param_1;
  *(long **)(lVar4 + 0xa8) = param_2;
  uVar18 = *(undefined8 *)PTR__kSecAttrSynchronizable_1103477d8;
  *(undefined **)(lVar4 + 0xb8) = puVar10;
  *(undefined8 *)(lVar4 + 0xc0) = uVar18;
  uVar19 = *(undefined8 *)PTR__kCFBooleanFalse_11034ab88;
  uVar6 = 0x112da90a8;
  uStack_1e0 = uVar5;
  func_0x0001000285a8(0x112da90a8,&UNK_10d950508);
  puVar8 = PTR__kSecMatchLimit_1103477f0;
  *(undefined8 *)(lVar4 + 200) = uVar19;
  uVar17 = *(undefined8 *)puVar8;
  *(undefined8 *)(lVar4 + 0xe0) = uVar6;
  *(undefined8 *)(lVar4 + 0xe8) = uVar17;
  uVar20 = *(undefined8 *)PTR__kSecMatchLimitOne_110347800;
  *(undefined8 *)(lVar4 + 0xf0) = uVar20;
  uVar22 = *(undefined8 *)PTR__kSecReturnData_110347818;
  *(undefined8 *)(lVar4 + 0x108) = uVar5;
  *(undefined8 *)(lVar4 + 0x110) = uVar22;
  uVar5 = *(undefined8 *)PTR__kCFBooleanTrue_11034ab90;
  *(undefined8 *)(lVar4 + 0x130) = uVar6;
  *(undefined8 *)(lVar4 + 0x118) = uVar5;
  uStack_1d8 = param_1;
  func_0x00010006c00c(param_1,param_2);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uStack_1e8);
  func_0x000107c61174(uStack_1f8);
  func_0x000107c61174(uStack_200);
  func_0x000107c61434(uStack_1f0);
  func_0x000107c61174(uStack_208);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar20);
  func_0x000107c61174(uVar22);
  lVar7 = lVar4;
  FUN_1014c14a8();
  func_0x000107c61588(lVar4);
  uVar6 = 0x112da90b0;
  func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
  func_0x000107c61408(puStack_1d0,7,uVar6);
  alStack_1b0[0] = 0;
  puVar8 = (undefined *)0x112da8f90;
  func_0x0001014c15fc(0x112da8f90,&UNK_10dcb8d78);
  puVar10 = PTR___sypN_11034f1a8 + 8;
  lVar9 = lVar7;
  func_0x000107c5f9dc(lVar7,uStack_1e0);
  func_0x000107c6142c(lVar7);
  lVar7 = lVar9;
  func_0x000107c60b5c(lVar9,alStack_1b0);
  plVar16 = param_2;
  func_0x00010006c090(uStack_1d8);
  func_0x000107c61170(lVar9);
  uVar6 = 0;
  uVar17 = 0xf000000000000000;
  if (((int)lVar7 == 0) && (alStack_1b0[0] != 0)) {
    lStack_1c8 = alStack_1b0[0];
    func_0x000107c615f0();
    iVar3 = (int)&uStack_1c0;
    plVar16 = &lStack_1c8;
    puVar10 = PTR___syXlN_11034f1a0 + 8;
    param_5 = 6;
    puVar8 = PTR___s10Foundation4DataVN_110350ae0;
    func_0x000107c6147c();
    uVar6 = uStack_1c0;
    uVar17 = uStack_1b8;
    if (iVar3 == 0) {
      uVar6 = 0;
      uVar17 = 0xf000000000000000;
    }
  }
  lVar9 = alStack_1b0[0];
  func_0x000107c615e8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar24._8_8_ = uVar17;
    auVar24._0_8_ = uVar6;
    return auVar24;
  }
  func_0x000107c60e78();
  uStack_218 = 0x1014c0370;
  plStack_270 = param_2;
  uStack_268 = param_1;
  uStack_260 = uVar5;
  uStack_258 = uVar22;
  uStack_250 = uVar21;
  lStack_248 = lVar4;
  uStack_240 = uVar19;
  lStack_238 = lVar7;
  uStack_230 = uVar17;
  uStack_228 = uVar6;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x000107c61434(puVar8);
  FUN_100e35e30();
  lVar4 = 0x112da90a0;
  func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
  lVar7 = lVar4;
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 10;
  *(undefined8 *)(lVar7 + 0x10) = 5;
  uVar17 = *(undefined8 *)PTR__kSecClass_1103477e0;
  *(undefined8 *)(lVar7 + 0x20) = uVar17;
  uVar21 = *(undefined8 *)PTR__kSecClassGenericPassword_1103477e8;
  lVar11 = 0;
  func_0x0001014bede8();
  *(undefined8 *)(lVar7 + 0x28) = uVar21;
  uVar22 = *(undefined8 *)PTR__kSecAttrService_1103477d0;
  *(long *)(lVar7 + 0x40) = lVar11;
  *(undefined8 *)(lVar7 + 0x48) = uVar22;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar7 + 0x50) = param_5;
  *(undefined8 *)(lVar7 + 0x58) = param_6;
  puVar2 = PTR___s10Foundation4DataVN_110350ae0;
  uVar19 = *(undefined8 *)PTR__kSecAttrGeneric_1103477c8;
  *(undefined **)(lVar7 + 0x68) = puVar1;
  *(undefined8 *)(lVar7 + 0x70) = uVar19;
  *(undefined **)(lVar7 + 0x78) = puVar10;
  *(undefined **)(lVar7 + 0x80) = puVar8;
  uVar5 = *(undefined8 *)PTR__kSecAttrAccount_1103477c0;
  *(undefined **)(lVar7 + 0x90) = puVar2;
  *(undefined8 *)(lVar7 + 0x98) = uVar5;
  *(undefined **)(lVar7 + 0xa0) = puVar10;
  *(undefined **)(lVar7 + 0xa8) = puVar8;
  uVar20 = *(undefined8 *)PTR__kSecAttrSynchronizable_1103477d8;
  *(undefined **)(lVar7 + 0xb8) = puVar2;
  *(undefined8 *)(lVar7 + 0xc0) = uVar20;
  uVar18 = *(undefined8 *)PTR__kCFBooleanFalse_11034ab88;
  uVar6 = 0x112da90a8;
  func_0x0001000285a8(0x112da90a8,&UNK_10d950508);
  *(undefined8 *)(lVar7 + 0xe0) = uVar6;
  *(undefined8 *)(lVar7 + 200) = uVar18;
  func_0x00010006c00c(puVar10,puVar8);
  func_0x00010006c00c(puVar10,puVar8);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar22);
  func_0x000107c61434(param_6);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar20);
  lVar12 = lVar7;
  FUN_1014c14a8();
  func_0x000107c61588(lVar7);
  uVar6 = 0x112da90b0;
  func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
  func_0x000107c61408((undefined8 *)(lVar7 + 0x20),5);
  uVar17 = *(undefined8 *)PTR__kSecValueData_110347828;
  puStack_390 = PTR___s10Foundation4DataVN_110350ae0;
  lStack_3a8 = lVar9;
  plStack_3a0 = plVar16;
  func_0x000100102924(&lStack_3a8,auStack_388);
  func_0x000107c61434(lVar12);
  func_0x000107c61174();
  func_0x00010006c00c(lVar9,plVar16);
  lVar7 = lVar12;
  func_0x000107c61558(lVar12);
  lStack_3a8 = lVar12;
  func_0x0001014c0d74(auStack_388,uVar17,lVar7);
  func_0x000107c61170(uVar17);
  lVar7 = lStack_3a8;
  lStack_368 = lStack_3a8;
  uVar5 = *(undefined8 *)PTR__kSecAttrAccessible_110347790;
  lVar23 = *(long *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_1103477a0;
  lStack_3a8 = lVar23;
  puStack_390 = (undefined *)lVar11;
  if (lVar11 == 0) {
    uVar20 = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c61174(lVar23);
    func_0x0001014c163c(&lStack_3a8,0x112d387f8,&UNK_10d902650);
    func_0x0001014c0cb0(auStack_388,uVar20);
    func_0x000107c61170(uVar20);
    func_0x0001014c163c(auStack_388,0x112d387f8,&UNK_10d902650);
    lVar7 = lStack_368;
  }
  else {
    func_0x000100102924(&lStack_3a8,auStack_388);
    uVar20 = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c61174(lVar23);
    lVar13 = lVar7;
    func_0x000107c61558(lVar7);
    lStack_3a8 = lVar7;
    func_0x0001014c0d74(auStack_388,uVar20,lVar13);
    func_0x000107c61170(uVar20);
    lVar7 = lStack_3a8;
  }
  uVar20 = 0x112da8f90;
  func_0x0001014c15fc(0x112da8f90,&UNK_10dcb8d78);
  lVar13 = lVar7;
  func_0x000107c5f9dc(lVar7,lVar11,PTR___sypN_11034f1a8 + 8,uVar20);
  lVar14 = lVar13;
  func_0x000107c60b58();
  func_0x000107c61170(lVar13);
  if ((int)lVar14 == -0x62d3) {
    func_0x000107c61534(lVar4,auStack_418);
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x20) = uVar17;
    *(long *)(lVar4 + 0x28) = lVar9;
    *(long **)(lVar4 + 0x30) = plVar16;
    *(undefined **)(lVar4 + 0x40) = PTR___s10Foundation4DataVN_110350ae0;
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    *(long *)(lVar4 + 0x68) = lVar11;
    *(long *)(lVar4 + 0x50) = lVar23;
    func_0x000107c61174(uVar17);
    func_0x00010006c00c(lVar9,plVar16);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(lVar23);
    lVar9 = lVar4;
    FUN_1014c14a8(lVar4);
    func_0x000107c61588(lVar4);
    func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar6);
    puVar1 = PTR___sypN_11034f1a8;
    lVar4 = lVar12;
    func_0x000107c5f9dc(lVar12,lVar11,PTR___sypN_11034f1a8 + 8,uVar20);
    func_0x000107c6142c(lVar12);
    lVar12 = lVar9;
    func_0x000107c5f9dc(lVar9,lVar11,puVar1 + 8,uVar20);
    func_0x000107c6142c(lVar9);
    lVar9 = lVar4;
    func_0x000107c60b64(lVar4,lVar12);
    func_0x00010006c090(puVar10,puVar8);
    func_0x000107c6142c(lVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar12);
    uVar15 = (ulong)((int)lVar9 == 0);
  }
  else if ((int)lVar14 == 0) {
    func_0x00010006c090(puVar10,puVar8);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(lVar12);
    uVar15 = 1;
  }
  else {
    func_0x00010006c090(puVar10,puVar8);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(lVar12);
    uVar15 = 0;
  }
  auVar25._8_8_ = puVar8;
  auVar25._0_8_ = uVar15;
  return auVar25;
}



/* Entry: 1014c0ae8; end: 1014c0b67;  */

undefined1  [16] FUN_1014c0ae8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [24];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = 0;
  func_0x0001014bede8(0);
  uVar2 = 0x112da90c0;
  func_0x0001014c15fc(0x112da90c0,&UNK_10da159d0);
  puVar3 = auStack_78;
  func_0x000107c5f0a4(puVar3,uVar1,uVar2);
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    func_0x0001014bede8(0);
    func_0x0001014c15fc(0x112da90c0,&UNK_10da159d0);
    do {
      uVar4 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c61174();
      uVar5 = uVar4;
      func_0x000107c5f0a0();
      uVar8 = (uint)uVar5;
      func_0x000107c61170(uVar4);
      if ((uVar5 & 1) != 0) break;
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  auVar9._8_4_ = uVar8 & 1;
  auVar9._0_8_ = uVar7;
  auVar9._12_4_ = 0;
  return auVar9;
}



/* Entry: 1014c0b68; end: 1014c0bcb;  */

void FUN_1014c0b68(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  func_0x000100102924(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c0bcc);
  (*pcVar2)();
}



/* Entry: 1014c0bcc; end: 1014c0caf;  */

undefined1  [16] FUN_1014c0bcc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x0001014bede8(0);
    func_0x0001014c15fc(0x112da90c0,&UNK_10da159d0);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c5f0a0();
      uVar4 = (uint)uVar2;
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 1014c0cb0; end: 1014c0e7b;  */

void FUN_1014c0cb0(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  FUN_1014c0ae8();
  func_0x000107c6142c(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x0001014c0e7c();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 8));
    func_0x000100102924(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    func_0x0001014c12c8(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 1014c0e7c; end: 1014c14a7;  */

void FUN_1014c0e7c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001000285a8(0x112da90b8,&UNK_10dcb9280);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_1014c0f60;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_1014c0f60:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014c1000);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1014c0fd0;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1014c0fd0:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1014c14a8; end: 1014c15ab;  */

undefined * FUN_1014c14a8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar5 != (undefined *)0x0) {
    func_0x0001000285a8(0x112da90b8,&UNK_10dcb9280);
    puVar2 = puVar5;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      uVar4 = 0;
      FUN_1014c15ac(param_1);
      uVar3 = uStack_78;
      FUN_1014c0ae8();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c15a8);
        (*pcVar1)();
      }
      uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) = *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uStack_78;
      func_0x000100102924(auStack_70,*(long *)(puVar2 + 0x38) + uVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c15ac);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 1014c15ac; end: 1014c167b;  */

undefined8 FUN_1014c15ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112da90b0;
  func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1014c167c; end: 1014c16a3;  */

void FUN_1014c167c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001014c1690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1014c16a4; end: 1014c1743;  */

void FUN_1014c16a4(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000014;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010ef34920;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd000000000000014;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x800000010ef1be60;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xd00000000000001d;
  *(undefined8 *)(unaff_x20 + 0x38) = 0x800000010ef86090;
  return;
}



/* Entry: 1014c1744; end: 1014c17d3;  */

undefined1  [16] FUN_1014c1744(void)

{
  undefined1 auVar1 [16];
  long *unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(*unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1014c17d4; end: 1014c17f3;  */

void FUN_1014c17d4(void)

{
  func_0x000107c61168(&PTR_PTR_112da9108);
  return;
}



/* Entry: 1014c17f4; end: 1014c1883;  */

void FUN_1014c17f4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_1014c17d4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = 0xd000000000000014;
  *(undefined8 *)(lVar2 + 0x18) = 0x800000010ef34920;
  *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000014;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010ef1be60;
  *(undefined8 *)(lVar2 + 0x30) = 0xd00000000000001d;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010ef86090;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1103cd6b0;
  *param_1 = lVar2;
  return;
}



/* Entry: 1014c1884; end: 1014c1893;  */

undefined1  [16] FUN_1014c1884(void)

{
  return ZEXT816(0x1103cd6e8);
}



/* Entry: 1014c1894; end: 1014c19ab;  */

void FUN_1014c1894(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_68 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b940(uVar7);
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  func_0x000107c61428(unaff_x20 + 0x18,auStack_68,1,0);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c5d278(uVar7);
  lVar8 = 0;
  uVar5 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(lVar6 + 0x40);
  while( true ) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar6 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
               lVar8 * 0x400);
      pcVar3 = (code *)*puVar1;
      uVar7 = puVar1[1];
      func_0x000107c6157c(uVar7);
      (*pcVar3)();
      func_0x000107c61574(uVar7);
    }
    bVar4 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar4) break;
    if ((long)(uVar5 + 0x3f >> 6) <= lVar8) {
      func_0x000107c61574(lVar6);
      return;
    }
    uVar9 = ((ulong *)(lVar6 + 0x40))[lVar8];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1014c19ac);
  (*pcVar3)();
}



/* Entry: 1014c19ac; end: 1014c19fb;  */

void FUN_1014c19ac(void)

{
  long unaff_x20;
  
  FUN_1014c1894();
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014c19fc; end: 1014c1cdf;  */

undefined8
FUN_1014c19fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d453c8;
  uStack_b0 = param_6;
  uStack_a8 = param_4;
  uStack_a0 = param_2;
  uStack_98 = param_1;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&uStack_b0 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar15 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar9 - extraout_x12;
  func_0x000107c6157c(param_5);
  func_0x000107c5eec4(lVar11);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b940();
  func_0x0001000abe04(param_3,lVar15);
  (**(code **)(lVar12 + 0x10))(lVar9,lVar11,lVar3);
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar10 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  uVar14 = lVar13 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_1103cd830;
  func_0x000107c613fc(&UNK_1103cd830,uVar14 + 0x10,uVar8 | 7);
  uVar7 = uStack_b0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = uStack_b0;
  *(long *)(puVar4 + 0x28) = unaff_x20;
  lStack_88 = lVar3;
  (**(code **)(lVar12 + 0x20))(puVar4 + uVar10,lVar9,lVar3);
  uVar2 = uStack_a0;
  *(undefined8 *)(puVar4 + uVar14) = uStack_a8;
  *(undefined8 *)((long)(puVar4 + uVar14) + 8) = param_5;
  func_0x000107c61434(uStack_a0);
  func_0x000107c6157c();
  uVar5 = uStack_98;
  func_0x0001001ca884(uStack_98,uVar2,lVar15,&UNK_10d950668,puVar4,uVar7);
  puVar4 = &UNK_1103cd880;
  func_0x000107c613fc(&UNK_1103cd880,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  cVar1 = *(char *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar5);
  if (cVar1 == '\x01') {
    func_0x000107c61574(puVar4);
    func_0x000107c5d278(uStack_90);
    func_0x000107c5fd50(uVar5,uVar7,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(param_5);
    (**(code **)(lVar12 + 8))(lVar11,lStack_88);
  }
  else {
    puVar6 = &UNK_1103cd858;
    func_0x000107c613fc(&UNK_1103cd858,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1014c3418;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    func_0x000107c61428(unaff_x20 + 0x18,auStack_78,0x21,0);
    func_0x000107c6157c(puVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61558(uVar7);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x18) = 0x8000000000000000;
    FUN_1014c28f8(FUN_1014c34b0,puVar6,lVar11,uVar7);
    *(undefined8 *)(unaff_x20 + 0x18) = uStack_80;
    func_0x000107c614a8(auStack_78);
    func_0x000107c61574(puVar4);
    func_0x000107c5d278(uStack_90);
    (**(code **)(lVar12 + 8))(lVar11,lStack_88);
    func_0x000107c61574(param_5);
  }
  return uVar5;
}



/* Entry: 1014c1ce0; end: 1014c1d77;  */

void FUN_1014c1ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  lVar2 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  iVar1 = *param_6;
  plVar4 = (long *)(ulong)(uint)param_6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1014c1d78;
                    /* WARNING: Could not recover jumptable at 0x0001014c1d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_6))(plVar4,param_1);
  return;
}



/* Entry: 1014c1d78; end: 1014c1dbf;  */

void FUN_1014c1d78(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014c1dc0,0,0);
  return;
}



/* Entry: 1014c1dc0; end: 1014c1e63;  */

void FUN_1014c1dc0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar6 = *(long *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c4b940(uVar5);
  (**(code **)(lVar1 + 0x10))(uVar3,uVar2,uVar4);
  func_0x000107c61428(lVar6 + 0x18,unaff_x22 + 0x10,0x21,0);
  FUN_1014c23a0(0,0,uVar3);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c5d278(uVar5);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001014c1e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014c1e64; end: 1014c215b;  */

undefined8
FUN_1014c1e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  long extraout_x12;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d453c8;
  uStack_b0 = param_6;
  uStack_a8 = param_4;
  uStack_a0 = param_2;
  uStack_98 = param_1;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&uStack_b0 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar15 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar12 - extraout_x12;
  func_0x000107c6157c(param_5);
  func_0x000107c5eec4(lVar10);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b940();
  func_0x0001000abe04(param_3,lVar15);
  (**(code **)(lVar11 + 0x10))(lVar12,lVar10,lVar2);
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  uVar14 = lVar13 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_1103cd7b8;
  func_0x000107c613fc(&UNK_1103cd7b8,uVar14 + 0x10,uVar8 | 7);
  uVar7 = uStack_b0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = uStack_b0;
  *(long *)(puVar3 + 0x28) = unaff_x20;
  lStack_88 = lVar2;
  (**(code **)(lVar11 + 0x20))(puVar3 + uVar9,lVar12,lVar2);
  uVar5 = uStack_a0;
  *(undefined8 *)(puVar3 + uVar14) = uStack_a8;
  *(undefined8 *)((long)(puVar3 + uVar14) + 8) = param_5;
  func_0x000107c61434(uStack_a0);
  func_0x000107c6157c();
  uVar4 = uStack_98;
  func_0x00010085979c(uStack_98,uVar5,lVar15,&UNK_10d950648,puVar3,uVar7);
  puVar3 = &UNK_1103cd808;
  func_0x000107c613fc(&UNK_1103cd808,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  cVar1 = *(char *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar4);
  if (cVar1 == '\x01') {
    func_0x000107c61574(puVar3);
    func_0x000107c5d278(uStack_90);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(uVar4,uVar7,uVar5,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(param_5);
    (**(code **)(lVar11 + 8))(lVar10,lStack_88);
  }
  else {
    puVar6 = &UNK_1103cd7e0;
    func_0x000107c613fc(&UNK_1103cd7e0,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1014c3244;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    func_0x000107c61428(unaff_x20 + 0x18,auStack_78,0x21,0);
    func_0x000107c6157c(puVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61558(uVar7);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x18) = 0x8000000000000000;
    FUN_1014c28f8(FUN_1014c2668,puVar6,lVar10,uVar7);
    *(undefined8 *)(unaff_x20 + 0x18) = uStack_80;
    func_0x000107c614a8(auStack_78);
    func_0x000107c61574(puVar3);
    func_0x000107c5d278(uStack_90);
    (**(code **)(lVar11 + 8))(lVar10,lStack_88);
    func_0x000107c61574(param_5);
  }
  return uVar4;
}



/* Entry: 1014c215c; end: 1014c21f3;  */

void FUN_1014c215c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  lVar2 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  iVar1 = *param_6;
  plVar4 = (long *)(ulong)(uint)param_6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1014c21f4;
                    /* WARNING: Could not recover jumptable at 0x0001014c21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_6))(plVar4,param_1);
  return;
}



/* Entry: 1014c21f4; end: 1014c224f;  */

void FUN_1014c21f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1014c2250;
  }
  else {
    pcVar1 = FUN_1014c22f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1014c2250; end: 1014c22f7;  */

void FUN_1014c2250(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c4b940(uVar5);
  (**(code **)(lVar1 + 0x10))(uVar3,uVar2,uVar4);
  func_0x000107c61428(lVar6 + 0x18,unaff_x22 + 0x28,0x21,0);
  FUN_1014c23a0(0,0,uVar3);
  func_0x000107c614a8(unaff_x22 + 0x28);
  func_0x000107c5d278(uVar5);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001014c22f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014c22f8; end: 1014c239f;  */

void FUN_1014c22f8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c4b940(uVar5);
  (**(code **)(lVar1 + 0x10))(uVar3,uVar2,uVar4);
  func_0x000107c61428(lVar6 + 0x18,unaff_x22 + 0x10,0x21,0);
  FUN_1014c23a0(0,0,uVar3);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c5d278(uVar5);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001014c239c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1014c23a0; end: 1014c2503;  */

void FUN_1014c23a0(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  
  if (param_1 == 0) {
    lVar4 = *unaff_x20;
    func_0x000107c61434(lVar4);
    lVar2 = param_3;
    func_0x0001000c8928();
    func_0x000107c6142c(lVar4);
    if ((param_2 & 1) == 0) {
      lVar2 = 0;
      func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x0001014c24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + -8) + 8))(param_3,lVar2);
      return;
    }
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x0001014c2a70();
    }
    lVar5 = *(long *)(lVar4 + 0x30);
    lVar3 = 0;
    func_0x000107c5eec8();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 8);
    (*pcVar6)(lVar5 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * lVar2,lVar3);
    func_0x000107c61574(*(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 0x10 + 8));
    func_0x0001014c2ff4(lVar2,lVar4);
    (*pcVar6)(param_3,lVar3);
    *unaff_x20 = lVar4;
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    FUN_1014c28f8(param_1,param_2,param_3,lVar2);
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_3,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 1014c2504; end: 1014c2563;  */

void FUN_1014c2504(void)

{
  FUN_1014c1894();
  return;
}



/* Entry: 1014c2564; end: 1014c262b;  */

void FUN_1014c2564(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar6 = 0;
  func_0x000107c5eec8();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x28);
  piVar3 = *(int **)(unaff_x20 +
                    (*(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8));
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1014c262c;
  plVar7[8] = lVar9;
  plVar7[9] = unaff_x20 + uVar8;
  lVar6 = 0;
  func_0x000107c5eec8(0,uVar2,uVar4);
  plVar7[10] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar7[0xb] = lVar6;
  uVar8 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0xc] = uVar8;
  iVar1 = *piVar3;
  plVar5 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  plVar7[0xd] = (long)plVar5;
  *plVar5 = (long)plVar7;
  plVar5[1] = (long)FUN_1014c21f4;
                    /* WARNING: Could not recover jumptable at 0x0001014c21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar5,param_1);
  return;
}



/* Entry: 1014c262c; end: 1014c2667;  */

void FUN_1014c262c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014c2664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014c2668; end: 1014c2687;  */

void FUN_1014c2668(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014c2688; end: 1014c275f;  */

void FUN_1014c2688(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 *param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_2 != 0) {
    puVar2 = &UNK_1103cd8d0;
    func_0x000107c613fc(&UNK_1103cd8d0,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_8;
    uVar3 = param_7[1];
    uVar4 = *param_7;
    *(undefined8 *)(puVar2 + 0x20) = param_7[1];
    *(undefined8 *)(puVar2 + 0x18) = uVar4;
    func_0x000107c6157c(uVar3);
    if (param_6 == 0 && param_5 == 0) {
      puStack_80 = (undefined8 *)0x0;
    }
    else {
      uStack_70 = 0;
      uStack_68 = 0;
      puStack_80 = &uStack_70;
      lStack_60 = param_5;
      lStack_58 = param_6;
    }
    uStack_88 = 7;
    lStack_78 = param_2;
    func_0x000107c615bc(param_4,&uStack_88,param_8,&UNK_10d950680,puVar2);
    *param_1 = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c2760);
  (*pcVar1)();
}



/* Entry: 1014c2760; end: 1014c279f;  */

void FUN_1014c2760(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014c279c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014c27a0; end: 1014c2857;  */

void FUN_1014c27a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 != 0) {
    uVar1 = *param_7;
    uVar2 = param_7[1];
    func_0x000107c6157c(uVar2);
    if (param_6 == 0 && param_5 == 0) {
      puStack_90 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_90 = &uStack_80;
      lStack_70 = param_5;
      lStack_68 = param_6;
    }
    uStack_98 = 7;
    lStack_88 = param_2;
    func_0x000107c615bc(param_4,&uStack_98,param_8,uVar1,uVar2);
    *param_1 = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1014c2858);
  (*pcVar3)();
}



/* Entry: 1014c2858; end: 1014c28f7;  */

void FUN_1014c2858(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  lVar4 = *(long *)(param_5 + 0x30);
  lVar3 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1,param_2,lVar3);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c28f8);
  (*pcVar2)();
}



/* Entry: 1014c28f8; end: 1014c3243;  */

void FUN_1014c28f8(undefined8 param_1,ulong param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar3 = 0;
  uVar6 = param_2;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = *unaff_x20;
  lVar4 = param_3;
  func_0x0001000c8928();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c2a08);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    param_4 = param_4 & 1;
    func_0x0001014c2c9c(lVar10);
    lVar4 = param_3;
    func_0x0001000c8928();
    if (((uint)uVar6 & 1) != (param_4 & 1)) {
      func_0x000107c60624(lVar3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c29c8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001014c2a70();
    lVar10 = *unaff_x20;
    goto joined_r0x0001014c2a1c;
  }
  lVar10 = *unaff_x20;
joined_r0x0001014c2a1c:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar5);
    return;
  }
  (**(code **)(lVar11 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,lVar3);
  FUN_1014c2858(lVar4,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                param_2,lVar10);
  return;
}



/* Entry: 1014c3244; end: 1014c3287;  */

void FUN_1014c3244(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)(uVar2,uVar1,uVar3,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 1014c3288; end: 1014c3313;  */

void FUN_1014c3288(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014c3314; end: 1014c33db;  */

void FUN_1014c3314(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar6 = 0;
  func_0x000107c5eec8();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x28);
  piVar3 = *(int **)(unaff_x20 +
                    (*(long *)(*(long *)(lVar6 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8));
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1014c33dc;
  plVar7[5] = lVar9;
  plVar7[6] = unaff_x20 + uVar8;
  lVar6 = 0;
  func_0x000107c5eec8(0,uVar2,uVar4);
  plVar7[7] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar7[8] = lVar6;
  uVar8 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[9] = uVar8;
  iVar1 = *piVar3;
  plVar5 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  plVar7[10] = (long)plVar5;
  *plVar5 = (long)plVar7;
  plVar5[1] = (long)FUN_1014c1d78;
                    /* WARNING: Could not recover jumptable at 0x0001014c1d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar5,param_1);
  return;
}



/* Entry: 1014c33dc; end: 1014c3417;  */

void FUN_1014c33dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014c3414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014c3418; end: 1014c342f;  */

void FUN_1014c3418(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  return;
}



/* Entry: 1014c3430; end: 1014c34af;  */

void FUN_1014c3430(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1014c34b8;
  (*(code *)&UNK_1001d11c4)(plVar3,param_1,uVar2,uVar4,uVar1);
  return;
}



/* Entry: 1014c34b0; end: 1014c34db;  */

void FUN_1014c34b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014c34dc; end: 1014c3553;  */

void FUN_1014c34dc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x0001014c19dc();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1014c3554();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  *(undefined1 *)(lVar2 + 0x20) = 0;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1103cd790;
  *param_1 = lVar2;
  return;
}



/* Entry: 1014c3554; end: 1014c36db;  */

undefined * FUN_1014c3554(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long alStack_80 [4];
  
  lVar10 = 0x112da92d8;
  func_0x0001000285a8(0x112da92d8,&UNK_10d950700);
  lVar9 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = (long)alStack_80 - extraout_x8;
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(0x112da9230,&UNK_10d950658);
    puVar3 = puVar7;
    func_0x000107c60498();
    alStack_80[1] = (long)*(int *)(lVar10 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar9 + 0x48);
    func_0x000107c6157c();
    do {
      uVar5 = uVar6;
      FUN_1014c36ec(param_1);
      uVar4 = uVar6;
      func_0x0001000c8928();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c36d8);
        (*pcVar2)();
      }
      uVar11 = uVar4 >> 3 & 0x1ffffffffffffff8;
      uVar5 = *(ulong *)(puVar3 + uVar11 + 0x40);
      lVar8 = *(long *)(puVar3 + 0x30);
      lVar9 = 0;
      func_0x000107c5eec8();
      alStack_80[3] = ((undefined8 *)(uVar6 + alStack_80[1]))[1];
      alStack_80[2] = *(undefined8 *)(uVar6 + alStack_80[1]);
      *(ulong *)(puVar3 + uVar11 + 0x40) = uVar5 | 1L << (uVar4 & 0x3f);
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (lVar8 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * uVar4,uVar6,lVar9);
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      puVar1[1] = alStack_80[3];
      *puVar1 = alStack_80[2];
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014c36dc);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1014c36dc; end: 1014c36eb;  */

undefined1  [16] FUN_1014c36dc(void)

{
  return ZEXT816(0x1103cd918);
}



/* Entry: 1014c36ec; end: 1014c373b;  */

undefined8 FUN_1014c36ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112da92d8;
  func_0x0001000285a8(0x112da92d8,&UNK_10d950700);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1014c373c; end: 1014c3b1b;  */

long FUN_1014c373c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_12;
  func_0x0001000aad1c();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c61174();
  uVar1 = param_12;
  func_0x0001000aad3c();
  func_0x0001000aad90();
  func_0x0001000ad550(uVar1);
  func_0x0001000b6fc0(uVar1);
  func_0x0001000ab060(0);
  func_0x000100079360(0);
  uVar2 = 0;
  func_0x0001000ac07c(0);
  func_0x0001000b73ac();
  uVar3 = uVar2;
  func_0x0001000ac118();
  func_0x000107c61170(uVar2);
  func_0x000107c6157c(param_6);
  uVar2 = uVar3;
  func_0x0001000ab368(uVar3,0,0,0,&UNK_1000ee71c,param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(param_6);
  func_0x000107c615e8(uVar2);
  func_0x0001000b73b4();
  uVar3 = uVar2;
  func_0x0001000ac118();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x0001000ab368(uVar3,0,0,0,&UNK_1000f5f74,0);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar2);
  uVar2 = 0;
  func_0x0001000b73bc(0);
  func_0x0001000b73dc();
  uVar3 = uVar2;
  func_0x0001000b7430();
  func_0x000107c61170(uVar2);
  func_0x000107c6157c(param_5);
  uVar2 = uVar3;
  func_0x0001000ab368(uVar3,0,0,0,&UNK_1000f6a34,param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(param_5);
  func_0x000107c615e8(uVar2);
  func_0x0001000b7698();
  uVar3 = uVar2;
  func_0x0001000ac118();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x0001000ab368(uVar3,0,0,0,&UNK_1000f6a5c,0);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar2);
  uVar2 = 0;
  func_0x0001000b76a0(0);
  func_0x0001000b76c0();
  uVar3 = uVar2;
  func_0x0001000b7760();
  func_0x000107c61170(uVar2);
  func_0x000107c6157c(param_7);
  uVar2 = uVar3;
  func_0x0001000ab368(uVar3,uVar1,0,0,&UNK_1000b9d64,param_7);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61574(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61578(param_7,2);
  func_0x000107c615e8(uVar2);
  return unaff_x20;
}



/* Entry: 1014c3b1c; end: 1014c3baf;  */

void FUN_1014c3b1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1014c3bb0; end: 1014c3bf7;  */

undefined1  [16] FUN_1014c3bb0(void)

{
  return ZEXT816(0);
}



/* Entry: 1014c3bf8; end: 1014c3c33;  */

void FUN_1014c3bf8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1014c3c34; end: 1014c3c93;  */

undefined1  [16] FUN_1014c3c34(void)

{
  return ZEXT816(0x1103cdcd8);
}



/* Entry: 1014c3c94; end: 1014c3d13;  */

long FUN_1014c3c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000107c613fc();
  uStack_38 = 0;
  func_0x0001000285a8(0x112da94f8,&UNK_10d950a90);
  func_0x000107c613fc();
  puVar1 = &uStack_38;
  func_0x00010006c248();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 1014c3d14; end: 1014c3d5b;  */

void FUN_1014c3d14(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014c3d5c; end: 1014c3da3; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage activeLensID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c3d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da95b0;
  func_0x000107c61428(param_1 + _DAT_112da95b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1014c3da4; end: 1014c3e8b; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setActiveLensID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c3da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112da95b0;
  func_0x000107c61428(param_1 + _DAT_112da95b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1014c3e8c; end: 1014c3eeb; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage init] */

void FUN_1014c3e8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAppInsightsMetadataServicesImpl.SCAppInsightsMetadataStorage",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c3eb8);
  (*pcVar1)();
}



/* Entry: 1014c3eec; end: 1014c3f47; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014c3f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c3f0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c3eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da95c0));
  return;
}



/* Entry: 1014c3f48; end: 1014c3f53; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage leaveBreadcrumbSync:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c3f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*(code *)&DAT_1008d0250)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014c3f54; end: 1014c3fe7; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage leaveUIViewBreadcrumbSync:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c3f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c5faec();
  uStack_50 = *(undefined8 *)(param_1 + _DAT_112da95c0);
  uStack_48 = param_3;
  uStack_40 = param_2;
  func_0x000107c61174(param_1);
  func_0x000100087bd4(FUN_1014c4818,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1014c3fe8; end: 1014c407f; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setBoolValue:forKey:] */

/* WARNING: Possible PIC construction at 0x0001014c4064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c4068) */

void FUN_1014c3fe8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_4);
  uVar2 = 0x534559;
  if (param_3 == 0) {
    uVar2 = 0x4f4e;
  }
  uVar1 = 0xe300000000000000;
  if (param_3 == 0) {
    uVar1 = 0xe200000000000000;
  }
  func_0x000107c61174(param_1);
  func_0x0001000d1fec(uVar2,uVar1,param_4,param_2,0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014c4080; end: 1014c4117; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setObjectValue:forKey:] */

/* WARNING: Possible PIC construction at 0x0001014c40fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c4100) */

void FUN_1014c4080(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  func_0x0001000d1fec(param_3,uVar1,param_4,param_2,0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014c4118; end: 1014c41cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c4118(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (param_2 == 0) {
    uStack_60 = *(undefined8 *)(unaff_x20 + _DAT_112da95c0);
    pcVar2 = FUN_1014c46f0;
  }
  else {
    uVar1 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      return;
    }
    uStack_60 = *(undefined8 *)(unaff_x20 + _DAT_112da95c0);
    pcVar2 = (code *)0x1014c470c;
    uStack_48 = param_1;
    lStack_40 = param_2;
  }
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x000100087bd4(pcVar2,auStack_70,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1014c41d0; end: 1014c4373; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setObjectValueSync:forKey:] */

/* WARNING: Possible PIC construction at 0x0001014c4248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c424c) */

void FUN_1014c41d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1014c4118(param_3,uVar1,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014c4374; end: 1014c43cf; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage removeObjectForKey:] */

void FUN_1014c4374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x0001014c4264(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014c43d0; end: 1014c445f; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setUserId:] */

/* WARNING: Possible PIC construction at 0x0001014c4444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c4448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c43d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1318;
  uVar2 = param_2;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  func_0x000107c61174(param_1);
  FUN_1014c4898(ppuVar1,uVar2,param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1014c4460; end: 1014c44ef; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setSafeMode:] */

/* WARNING: Possible PIC construction at 0x0001014c44cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c44d0) */

void FUN_1014c4460(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174();
  FUN_1014c808c();
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = 0x534559;
  if (param_3 == 0) {
    uVar4 = 0x4f4e;
  }
  uVar1 = 0xe300000000000000;
  if (param_3 == 0) {
    uVar1 = 0xe200000000000000;
  }
  func_0x000107c61434(uVar3);
  func_0x0001000d1fec(uVar4,uVar1,uVar2,uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1014c44f0; end: 1014c45df; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage getMetadata] */

/* WARNING: Removing unreachable block (ram,0x0001014c459c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c44f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8460;
  func_0x000107c610f8(PTR_PTR_1126b8460);
  func_0x000107c61174();
  func_0x000107c453e4(puVar1);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112da95b8))[1];
  if (uVar3 >> 0x3c < 0xf) {
    puVar4 = *(undefined **)(param_1 + _DAT_112da95b8);
    func_0x000107c610f8(PTR_PTR_1126b8460);
    FUN_100de78a0(puVar4,uVar3);
    puVar2 = puVar4;
    FUN_1014c4758(puVar4,uVar3);
    func_0x0001000b44c0(puVar4,uVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c61170(param_1);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1014c45e0; end: 1014c4653; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setMetadataWithMetadata:] */

/* WARNING: Possible PIC construction at 0x0001014c4624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c4628) */

void FUN_1014c45e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1014c4654; end: 1014c46c7; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage getMetadataBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c4654(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_112da95b8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112da95b8);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    func_0x000107c5ee20(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


