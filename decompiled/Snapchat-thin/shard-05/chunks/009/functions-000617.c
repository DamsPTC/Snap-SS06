/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10436d5c4; end: 10436d5cf; -[_TtC15LensExplorerAPI19SCLensExplorerScope fromViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d5c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071888;
  _swift_beginAccess(param_1 + _DAT_113071888,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436d5d0; end: 10436d5db; -[_TtC15LensExplorerAPI19SCLensExplorerScope setFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071888;
  _swift_beginAccess(param_1 + _DAT_113071888,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10436d5dc; end: 10436d5eb; -[_TtC15LensExplorerAPI19SCLensExplorerScope presentationConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d5dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071890));
  return;
}



/* Entry: 10436d5ec; end: 10436d633; -[_TtC15LensExplorerAPI19SCLensExplorerScope lensExplorerRouter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d5ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071898;
  _swift_beginAccess(param_1 + _DAT_113071898,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436d634; end: 10436d697; -[_TtC15LensExplorerAPI19SCLensExplorerScope setLensExplorerRouter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d634(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071898;
  _swift_beginAccess(param_1 + _DAT_113071898,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 10436d698; end: 10436d6a3; -[_TtC15LensExplorerAPI19SCLensExplorerScope lensExplorerRouterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130718a0;
  _swift_beginAccess(param_1 + _DAT_1130718a0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436d6a4; end: 10436d6af; -[_TtC15LensExplorerAPI19SCLensExplorerScope setLensExplorerRouterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130718a0;
  _swift_beginAccess(param_1 + _DAT_1130718a0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10436d6b0; end: 10436d6bb; -[_TtC15LensExplorerAPI19SCLensExplorerScope lifeCycleDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d6b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130718a8;
  _swift_beginAccess(param_1 + _DAT_1130718a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436d6bc; end: 10436d6ff;  */

void FUN_10436d6bc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436d700; end: 10436d70b; -[_TtC15LensExplorerAPI19SCLensExplorerScope setLifeCycleDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436d700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130718a8;
  _swift_beginAccess(param_1 + _DAT_1130718a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10436d70c; end: 10436d75f;  */

void FUN_10436d70c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10436d760; end: 10436d8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10436d760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113071888;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113071888,0);
  *(undefined8 *)(unaff_x20 + _DAT_113071898) = 0;
  lVar3 = _DAT_1130718a0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718a0,0);
  lVar4 = _DAT_1130718a8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113071880) = 0;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113071890) = param_2;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_4);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_2);
  puVar5 = auStack_b8;
  _objc_msgSendSuper2(puVar5,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  return puVar5;
}



/* Entry: 10436d8cc; end: 10436d92f;  */

undefined8
FUN_10436d8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10436dcf8();
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Entry: 10436d930; end: 10436d9cf; -[_TtC15LensExplorerAPI19SCLensExplorerScope initFromViewController:presentationConfiguration:lensExplorerRouterDelegate:lifeCycleDelegate:] */

undefined8
FUN_10436d930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  uVar1 = param_3;
  FUN_10436dcf8(param_3,param_4,param_5,param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  return uVar1;
}



/* Entry: 10436d9d0; end: 10436db1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10436d9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_90;
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113071888,0);
  *(undefined8 *)(unaff_x20 + _DAT_113071898) = 0;
  lVar2 = _DAT_1130718a0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718a0,0);
  lVar3 = _DAT_1130718a8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113071880) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113071890) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_4);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(auStack_90,puVar1);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  return puVar4;
}



/* Entry: 10436db1c; end: 10436db7f;  */

undefined8
FUN_10436db1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10436de34();
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Entry: 10436db80; end: 10436dc1f; -[_TtC15LensExplorerAPI19SCLensExplorerScope initFromUIContainer:presentationConfiguration:lensExplorerRouterDelegate:lifeCycleDelegate:] */

undefined8
FUN_10436db80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  uVar1 = param_3;
  FUN_10436de34(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  return uVar1;
}



/* Entry: 10436dc20; end: 10436dc7f; -[_TtC15LensExplorerAPI19SCLensExplorerScope init] */

void FUN_10436dc20(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensExplorerAPI.SCLensExplorerScope",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10436dc4c);
  (*pcVar1)();
}



/* Entry: 10436dc80; end: 10436dcf7; -[_TtC15LensExplorerAPI19SCLensExplorerScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010436dcdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010436dce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10436dc80(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113071880));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113071888);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071890));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113071898));
  param_1 = param_1 + _DAT_1130718a0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10436dcf8; end: 10436de33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436dcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_113071888;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113071888,0);
  *(undefined8 *)(unaff_x20 + _DAT_113071898) = 0;
  lVar3 = _DAT_1130718a0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718a0,0);
  lVar4 = _DAT_1130718a8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113071880) = 0;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113071890) = param_2;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_4);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_2);
  _objc_msgSendSuper2(&stack0xffffffffffffff48,puVar1);
  return;
}



/* Entry: 10436de34; end: 10436df53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436de34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113071888,0);
  *(undefined8 *)(unaff_x20 + _DAT_113071898) = 0;
  lVar2 = _DAT_1130718a0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718a0,0);
  lVar3 = _DAT_1130718a8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113071880) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113071890) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_4);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,puVar1);
  return;
}



/* Entry: 10436df54; end: 10436df5f; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope fromViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436df54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130718d8;
  _swift_beginAccess(param_1 + _DAT_1130718d8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436df60; end: 10436df6b; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope setFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436df60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130718d8;
  _swift_beginAccess(param_1 + _DAT_1130718d8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10436df6c; end: 10436df77; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope lensExplorerRouterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436df6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130718e0;
  _swift_beginAccess(param_1 + _DAT_1130718e0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436df78; end: 10436df83; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope setLensExplorerRouterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436df78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130718e0;
  _swift_beginAccess(param_1 + _DAT_1130718e0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10436df84; end: 10436df8f; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope lifeCycleDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436df84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130718e8;
  _swift_beginAccess(param_1 + _DAT_1130718e8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436df90; end: 10436dfd3;  */

void FUN_10436df90(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436dfd4; end: 10436dfdf; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope setLifeCycleDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436dfd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130718e8;
  _swift_beginAccess(param_1 + _DAT_1130718e8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10436dfe0; end: 10436e0eb;  */

void FUN_10436dfe0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10436e0ec; end: 10436e163; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope initFromViewController:lensExplorerRouterDelegate:lifeCycleDelegate:] */

undefined8
FUN_10436e0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_3;
  FUN_10436e20c(param_3,param_4,param_5);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  return uVar1;
}



/* Entry: 10436e164; end: 10436e1c3; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope init] */

void FUN_10436e164(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensExplorerAPI.SCLensExplorerSpectaclesScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10436e190);
  (*pcVar1)();
}



/* Entry: 10436e1c4; end: 10436e20b; -[_TtC15LensExplorerAPI29SCLensExplorerSpectaclesScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010436e1f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010436e1f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10436e1c4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130718d8);
  param_1 = param_1 + _DAT_1130718e0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10436e20c; end: 10436e30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436e20c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  lVar1 = _DAT_1130718d8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718d8,0);
  lVar2 = _DAT_1130718e0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718e0,0);
  lVar3 = _DAT_1130718e8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130718e8,0);
  _swift_beginAccess(unaff_x20 + lVar1,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_beginAccess(unaff_x20 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_3);
  _objc_msgSendSuper2(&stack0xffffffffffffff58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10436e30c; end: 10436e3af;  */

int FUN_10436e30c(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x10] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10436e3b0; end: 10436e45b;  */

void FUN_10436e3b0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10436e45c; end: 10436e49b;  */

void FUN_10436e45c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10436e49c; end: 10436e4fb; -[SCLensExplorerTraySessionEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436e49c(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113071918) != '\x01') {
    if (*(char *)(param_1 + _DAT_113071920) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436e4f8);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_113071928) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436e4fc);
      (*pcVar1)();
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436e4fc; end: 10436e543; -[SCLensExplorerTraySessionEvent init] */

void FUN_10436e4fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensExplorerAPI/LensExplorerTraySessionEventWrapper.swift",0x39,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10436e544);
  (*pcVar1)();
}



/* Entry: 10436e544; end: 10436e563; -[SCLensExplorerTraySessionEvent hash] */

void FUN_10436e544(void)

{
  FUN_10436e564();
  return;
}



/* Entry: 10436e564; end: 10436e74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436e564(void)

{
  byte bVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113071918));
  bVar1 = *(byte *)(unaff_x20 + _DAT_113071920);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  bVar1 = *(byte *)(unaff_x20 + _DAT_113071928);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    bVar1 = bVar1 & 1;
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10436e74c; end: 10436e7cb; -[SCLensExplorerTraySessionEvent isEqual:] */

uint FUN_10436e74c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x00010436e61c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10436e7cc; end: 10436e7cf; -[SCLensExplorerTraySessionEvent copyWithZone:] */

void FUN_10436e7cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10436e7d0; end: 10436e83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436e7d0(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113071918) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113071920) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113071928) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10436e840; end: 10436e8b3; +[SCLensExplorerTraySessionEvent scrollingEnabledWithVertical:horizontal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436e840(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113071918) = 0;
  *(undefined1 *)(lVar1 + _DAT_113071920) = param_3;
  *(undefined1 *)(lVar1 + _DAT_113071928) = param_4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436e8b4; end: 10436e913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436e8b4(void)

{
  long unaff_x20;
  undefined1 auStack_20 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113071918) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113071920) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_113071928) = 2;
  _objc_msgSendSuper2(auStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10436e914; end: 10436e97f; +[SCLensExplorerTraySessionEvent searchPresentationRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436e914(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113071918) = 1;
  *(undefined1 *)(lVar1 + _DAT_113071920) = 2;
  *(undefined1 *)(lVar1 + _DAT_113071928) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436e980; end: 10436e9e3; -[SCLensExplorerTraySessionEvent matchScrollingEnabled:searchPresentationRequested:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436e980(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113071918) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010436e99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (*(byte *)(param_1 + _DAT_113071920) != 2) {
    if (*(byte *)(param_1 + _DAT_113071928) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00010436e9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))
                (param_3,*(byte *)(param_1 + _DAT_113071920) & 1,
                 *(byte *)(param_1 + _DAT_113071928) & 1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10436e9e4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10436e9e0);
  (*pcVar1)();
}



/* Entry: 10436e9e4; end: 10436ea37;  */

void FUN_10436e9e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10436ea38; end: 10436eb9f;  */

int FUN_10436ea38(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10436eab4;
        goto LAB_10436ea98;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10436ea98:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10436eab4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10436eba0; end: 10436ebdf;  */

void FUN_10436eba0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0184;
  _swift_getWitnessTable(&UNK_10dcf0184,&UNK_11075fa30);
  puRam0000000113071958 = puVar1;
  return;
}



/* Entry: 10436ebe0; end: 10436ec8b;  */

void FUN_10436ebe0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10436ec8c; end: 10436ecc3;  */

void FUN_10436ec8c(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10436ecc4; end: 10436ecff; -[SCLensExplorerPickItem description] */

void FUN_10436ecc4(void)

{
  undefined8 uVar1;
  
  FUN_10436ed00();
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10436ed00; end: 10436ed6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10436ed00(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113071960) != '\0') {
    if (*(char *)(unaff_x20 + _DAT_113071960) == '\x01') {
      if (*(long *)(unaff_x20 + _DAT_113071968) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10436ed68);
        (*pcVar1)();
      }
      if (*(char *)(unaff_x20 + _DAT_113071978 + 8) == '\x01') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10436ed44);
        (*pcVar1)();
      }
    }
    else if (*(long *)(unaff_x20 + _DAT_113071980 + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436ed6c);
      (*pcVar1)();
    }
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10436ed6c; end: 10436ee7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436ed6c(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  
  if (*(char *)(param_2 + _DAT_113071960) == '\0') {
    uVar6 = 2;
    lVar2 = 0;
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
  }
  else if (*(char *)(param_2 + _DAT_113071960) == '\x01') {
    lVar2 = *(long *)(param_2 + _DAT_113071968);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436ee78);
      (*pcVar1)();
    }
    if ((char)((long *)(param_2 + _DAT_113071978))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436ee80);
      (*pcVar1)();
    }
    lVar5 = *(long *)(param_2 + _DAT_113071978);
    lVar3 = *(long *)(param_2 + _DAT_113071970);
    lVar4 = ((long *)(param_2 + _DAT_113071970))[1];
    _swift_bridgeObjectRetain(lVar4);
    _objc_retain(lVar2);
    uVar6 = 0;
  }
  else {
    lVar3 = ((long *)(param_2 + _DAT_113071980))[1];
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436ee7c);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_2 + _DAT_113071980);
    lVar4 = *(long *)(param_2 + _DAT_113071988);
    _objc_retain(lVar4);
    _swift_bridgeObjectRetain(lVar3);
    lVar5 = 0;
    uVar6 = 1;
  }
  _objc_release(param_2);
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_1[2] = lVar4;
  param_1[3] = lVar5;
  *(undefined1 *)(param_1 + 4) = uVar6;
  return;
}



/* Entry: 10436ee80; end: 10436eec7; -[SCLensExplorerPickItem init] */

void FUN_10436ee80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensExplorerAPI/LensExplorerPickItemWrapper.swift",0x31,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10436eec8);
  (*pcVar1)();
}



/* Entry: 10436eec8; end: 10436eecb; -[SCLensExplorerPickItem copyWithZone:] */

void FUN_10436eec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10436eecc; end: 10436eedf; +[SCLensExplorerPickItem none] */

void FUN_10436eecc(void)

{
  func_0x00010436f1e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436eee0; end: 10436ef5b; +[SCLensExplorerPickItem lensItemWithLens:sectionId:source:] */

void FUN_10436eee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10436f280();
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10436ef5c; end: 10436efc3; +[SCLensExplorerPickItem lensCollectionWithCollectionId:lens:] */

void FUN_10436ef5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  FUN_10436f350(param_3,param_2,param_4);
  _objc_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10436efc4; end: 10436f087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436efc4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113071960) == '\0') {
    (*param_1)();
  }
  else if (*(char *)(unaff_x20 + _DAT_113071960) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_113071968) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436f080);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113071978) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436f088);
      (*pcVar1)();
    }
    (*param_3)(param_4,*(long *)(unaff_x20 + _DAT_113071968),
               *(undefined8 *)(unaff_x20 + _DAT_113071970),
               ((undefined8 *)(unaff_x20 + _DAT_113071970))[1],
               *(undefined8 *)(unaff_x20 + _DAT_113071978));
  }
  else {
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_113071980))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10436f084);
      (*pcVar1)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_113071980),lVar2,
               *(undefined8 *)(unaff_x20 + _DAT_113071988));
  }
  return;
}



/* Entry: 10436f088; end: 10436f0eb; -[SCLensExplorerPickItem matchNone:lensItem:lensCollection:] */

void FUN_10436f088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10436efc4(FUN_10436f5e0,auStack_40,0x10436f5e8,auStack_60,FUN_10436f5f0,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 10436f0ec; end: 10436f14f;  */

void FUN_10436f0ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10436f150; end: 10436f183;  */

void FUN_10436f150(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10436f184; end: 10436f27f; -[SCLensExplorerPickItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f184(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071968));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071970 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071980 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113071988));
  return;
}



/* Entry: 10436f280; end: 10436f34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_10436f418();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113071960) = 1;
  *(long *)(lVar4 + _DAT_113071968) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113071970);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113071978);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113071980);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113071988) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 10436f350; end: 10436f417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f350(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_10436f418();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113071960) = 2;
  *(undefined8 *)(lVar5 + _DAT_113071968) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113071970);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113071978);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_113071980);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_113071988) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 10436f418; end: 10436f437;  */

void FUN_10436f418(void)

{
  _objc_opt_self(&PTR_PTR_1129a2c00);
  return;
}



/* Entry: 10436f438; end: 10436f59f;  */

int FUN_10436f438(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10436f4b4;
        goto LAB_10436f498;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10436f498:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10436f4b4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10436f5a0; end: 10436f5df;  */

void FUN_10436f5a0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130719b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf026c;
  _swift_getWitnessTable(&UNK_10dcf026c,&UNK_11075fb18);
  puRam00000001130719b8 = puVar1;
  return;
}



/* Entry: 10436f5e0; end: 10436f5ef;  */

void FUN_10436f5e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10436f5f0; end: 10436f637;  */

void FUN_10436f5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10436f638; end: 10436f6e3;  */

void FUN_10436f638(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10436f6e4; end: 10436f71b;  */

void FUN_10436f6e4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10436f71c; end: 10436f767; -[SCLensExplorerAutoSelection description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f71c(long param_1)

{
  code *pcVar1;
  
  if ((1 < *(byte *)(param_1 + _DAT_1130719c0)) &&
     (*(char *)(param_1 + _DAT_1130719c8 + 0x10) == '\x01')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10436f768);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436f768; end: 10436f7af; -[SCLensExplorerAutoSelection init] */

void FUN_10436f768(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensExplorerAPI/LensExplorerAutoSelectionWrapper.swift",0x36,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10436f7b0);
  (*pcVar1)();
}



/* Entry: 10436f7b0; end: 10436f7b3; -[SCLensExplorerAutoSelection copyWithZone:] */

void FUN_10436f7b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10436f7b4; end: 10436f7bb; +[SCLensExplorerAutoSelection none] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f7b4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130719c0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130719c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436f7bc; end: 10436f7c3; +[SCLensExplorerAutoSelection first] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f7bc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130719c0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130719c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436f7c4; end: 10436f82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f7c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130719c0) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130719c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436f82c; end: 10436f89f; +[SCLensExplorerAutoSelection randomWithRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f82c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130719c0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130719c8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(puVar1 + 2) = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436f8a0; end: 10436f8fb; -[SCLensExplorerAutoSelection matchNone:first:random:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436f8a0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + _DAT_1130719c0) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010436f8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(char *)(param_1 + _DAT_1130719c0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010436f8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_1130719c8);
  if (*(char *)(puVar1 + 2) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010436f8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5,*puVar1,puVar1[1]);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10436f8fc);
  (*pcVar2)();
}



/* Entry: 10436f8fc; end: 10436f94f;  */

void FUN_10436f8fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10436f950; end: 10436fab7;  */

int FUN_10436f950(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10436f9cc;
        goto LAB_10436f9b0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10436f9b0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10436f9cc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10436fab8; end: 10436faf7;  */

void FUN_10436fab8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130719f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0354;
  _swift_getWitnessTable(&UNK_10dcf0354,&UNK_11075fc00);
  puRam00000001130719f8 = puVar1;
  return;
}



/* Entry: 10436faf8; end: 10436fb07; -[SCLensExplorerTrayUIConfiguration useTransparentBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10436faf8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113071a00);
}



/* Entry: 10436fb08; end: 10436fb17; -[SCLensExplorerTrayUIConfiguration swipeNavigationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10436fb08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113071a08);
}



/* Entry: 10436fb18; end: 10436fb27; -[SCLensExplorerTrayUIConfiguration loadingViewEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10436fb18(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113071a10);
}



/* Entry: 10436fb28; end: 10436fb37; -[SCLensExplorerTrayUIConfiguration alwaysUseTrayGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10436fb28(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113071a18);
}



/* Entry: 10436fb38; end: 10436fb47; -[SCLensExplorerTrayUIConfiguration styleOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10436fb38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113071a20);
}



/* Entry: 10436fb48; end: 10436fc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436fb48(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113071a00) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113071a08) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113071a10) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113071a18) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113071a20) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10436fc80; end: 10436fd1b; -[SCLensExplorerTrayUIConfiguration initWithUseTransparentBackground:swipeNavigationEnabled:loadingViewEnabled:alwaysUseTrayGesture:styleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436fc80(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113071a00) = param_3;
  *(undefined1 *)(param_1 + _DAT_113071a08) = param_4;
  *(undefined1 *)(param_1 + _DAT_113071a10) = param_5;
  *(undefined1 *)(param_1 + _DAT_113071a18) = param_6;
  *(undefined8 *)(param_1 + _DAT_113071a20) = param_7;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10436fd1c; end: 10436fdb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436fd1c(undefined4 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_113071a00) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_113071a08) = (byte)((uint)param_1 >> 8) & 1;
  *(byte *)(unaff_x20 + _DAT_113071a10) = (byte)((uint)param_1 >> 0x10) & 1;
  *(byte *)(unaff_x20 + _DAT_113071a18) = (byte)((uint)param_1 >> 0x18) & 1;
  *(undefined8 *)(unaff_x20 + _DAT_113071a20) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10436fdb4; end: 10436fdb7; -[SCLensExplorerTrayUIConfiguration copyWithZone:] */

void FUN_10436fdb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10436fdb8; end: 10436fdd3; -[SCLensExplorerTrayUIConfiguration description] */

void FUN_10436fdb8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10436fdd4; end: 10436fe6f; -[SCLensExplorerTrayUIConfiguration init] */

void FUN_10436fdd4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensExplorerAPI/LensExplorerTrayUIConfigurationWrapper.swift",0x3c,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10436fe1c);
  (*pcVar1)();
}



/* Entry: 10436fe70; end: 1043700ef;  */

long FUN_10436fe70(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043700f0; end: 1043700ff; -[_TtC23SCLensCreatorProfileAPI40SCLensCreatorProfilePresentationServices creatorProfilePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043700f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071a50));
  return;
}



/* Entry: 104370100; end: 10437014b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104370100(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113071a50) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10437014c; end: 1043701ab; -[_TtC23SCLensCreatorProfileAPI40SCLensCreatorProfilePresentationServices init] */

void FUN_10437014c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCreatorProfileAPI.SCLensCreatorProfilePresentationServices",0x40,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104370178);
  (*pcVar1)();
}


