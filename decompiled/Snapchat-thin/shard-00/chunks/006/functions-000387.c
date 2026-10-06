/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100810130; end: 10081022b; -[SCCommunitiesAttributionHandler initWithCustomStoriesDataFetcher:customStoriesDataSyncer:runtime:communityOrgService:] */

undefined1 *
FUN_100810130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f3328;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10081022c; end: 100810233; -[SCPropertyHandlerRegistryServices propertyHandlerRegistry] */

undefined8 FUN_10081022c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100810234; end: 1008102a7; -[SCCommunitiesAttributionHandlerServices initWithCommunitiesAttributionProviding:] */

undefined1 * FUN_100810234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fc390;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008102a8; end: 1008102f3;  */

void FUN_1008102a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008102f4; end: 100810af7; -[SCProfileHeaderButtonEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008102f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c470d0();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112731dcc);
  *(undefined **)(param_1 + _DAT_112731dcc) = puVar1;
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar2);
  lVar16 = param_1 + _DAT_112731dd0;
  func_0x000107c61148();
  lVar3 = lVar16;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar16);
  lVar16 = (long)_DAT_112731dd4;
  func_0x000107c61174(lVar3);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(long *)(param_1 + lVar16) = lVar3;
  func_0x000107c61170(uVar15);
  puVar1 = PTR_PTR_1126ae720;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_100819824;
  puStack_98 = &UNK_1108429c8;
  func_0x000107c61174(lVar3);
  lStack_90 = lVar3;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112731dd8);
  *(undefined **)(param_1 + _DAT_112731dd8) = puVar1;
  func_0x000107c61170(uVar15);
  lVar17 = (long)_DAT_112731ddc;
  lVar16 = param_1 + lVar17;
  func_0x000107c61148();
  lVar4 = lVar16;
  func_0x000107c3ee74();
  func_0x000107c61180();
  func_0x000107c61170(lVar16);
  lVar17 = param_1 + lVar17;
  func_0x000107c61148();
  lVar5 = lVar17;
  func_0x000107c4168c();
  func_0x000107c61180();
  func_0x000107c61170(lVar17);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c450cc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126c2d78;
  func_0x000107c610f4();
  func_0x000107c46d14();
  puVar1 = puVar7;
  func_0x000107c520f4();
  FUN_100810f68();
  func_0x000107c61180();
  func_0x000107c520fc(puVar7);
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar7;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c5707c(lVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61144(auStack_b8,param_1);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112731de0);
  *(undefined **)(param_1 + _DAT_112731de0) = puVar1;
  func_0x000107c61170(uVar15);
  lVar16 = param_1 + _DAT_112731de4;
  func_0x000107c61148(lVar16);
  lVar17 = lVar16;
  func_0x000107c3e550();
  func_0x000107c61180();
  lVar8 = lVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c3e548();
  func_0x000107c61180();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_105be4b88;
  puStack_c8 = &UNK_110843540;
  func_0x000107c6111c(auStack_c0,auStack_b8);
  lVar10 = lVar9;
  func_0x000107c5c320(lVar9);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  lVar16 = param_1 + _DAT_112731de8;
  func_0x000107c61148(lVar16);
  lVar17 = lVar16;
  func_0x000107c51d3c();
  func_0x000107c61180();
  lVar8 = lVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c51d08();
  func_0x000107c61180();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  puStack_f8 = &UNK_105be4bb4;
  puStack_f0 = &UNK_110843540;
  func_0x000107c6111c(auStack_e8,auStack_b8);
  lVar10 = lVar9;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  lVar16 = param_1 + _DAT_112731dec;
  func_0x000107c61148(lVar16);
  lVar10 = lVar16;
  func_0x000107c3ea58();
  func_0x000107c61180();
  lVar9 = lVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = lVar9;
  func_0x000107c4da34();
  func_0x000107c61180();
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x1008117ac;
  puStack_118 = &UNK_110842a38;
  func_0x000107c6111c(auStack_110,auStack_b8);
  lVar17 = lVar8;
  func_0x000107c5c320(lVar8);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar16);
  lVar16 = param_1 + _DAT_112731df0;
  func_0x000107c61148();
  lVar11 = lVar16;
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar10 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar9 = lVar10;
  func_0x000107c3e614();
  func_0x000107c61180();
  lVar8 = lVar9;
  func_0x000107c5d6fc();
  func_0x000107c61180();
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_100813af8;
  puStack_140 = &UNK_1108560f0;
  func_0x000107c6111c(auStack_138,auStack_b8);
  lVar17 = lVar8;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar16);
  func_0x000107c3aeb8(param_1);
  puVar13 = PTR_PTR_1126be840;
  puVar2 = PTR_PTR_1126aeec0;
  puVar1 = PTR_PTR_1126ae960;
  puVar12 = PTR_PTR_1126be848;
  func_0x000107c4ad94();
  func_0x000107c61180();
  func_0x000107c5bf20();
  func_0x000107c61180();
  func_0x000107c40418();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae970;
  func_0x000107c5d9b8();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_160,auStack_b8);
  func_0x000107c3e2d8(puVar2);
  func_0x000107c611b0();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  *(undefined8 *)(param_1 + _DAT_112731df4) = 0;
  func_0x000107c61120(auStack_160);
  func_0x000107c61120(auStack_138);
  func_0x000107c61120(auStack_110);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61120(auStack_160);
  func_0x000107c61120(auStack_138);
  func_0x000107c61120(auStack_110);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_b8);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(lVar3 + _DAT_112f31328));
  return;
}



/* Entry: 100810af8; end: 100810b07; -[_TtC26SCProfileHeaderButtonScope26SCProfileHeaderButtonScope buttonItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100810af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f31328));
  return;
}



/* Entry: 100810b08; end: 100810b4f; -[_TtC26SCProfileHeaderButtonScope26SCProfileHeaderButtonScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100810b08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f31330;
  func_0x000107c61428(param_1 + _DAT_112f31330,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100810b50; end: 100810c3f; -[SIGHeaderButtonOption initWithIcon:target:selector:] */

undefined1 *
FUN_100810b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270b530;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x38) = 0x1b;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_4);
    *(long *)((long)puVar1 + 0x10) = param_5;
    *(undefined1 *)((long)puVar1 + 0x28) = 1;
    if ((param_4 != 0) && (param_5 != 0)) {
      puVar3 = PTR_PTR_1126e1650;
      func_0x000107c610fc();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined **)((long)puVar1 + 0x20) = puVar3;
      func_0x000107c61170(uVar2);
      func_0x000107c3d8b4(puVar3);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100810c40; end: 100810cab; -[SIGTargetActionDispatcher init] */

undefined1 * FUN_100810c40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b6a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100810cac; end: 100810d1b; -[SIGTargetActionDispatcher addTarget:action:] */

/* WARNING: Possible PIC construction at 0x000100810cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100810cf8) */
/* WARNING: Removing unreachable block (ram,0x000100810cfc) */
/* WARNING: Removing unreachable block (ram,0x000100810d08) */

void FUN_100810cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1888;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c48c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100810d1c; end: 100810e43; -[SIGTargetActionDispatcherEntry initWithTarget:action:] */

undefined1 * FUN_100810d1c(undefined1 *param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 **ppuVar5;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_50;
  func_0x000107c61174(param_3);
  pcVar3 = param_3;
  func_0x000107c61158();
  func_0x000107c60ef4();
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3;
    func_0x000107c610c4();
    if (*pcVar4 == 'v') {
      cVar1 = pcVar4[1];
      func_0x000107c60fd0();
      if (cVar1 == '\0') {
        pcVar4 = pcVar3;
        func_0x000107c610d0();
        uVar2 = (uint)pcVar4;
        if ((uVar2 & 0xfffffffe) == 2) {
          if (uVar2 == 3) {
            func_0x000107c610c0(pcVar3,2);
            if (*pcVar3 != '@') goto LAB_100810e10;
            cVar1 = pcVar3[1];
            func_0x000107c60fd0();
            if (cVar1 != '\0') goto LAB_100810e14;
          }
          puStack_48 = PTR_PTR_11270b6b0;
          puStack_50 = param_1;
          func_0x000107c61154(&puStack_50,PTR_s_init_1125d9248);
          if (ppuVar5 != (undefined1 **)0x0) {
            func_0x000107c611a0((undefined1 *)((long)ppuVar5 + 0x10),param_3);
            *(undefined8 *)((long)ppuVar5 + 0x18) = param_4;
            *(bool *)((long)ppuVar5 + 8) = uVar2 == 3;
          }
          func_0x000107c61174(ppuVar5);
          param_1 = (undefined1 *)ppuVar5;
          goto LAB_100810e18;
        }
      }
    }
    else {
LAB_100810e10:
      func_0x000107c60fd0();
    }
  }
LAB_100810e14:
  ppuVar5 = (undefined1 **)0x0;
LAB_100810e18:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (undefined1 *)ppuVar5;
}



/* Entry: 100810e44; end: 100810ed7; -[SIGHeaderButtonOption setAccessibilityIdentifier:] */

void FUN_100810e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10b854c90;
  puStack_40 = &UNK_110d62ab0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100810ed8; end: 100810f67; -[SIGHeaderButtonOption forEachObserver:] */

/* WARNING: Possible PIC construction at 0x000100810f40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100810f44) */

void FUN_100810ed8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 != 0) && (func_0x000107c40808(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x000107c4eaf0(lVar1);
    func_0x000107c61180();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100810f68; end: 100810f7f;  */

void FUN_100810f68(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5bf78;
  FUN_1000f5ff4(&PTR____CFConstantStringClassReference_110f5bf78,
                &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    FUN_10002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100810f80; end: 100811013; -[SIGHeaderButtonOption setAccessibilityLabel:] */

void FUN_100810f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10b854ce0;
  puStack_40 = &UNK_110d62ab0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100811014; end: 10081101b; -[SIGHeaderButtonItem setOptions:] */

void FUN_100811014(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10081101c; end: 10081105b;  */

void FUN_10081101c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c4ec();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10081105c; end: 10081114f; -[SCBitmojiSelfieServicesEntryPoint _selfieProvider] */

void FUN_10081105c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b8418;
  func_0x000107c610f4(PTR_PTR_1126b8418);
  uVar2 = param_1;
  FUN_100811150(param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3ea24();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  FUN_100811150(param_1);
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c3ea20();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4929c(puVar1,param_2,uVar4,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100811150; end: 100811173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811150(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272295c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100811174; end: 10081117b; -[SCUserInfoServices bitmojiSelfieIdProvider] */

undefined8 FUN_100811174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10081117c; end: 1008111bb;  */

void FUN_10081117c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3af24();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1008111bc; end: 1008112e7; -[SCUserInfoServicesEntryPoint _bitmojiSelfieIdProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008111bc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf548;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf548);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c4d73c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722ec8);
  func_0x000107c421ac(uVar3);
  func_0x000107c61180();
  func_0x000107c407c8(uVar5,param_2,2,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_1108854a8);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  func_0x000107c610f4(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  func_0x000107c61148(param_1);
  lVar4 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c46bcc(puVar2,param_2,lVar4,2,uVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008112e8; end: 1008112ef; -[SCUserInfoServices bitmojiSelfieIdMutator] */

undefined8 FUN_1008112e8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1008112f0; end: 100811337;  */

void FUN_1008112f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3af20();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100811338; end: 10081139b; -[SCUserInfoServicesEntryPoint _bitmojiSelfieIdMutatorWithBitmojiSelfieIdProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8930;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c49108();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10081139c; end: 10081143f; -[SCUserBitmojiSelfieIdMutatorImpl initWithUpdatesPublisher:bitmojiSelfieIdProvider:] */

undefined1 *
FUN_10081139c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8298;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100811440; end: 1008115cf; -[SCBitmojiSelfieProvider initWithUserInfoProvider:bitmojiSelfieIdMutator:] */

undefined8 *
FUN_100811440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126e7f78;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c41050();
    func_0x000107c61180();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_58,puVar1);
    uVar2 = puVar1[1];
    func_0x000107c6111c(auStack_60,auStack_58);
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008115d0; end: 1008115d7;  */

void FUN_1008115d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_1053f5648;
  puStack_30 = &UNK_1053f5658;
  uStack_28 = 0;
  func_0x000107c4c694(param_2);
  lVar1 = puStack_48[5];
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = puStack_48[5];
  }
  func_0x000107c61174(uVar2);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1008115d8; end: 100811647;  */

/* WARNING: Possible PIC construction at 0x00010081161c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100811630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100811620) */
/* WARNING: Removing unreachable block (ram,0x000100811634) */

void FUN_1008115d8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c4dfe8(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100811648; end: 100811777; -[SCBitmojiSelfieProvider _publishSelfieId:] */

void FUN_100811648(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c51d04();
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar1);
  if (param_3 == uVar1) {
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_3);
  }
  else {
    if (uVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      uVar2 = param_3;
      func_0x000107c49cec();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_10081175c;
    }
    uVar1 = param_3;
    func_0x000107c40794(param_3);
    func_0x000107c58e54(param_1);
    func_0x000107c61170(uVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_1053ca53c;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    func_0x000107c61174(param_3);
    uStack_38 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_60);
    uVar1 = uStack_38;
  }
  func_0x000107c61170(uVar1);
LAB_10081175c:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100811778; end: 100811783; -[SCBitmojiSelfieProvider selfieId] */

void FUN_100811778(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 100811784; end: 1008117d7; -[SCBitmojiSelfieProvider selfieIdObserver] */

void FUN_100811784(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008117d8; end: 100811adf; -[SCProfileHeaderButtonEntryPoint _fetchIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008117d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  lVar11 = (long)_DAT_112731e10;
  lVar1 = param_1 + lVar11;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3de00();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126c2f88;
  puVar6 = PTR_PTR_1126ae960;
  puVar4 = PTR_PTR_1126c2f90;
  func_0x000107c4311c(PTR_PTR_1126c2f90);
  func_0x000107c61180();
  func_0x000107c4f380(puVar5);
  func_0x000107c61180();
  func_0x000107c5af30(puVar6);
  func_0x000107c61180();
  lVar7 = lVar3;
  func_0x000107c4a5ac();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  if ((int)lVar7 == 0) {
    uVar9 = *(undefined8 *)(param_1 + _DAT_112731dcc);
    puVar10 = auStack_98;
    func_0x000107c6111c(puVar10,auStack_68);
    func_0x000107c4e524(uVar9);
  }
  else {
    lVar11 = param_1 + lVar11;
    func_0x000107c61148(lVar11);
    lVar1 = lVar11;
    func_0x000107c3de00();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126c2f88;
    puVar6 = PTR_PTR_1126ae960;
    puVar4 = PTR_PTR_1126c2f90;
    func_0x000107c4311c(PTR_PTR_1126c2f90);
    func_0x000107c61180();
    func_0x000107c4f380(puVar5);
    func_0x000107c61180();
    func_0x000107c5af30(puVar6);
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126ae970;
    func_0x000107c4ca90(PTR_PTR_1126ae970);
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(param_1 + _DAT_112731dcc);
    func_0x000107c4f7c0(uVar9);
    func_0x000107c61180();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    puStack_80 = &UNK_105be53d4;
    puStack_78 = &UNK_1108434b0;
    puVar10 = auStack_70;
    func_0x000107c6111c(puVar10,auStack_68);
    func_0x000107c5e094(lVar2);
    func_0x000107c611b0();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar11);
  }
  func_0x000107c61120(puVar10);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100811ae0; end: 100811ae7; +[SCAttributedProfileHeaderButtonSubtask fetchIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811ae0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bba8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100811ae8; end: 100811b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811ae8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bba8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100811b38; end: 100811b9f; +[SCAttributedSHUTask profileHeaderButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309bb98) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309bba0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100811ba0; end: 100811bab; -[SCIdleMonitorV1 isTaskEnabledForWorkScheduler:] */

void FUN_100811ba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e02e8,PTR_s_shouldUseWorkSchedulerFor__11266aff8);
  return;
}



/* Entry: 100811bac; end: 100811bd7;  */

void FUN_100811bac(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100811bd8; end: 100811ca3; -[SCProfileHeaderButtonEntryPoint _fetchHeaderIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811bd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar2 = (long)_DAT_112731e0c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x000107c61144(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x000107c6111c(auStack_30,auStack_28);
    func_0x000107c43150(uVar1);
    func_0x000107c61120(auStack_30);
    func_0x000107c61120(auStack_28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be11a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchIconFromMyStoriesDataCoord_112562028);
  return;
}



/* Entry: 100811ca4; end: 100811dd3; -[SCProfileHeaderButtonEntryPoint _fetchIconFromMyStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811ca4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  lVar1 = param_1 + _DAT_112731df8;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c4d39c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112731dcc);
  func_0x000107c4f7c0(uVar4);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c4f738(lVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100811dd4; end: 100811de3; -[_TtC19SCMyStoriesServices19SCMyStoriesServices myStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2c78));
  return;
}



/* Entry: 100811de4; end: 100811e57;  */

void FUN_100811de4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3b2d8(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100811e58; end: 100811e97;  */

void FUN_100811e58(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b3d4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100811e98; end: 100811f07; -[SCLegacyStoriesServicesEntryPoint _createdMyStoriesDateUpdatePerfomer] */

void FUN_100811e98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3a454f);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x15);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100811f08; end: 1008122fb; -[SCLegacyStoriesServicesEntryPoint _createMyStoriesDataCoordinatorWithPerformer:snapPostCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100811f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = (long)_DAT_112754314;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  lVar14 = param_1 + lVar14;
  func_0x000107c61148();
  lVar15 = lVar14;
  func_0x000107c421c8();
  func_0x000107c61180();
  lVar1 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  lVar15 = (long)_DAT_1127542a0;
  lVar14 = param_1 + lVar15;
  func_0x000107c61148();
  lVar2 = lVar14;
  func_0x000107c5b43c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar14);
  lVar15 = param_1 + lVar15;
  func_0x000107c61148();
  lVar2 = lVar15;
  func_0x000107c410f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar14 = param_1 + _DAT_1127542b0;
  func_0x000107c61148();
  lVar15 = lVar14;
  func_0x000107c444a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar14 = param_1 + _DAT_112754324;
  func_0x000107c61148();
  lVar4 = lVar14;
  func_0x000107c3eabc();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar14 = param_1 + _DAT_11275429c;
  func_0x000107c61148();
  lVar5 = lVar14;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar14 = param_1 + _DAT_112754310;
  func_0x000107c61148();
  lVar6 = lVar14;
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar14);
  lVar14 = param_1 + _DAT_112754340;
  func_0x000107c61148();
  lVar6 = lVar14;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar14 = param_1 + _DAT_1127542d4;
  func_0x000107c61148();
  lVar7 = lVar14;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  puVar9 = PTR_PTR_1126b0e28;
  func_0x000107c610f4();
  func_0x000107c4660c();
  lVar14 = param_1 + _DAT_1127542bc;
  func_0x000107c61148();
  lVar10 = lVar14;
  func_0x000107c4ac94();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar14 = param_1 + _DAT_1127542f4;
  func_0x000107c61148();
  lVar11 = lVar14;
  func_0x000107c3de00();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar14 = param_1 + _DAT_112754328;
  func_0x000107c61148();
  lVar12 = lVar14;
  func_0x000107c3de48();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  puVar13 = PTR_PTR_1126cf4b0;
  func_0x000107c610f4();
  func_0x000107c3b350(param_1);
  func_0x000107c61180();
  lVar14 = lVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c4668c(puVar13,param_2,lVar1,param_3,puVar9,param_1,param_4,lVar3,lVar2,lVar15,lVar4,
                      lVar14,lVar8,lVar7,lVar6,lVar10,lVar11,lVar12);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1008122fc; end: 10081233b;  */

void FUN_1008122fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c934();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10081233c; end: 1008124a7; -[SCStoriesServicesEntryPoint _storiesSnapViewerDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081233c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126cf150;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112753c44;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c421c8();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112753c40;
  func_0x000107c61148(lVar5);
  lVar6 = lVar5;
  func_0x000107c4cfc4();
  func_0x000107c61180();
  lVar7 = param_1 + _DAT_112753c58;
  func_0x000107c61148(lVar7);
  lVar8 = lVar7;
  func_0x000107c444a0();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112753c48;
  func_0x000107c61148(param_1);
  lVar9 = param_1;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar10 = lVar9;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c46654(puVar1,param_2,lVar4,lVar6,lVar8,lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008124a8; end: 1008124af; -[SCStoriesNetworkingServices mixerNetworkRequester] */

undefined8 FUN_1008124a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008124b0; end: 10081267f; -[SCStoriesSnapViewerDataCoordinator initWithDocObjectContext:mixerRequester:grapheneMetricsEmitter:currentUserId:] */

undefined8 *
FUN_1008124b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126f9d68;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[5];
    func_0x000107c61174(puVar1);
    func_0x000107c4e524(uVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100812680; end: 100812687;  */

void FUN_100812680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beea710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__warmupAndObserveSnapViewersOnPe_112598368);
  return;
}



/* Entry: 100812688; end: 10081268f; -[SCStoriesBlizzardLoggingServices blizzardLogger] */

undefined8 FUN_100812688(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100812690; end: 100812767;  */

void FUN_100812690(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126d6768);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  func_0x000107c61180();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100812768; end: 10081288b; -[SCStoriesSnapViewerDataCoordinator _warmupAndObserveSnapViewersOnPerformer] */

void FUN_100812768(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_100812690(uVar1);
  func_0x000107c61180();
  func_0x000107c3cba4(param_1);
  func_0x000107c61144(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c4da54();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10081288c; end: 100812893; -[SCPlusFeatureGatingImpl badge] */

void FUN_10081288c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_target_112678178);
  return;
}



/* Entry: 100812894; end: 10081289f; +[SCStoriesSnapViewers table] */

undefined * FUN_100812894(void)

{
  return &UNK_10f4a2481;
}



/* Entry: 1008128a0; end: 100812937; -[SCStoriesSnapViewerDataCoordinator _updateCachedSnapViewersBySnapIdWithFetchedSnapViewers:] */

void FUN_1008128a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10050471c(param_3,&PTR___NSConcreteGlobalBlock_1109fbd80,
                &PTR___NSConcreteGlobalBlock_1109fbdc0);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  puStack_40 = &UNK_100c66bd4;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174();
  FUN_1000d76cc("APPSTORE",&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100812938; end: 1008129cb; -[SCPlusFeatureSettingEnabledProvider enabled] */

long FUN_100812938(long param_1)

{
  long lVar1;
  
  func_0x000107c611ec(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    (**(code **)(lVar1 + 0x10))();
  }
  else {
    func_0x000107c3ebcc();
  }
  func_0x000107c611f0(param_1 + 0x20);
  return lVar1;
}



/* Entry: 1008129cc; end: 1008129db; -[SCFeatureSettingsService plusBadgeVisibility] */

void FUN_1008129cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e7abb8,0);
  return;
}



/* Entry: 1008129dc; end: 100812a63; -[SCMyStoriesDatabaseStore initWithDocObjectContext:] */

undefined1 * FUN_1008129dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fcac0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100812a64; end: 100812a6b; -[SCStoriesSnapReadReceiptService lazySnapReadReceiptLogger] */

undefined8 FUN_100812a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100812a6c; end: 100812b83; -[SCLegacyStoriesServicesEntryPoint _createSnapDeleteCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100812a6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_1127542d8;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c43b50();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar5 = (long)_DAT_1127542a0;
  lVar1 = param_1 + lVar5;
  func_0x000107c61148(lVar1);
  lVar3 = lVar1;
  func_0x000107c5bf44();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar5 = param_1 + lVar5;
  func_0x000107c61148(lVar5);
  lVar1 = lVar5;
  func_0x000107c5b43c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  param_1 = param_1 + _DAT_1127542b0;
  func_0x000107c61148(param_1);
  lVar5 = param_1;
  func_0x000107c444a0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar4 = PTR_PTR_1126cf478;
  func_0x000107c610f4(PTR_PTR_1126cf478);
  func_0x000107c48a58();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100812b84; end: 100812b8b; -[SCStoriesNetworkingServices fsnNetworkRequester] */

undefined8 FUN_100812b84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100812b8c; end: 100812ca3; -[SCStoriesSnapDeleteCoordinator initWithStoriesFSNNetworkRequester:storiesDataCoordinator:storiesSnapViewerDataCoordinator:grapheneMetricsEmitter:] */

undefined1 *
FUN_100812b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f3e10;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100812ca4; end: 1008132b7; -[SCMyStoriesDataCoordinator initWithDocObjectContext:performer:myStoriesStore:snapDeleteCoordinator:snapPostCoordinator:snapViewerDataCoordinator:customStoriesDataFetcher:grapheneMetricsEmitter:blizzardLogger:currentUserId:currentUsername:circumstanceEngine:notificationPool:snapReadReceiptLogger:appLifecycleManager:appStartExperimentReader:] */

undefined8 *
FUN_100812ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  puStack_80 = PTR_PTR_1126f3e20;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_12);
    uVar2 = puVar1[1];
    puVar1[1] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[2];
    puVar1[2] = param_13;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126cf350;
    func_0x000107c61160();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126cf358;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c58bd8(puVar1[3]);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c53fe8(puVar1[4]);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_18;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c61160();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xc];
    func_0x000107c4f7c0(uVar2);
    func_0x000107c61180();
    func_0x000107c5a168(puVar1[0xe]);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_10694e070;
    puStack_98 = &UNK_1108429c8;
    func_0x000107c61174(param_14);
    uStack_90 = param_14;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x11,param_15);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c3c5e8(puVar1);
    func_0x000107c61144(auStack_b8,puVar1);
    puVar6 = PTR_PTR_1126be840;
    puVar4 = PTR_PTR_1126aeec0;
    puVar3 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126be848;
    func_0x000107c4ad94(PTR_PTR_1126be848);
    func_0x000107c61180();
    func_0x000107c5bf20(puVar6);
    func_0x000107c61180();
    func_0x000107c40418(puVar3);
    func_0x000107c61180();
    puVar7 = PTR_PTR_1126ae970;
    func_0x000107c5d9b8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_c0,auStack_b8);
    func_0x000107c3e2d8(puVar4);
    func_0x000107c611b0();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61170(uStack_90);
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008132b8; end: 10081336b; -[SCMyStoriesDataCoordinatingListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008132b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_1130803a8;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_1130803b0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_113080398;
  uVar2 = 0x113080280;
  FUN_1000285a8(0x113080280,&UNK_10dd0b500);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_10081336c();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10081336c; end: 10081338b;  */

void FUN_10081336c(void)

{
  func_0x000107c61168(&PTR_PTR_1129c2998);
  return;
}



/* Entry: 10081338c; end: 1008133ef; -[SCStoriesSnapSaveCoordinator init] */

undefined1 * FUN_10081338c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3e48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008133f0; end: 1008133fb; -[SCStoriesSnapSaveCoordinator setSaveStateForwarder:] */

void FUN_1008133f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1008133fc; end: 100813407; -[SCStoriesSnapDeleteCoordinator setDeleteStateForwarder:] */

void FUN_1008133fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 100813408; end: 10081359f; -[SCMyStoriesDataCoordinator _setUpInitialData] */

void FUN_100813408(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100813688;
  puStack_78 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c4e524(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c4ebcc();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c4da84();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c416e0(param_1);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 1008135a0; end: 1008135a7; -[SCCustomStoriesDataSyncer postableCustomStoriesObservable] */

void FUN_1008135a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c105590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_postableCustomStoriesObservable_11261ef80);
  return;
}



/* Entry: 1008135a8; end: 10081362f; -[SCPostableCustomStoriesObserver postableCustomStoriesObservable] */

void FUN_1008135a8(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100813630;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  if (lRam0000000113728bd8 != -1) {
    FUN_10002a2fc(0x113728bd8,&puStack_48);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100813630; end: 100813687;  */

void FUN_100813630(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100813ae4;
  puStack_20 = &UNK_110842e18;
  func_0x000107c4e524(*(undefined8 *)(lStack_18 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 100813688; end: 1008136b3;  */

void FUN_100813688(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3c5ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008136b4; end: 1008137c7; -[SCMyStoriesDataCoordinator _setUpInitialDataOnPerformer] */

/* WARNING: Possible PIC construction at 0x000100813724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008137c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100813780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008137c4) */
/* WARNING: Removing unreachable block (ram,0x000100813728) */
/* WARNING: Removing unreachable block (ram,0x000100813784) */

void FUN_1008136b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x000107c43234(lVar1,param_2,*(undefined8 *)(param_1 + 8));
  func_0x000107c61180();
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x000107c43234(lVar2,param_2,&PTR____CFConstantStringClassReference_110e43098);
  func_0x000107c61180();
  if (lVar1 == 0 || lVar2 == 0) {
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      uVar4 = *(undefined8 *)(param_1 + 8);
      lVar2 = *(long *)(param_1 + 0x78);
      func_0x000107c4f7c0(lVar2);
      func_0x000107c61180();
      func_0x000107c49744(uVar3,param_2,uVar4,1,lVar2,&PTR___NSConcreteGlobalBlock_11094cf50);
    }
    else if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      lVar2 = *(long *)(param_1 + 0x78);
      func_0x000107c4f7c0(lVar2);
      func_0x000107c61180();
      func_0x000107c49744(uVar3,param_2,&PTR____CFConstantStringClassReference_110e43098,3,lVar2,
                          &PTR___NSConcreteGlobalBlock_11094cf70);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1008137c8; end: 1008139c7; -[SCMyStoriesDatabaseStore fetchPlaybackSequenceForStoryWithId:] */

void FUN_1008137c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined4 uStack_128;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 uStack_c9;
  undefined **ppuStack_c8;
  undefined4 uStack_c0;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4adac();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar3 = &uStack_c9;
    FUN_1008139c8();
    uStack_138 = 0xf;
    uStack_128 = 0x100;
    func_0x000107c61174(param_3);
    ppuStack_140 = &PTR_DAT_110862760;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_e8 = 0;
    plStack_d8 = (long *)0x0;
    uStack_ae = *(undefined2 *)(puVar3 + 0x1a);
    uStack_c0 = 10;
    uStack_b0 = 0x100;
    ppuStack_c8 = &PTR_DAT_110862700;
    uStack_78 = 0;
    uStack_80 = 0;
    plStack_68 = (long *)0x0;
    uStack_70 = 0;
    plStack_60 = (long *)0x0;
    lStack_110 = param_3;
    puStack_90 = puVar3;
    puStack_88 = (undefined1 *)&ppuStack_140;
    func_0x000107c3b6ac(param_1,param_2,&ppuStack_c8);
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    plVar1 = plStack_60;
    ppuStack_c8 = &PTR_DAT_110862700;
    plStack_60 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_68;
    plStack_68 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_58 = &uStack_80;
    FUN_100105004(&puStack_58);
    plVar1 = plStack_d8;
    ppuStack_140 = &PTR_DAT_110862760;
    plStack_d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_e0;
    plStack_e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_58 = &uStack_f8;
    FUN_100105004(&puStack_58);
    func_0x000107c61170(lStack_110);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1008139c8; end: 100813a2b;  */

undefined ** FUN_1008139c8(void)

{
  int iVar1;
  
  if ((bRam0000000113827bd0 & 1) == 0) {
    iVar1 = 0x13827bd0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113263a80,0x100000000);
      func_0x000107c60e4c(0x113827bd0);
    }
  }
  return &PTR_PTR_113263a80;
}



/* Entry: 100813a2c; end: 100813ae3; -[SCMyStoriesDatabaseStore _fetchForClassWithFilter:] */

void FUN_100813a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c61158(PTR_PTR_1126b1338);
  if (lVar2 == 0) {
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_60,lVar2);
  }
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_7c = 0;
  puVar1 = &uStack_60;
  FUN_1000e77a0(puVar1,param_3,&lStack_78,&uStack_7c);
  func_0x000107c61180();
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_38);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100813ae4; end: 100813aeb;  */

void FUN_100813ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_startObservingPostableCustomStor_1126718b0);
  return;
}



/* Entry: 100813aec; end: 100813af7; +[SCStoriesMyStoryPlaybackSequence table] */

undefined * FUN_100813aec(void)

{
  return &UNK_10f4a1b30;
}



/* Entry: 100813af8; end: 100813b9f;  */

void FUN_100813af8(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_100c66c18;
  puStack_48 = &UNK_110841fb0;
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c61174(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  func_0x000107c61170(uStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100813ba0; end: 100813c37; -[SCMyStoriesDataCoordinator deleteExpiredMetadata] */

/* WARNING: Possible PIC construction at 0x000100813c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100813c1c) */

void FUN_100813ba0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61160(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c5c9e4();
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c4f7c0(uVar1);
  func_0x000107c61180();
  func_0x000107c416ac(param_1,uVar2,param_3,uVar3,uVar4,uVar1,&PTR___NSConcreteGlobalBlock_11094d2c0
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100813c38; end: 100813d43; -[SCMyStoriesDatabaseStore deleteAllMyStoriesExpiredSince:currentUserId:grapheneEmitter:completionQueue:completion:] */

void FUN_100813c38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x100813d54;
  puStack_78 = &UNK_11089ebb0;
  lStack_70 = param_2;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_1;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c4e55c(uVar1,param_3,&puStack_90,param_6,param_7);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100813d44; end: 100813d6b; +[SCAttributedStoriesSubtask legacyWarmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100813d44(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b100) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100813d6c; end: 10081409b; -[SCMyStoriesDatabaseStore _deleteAllMyStoriesExpiredSince:currentUserId:grapheneEmitter:txContent:] */

void FUN_100813d6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined4 uStack_1dc;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_150 = param_4;
  func_0x000107c61174(param_4);
  uStack_148 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar6 = param_2;
  func_0x000107c42fac();
  func_0x000107c61180();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  func_0x000107c61174();
  lVar7 = lVar6;
  lStack_158 = lVar6;
  func_0x000107c4080c();
  if (lVar7 != 0) {
    lVar6 = *plStack_130;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_130 != lVar6) {
          func_0x000107c61128(lStack_158);
        }
        lVar8 = *(long *)(lStack_138 + unaff_x20 * 8);
        lVar2 = lVar8;
        func_0x000107c5c068(lVar8);
        func_0x000107c61180();
        lVar3 = lVar8;
        func_0x000107c5c080();
        if (lVar3 == 3) {
          func_0x000107c40808(lVar2);
          func_0x000107c4bcf4(uStack_148);
        }
        lVar3 = lVar2;
        FUN_1008163a8(param_1,lVar2);
        func_0x000107c61180();
        func_0x000107c3cc34(param_2);
        func_0x000107c5c080();
        if (lVar8 == 3) {
          func_0x000107c40808(lVar3);
          func_0x000107c4bcf0(uStack_148);
        }
        lVar8 = lVar3;
        FUN_100504554(lVar3,&PTR___NSConcreteGlobalBlock_110a4fb70);
        func_0x000107c3d7a0(puVar1);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        unaff_x20 = unaff_x20 + 1;
      } while (lVar7 != unaff_x20);
      lVar7 = lStack_158;
      func_0x000107c4080c();
    } while (lVar7 != 0);
  }
  func_0x000107c61170(lStack_158);
  FUN_100816a48(param_1,param_6);
  func_0x000107c40808(puVar1);
  func_0x000107c4bd10(uStack_148);
  puVar4 = puVar1;
  func_0x000107c40794(puVar1);
  FUN_100817d0c(param_6,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lStack_158);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uStack_148);
  lVar7 = lStack_150;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lStack_158);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uStack_148);
  func_0x000107c61170(lStack_150);
  func_0x000107c60bd8();
  pcStack_168 = FUN_10081409c;
  lVar7 = *(long *)(lVar7 + 8);
  lStack_180 = unaff_x20;
  lStack_178 = lVar6;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x000107c61158(PTR_PTR_1126b1338);
  if (lVar7 == 0) {
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_1c0,lVar7);
  }
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1dc = 0;
  puVar5 = &uStack_1c0;
  func_0x00010054c81c(puVar5,&lStack_1d8,&uStack_1dc);
  func_0x000107c61180();
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_198);
  func_0x000107c61170(uStack_1a8);
  func_0x000107c61170(uStack_1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10081409c; end: 10081414b; -[SCMyStoriesDatabaseStore fetchAllPlaybackSequences] */

void FUN_10081409c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c61158(PTR_PTR_1126b1338);
  if (lVar2 == 0) {
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_60,lVar2);
  }
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_7c = 0;
  puVar1 = &uStack_60;
  func_0x00010054c81c(puVar1,&lStack_78,&uStack_7c);
  func_0x000107c61180();
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_38);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10081414c; end: 1008141d3;  */

void FUN_10081414c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008141d4; end: 1008143f7; +[SCStoriesMyStoryPlaybackSequence immutableObjectParse:bufferSize:] */

void FUN_1008141d4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint *puVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126b1338;
  func_0x000107c610f4(PTR_PTR_1126b1338);
  lVar7 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar6 < 5) {
    puVar9 = (undefined *)0x0;
LAB_10081428c:
    uVar10 = 0;
LAB_100814290:
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar12 = (uint *)((long)piVar1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar12 + (ulong)*puVar12 + 4);
      func_0x000107c61180();
      lVar7 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar7);
    }
    lVar7 = -lVar7;
    if (uVar6 < 7) goto LAB_10081428c;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 6);
    if (uVar8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)piVar1 + uVar8);
    }
    if (uVar6 < 9) goto LAB_100814290;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 8);
    if (uVar8 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      func_0x000107c61180();
      puVar12 = puVar2 + 1;
      if (*puVar2 != 0) {
        do {
          lVar7 = (long)puVar12 + (ulong)*puVar12;
          FUN_100952a54(lVar7);
          func_0x000107c61180();
          func_0x000107c3d798(puVar4,param_2,lVar7);
          func_0x000107c61170(lVar7);
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar2 + 1 + *puVar2);
      }
      puVar11 = puVar4;
      func_0x000107c40794(puVar4);
      func_0x000107c61170(puVar4);
      lVar7 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((10 < uVar6) && (uVar8 = (ulong)*(ushort *)((long)piVar1 + lVar7 + 10), uVar8 != 0)) {
      uVar5 = *(undefined4 *)((long)piVar1 + uVar8);
      goto LAB_100814298;
    }
  }
  uVar5 = 0;
LAB_100814298:
  func_0x000107c48a94(puVar3,param_2,puVar9,uVar10,puVar11,uVar5);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1008143f8; end: 1008144d3; -[SCStoriesMyStoryPlaybackSequence initWithStoryId:storyType:storySnaps:variant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1008143f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112706a88;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc8c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc8c) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc90) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc94);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc94) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fc98) = param_6;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008144d4; end: 10081458b; -[SCMyStoriesDataCoordinator queryAllStoriesWithCompletionQueue:completion:] */

void FUN_1008144d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1008173c0;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_68);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10081458c; end: 100814767; -[SCProfileHeaderButtonEntryPoint _beginMyStoryObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081458c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c3b9f0();
  func_0x000107c61144(auStack_58,param_1);
  lVar6 = (long)_DAT_112731df8;
  lVar1 = param_1 + lVar6;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c4d39c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c42d60();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  lVar5 = lVar4;
  func_0x000107c5c320(lVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar6 = param_1 + lVar6;
  func_0x000107c61148(lVar6);
  lVar1 = lVar6;
  func_0x000107c4d39c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3d740();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
  param_1 = param_1 + _DAT_112731dfc;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c5bf98();
  func_0x000107c61180();
  func_0x000107c3d740();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100814768; end: 10081486f; -[SCProfileHeaderButtonEntryPoint _initThumbnailProviderAndFetchIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100814768(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  param_1 = param_1 + _DAT_112731e04;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c5da30();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4f390(lVar2);
  func_0x000107c611b0();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100814870; end: 1008148af; -[SCStoriesMyStoryPlaybackSequence .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100814894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100814898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100814870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fc94,0);
  return;
}



/* Entry: 1008148b0; end: 1008148b7;  */

void FUN_1008148b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7b08;
  func_0x000107c610f8();
  func_0x000107c45ac0();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1008148b8; end: 100814917;  */

void FUN_1008148b8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7b08;
  func_0x000107c610f8();
  func_0x000107c45ac0();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 100814918; end: 100814b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100814918(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar2 = *(undefined8 *)(lStack_68 + _DAT_113091ad8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar6);
  FUN_100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar3 = uVar2;
  func_0x000107c5d984(uVar2);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126a7930;
  func_0x000107c610f8(PTR_PTR_1126a7930);
  func_0x000107c5fadc(uVar4,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c47ff0(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c61174(uVar2);
  FUN_100083b20(&lStack_68);
  lVar6 = lStack_68;
  func_0x000107c42498(lStack_68);
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  uVar3 = uStack_78;
  func_0x000107c3fa04(uStack_78);
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  FUN_100083b20(&uStack_80);
  uVar4 = uStack_80;
  func_0x000107c5dbd4(uStack_80);
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000107c61174(puVar5);
  FUN_100083b20(&lStack_88);
  uVar8 = *(undefined8 *)(lStack_88 + _DAT_113092298);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_88);
  puVar7 = PTR_PTR_1126a7938;
  func_0x000107c610f8();
  func_0x000107c4933c();
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar2);
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar2);
    *param_1 = puVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100814b84);
  (*pcVar1)();
}



/* Entry: 100814b84; end: 100814bcb;  */

/* WARNING: Possible PIC construction at 0x000100814bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100814bbc) */

void FUN_100814b84(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100814bcc; end: 100814dc7; -[SCMyStoriesDataCoordinator _onPostableCustomStories:] */

void FUN_100814bcc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar7 = *(long *)(param_1 + 0x68);
  func_0x000107c61174(param_3);
  func_0x000107c43238();
  func_0x000107c61180();
  lVar2 = lVar7;
  FUN_100817178();
  func_0x000107c61170(lVar7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_10694e108;
  puStack_80 = &UNK_11094cfd0;
  lVar7 = param_3;
  lStack_78 = param_1;
  FUN_100817178(param_3,&puStack_98);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  puStack_b0 = &UNK_10694e174;
  puStack_a8 = &UNK_110856a28;
  func_0x000107c61174(lVar2);
  lVar3 = lVar7;
  lStack_a0 = lVar2;
  func_0x0001006372a4(lVar7,&puStack_c0);
  lVar4 = param_3;
  FUN_100817178(param_3,&PTR___NSConcreteGlobalBlock_11094d000);
  func_0x000107c61170(param_3);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  puStack_d8 = &UNK_10694e19c;
  puStack_d0 = &UNK_110856a28;
  func_0x000107c61174(lVar4);
  lVar5 = lVar2;
  lStack_c8 = lVar4;
  func_0x0001006372a4(lVar2,&puStack_e8);
  lVar6 = lVar3;
  func_0x000107c40808();
  if ((lVar6 != 0) || (lVar6 = lVar5, func_0x000107c40808(), lVar6 != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar5);
    func_0x000107c4e55c(uVar8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lStack_a0);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100814dc8; end: 100814e83;  */

undefined8 FUN_100814dc8(void)

{
  int iVar1;
  
  if ((bRam0000000113827c48 & 1) == 0) {
    iVar1 = 0x13827c48;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113827be0 = 0xe;
      puRam0000000113827be8 = &UNK_10f4a1b26;
      uRam0000000113827bf0 = 0x1010000;
      pcRam0000000113827bf8 = FUN_100816014;
      puRam0000000113827c00 = &UNK_108519090;
      ppuRam0000000113827bd8 = &PTR_DAT_110a4fcc0;
      uRam0000000113827c18 = 0;
      uRam0000000113827c10 = 0;
      uRam0000000113827c28 = 0;
      uRam0000000113827c20 = 0;
      uRam0000000113827c38 = 0;
      uRam0000000113827c30 = 0;
      uRam0000000113827c40 = 0;
      func_0x000107c60e34(&DAT_1084d37f4,0x113827bd8,0x100000000);
      func_0x000107c60e4c(0x113827c48);
    }
  }
  return 0x113827bd8;
}



/* Entry: 100814e84; end: 100814ffb; -[SCMyStoriesDatabaseStore fetchPlaybackSequencesForStoryType:] */

void FUN_100814e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined **ppuStack_128;
  undefined4 uStack_120;
  undefined4 uStack_110;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined1 uStack_b1;
  undefined **ppuStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined1 *puStack_78;
  undefined ***pppuStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  puVar2 = &uStack_b1;
  FUN_100814dc8();
  uStack_120 = 0xf;
  uStack_110 = 0x100;
  ppuStack_128 = &PTR_DAT_110a4fcc0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_d0 = 0;
  plStack_c0 = (long *)0x0;
  uStack_96 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_a8 = 10;
  uStack_98 = 0x100;
  ppuStack_b0 = &PTR_DAT_110a4fc60;
  pppuStack_70 = &ppuStack_128;
  lStack_60 = 0;
  lStack_68 = 0;
  plStack_50 = (long *)0x0;
  uStack_58 = 0;
  plStack_48 = (long *)0x0;
  uStack_f8 = param_3;
  puStack_78 = puVar2;
  func_0x000107c3b6ac(param_1,param_2,&ppuStack_b0);
  func_0x000107c61180();
  plVar1 = plStack_48;
  ppuStack_b0 = &PTR_DAT_110a4fc60;
  plStack_48 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_50;
  plStack_50 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    func_0x000107c60e14();
  }
  plVar1 = plStack_c0;
  ppuStack_128 = &PTR_DAT_110a4fcc0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c8;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_e0 != 0) {
    lStack_d8 = lStack_e0;
    func_0x000107c60e14();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


