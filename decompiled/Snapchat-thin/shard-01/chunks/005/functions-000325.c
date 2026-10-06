/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010ca3dc; end: 1010ca3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ca3dc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  if (param_1 == 1) {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 1;
  }
  else {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar2 = lVar3 + 0x10;
    func_0x000107c61618(lVar2);
    func_0x0001007d6c8c(3,0xd000000000000025,0x800000010ef24bb0,lVar2,uVar4,&PTR_DAT_110381af8);
    func_0x000107c61170(lVar2);
    func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lStack_80 = lVar3;
      func_0x000100087bd4(FUN_1010cad6c,auStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar3);
    }
    uVar5 = 0x800000010ef24be0;
    uVar4 = 0xd000000000000016;
    uVar6 = 0x101;
  }
  (*pcVar1)(uVar4,uVar5,uVar6);
  return;
}



/* Entry: 1010ca3e8; end: 1010ca42f;  */

void FUN_1010ca3e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1010ca430; end: 1010ca44b;  */

void FUN_1010ca430(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1010ca44c; end: 1010ca817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ca44c(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001007d6c8c(1,0xd00000000000001d,0x800000010ef24ac0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d5b728);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001007d6c8c(3,0xd000000000000023,0x800000010ef24a30);
    (*param_1)(0xd000000000000021,0x800000010ef24a60,0x102);
  }
  else {
    func_0x0001007d6c8c(1,0xd000000000000026,0x800000010ef24ae0);
    puVar3 = &UNK_110381978;
    func_0x000107c613fc(&UNK_110381978,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110381a40;
    func_0x000107c613fc(&UNK_110381a40,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(long *)(puVar4 + 0x28) = lVar1;
    pcStack_50 = FUN_1010ca844;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100288f10;
    puStack_58 = &UNK_110381a58;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c503a8(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1010ca818; end: 1010ca843;  */

void FUN_1010ca818(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010ca844; end: 1010ca84f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ca844(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_a0;
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
    lVar3 = lVar4 + 0x10;
    func_0x000107c61618(lVar3);
    func_0x0001007d6c8c(3,0xd000000000000024,0x800000010ef24b30,lVar3,uVar2,&PTR_DAT_110381af8);
    func_0x000107c61170(lVar3);
    uVar2 = 0x62206465696e6564;
    uVar7 = 0xee00726573752079;
    uVar8 = 0x102;
  }
  else {
    func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
    lVar3 = lVar4 + 0x10;
    func_0x000107c61618(lVar3);
    func_0x0001007d6c8c(1,0xd00000000000002a,0x800000010ef24b60,lVar3,uVar2,&PTR_DAT_110381af8);
    func_0x000107c61170(lVar3);
    uVar2 = 1;
    uVar7 = 0;
    uVar8 = 0;
  }
  (*pcVar1)(uVar2,uVar7,uVar8);
  func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar4 + _DAT_112d5b730);
    puVar5 = &UNK_110381978;
    func_0x000107c613fc(&UNK_110381978,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar4);
    pcStack_80 = FUN_1010cad64;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110381b98;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c4e524(uVar2);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1010ca850; end: 1010ca8cf;  */

void FUN_1010ca850(void)

{
  FUN_1010c9420();
  return;
}



/* Entry: 1010ca8d0; end: 1010ca8f3;  */

void FUN_1010ca8d0(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001010ca8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1010ca8f4; end: 1010ca9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ca8f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d5b730);
  puVar1 = &UNK_110381978;
  func_0x000107c613fc(&UNK_110381978,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110381a90;
  func_0x000107c613fc(&UNK_110381a90,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcStack_40 = FUN_1010caad4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110381aa8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1010ca9d4; end: 1010caad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ca9d4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
    lVar4 = param_1 + _DAT_112d5b750;
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
    lVar2 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar1);
    (**(code **)(lVar2 + 8))(puVar3,uVar1,lVar2);
    func_0x000107c4f018(puVar3);
    lVar4 = param_1;
    func_0x000107c614f0(param_1);
    func_0x0001007d6c8c(1,0xd00000000000001c,0x800000010ef24b10,param_1,lVar4,&PTR_DAT_110381af8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1010caad4; end: 1010caadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010caad4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
    lVar5 = lVar3 + _DAT_112d5b750;
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,uVar1);
    (**(code **)(lVar2 + 8))(puVar4,uVar1,lVar2);
    func_0x000107c4f018(puVar4);
    lVar5 = lVar3;
    func_0x000107c614f0(lVar3);
    func_0x0001007d6c8c(1,0xd00000000000001c,0x800000010ef24b10,lVar3,lVar5,&PTR_DAT_110381af8);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1010caadc; end: 1010caafb;  */

void FUN_1010caadc(void)

{
  func_0x000107c61168(&PTR_PTR_1127aeb10);
  return;
}



/* Entry: 1010caafc; end: 1010cab4b; -[_TtC23LensVenuesProvidingImpl18LensVenuesProvider permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Possible PIC construction at 0x0001010cab34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010cab38) */

void FUN_1010caafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1010ca8f4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010cab4c; end: 1010cab73;  */

void FUN_1010cab4c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 1010cab74; end: 1010cabcf;  */

undefined8 * FUN_1010cab74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010cabd0; end: 1010cac0b;  */

undefined8 * FUN_1010cabd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010cac0c; end: 1010cac9f;  */

int FUN_1010cac0c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010caca0; end: 1010cad63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010caca0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112d5b750;
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar1);
    (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
    lVar3 = param_1;
    func_0x000107c614f0(param_1);
    func_0x0001007d6c8c(1,0xd00000000000001c,0x800000010ef24b90,param_1,lVar3,&PTR_DAT_110381af8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1010cad64; end: 1010cad6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cad64(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3 + _DAT_112d5b750;
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
    lVar2 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar1);
    (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
    lVar4 = lVar3;
    func_0x000107c614f0(lVar3);
    func_0x0001007d6c8c(1,0xd00000000000001c,0x800000010ef24b90,lVar3,lVar4,&PTR_DAT_110381af8);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1010cad6c; end: 1010cadab;  */

void FUN_1010cad6c(void)

{
  FUN_1010caf58();
  return;
}



/* Entry: 1010cadac; end: 1010cae67;  */

void FUN_1010cadac(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_30 = param_1[8];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_28 = 0;
  (**(code **)(unaff_x20 + 0x10))(&uStack_70);
  return;
}



/* Entry: 1010cae68; end: 1010cae73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cae68(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar16 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar16 - extraout_x12;
  func_0x000107c61428(lVar2 + 0x10,auStack_88,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puVar8 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,uVar10,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar3 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar8,0,0);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined1 *)(puVar8 + 2) = 3;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
    return;
  }
  uStack_a0 = param_2;
  func_0x0001000285a8(0x112d5b7b0,&UNK_10d922688);
  func_0x000107c613fc();
  puVar3 = (undefined *)0x0;
  func_0x00010095c380();
  if (lVar6 == 0) {
    lVar5 = *(long *)(lVar2 + _DAT_112d5b740);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c614f0(lVar2);
    if (lVar5 == 0) {
      puVar8 = (undefined8 *)0x3;
      func_0x0001007d6c8c(3,0xd00000000000001a,0x800000010ef24d80,lVar2,lVar6,&PTR_DAT_110381af8);
      FUN_1010cae74();
      puVar9 = &UNK_1106c7aa0;
      func_0x000107c613f8(&UNK_1106c7aa0,puVar8,0,0);
      puVar8[1] = 0;
      *puVar8 = 2;
      *(undefined1 *)(puVar8 + 2) = 3;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar9);
      func_0x000107c61170(lVar2);
      goto LAB_1010c7f50;
    }
    func_0x0001007d6c8c(1,0xd00000000000002a,0x800000010ef24da0,lVar2,lVar6,&PTR_DAT_110381af8);
    lVar6 = lVar5;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar6 = lVar2;
      func_0x000107c614f0(lVar2);
      func_0x0001007d6c8c(3,0xd000000000000025,0x800000010ef24dd0,lVar2,lVar6,&PTR_DAT_110381af8);
      FUN_1010c83c8(puVar3);
      func_0x000107c615e8(lVar5);
      uVar11 = uStack_a0;
    }
    else {
      func_0x000107c5eea0(lVar15);
      lVar7 = lVar6;
      func_0x000107c5ca64(lVar6);
      func_0x000107c61180();
      func_0x000107c5ee94(puVar16);
      func_0x000107c61170(lVar7);
      func_0x000107c5ee68(puVar16);
      pcVar14 = *(code **)(lVar13 + 8);
      (*pcVar14)(puVar16,lVar1);
      (*pcVar14)(lVar15,lVar1);
      lStack_98 = 0;
      uStack_90 = 0xe000000000000000;
      func_0x000107c602fc(0x2b);
      func_0x000107c5fb78(0xd000000000000014,0x800000010ef24e00);
      lStack_a8 = lVar6;
      func_0x000107c5ca64(lVar6);
      func_0x000107c61180();
      func_0x000107c5ee94(lVar15);
      func_0x000107c61170(lVar6);
      FUN_1010caec0();
      func_0x000107c6057c(lVar1,lVar6);
      func_0x000107c5fb78();
      func_0x000107c6142c(lVar6);
      (*pcVar14)(lVar15,lVar1);
      func_0x000107c5fb78(0xd000000000000013,0x800000010ef24e20);
      func_0x000107c5fddc(param_1,&lStack_98,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar11 = uStack_90;
      lVar6 = lStack_98;
      lVar1 = lVar2;
      func_0x000107c614f0(lVar2);
      func_0x0001007d6c8c(1,lVar6,uVar11,lVar2,lVar1,&PTR_DAT_110381af8);
      func_0x000107c6142c(uVar11);
      uVar11 = uStack_a0;
      if ((*(double *)(lVar2 + _DAT_112d5b778) < 0.0) ||
         (param_1 <= *(double *)(lVar2 + _DAT_112d5b778))) {
        lVar6 = lVar2;
        func_0x000107c614f0(lVar2);
        func_0x0001007d6c8c(1,0xd00000000000002f,0x800000010ef24e40,lVar2,lVar6,&PTR_DAT_110381af8);
        lVar6 = lStack_a8;
        lStack_98 = lStack_a8;
        func_0x000100b60084(&lStack_98);
        func_0x000107c61170(lVar6);
        func_0x000107c615e8(lVar5);
      }
      else {
        lStack_98 = 0;
        uStack_90 = 0xe000000000000000;
        func_0x000107c602fc(0x25);
        func_0x000107c5fb78(0xd000000000000023,0x800000010ef24e70);
        func_0x000107c5fddc(param_1,&lStack_98,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        uVar12 = uStack_90;
        lVar6 = lStack_98;
        lVar1 = lVar2;
        func_0x000107c614f0(lVar2);
        func_0x0001007d6c8c(1,lVar6,uVar12,lVar2,lVar1,&PTR_DAT_110381af8);
        func_0x000107c6142c(uVar12);
        FUN_1010c83c8(puVar3);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(lStack_a8);
      }
    }
  }
  else {
    func_0x000107c61174();
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    func_0x0001007d6c8c(1,0xd000000000000036,0x800000010ef24ea0,lVar2,lVar1,&PTR_DAT_110381af8);
    lStack_98 = lVar6;
    func_0x000100b60084(&lStack_98);
    func_0x000107c61170(lVar6);
    uVar11 = uStack_a0;
  }
  uVar12 = *(undefined8 *)(puVar3 + 0x10);
  puVar9 = &UNK_110381978;
  func_0x000107c613fc(&UNK_110381978,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,lVar2);
  puVar4 = &UNK_110381c48;
  func_0x000107c613fc(&UNK_110381c48,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar9;
  *(undefined8 *)(puVar4 + 0x18) = uVar11;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar11);
  func_0x00010075a04c(0,1,FUN_1010caeb4,puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar12);
  puVar3 = puVar4;
LAB_1010c7f50:
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 1010cae74; end: 1010caeb3;  */

void FUN_1010cae74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5b7a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc48190;
  func_0x000107c61520(&UNK_10dc48190,&UNK_1106c7aa0);
  puRam0000000112d5b7a8 = puVar1;
  return;
}



/* Entry: 1010caeb4; end: 1010caebf;  */

void FUN_1010caeb4(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *param_1;
  cVar2 = *(char *)(param_1 + 1);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,uVar6,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar5 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar4,0,0);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined1 *)(puVar4 + 2) = 3;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar5);
  }
  else {
    if (cVar2 == '\x01') {
      func_0x00010488ade0();
    }
    else {
      FUN_1010c878c(uVar7,uVar1);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1010caec0; end: 1010caf03;  */

void FUN_1010caec0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d5b7b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eea4(0xff);
  puVar2 = PTR___s10Foundation4DateVs23CustomStringConvertibleAAMc_110350bf0;
  func_0x000107c61520(PTR___s10Foundation4DateVs23CustomStringConvertibleAAMc_110350bf0,uVar1);
  puRam0000000112d5b7b8 = puVar2;
  return;
}



/* Entry: 1010caf04; end: 1010caf0f;  */

void FUN_1010caf04(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0,*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,uVar1,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar4 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar3,0,0);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 3;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar4);
  }
  else if (param_1 == 0) {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x3d);
    func_0x000107c5fb78(0xd00000000000003b,0x800000010ef24f60);
    if (param_2 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar5 = param_2;
      }
      func_0x000107c60480();
    }
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_80 = uVar5;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    uVar5 = uStack_70;
    uVar1 = uStack_78;
    lVar6 = lVar2;
    func_0x000107c614f0(lVar2);
    func_0x0001007d6c8c(1,uVar1,uVar5,lVar2,lVar6,&PTR_DAT_110381af8);
    func_0x000107c6142c(uVar5);
    uStack_78 = uVar7;
    uStack_70 = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c61174(uVar7);
    func_0x000100b60084(&uStack_78);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar2);
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c614b0(param_1);
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0xd000000000000022;
    uStack_70 = 0x800000010ef24fa0;
    func_0x000107c614cc(param_1,auStack_88,auStack_a0);
    uVar7 = uStack_90;
    func_0x000107c60640(uStack_98,uStack_90);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    uVar5 = uStack_70;
    uVar7 = uStack_78;
    lVar6 = lVar2;
    func_0x000107c614f0(lVar2);
    puVar3 = (undefined8 *)0x3;
    func_0x0001007d6c8c(3,uVar7,uVar5,lVar2,lVar6,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar4 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar3,0,0);
    *puVar3 = uVar7;
    puVar3[1] = uVar5;
    *(undefined1 *)(puVar3 + 2) = 0;
    func_0x00010488ade0();
    func_0x000107c61170(lVar2);
    func_0x000107c614ac(puVar4);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 1010caf10; end: 1010caf43;  */

void FUN_1010caf10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010caf44; end: 1010caf57;  */

void FUN_1010caf44(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puVar6 = (undefined8 *)0x3;
    func_0x0001007d6c6c(3,0xd000000000000014,0x800000010ef24ce0,uVar1,&PTR_DAT_110381af8);
    FUN_1010cae74();
    puVar3 = &UNK_1106c7aa0;
    func_0x000107c613f8(&UNK_1106c7aa0,puVar6,0,0);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 2) = 3;
    func_0x00010488ade0();
LAB_1010c8afc:
    func_0x000107c614ac(puVar3);
  }
  else {
    if (param_1 == 0) {
      if (lVar5 == 0) {
        lVar5 = lVar2;
        func_0x000107c614f0();
        puVar6 = (undefined8 *)0x3;
        func_0x0001007d6c8c(3,0xd000000000000044,0x800000010ef25020,lVar2,lVar5,&PTR_DAT_110381af8);
        FUN_1010cae74();
        puVar3 = &UNK_1106c7aa0;
        func_0x000107c613f8(&UNK_1106c7aa0,puVar6,0,0);
        puVar6[1] = 0;
        *puVar6 = 4;
        *(undefined1 *)(puVar6 + 2) = 3;
        func_0x00010488ade0();
        func_0x000107c61170(lVar2);
        goto LAB_1010c8afc;
      }
      func_0x000107c61174();
      lVar4 = lVar2;
      func_0x000107c614f0(lVar2);
      func_0x0001007d6c8c(3,0xd000000000000037,0x800000010ef25070,lVar2,lVar4,&PTR_DAT_110381af8);
      lStack_60 = lVar5;
      func_0x000100b60084(&lStack_60);
      func_0x000107c61170(lVar5);
    }
    else {
      func_0x000107c61174();
      lVar5 = lVar2;
      func_0x000107c614f0(lVar2);
      func_0x0001007d6c8c(1,0xd000000000000023,0x800000010ef250b0,lVar2,lVar5,&PTR_DAT_110381af8);
      lStack_60 = param_1;
      func_0x000100b60084(&lStack_60);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1010caf58; end: 1010cafa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010caf58(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(lVar2 + _DAT_112d5b758);
  *(undefined8 *)(lVar2 + _DAT_112d5b758) = 0;
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(lVar2 + _DAT_112d5b760);
  *(undefined8 *)(lVar2 + _DAT_112d5b760) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1010cafa4; end: 1010cafab;  */

undefined8 * FUN_1010cafa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1010cafac; end: 1010cafd3;  */

void FUN_1010cafac(void)

{
  FUN_1010c9580();
  return;
}



/* Entry: 1010cafd4; end: 1010cafff;  */

void FUN_1010cafd4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1010cb000; end: 1010cb03b;  */

void FUN_1010cb000(void)

{
  FUN_1010cad6c();
  return;
}



/* Entry: 1010cb03c; end: 1010cb217;  */

void FUN_1010cb03c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000104366fc4(0xd00000000000001a,0x800000010ef251d0,uVar3,&PTR_DAT_110381d30);
  }
  else {
    if (*(char *)(unaff_x20 + 2) == '\x01') {
      func_0x0001007d6c6c(3,0xd000000000000030,0x800000010ef25210,uVar3,&PTR_DAT_110381d30);
      uVar3 = *unaff_x20;
      puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x000107c61168();
      func_0x000107c4a02c();
      if (((ulong)puVar1 & 1) == 0) {
        func_0x000104366fc4(0xd00000000000001a,0x800000010ef25180,uVar3,&PTR_DAT_110381d30);
      }
      else {
        lVar2 = unaff_x20[3];
        if (lVar2 != 0) {
          if ((*(byte *)(unaff_x20 + 2) & 1) == 0) {
            func_0x000107c615f0();
            func_0x0001007d6c6c(3,0xd000000000000022,0x800000010ef251a0,uVar3,&PTR_DAT_110381d30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
            return;
          }
          func_0x000107c41864();
          *(undefined1 *)(unaff_x20 + 2) = 0;
        }
      }
      return;
    }
    if (unaff_x20[3] != 0) {
      *(undefined1 *)(unaff_x20 + 2) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(unaff_x20[3],PTR_s_attachUI__1125a0c08,param_1);
      return;
    }
    func_0x0001007d6c6c(3,0xd00000000000001b,0x800000010ef251f0,uVar3,&PTR_DAT_110381d30);
  }
  return;
}



/* Entry: 1010cb218; end: 1010cb25b;  */

void FUN_1010cb218(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010cb25c; end: 1010cb29b;  */

void FUN_1010cb25c(void)

{
  FUN_1010cb03c();
  return;
}



/* Entry: 1010cb29c; end: 1010cb53f;  */

long FUN_1010cb29c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar1 = lVar3;
  if (lVar3 != 1) goto LAB_1010cb32c;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 == 0) {
LAB_1010cb310:
    lVar1 = 0;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_1010cb310;
    lVar2 = lVar1;
    func_0x000107c5d180();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c3ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  *(long *)(unaff_x20 + 0x20) = lVar1;
  func_0x000107c615f0(lVar1);
  FUN_100e3da34(uVar4);
LAB_1010cb32c:
  func_0x000100e3da44(lVar3);
  return lVar1;
}



/* Entry: 1010cb540; end: 1010cb58b;  */

void FUN_1010cb540(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100e3da34(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010cb58c; end: 1010cb5cb;  */

void FUN_1010cb58c(void)

{
  func_0x0001010cb348();
  return;
}



/* Entry: 1010cb5cc; end: 1010cb5e3;  */

void FUN_1010cb5cc(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001007d6c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1010cb5e4; end: 1010cb737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cb5e4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 in_x4;
  long in_x5;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  long lStack_88;
  undefined8 uStack_80;
  
  lVar8 = *(long *)(in_stack_00000010 + _DAT_113077328);
  if (-1 < lVar8) {
    uVar3 = *(undefined8 *)(in_stack_00000010 + _DAT_113077318);
    uVar5 = ((undefined8 *)(in_stack_00000010 + _DAT_113077318))[1];
    uVar4 = *(undefined8 *)(in_stack_00000010 + _DAT_113077320);
    uVar6 = ((undefined8 *)(in_stack_00000010 + _DAT_113077320))[1];
    lVar9 = ((undefined8 *)(in_stack_00000010 + _DAT_113077340))[1];
    if (lVar9 == 0) {
      lStack_88 = -0x2000000000000000;
      uStack_80 = 0;
    }
    else {
      uStack_80 = *(undefined8 *)(in_stack_00000010 + _DAT_113077340);
      lStack_88 = lVar9;
    }
    lVar1 = -0x2000000000000000;
    if (in_x5 != 0) {
      lVar1 = in_x5;
    }
    uVar2 = 0;
    if (in_x5 != 0) {
      uVar2 = in_x4;
    }
    uVar10 = in_stack_00000008[1];
    uVar11 = in_stack_00000008[3];
    uVar12 = in_stack_00000008[6];
    uVar13 = in_stack_00000008[8];
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(in_x5);
    func_0x000107c61434(lVar9);
    func_0x000107c6142c(uVar13);
    func_0x000107c6142c(uVar12);
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar10);
    *in_stack_00000008 = uVar4;
    in_stack_00000008[1] = uVar6;
    in_stack_00000008[2] = uVar2;
    in_stack_00000008[3] = lVar1;
    in_stack_00000008[4] = lVar8;
    in_stack_00000008[5] = uStack_80;
    in_stack_00000008[7] = uVar3;
    in_stack_00000008[8] = uVar5;
    in_stack_00000008[6] = lStack_88;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1010cb738);
  (*pcVar7)();
}



/* Entry: 1010cb738; end: 1010cb73f;  */

void FUN_1010cb738(void)

{
  return;
}



/* Entry: 1010cb740; end: 1010cb80b;  */

void FUN_1010cb740(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    func_0x000104366fc4(0xd000000000000025,0x800000010ef25250);
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112d5ba38,&UNK_10d9227b0);
    func_0x000107c61174(param_1);
    lVar1 = param_1;
    func_0x0001000b637c();
    func_0x0001000bfde0(FUN_1010cb80c,0,PTR___sSbN_11034dd40);
    func_0x000107c61170(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1010cb80c; end: 1010cb943;  */

void FUN_1010cb80c(undefined1 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *param_2;
  *param_1 = 0;
  puVar3 = &UNK_110381db8;
  func_0x000107c613fc(&UNK_110381db8,0x18,7);
  *(undefined1 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_110381de0;
  func_0x000107c613fc(&UNK_110381de0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1010cb998;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_1010cb9a8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_110381df8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c71c(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x69,0x1b,0x2b,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010cb944);
  (*pcVar2)();
}



/* Entry: 1010cb944; end: 1010cb953;  */

void FUN_1010cb944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010cb954; end: 1010cb973;  */

void FUN_1010cb954(void)

{
  func_0x000107c61168(&PTR_PTR_112d5b9d8);
  return;
}



/* Entry: 1010cb974; end: 1010cb9a7;  */

void FUN_1010cb974(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001010cb984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1010cb9a8; end: 1010cb9c7;  */

void FUN_1010cb9a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1010cb9c8; end: 1010cb9e3;  */

void FUN_1010cb9c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1010cb9e4; end: 1010cb9ef; -[SCLensProcessingVenuesProvidingServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cb9e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba40;
  func_0x000107c61428(param_1 + _DAT_112d5ba40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cb9f0; end: 1010cb9fb; -[SCLensProcessingVenuesProvidingServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cb9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba40;
  func_0x000107c61428(param_1 + _DAT_112d5ba40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cb9fc; end: 1010cba07; -[SCLensProcessingVenuesProvidingServiceProvider activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cb9fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba48;
  func_0x000107c61428(param_1 + _DAT_112d5ba48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cba08; end: 1010cba13; -[SCLensProcessingVenuesProvidingServiceProvider setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba48;
  func_0x000107c61428(param_1 + _DAT_112d5ba48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cba14; end: 1010cba1f; -[SCLensProcessingVenuesProvidingServiceProvider viewfinderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba50;
  func_0x000107c61428(param_1 + _DAT_112d5ba50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cba20; end: 1010cba2b; -[SCLensProcessingVenuesProvidingServiceProvider setViewfinderScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba50;
  func_0x000107c61428(param_1 + _DAT_112d5ba50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cba2c; end: 1010cba37; -[SCLensProcessingVenuesProvidingServiceProvider checkInServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba58;
  func_0x000107c61428(param_1 + _DAT_112d5ba58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cba38; end: 1010cba43; -[SCLensProcessingVenuesProvidingServiceProvider setCheckInServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba58;
  func_0x000107c61428(param_1 + _DAT_112d5ba58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cba44; end: 1010cba4f; -[SCLensProcessingVenuesProvidingServiceProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba60;
  func_0x000107c61428(param_1 + _DAT_112d5ba60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cba50; end: 1010cba5b; -[SCLensProcessingVenuesProvidingServiceProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba60;
  func_0x000107c61428(param_1 + _DAT_112d5ba60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cba5c; end: 1010cba67; -[SCLensProcessingVenuesProvidingServiceProvider composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba68;
  func_0x000107c61428(param_1 + _DAT_112d5ba68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cba68; end: 1010cba73; -[SCLensProcessingVenuesProvidingServiceProvider setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba68;
  func_0x000107c61428(param_1 + _DAT_112d5ba68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cba74; end: 1010cba7f; -[SCLensProcessingVenuesProvidingServiceProvider locationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba70;
  func_0x000107c61428(param_1 + _DAT_112d5ba70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cba80; end: 1010cba8b; -[SCLensProcessingVenuesProvidingServiceProvider setLocationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba70;
  func_0x000107c61428(param_1 + _DAT_112d5ba70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cba8c; end: 1010cba97; -[SCLensProcessingVenuesProvidingServiceProvider previewLazyServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba78;
  func_0x000107c61428(param_1 + _DAT_112d5ba78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cba98; end: 1010cbaa3; -[SCLensProcessingVenuesProvidingServiceProvider setPreviewLazyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cba98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba78;
  func_0x000107c61428(param_1 + _DAT_112d5ba78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cbaa4; end: 1010cbaaf; -[SCLensProcessingVenuesProvidingServiceProvider userUnifiedGRPCServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbaa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba80;
  func_0x000107c61428(param_1 + _DAT_112d5ba80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cbab0; end: 1010cbabb; -[SCLensProcessingVenuesProvidingServiceProvider setUserUnifiedGRPCServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba80;
  func_0x000107c61428(param_1 + _DAT_112d5ba80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cbabc; end: 1010cbac7; -[SCLensProcessingVenuesProvidingServiceProvider systemLocationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbabc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba88;
  func_0x000107c61428(param_1 + _DAT_112d5ba88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cbac8; end: 1010cbad3; -[SCLensProcessingVenuesProvidingServiceProvider setSystemLocationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba88;
  func_0x000107c61428(param_1 + _DAT_112d5ba88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cbad4; end: 1010cbadf; -[SCLensProcessingVenuesProvidingServiceProvider valdiBlizzardLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbad4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba90;
  func_0x000107c61428(param_1 + _DAT_112d5ba90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cbae0; end: 1010cbaeb; -[SCLensProcessingVenuesProvidingServiceProvider setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba90;
  func_0x000107c61428(param_1 + _DAT_112d5ba90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cbaec; end: 1010cbaf7; -[SCLensProcessingVenuesProvidingServiceProvider appStartExperimentReaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbaec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5ba98;
  func_0x000107c61428(param_1 + _DAT_112d5ba98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cbaf8; end: 1010cbb03; -[SCLensProcessingVenuesProvidingServiceProvider setAppStartExperimentReaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbaf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5ba98;
  func_0x000107c61428(param_1 + _DAT_112d5ba98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cbb04; end: 1010cbb0f; -[SCLensProcessingVenuesProvidingServiceProvider ucoSnapEditorAnnouncerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbb04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5baa0;
  func_0x000107c61428(param_1 + _DAT_112d5baa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cbb10; end: 1010cbb1b; -[SCLensProcessingVenuesProvidingServiceProvider setUcoSnapEditorAnnouncerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5baa0;
  func_0x000107c61428(param_1 + _DAT_112d5baa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cbb1c; end: 1010cbb27; -[SCLensProcessingVenuesProvidingServiceProvider snapEditorLazyServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbb1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5baa8;
  func_0x000107c61428(param_1 + _DAT_112d5baa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cbb28; end: 1010cbb6b;  */

void FUN_1010cbb28(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cbb6c; end: 1010cbb77; -[SCLensProcessingVenuesProvidingServiceProvider setSnapEditorLazyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbb6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5baa8;
  func_0x000107c61428(param_1 + _DAT_112d5baa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cbb78; end: 1010cbbcb;  */

void FUN_1010cbb78(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010cbbcc; end: 1010cbc13; -[SCLensProcessingVenuesProvidingServiceProvider venueEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbbcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5bab0;
  func_0x000107c61428(param_1 + _DAT_112d5bab0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1010cbc14; end: 1010cbc77; -[SCLensProcessingVenuesProvidingServiceProvider setVenueEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5bab0;
  func_0x000107c61428(param_1 + _DAT_112d5bab0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1010cbc78; end: 1010cc44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010cbc78(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  undefined1 auStack_a0 [48];
  
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d1c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c5df74();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c3f980();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar2 = lVar4;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c3fa0c();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            lVar2 = lVar5;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c40014();
            func_0x000107c61180();
            if (lVar7 == 0) {
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              lVar2 = lVar6;
            }
            else {
              lVar8 = unaff_x20;
              func_0x000107c4b8f0();
              func_0x000107c61180();
              if (lVar8 == 0) {
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                lVar2 = lVar7;
              }
              else {
                lVar9 = unaff_x20;
                func_0x000107c4f148();
                func_0x000107c61180();
                if (lVar9 == 0) {
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar7);
                  lVar2 = lVar8;
                }
                else {
                  lVar10 = unaff_x20;
                  func_0x000107c5dac8();
                  func_0x000107c61180();
                  if (lVar10 == 0) {
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61170(lVar5);
                    func_0x000107c61170(lVar6);
                    func_0x000107c61170(lVar7);
                    func_0x000107c61170(lVar8);
                    lVar2 = lVar9;
                  }
                  else {
                    lVar11 = unaff_x20;
                    func_0x000107c5c618();
                    func_0x000107c61180();
                    if (lVar11 == 0) {
                      func_0x000107c61170(lVar2);
                      func_0x000107c61170(lVar3);
                      func_0x000107c61170(lVar4);
                      func_0x000107c61170(lVar5);
                      func_0x000107c61170(lVar6);
                      func_0x000107c61170(lVar7);
                      func_0x000107c61170(lVar8);
                      func_0x000107c61170(lVar9);
                      lVar2 = lVar10;
                    }
                    else {
                      lVar12 = unaff_x20;
                      func_0x000107c5dcb0();
                      func_0x000107c61180();
                      if (lVar12 == 0) {
                        func_0x000107c61170(lVar2);
                        func_0x000107c61170(lVar3);
                        func_0x000107c61170(lVar4);
                        func_0x000107c61170(lVar5);
                        func_0x000107c61170(lVar6);
                        func_0x000107c61170(lVar7);
                        func_0x000107c61170(lVar8);
                        func_0x000107c61170(lVar9);
                        func_0x000107c61170(lVar10);
                        lVar2 = lVar11;
                      }
                      else {
                        lVar13 = unaff_x20;
                        func_0x000107c5dbac();
                        func_0x000107c61180();
                        if (lVar13 == 0) {
                          func_0x000107c61170(lVar2);
                          func_0x000107c61170(lVar3);
                          func_0x000107c61170(lVar4);
                          func_0x000107c61170(lVar5);
                          func_0x000107c61170(lVar6);
                          func_0x000107c61170(lVar7);
                          func_0x000107c61170(lVar8);
                          func_0x000107c61170(lVar9);
                          func_0x000107c61170(lVar10);
                          func_0x000107c61170(lVar11);
                          lVar2 = lVar12;
                        }
                        else {
                          lVar14 = unaff_x20;
                          func_0x000107c3de4c();
                          func_0x000107c61180();
                          if (lVar14 == 0) {
                            func_0x000107c61170(lVar2);
                            func_0x000107c61170(lVar3);
                            func_0x000107c61170(lVar4);
                            func_0x000107c61170(lVar5);
                            func_0x000107c61170(lVar6);
                            func_0x000107c61170(lVar7);
                            func_0x000107c61170(lVar8);
                            func_0x000107c61170(lVar9);
                            func_0x000107c61170(lVar10);
                            func_0x000107c61170(lVar11);
                            func_0x000107c61170(lVar12);
                            lVar2 = lVar13;
                          }
                          else {
                            lVar15 = unaff_x20;
                            func_0x000107c5d16c();
                            func_0x000107c61180();
                            if (lVar15 == 0) {
                              func_0x000107c61170(lVar2);
                              func_0x000107c61170(lVar3);
                              func_0x000107c61170(lVar4);
                              func_0x000107c61170(lVar5);
                              func_0x000107c61170(lVar6);
                              func_0x000107c61170(lVar7);
                              func_0x000107c61170(lVar8);
                              func_0x000107c61170(lVar9);
                              func_0x000107c61170(lVar10);
                              func_0x000107c61170(lVar11);
                              func_0x000107c61170(lVar12);
                              func_0x000107c61170(lVar13);
                              lVar2 = lVar14;
                            }
                            else {
                              lVar16 = unaff_x20;
                              func_0x000107c5b24c();
                              func_0x000107c61180();
                              if (lVar16 != 0) {
                                lVar17 = 0;
                                FUN_1010c623c();
                                func_0x000107c613fc();
                                *(long *)(lVar17 + 0x10) = lVar5;
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174();
                                func_0x000107c61174(lVar2);
                                lVar18 = lVar6;
                                func_0x000107c3fa04();
                                func_0x000107c61180();
                                if (lVar18 != 0) {
                                  *(long *)(lVar17 + 0x18) = lVar18;
                                  *(long *)(lVar17 + 0x20) = lVar7;
                                  *(long *)(lVar17 + 0x28) = lVar8;
                                  *(long *)(lVar17 + 0x30) = lVar9;
                                  func_0x000107c61174();
                                  func_0x000107c61174();
                                  func_0x000107c61174();
                                  lVar18 = lVar10;
                                  func_0x000107c44580();
                                  func_0x000107c61180();
                                  func_0x000107c61170(lVar2);
                                  func_0x000107c61170(lVar3);
                                  func_0x000107c61170(lVar4);
                                  func_0x000107c61170(lVar6);
                                  func_0x000107c61170(lVar7);
                                  func_0x000107c61170(lVar8);
                                  func_0x000107c61170(lVar9);
                                  func_0x000107c61170(lVar10);
                                  *(long *)(lVar17 + 0x38) = lVar18;
                                  *(long *)(lVar17 + 0x40) = lVar11;
                                  *(long *)(lVar17 + 0x48) = lVar12;
                                  *(long *)(lVar17 + 0x50) = lVar13;
                                  *(long *)(lVar17 + 0x58) = lVar15;
                                  uVar20 = *(undefined8 *)(lVar14 + _DAT_113092298);
                                  func_0x000107c615f0(uVar20);
                                  func_0x000107c61170(lVar14);
                                  *(undefined8 *)(lVar17 + 0x60) = uVar20;
                                  *(long *)(lVar17 + 0x68) = lVar16;
                                  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112d5bab8);
                                  *(long *)(unaff_x20 + _DAT_112d5bab8) = lVar17;
                                  func_0x000107c6157c(lVar17);
                                  func_0x000107c61574(uVar20);
                                  uVar19 = *(undefined8 *)(lVar17 + 0x60);
                                  uVar20 = 0xd000000000000017;
                                  func_0x000107c5fadc(0xd000000000000017,0x800000010ef248b0);
                                  fVar21 = -1.0;
                                  func_0x000107c436e4(0xbf800000,uVar19);
                                  func_0x000107c61170(uVar20);
                                  FUN_1010c5a6c(auStack_a0,(double)fVar21);
                                  func_0x000103a91858(0);
                                  func_0x000107c610f8();
                                  func_0x000103a91778(auStack_a0);
                                  func_0x000107c61170(lVar2);
                                  func_0x000107c61170(lVar3);
                                  func_0x000107c61170(lVar4);
                                  func_0x000107c61170(lVar5);
                                  func_0x000107c61170(lVar6);
                                  func_0x000107c61170(lVar7);
                                  func_0x000107c61170(lVar8);
                                  func_0x000107c61170(lVar9);
                                  func_0x000107c61170(lVar10);
                                  func_0x000107c61170(lVar11);
                                  func_0x000107c61170(lVar12);
                                  func_0x000107c61170(lVar13);
                                  func_0x000107c61170(lVar14);
                                  func_0x000107c61170(lVar15);
                                  func_0x000107c61170(lVar16);
                                  func_0x000107c61574(lVar17);
                                  return;
                                }
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cc44c);
                                (*pcVar1)();
                              }
                              func_0x000107c61170(lVar2);
                              func_0x000107c61170(lVar3);
                              func_0x000107c61170(lVar4);
                              func_0x000107c61170(lVar5);
                              func_0x000107c61170(lVar6);
                              func_0x000107c61170(lVar7);
                              func_0x000107c61170(lVar8);
                              func_0x000107c61170(lVar9);
                              func_0x000107c61170(lVar10);
                              func_0x000107c61170(lVar11);
                              func_0x000107c61170(lVar12);
                              func_0x000107c61170(lVar13);
                              func_0x000107c61170(lVar14);
                              lVar2 = lVar15;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1010cc44c; end: 1010cc4d7; -[SCLensProcessingVenuesProvidingServiceProvider provide] */

void FUN_1010cc44c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1010cbc78();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensVenuesProvidingImpl/SCLensProcessingVenuesProvidingServiceProvider.swift"
                      ,0x4c,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cc4d8);
  (*pcVar1)();
}



/* Entry: 1010cc4d8; end: 1010cc50b; -[SCLensProcessingVenuesProvidingServiceProvider __safeProvide] */

void FUN_1010cc4d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1010cbc78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1010cc50c; end: 1010cc54f; -[SCLensProcessingVenuesProvidingServiceProvider end] */

void FUN_1010cc50c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010cc550; end: 1010ccc77;  */

void FUN_1010cc550(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar3 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
    goto LAB_1010cc5e0;
  }
  if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) {
    uVar3 = 0;
    func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      if (((param_2 == 0x646e696677656976) && (param_3 == -0x109a8f909cac8d9b)) ||
         (func_0x000107c605b8(0x646e696677656976,0xef65706f63537265,param_2,param_3,0),
         (uVar3 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a5ac();
      }
      else {
        uVar3 = 0x536e496b63656863;
        if (((param_2 == 0x536e496b63656863) && (param_3 == -0x108c9a9c96898d9b)) ||
           (func_0x000107c605b8(0x536e496b63656863,0xef73656369767265,param_2,param_3,0),
           (uVar3 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c533e8();
        }
        else {
          uVar3 = 0;
          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
             (uVar3 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53414();
          }
          else {
            uVar3 = 0;
            if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ed9b0)) ||
               (uVar2 = uVar3,
               func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c536e0();
            }
            else if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10dad30)) ||
                    (func_0x000107c605b8(0xd000000000000010,0x800000010ef252d0,param_2,param_3,0),
                    (uVar3 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c56064();
            }
            else {
              uVar3 = 0xd000000000000013;
              if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10dfce0)) ||
                 (func_0x000107c605b8(0xd000000000000013,0x800000010ef20320,param_2,param_3,0),
                 (uVar3 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c577a8();
              }
              else {
                uVar3 = 0xd000000000000017;
                if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ed2b0)) ||
                   (func_0x000107c605b8(0xd000000000000017,0x800000010ef12d50,param_2,param_3,0),
                   (uVar3 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5a418();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10dad10)) {
                    uVar3 = 0;
                    func_0x000107c605b8(0xd000000000000016,0x800000010ef252f0,param_2,param_3,0);
                    if ((uVar3 & 1) == 0) {
                      uVar3 = 0;
                      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e4100)) ||
                         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1bf00,param_2,param_3,
                                              0), (uVar3 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c5a46c();
                      }
                      else {
                        uVar3 = 0;
                        if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10ecd10))
                           || (func_0x000107c605b8(0xd000000000000020,0x800000010ef132f0,param_2,
                                                   param_3,0), (uVar3 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c527b4();
                        }
                        else {
                          uVar3 = 0;
                          if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10dacf0))
                             || (func_0x000107c605b8(0xd00000000000001e,0x800000010ef25310,param_2,
                                                     param_3,0), (uVar3 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c5a134();
                          }
                          else {
                            if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10db850)
                               ) {
                              uVar3 = 0;
                              func_0x000107c605b8(0xd000000000000016,0x800000010ef247b0,param_2,
                                                  param_3,0);
                              if ((uVar3 & 1) == 0) {
                                if ((param_2 != -0x2fffffffffffffe9) ||
                                   (param_3 != -0x7ffffffef10dacd0)) {
                                  uVar3 = 0xd000000000000017;
                                  func_0x000107c605b8(0xd000000000000017,0x800000010ef25330,param_2,
                                                      param_3,0);
                                  if ((uVar3 & 1) == 0) {
                                    func_0x000107c602fc(0x15);
                                    func_0x000107c6142c(0xe000000000000000);
                                    func_0x000107c5fb78(param_2,param_3);
                                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                        0x800000010ef0fc20,
                                                                                                                
                                                  "LensVenuesProvidingImpl/SCLensProcessingVenuesProvidingServiceProvider.swift"
                                                  ,0x4c,2,0x6f,0);
                    /* WARNING: Does not return */
                                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ccc78);
                                    (*pcVar1)();
                                  }
                                }
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c5a4c4();
                                goto LAB_1010cc5e0;
                              }
                            }
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c593b0();
                          }
                        }
                      }
                      goto LAB_1010cc5e0;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c59b5c();
                }
              }
            }
          }
        }
      }
      goto LAB_1010cc5e0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52228();
LAB_1010cc5e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010ccc78; end: 1010ccd23; -[SCLensProcessingVenuesProvidingServiceProvider setValue:forIvarName:] */

void FUN_1010ccc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1010cc550(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010ccd24; end: 1010cce93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ccd24(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5ba98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5baa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5baa8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5bab0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5bab8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010cce94; end: 1010cceb3; -[SCLensProcessingVenuesProvidingServiceProvider init] */

void FUN_1010cce94(void)

{
  FUN_1010ccd24();
  return;
}



/* Entry: 1010cceb4; end: 1010ccee7;  */

void FUN_1010cceb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010ccee8; end: 1010ccfff; -[SCLensProcessingVenuesProvidingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ccee8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5ba40);
  func_0x000107c61610(param_1 + _DAT_112d5ba48);
  func_0x000107c61610(param_1 + _DAT_112d5ba50);
  func_0x000107c61610(param_1 + _DAT_112d5ba58);
  func_0x000107c61610(param_1 + _DAT_112d5ba60);
  func_0x000107c61610(param_1 + _DAT_112d5ba68);
  func_0x000107c61610(param_1 + _DAT_112d5ba70);
  func_0x000107c61610(param_1 + _DAT_112d5ba78);
  func_0x000107c61610(param_1 + _DAT_112d5ba80);
  func_0x000107c61610(param_1 + _DAT_112d5ba88);
  func_0x000107c61610(param_1 + _DAT_112d5ba90);
  func_0x000107c61610(param_1 + _DAT_112d5ba98);
  func_0x000107c61610(param_1 + _DAT_112d5baa0);
  func_0x000107c61610(param_1 + _DAT_112d5baa8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5bab0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5bab8));
  return;
}



/* Entry: 1010cd000; end: 1010cd01f;  */

void FUN_1010cd000(void)

{
  func_0x000107c61168(&PTR_PTR_112d5bb00);
  return;
}



/* Entry: 1010cd020; end: 1010cd4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1010cd020(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar10 = 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  plVar2 = *(long **)(param_3 + _DAT_113074ea0);
  func_0x000107c40534();
  func_0x000107c61180();
  plVar3 = plVar2;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000100b9a7ec();
  if (plVar3 == (long *)*plVar2 && lVar10 == plVar2[1]) {
    func_0x000107c6142c(lVar10);
  }
  else {
    func_0x000107c605b8(plVar3,lVar10,(long *)*plVar2,plVar2[1],0);
    func_0x000107c6142c(lVar10);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      goto LAB_1010cd460;
    }
  }
  lVar4 = 0;
  func_0x0001010d8a44();
  func_0x000107c613fc();
  func_0x000107c61614(lVar4 + 0x10,0);
  func_0x000107c61614(lVar4 + 0x18,0);
  func_0x000107c61604(lVar4 + 0x10,param_5);
  func_0x000107c61604(lVar4 + 0x18,param_7);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  func_0x0001000285a8(0x112d5bbd0,&UNK_10d9227f0);
  func_0x000107c613fc();
  func_0x000107c61580(lVar4,2);
  pcVar1 = FUN_1010cd508;
  func_0x0001000bdd8c(FUN_1010cd508,lVar4);
  FUN_1010cd510(param_4 + _DAT_112fde4e0,auStack_88);
  puVar5 = &UNK_110381f10;
  func_0x000107c613fc(&UNK_110381f10,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_6;
  func_0x0001000285a8(0x112d5bbd8,&UNK_10d9227f8);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar6 = FUN_1010cd594;
  func_0x0001000bdd8c(FUN_1010cd594,puVar5);
  uVar11 = *(undefined8 *)(param_8 + _DAT_11302aaf0);
  func_0x000107c615f0(uVar11);
  lVar10 = param_9;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010cd4a4);
    (*pcVar1)();
  }
  lVar7 = 0;
  func_0x0001010d83f8();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112d5bf18) = 0;
  *(undefined1 *)(lVar8 + _DAT_112d5bf20) = 2;
  FUN_1010cd510(auStack_88,lVar8 + _DAT_112d5bee8);
  *(code **)(lVar8 + _DAT_112d5bef8) = pcVar1;
  *(code **)(lVar8 + _DAT_112d5bf00) = pcVar6;
  *(undefined8 *)(lVar8 + _DAT_112d5bf08) = uVar11;
  *(long *)(lVar8 + _DAT_112d5bf10) = lVar10;
  puVar5 = PTR_s_init_1125d9248;
  lStack_98 = lVar8;
  lStack_90 = lVar7;
  func_0x000107c6157c(pcVar1);
  plVar3 = &lStack_98;
  func_0x000107c61154(plVar3,puVar5);
  func_0x0001000834e4(auStack_88);
  lVar10 = lRam0000000112d5be20;
  func_0x000107c61174(plVar3);
  if (lVar10 != -1) {
    func_0x000107c61568(0x112d5be20,0x1010d0bf8);
  }
  uVar9 = uRam00000001137ff1d0;
  uVar11 = uRam00000001137ff1c8;
  puVar5 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61434(uVar9);
  func_0x000107c5fadc(uVar11,uVar9);
  func_0x000107c6142c(uVar9);
  uVar9 = 0x7365756e6576;
  func_0x000107c5fadc(0x7365756e6576,0xe600000000000000);
  func_0x000107c46c6c(puVar5);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  uVar11 = param_1;
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c61174(puVar5);
  func_0x000107c4fba8(uVar11);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(pcVar1);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
LAB_1010cd460:
  func_0x000107c61170(param_9);
  return unaff_x20;
}



/* Entry: 1010cd4a4; end: 1010cd507;  */

void FUN_1010cd4a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001010ce5e0();
  func_0x000107c613fc();
  func_0x000107c6157c();
  FUN_1010cd684();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110382078;
  *param_1 = param_2;
  return;
}



/* Entry: 1010cd508; end: 1010cd50f;  */

void FUN_1010cd508(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = 0;
  func_0x0001010ce5e0();
  func_0x000107c613fc();
  func_0x000107c6157c();
  FUN_1010cd684();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110382078;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1010cd510; end: 1010cd593;  */

long FUN_1010cd510(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1010cd594; end: 1010cd59b;  */

void FUN_1010cd594(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x0001010d0bd8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 1010cd59c; end: 1010cd5bf;  */

void FUN_1010cd59c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010cd5c0; end: 1010cd5cb;  */

void FUN_1010cd5c0(void)

{
  return;
}



/* Entry: 1010cd5cc; end: 1010cd5eb;  */

void FUN_1010cd5cc(void)

{
  func_0x000107c61168(&PTR_PTR_112d5bc20);
  return;
}


