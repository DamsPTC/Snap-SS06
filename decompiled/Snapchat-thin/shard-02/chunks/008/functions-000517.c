/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10218573c; end: 1021857c3;  */

void FUN_10218573c(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1021857c4; end: 1021857fb;  */

void FUN_1021857c4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e5e170;
  func_0x0001000285a8(0x112e5e170,&UNK_10da65368);
  func_0x000107c61538();
  uRam0000000113804680 = uVar1;
  return;
}



/* Entry: 1021857fc; end: 10218586f;  */

void FUN_1021857fc(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam00000001134b5530 != -1) {
    func_0x000107c61568(0x1134b5530,FUN_1021857c4);
  }
  func_0x000107c61428(0x113804680,auStack_38,0,0);
  *param_1 = uRam0000000113804680;
  func_0x000107c61434();
  return;
}



/* Entry: 102185870; end: 102185b4f;  */

undefined1 FUN_102185870(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  
  uStack_71 = 3;
  puVar4 = &UNK_1104d6e98;
  func_0x000107c613fc(&UNK_1104d6e98,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_71;
  puVar5 = &UNK_1104d6ec0;
  func_0x000107c613fc(&UNK_1104d6ec0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102185b50;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_102185b5c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104d6ed8;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1104d6f10;
  func_0x000107c613fc(&UNK_1104d6f10,0x18,7);
  *(undefined1 **)(puVar7 + 0x10) = &uStack_71;
  puVar8 = &UNK_1104d6f38;
  func_0x000107c613fc(&UNK_1104d6f38,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x102185b98;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_88 = (code *)0x102185dc4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104d6f50;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1104d6f88;
  func_0x000107c613fc(&UNK_1104d6f88,0x18,7);
  *(undefined1 **)(puVar10 + 0x10) = &uStack_71;
  puVar11 = &UNK_1104d6fb0;
  func_0x000107c613fc(&UNK_1104d6fb0,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x102185ba8;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_88 = (code *)0x102185dc8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104d6fc8;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6c0(unaff_x20);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_71;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x49,0x28,0x15,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102185b48);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x49,0x2a,0x14,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar11;
    func_0x000107c61544(puVar11,"",0x49,0x2c,0x15,1);
    func_0x000107c61574(puVar11);
    if (((ulong)puVar4 & 1) == 0) {
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102185b50);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102185b4c);
  (*pcVar3)();
}



/* Entry: 102185b50; end: 102185b5b;  */

void FUN_102185b50(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 102185b5c; end: 102185b7b;  */

void FUN_102185b5c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102185b7c; end: 102185bbb;  */

void FUN_102185b7c(long param_1,long param_2)

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



/* Entry: 102185bbc; end: 102185bfb;  */

void FUN_102185bbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5e128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da652d0;
  func_0x000107c61520(&UNK_10da652d0,&UNK_1104d7070);
  puRam0000000112e5e128 = puVar1;
  return;
}



/* Entry: 102185bfc; end: 102185bff;  */

void FUN_102185bfc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e5e130 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e5e138;
  func_0x00010002969c(0x112e5e138,&UNK_10da652f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e5e130 = puVar2;
  return;
}



/* Entry: 102185c00; end: 102185c4f;  */

void FUN_102185c00(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e5e130 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e5e138;
  func_0x00010002969c(0x112e5e138,&UNK_10da652f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e5e130 = puVar2;
  return;
}



/* Entry: 102185c50; end: 102185dcf;  */

int FUN_102185c50(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102185ccc;
        goto LAB_102185cb0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102185cb0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102185ccc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102185dd0; end: 102185e2b;  */

long FUN_102185dd0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102185e2c; end: 102185f3b;  */

undefined8 * FUN_102185e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar1 = param_2[5];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102185f3c; end: 102185faf;  */

undefined8 * FUN_102185f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102185fb0; end: 102186057;  */

int FUN_102185fb0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102186058; end: 10218644f;  */

/* WARNING: Possible PIC construction at 0x00010218637c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102186380) */
/* WARNING: Removing unreachable block (ram,0x0001021863dc) */
/* WARNING: Removing unreachable block (ram,0x000102186384) */
/* WARNING: Removing unreachable block (ram,0x000102186400) */
/* WARNING: Removing unreachable block (ram,0x0001021863cc) */
/* WARNING: Removing unreachable block (ram,0x000102186410) */
/* WARNING: Removing unreachable block (ram,0x00010218644c) */
/* WARNING: Removing unreachable block (ram,0x000102186428) */

void FUN_102186058(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *unaff_x20;
  long lStack_180;
  long lStack_178;
  undefined *puStack_168;
  undefined8 auStack_160 [4];
  undefined1 auStack_140 [176];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar7 = auStack_140;
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  *(undefined8 *)(lVar3 + 0x20) = 0x65726e6567;
  *(undefined8 *)(lVar3 + 0x28) = 0xe500000000000000;
  uVar4 = *unaff_x20;
  FUN_1021869d0();
  puVar6 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  *(undefined1 **)(lVar3 + 0x38) = puVar7;
  *(undefined **)(lVar3 + 0x48) = puVar6;
  *(undefined8 *)(lVar3 + 0x50) = 0xd000000000000010;
  puVar2 = PTR___sSiN_11034deb0;
  uVar4 = unaff_x20[3];
  *(undefined8 *)(lVar3 + 0x58) = 0x800000010f068430;
  *(undefined8 *)(lVar3 + 0x60) = uVar4;
  *(undefined **)(lVar3 + 0x78) = puVar2;
  *(undefined8 *)(lVar3 + 0x80) = 0xd000000000000013;
  *(undefined8 *)(lVar3 + 0x88) = 0x800000010f068450;
  uVar1 = *(undefined1 *)(unaff_x20 + 6);
  *(undefined **)(lVar3 + 0xa8) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar3 + 0x90) = uVar1;
  lVar5 = lVar3;
  func_0x000100214a84();
  func_0x000107c61588(lVar3);
  uVar4 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),3,uVar4);
  if (*(char *)(unaff_x20 + 2) != '\x01') {
    lStack_180 = unaff_x20[1];
    puStack_168 = PTR___ss5Int64VN_11034ee50;
    func_0x000100102924(&lStack_180,auStack_160);
    lVar3 = lVar5;
    func_0x000107c61558(lVar5);
    lStack_180 = lVar5;
    func_0x0001001029e8(auStack_160,0xd000000000000018,0x800000010f068470,lVar3);
    lVar5 = lStack_180;
  }
  lStack_78 = unaff_x20[5];
  lStack_80 = unaff_x20[4];
  if (lStack_78 != 0) {
    puStack_168 = puVar6;
    lStack_180 = lStack_80;
    lStack_178 = lStack_78;
    func_0x000100102924(&lStack_180,auStack_160);
    FUN_102186f10(&lStack_80,&lStack_180,0x112d35ff8,&UNK_10d900cd0);
    lVar3 = lVar5;
    func_0x000107c61558(lVar5);
    lStack_180 = lVar5;
    func_0x0001001029e8(auStack_160,0x5f676e6f735f6961,0xea00000000006469,lVar3);
    lVar5 = lStack_180;
  }
  lStack_88 = unaff_x20[8];
  lStack_90 = unaff_x20[7];
  if (lStack_88 != 0) {
    puStack_168 = puVar6;
    lStack_180 = lStack_90;
    lStack_178 = lStack_88;
    func_0x000100102924(&lStack_180,auStack_160);
    FUN_102186f10(&lStack_90,&lStack_180,0x112d35ff8,&UNK_10d900cd0);
    lVar3 = lVar5;
    func_0x000107c61558(lVar5);
    lStack_180 = lVar5;
    func_0x0001001029e8(auStack_160,0x657373615f747261,0xec00000064695f74,lVar3);
    lVar5 = lStack_180;
  }
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  auStack_160[0] = 0;
  func_0x000107c41300(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(auStack_160[0]);
  return;
}



/* Entry: 102186450; end: 102186457;  */

void FUN_102186450(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 102186458; end: 10218660b;  */

void FUN_102186458(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 10218660c; end: 102186613;  */

void FUN_10218660c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb5780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s12CoreGraphics7CGFloatV10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF_110350f20
  )(*unaff_x20);
  return;
}



/* Entry: 102186614; end: 1021866e3;  */

void FUN_102186614(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  char cStack_28;
  
  uStack_30 = 0;
  cStack_28 = '\x01';
  func_0x000107c5f070(param_1,&uStack_30);
  uVar1 = 0;
  if (cStack_28 != '\x01') {
    uVar1 = uStack_30;
  }
  *param_2 = uVar1;
  *(bool *)(param_2 + 1) = cStack_28 == '\x01';
  return;
}



/* Entry: 1021866e4; end: 102186727;  */

void FUN_1021866e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102186728; end: 10218674f;  */

void FUN_102186728(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 102186750; end: 1021867d3;  */

void FUN_102186750(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112e5e1d0;
  FUN_102186fc4(0x112e5e1d0,FUN_102186f58,&UNK_10da65484);
  uVar2 = 0x112e5e1d8;
  FUN_102186fc4(0x112e5e1d8,FUN_102186f58,&UNK_10da6542c);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1021867d4; end: 1021867ef;  */

void FUN_1021867d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1021867f0; end: 10218688f;  */

void FUN_1021867f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0x112e5e1b8;
  FUN_102186fc4(0x112e5e1b8,&SUB_10058ec44,&UNK_10daccfc0);
  uVar2 = 0x112e5e1c0;
  FUN_102186fc4(0x112e5e1c0,&SUB_10058ec44,&UNK_10daccf80);
  uVar3 = uVar2;
  func_0x0001021870b4();
  func_0x000107c604b8(param_1,param_2,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 102186890; end: 102186907;  */

undefined8 FUN_102186890(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 102186908; end: 102186977;  */

undefined1 * FUN_102186908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 102186978; end: 10218697f;  */

void FUN_102186978(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb80f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSd9hashValueSivg_11034dd80)(*unaff_x20);
  return;
}



/* Entry: 102186980; end: 1021869b7;  */

void FUN_102186980(undefined8 param_1)

{
  double *unaff_x20;
  double dVar1;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  func_0x000107c606a0(param_1,dVar1);
  return;
}



/* Entry: 1021869b8; end: 1021869cf;  */

void FUN_1021869b8(undefined8 param_1)

{
  double *unaff_x20;
  double dVar1;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ_11034ef28)(param_1,dVar1);
  return;
}



/* Entry: 1021869d0; end: 102186f0f;  */

undefined1  [16] FUN_1021869d0(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  uVar8 = 0x504f50;
  puVar2 = PTR_PTR_1131884b8;
  func_0x000107c5faec();
  puVar3 = param_1;
  lVar4 = param_2;
  func_0x000107c5faec();
  if (puVar2 == puVar3 && param_2 == lVar4) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar4);
    uVar7 = 0xe300000000000000;
    goto LAB_102186b40;
  }
  lVar5 = param_2;
  func_0x000107c605b8();
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar4);
  if (((ulong)puVar2 & 1) != 0) {
    uVar7 = 0xe300000000000000;
    goto LAB_102186b40;
  }
  uVar8 = 0x5952544e554f43;
  puVar2 = PTR_PTR_1131884b0;
  func_0x000107c5faec();
  puVar3 = param_1;
  lVar4 = lVar5;
  func_0x000107c5faec();
  if (puVar2 == puVar3 && lVar5 == lVar4) {
LAB_102186b2c:
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(lVar4);
  }
  else {
    lVar6 = lVar5;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar5);
    func_0x000107c6142c(lVar4);
    if (((ulong)puVar2 & 1) == 0) {
      uVar8 = 0x504f485f504948;
      puVar2 = PTR_PTR_1131884a8;
      func_0x000107c5faec();
      puVar3 = param_1;
      lVar4 = lVar6;
      func_0x000107c5faec();
      lVar5 = lVar6;
      if ((puVar2 == puVar3) && (lVar6 == lVar4)) goto LAB_102186b2c;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar6);
      func_0x000107c6142c(lVar4);
      if (((ulong)puVar2 & 1) == 0) {
        uVar8 = 0x425f444e415f52;
        puVar2 = PTR_PTR_1131884c0;
        func_0x000107c5faec();
        puVar3 = param_1;
        lVar4 = lVar5;
        func_0x000107c5faec();
        if ((puVar2 == puVar3) && (lVar5 == lVar4)) goto LAB_102186b2c;
        lVar6 = lVar5;
        func_0x000107c605b8();
        func_0x000107c6142c(lVar5);
        func_0x000107c6142c(lVar4);
        if (((ulong)puVar2 & 1) == 0) {
          uVar8 = 0x4b434f52;
          puVar2 = PTR_PTR_1131884c8;
          func_0x000107c5faec();
          puVar3 = param_1;
          lVar4 = lVar6;
          func_0x000107c5faec();
          if ((puVar2 == puVar3) && (lVar6 == lVar4)) {
LAB_102186c38:
            func_0x000107c6142c(lVar6);
            func_0x000107c6142c(lVar4);
            uVar7 = 0xe400000000000000;
            goto LAB_102186b40;
          }
          lVar5 = lVar6;
          func_0x000107c605b8();
          func_0x000107c6142c(lVar6);
          func_0x000107c6142c(lVar4);
          if (((ulong)puVar2 & 1) != 0) {
LAB_102186c78:
            uVar7 = 0xe400000000000000;
            goto LAB_102186b40;
          }
          uVar8 = 0x45434e4144;
          puVar2 = PTR_PTR_1131884d0;
          func_0x000107c5faec();
          puVar3 = param_1;
          lVar4 = lVar5;
          func_0x000107c5faec();
          if ((puVar2 == puVar3) && (lVar5 == lVar4)) {
LAB_102186cc8:
            func_0x000107c6142c(lVar5);
            func_0x000107c6142c(lVar4);
            uVar7 = 0xe500000000000000;
          }
          else {
            lVar6 = lVar5;
            func_0x000107c605b8();
            func_0x000107c6142c(lVar5);
            func_0x000107c6142c(lVar4);
            if (((ulong)puVar2 & 1) == 0) {
              uVar8 = 0x4e4954414c;
              puVar2 = PTR_PTR_1131884d8;
              func_0x000107c5faec();
              puVar3 = param_1;
              lVar4 = lVar6;
              func_0x000107c5faec();
              lVar5 = lVar6;
              if ((puVar2 == puVar3) && (lVar6 == lVar4)) goto LAB_102186cc8;
              func_0x000107c605b8();
              func_0x000107c6142c(lVar6);
              func_0x000107c6142c(lVar4);
              if (((ulong)puVar2 & 1) == 0) {
                uVar8 = 0x504f505f4b;
                puVar2 = PTR_PTR_1131884e0;
                func_0x000107c5faec();
                puVar3 = param_1;
                lVar4 = lVar5;
                func_0x000107c5faec();
                if ((puVar2 == puVar3) && (lVar5 == lVar4)) goto LAB_102186cc8;
                lVar6 = lVar5;
                func_0x000107c605b8(puVar2,lVar5,puVar3,lVar4,0);
                func_0x000107c6142c(lVar5);
                func_0x000107c6142c(lVar4);
                if (((ulong)puVar2 & 1) == 0) {
                  uVar8 = 0x4b4c4f46;
                  puVar2 = PTR_PTR_1131884e8;
                  func_0x000107c5faec();
                  puVar3 = param_1;
                  lVar4 = lVar6;
                  func_0x000107c5faec();
                  if ((puVar2 == puVar3) && (lVar6 == lVar4)) goto LAB_102186c38;
                  lVar5 = lVar6;
                  func_0x000107c605b8(puVar2,lVar6,puVar3,lVar4,0);
                  func_0x000107c6142c(lVar6);
                  func_0x000107c6142c(lVar4);
                  if (((ulong)puVar2 & 1) == 0) {
                    uVar8 = 0x454147474552;
                    puVar2 = PTR_PTR_1131884f0;
                    func_0x000107c5faec();
                    lVar4 = lVar5;
                    func_0x000107c5faec();
                    if ((puVar2 == param_1) && (lVar5 == lVar4)) {
                      func_0x000107c6142c(lVar5);
                      func_0x000107c6142c(lVar4);
                      uVar7 = 0xe600000000000000;
                    }
                    else {
                      func_0x000107c605b8(puVar2,lVar5,param_1,lVar4,0);
                      func_0x000107c6142c(lVar5);
                      func_0x000107c6142c(lVar4);
                      bVar1 = ((ulong)puVar2 & 1) == 0;
                      if (bVar1) {
                        uVar8 = 0x4e555f45524e4547;
                      }
                      uVar7 = 0xe600000000000000;
                      if (bVar1) {
                        uVar7 = 0xeb00000000544553;
                      }
                    }
                    goto LAB_102186b40;
                  }
                  goto LAB_102186c78;
                }
              }
            }
            uVar7 = 0xe500000000000000;
          }
          goto LAB_102186b40;
        }
      }
    }
  }
  uVar7 = 0xe700000000000000;
LAB_102186b40:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 102186f10; end: 102186f57;  */

undefined8 FUN_102186f10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102186f58; end: 102186f6b;  */

void FUN_102186f58(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104d72c8;
  if (lRam0000000112e5e180 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e5e180 = param_1;
  }
  return;
}



/* Entry: 102186f6c; end: 102186fc3;  */

void FUN_102186f6c(void)

{
  FUN_102186fc4(0x112e5e188,FUN_102186f58,&UNK_10da653f4);
  return;
}



/* Entry: 102186fc4; end: 102187003;  */

void FUN_102186fc4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102187004; end: 1021870f3;  */

void FUN_102187004(void)

{
  FUN_102186fc4(0x112e5e198,FUN_102186f58,&UNK_10da6545c);
  return;
}



/* Entry: 1021870f4; end: 1021878db;  */

ulong FUN_1021870f4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021871d8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021871dc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102187aac(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021872b0);
  (*pcVar2)();
}



/* Entry: 1021878dc; end: 102187aab;  */

/* WARNING: Possible PIC construction at 0x000102187934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218796c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102187a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021879b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102187a34) */
/* WARNING: Removing unreachable block (ram,0x000102187970) */
/* WARNING: Removing unreachable block (ram,0x000102187978) */
/* WARNING: Removing unreachable block (ram,0x000102187a64) */
/* WARNING: Removing unreachable block (ram,0x000102187a68) */
/* WARNING: Removing unreachable block (ram,0x000102187984) */
/* WARNING: Removing unreachable block (ram,0x00010218798c) */
/* WARNING: Removing unreachable block (ram,0x000102187aa4) */
/* WARNING: Removing unreachable block (ram,0x000102187994) */
/* WARNING: Removing unreachable block (ram,0x000102187938) */
/* WARNING: Removing unreachable block (ram,0x000102187a40) */
/* WARNING: Removing unreachable block (ram,0x00010218793c) */
/* WARNING: Removing unreachable block (ram,0x0001021879bc) */
/* WARNING: Removing unreachable block (ram,0x000102187a78) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001021879c4) */
/* WARNING: Removing unreachable block (ram,0x0001021879e0) */
/* WARNING: Removing unreachable block (ram,0x0001021879c8) */
/* WARNING: Removing unreachable block (ram,0x0001021879ec) */
/* WARNING: Removing unreachable block (ram,0x0001021879fc) */
/* WARNING: Removing unreachable block (ram,0x0001021879b0) */
/* WARNING: Removing unreachable block (ram,0x000102187a10) */

void FUN_1021878dc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  
  func_0x0001021877ec();
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c4e928();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102187aac);
  (*pcVar1)();
}



/* Entry: 102187aac; end: 102187aeb;  */

void FUN_102187aac(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102187aec; end: 102187af3;  */

undefined8 FUN_102187aec(void)

{
  return 1;
}



/* Entry: 102187af4; end: 102187b93;  */

void FUN_102187af4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102187b94; end: 102187bcb;  */

void FUN_102187b94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102187bcc; end: 102187c9b;  */

/* WARNING: Removing unreachable block (ram,0x000102187c28) */

void FUN_102187bcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_102194390();
  func_0x000107c613fc();
  func_0x00010006c00c(uVar1,uVar2);
  FUN_1021940a4(uVar1,uVar2);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar1 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102187c9c,uVar2,uVar1);
  return;
}



/* Entry: 102187c9c; end: 102187d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102187c9c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar7 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined1 *)(unaff_x22 + 0xf8);
  lVar3 = *(long *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x00010218a298(0x4090e00000000000,0x409e000000000000,lVar3,uVar1,uVar2,uVar10);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar4 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x70) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar5;
  lVar4 = _DAT_113804688;
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102187d80;
  lVar9 = *(long *)(unaff_x22 + 0x50);
  plVar6[4] = lVar7 + lVar4;
  plVar6[5] = lVar9;
  plVar6[2] = uVar5;
  plVar6[3] = lVar3;
  lVar7 = 0;
  func_0x000107c5eec8();
  plVar6[6] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[7] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[8] = uVar5;
  lVar7 = 0;
  func_0x000107c5ede0();
  plVar6[9] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[10] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar8 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xb] = uVar8;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102188528,0,0);
  return;
}



/* Entry: 102187d80; end: 102187ddb;  */

void FUN_102187d80(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102187ddc;
  }
  else {
    pcVar1 = FUN_10218843c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102187ddc; end: 102187f0f;  */

void FUN_102187ddc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  func_0x000107c48fd4();
  *(undefined **)(unaff_x22 + 0x98) = puVar2;
  func_0x000107c61170(puVar3);
  uVar4 = 0x112e5e2d8;
  func_0x0001000285a8(0x112e5e2d8,&UNK_10da65670);
  func_0x000107c5f060();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlFTu_11034d5c0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_102187f10;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlF_11034d5b8
    )(plVar5,unaff_x22 + 0xe0,uVar4,0,0);
    return;
  }
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102187f84;
                    /* WARNING: Could not recover jumptable at 0x000102187f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102188c7c(uVar4,0,0);
  return;
}



/* Entry: 102187f10; end: 102187f83;  */

void FUN_102187f10(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 0xf0);
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar2 + 0xe0);
    pcVar1 = FUN_10218801c;
  }
  else {
    *(long *)(lVar2 + 0xd8) = unaff_x20;
    pcVar1 = FUN_1021883b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102187f84; end: 10218801b;  */

void FUN_102187f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xe0) = param_1;
    *(int *)(lVar2 + 0xe8) = (int)param_2;
    *(int *)(lVar2 + 0xec) = (int)((ulong)param_2 >> 0x20);
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = param_3;
    *(undefined8 *)(lVar2 + 200) = param_1;
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar2 + 0xe8);
    pcVar1 = FUN_10218801c;
  }
  else {
    *(long *)(lVar2 + 0xd8) = unaff_x20;
    pcVar1 = FUN_1021883b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10218801c; end: 1021883b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218801c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar6 = *(long *)(unaff_x22 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c600d4(*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd0),
                      *(undefined8 *)(unaff_x22 + 0xc0));
  uVar9 = 0;
  func_0x000107c5ede8();
  if (lVar6 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    uVar10 = uVar9;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x000107c51bc4();
    func_0x000107c61180();
    uVar14 = 0;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      uVar14 = uVar10;
      func_0x000107c5faec();
      uVar10 = uVar14;
      func_0x000107c61170(puVar3);
      func_0x000107c51bc4();
      func_0x000107c61180();
      if (puVar2 != (undefined *)0x0) {
        puVar3 = puVar2;
        func_0x000107c5faec();
        func_0x000107c61170(puVar2);
        lVar5 = 0;
        FUN_102188c5c();
        lVar6 = lVar5;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar6 + _DAT_112e5e288);
        *puVar1 = uVar13;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)(lVar6 + _DAT_112e5e290);
        puVar1[1] = 0x409e000000000000;
        *puVar1 = 0x4090e00000000000;
        *(undefined8 *)(lVar6 + _DAT_112e5e298) = param_1;
        puVar1 = (undefined8 *)(lVar6 + _DAT_112e5e2a0);
        *puVar1 = puVar4;
        puVar1[1] = uVar14;
        puVar1 = (undefined8 *)(lVar6 + _DAT_112e5e2a8);
        *puVar1 = puVar3;
        puVar1[1] = uVar10;
        func_0x00010006c00c(uVar13,uVar9);
        *(long *)(unaff_x22 + 0x10) = lVar6;
        *(long *)(unaff_x22 + 0x18) = lVar5;
        puVar2 = (undefined *)(unaff_x22 + 0x10);
        puVar4 = PTR_s_init_1125d9248;
        func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
        puVar3 = puVar2;
        func_0x000106e0c1a0();
        func_0x000107c61180();
        if (puVar3 != (undefined *)0x0) {
          uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
          puVar7 = puVar3;
          func_0x000107c61174(puVar3);
          puVar4 = puVar7;
          FUN_1021878dc(uVar14,puVar7);
          func_0x000107c61170(puVar7);
        }
        uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
        lVar6 = *(long *)(unaff_x22 + 0x78);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
        func_0x000107c61174(puVar2);
        puVar7 = puVar2;
        func_0x00010011df08();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5faec();
        func_0x000107c61170(puVar7);
        puVar7 = PTR_PTR_1126cfb00;
        func_0x000107c610f8(PTR_PTR_1126cfb00);
        func_0x000107c5fadc(puVar8,puVar4);
        func_0x000107c6142c(puVar4);
        func_0x000107c47638(puVar7);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar2);
        func_0x00010006c090(uVar13,uVar9);
        func_0x000107c61170(uVar12);
        FUN_1021887ac(uVar10);
        func_0x000107c61170(uVar14);
        (**(code **)(lVar6 + 8))(uVar10,uVar15);
        func_0x000107c615c0(uVar10);
        FUN_102193f90();
        func_0x000107c61574(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001021882f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(puVar7);
        return;
      }
      func_0x000107c6142c(uVar14);
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar6 = *(long *)(unaff_x22 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
    FUN_102189184();
    func_0x000107c613f8(&UNK_1104d7448,uVar14,0,0);
    func_0x000107c61654();
    func_0x00010006c090(uVar13,uVar9);
    func_0x000107c61170(uVar17);
    FUN_1021887ac(uVar15);
    func_0x000107c61170(uVar10);
    pcVar11 = *(code **)(lVar6 + 8);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x78);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
    FUN_1021887ac(uVar15);
    func_0x000107c61170(uVar13);
    pcVar11 = *(code **)(lVar6 + 8);
  }
  (*pcVar11)(uVar15,uVar12);
  func_0x000107c615c0(uVar15);
  FUN_102193f90();
  func_0x000107c61574(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001021883b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021883b4; end: 10218843b;  */

void FUN_1021883b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  FUN_1021887ac(uVar3);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  func_0x000107c615c0(uVar3);
  FUN_102193f90();
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102188438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218843c; end: 10218848f;  */

void FUN_10218843c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar2);
  FUN_102193f90();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010218848c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102188490; end: 102188527;  */

void FUN_102188490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x48) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102188528,0,0);
  return;
}



/* Entry: 102188528; end: 1021886c7;  */

void FUN_102188528(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  code *pcVar13;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar12 = *(long *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar4 = *(long *)(unaff_x22 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c60b1c();
  func_0x000107c61180();
  uVar8 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uVar10 = param_2;
  func_0x000107c5ed80(uVar1,uVar8,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5eec4(uVar6);
  func_0x000107c5eeac();
  (**(code **)(lVar3 + 8))(uVar6,uVar7);
  func_0x000107c5fb78(param_2,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5ed9c(uVar5,0x6e6f735f74616863,0xea00000000005f67);
  func_0x000107c6142c(0xea00000000005f67);
  pcVar13 = *(code **)(lVar12 + 8);
  *(code **)(unaff_x22 + 0x68) = pcVar13;
  (*pcVar13)(uVar1,uVar2);
  func_0x000107c5eda0(uVar11,0x34706d,0xe300000000000000);
  (*pcVar13)(uVar5,uVar2);
  plVar9 = (long *)(lVar4 + 0x10);
  FUN_102189254(plVar9,*(undefined8 *)(lVar4 + 0x28));
  lVar12 = *plVar9;
  plVar9 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1021886c8;
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  plVar9[0x20] = *(long *)(unaff_x22 + 0x10);
  plVar9[0x21] = lVar12;
  plVar9[0x1e] = 0x4090e00000000000;
  plVar9[0x1f] = 0x409e000000000000;
  plVar9[0x1d] = lVar4;
  plVar9[0x19] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102192ea0,0,0);
  return;
}



/* Entry: 1021886c8; end: 10218874b;  */

void FUN_1021886c8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10218874c,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102188748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 10218874c; end: 1021887ab;  */

void FUN_10218874c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(unaff_x22 + 0x68))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001021887a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021887ac; end: 1021888b7;  */

/* WARNING: Possible PIC construction at 0x00010218885c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102188860) */
/* WARNING: Removing unreachable block (ram,0x0001021888a0) */

void FUN_1021887ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  puVar3 = puVar1;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  if (((int)puVar3 != 0) && (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4)) {
    func_0x000107c60e78();
    FUN_1021892bc(puVar2 + 0x10);
    FUN_1021892bc(puVar2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)(puVar2,0x60,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(0);
  return;
}



/* Entry: 1021888b8; end: 102188903;  */

void FUN_1021888b8(void)

{
  long unaff_x20;
  
  FUN_1021892bc(unaff_x20 + 0x10);
  FUN_1021892bc(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102188904; end: 1021889a7; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider prepareDataToUploadForMediaId:completionHandler:] */

/* WARNING: Possible PIC construction at 0x000102188970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102188974) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102188904(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e5e288);
    uVar1 = ((undefined8 *)(param_1 + _DAT_112e5e288))[1];
    func_0x000107c61174(param_1);
    func_0x000107c60bc4(param_4);
    func_0x000107c5ee20(uVar2,uVar1);
    (**(code **)(param_4 + 0x10))(param_4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1021889a8; end: 1021889af; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider mediaContentType] */

undefined8 FUN_1021889a8(void)

{
  return 1;
}



/* Entry: 1021889b0; end: 1021889bf; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider width] */

undefined8 FUN_1021889b0(void)

{
  return 0x4090e00000000000;
}



/* Entry: 1021889c0; end: 1021889cb; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider height] */

undefined8 FUN_1021889c0(void)

{
  return 0x409e000000000000;
}



/* Entry: 1021889cc; end: 1021889db; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021889cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112e5e298);
}



/* Entry: 1021889dc; end: 1021889e3; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider isInfiniteDuration] */

undefined8 FUN_1021889dc(void)

{
  return 0;
}



/* Entry: 1021889e4; end: 1021889eb; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider isRotationLocked] */

undefined8 FUN_1021889e4(void)

{
  return 1;
}



/* Entry: 1021889ec; end: 1021889f3; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider isZipped] */

undefined8 FUN_1021889ec(void)

{
  return 0;
}



/* Entry: 1021889f4; end: 1021889ff; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider chatKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021889f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e5e2a0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112e5e2a0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102188a00; end: 102188a0b; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider chatIV] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102188a00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e5e2a8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112e5e2a8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102188a0c; end: 102188a53;  */

void FUN_102188a0c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102188a54; end: 102188afb; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider snapMetadata] */

void FUN_102188a54(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126c4918;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = 0x5f6f745f74616863;
  func_0x000107c5fadc(0x5f6f745f74616863,0xec000000676e6f73);
  puVar4 = puVar2;
  func_0x000107c5e4e0();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x000107c3ecc8(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102188afc);
  (*pcVar1)();
}



/* Entry: 102188afc; end: 102188b0f; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider prepareChunkedTranscodeVideoFilterForMediaId:trackingId:conversationIds:completionHandler:] */

void FUN_102188afc(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x000102188b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x10))(in_x5,0,0);
  return;
}



/* Entry: 102188b10; end: 102188ba7; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider mediaOrigins] */

void FUN_102188b10(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_1021912f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  puVar2 = PTR_PTR_1126c4548;
  func_0x000107c610f8();
  func_0x000107c47cbc();
  if (puVar2 != (undefined *)0x0) {
    *(undefined **)(param_1 + 0x20) = puVar2;
    uVar3 = 0;
    FUN_102189278(0);
    lVar4 = param_1;
    func_0x000107c5fc48(param_1,uVar3);
    func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102188ba8);
  (*pcVar1)();
}



/* Entry: 102188ba8; end: 102188c07; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider init] */

void FUN_102188ba8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAICreateSongFlow.ChatMediaContentProvider",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102188bd4);
  (*pcVar1)();
}



/* Entry: 102188c08; end: 102188c5b; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102188c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102188c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102188c08(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112e5e288),
                      ((undefined8 *)(param_1 + _DAT_112e5e288))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e5e2a0 + 8))
  ;
  return;
}



/* Entry: 102188c5c; end: 102188c7b;  */

void FUN_102188c5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128229f0);
  return;
}



/* Entry: 102188c7c; end: 102188ce3;  */

void FUN_102188c7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  if (param_2 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102188ce4,param_2);
  return;
}



/* Entry: 102188ce4; end: 102188e0b;  */

void FUN_102188ce4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = 2;
  uVar4 = 0x1a;
  func_0x000100029b9c(2,0x1a,0,0);
  *(int *)(unaff_x22 + 0xb8) = (int)uVar2;
  if ((int)uVar2 == 0) {
    FUN_10218901c();
  }
  else {
    func_0x000107c5f058();
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  func_0x000107c61574(lVar1);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102188e0c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112d4e498;
  func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_101041ab4;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104d73a0;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c4b794(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102188e0c; end: 102188e47;  */

void FUN_102188e0c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102188e48,*(undefined8 *)(*unaff_x22 + 0xa0),*(undefined8 *)(*unaff_x22 + 0xa8));
  return;
}



/* Entry: 102188e48; end: 102188ee3;  */

/* WARNING: Removing unreachable block (ram,0x000102188e9c) */

void FUN_102188e48(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  iVar1 = *(int *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  if (iVar1 == 0) {
    FUN_102188ee4();
    *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
    *(int *)(unaff_x22 + 0x58) = (int)param_2;
    *(int *)(unaff_x22 + 0x5c) = (int)((ulong)param_2 >> 0x20);
  }
  else {
    func_0x000107c60098(unaff_x22 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x000102188ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102188ee4; end: 10218901b;  */

undefined8 FUN_102188ee4(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  func_0x000107c6009c(&uStack_60);
  if (cStack_48 != '\0') {
    if (cStack_48 != '\x01') {
      FUN_1021891ec(uStack_60,uStack_58,uStack_50,cStack_48);
      func_0x000107c602fc(0x16);
      func_0x000107c6142c(0xe000000000000000);
      puVar2 = &UNK_10da65680;
      func_0x0001000285a8(0x112e5e2e8,&UNK_10da65680);
      func_0x000107c5f050();
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef21400,
                          "AVFoundation/arm64e-apple-ios.swiftinterface",0x2c,2,0x19a,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10218901c);
      (*pcVar1)();
    }
    func_0x000107c61654();
  }
  return uStack_60;
}



/* Entry: 10218901c; end: 102189183;  */

undefined1  [16] FUN_10218901c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c5f054();
  uStack_50 = 0x2e;
  uStack_48 = 0xe100000000000000;
  puStack_60 = &uStack_50;
  lVar5 = 0x7fffffffffffffff;
  func_0x000101041d74(0x7fffffffffffffff,1,FUN_102189200,&uStack_70,param_1,param_2);
  if (*(long *)(lVar5 + 0x10) != 0) {
    puVar1 = (undefined8 *)(lVar5 + *(long *)(lVar5 + 0x10) * 0x20);
    uVar7 = *puVar1;
    uVar6 = puVar1[1];
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(lVar5);
    func_0x000107c5fb2c(uVar7,uVar6,uVar2,uVar3);
    func_0x000107c6142c(uVar3);
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar7;
    return auVar8;
  }
  func_0x000107c6142c();
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x44);
  uVar7 = 0x800000010ef21420;
  func_0x000107c5fb78(0xd000000000000041,0x800000010ef21420);
  func_0x000107c5f054();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                      "AVFoundation/arm64e-apple-ios.swiftinterface",0x2c,2,0x1b4,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102189184);
  (*pcVar4)();
}



/* Entry: 102189184; end: 1021891c3;  */

void FUN_102189184(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5e2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da65708;
  func_0x000107c61520(&UNK_10da65708,&UNK_1104d7448);
  puRam0000000112e5e2e0 = puVar1;
  return;
}



/* Entry: 1021891c4; end: 1021891d3;  */

long FUN_1021891c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1021891d4; end: 1021891eb;  */

void FUN_1021891d4(long param_1)

{
  FUN_1021892bc(param_1 + 0x20);
  return;
}



/* Entry: 1021891ec; end: 1021891ff;  */

void FUN_1021891ec(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 102189200; end: 102189253;  */

uint FUN_102189200(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 102189254; end: 102189277;  */

long * FUN_102189254(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102189278; end: 1021892bb;  */

void FUN_102189278(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5e2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c4548;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5e2f0 = puVar1;
  return;
}



/* Entry: 1021892bc; end: 1021893cb;  */

void FUN_1021892bc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001021892d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1021893cc; end: 10218940b;  */

void FUN_1021893cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5e2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da656e0;
  func_0x000107c61520(&UNK_10da656e0,&UNK_1104d7448);
  puRam0000000112e5e2f8 = puVar1;
  return;
}



/* Entry: 10218940c; end: 10218940f; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider venueId] */

void FUN_10218940c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102189410; end: 102189413; -[_TtC19GenAICreateSongFlowP33_4D7DF3AB9012AC9DAB04972BE0A750E724ChatMediaContentProvider snapAttachmentUrl] */

void FUN_102189410(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102189414; end: 1021894e3;  */

void FUN_102189414(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puRam0000000112e5e3a8 = puVar1;
  return;
}



/* Entry: 1021894e4; end: 102189567;  */

/* WARNING: Possible PIC construction at 0x000102189554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102189558) */

void FUN_1021894e4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c3ec60(param_2);
  uVar1 = param_2;
  func_0x000107c422d0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c500d4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102189568; end: 10218982b;  */

undefined * FUN_102189568(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_10218a5ac(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_1021897e8:
        puStack_58 = (undefined *)0x0;
LAB_1021897ec:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_10218a5ac(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10218982c);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_1021897e8;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_1021897ec;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        func_0x00010109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x00010109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 10218982c; end: 10218983b;  */

void FUN_10218982c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10218983c; end: 10218985b;  */

void FUN_10218983c(void)

{
  func_0x000107c61168(&PTR_PTR_112e5e340);
  return;
}



/* Entry: 10218985c; end: 10218a063;  */

undefined *
FUN_10218985c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(0,0,param_1,param_2);
  func_0x000107c57168();
  if (lRam0000000112e5e3a0 != -1) {
    func_0x000107c61568(0x112e5e3a0,FUN_102189414);
  }
  func_0x000107c52b50(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c46db4();
  func_0x000107c53840();
  func_0x000107c3ec60(puVar2);
  func_0x000107c54b80(puVar3);
  func_0x000107c52ab8(puVar3);
  func_0x000107c3d89c(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b50();
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c539d4(0x4024000000000000);
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar5);
  func_0x000107c5a050(puVar4);
  func_0x000107c3d89c(puVar2);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if ((param_5 & 1) == 0) {
    if (lRam0000000112e5e3b0 != -1) {
      func_0x000107c61568(0x112e5e3b0,0x1021894b0);
    }
  }
  else if (lRam0000000112e5e3d0 != -1) {
    func_0x000107c61568(0x112e5e3d0,0x10218947c);
  }
  func_0x000107c52b50(puVar5);
  puVar6 = puVar5;
  func_0x000107c4aba4(puVar5);
  func_0x000107c61180();
  func_0x000107c539d4(0x4004000000000000);
  func_0x000107c61170(puVar6);
  func_0x000107c5a050(puVar5);
  func_0x000107c3d89c(puVar4);
  puVar6 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  func_0x000107c5638c(0x4028000000000000,puVar6);
  lVar1 = lRam0000000112e5e3c0;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x112e5e3c0,0x102189448);
  }
  func_0x000107c59c78(puVar6);
  func_0x000107c56ba8(puVar6);
  func_0x000107c55f80(puVar6);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c59c6c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_3);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c3d89c(puVar4);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar8 + 0x18) = 0x1b;
  *(undefined8 *)(puVar8 + 0x10) = 0xd;
  puVar9 = puVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar10 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40284(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x20) = puVar11;
  puVar9 = puVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar10 = puVar2;
  func_0x000107c5ce8c(puVar2);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40284(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x28) = puVar11;
  puVar9 = puVar4;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar10 = puVar2;
  func_0x000107c3f764(puVar2);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x30) = puVar11;
  puVar9 = puVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar10 = puVar2;
  func_0x000107c5cbe4(puVar2);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40298(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x38) = puVar11;
  puVar9 = puVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar10 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c402a8(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x40) = puVar11;
  puVar9 = puVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar10 = puVar4;
  func_0x000107c4acb0(puVar4);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x48) = puVar11;
  puVar9 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar10 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x50) = puVar11;
  puVar9 = puVar5;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar10 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x58) = puVar11;
  puVar9 = puVar5;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40290(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  *(undefined **)(puVar8 + 0x60) = puVar10;
  puVar9 = puVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar10 = puVar5;
  func_0x000107c5ce8c(puVar5);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x68) = puVar11;
  puVar9 = puVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar10 = puVar4;
  func_0x000107c5ce8c(puVar4);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40284(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x70) = puVar11;
  puVar9 = puVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar10 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40284(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x78) = puVar11;
  puVar9 = puVar6;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar10 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40284(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  *(undefined **)(puVar8 + 0x80) = puVar11;
  uVar12 = 0;
  FUN_10218a5ac(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar9 = puVar8;
  func_0x000107c5fc48(puVar8,uVar12);
  func_0x000107c61574(puVar8);
  func_0x000107c3d048(puVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  return puVar2;
}



/* Entry: 10218a064; end: 10218a523;  */

undefined * FUN_10218a064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar3 = puVar8;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  uVar4 = 0;
  FUN_10218a5ac(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar5 = uVar4;
  func_0x000100deaee4();
  puVar8 = puVar3;
  func_0x000107c5fe10(puVar3,uVar4,uVar5);
  func_0x000107c61170(puVar3);
  puVar3 = puVar8;
  FUN_102189568();
  func_0x000107c6142c(puVar8);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar8 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar8 != (undefined *)0x0) {
    uVar9 = 0;
    do {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10218a1c4);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(puVar3 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar9;
        func_0x0001012bfb38(uVar9,puVar3);
      }
      puVar1 = (undefined *)(uVar9 + 1);
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10218a1c0);
        (*pcVar2)();
      }
      uVar7 = uVar6;
      func_0x000107c3d0e4();
      if (uVar7 == 0) {
        func_0x000107c6142c(puVar3);
        puVar8 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIWindow_1126c3e70);
        func_0x000107c495e8();
        goto LAB_10218a210;
      }
      func_0x000107c61170(uVar6);
      uVar9 = uVar9 + 1;
    } while (puVar1 != puVar8);
  }
  func_0x000107c6142c(puVar3);
  puVar8 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIWindow_1126c3e70);
  func_0x000107c469a4(0,0,param_1,param_2);
  uVar6 = 0;
LAB_10218a210:
  func_0x000107c54b80(0,0,param_1,param_2,puVar8);
  uVar4 = 0;
  func_0x00010058ec44(0);
  uStack_88 = 0x3ff0000000000000;
  uVar5 = uVar4;
  FUN_10218a568();
  func_0x000107c5f170(auStack_80,PTR__UIWindowLevelNormal_110345e88,&uStack_88,uVar4,uVar5);
  func_0x000107c5a738(auStack_80[0],puVar8);
  func_0x000107c61170(uVar6);
  return puVar8;
}



/* Entry: 10218a524; end: 10218a52b;  */

/* WARNING: Possible PIC construction at 0x000102189554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102189558) */

void FUN_10218a524(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c3ec60(uVar2);
  uVar1 = uVar2;
  func_0x000107c422d0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000107c4aba4(uVar2);
  func_0x000107c61180();
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c500d4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10218a52c; end: 10218a54b;  */

void FUN_10218a52c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


