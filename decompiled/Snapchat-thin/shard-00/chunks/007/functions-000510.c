/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009cc3b8; end: 1009cc3f7;  */

void FUN_1009cc3b8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009cc39c();
  FUN_100082720("StoryUsageServicesServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009cc3f8; end: 1009cc3ff;  */

void FUN_1009cc3f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101aab514);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cc400; end: 1009cc483;  */

void FUN_1009cc400(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101aab514,param_2,&UNK_101aab518,param_2,&UNK_101aab540,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cc484; end: 1009cc4a7;  */

undefined ** FUN_1009cc484(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cc4a8; end: 1009cc527;  */

void FUN_1009cc4a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110736300;
  func_0x000107c613fc(&UNK_110736300,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009cc528,puVar1);
  return;
}



/* Entry: 1009cc528; end: 1009cc52f;  */

void FUN_1009cc528(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113048e30,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113048e30,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110736398;
  func_0x000107c613fc(&UNK_110736398,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10401ff90;
  FUN_10058fa64(&UNK_10401ff90,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009cc530; end: 1009cc627;  */

void FUN_1009cc530(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113048e30,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113048e30,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110736398;
  func_0x000107c613fc(&UNK_110736398,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10401ff90;
  FUN_10058fa64(&UNK_10401ff90,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009cc628; end: 1009cc64b;  */

void FUN_1009cc628(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009cc64c; end: 1009cc657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009cc64c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_10022cc20();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_113048e40) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_113048e48) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_113048e50) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_113048e58) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1009cc658; end: 1009cc713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009cc658(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_10022cc20();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113048e40) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113048e48) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113048e50) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113048e58) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009cc714; end: 1009cc77b;  */

void FUN_1009cc714(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009cc77c; end: 1009cc7a3;  */

undefined ** FUN_1009cc77c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cc7a4; end: 1009cc7e3;  */

void FUN_1009cc7a4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009cc788();
  FUN_100082720("TinselServiceProviderWrapperScopeInitializationPluginProvider",0x3d,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009cc7e4; end: 1009cc7eb;  */

void FUN_1009cc7e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a81e24);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cc7ec; end: 1009cc86f;  */

void FUN_1009cc7ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a81e24,param_2,&UNK_101a81e28,param_2,&UNK_101a81e50,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cc870; end: 1009cc87b;  */

undefined ** FUN_1009cc870(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cc87c; end: 1009cc907;  */

void FUN_1009cc87c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009cc908,param_1);
  return;
}



/* Entry: 1009cc908; end: 1009cc90f;  */

void FUN_1009cc908(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101a6b6fc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cc910; end: 1009cc993;  */

void FUN_1009cc910(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101a6b6fc,param_2,FUN_1009cc994,param_2,&UNK_101a6b700,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cc994; end: 1009cc9bb;  */

void FUN_1009cc994(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009cc9bc; end: 1009cc9c7;  */

void FUN_1009cc9bc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_1001f8a04();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_1009ccaec(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001009ccb0c();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_1009ccbb4();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1009cc9c8; end: 1009ccaeb;  */

void FUN_1009cc9c8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_1001f8a04();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_1009ccaec(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001009ccb0c();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_1009ccbb4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1009ccaec; end: 1009ccb3f;  */

void FUN_1009ccaec(void)

{
  func_0x000107c61168(&PTR_PTR_112f93498);
  return;
}



/* Entry: 1009ccb40; end: 1009ccbb3; -[SCGrapheneTracetokenMetric2 init] */

undefined1 * FUN_1009ccb40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f62e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1009ccbb4; end: 1009cd167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ccbb4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar15 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lStack_a8 = 0;
    goto LAB_1009ccf44;
  }
  func_0x000107c615f0(lVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1647c0);
  lStack_a8 = lVar2;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615f0(lVar2);
  uVar3 = 0xd000000000000017;
  uVar11 = 0x800000010f1647e0;
  func_0x000107c5fadc(0xd000000000000017);
  lVar16 = lVar2;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar3);
  if (lStack_a8 == 0) {
LAB_1009ccdd4:
    lVar17 = 0;
  }
  else {
    lVar17 = lStack_a8;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar17 == 0) goto LAB_1009ccdd4;
    lVar15 = lVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar17);
    uVar1 = (uint)(uVar11 >> 0x20);
    uVar13 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar13 == 2) {
        lVar17 = *(long *)(lVar15 + 0x10);
        lVar14 = *(long *)(lVar15 + 0x18);
        goto LAB_1009ccd34;
      }
LAB_1009ccdc8:
      func_0x00010006c090(lVar15);
      goto LAB_1009ccdd4;
    }
    if (uVar13 == 0) {
      if ((uVar11 & 0xff000000000000) == 0) goto LAB_1009ccdc8;
    }
    else {
      lVar17 = (long)(int)lVar15;
      lVar14 = lVar15 >> 0x20;
LAB_1009ccd34:
      if (lVar17 == lVar14) goto LAB_1009ccdc8;
    }
    lVar17 = 0;
    FUN_1009cd1b8(0,0x112f93450,&PTR_PTR_1126ad748);
    func_0x000107c614e8();
    lVar14 = lVar15;
    func_0x000107c5ee20(lVar15,uVar11);
    puStack_98 = (undefined *)0x0;
    func_0x000107c4e380();
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    puVar4 = puStack_98;
    func_0x000107c61174(puStack_98);
    if (lVar17 == 0) {
      puVar6 = puVar4;
      func_0x000107c5ed30();
      func_0x000107c61170(puVar4);
      func_0x000107c61654();
      func_0x00010006c090(lVar15);
      func_0x000107c614ac(puVar6);
    }
    else {
      func_0x00010006c090(lVar15);
    }
  }
  if (lVar16 == 0) {
    lVar15 = 0;
    lVar16 = 0;
    goto LAB_1009ccf44;
  }
  lVar15 = lVar16;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (lVar15 != 0) {
    lVar14 = lVar15;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar15);
    uVar1 = (uint)(uVar11 >> 0x20);
    uVar13 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar13 == 0) {
        if ((uVar11 & 0xff000000000000) == 0) {
LAB_1009ccec0:
          func_0x00010006c090(lVar14,uVar11);
          goto LAB_1009ccf3c;
        }
      }
      else if ((long)(int)lVar14 == lVar14 >> 0x20) goto LAB_1009ccec0;
    }
    else if ((uVar13 != 2) || (*(long *)(lVar14 + 0x10) == *(long *)(lVar14 + 0x18)))
    goto LAB_1009ccec0;
    lVar15 = 0;
    FUN_1009cd1b8(0,0x112f93448,&PTR_PTR_1126ad750);
    func_0x000107c614e8();
    lVar5 = lVar14;
    func_0x000107c5ee20(lVar14,uVar11);
    puStack_98 = (undefined *)0x0;
    func_0x000107c4e380();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar4 = puStack_98;
    func_0x000107c61174(puStack_98);
    if (lVar15 != 0) {
      func_0x00010006c090(lVar14,uVar11);
      goto LAB_1009ccf44;
    }
    puVar6 = puVar4;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar4);
    func_0x000107c61654();
    func_0x00010006c090(lVar14,uVar11);
    func_0x000107c614ac(puVar6);
  }
LAB_1009ccf3c:
  lVar15 = 0;
LAB_1009ccf44:
  puVar7 = PTR_PTR_1126ad748;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar8 = PTR_PTR_1126ad750;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar8;
  FUN_1009cd444();
  puVar4 = &UNK_1106936b0;
  uVar12 = 0x30;
  func_0x000107c613fc(&UNK_1106936b0,0x30,7);
  *(long *)(puVar4 + 0x10) = lVar17;
  *(undefined **)(puVar4 + 0x18) = puVar7;
  *(long *)(puVar4 + 0x20) = lVar15;
  *(undefined **)(puVar4 + 0x28) = puVar8;
  pcStack_78 = FUN_1009cd638;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_1000f6b44;
  puStack_80 = &UNK_1106936c8;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  puVar4 = puStack_70;
  func_0x000107c61174(lVar15);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(lVar17);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(puVar6);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(puVar6);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113091ad8);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  puVar4 = &UNK_110693700;
  func_0x000107c613fc(&UNK_110693700,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar6 = &UNK_110693728;
  func_0x000107c613fc(&UNK_110693728,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar12;
  uVar3 = 0xc;
  func_0x0001009548b0(0xc,0,0xc,0,0,0,&UNK_10dc0be68,puVar6,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lStack_a8);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61640(puVar6 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(puVar6,0x18,7);
  return;
}



/* Entry: 1009cd168; end: 1009cd1b7;  */

void FUN_1009cd168(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009cd1b8; end: 1009cd1f7;  */

void FUN_1009cd1b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1009cd1f8; end: 1009cd25f; +[SamplingPolicies descriptor] */

void FUN_1009cd1f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b30820,
                        &PTR____CFConstantStringClassReference_110e82798,&PTR_DAT_1131845e8,
                        &PTR_DAT_113184600,1,0x10,0x1c);
    puRam00000001136c7d88 = puVar1;
  }
  return;
}



/* Entry: 1009cd260; end: 1009cd2eb; +[SamplingPolicy descriptor] */

undefined * FUN_1009cd260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b307d0,
                        &PTR____CFConstantStringClassReference_110e82778,&PTR_DAT_1131845e8,
                        &PTR_DAT_113184680,2,0x18,0x1c);
    func_0x000107c5a8b4();
    puRam00000001136c7d80 = puVar1;
  }
  return puRam00000001136c7d80;
}



/* Entry: 1009cd2ec; end: 1009cd3cf; +[EmployeeSamplingPolicy descriptor] */

void FUN_1009cd2ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b30870,
                        &PTR____CFConstantStringClassReference_110e827b8,&PTR_DAT_1131845e8,
                        &PTR_DAT_113184620,1,8,0x1c);
    puRam00000001136c7d90 = puVar1;
  }
  return;
}



/* Entry: 1009cd3d0; end: 1009cd3db;  */

bool FUN_1009cd3d0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1009cd3dc; end: 1009cd443; +[IOSTraceConfig descriptor] */

void FUN_1009cd3dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7da8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b30960,
                        &PTR____CFConstantStringClassReference_110e82818,&PTR_DAT_1131845e8,
                        &PTR_DAT_113184760,5,0x20,0x1c);
    puRam00000001136c7da8 = puVar1;
  }
  return;
}



/* Entry: 1009cd444; end: 1009cd567;  */

undefined * FUN_1009cd444(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = *(undefined **)(unaff_x20 + 0x30);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(lVar5 + 0x68))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar1);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar4 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010f164800);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar4);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined **)(unaff_x20 + 0x30) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1009cd568; end: 1009cd57b;  */

void FUN_1009cd568(long param_1,long param_2)

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



/* Entry: 1009cd57c; end: 1009cd5af;  */

void FUN_1009cd57c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009cd5b0; end: 1009cd5d7;  */

undefined ** FUN_1009cd5b0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cd5d8; end: 1009cd617;  */

void FUN_1009cd5d8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009cd5bc();
  FUN_100082720("UnifiedAdTrackValidationServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009cd618; end: 1009cd637;  */

void FUN_1009cd618(void)

{
  func_0x000107c61168(&PTR_PTR_112f93318);
  return;
}



/* Entry: 1009cd638; end: 1009cd683;  */

void FUN_1009cd638(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
  }
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  uVar3 = 0;
  FUN_1009cd618(0);
  func_0x0001009cd7c0(lVar1,lVar2,uVar3);
  return;
}



/* Entry: 1009cd684; end: 1009cd68b;  */

void FUN_1009cd684(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1017811a0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cd68c; end: 1009cd897;  */

void FUN_1009cd68c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1017811a0,param_2,&UNK_1017811a4,param_2,&UNK_1017811cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009cd898; end: 1009cda5b;  */

void FUN_1009cd898(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1009cda5c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5f808(lVar4);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4ac68;
  func_0x0001009cda9c(0x112d4ac68,puVar1,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  uVar5 = 0x112d4ac70;
  FUN_1000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = uVar5;
  func_0x00010002964c();
  func_0x000107c60264(lVar9,&puStack_68,uVar5,uVar6,lVar3,uVar7);
  (**(code **)(lVar10 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar2);
  uVar7 = 0xd00000000000001c;
  func_0x000107c5ffec(0xd00000000000001c,0x800000010f164780,lVar4,lVar9,puVar8,0);
  uRam0000000112f932c8 = uVar7;
  return;
}



/* Entry: 1009cda5c; end: 1009cdadb;  */

void FUN_1009cda5c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1009cdadc; end: 1009cdae7;  */

undefined ** FUN_1009cdadc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cdae8; end: 1009cdb63;  */

void FUN_1009cdae8(void)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  FUN_1000823a8(FUN_1009cdb84,0);
  return;
}



/* Entry: 1009cdb64; end: 1009cdb83;  */

void FUN_1009cdb64(void)

{
  func_0x000107c61168(&PTR_PTR_112db0848);
  return;
}



/* Entry: 1009cdb84; end: 1009cdbbb;  */

void FUN_1009cdb84(undefined8 *param_1,undefined8 param_2)

{
  FUN_1009cdb64();
  func_0x000107c613fc();
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1103d9390;
  return;
}



/* Entry: 1009cdbbc; end: 1009cdbc7;  */

undefined ** FUN_1009cdbbc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cdbc8; end: 1009cdc53;  */

void FUN_1009cdbc8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009cdc54,param_1);
  return;
}



/* Entry: 1009cdc54; end: 1009cdc5b;  */

void FUN_1009cdc54(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_1009cdcb0();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  param_1[1] = (long)&PTR_DAT_110404c28;
  return;
}



/* Entry: 1009cdc5c; end: 1009cdcaf;  */

void FUN_1009cdc5c(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_1009cdcb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_110404c28;
  return;
}



/* Entry: 1009cdcb0; end: 1009cdccf;  */

void FUN_1009cdcb0(void)

{
  func_0x000107c61168(&PTR_PTR_112dc73e8);
  return;
}



/* Entry: 1009cdcd0; end: 1009cdcf3;  */

undefined ** FUN_1009cdcd0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cdcf4; end: 1009cdd73;  */

void FUN_1009cdcf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103f50d8;
  func_0x000107c613fc(&UNK_1103f50d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009cdd74,puVar1);
  return;
}



/* Entry: 1009cdd74; end: 1009cdd7b;  */

void FUN_1009cdd74(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100083b20(&uStack_38);
  FUN_1009cde00();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_38;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  uVar3 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c6157c(uVar1);
  FUN_1009cde20();
  func_0x000107c61170(uVar3);
  *param_1 = lVar2;
  param_1[1] = (long)&PTR_DAT_1103f5100;
  return;
}



/* Entry: 1009cdd7c; end: 1009cddff;  */

void FUN_1009cdd7c(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1009cde00();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  *(undefined8 *)(param_2 + 0x18) = param_3;
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c6157c(param_3);
  FUN_1009cde20();
  func_0x000107c61170(uVar1);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1103f5100;
  return;
}



/* Entry: 1009cde00; end: 1009cde1f;  */

void FUN_1009cde00(void)

{
  func_0x000107c61168(&PTR_PTR_112dbf9a8);
  return;
}



/* Entry: 1009cde20; end: 1009cdec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009cde20(void)

{
  long lVar1;
  undefined1 auStack_70 [24];
  long in_stack_ffffffffffffffa8;
  
  func_0x000107c614f0();
  FUN_100083b20(&stack0xffffffffffffffa8);
  lVar1 = _DAT_112ff9120;
  func_0x000107c61428(in_stack_ffffffffffffffa8 + _DAT_112ff9120,auStack_70,0x21,0);
  func_0x000107c61174();
  FUN_100945ca4(&stack0xffffffffffffffa8,in_stack_ffffffffffffffa8 + lVar1);
  func_0x000107c614a8(auStack_70);
  func_0x000107c61170(in_stack_ffffffffffffffa8);
  func_0x000100945cf4(&stack0xffffffffffffffa8);
  return;
}



/* Entry: 1009cdec8; end: 1009cdef3;  */

void FUN_1009cdec8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009cdef4; end: 1009cdf2b;  */

undefined ** FUN_1009cdef4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cdf2c; end: 1009cdf5f;  */

void FUN_1009cdf2c(void)

{
  long unaff_x20;
  
  FUN_100945df4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_1009ce614,FUN_1009ce660,&PTR_DAT_1104e4508);
  return;
}



/* Entry: 1009cdf60; end: 1009cdf73;  */

void FUN_1009cdf60(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x112e65290;
  FUN_1000285a8(0x112e65290,&UNK_10da70198);
  func_0x000107c613fc();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  func_0x000107c61614(lVar1 + 0x18,0);
  *param_1 = lVar1;
  return;
}



/* Entry: 1009cdf74; end: 1009ce227;  */

code * FUN_1009cdf74(undefined8 param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *extraout_x8;
  code *pcVar8;
  
  pcVar8 = pcRam0000000112f93380;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pcRam0000000112f93380 != (code *)0x0) {
    pcVar1 = pcRam0000000112f93380;
    func_0x000107c61174();
    pcVar2 = pcVar1;
    func_0x000107c400c8();
    if ((int)pcVar2 == 8) {
      pcVar2 = pcVar1;
      func_0x000107c49960();
      func_0x000107c61180();
      if (pcVar2 != (code *)0x0) {
        func_0x000107c61170();
        goto LAB_1009ce18c;
      }
    }
    func_0x000107c61170(pcVar1);
  }
  pcVar2 = pcRam0000000112f93380;
  pcRam0000000112f93380 = (code *)0x0;
  func_0x000107c61170();
  if ((bRam0000000112f93388 & 1) == 0) {
    FUN_1009ce2b4();
    pcVar8 = (code *)0x0;
    if (param_2 == 0) goto LAB_1009ce18c;
    pcVar8 = (code *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    pcVar1 = pcVar2;
    lVar6 = param_2;
    func_0x000107c5fadc();
    pcVar3 = pcVar8;
    func_0x000107c40520();
    func_0x000107c61180();
    func_0x000107c61170(pcVar8);
    func_0x000107c61170(pcVar1);
    if (pcVar3 == (code *)0x0) {
      func_0x000107c5fb28(pcVar2,param_2);
      func_0x000107c6142c(param_2);
      pcVar8 = pcVar2 + 0x20;
      func_0x000107c60ec0(pcVar8,0);
      func_0x000107c61574();
      if ((int)pcVar8 != 0) {
        pcVar8 = (code *)0x0;
        bRam0000000112f93388 = 1;
        goto LAB_1009ce18c;
      }
    }
    else {
      pcVar2 = pcVar3;
      func_0x000107c5ee30();
      func_0x000107c6142c(param_2);
      func_0x000107c61170(pcVar3);
      bRam0000000112f93388 = 1;
      pcVar8 = (code *)0x0;
      FUN_1009cda5c(0,0x112f93390,&PTR_PTR_1126d20d8);
      func_0x000107c614e8();
      pcVar1 = pcVar2;
      func_0x000107c5ee20(pcVar2,lVar6);
      func_0x000107c4e380();
      func_0x000107c61180();
      func_0x000107c61170(pcVar1);
      uVar4 = 0;
      if (pcVar8 == (code *)0x0) {
        uVar5 = uVar4;
        func_0x000107c61174();
        func_0x000107c5ed30(0);
        func_0x000107c61170(uVar5);
        func_0x000107c61654();
        func_0x000107c614ac(uVar4);
        func_0x0001037a9304(1);
        func_0x00010006c090(pcVar2,lVar6);
      }
      else {
        func_0x000107c61174();
        pcVar1 = pcVar8;
        func_0x000107c400c8();
        if ((int)pcVar1 == 8) {
          pcVar1 = pcVar8;
          func_0x000107c49960();
          func_0x000107c61180();
          if (pcVar1 != (code *)0x0) {
            func_0x000107c61170();
            pcVar1 = pcRam0000000112f93380;
            pcRam0000000112f93380 = pcVar8;
            func_0x000107c61174(pcVar8);
            func_0x000107c61170(pcVar1);
            func_0x00010006c090(pcVar2,lVar6);
            goto LAB_1009ce18c;
          }
        }
        func_0x00010006c090(pcVar2,lVar6);
        func_0x000107c61170();
        pcVar2 = pcVar8;
      }
    }
  }
  pcVar8 = (code *)0x0;
LAB_1009ce18c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return pcVar8;
  }
  func_0x000107c60e78();
  pcVar8 = pcVar2;
  FUN_1009cdf74();
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)PTR_PTR_1126d20d8;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  pcVar1 = pcVar8;
  (*pcVar2)();
  FUN_1009d9d78();
  func_0x000107c61170(pcVar8);
  *extraout_x8 = pcVar1;
  return pcVar8;
}



/* Entry: 1009ce228; end: 1009ce297;  */

void FUN_1009ce228(undefined8 *param_1,code *param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = param_2;
  FUN_1009cdf74();
  if (pcVar1 == (code *)0x0) {
    pcVar1 = (code *)PTR_PTR_1126d20d8;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  pcVar2 = pcVar1;
  (*param_2)();
  FUN_1009d9d78();
  func_0x000107c61170(pcVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1009ce298; end: 1009ce2b3;  */

void FUN_1009ce298(void)

{
  long unaff_x20;
  
  FUN_1009ce228(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1009ce2b4; end: 1009ce4fb;  */

undefined1  [16] FUN_1009ce2b4(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  lVar2 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12_01;
  FUN_100028ef0(lVar8);
  FUN_100029394(lVar8,lVar7);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar2 = lVar7;
  (*pcVar10)(lVar7,1,lVar3);
  bVar1 = (int)lVar2 != 1;
  if (bVar1) {
    func_0x000107c5ed98(lVar9,0x6b64536563617274,0xec00000074696e49,0);
    (**(code **)(lVar11 + 8))(lVar7,lVar3);
  }
  else {
    FUN_1009d8824(lVar7,0x112d36580,&UNK_10d9016d0);
  }
  (**(code **)(lVar11 + 0x38))(lVar9,!bVar1,1,lVar3);
  FUN_100029394(lVar9,puVar6);
  uVar5 = 1;
  puVar4 = puVar6;
  (*pcVar10)(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_1009d8824(lVar9,0x112d36580,&UNK_10d9016d0);
    FUN_1009d8824(lVar8,0x112d36580,&UNK_10d9016d0);
    FUN_1009d8824(puVar6,0x112d36580,&UNK_10d9016d0);
    puVar4 = (undefined1 *)0x0;
    uVar5 = 0;
  }
  else {
    func_0x000107c5edc4();
    FUN_1009d8824(lVar9,0x112d36580,&UNK_10d9016d0);
    FUN_1009d8824(lVar8,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar11 + 8))(puVar6,lVar3);
  }
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = puVar4;
  return auVar12;
}



/* Entry: 1009ce4fc; end: 1009ce507;  */

void FUN_1009ce4fc(void)

{
  long unaff_x20;
  
  FUN_1009ce508(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1009ce508; end: 1009ce60f;  */

/* WARNING: Possible PIC construction at 0x0001009ce5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009ce5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009ce5e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009ce5d8) */
/* WARNING: Removing unreachable block (ram,0x0001009ce5c8) */
/* WARNING: Removing unreachable block (ram,0x0001009ce5e8) */

void FUN_1009ce508(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1103d8130;
  func_0x000107c613fc(&UNK_1103d8130,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uVar2 = 0x112db0628;
  FUN_1000285a8(0x112db0628,&UNK_10d959f60);
  func_0x000107c613fc();
  pcVar3 = FUN_1009ce7e4;
  FUN_1000841f8(FUN_1009ce7e4,puVar1,uVar2);
  FUN_100084214("SCUserSessionScopeApplicationLifeCycleListenerPluginRegistryServiceProvider",0x4b,2
               );
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1009ce610; end: 1009ce613;  */

void FUN_1009ce610(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ce614; end: 1009ce65f;  */

void FUN_1009ce614(void)

{
  func_0x000107c61168(&PTR_PTR_112e650a8);
  return;
}



/* Entry: 1009ce660; end: 1009ce7e3;  */

undefined * FUN_1009ce660(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_70;
  undefined1 uStack_61;
  
  func_0x0001009ce634();
  uVar11 = *(ulong *)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        if (*(ulong *)(param_1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009ce7e4);
          (*pcVar5)();
        }
        uVar3 = *(undefined1 *)(param_1 + 0x20 + uVar10);
        uVar1 = uVar10 + 1;
        uStack_61 = uVar3;
        FUN_10008a7c8(&lStack_70,&uStack_61);
        lVar4 = lStack_70;
        if (lStack_70 != 0) break;
        uVar10 = uVar1;
        if (uVar11 == uVar1) goto LAB_1009ce7b4;
      }
      puVar7 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_1009ce938(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,0x112e65268,&UNK_10da70170,0x112e65270
                      ,&UNK_10da70178);
      }
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_1009ce938(puVar9,uVar2 + 1,1,puVar8,0x112e65268,&UNK_10da70170,0x112e65270,
                      &UNK_10da70178);
      }
      *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
      puVar9[uVar2 * 0x10 + 0x20] = uVar3;
      *(long *)(puVar9 + uVar2 * 0x10 + 0x28) = lVar4;
      bVar6 = uVar11 - 1 != uVar10;
      uVar10 = uVar1;
    } while (bVar6);
  }
LAB_1009ce7b4:
  func_0x000107c6142c(param_1);
  return puVar9;
}



/* Entry: 1009ce7e4; end: 1009ce7f7;  */

void FUN_1009ce7e4(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*param_2 == '\0') {
    FUN_1009ce894(uVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
    pcVar3 = "CreatorSubscriptionsApplicationLifeCycleListenerPluginPluginProvider";
    uVar4 = 0x44;
  }
  else if (*param_2 == '\x01') {
    FUN_1009cea68(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x38));
    pcVar3 = "StoreKitApplicationLifeCycleListenerPluginPluginProvider";
    uVar4 = 0x38;
    uVar2 = uVar1;
  }
  else {
    FUN_1009ceb00();
    pcVar3 = "TurnBasedAssociatedDataApplicationLifeCycleListenerPluginPluginProvider";
    uVar4 = 0x47;
    uVar2 = uVar5;
  }
  FUN_100082720(pcVar3,uVar4,2);
  *param_1 = uVar2;
  return;
}



/* Entry: 1009ce7f8; end: 1009ce893;  */

void FUN_1009ce7f8(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\0') {
    FUN_1009ce894(param_3,param_4,param_5,param_6);
    pcVar1 = "CreatorSubscriptionsApplicationLifeCycleListenerPluginPluginProvider";
    uVar2 = 0x44;
  }
  else if (*param_2 == '\x01') {
    FUN_1009cea68(param_7,param_4,param_8);
    pcVar1 = "StoreKitApplicationLifeCycleListenerPluginPluginProvider";
    uVar2 = 0x38;
    param_3 = param_7;
  }
  else {
    FUN_1009ceb00();
    pcVar1 = "TurnBasedAssociatedDataApplicationLifeCycleListenerPluginPluginProvider";
    uVar2 = 0x47;
    param_3 = param_9;
  }
  FUN_100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 1009ce894; end: 1009ce937;  */

void FUN_1009ce894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9dd00,&UNK_10d93e920);
  puVar1 = &UNK_1103fd5f8;
  func_0x000107c613fc(&UNK_1103fd5f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_100c755d0,puVar1);
  return;
}



/* Entry: 1009ce938; end: 1009cea67;  */

undefined *
FUN_1009ce938(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009cea68);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    FUN_1000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 4) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    FUN_1000285a8(param_7,param_8);
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x10 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 1009cea68; end: 1009ceaff;  */

void FUN_1009cea68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9dd00,&UNK_10d93e920);
  puVar1 = &UNK_1103fdf98;
  func_0x000107c613fc(&UNK_1103fdf98,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(0x100a15020,puVar1);
  return;
}



/* Entry: 1009ceb00; end: 1009ceb4b;  */

void FUN_1009ceb00(undefined8 param_1)

{
  FUN_1000285a8(0x112d9dd00,&UNK_10d93e920);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1016d6ec0,param_1);
  return;
}



/* Entry: 1009ceb4c; end: 1009ceb6f;  */

undefined ** FUN_1009ceb4c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ceb70; end: 1009cebef;  */

void FUN_1009ceb70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103dc148;
  func_0x000107c613fc(&UNK_1103dc148,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009cebf0,puVar1);
  return;
}



/* Entry: 1009cebf0; end: 1009cebf7;  */

void FUN_1009cebf0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112db2448,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112db2448,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103dc760;
  func_0x000107c613fc(&UNK_1103dc760,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1015328e4;
  FUN_10058fa64(&UNK_1015328e4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009cebf8; end: 1009cecef;  */

void FUN_1009cebf8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112db2448,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112db2448,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103dc760;
  func_0x000107c613fc(&UNK_1103dc760,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1015328e4;
  FUN_10058fa64(&UNK_1015328e4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009cecf0; end: 1009ced13;  */

void FUN_1009cecf0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ced14; end: 1009cf3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ced14(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1002442d0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112db2458) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112db2460) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112db2468) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112db2470) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112db2478) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112db2480) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112db2488) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112db2490) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112db2498) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112db24a0) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112db24a8) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112db24b0) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112db24b8) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112db24c0) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112db24c8) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112db24d0) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112db24d8) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112db24e0) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112db24e8) = param_20;
  *(undefined8 *)(lVar3 + _DAT_112db24f0) = param_21;
  *(undefined8 *)(lVar3 + _DAT_112db24f8) = param_22;
  *(undefined8 *)(lVar3 + _DAT_112db2500) = param_23;
  *(undefined8 *)(lVar3 + _DAT_112db2508) = param_24;
  *(undefined8 *)(lVar3 + _DAT_112db2510) = param_25;
  *(undefined8 *)(lVar3 + _DAT_112db2518) = param_26;
  *(undefined8 *)(lVar3 + _DAT_112db2520) = param_27;
  *(undefined8 *)(lVar3 + _DAT_112db2528) = param_28;
  *(undefined8 *)(lVar3 + _DAT_112db2530) = param_29;
  *(undefined8 *)(lVar3 + _DAT_112db2538) = param_30;
  *(undefined8 *)(lVar3 + _DAT_112db2540) = param_31;
  *(undefined8 *)(lVar3 + _DAT_112db2548) = param_32;
  *(undefined8 *)(lVar3 + _DAT_112db2550) = param_33;
  *(undefined8 *)(lVar3 + _DAT_112db2558) = param_34;
  *(undefined8 *)(lVar3 + _DAT_112db2560) = param_35;
  *(undefined8 *)(lVar3 + _DAT_112db2568) = param_36;
  *(undefined8 *)(lVar3 + _DAT_112db2570) = param_37;
  *(undefined8 *)(lVar3 + _DAT_112db2578) = param_38;
  *(undefined8 *)(lVar3 + _DAT_112db2580) = param_39;
  *(undefined8 *)(lVar3 + _DAT_112db2588) = param_40;
  *(undefined8 *)(lVar3 + _DAT_112db2590) = param_41;
  *(undefined8 *)(lVar3 + _DAT_112db2598) = param_42;
  *(undefined8 *)(lVar3 + _DAT_112db25a0) = param_43;
  *(undefined8 *)(lVar3 + _DAT_112db25a8) = param_44;
  *(undefined8 *)(lVar3 + _DAT_112db25b0) = param_45;
  *(undefined8 *)(lVar3 + _DAT_112db25b8) = param_46;
  *(undefined8 *)(lVar3 + _DAT_112db25c0) = param_47;
  *(undefined8 *)(lVar3 + _DAT_112db25c8) = param_48;
  *(undefined8 *)(lVar3 + _DAT_112db25d0) = param_49;
  *(undefined8 *)(lVar3 + _DAT_112db25d8) = param_50;
  *(undefined8 *)(lVar3 + _DAT_112db25e0) = param_51;
  *(undefined8 *)(lVar3 + _DAT_112db25e8) = param_52;
  *(undefined8 *)(lVar3 + _DAT_112db25f0) = param_53;
  *(undefined8 *)(lVar3 + _DAT_112db25f8) = param_54;
  *(undefined8 *)(lVar3 + _DAT_112db2600) = param_55;
  *(undefined8 *)(lVar3 + _DAT_112db2608) = param_56;
  *(undefined8 *)(lVar3 + _DAT_112db2610) = param_57;
  *(undefined8 *)(lVar3 + _DAT_112db2618) = param_58;
  *(undefined8 *)(lVar3 + _DAT_112db2620) = param_59;
  *(undefined8 *)(lVar3 + _DAT_112db2628) = param_60;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009cf3d0; end: 1009cf47b;  */

void FUN_1009cf3d0(void)

{
  long unaff_x20;
  
  FUN_1009ced14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0));
  return;
}



/* Entry: 1009cf47c; end: 1009cf69b;  */

void FUN_1009cf47c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009cf69c; end: 1009cf6a7;  */

undefined ** FUN_1009cf69c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cf6a8; end: 1009cf733;  */

void FUN_1009cf6a8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009cf734,param_1);
  return;
}



/* Entry: 1009cf734; end: 1009cf73b;  */

void FUN_1009cf734(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1009cf73c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103db8e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1009cf73c; end: 1009cf75b;  */

void FUN_1009cf73c(void)

{
  func_0x000107c61168(&PTR_PTR_112db1228);
  return;
}



/* Entry: 1009cf75c; end: 1009cf79f;  */

void FUN_1009cf75c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1009cf73c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103db8e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1009cf7a0; end: 1009cf7ab;  */

undefined ** FUN_1009cf7a0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cf7ac; end: 1009cf837;  */

void FUN_1009cf7ac(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009cf838,param_1);
  return;
}



/* Entry: 1009cf838; end: 1009cf83f;  */

void FUN_1009cf838(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1009cf840();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110402a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1009cf840; end: 1009cf85f;  */

void FUN_1009cf840(void)

{
  func_0x000107c61168(&PTR_PTR_112dc6530);
  return;
}



/* Entry: 1009cf860; end: 1009cf8a3;  */

void FUN_1009cf860(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1009cf840();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110402a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1009cf8a4; end: 1009cf8af;  */

undefined ** FUN_1009cf8a4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009cf8b0; end: 1009cf93b;  */

void FUN_1009cf8b0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009cf93c,param_1);
  return;
}



/* Entry: 1009cf93c; end: 1009cf943;  */

void FUN_1009cf93c(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_1009cf998();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  param_1[1] = (long)&PTR_DAT_1103db4c8;
  return;
}



/* Entry: 1009cf944; end: 1009cf997;  */

void FUN_1009cf944(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_1009cf998();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1103db4c8;
  return;
}



/* Entry: 1009cf998; end: 1009cf9b7;  */

void FUN_1009cf998(void)

{
  func_0x000107c61168(&PTR_PTR_112db0fb8);
  return;
}


