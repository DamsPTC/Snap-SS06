/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e77954; end: 102e779af;  */

void FUN_102e77954(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e779b0; end: 102e77a8f;  */

void FUN_102e779b0(void)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x0001000285a8(0x112f23598,&UNK_10db5dee0);
    func_0x000107c613fc();
    func_0x0001000b64ac(FUN_102e77a90,0);
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar1 = lStack_38;
    func_0x000107c4da04(lStack_38);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    func_0x0001000bfde0(0x102e77ad4,0,PTR___sSiN_11034deb0);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102e77a90; end: 102e77afb;  */

void FUN_102e77a90(void)

{
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 102e77afc; end: 102e77b4f;  */

/* WARNING: Removing unreachable block (ram,0x000102e77b28) */

undefined1 FUN_102e77afc(void)

{
  undefined1 uStack_31;
  
  func_0x000104886d18(&uStack_31);
  return uStack_31;
}



/* Entry: 102e77b50; end: 102e77b5b;  */

void FUN_102e77b50(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x20));
  return;
}



/* Entry: 102e77b5c; end: 102e77bd3;  */

long FUN_102e77b5c(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    func_0x000107c40808(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return lVar1;
}



/* Entry: 102e77bd4; end: 102e77c1f;  */

void FUN_102e77bd4(void)

{
  undefined1 uStack_11;
  
  uStack_11 = 1;
  func_0x0001007d6d78(&uStack_11);
  return;
}



/* Entry: 102e77c20; end: 102e77d13;  */

undefined8
FUN_102e77c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_102e77eac(param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 102e77d14; end: 102e77d4b;  */

void FUN_102e77d14(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf760;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 102e77d4c; end: 102e77e6b;  */

void FUN_102e77d4c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112ea3498,&UNK_10dab5900);
  func_0x000107c4cd00(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  lVar2 = 0;
  func_0x000102e78668();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined1 *)(lVar3 + 0x18) = 3;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined1 *)(lVar3 + 0x18) = 3;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  func_0x0001000285a8(0x112f23688,&UNK_10db5df48);
  func_0x000107c613fc();
  uVar4 = 0x102e7820c;
  func_0x0001000bdd8c(0x102e7820c,uVar1);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105de980;
  *param_1 = lVar3;
  return;
}



/* Entry: 102e77e6c; end: 102e77e7b;  */

void FUN_102e77e6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e77e7c; end: 102e77e9f;  */

void FUN_102e77e7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e77ea0; end: 102e77eab;  */

void FUN_102e77ea0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102e77eac; end: 102e78187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e77eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  func_0x0001000d224c(alStack_88);
  plVar2 = alStack_88;
  func_0x0001000a8868(plVar2,lStack_70);
  uVar3 = 2;
  func_0x000100774b74(2,0xd,1,lStack_70,ppuStack_68,plVar2);
  func_0x0001000834e4(alStack_88);
  func_0x0001000285a8(0x112f23670,&UNK_10db5df28);
  func_0x000107c613fc();
  pcVar4 = FUN_102e77d14;
  func_0x0001000bdd8c(FUN_102e77d14,0);
  uVar12 = *(undefined8 *)(param_1 + _DAT_113091b70);
  uVar13 = *(ulong *)(param_1 + _DAT_113091b78);
  lVar5 = 0;
  func_0x000102e77990();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar3;
  *(code **)(lVar6 + 0x18) = pcVar4;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar12);
  func_0x000107c615f0(uVar13);
  func_0x000107c61174(uVar3);
  pcVar7 = pcVar4;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(code **)(lVar6 + 0x28) = pcVar7;
  uVar8 = uVar13;
  func_0x000107c3dfc0();
  uVar1 = (undefined1)(0x10000 >> (ulong)((uint)(uVar8 << 3) & 0x18));
  if (2 < uVar8) {
    uVar1 = 2;
  }
  alStack_88[0] = CONCAT71(alStack_88[0]._1_7_,uVar1);
  func_0x0001000285a8(0x112f23678,&UNK_10db5df30);
  func_0x000107c613fc();
  plVar2 = alStack_88;
  func_0x00010042e6a0();
  *(long **)(lVar6 + 0x20) = plVar2;
  FUN_102e777c0(uVar12);
  func_0x000107c615e8(uVar13);
  func_0x000107c615e8(uVar12);
  ppuStack_68 = &PTR_DAT_1105de910;
  uVar9 = 0;
  alStack_88[0] = lVar6;
  lStack_70 = lVar5;
  func_0x000102e78c00();
  func_0x000107c613fc();
  func_0x000107c615f0(uVar12);
  func_0x000107c61174(uVar3);
  uVar10 = uVar12;
  FUN_102e78c88(uVar12,uVar3);
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar3);
  ppuStack_90 = &PTR_DAT_1105deb68;
  puVar11 = &UNK_1105de950;
  auStack_b0[0] = uVar10;
  uStack_98 = uVar9;
  func_0x000107c613fc(&UNK_1105de950,0x18,7);
  *(undefined8 *)(puVar11 + 0x10) = param_3;
  func_0x0001000285a8(0x112f23680,&UNK_10db5df38);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  pcVar7 = FUN_102e78204;
  func_0x0001000bdd8c(FUN_102e78204,puVar11);
  uVar12 = 0;
  func_0x0001003229e8(0);
  func_0x000107c610f8();
  plVar2 = alStack_88;
  func_0x0001044d8668(plVar2,auStack_b0,pcVar7,uVar12);
  func_0x000107c61574(pcVar4);
  func_0x000107c61170(uVar3);
  *(long **)(unaff_x20 + 0x10) = plVar2;
  return;
}



/* Entry: 102e78188; end: 102e78203;  */

void FUN_102e78188(undefined8 param_1)

{
  if (lRam0000000112f235c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e736870);
  return;
}



/* Entry: 102e78204; end: 102e78213;  */

void FUN_102e78204(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112ea3498,&UNK_10dab5900);
  func_0x000107c4cd00(uVar4);
  func_0x000107c61180();
  uVar1 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  lVar2 = 0;
  func_0x000102e78668();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined1 *)(lVar3 + 0x18) = 3;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined1 *)(lVar3 + 0x18) = 3;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  func_0x0001000285a8(0x112f23688,&UNK_10db5df48);
  func_0x000107c613fc();
  uVar4 = 0x102e7820c;
  func_0x0001000bdd8c(0x102e7820c,uVar1);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105de980;
  *param_1 = lVar3;
  return;
}



/* Entry: 102e78214; end: 102e782e7;  */

void FUN_102e78214(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x0001000285a8(0x112f23758,&UNK_10db5dfa0);
    func_0x000107c613fc();
    pcVar2 = FUN_102e782e8;
    func_0x0001000b64ac(FUN_102e782e8,0);
  }
  else {
    func_0x0001000285a8(0x112d52070,&UNK_10d918e50);
    lVar1 = lStack_38;
    func_0x0001000b637c(lStack_38);
    pcVar2 = (code *)0x102e78328;
    func_0x0001000bfde0(0x102e78328,0,&UNK_11077c838);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(lStack_38);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 102e782e8; end: 102e7834f;  */

void FUN_102e782e8(void)

{
  func_0x000100c7f554();
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 102e78350; end: 102e78633;  */

char FUN_102e78350(void)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  char cStack_71;
  
  cStack_71 = '\x03';
  puVar5 = &UNK_1105dea08;
  func_0x000107c613fc(&UNK_1105dea08,0x18,7);
  *(char **)(puVar5 + 0x10) = &cStack_71;
  puVar6 = &UNK_1105dea30;
  func_0x000107c613fc(&UNK_1105dea30,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_102e78a54;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_102e78a60;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1105dea48;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_80;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_1105dea80;
  func_0x000107c613fc(&UNK_1105dea80,0x18,7);
  *(char **)(puVar8 + 0x10) = &cStack_71;
  puVar9 = &UNK_1105deaa8;
  func_0x000107c613fc(&UNK_1105deaa8,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x102e78a9c;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_88 = (code *)0x102e78acc;
  puStack_a8 = puVar2;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1105deac0;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar11 = puStack_80;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar11);
  puVar11 = &UNK_1105deaf8;
  func_0x000107c613fc(&UNK_1105deaf8,0x18,7);
  *(char **)(puVar11 + 0x10) = &cStack_71;
  puVar12 = &UNK_1105deb20;
  func_0x000107c613fc(&UNK_1105deb20,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = 0x102e78aac;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  pcStack_88 = (code *)0x102e78ad0;
  puStack_a8 = puVar2;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1105deb38;
  ppuVar13 = &puStack_a8;
  puStack_80 = puVar12;
  func_0x000107c60bc4(ppuVar13);
  puVar2 = puStack_80;
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar2);
  func_0x000107c4c6c0(unaff_x20);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  cVar3 = cStack_71;
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x54,0x61,0x15,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102e7862c);
    (*pcVar4)();
  }
  puVar5 = puVar9;
  func_0x000107c61544(puVar9,"",0x54,99,0x15,1);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = puVar12;
    func_0x000107c61544(puVar12,"",0x54,0x65,0x16,1);
    func_0x000107c61574(puVar12);
    if (((ulong)puVar5 & 1) == 0) {
      cVar1 = '\0';
      if (cVar3 != '\x03') {
        cVar1 = cVar3;
      }
      return cVar1;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102e78634);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102e78630);
  (*pcVar4)();
}



/* Entry: 102e78634; end: 102e78687;  */

void FUN_102e78634(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e78688; end: 102e7877f;  */

void FUN_102e78688(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  byte bStack_50;
  undefined7 uStack_4f;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100087bd4(&bStack_50,FUN_102e78a0c);
  if ((bStack_50 & 1) == 0) {
    func_0x0001000d224c(&bStack_50);
    puVar1 = &UNK_1105de9b8;
    func_0x000107c613fc(&UNK_1105de9b8,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    *(long *)(puVar1 + 0x18) = unaff_x20;
    pcVar5 = *(code **)(*(long *)CONCAT71(uStack_4f,bStack_50) + 0x60);
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c();
    uVar4 = 0x102e78a30;
    puVar3 = puVar1;
    (*pcVar5)(0x102e78a30);
    func_0x000107c61574((long *)CONCAT71(uStack_4f,bStack_50));
    func_0x000107c61574(puVar1);
    uVar2 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar3 + 0x18))(*(undefined8 *)(unaff_x20 + 0x20),uVar2,puVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102e78780; end: 102e78807;  */

void FUN_102e78780(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined1 uStack_38;
  
  uVar1 = *param_1;
  puVar2 = &UNK_1105de9e0;
  func_0x000107c613fc(&UNK_1105de9e0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_3);
  puStack_40 = puVar2;
  uStack_38 = uVar1;
  func_0x000100087bd4(FUN_102e78a38,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 102e78808; end: 102e7887b;  */

void FUN_102e78808(long param_1,byte param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(byte *)(param_1 + 0x18) == 3 || *(byte *)(param_1 + 0x18) < param_2) {
      *(byte *)(param_1 + 0x18) = param_2;
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102e7887c; end: 102e78887;  */

void FUN_102e7887c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x28));
  return;
}



/* Entry: 102e78888; end: 102e788eb;  */

undefined1 FUN_102e78888(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 uStack_31;
  
  uVar2 = *unaff_x20;
  uVar1 = 0x112f23748;
  func_0x0001000285a8(0x112f23748,&UNK_10dc073e0);
  func_0x000100087bd4(&uStack_31,FUN_102e78ad4,uVar2,uVar1);
  return uStack_31;
}



/* Entry: 102e788ec; end: 102e7890b;  */

void FUN_102e788ec(void)

{
  FUN_102e78688();
  return;
}



/* Entry: 102e7890c; end: 102e789bf;  */

uint FUN_102e7890c(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  uint extraout_w8;
  uint uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  byte bStack_31;
  
  uVar4 = *unaff_x20;
  uVar1 = 0x112f23748;
  func_0x0001000285a8(0x112f23748,&UNK_10dc073e0);
  pcVar2 = FUN_102e789c0;
  func_0x000100087bd4(&bStack_31,FUN_102e789c0,uVar4,uVar1);
  if (bStack_31 == 3) {
    FUN_102e789cc();
    func_0x000107c613f8(&UNK_11077c8c8,pcVar2,0,0);
    func_0x000107c61654();
    uVar3 = extraout_w8;
  }
  else {
    uVar3 = (uint)(param_1 <= bStack_31);
  }
  return uVar3 & 1;
}



/* Entry: 102e789c0; end: 102e789cb;  */

void FUN_102e789c0(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 102e789cc; end: 102e78a0b;  */

void FUN_102e789cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f23750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0bf58;
  func_0x000107c61520(&UNK_10dd0bf58,&UNK_11077c8c8);
  puRam0000000112f23750 = puVar1;
  return;
}



/* Entry: 102e78a0c; end: 102e78a37;  */

void FUN_102e78a0c(undefined1 *param_1)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x18) == '\x03') {
    *(undefined1 *)(unaff_x20 + 0x18) = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}



/* Entry: 102e78a38; end: 102e78a53;  */

void FUN_102e78a38(void)

{
  long unaff_x20;
  
  FUN_102e78808(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e78a54; end: 102e78a5f;  */

void FUN_102e78a54(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 102e78a60; end: 102e78a7f;  */

void FUN_102e78a60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e78a80; end: 102e78ad3;  */

void FUN_102e78a80(long param_1,long param_2)

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



/* Entry: 102e78ad4; end: 102e78ae7;  */

void FUN_102e78ad4(void)

{
  FUN_102e789c0();
  return;
}



/* Entry: 102e78ae8; end: 102e78aeb;  */

void FUN_102e78ae8(void)

{
  return;
}



/* Entry: 102e78aec; end: 102e78b63;  */

void FUN_102e78aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105debb8;
  func_0x000107c613fc(&UNK_1105debb8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_3);
  func_0x000100087bd4(FUN_102e78e1c,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102e78b64; end: 102e78bc3;  */

void FUN_102e78b64(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102e78bc4; end: 102e78c1f;  */

void FUN_102e78bc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e78c20; end: 102e78c2b;  */

void FUN_102e78c20(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x18));
  return;
}



/* Entry: 102e78c2c; end: 102e78c7b;  */

undefined1 FUN_102e78c2c(void)

{
  undefined8 *unaff_x20;
  undefined1 uStack_31;
  
  func_0x000100087bd4(&uStack_31,FUN_102e78c7c,*unaff_x20,PTR___sSbN_11034dd40);
  return uStack_31;
}



/* Entry: 102e78c7c; end: 102e78c87;  */

void FUN_102e78c7c(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 102e78c88; end: 102e78e13;  */

void FUN_102e78c88(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x0001000285a8(0x112da27c8,&UNK_10d946ff0);
  func_0x000107c61174(param_2);
  func_0x000107c41c80(param_1);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  pcVar1 = FUN_102e78ae8;
  func_0x0001000bfde0(FUN_102e78ae8,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  *(code **)(unaff_x20 + 0x18) = pcVar1;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  plVar3 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000100471e0c(plVar3,0);
  puVar4 = &UNK_1105deb90;
  func_0x000107c613fc(&UNK_1105deb90,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  pcVar6 = *(code **)(*plVar3 + 0x60);
  func_0x000107c6157c();
  pcVar1 = FUN_102e78e14;
  puVar5 = puVar4;
  (*pcVar6)(FUN_102e78e14);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  pcVar6 = pcVar1;
  func_0x000107c614f0(pcVar1);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20),pcVar6,puVar5);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102e78e14; end: 102e78e1b;  */

void FUN_102e78e14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1105debb8;
  func_0x000107c613fc(&UNK_1105debb8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,uVar1);
  func_0x000100087bd4(FUN_102e78e1c,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102e78e1c; end: 102e78e9f;  */

void FUN_102e78e1c(void)

{
  FUN_102e78b64();
  return;
}



/* Entry: 102e78ea0; end: 102e79413;  */

undefined8
FUN_102e78ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = &UNK_1105deca0;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105decc8;
  func_0x000107c613fc(&UNK_1105decc8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar2 = puVar3;
  FUN_102e79d6c();
  func_0x000107c61434(param_1);
  uVar8 = uVar7;
  func_0x0001048893f8(uVar7,1,FUN_102e79d64,puVar3,&UNK_1105df178,puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = &UNK_1105deca0;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105decf0;
  func_0x000107c613fc(&UNK_1105decf0,0x29,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar3[0x28] = (char)param_4;
  puVar2 = &UNK_1105ded18;
  func_0x000107c613fc(&UNK_1105ded18,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e79dac;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000101dcbee8(param_2,param_3,param_4);
  puVar1 = PTR___sytN_11034f1b0;
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,FUN_102e79dbc,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = &UNK_1105deca0;
  puVar5 = puVar2;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,unaff_x20);
  puVar3 = &UNK_1105ded40;
  func_0x000107c613fc(&UNK_1105ded40,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar5;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar5 = &UNK_1105ded68;
  func_0x000107c613fc(&UNK_1105ded68,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102e79de4;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  func_0x000107c61434(param_1);
  uVar8 = uVar7;
  func_0x0001048898b8(uVar7,1,FUN_102e7b3b8,puVar5,puVar1 + 8);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_1105ded90;
  func_0x000107c613fc(&UNK_1105ded90,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar2 = &UNK_1105dedb8;
  func_0x000107c613fc(&UNK_1105dedb8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x102e79dec;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61434(param_1);
  puVar5 = PTR___sytN_11034f1b0;
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,0x102e7b3cc,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = &UNK_1105deca0;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_1105dede0;
  func_0x000107c613fc(&UNK_1105dede0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar2 = &UNK_1105dee08;
  func_0x000107c613fc(&UNK_1105dee08,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e79df4;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61434(param_1);
  uVar6 = uVar7;
  func_0x0001048898b8(uVar7,1,0x102e7b3e0,puVar2,puVar5 + 8);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &UNK_1105dee30;
  func_0x000107c613fc(&UNK_1105dee30,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar3 = &UNK_1105dee58;
  func_0x000107c613fc(&UNK_1105dee58,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_102e79e14;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61434(param_1);
  func_0x000107c6157c(uVar8);
  uVar8 = uVar7;
  func_0x0001048898b8(uVar7,1,0x102e7b3f4,puVar3,puVar5 + 8);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  puVar2 = &UNK_1105deca0;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_1105dee80;
  func_0x000107c613fc(&UNK_1105dee80,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar2 = &UNK_1105deea8;
  func_0x000107c613fc(&UNK_1105deea8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e79e1c;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61434(param_1);
  uVar7 = uStack_68;
  func_0x0001048898b8(uStack_68,1,0x102e7b408,puVar2,puVar5 + 8);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar2);
  return uVar7;
}



/* Entry: 102e79414; end: 102e7951f;  */

void FUN_102e79414(undefined1 *param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
    uVar1 = 1;
  }
  else {
    FUN_102e7b098();
    func_0x000107c61574(param_2);
    uVar1 = (undefined1)((uint)param_3 >> 8);
  }
  *param_1 = (char)param_3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 102e79520; end: 102e796ff;  */

undefined8 FUN_102e79520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112f23908,&UNK_10db5e0c0);
  func_0x0001000d224c(&uStack_68);
  uVar3 = uStack_68;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = &UNK_1105df088;
  func_0x000107c613fc(&UNK_1105df088,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_102e7afe8;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  func_0x000107c6157c(uVar4);
  uVar4 = uVar3;
  func_0x000104889654(uVar3,1,FUN_102e7aff0,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar3 = uStack_68;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = &UNK_1105df0b0;
  func_0x000107c613fc(&UNK_1105df0b0,0x29,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = (char)param_3;
  puVar2 = &UNK_1105df0d8;
  func_0x000107c613fc(&UNK_1105df0d8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_102e7b058;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(uVar5);
  func_0x000101dcbee8(param_1,param_2,param_3);
  uVar5 = uVar3;
  func_0x0001048898b8(uVar3,1,FUN_102e7b068,puVar2,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar3 = uStack_68;
  func_0x000100775264(uStack_68,1,FUN_102e7a13c,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_68);
  return uVar3;
}



/* Entry: 102e79700; end: 102e797cf;  */

undefined8 FUN_102e79700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_50);
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    uVar1 = uStack_50;
    func_0x000104888e28(uStack_50,1,param_2);
    func_0x000107c61170(uStack_50);
    func_0x000107c61574(param_1);
  }
  return uVar1;
}



/* Entry: 102e797d0; end: 102e799ab;  */

undefined8 FUN_102e797d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x0001000d224c(&uStack_60);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = &UNK_1105df060;
    func_0x000107c613fc(&UNK_1105df060,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = uVar2;
    func_0x000107c6157c(uVar2);
    func_0x000107c61434(param_2);
    uVar2 = uStack_60;
    func_0x000104889654(uStack_60,1,FUN_102e7afd0,puVar1);
    func_0x000107c61170(uStack_60);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(param_1);
  }
  return uVar2;
}



/* Entry: 102e799ac; end: 102e79a97;  */

undefined8 FUN_102e799ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(param_2,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return param_2;
}



/* Entry: 102e79a98; end: 102e79d43;  */

undefined8 FUN_102e79a98(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112d627d8,&UNK_10d9285c0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000d224c(&uStack_58);
  uVar2 = uStack_58;
  puVar1 = &UNK_1105deed0;
  func_0x000107c613fc(&UNK_1105deed0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  uVar5 = uVar2;
  func_0x000104889654(uVar2,1,FUN_102e7a260,puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1 = &UNK_1105deef8;
  func_0x000107c613fc(&UNK_1105deef8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  func_0x000107c61580(uVar7,2);
  func_0x000107c61580(uVar6,2);
  uVar2 = 0x112f238f0;
  func_0x0001000285a8(0x112f238f0,&UNK_10db5e0a0);
  uVar3 = uVar4;
  func_0x0001048898b8(uVar4,1,FUN_102e7a380,puVar1,uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  puVar1 = &UNK_1105def20;
  func_0x000107c613fc(&UNK_1105def20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  uVar2 = 0x112f238f8;
  func_0x0001000285a8(0x112f238f8,&UNK_10db5e0a8);
  uVar5 = uVar4;
  func_0x0001048898b8(uVar4,1,FUN_102e7a4a8,puVar1,uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  uVar2 = uStack_58;
  puVar1 = &UNK_1105deca0;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar4 = uVar2;
  func_0x0001048898b8(uVar2,1,FUN_102e7a548,puVar1,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar5);
  uVar2 = uStack_58;
  func_0x000100775264(uStack_58,1,FUN_102e7a770,uVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uVar5);
  return uVar2;
}



/* Entry: 102e79d44; end: 102e79d63;  */

void FUN_102e79d44(void)

{
  FUN_102e78ea0();
  return;
}



/* Entry: 102e79d64; end: 102e79d6b;  */

void FUN_102e79d64(undefined1 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar3 = 0;
    uVar2 = 1;
  }
  else {
    FUN_102e7b098();
    func_0x000107c61574(lVar1);
    uVar2 = (undefined1)((uint)uVar3 >> 8);
  }
  *param_1 = (char)uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102e79d6c; end: 102e79dab;  */

void FUN_102e79d6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f238e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5e158;
  func_0x000107c61520(&UNK_10db5e158,&UNK_1105df178);
  puRam0000000112f238e8 = puVar1;
  return;
}



/* Entry: 102e79dac; end: 102e79dbb;  */

undefined8 FUN_102e79dac(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_102e79520(uVar4,uVar3,uVar1);
    func_0x000107c61574(lVar2);
  }
  return uVar4;
}



/* Entry: 102e79dbc; end: 102e79de3;  */

void FUN_102e79dbc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e79de4; end: 102e79df3;  */

undefined8 FUN_102e79de4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_50);
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    uVar3 = uStack_50;
    func_0x000104888e28(uStack_50,1,uVar1);
    func_0x000107c61170(uStack_50);
    func_0x000107c61574(lVar2);
  }
  return uVar3;
}



/* Entry: 102e79df4; end: 102e79e13;  */

void FUN_102e79df4(void)

{
  long unaff_x20;
  
  func_0x000102e79a1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      0x102e798c8);
  return;
}



/* Entry: 102e79e14; end: 102e79e1b;  */

undefined8 FUN_102e79e14(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(auStack_58,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(uVar1,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 102e79e1c; end: 102e79e3b;  */

void FUN_102e79e1c(void)

{
  long unaff_x20;
  
  func_0x000102e79a1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      FUN_102e79a98);
  return;
}



/* Entry: 102e79e3c; end: 102e79f3f;  */

undefined8 FUN_102e79e3c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000d224c(auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x10))(uVar2,uStack_68,lStack_60);
    func_0x0001000d224c(&uStack_88);
    uVar1 = uStack_88;
    func_0x000100775264(uStack_88,1,FUN_102e79f40,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(uStack_88);
    func_0x000107c61574(param_3);
    func_0x0001000834e4(auStack_80);
  }
  return uVar1;
}



/* Entry: 102e79f40; end: 102e79fb7;  */

void FUN_102e79f40(ulong *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)*param_1;
  puVar1 = puVar3;
  func_0x000107c49eac();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000107c43c94();
    func_0x000107c307b4();
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x11;
    puVar3 = puVar1;
  }
  FUN_102e79d6c();
  func_0x000107c613f8(&UNK_1105df178,puVar3,0,0);
  *puVar3 = uVar2;
  func_0x000107c61654();
  return;
}



/* Entry: 102e79fb8; end: 102e7a013;  */

void FUN_102e79fb8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  func_0x000107c4a5c8();
  if (((ulong)puVar1 & 1) != 0) {
    FUN_102e79d6c();
    func_0x000107c613f8(&UNK_1105df178,puVar1,0,0);
    *puVar1 = 0x12;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 102e7a014; end: 102e7a0a3;  */

undefined1  [16] FUN_102e7a014(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_40);
  lVar3 = lStack_40;
  lVar2 = lStack_40;
  func_0x000107c3e5fc();
  func_0x000107c615e8(lVar3);
  if (-1 < lVar2) {
    func_0x0001000d224c(&lStack_40);
    lVar3 = lStack_40;
    func_0x000107c614f0(lStack_40);
    (**(code **)(*(long *)(lStack_38 + 0x18) + 0x20))();
    func_0x000107c615e8(lStack_40);
    auVar4._8_8_ = lVar3;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7a0a4);
  (*pcVar1)();
}



/* Entry: 102e7a0a4; end: 102e7a13b;  */

undefined8
FUN_102e7a0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x10))(param_4,param_5,param_1,param_2,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return param_4;
}



/* Entry: 102e7a13c; end: 102e7a193;  */

void FUN_102e7a13c(char *param_1)

{
  if (*param_1 != '\x01') {
    FUN_102e79d6c();
    func_0x000107c613f8(&UNK_1105df178,param_1,0,0);
    *param_1 = '\x13';
    func_0x000107c61654();
  }
  return;
}



/* Entry: 102e7a194; end: 102e7a25f;  */

void FUN_102e7a194(undefined8 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar3 = *(undefined1 **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined1 *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_2) {
      puVar3 = param_2;
    }
    func_0x000107c60480();
  }
  if (puVar3 == (undefined1 *)0x0) {
    FUN_102e79d6c();
    func_0x000107c613f8(&UNK_1105df178,param_2,0,0);
    *param_2 = 7;
    func_0x000107c61654();
  }
  else {
    if (((ulong)param_2 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7a260);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar2 = 0;
      func_0x000100fb0ba0(0,param_2);
    }
    *param_1 = uVar2;
  }
  return;
}



/* Entry: 102e7a260; end: 102e7a277;  */

void FUN_102e7a260(void)

{
  long unaff_x20;
  
  FUN_102e7a194(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e7a278; end: 102e7a37f;  */

undefined8 FUN_102e7a278(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = *param_1;
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = uVar4;
  (**(code **)(lStack_48 + 0x20))(uVar4,uStack_50,lStack_48);
  func_0x0001000d224c(&uStack_70);
  puVar2 = &UNK_1105df038;
  func_0x000107c613fc(&UNK_1105df038,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  func_0x000107c615f0(uVar4);
  uVar4 = 0x112f238f0;
  func_0x0001000285a8(0x112f238f0,&UNK_10db5e0a0);
  uVar3 = uStack_70;
  func_0x000100775264(uStack_70,1,FUN_102e7ae88,puVar2,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  return uVar3;
}



/* Entry: 102e7a380; end: 102e7a397;  */

void FUN_102e7a380(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e7a278(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e7a398; end: 102e7a4a7;  */

undefined8 FUN_102e7a398(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar1 = uVar4;
  (**(code **)(lStack_58 + 0x28))(uVar4,uStack_60,lStack_58);
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_1105df010;
  func_0x000107c613fc(&UNK_1105df010,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  func_0x000107c615f0(uVar4);
  uVar3 = 0x112f238f8;
  func_0x0001000285a8(0x112f238f8,&UNK_10db5e0a8);
  uVar4 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_102e7ae48,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_78);
  return uVar4;
}



/* Entry: 102e7a4a8; end: 102e7a4bf;  */

void FUN_102e7a4a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e7a398(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e7a4c0; end: 102e7a547;  */

undefined8 FUN_102e7a4c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_102e7a560(uVar2,uVar1);
    func_0x000107c61574(param_2);
  }
  return uVar2;
}



/* Entry: 102e7a548; end: 102e7a55f;  */

void FUN_102e7a548(void)

{
  FUN_102e7a4c0();
  return;
}



/* Entry: 102e7a560; end: 102e7a6c3;  */

undefined8 FUN_102e7a560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112f23900,&UNK_10db5e0b0);
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = &UNK_1105def48;
  func_0x000107c613fc(&UNK_1105def48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(param_1);
  uVar4 = uVar3;
  func_0x000104889654(uVar3,1,FUN_102e7a91c,puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_58);
  puVar1 = &UNK_1105deca0;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1105def70;
  func_0x000107c613fc(&UNK_1105def70,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uVar3 = uStack_58;
  func_0x0001048898b8(uStack_58,1,FUN_102e7a9cc,puVar2,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar2);
  return uVar3;
}



/* Entry: 102e7a6c4; end: 102e7a76f;  */

void FUN_102e7a6c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plStack_40;
  long lStack_38;
  
  lVar2 = *param_1;
  if (0 < lVar2) {
    func_0x0001000d224c(&plStack_40);
    plVar1 = plStack_40;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lStack_38 + 0x18) + 0x20))();
    func_0x000107c615e8();
    param_1 = plStack_40;
    if ((long)plVar1 <= lVar2) {
      return;
    }
  }
  FUN_102e79d6c();
  func_0x000107c613f8(&UNK_1105df178,param_1,0,0);
  *(undefined1 *)param_1 = 0x10;
  func_0x000107c61654();
  return;
}



/* Entry: 102e7a770; end: 102e7a787;  */

void FUN_102e7a770(void)

{
  FUN_102e7a6c4();
  return;
}



/* Entry: 102e7a788; end: 102e7a91b;  */

void FUN_102e7a788(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000d224c(&lStack_60);
  lVar1 = lStack_60;
  if (lStack_60 == 0) {
    FUN_102e79d6c();
    func_0x000107c613f8(&UNK_1105df178,param_4,0,0);
    *param_4 = 0;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61168(PTR_PTR_1126b0010);
    func_0x000107c5de00();
    lStack_60 = 0;
    puVar2 = param_5;
    uVar4 = param_2;
    func_0x000109126b30(param_5,&lStack_60);
    lVar3 = lStack_60;
    if (lStack_60 == 0) {
      if (0.0 < (float)uVar4) {
        func_0x000107c5dd80(param_5);
        lVar3 = lVar1;
        func_0x000107c3ea78(param_2,param_3,uVar4);
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        *param_1 = lVar3;
        *(float *)(param_1 + 1) = (float)uVar4;
        goto LAB_102e7a8dc;
      }
      FUN_102e79d6c();
      func_0x000107c613f8(&UNK_1105df178,puVar2,0,0);
      *puVar2 = 9;
      func_0x000107c61654();
    }
    else {
      func_0x000107c61654();
      func_0x000107c61174(lVar3);
    }
    func_0x000107c615e8(lVar1);
  }
LAB_102e7a8dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  FUN_102e7a788(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
  return;
}



/* Entry: 102e7a91c; end: 102e7a933;  */

void FUN_102e7a91c(void)

{
  long unaff_x20;
  
  FUN_102e7a788(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e7a934; end: 102e7a9cb;  */

undefined8 FUN_102e7a934(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = *(undefined4 *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_102e7a9e4(uVar2,uVar1,param_3);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 102e7a9cc; end: 102e7a9e3;  */

void FUN_102e7a9cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e7a934(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e7a9e4; end: 102e7ab4f;  */

undefined8 FUN_102e7a9e4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  
  func_0x0001000285a8(0x112e2aa08,&UNK_10da13438);
  func_0x0001000d224c(&uStack_68);
  uVar4 = uStack_68;
  puVar1 = &UNK_1105def98;
  func_0x000107c613fc(&UNK_1105def98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  uVar2 = uVar4;
  func_0x000104889654(uVar4,1,FUN_102e7abe8,puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  puVar1 = &UNK_1105deca0;
  func_0x000107c613fc(&UNK_1105deca0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar3 = &UNK_1105defc0;
  func_0x000107c613fc(&UNK_1105defc0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined4 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  uVar4 = uStack_68;
  func_0x0001048898b8(uStack_68,1,FUN_102e7ad2c,puVar3,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar3);
  return uVar4;
}



/* Entry: 102e7ab50; end: 102e7abe7;  */

void FUN_102e7ab50(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = param_2;
  func_0x000107c5bd00();
  if (puVar1 + -1 < (undefined1 *)0x3) {
    *param_1 = 0;
  }
  else {
    if (puVar1 == (undefined1 *)0x0) {
      func_0x000107c5c73c();
      if (param_2 != (undefined1 *)0x0) {
        *param_1 = (long)param_2;
        return;
      }
      uVar2 = 10;
      puVar1 = (undefined1 *)0x0;
    }
    else {
      uVar2 = 0xc;
    }
    FUN_102e79d6c();
    func_0x000107c613f8(&UNK_1105df178,puVar1,0,0);
    *puVar1 = uVar2;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 102e7abe8; end: 102e7abff;  */

void FUN_102e7abe8(void)

{
  long unaff_x20;
  
  FUN_102e7ab50(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e7ac00; end: 102e7ad2b;  */

void FUN_102e7ac00(undefined4 param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 auStack_78 [3];
  undefined8 uStack_58;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112e2e9c8,&UNK_10da17650);
    auStack_78[0] = 0;
    func_0x000104888f7c(auStack_78);
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      func_0x0001000285a8(0x112e2e9c8,&UNK_10da17650);
      func_0x0001000d224c(&uStack_58);
      puVar1 = &UNK_1105defe8;
      func_0x000107c613fc(&UNK_1105defe8,0x28,7);
      *(undefined4 *)(puVar1 + 0x10) = param_1;
      *(long *)(puVar1 + 0x18) = lVar2;
      *(undefined8 *)(puVar1 + 0x20) = param_4;
      func_0x000104889654(uStack_58,1,FUN_102e7ae2c,puVar1);
      func_0x000107c61170(uStack_58);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(param_3);
    }
  }
  return;
}



/* Entry: 102e7ad2c; end: 102e7ad4b;  */

void FUN_102e7ad2c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e7ac00(*(undefined4 *)(unaff_x20 + 0x18),param_1,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102e7ad4c; end: 102e7ae2b;  */

void FUN_102e7ad4c(long *param_1,float param_2,undefined1 *param_3,long param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  
  if (param_2 <= 0.0) {
    uVar2 = 9;
LAB_102e7ad94:
    FUN_102e79d6c();
    func_0x000107c613f8(&UNK_1105df178,param_3,0,0);
    *param_3 = uVar2;
    func_0x000107c61654();
  }
  else {
    if (0.0 < param_2 - (float)param_3) {
      param_2 = (param_2 - (float)param_3) / param_2;
      if (0x7f7fffff < (uint)ABS(param_2)) {
        uVar2 = 0xb;
        goto LAB_102e7ad94;
      }
      param_2 = param_2 * (float)param_4;
      if (0x7f7fffff < (uint)ABS(param_2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7ae24);
        (*pcVar1)();
      }
      if (param_2 <= -9.223373e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7ae28);
        (*pcVar1)();
      }
      if (9.223372e+18 <= param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7ae2c);
        (*pcVar1)();
      }
      if (-1 < (long)param_2) {
        *param_1 = (long)param_2;
        return;
      }
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 102e7ae2c; end: 102e7ae47;  */

void FUN_102e7ae2c(void)

{
  long unaff_x20;
  
  FUN_102e7ad4c(*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102e7ae48; end: 102e7ae87;  */

void FUN_102e7ae48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *param_2;
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar2);
  return;
}



/* Entry: 102e7ae88; end: 102e7aeab;  */

void FUN_102e7ae88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 102e7aeac; end: 102e7af7b;  */

void FUN_102e7aeac(ulong param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puStack_40;
  long lStack_38;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480();
  }
  if (1 < (long)uVar1) {
    func_0x0001000d224c(&puStack_40);
    puVar2 = puStack_40;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lStack_38 + 0x18) + 0x40))();
    func_0x000107c615e8();
    if (((ulong)puVar2 & 1) == 0) {
      FUN_102e79d6c();
      func_0x000107c613f8(&UNK_1105df178,puStack_40,0,0);
      *puStack_40 = 0xe;
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 102e7af7c; end: 102e7af93;  */

void FUN_102e7af7c(void)

{
  FUN_102e79e3c();
  return;
}



/* Entry: 102e7af94; end: 102e7afcf;  */

void FUN_102e7af94(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e7afd0; end: 102e7afe7;  */

void FUN_102e7afd0(void)

{
  long unaff_x20;
  
  FUN_102e7aeac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102e7afe8; end: 102e7afef;  */

undefined1  [16] FUN_102e7afe8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_40);
  lVar3 = lStack_40;
  lVar2 = lStack_40;
  func_0x000107c3e5fc();
  func_0x000107c615e8(lVar3);
  if (-1 < lVar2) {
    func_0x0001000d224c(&lStack_40);
    lVar3 = lStack_40;
    func_0x000107c614f0(lStack_40);
    (**(code **)(*(long *)(lStack_38 + 0x18) + 0x20))();
    func_0x000107c615e8(lStack_40);
    auVar4._8_8_ = lVar3;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e7a0a4);
  (*pcVar1)();
}



/* Entry: 102e7aff0; end: 102e7b027;  */

void FUN_102e7aff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 102e7b028; end: 102e7b057;  */

void FUN_102e7b028(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000101ddafcc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e7b058; end: 102e7b067;  */

undefined8 FUN_102e7b058(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(auStack_78,param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),uVar1,uVar2,
                      *(undefined1 *)(unaff_x20 + 0x28));
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x10))(uVar1,uVar2,param_1,param_2,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return uVar1;
}



/* Entry: 102e7b068; end: 102e7b097;  */

void FUN_102e7b068(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}


