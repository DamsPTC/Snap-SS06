/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c808fc; end: 102c80993;  */

long FUN_102c808fc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c80994; end: 102c809c7;  */

void FUN_102c80994(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c809c8; end: 102c80a1b;  */

void FUN_102c809c8(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_102c80a44();
  lVar1 = *(long *)(lVar1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c80a1c; end: 102c80a23;  */

undefined8 FUN_102c80a1c(void)

{
  return 0;
}



/* Entry: 102c80a24; end: 102c80a43;  */

void FUN_102c80a24(void)

{
  func_0x000107c61168(&PTR_PTR_112f075a0);
  return;
}



/* Entry: 102c80a44; end: 102c80b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c80a44(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105ba9b0;
  func_0x000107c613fc(&UNK_1105ba9b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102c80d64;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102c80d64);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f07620),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102c80b40; end: 102c80c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c80b40(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102d2468c(&uStack_90,&UNK_1105c3b40,uVar2,&UNK_1105c3b40,uVar3,&PTR_DAT_1105c3330,param_1);
  if (lStack_78 != 0) {
    func_0x000107c61428(param_2 + 0x10,&uStack_90,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar1 = param_2 + _DAT_112f07618;
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      lVar4 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar2);
      pcVar5 = *(code **)(lVar4 + 8);
      func_0x000107c61434(lStack_78);
      func_0x00010006c00c(uStack_90,uStack_88);
      (*pcVar5)(uStack_80,lStack_78,uStack_90,uStack_88,uVar2,lVar4);
      func_0x00010006c090(uStack_90,uStack_88);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(lStack_78);
    }
    FUN_102c80d6c(uStack_90,uStack_88,uStack_80,lStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 102c80c9c; end: 102c80cfb; -[_TtC24AdPlaybackImplementation32DpaPlaybackEventHandlingWorkflow init] */

void FUN_102c80c9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.DpaPlaybackEventHandlingWorkflow",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c80cc8);
  (*pcVar1)();
}



/* Entry: 102c80cfc; end: 102c80d43; -[_TtC24AdPlaybackImplementation32DpaPlaybackEventHandlingWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c80d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c80d1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c80cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f07610));
  return;
}



/* Entry: 102c80d44; end: 102c80d63;  */

void FUN_102c80d44(void)

{
  func_0x000107c61168(&PTR_PTR_11289ae40);
  return;
}



/* Entry: 102c80d64; end: 102c80d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c80d64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102d2468c(&uStack_90,&UNK_1105c3b40,uVar2,&UNK_1105c3b40,uVar3,&PTR_DAT_1105c3330,param_1);
  if (lStack_78 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_90,0,0);
    lVar5 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar1 = lVar5 + _DAT_112f07618;
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      lVar4 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar2);
      pcVar6 = *(code **)(lVar4 + 8);
      func_0x000107c61434(lStack_78);
      func_0x00010006c00c(uStack_90,uStack_88);
      (*pcVar6)(uStack_80,lStack_78,uStack_90,uStack_88,uVar2,lVar4);
      func_0x00010006c090(uStack_90,uStack_88);
      func_0x000107c61170(lVar5);
      func_0x000107c6142c(lStack_78);
    }
    FUN_102c80d6c(uStack_90,uStack_88,uStack_80,lStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 102c80d6c; end: 102c80da3;  */

/* WARNING: Possible PIC construction at 0x000102c80d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c80d90) */

void FUN_102c80d6c(void)

{
  long in_x3;
  undefined8 in_x5;
  
  if (in_x3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x5);
    return;
  }
  return;
}



/* Entry: 102c80da4; end: 102c80eeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c80da4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f07650);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_112f07658;
  uVar3 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f07660) = param_1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c80eec; end: 102c80eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c80eec(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105ba9d8;
  func_0x000107c613fc(&UNK_1105ba9d8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102c81364;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102c81364);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f07658),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102c80ef0; end: 102c80feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c80ef0(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105ba9d8;
  func_0x000107c613fc(&UNK_1105ba9d8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102c81364;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102c81364);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f07658),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102c80fec; end: 102c8101f;  */

void FUN_102c80fec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c81020; end: 102c81067; -[_TtC24AdPlaybackImplementation26AdExitMultiSegmentWorkflow dealloc] */

void FUN_102c81020(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_dealloc_112525b20;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  return;
}



/* Entry: 102c81068; end: 102c8109f; -[_TtC24AdPlaybackImplementation26AdExitMultiSegmentWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c81084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c81088) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c81068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f07660));
  return;
}



/* Entry: 102c810a0; end: 102c810cb; -[_TtC24AdPlaybackImplementation26AdExitMultiSegmentWorkflow init] */

void FUN_102c810a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdExitMultiSegmentWorkflow",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c810cc);
  (*pcVar1)();
}



/* Entry: 102c810cc; end: 102c811b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c810cc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102d2468c(&uStack_88,&UNK_1105c41d8,uVar2,&UNK_1105c41d8,uVar3,&PTR_DAT_1105c33a8,param_1);
  if (lStack_68 != 0) {
    func_0x000107c61428(param_2 + 0x10,&uStack_88,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    FUN_102c8136c(uStack_88,uStack_80,uStack_78,uStack_70,lStack_68,uStack_60,uStack_58);
    if (param_2 != 0) {
      puVar1 = (undefined8 *)(param_2 + _DAT_112f07650);
      *puVar1 = uStack_88;
      *(undefined1 *)(puVar1 + 1) = 0;
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102c811b4; end: 102c811bb; -[_TtC24AdPlaybackImplementation26AdExitMultiSegmentWorkflow pagePropertiesForItemId:] */

void FUN_102c811b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102c811bc; end: 102c812cb; -[_TtC24AdPlaybackImplementation26AdExitMultiSegmentWorkflow adTrackContext:forAdResponse:snapIndex:isExitingAd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c811bc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,int param_6)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f07650);
  cVar1 = *(char *)((undefined8 *)(param_1 + _DAT_112f07650) + 1);
  func_0x000107c61174(param_3);
  if (cVar1 != '\x01' && param_6 != 0) {
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    uVar2 = param_4;
    FUN_102c812cc(param_4,param_5);
    if ((uVar2 & 1) != 0) {
      func_0x000107c61174(param_3);
      func_0x0001042afcd0(&uStack_b0);
      uStack_78 = uStack_b0;
      uStack_70 = uStack_a8;
      uStack_68 = uStack_a0;
      uStack_60 = uStack_98;
      uStack_50 = 0;
      uStack_48 = uStack_80;
      uStack_58 = uVar3;
      func_0x0001042b0804(0);
      func_0x000107c610f8();
      func_0x0001042b0418(&uStack_78);
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c812cc; end: 102c81343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c812cc(long param_1,undefined8 param_2)

{
  func_0x000107c3d4b4(param_1,param_2,param_2);
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c81344; end: 102c81363;  */

void FUN_102c81344(void)

{
  func_0x000107c61168(&PTR_PTR_11289af10);
  return;
}



/* Entry: 102c81364; end: 102c8136b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c81364(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102d2468c(&uStack_88,&UNK_1105c41d8,uVar2,&UNK_1105c41d8,uVar3,&PTR_DAT_1105c33a8,param_1);
  if (lStack_68 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_88,0,0);
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61618();
    FUN_102c8136c(uStack_88,uStack_80,uStack_78,uStack_70,lStack_68,uStack_60,uStack_58);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + _DAT_112f07650);
      *puVar1 = uStack_88;
      *(undefined1 *)(puVar1 + 1) = 0;
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 102c8136c; end: 102c8139b;  */

/* WARNING: Possible PIC construction at 0x000102c81384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c81388) */

void FUN_102c8136c(void)

{
  long in_x4;
  
  if (in_x4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x4);
    return;
  }
  return;
}



/* Entry: 102c8139c; end: 102c81853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8139c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c613fc();
  lVar1 = param_1 + _DAT_113068e98;
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  lVar11 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar4);
  (**(code **)(lVar11 + 8))(uVar4,lVar11);
  uVar13 = *(undefined8 *)(param_1 + _DAT_113068e88);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar3 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar14 = *(undefined8 *)(param_1 + _DAT_113068ea0);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  lVar11 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar5);
  pcVar12 = *(code **)(lVar11 + 0x38);
  func_0x000107c615f0(uVar14);
  func_0x000107c615f0(uVar13);
  func_0x000107c61434(uVar3);
  (*pcVar12)();
  uVar6 = uVar5;
  func_0x000107c614f0();
  (**(code **)(lVar11 + 0x10))();
  func_0x000107c615e8(uVar5);
  uVar5 = param_3;
  func_0x000107c4ac30();
  func_0x000107c61180();
  lVar7 = 0;
  func_0x000102c827b4();
  lVar8 = lVar7;
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar9 = "AdFavoriteWorkflow";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar8 + 0x50) = pcVar9;
  uVar10 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar8 + 0x10) = uVar4;
  *(undefined8 *)(lVar8 + 0x18) = uVar13;
  *(undefined8 *)(lVar8 + 0x20) = uVar14;
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  *(long *)(lVar8 + 0x30) = lVar11;
  *(undefined8 *)(lVar8 + 0x38) = uVar5;
  *(undefined8 *)(lVar8 + 0x40) = uVar2;
  *(undefined8 *)(lVar8 + 0x48) = uVar3;
  *(undefined8 *)(lVar8 + 0x58) = uVar10;
  *(undefined8 *)(lVar8 + 0x60) = param_2;
  *(undefined1 *)(lVar8 + 0x68) = 0;
  lVar1 = param_4 + _DAT_113068e50;
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  lVar11 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar4);
  ppuStack_70 = &PTR_DAT_1105baa60;
  ppuStack_68 = &PTR_DAT_1105baa38;
  pcVar12 = *(code **)(lVar11 + 0x10);
  alStack_90[0] = lVar8;
  lStack_78 = lVar7;
  func_0x000107c6157c(lVar8);
  (*pcVar12)(alStack_90,uVar4,lVar11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000100dd2718(alStack_90);
  *(long *)(unaff_x20 + 0x10) = lVar8;
  return;
}



/* Entry: 102c81854; end: 102c81923;  */

/* WARNING: Possible PIC construction at 0x000102c818c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c818c8) */

void FUN_102c81854(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long *plVar3;
  code *pcVar4;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x10);
  if (puVar2 != (undefined *)0x0) {
    plVar3 = *(long **)(puVar2 + 0x10);
    if (plVar3 == (long *)0x0) {
      func_0x000107c6157c(puVar2);
      FUN_102c81a1c();
    }
    else {
      puVar1 = &UNK_1105baa00;
      func_0x000107c613fc(&UNK_1105baa00,0x18,7);
      func_0x000107c61644(puVar1 + 0x10,puVar2);
      pcVar4 = *(code **)(*plVar3 + 0x60);
      func_0x000107c6157c(puVar2);
      (*pcVar4)(0x102c81970,puVar1);
      puVar2 = puVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar2);
    return;
  }
  return;
}



/* Entry: 102c81924; end: 102c81947;  */

void FUN_102c81924(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c81948; end: 102c81967;  */

void FUN_102c81948(void)

{
  FUN_102c81854();
  return;
}



/* Entry: 102c81968; end: 102c81977;  */

undefined8 FUN_102c81968(void)

{
  return 0;
}



/* Entry: 102c81978; end: 102c81997;  */

void FUN_102c81978(void)

{
  func_0x000107c61168(&PTR_PTR_112f076d0);
  return;
}



/* Entry: 102c81998; end: 102c81a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c81998(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(lVar2 + _DAT_11308c0c8);
      func_0x000107c30b1c();
      if (iVar1 == 0x10) {
        FUN_102c82060();
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c81a1c; end: 102c81bfb;  */

void FUN_102c81a1c(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c614f0(uVar6);
  puVar4 = &UNK_1105baa80;
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_1105baa80,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcVar7 = *(code **)(lVar5 + 8);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_102c82a18;
  (*pcVar7)(FUN_102c82a18,puVar1,uVar6,lVar5);
  func_0x000107c61578(puVar1,2);
  pcVar7 = pcVar2;
  func_0x000107c614f0(pcVar2);
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_1105baa80,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcVar8 = *(code **)(lVar5 + 0x10);
  func_0x000107c6157c(puVar1);
  uVar6 = 0x102c82a20;
  (*pcVar8)(0x102c82a20,puVar1,pcVar7,lVar5);
  func_0x000107c615e8(pcVar2);
  func_0x000107c61578(puVar1,2);
  uVar3 = uVar6;
  func_0x000107c614f0(uVar6);
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_1105baa80,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcVar7 = *(code **)(lVar5 + 0x18);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_102c82a28;
  (*pcVar7)(FUN_102c82a28,puVar1,uVar3,lVar5);
  func_0x000107c615e8(uVar6);
  func_0x000107c61578(puVar1,2);
  pcVar7 = pcVar2;
  func_0x000107c614f0(pcVar2);
  func_0x000107c613fc(&UNK_1105baa80,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcVar8 = *(code **)(lVar5 + 0x20);
  func_0x000107c6157c(puVar4);
  (*pcVar8)(0x102c82a44,puVar4,pcVar7,lVar5);
  func_0x000107c615e8();
  func_0x000107c615e8(pcVar2);
  func_0x000107c61578(puVar4,2);
  return;
}



/* Entry: 102c81bfc; end: 102c81c6f;  */

void FUN_102c81bfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_102c81c70(param_1,1,param_2);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 102c81c70; end: 102c81dfb;  */

/* WARNING: Possible PIC construction at 0x000102c81cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c81cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c81dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c81ccc) */
/* WARNING: Removing unreachable block (ram,0x000102c81dd8) */
/* WARNING: Removing unreachable block (ram,0x000102c81cd4) */
/* WARNING: Removing unreachable block (ram,0x000102c81cfc) */
/* WARNING: Removing unreachable block (ram,0x000102c81d10) */
/* WARNING: Removing unreachable block (ram,0x000102c81d3c) */
/* WARNING: Removing unreachable block (ram,0x000102c81db0) */
/* WARNING: Removing unreachable block (ram,0x000102c81ddc) */
/* WARNING: Removing unreachable block (ram,0x000102c81d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c81c70(long param_1)

{
  func_0x0001041f3970();
  if (param_1 != 0) {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113068f40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c81dfc; end: 102c81e5f;  */

void FUN_102c81dfc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102c81c70(param_1,0,0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c81e60; end: 102c81fef;  */

/* WARNING: Possible PIC construction at 0x000102c81eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c81ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c81fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c81eb8) */
/* WARNING: Removing unreachable block (ram,0x000102c81fcc) */
/* WARNING: Removing unreachable block (ram,0x000102c81ec0) */
/* WARNING: Removing unreachable block (ram,0x000102c81ee8) */
/* WARNING: Removing unreachable block (ram,0x000102c81efc) */
/* WARNING: Removing unreachable block (ram,0x000102c81f28) */
/* WARNING: Removing unreachable block (ram,0x000102c81f34) */
/* WARNING: Removing unreachable block (ram,0x000102c81fa4) */
/* WARNING: Removing unreachable block (ram,0x000102c81fd0) */
/* WARNING: Removing unreachable block (ram,0x000102c81f3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c81e60(long param_1)

{
  func_0x0001041f3970();
  if (param_1 != 0) {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113068f40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c81ff0; end: 102c8205f;  */

void FUN_102c81ff0(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102c81e60(param_1,param_3 & 1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c82060; end: 102c826d7;  */

/* WARNING: Possible PIC construction at 0x000102c820c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c82100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c82158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c821a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c821b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c823ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c823bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c823cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c821e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c82200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c823d0) */
/* WARNING: Removing unreachable block (ram,0x000102c823c0) */
/* WARNING: Removing unreachable block (ram,0x000102c823b0) */
/* WARNING: Removing unreachable block (ram,0x000102c821b4) */
/* WARNING: Removing unreachable block (ram,0x000102c82204) */
/* WARNING: Removing unreachable block (ram,0x000102c821a4) */
/* WARNING: Removing unreachable block (ram,0x000102c8215c) */
/* WARNING: Removing unreachable block (ram,0x000102c82170) */
/* WARNING: Removing unreachable block (ram,0x000102c82228) */
/* WARNING: Removing unreachable block (ram,0x000102c8219c) */
/* WARNING: Removing unreachable block (ram,0x000102c82104) */
/* WARNING: Removing unreachable block (ram,0x000102c8211c) */
/* WARNING: Removing unreachable block (ram,0x000102c821e4) */
/* WARNING: Removing unreachable block (ram,0x000102c8212c) */
/* WARNING: Removing unreachable block (ram,0x000102c820c8) */
/* WARNING: Removing unreachable block (ram,0x000102c821c0) */
/* WARNING: Removing unreachable block (ram,0x000102c820cc) */
/* WARNING: Removing unreachable block (ram,0x000102c821fc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102c820dc) */
/* WARNING: Removing unreachable block (ram,0x000102c821ec) */
/* WARNING: Removing unreachable block (ram,0x000102c82208) */

void FUN_102c82060(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x48));
    func_0x000107c3d368(uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c826d8; end: 102c82737;  */

void FUN_102c826d8(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_102c829d4(0);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c82738; end: 102c8280f;  */

void FUN_102c82738(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102c82810; end: 102c8282f;  */

void FUN_102c82810(void)

{
  FUN_102c82844();
  return;
}



/* Entry: 102c82830; end: 102c82843;  */

undefined * FUN_102c82830(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c82844; end: 102c829ab;  */

/* WARNING: Possible PIC construction at 0x000102c82948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8294c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c82844(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long unaff_x19;
  long lVar15;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_90 [80];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar15 = *(long *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5fadc(lVar11,*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar12 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar15 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar15);
    puVar12 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar11 != 0) {
      lVar15 = *(long *)(lVar11 + _DAT_113068f48);
      func_0x000107c5cc0c();
      func_0x000107c61180();
      if (lVar15 != 0) {
        uVar4 = *(undefined8 *)(lVar15 + _DAT_113090660);
        lVar6 = ((undefined8 *)(lVar15 + _DAT_113090660))[1];
        func_0x000107c61434(lVar6);
        func_0x000107c61170(lVar15);
        if (lVar6 != 0) {
          unaff_x21 = (undefined8 *)0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          unaff_x21[3] = 2;
          unaff_x21[2] = 1;
          puVar12 = unaff_x21;
          func_0x000103b93db0();
          uVar7 = puVar12[1];
          unaff_x22 = unaff_x21 + 4;
          *unaff_x22 = *puVar12;
          unaff_x21[9] = PTR___sSSN_11034da80;
          unaff_x21[5] = uVar7;
          unaff_x21[6] = uVar4;
          unaff_x21[7] = lVar6;
          func_0x000107c61434();
          unaff_x30 = 0x102c8294c;
          register0x00000008 = (BADSPACEBASE *)auStack_90;
          puVar12 = unaff_x21;
          unaff_x19 = lVar11;
          unaff_x20 = lVar6;
          unaff_x23 = uVar4;
          unaff_x29 = puVar1;
          goto code_r0x000100214a84;
        }
      }
      func_0x000107c61170(lVar11);
      puVar12 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
code_r0x000100214a84:
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar14 = (undefined *)puVar12[2];
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar14 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar9 = puVar14;
    func_0x000107c60498();
    puVar12 = puVar12 + 4;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar12,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar3 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar5 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar10 = uVar3;
      uVar13 = uVar5;
      func_0x000100029284();
      if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar8)();
      }
      uVar13 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar13 + 0x40) =
           *(ulong *)(puVar9 + uVar13 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar5;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar9 + 0x38) + uVar10 * 0x20);
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar8)();
      }
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      puVar12 = puVar12 + 6;
      puVar14 = puVar14 + -1;
    } while (puVar14 != (undefined *)0x0);
    func_0x000107c61574(puVar9);
  }
  return puVar9;
}



/* Entry: 102c829ac; end: 102c829d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c829ac(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar13 = *(long *)(unaff_x20 + 0x18);
  uVar8 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar7 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x20);
    func_0x000107c615f0(lVar11);
    func_0x000107c61574(lVar7);
    if (lVar11 != 0) {
      if (param_1 != 0) {
        uVar12 = param_1 & 0xffffffffffffff8;
        if (param_1 >> 0x3e == 0) {
          uVar4 = *(ulong *)(uVar12 + 0x10);
        }
        else {
          uVar4 = param_1;
          if (-1 < (long)param_1) {
            uVar4 = uVar12;
          }
          func_0x000107c60480();
        }
        if (uVar4 != 0) {
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102c826d8);
              (*pcVar3)();
            }
            uVar5 = *(undefined8 *)(param_1 + 0x20);
            func_0x000107c61174(uVar5);
          }
          else {
            uVar5 = 0;
            FUN_102c80430(0,param_1);
          }
          func_0x000107c49acc();
          func_0x000107c61170(uVar5);
        }
      }
      puVar1 = (undefined8 *)(lVar13 + _DAT_11308f130);
      uVar5 = *puVar1;
      func_0x000107c5fadc(uVar5,puVar1[1]);
      func_0x000107c4db28(lVar11);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(uVar5);
    }
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_90,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 == 0) {
    return;
  }
  if (param_1 == 0) {
    func_0x000107c61574(lVar6);
    return;
  }
  puVar1 = (undefined8 *)(lVar13 + _DAT_11308f130);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  uVar12 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    if (*(long *)(uVar12 + 0x10) == 0) goto LAB_102c825b8;
LAB_102c82550:
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102c826c4);
        (*pcVar3)();
      }
      lVar7 = *(long *)(param_1 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar7 = 0;
      FUN_102c80430(0,param_1);
    }
    func_0x000107c4a4f0();
    if ((uVar8 & 1) != 0) {
      if (lVar7 != 0) {
        func_0x000107c4a2f4(lVar7);
      }
      goto LAB_102c825cc;
    }
    puVar10 = (undefined *)0x0;
    lVar13 = *(long *)(lVar6 + 0x20);
    if (lVar13 == 0) goto LAB_102c82678;
LAB_102c825e8:
    if (lVar7 != 0) {
      func_0x000107c49acc(lVar7);
    }
LAB_102c82610:
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c4dc30(lVar13);
    func_0x000107c61574(lVar6);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar10);
  }
  else {
    uVar4 = param_1;
    if (-1 < (long)param_1) {
      uVar4 = uVar12;
    }
    func_0x000107c60480();
    if (uVar4 != 0) goto LAB_102c82550;
LAB_102c825b8:
    func_0x000107c4a4f0();
    if ((uVar8 & 1) == 0) {
      lVar13 = *(long *)(lVar6 + 0x20);
      if (lVar13 != 0) {
        lVar7 = 0;
        puVar10 = (undefined *)0x0;
        goto LAB_102c82610;
      }
      puVar10 = (undefined *)0x0;
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
LAB_102c825cc:
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      lVar13 = *(long *)(lVar6 + 0x20);
      if (lVar13 != 0) goto LAB_102c825e8;
    }
LAB_102c82678:
    func_0x000107c61170(puVar10);
    func_0x000107c61574(lVar6);
  }
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 102c829d4; end: 102c82a17;  */

void FUN_102c829d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f07550 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5b98;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f07550 = puVar1;
  return;
}



/* Entry: 102c82a18; end: 102c82a27;  */

void FUN_102c82a18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102c81c70(param_1,1,param_2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102c82a28; end: 102c82a5f;  */

void FUN_102c82a28(void)

{
  FUN_102c81ff0();
  return;
}



/* Entry: 102c82a60; end: 102c82be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c82a60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c613fc();
  lVar3 = 0;
  FUN_102c82dd8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f078d0;
  func_0x000107c61614(lVar4 + _DAT_112f078d0,0);
  *(undefined8 *)(lVar4 + _DAT_112f078c8) = param_1;
  func_0x000107c61604(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_50,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(long **)(unaff_x20 + 0x10) = plVar5;
  return unaff_x20;
}



/* Entry: 102c82be4; end: 102c82cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c82be4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  puVar2 = (undefined *)(lVar5 + _DAT_112f078d0);
  func_0x000107c61618();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    FUN_102c96b90();
    func_0x000107c61170(puVar2);
  }
  lVar1 = _DAT_113069018;
  lVar5 = *(long *)(lVar5 + _DAT_112f078c8);
  func_0x000107c61428(lVar5 + _DAT_113069018,auStack_48,0,0);
  lVar5 = lVar5 + lVar1;
  func_0x000107c61618();
  if (lVar5 == 0) {
    func_0x000107c6142c(puVar3);
  }
  else {
    uVar4 = 0x112f07820;
    func_0x0001000285a8(0x112f07820,&UNK_10db3ac20);
    puVar2 = puVar3;
    func_0x000107c5fc48(puVar3,uVar4);
    func_0x000107c6142c(puVar3);
    func_0x000107c3d3b0(lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102c82cd4; end: 102c82cf7;  */

void FUN_102c82cd4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c82cf8; end: 102c82d17;  */

void FUN_102c82cf8(void)

{
  FUN_102c82be4();
  return;
}



/* Entry: 102c82d18; end: 102c82d1f;  */

undefined8 FUN_102c82d18(void)

{
  return 0;
}



/* Entry: 102c82d20; end: 102c82d3f;  */

void FUN_102c82d20(void)

{
  func_0x000107c61168(&PTR_PTR_112f07868);
  return;
}



/* Entry: 102c82d40; end: 102c82d9f; -[_TtC24AdPlaybackImplementation25AdPlaybackFeatureWorkflow init] */

void FUN_102c82d40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdPlaybackFeatureWorkflow",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c82d6c);
  (*pcVar1)();
}



/* Entry: 102c82da0; end: 102c82dd7; -[_TtC24AdPlaybackImplementation25AdPlaybackFeatureWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c82da0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f078c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f078d0);
  return;
}



/* Entry: 102c82dd8; end: 102c82df7;  */

void FUN_102c82dd8(void)

{
  func_0x000107c61168(&PTR_PTR_11289afe0);
  return;
}



/* Entry: 102c82df8; end: 102c83c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c82df8(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c613fc();
  lVar3 = _DAT_113068fe8;
  uVar7 = *(ulong *)(param_1 + _DAT_113068fe8);
  uVar11 = uVar7;
  func_0x000107c61150(uVar7,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_adDeepLinkEventObservableV2_11259a370);
  if ((uVar11 & 1) != 0) {
    func_0x000107c3d2b4();
    func_0x000107c61180();
    uVar8 = *(ulong *)(param_1 + lVar3);
    uVar11 = uVar8;
    func_0x000107c61150(uVar8,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_adSubscribeEventObservableV2_11259af78);
    if ((uVar11 & 1) != 0) {
      func_0x000107c3d4dc();
      func_0x000107c61180();
      uVar9 = *(ulong *)(param_1 + lVar3);
      uVar11 = uVar9;
      func_0x000107c61150(uVar9,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_adReportEventObservableV2_11259aac8);
      if ((uVar11 & 1) != 0) {
        func_0x000107c3d41c();
        func_0x000107c61180();
        uVar10 = *(ulong *)(param_1 + lVar3);
        uVar11 = uVar10;
        func_0x000107c61150(uVar10,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_adReminderEventObservableV2_11259aa78);
        if ((uVar11 & 1) == 0) {
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar8);
        }
        else {
          func_0x000107c3d3f4();
          func_0x000107c61180();
          uVar12 = *(ulong *)(param_1 + lVar3);
          uVar11 = uVar12;
          func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_adStickersEventObservableV2_11259af68);
          if ((uVar11 & 1) != 0) {
            func_0x000107c3d4d8();
            func_0x000107c61180();
            func_0x0001000285a8(0x112f06bf8,&UNK_10db3ac80);
            uVar1 = *(undefined8 *)(param_1 + lVar3);
            func_0x000107c3d320();
            func_0x000107c61180();
            uVar15 = uVar1;
            func_0x0001000b637c();
            func_0x000107c61170(uVar1);
            func_0x0001000285a8(0x112f07900,&UNK_10db3ac88);
            uVar11 = uVar7;
            func_0x0001000b637c();
            func_0x0001000285a8(0x112f07908,&UNK_10db3ac90);
            uVar14 = uVar8;
            func_0x0001000b637c();
            func_0x0001000285a8(0x112e54d78,&UNK_10da56e48);
            uVar18 = uVar9;
            func_0x0001000b637c();
            func_0x0001000285a8(0x112f07910,&UNK_10db3aca0);
            uVar16 = uVar10;
            func_0x0001000b637c();
            func_0x0001000285a8(0x112f07918,&UNK_10db3aca8);
            uStack_88 = uVar12;
            func_0x0001000b637c();
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar10);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar7);
            goto LAB_102c830cc;
          }
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar9);
          uVar9 = uVar10;
        }
        func_0x000107c61170(uVar9);
        uStack_88 = 0;
        uVar16 = 0;
        uVar18 = 0;
        uVar14 = 0;
        uVar11 = 0;
        uVar15 = 0;
        goto LAB_102c830cc;
      }
      func_0x000107c61170(uVar7);
      uVar7 = uVar8;
    }
    func_0x000107c61170(uVar7);
  }
  uStack_88 = 0;
  uVar16 = 0;
  uVar18 = 0;
  uVar14 = 0;
  uVar11 = 0;
  uVar15 = 0;
LAB_102c830cc:
  uVar6 = *(undefined8 *)(param_4 + _DAT_112f0dfa8);
  puVar2 = &UNK_1105bab28;
  func_0x000107c613fc(&UNK_1105bab28,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  *(long *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar15;
  *(ulong *)(puVar2 + 0x28) = uVar11;
  *(ulong *)(puVar2 + 0x30) = uVar14;
  *(ulong *)(puVar2 + 0x38) = uVar18;
  uVar13 = *(undefined8 *)(param_2 + _DAT_11304a478);
  *(ulong *)(puVar2 + 0x40) = uVar16;
  *(ulong *)(puVar2 + 0x48) = uStack_88;
  lVar3 = _DAT_113069018;
  uVar19 = *(undefined8 *)(param_5 + _DAT_113010a90);
  uVar17 = *(undefined8 *)(param_1 + _DAT_113068fd0);
  func_0x000107c61428(param_1 + _DAT_113069018,auStack_80,0,0);
  lVar3 = param_1 + lVar3;
  func_0x000107c61618();
  lVar4 = 0;
  func_0x000102c8473c();
  func_0x000107c613fc();
  func_0x000107c61614(lVar4 + 0x40,0);
  func_0x000107c61614(lVar4 + 0x48,0);
  func_0x000107c6157c(uStack_88);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar19);
  func_0x000107c615f0(uVar17);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(uVar16);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102c73860();
  *(undefined **)(lVar4 + 0x50) = puVar5;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  func_0x000107c61170(param_6);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uStack_88);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  *(undefined8 *)(lVar4 + 0x58) = uVar1;
  *(undefined8 *)(lVar4 + 0x10) = uVar6;
  *(code **)(lVar4 + 0x18) = FUN_102c83c64;
  *(undefined **)(lVar4 + 0x20) = puVar2;
  *(undefined8 *)(lVar4 + 0x28) = param_7;
  *(undefined8 *)(lVar4 + 0x30) = uVar13;
  *(undefined8 *)(lVar4 + 0x38) = uVar19;
  func_0x000107c61604(lVar4 + 0x40,uVar17);
  func_0x000107c615e8(uVar17);
  func_0x000107c61604(lVar4 + 0x48,lVar3);
  func_0x000107c615e8(lVar3);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  return;
}



/* Entry: 102c83c64; end: 102c83c67;  */

void FUN_102c83c64(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000102c83914(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102c83c68; end: 102c83c87;  */

void FUN_102c83c68(void)

{
  FUN_102c83db8();
  return;
}



/* Entry: 102c83c88; end: 102c83cab;  */

void FUN_102c83c88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c83cac; end: 102c83ccf;  */

void FUN_102c83cac(void)

{
  FUN_102c83db8();
  return;
}



/* Entry: 102c83cd0; end: 102c83cd7;  */

undefined8 FUN_102c83cd0(void)

{
  return 0;
}



/* Entry: 102c83cd8; end: 102c83d83;  */

void FUN_102c83cd8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c83d84; end: 102c83db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102c83d84(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(*param_1 + _DAT_11308c588);
  lVar5 = lVar1;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    if (lVar4 == lVar1 && lVar5 == lVar2) {
      uVar6 = 1;
    }
    else {
      func_0x000107c605b8(lVar4,lVar5,lVar1,lVar2,0);
      uVar6 = (uint)lVar4;
    }
    func_0x000107c6142c(lVar5);
  }
  return uVar6 & 1;
}



/* Entry: 102c83db8; end: 102c83ed7;  */

void FUN_102c83db8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  uVar2 = 0x112f03b90;
  func_0x0001000285a8(0x112f03b90,&UNK_10db3f9e0);
  pcVar3 = FUN_102c83ed8;
  func_0x0001000bfde0(FUN_102c83ed8,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(auStack_68);
  puVar4 = &UNK_1105bac88;
  func_0x000107c613fc(&UNK_1105bac88,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcVar5 = FUN_102c8475c;
  puVar6 = puVar4;
  (**(code **)(*(long *)pcVar3 + 0x60))(FUN_102c8475c);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  pcVar3 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + 0x58),pcVar3,puVar6);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 102c83ed8; end: 102c83edf;  */

long FUN_102c83ed8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
  return param_1;
}



/* Entry: 102c83ee0; end: 102c840ff;  */

void FUN_102c83ee0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d2468c(&uStack_58,&UNK_1105c3740,uVar1,&UNK_1105c3740,uVar2,&PTR_DAT_1105c32d8,lVar3);
  if (lStack_50 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d2468c(&uStack_58,&UNK_1105c38c8,uVar1,&UNK_1105c38c8,uVar2,&PTR_DAT_1105c3308,lVar3);
    if (lStack_50 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar1);
      FUN_102d2468c(&uStack_58,&UNK_1105c37f8,uVar1,&UNK_1105c37f8,uVar2,&PTR_DAT_1105c32f0,param_1)
      ;
      if (lStack_48 == 0) {
        return;
      }
      func_0x000107c61428(param_2 + 0x10,&uStack_58,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 == 0) {
        func_0x000107c6142c(uStack_38);
        goto LAB_102c84038;
      }
      func_0x000107c61434(lStack_48);
      func_0x000102c84500(lStack_50,lStack_48);
      func_0x000107c6142c(uStack_38);
      func_0x000107c61574(param_2);
      goto LAB_102c84020;
    }
    func_0x000107c61428(param_2 + 0x10,&uStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) goto LAB_102c8402c;
    func_0x000107c61434(lStack_50);
    func_0x000102c843d8(uStack_58,lStack_50);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,&uStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
LAB_102c8402c:
      func_0x000107c6142c(uStack_40);
      lStack_48 = lStack_50;
LAB_102c84038:
      func_0x000107c6142c(lStack_48);
      return;
    }
    func_0x000107c61434(lStack_50);
    FUN_102c84100(uStack_58,lStack_50);
  }
  func_0x000107c6142c(uStack_40);
  func_0x000107c61574(param_2);
  lStack_48 = lStack_50;
LAB_102c84020:
  func_0x000107c61430(lStack_48,2);
  return;
}



/* Entry: 102c84100; end: 102c846bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c84100(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 auStack_58 [3];
  
  func_0x000107c61428(unaff_x20 + 0x50,auStack_58,0x20,0);
  lVar7 = *(long *)(unaff_x20 + 0x50);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    lVar1 = param_1;
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(lVar7);
      func_0x0001000d224c(auStack_58);
      FUN_102c84764(param_1,param_2);
      if (param_1 == 0) {
LAB_102c8430c:
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + _DAT_11308f138);
        lVar7 = ((undefined8 *)(param_1 + _DAT_11308f138))[1];
        func_0x000107c61434(lVar7);
        func_0x000107c61170(param_1);
        if (lVar7 == 0) goto LAB_102c8430c;
        func_0x000107c5fadc(uVar2,lVar7);
        func_0x000107c6142c(lVar7);
      }
      func_0x000102458e14(0);
      uVar4 = 0x138a;
      func_0x000103dec3d4(0x138a);
      uVar6 = 0xd000000000000030;
      func_0x000107c5fadc(0xd000000000000030,0x800000010f104e70);
      lVar7 = -0x2fffffffffffffe5;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010f104eb0);
      func_0x000107c3e200(auStack_58[0]);
      func_0x000107c615e8(auStack_58[0]);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar6);
      goto LAB_102c843bc;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(auStack_58);
  lVar7 = param_1;
  (**(code **)(unaff_x20 + 0x18))(param_1,param_2);
  func_0x000107c61428(unaff_x20 + 0x50,auStack_58,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000107c61174(lVar7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c61558(uVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = 0x8000000000000000;
  FUN_102c64dd0(lVar7,param_1,param_2,uVar2);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar6;
  func_0x000107c614a8(auStack_58);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar3 = lVar1;
    func_0x000107c4a784();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar1 = unaff_x20 + 0x48;
      func_0x000107c61618();
      if (lVar1 == 0) {
        func_0x000107c61170(lVar7);
        lVar7 = lVar3;
      }
      else {
        func_0x000107c4fd9c();
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar3);
      }
    }
  }
LAB_102c843bc:
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 102c846c0; end: 102c8475b;  */

void FUN_102c846c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100d21580(unaff_x20 + 0x40);
  func_0x000100d21580(unaff_x20 + 0x48);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102c8475c; end: 102c84763;  */

void FUN_102c8475c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d2468c(&uStack_58,&UNK_1105c3740,uVar1,&UNK_1105c3740,uVar2,&PTR_DAT_1105c32d8,lVar3);
  if (lStack_50 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d2468c(&uStack_58,&UNK_1105c38c8,uVar1,&UNK_1105c38c8,uVar2,&PTR_DAT_1105c3308,lVar3);
    if (lStack_50 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar1);
      FUN_102d2468c(&uStack_58,&UNK_1105c37f8,uVar1,&UNK_1105c37f8,uVar2,&PTR_DAT_1105c32f0,param_1)
      ;
      if (lStack_48 == 0) {
        return;
      }
      func_0x000107c61428(unaff_x20 + 0x10,&uStack_58,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar3 == 0) {
        func_0x000107c6142c(uStack_38);
        goto LAB_102c84038;
      }
      func_0x000107c61434(lStack_48);
      func_0x000102c84500(lStack_50,lStack_48);
      func_0x000107c6142c(uStack_38);
      func_0x000107c61574(lVar3);
      goto LAB_102c84020;
    }
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_58,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 == 0) goto LAB_102c8402c;
    func_0x000107c61434(lStack_50);
    func_0x000102c843d8(uStack_58,lStack_50);
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_58,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 == 0) {
LAB_102c8402c:
      func_0x000107c6142c(uStack_40);
      lStack_48 = lStack_50;
LAB_102c84038:
      func_0x000107c6142c(lStack_48);
      return;
    }
    func_0x000107c61434(lStack_50);
    FUN_102c84100(uStack_58,lStack_50);
  }
  func_0x000107c6142c(uStack_40);
  func_0x000107c61574(lVar3);
  lStack_48 = lStack_50;
LAB_102c84020:
  func_0x000107c61430(lStack_48,2);
  return;
}



/* Entry: 102c84764; end: 102c84817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c84764(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar2 = lVar1;
    func_0x000107c3d368();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170();
    if (lVar2 != 0) {
      func_0x0001041f3970();
      func_0x000107c61170(lVar2);
      if (param_1 != 0) {
        func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113068f40));
        func_0x000107c61170(param_1);
      }
    }
  }
  return;
}



/* Entry: 102c84818; end: 102c8485b;  */

long FUN_102c84818(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c8485c; end: 102c848a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102c8485c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = *(long *)(*param_1 + _DAT_11308c0c0);
  lVar3 = param_2;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    if (lVar2 == param_2 && lVar3 == param_3) {
      uVar4 = 1;
    }
    else {
      func_0x000107c605b8(lVar2,lVar3,param_2,param_3,0);
      uVar4 = (uint)lVar2;
    }
    func_0x000107c6142c(lVar3);
  }
  return uVar4 & 1;
}



/* Entry: 102c848a4; end: 102c8494b;  */

uint FUN_102c848a4(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = *(long *)(*param_1 + *param_4);
  lVar3 = param_2;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    if (lVar2 == param_2 && lVar3 == param_3) {
      uVar4 = 1;
    }
    else {
      func_0x000107c605b8(lVar2,lVar3,param_2,param_3,0);
      uVar4 = (uint)lVar2;
    }
    func_0x000107c6142c(lVar3);
  }
  return uVar4 & 1;
}



/* Entry: 102c8494c; end: 102c849d7;  */

void FUN_102c8494c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102c849d8; end: 102c84a1f;  */

void FUN_102c849d8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 102c84a20; end: 102c84a47;  */

void FUN_102c84a20(void)

{
  long *unaff_x20;
  
  func_0x000107c615f0(*(undefined8 *)(*unaff_x20 + 0x40));
  return;
}



/* Entry: 102c84a48; end: 102c84d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c84a48(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcStack_70;
  char *pcStack_68;
  
  func_0x000107c613fc();
  uVar9 = *(undefined8 *)(param_2 + _DAT_113078b60);
  uVar5 = *(undefined8 *)(param_1 + _DAT_113068fd8);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113068ff0);
  uVar7 = *(undefined8 *)(param_1 + _DAT_113068fd0);
  uVar8 = *(undefined8 *)(param_1 + _DAT_113069000);
  func_0x000107c615f0(uVar6);
  func_0x000107c615f0(uVar7);
  func_0x000107c615f0(uVar8);
  func_0x000107c615f0(uVar9);
  func_0x000107c61174();
  func_0x000107c615f0(uVar5);
  pcVar1 = 
  "init(eventAnnouncer:attachmentHandlerScopeExposer:attachmentHandlerScopeBuilder:adPlaybackUIProvider:adTrackerHelper:dataSource:overlayPresenting:mainQueuePerformer:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  pcVar2 = pcVar1;
  FUN_102c84d9c();
  pcVar3 = pcVar2;
  func_0x000107c610f8();
  pcVar3[_DAT_112f07b70] = '\0';
  *(undefined8 *)(pcVar3 + _DAT_112f07b78) = uVar9;
  *(undefined8 *)(pcVar3 + _DAT_112f07b80) = param_4;
  *(undefined8 *)(pcVar3 + _DAT_112f07b88) = param_3;
  *(undefined8 *)(pcVar3 + _DAT_112f07b90) = uVar5;
  *(undefined8 *)(pcVar3 + _DAT_112f07b98) = uVar6;
  *(undefined8 *)(pcVar3 + _DAT_112f07ba0) = uVar7;
  *(undefined8 *)(pcVar3 + _DAT_112f07ba8) = uVar8;
  *(char **)(pcVar3 + _DAT_112f07bb0) = pcVar1;
  ppcVar4 = &pcStack_70;
  pcStack_70 = pcVar3;
  pcStack_68 = pcVar2;
  func_0x000107c61154(ppcVar4,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(char ***)(unaff_x20 + 0x10) = ppcVar4;
  return unaff_x20;
}



/* Entry: 102c84d9c; end: 102c84dbb;  */

void FUN_102c84d9c(void)

{
  func_0x000107c61168(&PTR_PTR_11289b0a8);
  return;
}



/* Entry: 102c84dbc; end: 102c84e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c84dbc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f07b78);
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103b82348();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103b82380();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
  func_0x000107c3d744(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 102c84e6c; end: 102c84ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c84e6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4ff64(*(undefined8 *)(lVar3 + _DAT_112f07b78),param_2,lVar3);
  lVar1 = _DAT_112f07b80;
  lVar2 = *(long *)(lVar3 + _DAT_112f07b80);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(lVar3 + lVar1));
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  return 0;
}



/* Entry: 102c84ed4; end: 102c84ef7;  */

void FUN_102c84ed4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c84ef8; end: 102c84f3b;  */

void FUN_102c84ef8(void)

{
  FUN_102c84dbc();
  return;
}



/* Entry: 102c84f3c; end: 102c84f5b;  */

void FUN_102c84f3c(void)

{
  func_0x000107c61168(&PTR_PTR_112f07bf8);
  return;
}



/* Entry: 102c84f5c; end: 102c84fbb; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener init] */

void FUN_102c84f5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.PharmaDisclaimerEventListener",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c84f88);
  (*pcVar1)();
}



/* Entry: 102c84fbc; end: 102c85053; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c84fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c84ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c85018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c85038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8501c) */
/* WARNING: Removing unreachable block (ram,0x000102c84ffc) */
/* WARNING: Removing unreachable block (ram,0x000102c84fdc) */
/* WARNING: Removing unreachable block (ram,0x000102c8503c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c84fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f07b78));
  return;
}



/* Entry: 102c85054; end: 102c8577f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c85054(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_88 [5];
  
  if ((param_2 == 0) || (plVar2 = param_1, func_0x000103b826f4(), *(long *)(param_2 + 0x10) == 0)) {
    auStack_88[2] = 0;
    auStack_88[1] = 0;
    auStack_88[4] = 0;
    auStack_88[3] = 0;
  }
  else {
    lVar5 = *plVar2;
    uVar9 = plVar2[1];
    func_0x000107c61434(uVar9);
    func_0x000107c61434(param_2);
    uVar11 = uVar9;
    func_0x000100029284(lVar5);
    if ((uVar11 & 1) == 0) {
      func_0x000107c6142c(param_2);
      auStack_88[2] = 0;
      auStack_88[1] = 0;
      auStack_88[4] = 0;
      auStack_88[3] = 0;
      func_0x000107c6142c(uVar9);
    }
    else {
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar5 * 0x20,auStack_88 + 1);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(param_2);
      if (auStack_88[4] != 0) {
        uVar3 = 0x112da1fa0;
        func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
        puVar4 = auStack_88;
        puVar7 = auStack_88 + 1;
        func_0x000107c6147c(puVar4,puVar7,PTR___sypN_11034f1a8 + 8,uVar3,6);
        if (((ulong)puVar4 & 1) == 0) {
          return;
        }
        if (auStack_88[0] >> 0x3e == 0) {
          uVar9 = *(ulong *)((auStack_88[0] & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar9 = auStack_88[0] & 0xffffffffffffff8;
          if (0x7fffffffffffffff < auStack_88[0]) {
            uVar9 = auStack_88[0];
          }
          func_0x000107c60480();
        }
        if ((uVar9 != 0) && (param_1 != (long *)0x0)) {
          func_0x000107c3b9ac();
          func_0x000107c61180();
          if (param_1 == (long *)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(puVar7);
          }
          lVar5 = *(long *)(unaff_x20 + _DAT_112f07ba0);
          func_0x000107c3d368();
          func_0x000107c61180();
          func_0x000107c61170();
          if (lVar5 == 0) {
            uVar11 = 0;
            uVar8 = 0xe000000000000000;
          }
          else {
            func_0x0001041f3970();
            func_0x000107c61170(lVar5);
            if (param_1 == (long *)0x0) {
              uVar11 = 0;
              uVar8 = 0xe000000000000000;
            }
            else {
              lVar5 = *(long *)((long)param_1 + _DAT_113068f40);
              func_0x000107c61174();
              func_0x000107c61170(param_1);
              uVar11 = *(ulong *)(lVar5 + _DAT_11308f130);
              uVar8 = ((ulong *)(lVar5 + _DAT_11308f130))[1];
              func_0x000107c61434(uVar8);
              func_0x000107c61170(lVar5);
            }
          }
          uVar10 = uVar11 & 0xffffffffffff;
          if ((uVar8 & 0x2000000000000000) != 0) {
            uVar10 = uVar8 >> 0x38 & 0xf;
          }
          if (uVar10 == 0) {
            func_0x000107c6142c(auStack_88[0]);
            func_0x000107c6142c(uVar8);
            return;
          }
          func_0x000102c86084();
          if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c85384);
            (*pcVar1)();
          }
          uVar10 = 0;
          lVar5 = *(long *)(unaff_x20 + _DAT_112f07b98);
          do {
            if ((auStack_88[0] & 0xc000000000000001) == 0) {
              func_0x000107c61174(*(undefined8 *)(auStack_88[0] + uVar10 * 8 + 0x20));
            }
            else {
              func_0x0001002ec9a0(uVar10,auStack_88[0]);
            }
            if (lVar5 != 0) {
              func_0x000107c49820();
              uVar6 = uVar11;
              func_0x000107c5fadc(uVar11,uVar8);
              func_0x000107c4dc94(lVar5);
              func_0x000107c61170(uVar6);
            }
            uVar10 = uVar10 + 1;
            func_0x000107c61170();
          } while (uVar9 != uVar10);
          func_0x000107c6142c(uVar8);
        }
        func_0x000107c6142c(auStack_88[0]);
        return;
      }
    }
  }
  FUN_102c861cc(auStack_88 + 1,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 102c85780; end: 102c858ab; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102c85848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8584c) */

void FUN_102c85780(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  func_0x000107c5faec();
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000103b82380();
  puVar2 = (ulong *)*param_1;
  if ((puVar2 == (ulong *)param_3 && param_1[1] == param_2) ||
     (func_0x000107c605b8(puVar2,param_1[1],param_3,param_2,0), ((ulong)puVar2 & 1) != 0)) {
    FUN_102c85054(param_4,param_5);
  }
  else {
    func_0x000103b82348();
    uVar3 = *puVar2;
    if (((uVar3 == param_3) && (puVar2[1] == param_2)) ||
       (func_0x000107c605b8(uVar3,puVar2[1],param_3,param_2,0), (uVar3 & 1) != 0)) {
      func_0x000102c85384(param_4,param_5);
    }
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c858ac; end: 102c85923;  */

void FUN_102c858ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102c85924(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102c85924; end: 102c85ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c85924(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auVar8 [8];
  undefined *puVar9;
  undefined *puVar10;
  code **ppcVar11;
  long *plVar12;
  undefined1 uVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar15;
  ulong uVar16;
  long extraout_x12;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long alStack_d0 [6];
  undefined1 auStack_98 [8];
  code *apcStack_90 [6];
  
  lVar2 = 0;
  func_0x000100b91584();
  alStack_d0[3] = *(long *)(lVar2 + -8);
  lVar19 = *(long *)(alStack_d0[3] + 0x40);
  alStack_d0[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)alStack_d0 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  alStack_d0[4] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar3 = 0;
  alStack_d0[5] = lVar14;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar14 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar22 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(lVar21,param_1,param_2);
  lVar2 = lVar21;
  (**(code **)(lVar18 + 0x30))(lVar21,1,lVar4);
  if ((int)lVar2 == 1) {
    FUN_102c861cc(lVar21,0x112d36580,&UNK_10d9016d0);
    return;
  }
  (**(code **)(lVar18 + 0x20))(lVar22,lVar21,lVar4);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f07b80);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    pcVar15 = *(code **)(lVar18 + 8);
    goto LAB_102c85e94;
  }
  if (param_3 == 0) {
    plVar5 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
    plVar23 = plVar5;
  }
  else {
    plVar23 = *(long **)(param_3 + _DAT_11307abc8);
    plVar5 = plVar23;
    func_0x000107c61434();
  }
  func_0x00010404c0cc();
  if (plVar23[2] == 0) {
    apcStack_90[1] = (code *)0x0;
    apcStack_90[0] = (code *)0x0;
    apcStack_90[3] = (code *)0x0;
    apcStack_90[2] = (code *)0x0;
  }
  else {
    lVar2 = *plVar5;
    plVar5 = (long *)plVar5[1];
    func_0x000107c61434(plVar5);
    func_0x000107c61434(plVar23);
    plVar12 = plVar5;
    func_0x000100029284(lVar2);
    if (((ulong)plVar12 & 1) == 0) {
      func_0x000107c6142c(plVar23);
      apcStack_90[1] = (code *)0x0;
      apcStack_90[0] = (code *)0x0;
      apcStack_90[3] = (code *)0x0;
      apcStack_90[2] = (code *)0x0;
    }
    else {
      func_0x0001000bb420(plVar23[7] + lVar2 * 0x20,apcStack_90);
      func_0x000107c6142c(plVar5);
      plVar5 = plVar23;
    }
    func_0x000107c6142c(plVar5);
  }
  func_0x000107c6142c(plVar23);
  if (apcStack_90[3] == (code *)0x0) {
    FUN_102c861cc(apcStack_90,0x112d387f8,&UNK_10d902650);
LAB_102c85c14:
    uVar6 = 0;
    uVar13 = 1;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar7 = auStack_98;
    func_0x000107c6147c(puVar7,apcStack_90,PTR___sypN_11034f1a8 + 8,uVar6,6);
    if (((ulong)puVar7 & 1) == 0) goto LAB_102c85c14;
    auVar8 = auStack_98;
    func_0x000107c3ebcc();
    func_0x000107c61170(auStack_98);
    if (((ulong)auVar8 & 1) == 0) goto LAB_102c85c14;
    uVar13 = 0;
    uVar6 = 1;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f07b70) = uVar13;
  alStack_d0[1] = lVar22;
  (**(code **)(lVar18 + 0x10))(lVar14,lVar22,lVar4);
  *(undefined8 *)(lVar14 + *(int *)(lVar3 + 0x14)) = uVar6;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar3 + 0x18));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x39) = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)(lVar14 + *(int *)(lVar3 + 0x1c)) = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar3 + 0x20));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 10;
  puVar1[6] = 0x17;
  puVar1[8] = 0xd000000000000011;
  puVar1[9] = 0x800000010f0c1c10;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  puVar1[0xd] = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar3 + 0x24));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar3 + 0x28));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + *(int *)(lVar3 + 0x2c)) = 0;
  puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar3 + 0x30));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar14 + *(int *)(lVar3 + 0x34)) = 0;
  lVar22 = alStack_d0[5];
  func_0x000102c8620c(lVar14,alStack_d0[5],&SUB_100b915bc);
  func_0x000107c6159c(lVar22,alStack_d0[2],0);
  alStack_d0[0] = -0x7ffffffef0f3e3a0;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f07b90);
  func_0x000107c5d17c();
  func_0x000107c61180();
  alStack_d0[2] = *(long *)(unaff_x20 + _DAT_112f07bb0);
  puVar9 = &UNK_1105bad10;
  func_0x000107c613fc(&UNK_1105bad10,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,unaff_x20);
  lVar2 = alStack_d0[4];
  func_0x000102c8620c(lVar22,alStack_d0[4],&SUB_100b91584);
  uVar16 = (ulong)*(byte *)(alStack_d0[3] + 0x50);
  uVar17 = uVar16 + 0x18 & (uVar16 ^ 0xffffffffffffffff);
  uVar20 = lVar19 + uVar17 + 7 & 0xfffffffffffffff8;
  puVar10 = &UNK_1105bad88;
  func_0x000107c613fc(&UNK_1105bad88,uVar20 + 0x18,uVar16 | 7);
  *(undefined **)(puVar10 + 0x10) = puVar9;
  func_0x000102c86288(lVar2,puVar10 + uVar17);
  *(undefined8 *)(puVar10 + uVar20) = uVar6;
  *(undefined8 *)(puVar10 + uVar20 + 8) = 0xd000000000000015;
  *(long *)((long)(puVar10 + uVar20 + 8) + 8) = alStack_d0[0];
  apcStack_90[4] = FUN_102c862cc;
  apcStack_90[0] = (code *)PTR___NSConcreteStackBlock_11034bd00;
  apcStack_90[1] = (code *)0x42000000;
  apcStack_90[2] = (code *)&UNK_1000f6b44;
  apcStack_90[3] = (code *)&UNK_1105bada0;
  ppcVar11 = apcStack_90;
  apcStack_90[5] = (code *)puVar10;
  func_0x000107c60bc4(ppcVar11);
  pcVar15 = apcStack_90[5];
  func_0x000107c615f0(uVar6);
  func_0x000107c61574(pcVar15);
  func_0x000107c4e590(alStack_d0[2]);
  func_0x000107c60bd0(ppcVar11);
  func_0x000107c615e8(uVar6);
  FUN_102c86320(alStack_d0[5],&SUB_100b91584);
  FUN_102c86320(lVar14,&SUB_100b915bc);
  pcVar15 = *(code **)(lVar18 + 8);
  lVar22 = alStack_d0[1];
LAB_102c85e94:
  (*pcVar15)(lVar22,lVar4);
  return;
}



/* Entry: 102c85ebc; end: 102c85fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c85ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f07b88);
    uVar1 = uVar3;
    func_0x000107c614f0(uVar3);
    func_0x000107c615f0(uVar3);
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x00010418bbf4(param_2,param_3,param_4,param_5,param_1,0,0,uVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112f07b80));
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c85fb8; end: 102c85fbb; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener adAttachmentHandlerViewWillFullyAppear:] */

void FUN_102c85fb8(void)

{
  return;
}



/* Entry: 102c85fbc; end: 102c85fbf; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener adAttachmentHandlerViewDidFullyAppear:] */

void FUN_102c85fbc(void)

{
  return;
}



/* Entry: 102c85fc0; end: 102c85fc3; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_102c85fc0(void)

{
  return;
}



/* Entry: 102c85fc4; end: 102c85fc7; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_102c85fc4(void)

{
  return;
}



/* Entry: 102c85fc8; end: 102c85ff3; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener adAttachmentHandlerDidPresent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c85fc8(long param_1)

{
  if (*(char *)(param_1 + _DAT_112f07b70) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1e1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112f07ba8),
               PTR_s_setPresentingPharmaDisclaimer__112655f68,1);
    return;
  }
  return;
}



/* Entry: 102c85ff4; end: 102c861a3; -[_TtC24AdPlaybackImplementation29PharmaDisclaimerEventListener adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x000102c8603c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c86058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c86040) */
/* WARNING: Removing unreachable block (ram,0x000102c8605c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c85ff4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112f07b70) = 0;
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102c861a4; end: 102c861cb;  */

void FUN_102c861a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_102c85924(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}


