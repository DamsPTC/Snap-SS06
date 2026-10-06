/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088abd48; end: 1088abdaf;  */

undefined8 FUN_1088abd48(undefined8 param_1)

{
  func_0x0001088abed8(param_1);
  return param_1;
}



/* Entry: 1088abdb0; end: 1088abe3f;  */

void FUN_1088abdb0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1088abf70(auStack_38);
  puVar1 = auStack_38;
  func_0x00010889aad4();
  puVar2 = auStack_38;
  puStack_40 = puVar1;
  func_0x00010889aaf8();
  puStack_48 = puVar2;
  FUN_1088abff0(auStack_50,puStack_40);
  func_0x0001088ac02c(auStack_58,puStack_48);
  func_0x0001088ac068(param_1,auStack_50,auStack_58);
  func_0x0001088ac0ac(auStack_58);
  func_0x0001088a9510(auStack_50);
  func_0x00010888de58(auStack_38);
  return;
}



/* Entry: 1088abe40; end: 1088abea3;  */

undefined1  [16] FUN_1088abe40(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x0001088ac848(auStack_20,param_1,param_2);
  return auStack_20;
}



/* Entry: 1088abea4; end: 1088abf6f;  */

undefined8 FUN_1088abea4(undefined8 param_1)

{
  FUN_1088acb5c(param_1);
  return param_1;
}



/* Entry: 1088abf70; end: 1088abfef;  */

void FUN_1088abf70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xe0;
  uStack_28 = param_1;
  __Znwm();
  func_0x0001088ac0e0(uVar1);
  uStack_30 = uVar1;
  func_0x00010888de8c(auStack_38,uVar1);
  func_0x00010888dec8(auStack_48,uStack_30);
  func_0x00010888df04(param_1,auStack_38,auStack_48);
  func_0x000107c27f98(auStack_48);
  func_0x000107c27f9c(auStack_38);
  return;
}



/* Entry: 1088abff0; end: 1088ac353;  */

undefined8 FUN_1088abff0(undefined8 param_1,undefined8 param_2)

{
  FUN_1088ac560(param_1,param_2);
  return param_1;
}



/* Entry: 1088ac354; end: 1088ac36f;  */

void FUN_1088ac354(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 1088ac370; end: 1088ac52b;  */

undefined8 * FUN_1088ac370(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a80530;
  func_0x0001088ac3c0(param_1 + 0x13);
  func_0x000107c31514(param_1);
  return param_1;
}



/* Entry: 1088ac52c; end: 1088ac55f;  */

long FUN_1088ac52c(long param_1)

{
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    FUN_1088a95ac();
  }
  return param_1;
}



/* Entry: 1088ac560; end: 1088ac95f;  */

undefined8 FUN_1088ac560(undefined8 param_1,undefined8 param_2)

{
  func_0x00010888e280(param_1,param_2);
  return param_1;
}



/* Entry: 1088ac960; end: 1088ac99f;  */

void FUN_1088ac960(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088ac9a0; end: 1088aca13;  */

void FUN_1088ac9a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_1088aca14(param_2);
  func_0x0001088aca38(uStack_30);
  func_0x0001088aca5c();
  uStack_3c = 0;
  func_0x0001088aca88(uStack_38);
  func_0x0001088acab0(uStack_30);
  func_0x0001088acad8();
  uStack_40 = 0;
  func_0x000107c2a220(&uStack_3c,&uStack_40);
  return;
}



/* Entry: 1088aca14; end: 1088acb03;  */

void FUN_1088aca14(undefined8 param_1)

{
  FUN_1088acb04(param_1);
  return;
}



/* Entry: 1088acb04; end: 1088acb5b;  */

undefined8 FUN_1088acb04(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088acb5c; end: 1088accdf;  */

undefined8 FUN_1088acb5c(undefined8 param_1)

{
  func_0x0001088acb90(param_1);
  return param_1;
}



/* Entry: 1088acce0; end: 1088acd0b;  */

void FUN_1088acce0(long param_1)

{
  func_0x0001088acd48(param_1 + 8);
  return;
}



/* Entry: 1088acd0c; end: 1088aceef;  */

undefined8 FUN_1088acd0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1088acf48(param_1,param_2);
  return param_1;
}



/* Entry: 1088acef0; end: 1088acf47;  */

void FUN_1088acef0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088acf1c(param_1,param_2);
  return;
}



/* Entry: 1088acf48; end: 1088ad2af;  */

undefined8 FUN_1088acf48(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088acf84(param_1,param_2);
  return param_1;
}



/* Entry: 1088ad2b0; end: 1088ad2fb;  */

void FUN_1088ad2b0(undefined8 param_1)

{
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1088ab888(param_1);
  FUN_1088ab598(param_1);
  FUN_1088ad2fc(&uStack_29,param_1);
  return;
}



/* Entry: 1088ad2fc; end: 1088ad383;  */

void FUN_1088ad2fc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088ad324(param_2);
  return;
}



/* Entry: 1088ad384; end: 1088ad397;  */

undefined8 FUN_1088ad384(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088ad398; end: 1088ad407;  */

void FUN_1088ad398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001088ad3c8(param_2,param_3);
  return;
}



/* Entry: 1088ad408; end: 1088ad43b;  */

undefined8 FUN_1088ad408(undefined8 param_1)

{
  func_0x0001088ad44c(param_1);
  return param_1;
}



/* Entry: 1088ad43c; end: 1088ad47b;  */

void FUN_1088ad43c(void)

{
  return;
}



/* Entry: 1088ad47c; end: 1088ad4af;  */

undefined8 FUN_1088ad47c(undefined8 param_1)

{
  FUN_1088ad4b0(param_1);
  return param_1;
}



/* Entry: 1088ad4b0; end: 1088ad4e3;  */

void FUN_1088ad4b0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001088ad350(param_1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  }
  return;
}



/* Entry: 1088ad4e4; end: 1088ad517;  */

undefined8 FUN_1088ad4e4(undefined8 param_1)

{
  FUN_1088ad518(param_1);
  return param_1;
}



/* Entry: 1088ad518; end: 1088ad52b;  */

undefined8 FUN_1088ad518(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088ad52c; end: 1088ad5b7;  */

long FUN_1088ad52c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 1088ad5b8; end: 1088ad663;  */

undefined8 FUN_1088ad5b8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088ad5f4(param_1,param_2);
  return param_1;
}



/* Entry: 1088ad664; end: 1088ad6b7;  */

void FUN_1088ad664(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c2a1dc(auStack_38,param_2);
  FUN_1088abff0(param_1,auStack_38);
  func_0x000107c27f9c(auStack_38);
  return;
}



/* Entry: 1088ad6b8; end: 1088ad717;  */

undefined8 FUN_1088ad6b8(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  func_0x0001088ad8d4(auStack_18);
  return param_1;
}



/* Entry: 1088ad718; end: 1088ad80b;  */

void FUN_1088ad718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long alStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 2;
  uStack_38 = param_3;
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c28874(alStack_58);
  plVar1 = alStack_58;
  FUN_1088948d8();
  plVar2 = alStack_58;
  plStack_60 = plVar1;
  func_0x0001088948fc();
  plVar1 = alStack_58;
  plStack_68 = plVar2;
  func_0x000108894924();
  plStack_70 = plVar1;
  func_0x000107c28878(auStack_78,2);
  FUN_10889494c(*plStack_70 + 0x18,auStack_78);
  func_0x000108894998(auStack_78);
  *(undefined8 *)(*plStack_70 + 8) = 2;
  func_0x000107c2887c(*plStack_70,plStack_68);
  FUN_1088ad938(*plStack_70,uStack_30,uStack_38);
  func_0x00010888e0d4(auStack_80,plStack_60);
  func_0x0001088949cc(param_1,auStack_80);
  func_0x000107c27f9c(auStack_80);
  func_0x000108894a08(alStack_58);
  return;
}



/* Entry: 1088ad80c; end: 1088ad907;  */

void FUN_1088ad80c(long param_1)

{
  FUN_10888e360(param_1 + 8);
  func_0x0001088acd88();
  func_0x000107c27fa0(param_1 + 8,0);
  return;
}



/* Entry: 1088ad908; end: 1088ad937;  */

void FUN_1088ad908(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1088ad938; end: 1088ad997;  */

void FUN_1088ad938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c28894(param_1,0,param_2);
  func_0x000107c28898(param_1,1,param_3);
  return;
}



/* Entry: 1088ad998; end: 1088ad9cb;  */

undefined8 FUN_1088ad998(undefined8 param_1)

{
  func_0x000107c27fb8(param_1);
  return param_1;
}



/* Entry: 1088ad9cc; end: 1088add43;  */

void FUN_1088ad9cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  undefined1 auStack_90 [31];
  undefined1 uStack_71;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = param_1 + 4;
  plVar2 = param_1 + 5;
  puVar11 = param_1 + 6;
  puVar3 = param_1 + 7;
  uVar4 = (long)param_1 + 0x4b;
  puVar5 = param_1 + 2;
  puStack_70 = param_1;
  if (*(byte *)(param_1 + 9) == 2) {
    cVar13 = '\0';
  }
  else {
    if ((*(byte *)(param_1 + 9) & 3) == 0) {
      func_0x000107c2a19c((long)param_1 + 0x49);
      FUN_1088ad718(puVar11,param_1[8] + 0x38,puVar1);
      FUN_108894808(plVar2,puVar11);
      plVar7 = plVar2;
      func_0x000107c2a1a4();
      if (((ulong)plVar7 & 1) == 0) {
        *(undefined1 *)(param_1 + 9) = 1;
        puVar8 = param_1;
        FUN_1088ad6b8();
        ppuVar9 = &puStack_68;
        puStack_68 = puVar8;
        func_0x0001088ad6e8(ppuVar9);
        plVar7 = plVar2;
        func_0x000107c28830(plVar2,ppuVar9);
        if (((ulong)plVar7 & 1) != 0) {
          cVar13 = -1;
          goto LAB_1088adab0;
        }
      }
    }
    else {
      cVar13 = '\0';
LAB_1088adab0:
      if (cVar13 != '\0') {
        return;
      }
    }
    plVar7 = plVar2;
    func_0x000107c28870();
    lVar14 = *plVar7;
    FUN_108894834(plVar2);
    func_0x000108894868(puVar11);
    *(byte *)((long)param_1 + 0x4a) = lVar14 == 0;
    if ((*(byte *)((long)param_1 + 0x4a) & 1) != 0) {
      lVar14 = param_1[8];
      uStack_71 = 1;
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_90,&UNK_10f4afc25,lVar14 + 0x20);
      func_0x00010889489c(uVar10,auStack_90);
      uStack_71 = 0;
      ___cxa_throw(uVar10,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1088add44);
      (*pcVar6)();
    }
    func_0x0001088a93f8(puVar3,puVar1);
    puVar11 = puVar3;
    func_0x000107c2a1a4();
    if (((ulong)puVar11 & 1) != 0) goto LAB_1088adc0c;
    *(undefined1 *)(param_1 + 9) = 2;
    puVar11 = param_1;
    FUN_1088ad6b8();
    ppuVar9 = &puStack_60;
    puStack_60 = puVar11;
    func_0x0001088ad6e8(ppuVar9);
    puVar11 = puVar3;
    func_0x000107c28830(puVar3,ppuVar9);
    if (((ulong)puVar11 & 1) == 0) goto LAB_1088adc0c;
    cVar13 = -1;
  }
  if (cVar13 != '\0') {
    return;
  }
LAB_1088adc0c:
  puVar11 = puVar3;
  FUN_1088a9420(puVar3);
  FUN_1088ad80c(puVar5,puVar11);
  func_0x0001088a94dc(puVar3);
  FUN_108885f88(puVar5);
  uVar12 = uVar4;
  func_0x000107c2a18c();
  if ((uVar12 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 9) = 3;
    FUN_1088ad6b8();
    ppuVar9 = &puStack_58;
    puStack_58 = param_1;
    func_0x0001088ad6e8(ppuVar9);
    FUN_108885f40(uVar4,ppuVar9);
  }
  else {
    func_0x000107c2a19c(uVar4);
    func_0x0001088ad858(puVar5);
    func_0x0001088a9510(puVar1);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088add44; end: 1088ade5b;  */

void FUN_1088add44(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x48);
  if (bVar1 == 2) {
    func_0x0001088a94dc(param_1 + 0x38);
  }
  else if ((((bVar1 ^ 0xff) & 3) != 0) && ((bVar1 & 3) != 0)) {
    FUN_108894834(param_1 + 0x28);
    func_0x000108894868(param_1 + 0x30);
  }
  func_0x0001088ad858(param_1 + 0x10);
  func_0x0001088a9510(param_1 + 0x20);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088ade5c; end: 1088ae2d3;  */

void FUN_1088ade5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  char cVar18;
  long lVar19;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [47];
  byte bStack_79;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = param_1 + 0x11;
  puVar2 = param_1 + 4;
  puVar14 = param_1 + 0x13;
  puVar3 = param_1 + 0x14;
  puVar4 = param_1 + 0x15;
  puVar5 = param_1 + 0xc;
  uVar6 = (long)param_1 + 0xba;
  puVar7 = param_1 + 2;
  puStack_78 = param_1;
  if (*(char *)(param_1 + 0x17) == '\0') {
    func_0x000107c2a19c((long)param_1 + 0xb9);
    FUN_1088a8ed4(puVar1);
    plVar11 = (long *)(param_1[0x16] + 0xe8);
    FUN_1088a8f10();
    FUN_1088a8f28(auStack_b8,puVar1);
    (**(code **)(*plVar11 + 0x48))(plVar11,auStack_b8);
    lVar19 = param_1[0x16];
    func_0x0001088a8f64(auStack_b8);
    puVar12 = puVar1;
    FUN_1088a93b8(puVar1);
    FUN_1088a93d0(puVar4,puVar12 + 1);
    FUN_1088a8f98(puVar3,lVar19 + 0x88,puVar4);
    func_0x0001088a93f8(puVar14,puVar3);
    puVar12 = puVar14;
    func_0x000107c2a1a4();
    if (((ulong)puVar12 & 1) != 0) goto LAB_1088adfd8;
    *(undefined1 *)(param_1 + 0x17) = 1;
    puVar12 = param_1;
    FUN_1088a8e74();
    ppuVar13 = &puStack_70;
    puStack_70 = puVar12;
    func_0x0001088a8ea4(ppuVar13);
    puVar12 = puVar14;
    func_0x000107c28830(puVar14,ppuVar13);
    if (((ulong)puVar12 & 1) == 0) goto LAB_1088adfd8;
    cVar18 = -1;
  }
  else {
    cVar18 = '\0';
  }
  if (cVar18 != '\0') {
    return;
  }
LAB_1088adfd8:
  puVar12 = puVar14;
  FUN_1088a9420(puVar14);
  FUN_1088a94a0(puVar2,puVar12);
  func_0x0001088a94dc(puVar14);
  func_0x0001088a9510(puVar3);
  func_0x0001088a9510(puVar4);
  plVar11 = (long *)(param_1[0x16] + 400);
  FUN_108885c24();
  FUN_108885a44(auStack_a8,0x231);
  puVar14 = puVar2;
  FUN_1088a9544();
  uVar8 = 0x30011;
  if ((int)puVar14 == 0) {
    uVar8 = 0x30012;
  }
  puVar15 = auStack_a8;
  FUN_108659af8(puVar15,uVar8);
  FUN_10888c5f4(puVar5,puVar15);
  (**(code **)(*plVar11 + 0x50))(plVar11,puVar5);
  FUN_108657130(puVar5);
  FUN_108657130(auStack_a8);
  puVar14 = puVar2;
  FUN_1088a9544();
  if (((ulong)puVar14 & 1) != 0) {
    puVar14 = puVar2;
    func_0x0001088a956c();
    uVar10 = (uint)puVar14;
    func_0x000107c28078();
    if (((uVar10 ^ 1) & 1) != 0) {
      plVar11 = (long *)(param_1[0x16] + 400);
      FUN_108885c24();
      (**(code **)(*plVar11 + 0x48))();
      uVar16 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_10888a39c(uVar16,&UNK_10f4ea085);
      ___cxa_throw(uVar16,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1088ae2d4);
      (*pcVar9)();
    }
  }
  puVar14 = puVar2;
  FUN_1088a9590();
  bStack_79 = (byte)puVar14 & 1;
  FUN_108653be8(puVar7,&bStack_79);
  FUN_1088a95ac(puVar2);
  func_0x0001088a95e0(puVar1);
  FUN_108885f88(puVar7);
  uVar17 = uVar6;
  func_0x000107c2a18c();
  if ((uVar17 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x17) = 2;
    FUN_1088a8e74();
    ppuVar13 = &puStack_68;
    puStack_68 = param_1;
    func_0x0001088a8ea4(ppuVar13);
    FUN_108885f40(uVar6,ppuVar13);
  }
  else {
    func_0x000107c2a19c(uVar6);
    func_0x0001088a9614(puVar7);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088ae2d4; end: 1088ae3cf;  */

void FUN_1088ae2d4(long param_1)

{
  if ((*(byte *)(param_1 + 0xb8) != 2) && ((*(byte *)(param_1 + 0xb8) & 3) != 0)) {
    func_0x0001088a94dc(param_1 + 0x98);
    func_0x0001088a9510(param_1 + 0xa0);
    func_0x0001088a9510(param_1 + 0xa8);
    func_0x0001088a95e0(param_1 + 0x88);
  }
  func_0x0001088a9614(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088ae3d0; end: 1088aeedb;  */

void FUN_1088ae3d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  byte bVar14;
  code *pcVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 **ppuVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  ulong uVar26;
  char cVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [24];
  long *plStack_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [60];
  undefined4 uStack_d4;
  byte bStack_cd;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined4 auStack_b8 [2];
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long alStack_88 [3];
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = param_1 + 0x16;
  puVar1 = param_1 + 0x17;
  puVar2 = param_1 + 0x18;
  plVar22 = param_1 + 0x19;
  puVar3 = param_1 + 4;
  puVar4 = param_1 + 0x1a;
  plVar5 = param_1 + 0xc;
  puVar6 = param_1 + 0xe;
  puVar24 = param_1 + 0x21;
  puVar7 = param_1 + 0x1b;
  puVar8 = param_1 + 0x1c;
  puVar9 = param_1 + 0x1d;
  pbVar10 = (byte *)(param_1 + 0x1e);
  puVar11 = param_1 + 0x1f;
  uVar12 = (long)param_1 + 0x114;
  puVar13 = param_1 + 2;
  bVar14 = *(byte *)(param_1 + 0x22);
  puStack_b0 = param_1;
  if (bVar14 == 0) {
    func_0x000107c2a19c((long)param_1 + 0x112);
    if ((*(byte *)((long)param_1 + 0x111) & 1) != 0) {
      lVar29 = param_1[0x20];
      plVar16 = (long *)(lVar29 + 0x1b0);
      FUN_108889444();
      (**(code **)(*plVar16 + 0x18))(puVar2);
      func_0x000107c2883c(puVar1,lVar29 + 0x88,puVar2);
      func_0x000107c2a1a0(puVar19,puVar1);
      puVar17 = puVar19;
      func_0x000107c2a1a4();
      if (((ulong)puVar17 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x22) = 1;
        puVar17 = param_1;
        FUN_10888cdb8();
        ppuVar18 = &puStack_a8;
        puStack_a8 = puVar17;
        func_0x00010888cde8(ppuVar18);
        puVar17 = puVar19;
        func_0x000107c28830(puVar19,ppuVar18);
        if (((ulong)puVar17 & 1) != 0) {
          cVar27 = -1;
          goto LAB_1088ae57c;
        }
      }
      goto LAB_1088ae5a8;
    }
LAB_1088ae600:
    *plVar22 = param_1[0x14];
    puVar19 = puVar3;
    FUN_10865ec40();
    FUN_1088a859c();
    lVar29 = param_1[0x20] + 0x5c;
    lVar20 = lVar29;
    func_0x00010888cb2c(lVar29);
    func_0x00010888cb50(lVar29);
    FUN_10888cb78(auStack_198,lVar20,lVar29);
    param_1[0x12] = puVar19;
    param_1[0x13] = auStack_198;
    lVar20 = param_1[0x12];
    lVar29 = lVar20 + 0x28;
    lVar30 = param_1[0x13];
    func_0x00010888ec74();
    FUN_1088ab020(lVar29,lVar30,lVar20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_198);
    puVar19 = puVar3;
    FUN_1088a859c();
    func_0x0001088a85c8();
    func_0x0001088a85f4();
    *puVar4 = puVar19;
    func_0x0001088a8618(*puVar4,*(undefined8 *)(param_1[0x14] + 0x158));
    func_0x000107c29ee4(auStack_180,*plVar22);
    func_0x0001088a8644(*puVar4);
    func_0x000107c287d0();
    func_0x0001088bf334(auStack_180);
    uVar28 = param_1[0x15];
    uStack_160 = uVar28;
    FUN_108889688();
    uVar21 = uStack_160;
    uStack_158 = uVar28;
    func_0x0001088896cc();
    uStack_150 = uVar21;
    while( true ) {
      puVar19 = &uStack_158;
      func_0x000108889710(puVar19,&uStack_150);
      if ((((uint)puVar19 ^ 1) & 1) == 0) break;
      puVar19 = &uStack_158;
      FUN_108889758();
      uVar21 = *puVar4;
      puStack_148 = puVar19;
      func_0x0001088a8698(uVar21);
      puVar19 = puStack_148 + 4;
      func_0x00010888996c();
      FUN_108767594(uVar21,*puVar19);
      FUN_10888a290(&uStack_158);
    }
    FUN_1086e5330(plVar5,param_1[0x20] + 0x1a0);
    plVar16 = plVar5;
    FUN_10888a36c();
    if (((ulong)plVar16 & 1) == 0) {
      uVar21 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_10888a39c(uVar21,&UNK_10f4ea037);
      ___cxa_throw(uVar21,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1088aee78);
      (*pcVar15)();
    }
    FUN_1086708f8(puVar6);
    plVar16 = plVar5;
    FUN_10888a3d8();
    plStack_128 = alStack_88;
    func_0x000107c2a1c0(alStack_88,*plVar22);
    param_1[0x10] = alStack_88;
    param_1[0x11] = 1;
    FUN_10888a3f0(auStack_140,param_1[0x10],param_1[0x11]);
    FUN_10888a424(auStack_120,puVar6);
    func_0x00010888a460(auStack_110);
    (**(code **)(*plVar16 + 0x88))(plVar16,puVar3,auStack_140,auStack_120,auStack_110);
    func_0x00010888a494(auStack_110);
    func_0x00010888a4c8(auStack_120);
    func_0x00010888a4fc(auStack_140);
    plVar22 = alStack_70;
    do {
      plVar22 = plVar22 + -3;
      func_0x000108888464(plVar22);
    } while (plVar22 != alStack_88);
    lVar29 = param_1[0x20];
    puVar19 = puVar6;
    FUN_10888a530(puVar6);
    FUN_10888a548(puVar9,puVar19 + 1);
    FUN_108851798(puVar8,lVar29 + 0x88,puVar9);
    func_0x00010888a574(puVar7,puVar8);
    puVar19 = puVar7;
    func_0x000107c2a1a4();
    if (((ulong)puVar19 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x22) = 2;
      puVar19 = param_1;
      FUN_10888cdb8();
      ppuVar18 = &puStack_a0;
      puStack_a0 = puVar19;
      func_0x00010888cde8(ppuVar18);
      puVar19 = puVar7;
      func_0x000107c28830(puVar7,ppuVar18);
      if (((ulong)puVar19 & 1) != 0) {
        cVar27 = -1;
        goto LAB_1088ae9fc;
      }
    }
LAB_1088aeac4:
    puVar19 = puVar7;
    func_0x000107c28a1c();
    *(undefined4 *)puVar24 = *(undefined4 *)puVar19;
    *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)((long)puVar19 + 4);
    FUN_10888a5a0(puVar7);
    func_0x00010888a5d4(puVar8);
    func_0x00010888a5d4(puVar9);
    uStack_d4 = 4;
    puVar19 = puVar24;
    FUN_10888a608(puVar24,&uStack_d4);
    if (((ulong)puVar19 & 1) != 0) {
      plVar22 = (long *)(param_1[0x20] + 400);
      FUN_108885c24();
      (**(code **)(*plVar22 + 0x48))();
      FUN_1088a86c4(puVar11,param_1[0x20]);
      FUN_1088a8be4(pbVar10,puVar11);
      pbVar23 = pbVar10;
      func_0x000107c2a1a4();
      if (((ulong)pbVar23 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x22) = 3;
        puVar19 = param_1;
        FUN_10888cdb8();
        ppuVar18 = &puStack_98;
        puStack_98 = puVar19;
        func_0x00010888cde8(ppuVar18);
        pbVar23 = pbVar10;
        func_0x000107c28830(pbVar10,ppuVar18);
        if (((ulong)pbVar23 & 1) != 0) {
          cVar27 = -1;
          goto LAB_1088aeba8;
        }
      }
      goto LAB_1088aebfc;
    }
    uStack_c8 = 3;
    puVar19 = puVar24;
    FUN_10888a608(puVar24,&uStack_c8);
    if (((ulong)puVar19 & 1) == 0) {
      FUN_10888a660();
      if (((ulong)puVar24 & 1) == 0) {
        FUN_10888a2fc(&uStack_c0);
      }
      else {
        auStack_b8[0] = 9;
        puVar25 = auStack_b8;
        FUN_10888a67c();
        uStack_c0 = SUB84(puVar25,0);
        uStack_bc = (undefined1)((ulong)puVar25 >> 0x20);
      }
      func_0x0001088a8cc4(puVar13,&uStack_c0);
    }
    else {
      uStack_c4 = 5;
      func_0x0001088a8c78(puVar13,&uStack_c4);
    }
  }
  else {
    if ((bVar14 & 7) == 1) {
      cVar27 = '\0';
LAB_1088ae57c:
      if (cVar27 != '\0') goto LAB_1088aee28;
LAB_1088ae5a8:
      func_0x000107c28834(puVar19);
      FUN_108885f54(puVar19);
      func_0x000107c2a1ac(puVar1);
      func_0x000107c2a1ac(puVar2);
      goto LAB_1088ae600;
    }
    if ((bVar14 & 7) == 2) {
      cVar27 = '\0';
LAB_1088ae9fc:
      if (cVar27 != '\0') goto LAB_1088aee28;
      goto LAB_1088aeac4;
    }
    cVar27 = '\0';
LAB_1088aeba8:
    if (cVar27 != '\0') goto LAB_1088aee28;
LAB_1088aebfc:
    pbVar23 = pbVar10;
    FUN_1086c1de4();
    bStack_cd = *pbVar23 & 1;
    FUN_1088a8c10(pbVar10);
    func_0x0001088a8c44(puVar11);
    *(byte *)((long)param_1 + 0x113) = bStack_cd;
    uStack_cc = 0xb;
    func_0x0001088a8c78(puVar13,&uStack_cc);
  }
  func_0x00010888a6e4(puVar6);
  func_0x00010888a718(plVar5);
  FUN_1088f0578(puVar3);
  FUN_108885f88(puVar13);
  uVar26 = uVar12;
  func_0x000107c2a18c();
  if ((uVar26 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x22) = 4;
    FUN_10888cdb8();
    ppuVar18 = &puStack_90;
    puStack_90 = param_1;
    func_0x00010888cde8(ppuVar18);
    FUN_108885f40(uVar12,ppuVar18);
  }
  else {
    func_0x000107c2a19c(uVar12);
    func_0x00010888d5a4(puVar13);
    __ZdlPv(param_1);
  }
LAB_1088aee28:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - alStack_70[0] != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - alStack_70[0]);
  }
  return;
}



/* Entry: 1088aeedc; end: 1088af0cf;  */

void FUN_1088aeedc(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)(param_1 + 0x110);
  if ((bVar1 != 4) && ((bVar1 & 7) != 0)) {
    if ((bVar1 & 7) == 1) {
      FUN_108885f54(param_1 + 0xb0);
      func_0x000107c2a1ac(param_1 + 0xb8);
      func_0x000107c2a1ac(param_1 + 0xc0);
    }
    else {
      if ((bVar1 & 7) == 2) {
        FUN_10888a5a0(0,param_1 + 0xd8);
        func_0x00010888a5d4(param_1 + 0xe0);
        func_0x00010888a5d4(param_1 + 0xe8);
      }
      else {
        FUN_1088a8c10(param_1 + 0xf0);
        func_0x0001088a8c44(param_1 + 0xf8);
      }
      func_0x00010888a6e4(param_1 + 0x70);
      func_0x00010888a718(param_1 + 0x60);
      FUN_1088f0578(param_1 + 0x20);
    }
  }
  func_0x00010888d5a4(param_1 + 0x10);
  __ZdlPv(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lVar2 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lVar2);
  }
  return;
}



/* Entry: 1088af0d0; end: 1088afc0f;  */

void FUN_1088af0d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  int iVar23;
  bool bVar24;
  byte bVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 **ppuVar28;
  long *plVar29;
  undefined8 *puVar30;
  char cVar31;
  undefined8 uVar32;
  int iVar33;
  long lVar34;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar27 = param_1 + 0x84;
  puVar1 = param_1 + 0x9a;
  puVar2 = param_1 + 0x7e;
  puVar3 = param_1 + 0x9d;
  puVar4 = param_1 + 4;
  puVar5 = param_1 + 0xa0;
  puVar6 = param_1 + 0xa3;
  puVar7 = param_1 + 0x93;
  puVar8 = param_1 + 0xaf;
  puVar9 = param_1 + 0x3f;
  puVar10 = param_1 + 0xa6;
  puVar11 = param_1 + 0xa9;
  puVar12 = param_1 + 0xac;
  puVar13 = param_1 + 0xbb;
  puVar14 = param_1 + 0xb1;
  puVar15 = param_1 + 0xb2;
  puVar16 = param_1 + 0xb3;
  puVar17 = param_1 + 0xb4;
  puVar18 = param_1 + 0x89;
  puVar19 = param_1 + 0x8e;
  uVar20 = (long)param_1 + 0x5ea;
  puVar21 = param_1 + 2;
  if (*(byte *)(param_1 + 0xbd) == 2) {
    cVar31 = '\0';
    goto LAB_1088af810;
  }
  if ((*(byte *)(param_1 + 0xbd) & 3) != 0) {
    cVar31 = '\0';
    do {
      if (cVar31 != '\0') {
        return;
      }
      do {
        do {
          puVar27 = puVar14;
          FUN_1088881d4();
          *(undefined4 *)puVar13 = *(undefined4 *)puVar27;
          *(undefined4 *)((long)param_1 + 0x5dc) = *(undefined4 *)((long)puVar27 + 4);
          FUN_108888254(puVar14);
          func_0x000108888288(puVar15);
          *(undefined4 *)((long)param_1 + 0x5e4) = 5;
          puVar27 = puVar13;
          FUN_108888308(puVar13,(undefined4 *)((long)param_1 + 0x5e4));
          if (((ulong)puVar27 & 1) != 0) {
            uVar32 = param_1[0xb8];
            puVar27 = puVar4;
            FUN_1088a7674(puVar4);
            FUN_1088a7698(puVar17,uVar32,puVar27,puVar5,1);
            FUN_1088881a8(puVar16,puVar17);
            puVar27 = puVar16;
            func_0x000107c2a1a4();
            if (((ulong)puVar27 & 1) == 0) {
              *(undefined1 *)(param_1 + 0xbd) = 2;
              puVar27 = param_1;
              func_0x000107c2a194();
              ppuVar28 = &puStack_78;
              puStack_78 = puVar27;
              func_0x000107c2a198(ppuVar28);
              puVar27 = puVar16;
              func_0x000107c28830(puVar16,ppuVar28);
              if (((ulong)puVar27 & 1) != 0) {
                cVar31 = -1;
LAB_1088af810:
                if (cVar31 != '\0') {
                  return;
                }
              }
            }
            puVar27 = puVar16;
            FUN_1088881d4();
            *(undefined4 *)puVar13 = *(undefined4 *)puVar27;
            *(undefined1 *)((long)param_1 + 0x5dc) = *(undefined1 *)((long)puVar27 + 4);
            FUN_108888254(puVar16);
            func_0x000108888288(puVar17);
          }
          lVar34 = param_1[0xb8];
          puVar27 = puVar13;
          FUN_10888d028();
          bVar25 = (byte)puVar27 ^ 1;
          plVar29 = (long *)(lVar34 + 400);
          FUN_108885c24();
          FUN_108885a44(puVar18,0x22b);
          uVar22 = 0x30011;
          if ((bVar25 & 1) == 0) {
            uVar22 = 0x30012;
          }
          puVar27 = puVar18;
          FUN_108659af8(puVar18,uVar22);
          puVar30 = puVar5;
          FUN_1088882e0(puVar5);
          (**(code **)(*plVar29 + 0x58))(plVar29,puVar27,puVar30);
          FUN_108657130(puVar18);
          puVar27 = puVar4;
          FUN_1088a7674(puVar4);
          puVar30 = puVar3;
          func_0x000107c2825c();
          param_1[0xb5] = puVar30;
          FUN_1088a829c(param_1[0xb8],puVar5,puVar27,puVar11,bVar25 & 1,puVar13,param_1[0xb5]);
          do {
            plVar29 = (long *)(param_1[0xb8] + 400);
            FUN_108885c24();
            FUN_108885a44(puVar19,0x22b);
            puVar27 = puVar3;
            func_0x000107c2825c();
            param_1[0xb7] = puVar27;
            puVar27 = param_1 + 0xb7;
            FUN_1088a84ec();
            param_1[0xb6] = puVar27;
            (**(code **)(*plVar29 + 0x18))(plVar29,puVar19);
            FUN_108657130(puVar19);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar11);
            iVar33 = 0;
            do {
              func_0x00010888e928(puVar6);
              func_0x00010888e928(puVar5);
              while( true ) {
                while( true ) {
                  FUN_108889488(puVar4);
                  if (iVar33 != 0) {
                    iVar23 = iVar33 + -5;
                    if (iVar23 == 0) {
                      iVar33 = 0;
                    }
                    func_0x0001088883c8(iVar23,puVar2);
                    FUN_108681d9c(puVar1);
                    FUN_108681bac(param_1 + 0x74);
                    if (iVar33 == 0) {
                      func_0x000107c287c8(puVar21);
                      FUN_108885f88(puVar21);
                      uVar26 = uVar20;
                      func_0x000107c2a18c();
                      if ((uVar26 & 1) == 0) {
                        *param_1 = 0;
                        *(undefined1 *)(param_1 + 0xbd) = 3;
                        func_0x000107c2a194();
                        ppuVar28 = apuStack_70;
                        apuStack_70[0] = param_1;
                        func_0x000107c2a198(ppuVar28);
                        FUN_108885f40(uVar20,ppuVar28);
                        return;
                      }
                      func_0x000107c2a19c(uVar20);
                    }
                    FUN_108885f98(puVar21);
                    func_0x000108888464(param_1 + 0x97);
                    __ZdlPv(param_1);
                    return;
                  }
LAB_1088af2b0:
                  FUN_10888ce18(puVar3,1);
                  func_0x000108885a88(param_1[0xb8] + 0x180);
                  func_0x000107c29f64(puVar4);
                  puVar27 = puVar4;
                  FUN_1088894bc();
                  if (((ulong)puVar27 & 1) != 0) break;
                  iVar33 = 5;
                }
                lVar34 = param_1[0xb8];
                puVar27 = puVar4;
                FUN_1088895d4();
                puVar27 = puVar27 + 3;
                FUN_1086a6a98(puVar27,lVar34 + 0x10);
                if (((ulong)puVar27 & 1) != 0) break;
                iVar33 = 5;
              }
              FUN_10889fa84(puVar5);
              FUN_10889fa84(puVar6);
              func_0x0001088869a0(puVar7,puVar2);
              puVar27 = puVar7;
              func_0x00010888e4c0();
              if (((ulong)puVar27 & 1) == 0) {
                iVar33 = 5;
              }
              else {
                puVar27 = puVar7;
                FUN_1088882bc(puVar7);
                FUN_1088882e0();
                FUN_108681d9c(puVar1,puVar27);
                puVar27 = puVar7;
                FUN_108886a30();
                puVar30 = puVar27;
                FUN_108886a54();
                *puVar8 = puVar30;
                func_0x000108886a98();
                param_1[0xb0] = puVar27;
                while (puVar27 = puVar8, func_0x000108886adc(puVar8,param_1 + 0xb0),
                      (((uint)puVar27 ^ 1) & 1) != 0) {
                  puVar27 = puVar8;
                  FUN_108886b24(puVar8);
                  puVar30 = puVar9;
                  FUN_10889fe48(puVar9,puVar27);
                  bVar24 = false;
                  uVar26 = (long)puVar30 + 0x144;
                  *(undefined4 *)(param_1 + 0xbc) = 2;
                  func_0x0001088a72d4();
                  if ((uVar26 & 1) != 0) {
                    FUN_1088a732c(param_1 + 0xb9);
                    func_0x0001088a7360(param_1 + 0xba);
                    *(undefined1 *)((long)param_1 + 0x5d6) = 1;
                    puVar27 = puVar4;
                    FUN_1088895d4();
                    bVar25 = (char)puVar27 + 0x18;
                    FUN_1086a52c8();
                    *(byte *)((long)param_1 + 0x5d7) = bVar25 & 1;
                    plVar29 = (long *)(param_1[0xb8] + 0x1d0);
                    FUN_1088a7394();
                    (**(code **)(*plVar29 + 0x18))();
                    bVar24 = (int)plVar29 == 2;
                  }
                  if (bVar24) {
                    FUN_1088449f4(puVar10,2);
                    FUN_10888eba0(param_1 + 0x58,puVar10);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar10);
                    FUN_10889fbd4(puVar6,puVar9);
                  }
                  else {
                    FUN_10889fbd4(puVar5,puVar9);
                  }
                  func_0x00010888e95c(puVar9);
                  func_0x000108886e20(puVar8);
                }
                iVar33 = 0;
              }
              func_0x000108888394(puVar7);
            } while (iVar33 != 0);
            FUN_108848684(puVar12);
            func_0x000107c29e04(puVar11,puVar12);
            func_0x000108888464(puVar12);
            puVar27 = puVar6;
            FUN_10889fc00();
            if (((ulong)puVar27 & 1) == 0) {
              uVar32 = param_1[0xb8];
              puVar27 = puVar4;
              FUN_1088a7674(puVar4);
              FUN_1088a73ac(uVar32,puVar27,puVar6,puVar11);
              plVar29 = (long *)(param_1[0xb8] + 400);
              FUN_108885c24();
              puVar27 = puVar6;
              FUN_1088882e0(puVar6);
              (**(code **)(*plVar29 + 0x48))(plVar29,0x230,puVar27);
            }
            puVar27 = puVar5;
            FUN_10889fc00();
          } while (((ulong)puVar27 & 1) != 0);
          uVar32 = param_1[0xb8];
          puVar27 = puVar4;
          FUN_1088a7674(puVar4);
          FUN_1088a7698(puVar15,uVar32,puVar27,puVar5,0);
          FUN_1088881a8(puVar14,puVar15);
          puVar27 = puVar14;
          func_0x000107c2a1a4();
        } while (((ulong)puVar27 & 1) != 0);
        *(undefined1 *)(param_1 + 0xbd) = 1;
        puVar27 = param_1;
        func_0x000107c2a194();
        ppuVar28 = &puStack_80;
        puStack_80 = puVar27;
        func_0x000107c2a198(ppuVar28);
        puVar27 = puVar14;
        func_0x000107c28830(puVar14,ppuVar28);
      } while (((ulong)puVar27 & 1) == 0);
      cVar31 = -1;
    } while( true );
  }
  func_0x000107c2a19c((long)param_1 + 0x5e9);
  lVar34 = param_1[0xb8];
  FUN_108885a44(puVar27,0x22a);
  FUN_108681bac(param_1 + 0x74,lVar34 + 400,puVar27,1,1);
  lVar34 = param_1[0xb8];
  FUN_108657130(puVar27);
  lVar34 = lVar34 + 400;
  func_0x000108885a70(lVar34);
  FUN_108681d54(puVar1,lVar34,0x22c);
  func_0x0001088a7294(puVar2,param_1[0xb8],param_1 + 0x97);
  goto LAB_1088af2b0;
}



/* Entry: 1088afc10; end: 1088afdbf;  */

void FUN_1088afc10(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x5e8);
  if (bVar1 == 2) {
    FUN_108888254(param_1 + 0x598);
    func_0x000108888288(param_1 + 0x5a0);
  }
  else {
    if ((((bVar1 ^ 0xff) & 3) == 0) || ((bVar1 & 3) == 0)) goto LAB_1088afd80;
    FUN_108888254(param_1 + 0x588);
    func_0x000108888288(param_1 + 0x590);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(param_1 + 0x548);
  func_0x00010888e928(param_1 + 0x518);
  func_0x00010888e928(param_1 + 0x500);
  FUN_108889488(param_1 + 0x20);
  func_0x0001088883c8(param_1 + 0x3f0);
  FUN_108681d9c(param_1 + 0x4d0);
  FUN_108681bac(param_1 + 0x3a0);
LAB_1088afd80:
  FUN_108885f98(param_1 + 0x10);
  func_0x000108888464(param_1 + 0x4b8);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088afdc0; end: 1088b0043;  */

void FUN_1088afdc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  char cVar8;
  long lVar9;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar5 = param_1 + 0xe;
  puVar1 = param_1 + 0x13;
  puVar2 = param_1 + 0x14;
  uVar3 = (long)param_1 + 0xb2;
  puVar4 = param_1 + 2;
  if (*(char *)(param_1 + 0x16) == '\0') {
    func_0x000107c2a19c((long)param_1 + 0xb1);
    lVar9 = param_1[0x15];
    FUN_108885a44(puVar5,0x22d);
    FUN_108681bac(param_1 + 4,lVar9 + 400,puVar5,1,1);
    lVar9 = param_1[0x15];
    FUN_108657130(puVar5);
    FUN_1088b0f60(puVar2,lVar9 + 8);
    func_0x000107c2a1a0(puVar1,puVar2);
    puVar5 = puVar1;
    func_0x000107c2a1a4();
    if (((ulong)puVar5 & 1) != 0) goto LAB_1088aff04;
    *(undefined1 *)(param_1 + 0x16) = 1;
    puVar5 = param_1;
    func_0x000107c2a194();
    ppuVar6 = &puStack_60;
    puStack_60 = puVar5;
    func_0x000107c2a198(ppuVar6);
    puVar5 = puVar1;
    func_0x000107c28830(puVar1,ppuVar6);
    if (((ulong)puVar5 & 1) == 0) goto LAB_1088aff04;
    cVar8 = -1;
  }
  else {
    cVar8 = '\0';
  }
  if (cVar8 != '\0') {
    return;
  }
LAB_1088aff04:
  func_0x000107c28834(puVar1);
  FUN_108885f54(puVar1);
  func_0x000107c2a1ac(puVar2);
  FUN_108681bac(param_1 + 4);
  func_0x000107c287c8(puVar4);
  FUN_108885f88(puVar4);
  uVar7 = uVar3;
  func_0x000107c2a18c();
  if ((uVar7 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x16) = 2;
    func_0x000107c2a194();
    ppuVar6 = &puStack_58;
    puStack_58 = param_1;
    func_0x000107c2a198(ppuVar6);
    FUN_108885f40(uVar3,ppuVar6);
  }
  else {
    func_0x000107c2a19c(uVar3);
    FUN_108885f98(puVar4);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 1088b0044; end: 1088b012b;  */

void FUN_1088b0044(long param_1)

{
  if ((*(byte *)(param_1 + 0xb0) != 2) && ((*(byte *)(param_1 + 0xb0) & 3) != 0)) {
    FUN_108885f54(param_1 + 0x98);
    func_0x000107c2a1ac(param_1 + 0xa0);
    FUN_108681bac(param_1 + 0x20);
  }
  FUN_108885f98(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1088b012c; end: 1088b01a3;  */

void FUN_1088b012c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uStack_41;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x128;
  uStack_30 = param_2;
  lStack_28 = param_1;
  FUN_1086995ac();
  lStack_40 = lVar1;
  uStack_38 = param_2;
  FUN_1088b01a4(param_1 + 0x168,&uStack_41);
  return;
}



/* Entry: 1088b01a4; end: 1088b02c7;  */

void FUN_1088b01a4(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  ulong uStack_30;
  
  uVar2 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_1;
  func_0x0001088b1c24();
  uVar2 = uVar2 + 0x10;
  func_0x000107c314e8();
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    func_0x0001088b1c24(param_1);
    FUN_1088b1c3c(auStack_48,uVar2);
    uVar2 = param_1;
    func_0x0001088b1c24();
    func_0x00010bcd3664();
    if ((uVar2 & 1) != 0) {
      func_0x0001088b1c24(param_1);
      func_0x000107c314e4(param_1 + 0x10);
      uVar3 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_1088b1c68(uVar3);
      ___cxa_throw(uVar3,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1088b02c8);
      (*pcVar1)();
    }
    func_0x0001088b1c24(param_1);
    func_0x0001088b1cac();
    func_0x0001088b1d10(auStack_48);
    func_0x0001088b1c24(param_1);
    func_0x000107c314e4(param_1 + 0x58);
  }
  return;
}



/* Entry: 1088b02c8; end: 1088b02eb;  */

void FUN_1088b02c8(undefined8 param_1)

{
  func_0x000107c299fc(param_1);
  return;
}



/* Entry: 1088b02ec; end: 1088b07ff;  */

void FUN_1088b02ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar11 = (undefined8 *)0x90;
  __Znwm();
  *puVar11 = FUN_1088b2b38;
  puVar11[1] = FUN_1088b3000;
  uVar17 = (long)puVar11 + 0x8b;
  puVar1 = puVar11 + 7;
  pbVar2 = (byte *)(puVar11 + 0xb);
  puVar3 = puVar11 + 0xc;
  puVar4 = puVar11 + 9;
  puVar5 = puVar11 + 0xe;
  puVar6 = puVar11 + 0xf;
  puVar7 = puVar11 + 4;
  uVar8 = (long)puVar11 + 0x8e;
  puVar9 = puVar11 + 2;
  puVar11[0x10] = param_2;
  func_0x000107c2a184(puVar9);
  func_0x000107c287c4(param_1,puVar9);
  func_0x000107c2a188(puVar9);
  uVar12 = uVar17;
  func_0x000107c2a18c();
  if ((uVar12 & 1) == 0) {
    *(undefined1 *)((long)puVar11 + 0x8a) = 0;
    func_0x000107c2a194();
    ppuVar14 = &puStack_90;
    puStack_90 = puVar11;
    func_0x000107c2a198(ppuVar14);
    FUN_108885f40(uVar17,ppuVar14);
  }
  else {
    func_0x000107c2a19c(uVar17);
    while( true ) {
      FUN_1088b0800(puVar1,puVar11[0x10] + 0x160);
      puVar13 = puVar1;
      FUN_1088b085c();
      if (((ulong)puVar13 & 1) == 0) {
        *(undefined1 *)((long)puVar11 + 0x8a) = 1;
        puVar13 = puVar11;
        func_0x000107c2a194();
        ppuVar14 = &puStack_88;
        puStack_88 = puVar13;
        func_0x000107c2a198(ppuVar14);
        puVar13 = puVar1;
        func_0x0001088b0884(puVar1,ppuVar14);
        if (((ulong)puVar13 & 1) != 0) {
          return;
        }
      }
      puVar13 = puVar1;
      FUN_1088b08bc();
      *(short *)(puVar11 + 0x11) = (short)puVar13;
      puVar13 = puVar11 + 0x11;
      FUN_1088b099c();
      *(byte *)((long)puVar11 + 0x8c) = (byte)puVar13 & 1;
      FUN_1088b09c4(puVar1);
      if ((*(byte *)((long)puVar11 + 0x8c) & 1) == 0) break;
      FUN_1088b09f8(puVar3,puVar11[0x10]);
      FUN_1088a8be4(pbVar2,puVar3);
      pbVar15 = pbVar2;
      func_0x000107c2a1a4();
      if (((ulong)pbVar15 & 1) == 0) {
        *(undefined1 *)((long)puVar11 + 0x8a) = 2;
        puVar13 = puVar11;
        func_0x000107c2a194();
        ppuVar14 = &puStack_80;
        puStack_80 = puVar13;
        func_0x000107c2a198(ppuVar14);
        pbVar15 = pbVar2;
        func_0x000107c28830(pbVar2,ppuVar14);
        if (((ulong)pbVar15 & 1) != 0) {
          return;
        }
      }
      pbVar15 = pbVar2;
      FUN_1086c1de4();
      *(byte *)((long)puVar11 + 0x8d) = (*pbVar15 ^ 1) & 1;
      FUN_1088a8c10(pbVar2);
      func_0x0001088a8c44(puVar3);
      if ((*(byte *)((long)puVar11 + 0x8d) & 1) == 0) {
        while( true ) {
          uVar10 = (int)puVar11[0x10] + 0x128;
          FUN_1088b0e04();
          if (((uVar10 ^ 1) & 1) == 0) break;
          lVar18 = puVar11[0x10];
          lVar16 = lVar18 + 0x128;
          func_0x0001088b0e6c();
          puVar11[0xd] = lVar16;
          func_0x0001088b0e34(puVar4,lVar18 + 0x128,puVar11[0xd]);
          puVar13 = puVar4;
          func_0x0001088b0ea4(puVar4);
          plVar19 = (long *)puVar11[0x10];
          FUN_1088868bc(puVar7,puVar13);
          (**(code **)(*plVar19 + 0x10))(puVar6,plVar19,puVar7);
          func_0x000107c2a1a0(puVar5,puVar6);
          puVar13 = puVar5;
          func_0x000107c2a1a4();
          if (((ulong)puVar13 & 1) == 0) {
            *(undefined1 *)((long)puVar11 + 0x8a) = 3;
            puVar13 = puVar11;
            func_0x000107c2a194();
            ppuVar14 = &puStack_78;
            puStack_78 = puVar13;
            func_0x000107c2a198(ppuVar14);
            puVar13 = puVar5;
            func_0x000107c28830(puVar5,ppuVar14);
            if (((ulong)puVar13 & 1) != 0) {
              return;
            }
          }
          func_0x000107c28834(puVar5);
          FUN_108885f54(puVar5);
          func_0x000107c2a1ac(puVar6);
          func_0x000108888464(puVar7);
          FUN_1088b0ecc(puVar4);
        }
      }
    }
    func_0x000107c287c8(puVar9);
    FUN_108885f88(puVar9);
    uVar17 = uVar8;
    func_0x000107c2a18c();
    if ((uVar17 & 1) == 0) {
      *puVar11 = 0;
      *(undefined1 *)((long)puVar11 + 0x8a) = 4;
      func_0x000107c2a194();
      ppuVar14 = apuStack_70;
      apuStack_70[0] = puVar11;
      func_0x000107c2a198(ppuVar14);
      FUN_108885f40(uVar8,ppuVar14);
    }
    else {
      func_0x000107c2a19c(uVar8);
      FUN_108885f98(puVar9);
      __ZdlPv(puVar11);
    }
  }
  return;
}



/* Entry: 1088b0800; end: 1088b085b;  */

void FUN_1088b0800(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1088b1224();
  lVar1 = lVar1 + 0x58;
  func_0x00010bcd2fa8();
  FUN_1088b123c(param_1,lVar1,param_2);
  return;
}



/* Entry: 1088b085c; end: 1088b08bb;  */

uint FUN_1088b085c(undefined8 param_1)

{
  func_0x000107c314f0(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 1088b08bc; end: 1088b099b;  */

undefined2 FUN_1088b08bc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_52 [2];
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined2 uStack_22;
  
  lStack_30 = param_1;
  func_0x0001088b1df0(param_1);
  lVar1 = param_1 + 8;
  FUN_1088b1224(lVar1);
  FUN_1088b1c3c(auStack_40,lVar1);
  uVar2 = param_1 + 8;
  FUN_1088b1224();
  func_0x00010bcd3654();
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1 + 8;
    FUN_1088b1224();
    func_0x00010bcd3664();
    if ((uVar2 & 1) != 0) {
      param_1 = param_1 + 8;
      FUN_1088b1224(param_1);
      func_0x000107c314e4(param_1 + 0x58);
      FUN_1088b1e00(&uStack_22);
      goto LAB_1088b0978;
    }
  }
  FUN_1088b1224(param_1 + 8);
  FUN_1088b1e34();
  FUN_1088b1ea4(&uStack_22,auStack_52);
LAB_1088b0978:
  uStack_50 = 1;
  func_0x0001088b1d10(auStack_40);
  return uStack_22;
}



/* Entry: 1088b099c; end: 1088b09c3;  */

uint FUN_1088b099c(undefined8 param_1)

{
  FUN_1088b13c8(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 1088b09c4; end: 1088b09f7;  */

undefined8 FUN_1088b09c4(undefined8 param_1)

{
  FUN_1088b13e4(param_1);
  return param_1;
}



/* Entry: 1088b09f8; end: 1088b0e03;  */

void FUN_1088b09f8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined1 uStack_181;
  undefined1 auStack_180 [34];
  undefined4 uStack_15e;
  undefined1 uStack_15a;
  undefined1 auStack_159 [17];
  undefined1 auStack_148 [34];
  undefined1 uStack_126;
  undefined1 auStack_125 [13];
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [88];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar3 = (undefined8 *)0x50;
  uStack_80 = param_2;
  uStack_78 = param_1;
  __Znwm();
  *puVar3 = FUN_1088b2738;
  puVar3[1] = FUN_1088b2ab4;
  uVar5 = (long)puVar3 + 0x49;
  uVar1 = (long)puVar3 + 0x4a;
  puVar2 = puVar3 + 2;
  puVar3[8] = param_2;
  func_0x0001088a8e40(puVar2);
  FUN_108653ba0(param_1,puVar2);
  func_0x000107c2a188(puVar2);
  uVar4 = uVar5;
  func_0x000107c2a18c();
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)(puVar3 + 9) = 0;
    FUN_1088a8e74();
    ppuVar8 = &puStack_70;
    puStack_70 = puVar3;
    func_0x0001088a8ea4(ppuVar8);
    FUN_108885f40(uVar5,ppuVar8);
    return;
  }
  func_0x000107c2a19c(uVar5);
  lVar9 = puVar3[8];
  func_0x0001088b0f00(auStack_d8);
  FUN_10866854c(auStack_118,lVar9 + 0xe0);
  FUN_1088b0f34(auStack_d8,auStack_118);
  FUN_1088a95ac(auStack_118);
  uVar5 = 0;
  FUN_1088a9590();
  if ((uVar5 & 1) != 0) {
    puVar6 = auStack_d8;
    func_0x0001088a956c();
    FUN_10888ec18();
    if (puVar6 == (undefined1 *)0x41) {
      lVar9 = 0;
      func_0x0001088a956c();
      uVar5 = lVar9 + 0x18;
      FUN_10888b148();
      if ((uVar5 & 1) == 0) {
        uVar5 = puVar3[8] + 0x38;
        puVar6 = auStack_d8;
        func_0x0001088a956c(puVar6);
        func_0x000107c28078(uVar5,puVar6 + 0x18);
        if ((uVar5 & 1) == 0) {
          puVar6 = auStack_d8;
          func_0x0001088a956c(puVar6);
          FUN_10888aaf4(puVar3 + 4,puVar6);
          FUN_108657b48(auStack_148,puVar3[4],puVar3[5]);
          uVar5 = 0;
          FUN_10888b1ac();
          if ((uVar5 & 1) == 0) {
            auStack_159[0] = 0;
            FUN_108653be8(puVar2,auStack_159);
          }
          else {
            FUN_10866409c(puVar3[8] + 0xf0);
            lVar9 = puVar3[8];
            puVar6 = auStack_d8;
            func_0x0001088a956c(puVar6);
            func_0x00010888ebdc(lVar9 + 0x20,puVar6);
            puVar6 = auStack_d8;
            func_0x0001088a956c(puVar6);
            func_0x00010888ebdc(lVar9 + 0x38,puVar6 + 0x18);
            puVar6 = auStack_148;
            FUN_10888b244(puVar6);
            func_0x00010888ebdc(lVar9 + 0x60,puVar6);
            puVar6 = auStack_d8;
            func_0x0001088a956c();
            *(undefined4 *)(lVar9 + 0x50) = *(undefined4 *)(puVar6 + 0x30);
            FUN_10888aaf4(puVar3 + 6,lVar9 + 0x20);
            uVar7 = puVar3[6];
            FUN_108657e30(uVar7,puVar3[7]);
            lVar9 = puVar3[8];
            uStack_15e = (undefined4)uVar7;
            uStack_15a = (undefined1)((ulong)uVar7 >> 0x20);
            *(undefined4 *)(lVar9 + 0x54) = uStack_15e;
            *(undefined1 *)(lVar9 + 0x58) = uStack_15a;
            FUN_10889fb98(auStack_180);
            puVar6 = auStack_180;
            FUN_108668260();
            *(undefined1 **)(puVar3[8] + 0x78) = puVar6;
            uStack_181 = 1;
            FUN_108653be8(puVar2,&uStack_181);
          }
          func_0x00010888b2ec(auStack_148);
        }
        else {
          uStack_126 = 1;
          FUN_108653be8(puVar2,&uStack_126);
        }
        goto LAB_1088b0cfc;
      }
    }
  }
  auStack_125[0] = 0;
  FUN_108653be8(puVar2,auStack_125);
LAB_1088b0cfc:
  FUN_1088a95ac(auStack_d8);
  FUN_108885f88(puVar2);
  uVar5 = uVar1;
  func_0x000107c2a18c();
  if ((uVar5 & 1) == 0) {
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 9) = 1;
    FUN_1088a8e74();
    ppuVar8 = &puStack_68;
    puStack_68 = puVar3;
    func_0x0001088a8ea4(ppuVar8);
    FUN_108885f40(uVar1,ppuVar8);
  }
  else {
    func_0x000107c2a19c(uVar1);
    func_0x0001088a9614(puVar2);
    __ZdlPv(puVar3);
  }
  return;
}



/* Entry: 1088b0e04; end: 1088b0ecb;  */

bool FUN_1088b0e04(long param_1)

{
  FUN_1088b21bc(param_1);
  return param_1 == 0;
}



/* Entry: 1088b0ecc; end: 1088b0f33;  */

undefined8 FUN_1088b0ecc(undefined8 param_1)

{
  FUN_1088b2564(param_1);
  return param_1;
}



/* Entry: 1088b0f34; end: 1088b0f5f;  */

void FUN_1088b0f34(undefined8 param_1,undefined8 param_2)

{
  FUN_108668a1c(param_1,param_2);
  return;
}



/* Entry: 1088b0f60; end: 1088b11fb;  */

void FUN_1088b0f60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  *puVar5 = FUN_1088b3f28;
  puVar5[1] = FUN_1088b414c;
  uVar9 = (long)puVar5 + 0x39;
  puVar1 = puVar5 + 4;
  puVar2 = puVar5 + 5;
  uVar3 = (long)puVar5 + 0x3a;
  puVar4 = puVar5 + 2;
  puVar5[6] = param_2;
  func_0x000107c2a184(puVar4);
  func_0x000107c287c4(param_1,puVar4);
  func_0x000107c2a188(puVar4);
  uVar6 = uVar9;
  func_0x000107c2a18c();
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 7) = 0;
    func_0x000107c2a194();
    ppuVar8 = &puStack_68;
    puStack_68 = puVar5;
    func_0x000107c2a198(ppuVar8);
    FUN_108885f40(uVar9,ppuVar8);
  }
  else {
    func_0x000107c2a19c(uVar9);
    lVar10 = puVar5[6];
    FUN_1088b02c8(lVar10 + 0x128);
    FUN_1088b11fc(lVar10 + 0x168);
    FUN_108659ed0(puVar2,puVar5[6] + 0x80);
    func_0x000107c2a1a0(puVar1,puVar2);
    puVar7 = puVar1;
    func_0x000107c2a1a4();
    if (((ulong)puVar7 & 1) == 0) {
      *(undefined1 *)(puVar5 + 7) = 1;
      puVar7 = puVar5;
      func_0x000107c2a194();
      ppuVar8 = &puStack_60;
      puStack_60 = puVar7;
      func_0x000107c2a198(ppuVar8);
      puVar7 = puVar1;
      func_0x000107c28830(puVar1,ppuVar8);
      if (((ulong)puVar7 & 1) != 0) {
        return;
      }
    }
    func_0x000107c28834(puVar1);
    FUN_108885f54(puVar1);
    func_0x000107c2a1ac(puVar2);
    func_0x000107c287c8(puVar4);
    FUN_108885f88(puVar4);
    uVar9 = uVar3;
    func_0x000107c2a18c();
    if ((uVar9 & 1) == 0) {
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 7) = 2;
      func_0x000107c2a194();
      ppuVar8 = &puStack_58;
      puStack_58 = puVar5;
      func_0x000107c2a198(ppuVar8);
      FUN_108885f40(uVar3,ppuVar8);
    }
    else {
      func_0x000107c2a19c(uVar3);
      FUN_108885f98(puVar4);
      __ZdlPv(puVar5);
    }
  }
  return;
}



/* Entry: 1088b11fc; end: 1088b1223;  */

void FUN_1088b11fc(undefined8 param_1)

{
  func_0x0001088b1c24(param_1);
  func_0x00010bcd3614();
  return;
}



/* Entry: 1088b1224; end: 1088b123b;  */

undefined8 FUN_1088b1224(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088b123c; end: 1088b1347;  */

undefined8 FUN_1088b123c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001088b1280(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 1088b1348; end: 1088b13c7;  */

long * FUN_1088b1348(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  if (*param_1 != 0) {
    func_0x0001088b1390(param_1,*param_1);
  }
  return param_1;
}



/* Entry: 1088b13c8; end: 1088b13e3;  */

byte FUN_1088b13c8(long param_1)

{
  return *(byte *)(param_1 + 1) & 1;
}



/* Entry: 1088b13e4; end: 1088b147f;  */

undefined8 FUN_1088b13e4(undefined8 param_1)

{
  func_0x0001088b1418(param_1);
  return param_1;
}



/* Entry: 1088b1480; end: 1088b14b7;  */

void FUN_1088b1480(undefined8 param_1,long param_2)

{
  func_0x000107c2a1e4(param_2 + 8,0x200000000,5);
  return;
}



/* Entry: 1088b14b8; end: 1088b14cf;  */

void FUN_1088b14b8(void)

{
  return;
}



/* Entry: 1088b14d0; end: 1088b155f;  */

void FUN_1088b14d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_1088b15e0();
  if ((uVar1 & 1) == 0) {
    func_0x0001088b166c(param_1,param_2);
  }
  else {
    func_0x0001088b15fc(param_1);
    FUN_1088b1610();
  }
  return;
}



/* Entry: 1088b1560; end: 1088b15ab;  */

uint FUN_1088b1560(undefined8 param_1)

{
  FUN_1088b15e0(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 1088b15ac; end: 1088b15df;  */

undefined8 FUN_1088b15ac(undefined8 param_1)

{
  func_0x0001088b1974(param_1);
  return param_1;
}



/* Entry: 1088b15e0; end: 1088b160f;  */

byte FUN_1088b15e0(long param_1)

{
  return *(byte *)(param_1 + 0x38) & 1;
}



/* Entry: 1088b1610; end: 1088b16ab;  */

void FUN_1088b1610(long param_1,long param_2)

{
  FUN_10888eba0(param_1,param_2);
  FUN_10888eba0(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  return;
}



/* Entry: 1088b16ac; end: 1088b1703;  */

void FUN_1088b16ac(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088b16d8(param_1,param_2);
  return;
}



/* Entry: 1088b1704; end: 1088b17db;  */

undefined8 FUN_1088b1704(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088b1740(param_1,param_2);
  return param_1;
}



/* Entry: 1088b17dc; end: 1088b181b;  */

void FUN_1088b17dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1088b181c(param_1,param_3,param_4,param_5);
  return;
}



/* Entry: 1088b181c; end: 1088b1aab;  */

undefined8
FUN_1088b181c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001088b1868(param_1,param_2,param_3,param_4);
  return param_1;
}



/* Entry: 1088b1aac; end: 1088b1adf;  */

long FUN_1088b1aac(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    func_0x0001088b152c();
  }
  return param_1;
}



/* Entry: 1088b1ae0; end: 1088b1b03;  */

undefined8 FUN_1088b1ae0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



/* Entry: 1088b1b04; end: 1088b1b73;  */

undefined8 FUN_1088b1b04(undefined8 param_1)

{
  FUN_10869a0ac(param_1);
  return param_1;
}



/* Entry: 1088b1b74; end: 1088b1ba3;  */

void FUN_1088b1b74(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  *param_1 = param_2;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Entry: 1088b1ba4; end: 1088b1bc3;  */

void FUN_1088b1ba4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088b1bc4; end: 1088b1bff;  */

undefined8 FUN_1088b1bc4(undefined8 param_1,undefined8 param_2)

{
  FUN_1088b1c00(param_1,param_2);
  return param_1;
}



/* Entry: 1088b1c00; end: 1088b1c3b;  */

void FUN_1088b1c00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1088b1c3c; end: 1088b1c67;  */

void FUN_1088b1c3c(undefined8 param_1,long param_2)

{
  func_0x0001088b1d44(param_1,param_2 + 0xa8);
  return;
}



/* Entry: 1088b1c68; end: 1088b1dc7;  */

undefined8 FUN_1088b1c68(undefined8 param_1)

{
  FUN_1086772d8(param_1,&UNK_10f4afed8);
  return param_1;
}



/* Entry: 1088b1dc8; end: 1088b1dff;  */

long FUN_1088b1dc8(long param_1,long param_2)

{
  return *(long *)(param_1 + 0xc0) + param_2 * *(long *)(param_1 + 0xd0);
}



/* Entry: 1088b1e00; end: 1088b1e33;  */

undefined8 FUN_1088b1e00(undefined8 param_1)

{
  func_0x0001088b1ee0(param_1);
  return param_1;
}



/* Entry: 1088b1e34; end: 1088b1ea3;  */

void FUN_1088b1e34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_1088b1dc8(param_1,*(undefined8 *)(param_1 + 0xd8));
  uVar1 = *(long *)(param_1 + 0xd8) + 1;
  uVar3 = *(ulong *)(param_1 + 0xa0);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
  *(ulong *)(param_1 + 0xd8) = uVar1 - uVar2 * uVar3;
  *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + -1;
  func_0x000107c314e4(param_1 + 0x10);
  return;
}



/* Entry: 1088b1ea4; end: 1088b2017;  */

undefined8 FUN_1088b1ea4(undefined8 param_1,undefined8 param_2)

{
  FUN_1088b2034(param_1,param_2);
  return param_1;
}



/* Entry: 1088b2018; end: 1088b2033;  */

void FUN_1088b2018(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1088b2034; end: 1088b219b;  */

undefined8 FUN_1088b2034(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088b2070(param_1,param_2);
  return param_1;
}



/* Entry: 1088b219c; end: 1088b21bb;  */

void FUN_1088b219c(long param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1088b21bc; end: 1088b21d3;  */

undefined8 FUN_1088b21bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1088b21d4; end: 1088b2203;  */

undefined8 FUN_1088b21d4(long param_1)

{
  undefined8 uStack_18;
  
  func_0x0001088b1b38(&uStack_18,*(undefined8 *)(param_1 + 0x10));
  return uStack_18;
}



/* Entry: 1088b2204; end: 1088b229f;  */

void FUN_1088b2204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [31];
  undefined1 uStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_2;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_1;
  FUN_1088946e8(param_2);
  FUN_1088b22a0(&uStack_39,uVar1);
  FUN_10869a244(auStack_58,param_2,uStack_30);
  puVar2 = auStack_58;
  FUN_1088b1ae0(puVar2);
  func_0x0001088b22dc(param_1,puVar2,&uStack_39);
  FUN_1088b1b04(auStack_58);
  return;
}



/* Entry: 1088b22a0; end: 1088b2543;  */

undefined8 FUN_1088b22a0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088b2320(param_1,param_2);
  return param_1;
}



/* Entry: 1088b2544; end: 1088b2563;  */

void FUN_1088b2544(long param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


