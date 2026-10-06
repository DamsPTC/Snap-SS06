/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005b9608; end: 005b960b;  */

undefined8 * FUN_005b9608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e2680;
  (**(code **)(*plRam0000000000b65da0 + 0x40))(plRam0000000000b65da0,param_1[2]);
  FUN_005b9620(param_1 + 0xc);
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 4);
  *param_1 = &PTR_FUN_009e2620;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}



/* Entry: 005b960c; end: 005b961f;  */

void FUN_005b960c(void)

{
  FUN_005b9434();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005b9620; end: 005b9677;  */

void FUN_005b9620(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 005b9678; end: 005b967b;  */

undefined8 * FUN_005b9678(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e2620;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}



/* Entry: 005b967c; end: 005b968f;  */

void FUN_005b967c(void)

{
  FUN_005b957c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005b9690; end: 005b969f;  */

void FUN_005b9690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_create_0099a528)(param_1,0,param_2,param_3);
  return;
}



/* Entry: 005b96a0; end: 005b97ff;  */

long * FUN_005b96a0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined1 uStack_b1;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_48;
  
  ppuVar5 = &puStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_d0 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  FUN_005b9830();
  uVar8 = param_1[1];
  lStack_b0 = 0;
  uStack_b1 = 0;
  while( true ) {
    uVar7 = 1;
    plVar3 = plRam0000000000b65da0;
    (**(code **)(*plRam0000000000b65da0 + 0x1c0))(plRam0000000000b65da0,1);
    uVar4 = uVar8;
    FUN_0040b3bc(uVar8,&lStack_b0,&uStack_b1,plVar3,uVar7);
    if ((int)uVar4 != 1) break;
    if (lStack_b0 != 0) {
      plStack_c8 = *(long **)(lStack_b0 + 8);
      lStack_c0 = *(long *)(lStack_b0 + 0x10);
      if (lStack_c0 != 0) {
        plVar3 = (long *)(lStack_c0 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pcStack_a8 = FUN_005b9890;
      ppuStack_a0 = &PTR_FUN_00a03ac0;
      lStack_98 = lStack_b0;
      uStack_90 = uStack_b1;
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8,&pcStack_a8);
      func_0x005b9934();
      func_0x0045a078(&plStack_c8);
    }
  }
  FUN_005b9800();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return (long *)0x0;
  }
  ___stack_chk_fail();
  FUN_005b9800(&puStack_d0);
  __Unwind_Resume();
  lVar6 = (long)*ppuVar5;
  *ppuVar5 = (undefined8 *)0x0;
  if (lVar6 != 0) {
    FUN_005b9838();
    __ZdlPv();
  }
  return (long *)ppuVar5;
}



/* Entry: 005b9800; end: 005b982f;  */

long * FUN_005b9800(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_005b9838();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 005b9830; end: 005b9837;  */

void FUN_005b9830(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_setspecific_0099a5e8)(*param_1);
  return;
}



/* Entry: 005b9838; end: 005b985b;  */

undefined8 FUN_005b9838(undefined8 param_1)

{
  FUN_005b985c(param_1,0);
  return param_1;
}



/* Entry: 005b985c; end: 005b9873;  */

void FUN_005b985c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__115__thread_structD1Ev(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005b9874; end: 005b988f;  */

void FUN_005b9874(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    __ZNSt3__115__thread_structD1Ev(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005b9890; end: 005b98eb;  */

void FUN_005b9890(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((*(byte *)(plVar2 + 3) & 1) != 0) {
    return;
  }
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x18))();
  if (((ulong)plVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x005b98e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined1 *)(param_1 + 0x18));
  return;
}



/* Entry: 005b98ec; end: 005b9943;  */

void FUN_005b98ec(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b9904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 005b9944; end: 005b99df;  */

undefined1 FUN_005b9944(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if (((*(byte *)((long)param_1 + 0x1c) & 1) == 0) && ((*(byte *)((long)param_1 + 0x24) & 1) == 0))
  {
    uVar4 = *param_1;
    uVar1 = param_1[1];
    do {
      if (uVar4 == uVar1) {
        return 0;
      }
      uVar2 = uVar4;
      FUN_004636dc(uVar4,"x-snap-access-token");
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = uVar4;
      FUN_004636dc(uVar4,"authorization");
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = uVar4;
      FUN_004636dc(uVar4,"bitmoji-token");
      uVar4 = uVar4 + 0x30;
      uVar3 = 1;
    } while ((int)uVar2 == 0);
  }
  return uVar3;
}



/* Entry: 005b99e0; end: 005b9a23;  */

undefined4 FUN_005b99e0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    if (*(char *)(param_1 + 0x24) != '\x01') {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x20);
  }
  uVar3 = 0x10;
  if (iVar2 != 1) {
    uVar3 = 0;
  }
  uVar1 = 0xe;
  if (iVar2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 005b9a24; end: 005b9a63;  */

void FUN_005b9a24(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_00409258(param_1,lVar2,lVar2 + 0x18);
  }
  return;
}



/* Entry: 005b9a64; end: 005b9b07;  */

void FUN_005b9a64(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,"/",param_2);
    FUN_005b9b08(auStack_38,auStack_50,param_3);
    FUN_004575b8(param_1,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_3);
  }
  return;
}



/* Entry: 005b9b08; end: 005b9b3f;  */

void FUN_005b9b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_004bab3c();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 005b9b40; end: 005b9b93;  */

void FUN_005b9b40(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000000b6b758 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0xb6b758,&ppuStack_20,FUN_005bb7ec);
  }
  return;
}



/* Entry: 005b9b94; end: 005b9d0f;  */

void FUN_005b9b94(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar3 = param_3;
    puVar2 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = puVar2;
    func_0x005bbe00();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    if ((bRam0000000000b6b778 & 1) == 0) {
      iVar1 = 0xb6b778;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_005bad64((undefined1 *)((long)register0x00000008 + -0x78),&PTR_s_source_00a03ad8,"local"
                    );
        param_3 = (undefined1 *)((long)register0x00000008 + -0x78);
        func_0x00483acc(0xb6b760,param_3,1);
        func_0x00483da0((undefined1 *)((long)register0x00000008 + -0x78));
        ___cxa_guard_release(0xb6b778);
      }
    }
    unaff_x22 = puRam0000000000b6bf88;
    unaff_x23 = 0xb6bf88;
    unaff_x21 = param_1;
    if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
      in_ZR = (int)param_1 == 0;
      uVar4 = 0x1a;
      if ((bool)in_ZR) {
        uVar4 = 4;
      }
      unaff_x21 = (undefined1 *)(ulong)uVar4;
      FUN_0048405c((undefined1 *)((long)register0x00000008 + -0x78),0xb6b760);
      param_3 = unaff_x21;
      (**(code **)*unaff_x22)
                (unaff_x22,unaff_x21,puVar2,(long)(int)puVar3,
                 (undefined1 *)((long)register0x00000008 + -0x78));
      FUN_00484170((undefined1 *)((long)register0x00000008 + -0x78));
    }
    if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
      *(undefined1 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x60) = 0;
      param_3 = (undefined1 *)((long)&MACH_HEADER.flags + 3);
      (**(code **)*puRam0000000000b6bf88)
                (puRam0000000000b6bf88,0x1b,puVar2,1,
                 (undefined1 *)((long)register0x00000008 + -0x78));
      FUN_00484170((undefined1 *)((long)register0x00000008 + -0x78));
    }
    func_0x005bbde0(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x005bbeb0();
    func_0x00483da0();
    param_2 = (undefined1 *)0xb6b778;
    ___cxa_guard_abort();
    unaff_x30 = FUN_005b9d10;
    func_0x005bbe10();
    param_1 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = puVar2;
    unaff_x20 = puVar3;
  }
  return;
}



/* Entry: 005b9d10; end: 005b9d2f;  */

/* WARNING: Removing unreachable block (ram,0x005b9bec) */

void FUN_005b9d10(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar3 = param_2;
    puVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    param_2 = puVar2;
    func_0x005bbe00();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    if ((bRam0000000000b6b778 & 1) == 0) {
      iVar1 = 0xb6b778;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_005bad64((undefined1 *)((long)register0x00000008 + -0x78),&PTR_s_source_00a03ad8,"local"
                    );
        param_2 = (undefined1 *)((long)register0x00000008 + -0x78);
        func_0x00483acc(0xb6b760,param_2,1);
        func_0x00483da0((undefined1 *)((long)register0x00000008 + -0x78));
        ___cxa_guard_release(0xb6b778);
      }
    }
    unaff_x22 = puRam0000000000b6bf88;
    unaff_x23 = 0xb6bf88;
    if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
      in_ZR = 0;
      unaff_x21 = (undefined1 *)((long)&MACH_HEADER.flags + 2);
      FUN_0048405c((undefined1 *)((long)register0x00000008 + -0x78),0xb6b760);
      param_2 = unaff_x21;
      (**(code **)*unaff_x22)
                (unaff_x22,0x1a,puVar2,(long)(int)puVar3,
                 (undefined1 *)((long)register0x00000008 + -0x78));
      FUN_00484170((undefined1 *)((long)register0x00000008 + -0x78));
    }
    if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
      *(undefined1 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x60) = 0;
      param_2 = (undefined1 *)((long)&MACH_HEADER.flags + 3);
      (**(code **)*puRam0000000000b6bf88)
                (puRam0000000000b6bf88,0x1b,puVar2,1,
                 (undefined1 *)((long)register0x00000008 + -0x78));
      FUN_00484170((undefined1 *)((long)register0x00000008 + -0x78));
    }
    func_0x005bbde0(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x005bbeb0();
    func_0x00483da0();
    param_1 = (undefined1 *)0xb6b778;
    ___cxa_guard_abort();
    unaff_x30 = FUN_005b9d10;
    func_0x005bbe10();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = puVar2;
    unaff_x20 = puVar3;
  }
  return;
}



/* Entry: 005b9d30; end: 005b9d8b;  */

void FUN_005b9d30(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  func_0x005bbf0c(param_1,param_2,param_1);
  if (param_1 != (undefined8 *)0x0) {
    auStack_40[0] = 0;
    uStack_28 = 0;
    (**(code **)*param_1)();
    FUN_00484170(auStack_40);
  }
  return;
}



/* Entry: 005b9d8c; end: 005b9e2b;  */

void FUN_005b9d8c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = param_2;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm
            (param_2,0x3a,0xffffffffffffffff);
  if (plVar4 != (long *)0xffffffffffffffff) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    uVar1 = param_2[1];
    if (-1 < (char)bVar3) {
      uVar1 = (ulong)bVar3;
    }
    if ((long)plVar4 + 1U < uVar1) {
      plVar2 = (long *)*param_2;
      if (-1 < (char)bVar3) {
        plVar2 = param_2;
      }
      lVar5 = (long)*(char *)((long)plVar2 + (long)plVar4 + 1U);
      if ((-1 < lVar5) &&
         ((*(uint *)(PTR___DefaultRuneLocale_00999f28 + lVar5 * 4 + 0x3c) >> 10 & 1) != 0)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (param_1,param_2,0,plVar4,&stack0xffffffffffffffef);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00779c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__00998a18)
            (param_1,param_2);
  return;
}



/* Entry: 005b9e2c; end: 005b9eab;  */

long *** FUN_005b9e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                     long param_5)

{
  undefined1 in_ZR;
  long ***ppplVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long ***ppplVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  int extraout_w10;
  ulong extraout_x10;
  long **pplVar8;
  long **pplVar9;
  long **pplStack_590;
  long **pplStack_588;
  long *plStack_580;
  long ***ppplStack_578;
  undefined1 **ppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  undefined1 uStack_558;
  undefined4 uStack_554;
  undefined1 *puStack_550;
  undefined1 *puStack_548;
  undefined1 *puStack_540;
  ulong uStack_538;
  ulong uStack_528;
  undefined1 *puStack_518;
  undefined8 uStack_510;
  undefined4 uStack_508;
  undefined8 uStack_500;
  long alStack_4f8 [46];
  long **pplStack_388;
  long lStack_380;
  undefined1 auStack_378 [24];
  undefined1 uStack_360;
  undefined1 auStack_358 [32];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  long alStack_308 [17];
  undefined1 auStack_280 [368];
  long **pplStack_110;
  long lStack_108;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined8 uStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *plStack_48;
  undefined1 uStack_39;
  long **pplStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  func_0x005bbe00();
  plVar4 = (long *)&uStack_39;
  uStack_28 = extraout_x8;
  FUN_005241f4(&plStack_48);
  pplVar8 = &plStack_48;
  FUN_00523c68();
  pplStack_38 = pplVar8;
  plStack_30 = plVar4;
  if (plStack_48 != (long *)0x0) {
    func_0x005bbdf4();
  }
  ppplVar1 = &pplStack_38;
  FUN_00479d58(param_1);
  func_0x005bbde0(uStack_28);
  if ((bool)in_ZR) {
    return ppplVar1;
  }
  ___stack_chk_fail();
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    func_0x005bbdf4();
    plVar2 = plStack_48;
  }
  func_0x005bbe10();
  pcStack_58 = FUN_005b9eac;
  plVar3 = plVar2;
  plVar7 = plVar4;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x005bbe00();
  pplStack_110 = (long **)0x0;
  lStack_108 = 0;
  uStack_98 = extraout_x8_00;
  func_0x005bbf0c();
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(alStack_4f8);
    plVar7 = alStack_4f8;
    FUN_005ba108(&pplStack_110);
    func_0x005bb7c4(alStack_4f8);
  }
  if (pplStack_110 != (long **)0x0) {
    FUN_005bada4(alStack_308,plVar2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_320,param_5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_338,param_5 + 0x30);
    FUN_00459e04(auStack_358,param_5 + 0xd0);
    func_0x005bbe20();
    auStack_378[0] = 0;
    uStack_360 = 0;
    uStack_538 = extraout_x8_01 | 0x100;
    uStack_528 = extraout_x10 | 0x100;
    uStack_500 = 0;
    uStack_508 = 0;
    puStack_518 = auStack_378;
    uStack_510 = 0xffffffffffffffff;
    puStack_548 = auStack_338;
    puStack_550 = auStack_320;
    uStack_554 = SUB84(plVar4,0);
    uStack_558 = 0;
    uStack_560 = 0;
    puStack_540 = auStack_358;
    func_0x005bbf2c(auStack_280,alStack_308);
    FUN_005ba14c();
    func_0x005bbedc();
    FUN_00457530(auStack_358);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_338);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_320);
    plVar4 = alStack_308;
    FUN_00485b5c();
    FUN_005c7fd4();
    param_4 = alStack_4f8;
    FUN_005bb034(alStack_4f8,auStack_280);
    lStack_380 = lStack_108;
    pplStack_388 = pplStack_110;
    if (lStack_108 != 0) {
      do {
        func_0x005bbe74();
      } while (extraout_w10 != 0);
    }
    uStack_f8 = 0x5bb7f0;
    ppuStack_f0 = &PTR_FUN_00a03af0;
    lVar5 = 0x180;
    __Znwm();
    plVar7 = alStack_4f8;
    FUN_005bb034();
    *(long *)(lVar5 + 0x178) = lStack_380;
    *(long ***)(lVar5 + 0x170) = pplStack_388;
    pplStack_388 = (long **)0x0;
    lStack_380 = 0;
    lStack_e8 = lVar5;
    func_0x005bbf5c(*(undefined8 *)(*plVar4 + 0x10));
    func_0x005bbebc();
    FUN_005ba168(alStack_4f8);
    func_0x005bb134(auStack_280);
  }
  ppplVar1 = &pplStack_110;
  func_0x005bb7c4();
  func_0x005bbde0(uStack_98);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005bbebc();
    FUN_005ba168(alStack_4f8);
    func_0x005bb134(auStack_280);
    ppplVar6 = &pplStack_110;
    func_0x005bb7c4();
    func_0x005bbe10();
    pcStack_568 = FUN_005ba108;
    pplVar9 = (long **)plVar7[1];
    pplVar8 = (long **)*plVar7;
    *plVar7 = 0;
    plVar7[1] = 0;
    pplStack_588 = ppplVar6[1];
    pplStack_590 = *ppplVar6;
    plStack_580 = param_4;
    ppplStack_578 = ppplVar1;
    ppuStack_570 = &puStack_60;
    ppplVar6[1] = pplVar9;
    *ppplVar6 = pplVar8;
    func_0x005bb7c4(&pplStack_590);
    return ppplVar6;
  }
  return ppplVar1;
}



/* Entry: 005b9eac; end: 005ba107;  */

long * FUN_005b9eac(long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  int extraout_w10;
  ulong extraout_x10;
  long lVar5;
  long lStack_540;
  long lStack_538;
  long *plStack_530;
  long *plStack_528;
  undefined1 *puStack_520;
  code *pcStack_518;
  undefined8 uStack_510;
  undefined1 uStack_508;
  undefined4 uStack_504;
  undefined1 *puStack_500;
  undefined1 *puStack_4f8;
  undefined1 *puStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4d8;
  undefined1 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined8 uStack_4b0;
  long alStack_4a8 [46];
  long lStack_338;
  long lStack_330;
  undefined1 auStack_328 [24];
  undefined1 uStack_310;
  undefined1 auStack_308 [32];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  long alStack_2b8 [17];
  undefined1 auStack_230 [368];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  plVar4 = param_2;
  func_0x005bbe00();
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_48 = extraout_x8;
  func_0x005bbf0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(alStack_4a8);
    plVar4 = alStack_4a8;
    FUN_005ba108(&lStack_c0);
    func_0x005bb7c4(alStack_4a8);
  }
  if (lStack_c0 != 0) {
    FUN_005bada4(alStack_2b8,param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_2d0,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_2e8,param_4 + 0x30);
    FUN_00459e04(auStack_308,param_4 + 0xd0);
    func_0x005bbe20();
    auStack_328[0] = 0;
    uStack_310 = 0;
    uStack_4e8 = extraout_x8_00 | 0x100;
    uStack_4d8 = extraout_x10 | 0x100;
    uStack_4b0 = 0;
    uStack_4b8 = 0;
    puStack_4c8 = auStack_328;
    uStack_4c0 = 0xffffffffffffffff;
    puStack_4f8 = auStack_2e8;
    puStack_500 = auStack_2d0;
    uStack_504 = SUB84(param_2,0);
    uStack_508 = 0;
    uStack_510 = 0;
    puStack_4f0 = auStack_308;
    func_0x005bbf2c(auStack_230,alStack_2b8);
    FUN_005ba14c();
    func_0x005bbedc();
    FUN_00457530(auStack_308);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d0);
    plVar1 = alStack_2b8;
    FUN_00485b5c();
    FUN_005c7fd4();
    param_3 = alStack_4a8;
    FUN_005bb034(alStack_4a8,auStack_230);
    lStack_330 = lStack_b8;
    lStack_338 = lStack_c0;
    if (lStack_b8 != 0) {
      do {
        func_0x005bbe74();
      } while (extraout_w10 != 0);
    }
    uStack_a8 = 0x5bb7f0;
    ppuStack_a0 = &PTR_FUN_00a03af0;
    lVar2 = 0x180;
    __Znwm();
    plVar4 = alStack_4a8;
    FUN_005bb034();
    *(long *)(lVar2 + 0x178) = lStack_330;
    *(long *)(lVar2 + 0x170) = lStack_338;
    lStack_338 = 0;
    lStack_330 = 0;
    lStack_98 = lVar2;
    func_0x005bbf5c(*(undefined8 *)(*plVar1 + 0x10));
    func_0x005bbebc();
    FUN_005ba168(alStack_4a8);
    func_0x005bb134(auStack_230);
  }
  plVar1 = &lStack_c0;
  func_0x005bb7c4();
  func_0x005bbde0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005bbebc();
    FUN_005ba168(alStack_4a8);
    func_0x005bb134(auStack_230);
    plVar3 = &lStack_c0;
    func_0x005bb7c4();
    func_0x005bbe10();
    pcStack_518 = FUN_005ba108;
    lVar5 = plVar4[1];
    lVar2 = *plVar4;
    *plVar4 = 0;
    plVar4[1] = 0;
    lStack_538 = plVar3[1];
    lStack_540 = *plVar3;
    plStack_530 = param_3;
    plStack_528 = plVar1;
    puStack_520 = &stack0xfffffffffffffff0;
    plVar3[1] = lVar5;
    *plVar3 = lVar2;
    func_0x005bb7c4(&lStack_540);
    return plVar3;
  }
  return plVar1;
}



/* Entry: 005ba108; end: 005ba14b;  */

undefined8 * FUN_005ba108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x005bb7c4(&uStack_30);
  return param_1;
}



/* Entry: 005ba14c; end: 005ba167;  */

void FUN_005ba14c(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  func_0x005bbf1c();
  FUN_005bafb0();
  *(undefined8 *)(param_1 + 0x88) = unaff_x24;
  *(undefined8 *)(param_1 + 0x90) = unaff_x23;
  *(undefined8 *)(param_1 + 0x98) = unaff_x22;
  *(undefined8 *)(param_1 + 0xa0) = in_x5;
  *(undefined8 *)(param_1 + 0xa8) = in_x6;
  *(undefined8 *)(param_1 + 0xb0) = in_x7;
  *(undefined8 *)(param_1 + 0xb8) = in_stack_00000000;
  *(undefined1 *)(param_1 + 0xc0) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xc4) = in_stack_0000000c;
  uVar2 = in_stack_00000010[1];
  uVar1 = *in_stack_00000010;
  *(undefined8 *)(param_1 + 0xd8) = in_stack_00000010[2];
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(undefined8 *)(param_1 + 200) = uVar1;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  *in_stack_00000010 = 0;
  uVar2 = in_stack_00000018[1];
  uVar1 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0xf0) = in_stack_00000018[2];
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *in_stack_00000018 = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (*(char *)(in_stack_00000020 + 3) == '\x01') {
    func_0x005bbea4(*in_stack_00000020);
    in_stack_00000020[1] = 0;
    in_stack_00000020[2] = 0;
    *in_stack_00000020 = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  *(undefined2 *)(param_1 + 0x118) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000030;
  *(undefined2 *)(param_1 + 0x128) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x130) = in_stack_00000040;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(char *)(in_stack_00000048 + 3) == '\x01') {
    uVar2 = in_stack_00000048[1];
    uVar1 = *in_stack_00000048;
    *(undefined8 *)(param_1 + 0x148) = in_stack_00000048[2];
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    *(undefined8 *)(param_1 + 0x138) = uVar1;
    in_stack_00000048[1] = 0;
    in_stack_00000048[2] = 0;
    *in_stack_00000048 = 0;
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  *(undefined8 *)(param_1 + 0x158) = in_stack_00000050;
  *(undefined4 *)(param_1 + 0x160) = in_stack_00000058;
  *(undefined8 *)(param_1 + 0x168) = in_stack_00000060;
  return;
}



/* Entry: 005ba168; end: 005ba18f;  */

void FUN_005ba168(long param_1)

{
  func_0x005bb7c4(param_1 + 0x170);
  FUN_00457530(param_1 + 0x138);
  FUN_00457530(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x004870f0();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 005ba190; end: 005ba3f7;  */

void FUN_005ba190(long *param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,long param_7,undefined8 *param_8)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  ushort extraout_w8;
  undefined8 extraout_x8;
  long extraout_x9;
  ushort extraout_w10;
  int extraout_w10_00;
  long extraout_x11;
  long unaff_x23;
  long unaff_x24;
  long lVar3;
  long *plStack_530;
  undefined1 uStack_528;
  undefined4 uStack_524;
  long *plStack_520;
  long *plStack_518;
  long *plStack_510;
  ushort uStack_508;
  long lStack_500;
  ushort uStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined4 uStack_4e0;
  undefined1 auStack_4d0 [376];
  long lStack_358;
  long lStack_350;
  long alStack_348 [4];
  long alStack_328 [3];
  long alStack_310 [3];
  long alStack_2f8 [3];
  undefined1 uStack_2e0;
  undefined8 auStack_2d8 [3];
  undefined1 uStack_2c0;
  long alStack_2b8 [17];
  undefined1 auStack_230 [376];
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x005bbe00();
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_48 = extraout_x8;
  func_0x005bbf0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(auStack_4d0);
    FUN_005ba108(&lStack_b8,auStack_4d0);
    func_0x005bb7c4(auStack_4d0);
  }
  if (lStack_b8 != 0) {
    FUN_005bada4(alStack_2b8,param_1);
    auStack_2d8[0]._0_1_ = 0;
    uStack_2c0 = 0;
    alStack_2f8[0]._0_1_ = 0;
    uStack_2e0 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_310,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_328,param_4 + 0x30);
    param_1 = alStack_348;
    FUN_00459e04(alStack_348,param_4 + 0xd0);
    func_0x005bbe20();
    uStack_508 = extraout_w8 | 0x100;
    uStack_4f8 = extraout_w10 | 0x100;
    uStack_4e0 = 0;
    lStack_4e8 = -1;
    plStack_518 = alStack_328;
    plStack_520 = alStack_310;
    plStack_530 = alStack_2f8;
    param_8 = auStack_2d8;
    uStack_528 = 0;
    func_0x005bbf2c(auStack_230,alStack_2b8);
    FUN_005ba3f8();
    func_0x005bbedc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_328);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_310);
    FUN_00457530(alStack_2f8);
    FUN_00457530(auStack_2d8);
    plVar1 = alStack_2b8;
    FUN_00485b5c();
    FUN_005c7fd4();
    FUN_005bb2e4(auStack_4d0,auStack_230);
    lStack_358 = lStack_b8;
    lStack_350 = lStack_b0;
    if (lStack_b0 != 0) {
      do {
        func_0x005bbe74();
      } while (extraout_w10_00 != 0);
    }
    uStack_a8 = 0x5bb828;
    ppuStack_a0 = &PTR_FUN_00a03b08;
    lVar2 = 0x188;
    __Znwm();
    FUN_005bb2e4();
    *(long *)(lVar2 + 0x180) = lStack_350;
    *(long *)(lVar2 + 0x178) = lStack_358;
    lStack_358 = 0;
    lStack_350 = 0;
    lStack_98 = lVar2;
    func_0x005bbf5c(*(undefined8 *)(*plVar1 + 0x10));
    func_0x005bbecc();
    FUN_005ba414(auStack_4d0);
    func_0x005bb408(auStack_230);
    uStack_524 = param_2;
    plStack_510 = param_1;
    lStack_500 = extraout_x9;
    lStack_4f0 = extraout_x11;
  }
  func_0x005bb7c4();
  func_0x005bbde0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005bbecc();
    FUN_005ba414(auStack_4d0);
    func_0x005bb408(auStack_230);
    plVar1 = &lStack_b8;
    func_0x005bb7c4();
    func_0x005bbe10();
    func_0x005bbf1c();
    FUN_005bafb0();
    *(undefined1 *)(plVar1 + 0x16) = 0;
    plVar1[0x11] = unaff_x24;
    plVar1[0x12] = unaff_x23;
    plVar1[0x13] = (long)param_1;
    plVar1[0x14] = param_6;
    plVar1[0x15] = param_7;
    *(undefined1 *)(plVar1 + 0x19) = 0;
    if (*(char *)(param_8 + 3) == '\x01') {
      func_0x005bbea4(*param_8);
      param_8[1] = 0;
      param_8[2] = 0;
      *param_8 = 0;
      *(undefined1 *)(plVar1 + 0x19) = 1;
    }
    *(undefined1 *)(plVar1 + 0x1a) = 0;
    *(undefined1 *)(plVar1 + 0x1d) = 0;
    if ((char)plStack_530[3] == '\x01') {
      lVar3 = plStack_530[1];
      lVar2 = *plStack_530;
      plVar1[0x1c] = plStack_530[2];
      plVar1[0x1b] = lVar3;
      plVar1[0x1a] = lVar2;
      plStack_530[1] = 0;
      plStack_530[2] = 0;
      *plStack_530 = 0;
      *(undefined1 *)(plVar1 + 0x1d) = 1;
    }
    *(undefined1 *)(plVar1 + 0x1e) = uStack_528;
    *(undefined4 *)((long)plVar1 + 0xf4) = uStack_524;
    lVar3 = plStack_520[1];
    lVar2 = *plStack_520;
    plVar1[0x21] = plStack_520[2];
    plVar1[0x20] = lVar3;
    plVar1[0x1f] = lVar2;
    plStack_520[1] = 0;
    plStack_520[2] = 0;
    *plStack_520 = 0;
    lVar3 = plStack_518[1];
    lVar2 = *plStack_518;
    plVar1[0x24] = plStack_518[2];
    plVar1[0x23] = lVar3;
    plVar1[0x22] = lVar2;
    plStack_518[1] = 0;
    plStack_518[2] = 0;
    *plStack_518 = 0;
    *(undefined1 *)(plVar1 + 0x25) = 0;
    *(undefined1 *)(plVar1 + 0x28) = 0;
    if ((char)plStack_510[3] == '\x01') {
      lVar3 = plStack_510[1];
      lVar2 = *plStack_510;
      plVar1[0x27] = plStack_510[2];
      plVar1[0x26] = lVar3;
      plVar1[0x25] = lVar2;
      plStack_510[1] = 0;
      plStack_510[2] = 0;
      *plStack_510 = 0;
      *(undefined1 *)(plVar1 + 0x28) = 1;
    }
    *(ushort *)(plVar1 + 0x29) = uStack_508;
    plVar1[0x2a] = lStack_500;
    *(ushort *)(plVar1 + 0x2b) = uStack_4f8;
    plVar1[0x2c] = lStack_4f0;
    plVar1[0x2d] = lStack_4e8;
    *(undefined4 *)(plVar1 + 0x2e) = uStack_4e0;
    return;
  }
  return;
}



/* Entry: 005ba3f8; end: 005ba413;  */

void FUN_005ba3f8(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 *in_x7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000000;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  func_0x005bbf1c();
  FUN_005bafb0();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = unaff_x24;
  *(undefined8 *)(param_1 + 0x90) = unaff_x23;
  *(undefined8 *)(param_1 + 0x98) = unaff_x22;
  *(undefined8 *)(param_1 + 0xa0) = in_x5;
  *(undefined8 *)(param_1 + 0xa8) = in_x6;
  *(undefined1 *)(param_1 + 200) = 0;
  if (*(char *)(in_x7 + 3) == '\x01') {
    func_0x005bbea4(*in_x7);
    in_x7[1] = 0;
    in_x7[2] = 0;
    *in_x7 = 0;
    *(undefined1 *)(param_1 + 200) = 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if (*(char *)(in_stack_00000000 + 3) == '\x01') {
    uVar2 = in_stack_00000000[1];
    uVar1 = *in_stack_00000000;
    *(undefined8 *)(param_1 + 0xe0) = in_stack_00000000[2];
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    in_stack_00000000[1] = 0;
    in_stack_00000000[2] = 0;
    *in_stack_00000000 = 0;
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  *(undefined1 *)(param_1 + 0xf0) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xf4) = in_stack_0000000c;
  uVar2 = in_stack_00000010[1];
  uVar1 = *in_stack_00000010;
  *(undefined8 *)(param_1 + 0x108) = in_stack_00000010[2];
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  *in_stack_00000010 = 0;
  uVar2 = in_stack_00000018[1];
  uVar1 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000018[2];
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *in_stack_00000018 = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(in_stack_00000020 + 3) == '\x01') {
    uVar2 = in_stack_00000020[1];
    uVar1 = *in_stack_00000020;
    *(undefined8 *)(param_1 + 0x138) = in_stack_00000020[2];
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    *(undefined8 *)(param_1 + 0x128) = uVar1;
    in_stack_00000020[1] = 0;
    in_stack_00000020[2] = 0;
    *in_stack_00000020 = 0;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  *(undefined2 *)(param_1 + 0x148) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x150) = in_stack_00000030;
  *(undefined2 *)(param_1 + 0x158) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x160) = in_stack_00000040;
  *(undefined8 *)(param_1 + 0x168) = in_stack_00000048;
  *(undefined4 *)(param_1 + 0x170) = in_stack_00000050;
  return;
}



/* Entry: 005ba414; end: 005ba4b7;  */

void FUN_005ba414(long param_1)

{
  func_0x005bb7c4(param_1 + 0x178);
  FUN_00457530(param_1 + 0x128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf8);
  FUN_00457530(param_1 + 0xd0);
  FUN_00457530(param_1 + 0xb0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x004870f0();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 005ba4b8; end: 005ba5ab;  */

bool FUN_005ba4b8(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [56];
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_60;
  long alStack_58 [4];
  undefined8 uStack_38;
  
  plVar4 = param_1;
  func_0x005bbe00();
  plVar4 = (long *)*plVar4;
  uStack_38 = extraout_x8;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x10))();
    param_1 = (long *)*param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x18))();
      lVar7 = (long)(int)param_1;
      goto LAB_005ba518;
    }
  }
  lVar7 = 0;
LAB_005ba518:
  (**(code **)(*plRam0000000000b65da0 + 0x198))(alStack_58,plRam0000000000b65da0,plVar4,lVar7);
  plVar4 = alStack_58;
  plVar5 = plRam0000000000b65da0;
  (**(code **)(*plRam0000000000b65da0 + 0xf0))(plRam0000000000b65da0,plVar4,1);
  lStack_60 = *param_2;
  *param_2 = (long)plVar5;
  uVar3 = plVar5 == (long *)0x0;
  bVar1 = !(bool)uVar3;
  FUN_00468b24(&lStack_60);
  plVar5 = alStack_58;
  FUN_00486338();
  func_0x005bbde0(uStack_38);
  if ((bool)uVar3) {
    return bVar1;
  }
  ___stack_chk_fail();
  func_0x005bbeb0();
  FUN_00486338();
  func_0x005bbe10();
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    plStack_d8 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    uStack_c8 = 0;
    FUN_0040bf08(auStack_110);
    FUN_00464a10(auStack_110);
    lVar9 = 0;
    for (plVar5 = plStack_d8; plVar5 != plStack_d0; plVar5 = plVar5 + 4) {
      if (*plVar5 == 0) {
        uVar8 = (ulong)*(byte *)(plVar5 + 1);
      }
      else {
        uVar8 = plVar5[1];
      }
      lVar9 = uVar8 + lVar9;
    }
    FUN_00719ea0(&lStack_120,lVar9);
    lVar2 = lStack_118;
    lVar10 = lStack_120;
    if ((char)plVar4[2] == '\x01') {
      lStack_120 = 0;
      lStack_118 = 0;
      lStack_b8 = plVar4[1];
      lStack_c0 = *plVar4;
      plVar4[1] = lVar2;
      *plVar4 = lVar10;
      FUN_0040ce68(&lStack_c0);
    }
    else {
      plVar4[1] = lStack_118;
      *plVar4 = lStack_120;
      lStack_120 = 0;
      lStack_118 = 0;
      *(undefined1 *)(plVar4 + 2) = 1;
    }
    FUN_0040ce68(&lStack_120);
    plVar5 = plStack_d0;
    if (lVar9 != 0) {
      lVar9 = 0;
      for (plVar11 = plStack_d8; plVar11 != plVar5; plVar11 = plVar11 + 4) {
        if (*plVar11 == 0) {
          lVar10 = (long)plVar11 + 9;
          uVar8 = (ulong)*(byte *)(plVar11 + 1);
        }
        else {
          uVar8 = plVar11[1];
          lVar10 = plVar11[2];
        }
        plVar6 = (long *)*plVar4;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        if (uVar8 != 0) {
          _memmove((long)plVar6 + lVar9,lVar10,uVar8);
        }
        if (*plVar11 == 0) {
          uVar8 = (ulong)*(byte *)(plVar11 + 1);
        }
        else {
          uVar8 = plVar11[1];
        }
        lVar9 = uVar8 + lVar9;
      }
    }
    func_0x005bb450(&plStack_d8);
  }
  return lVar7 != 0;
}



/* Entry: 005ba5ac; end: 005ba72b;  */

bool FUN_005ba5ac(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [56];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_0040bf08(auStack_b0,param_1,&plStack_78);
    FUN_00464a10(auStack_b0);
    lVar5 = 0;
    for (plVar3 = plStack_78; plVar3 != plStack_70; plVar3 = plVar3 + 4) {
      if (*plVar3 == 0) {
        uVar4 = (ulong)*(byte *)(plVar3 + 1);
      }
      else {
        uVar4 = plVar3[1];
      }
      lVar5 = uVar4 + lVar5;
    }
    FUN_00719ea0(&lStack_c0,lVar5);
    lVar1 = lStack_b8;
    lVar6 = lStack_c0;
    if ((char)param_2[2] == '\x01') {
      lStack_c0 = 0;
      lStack_b8 = 0;
      lStack_58 = param_2[1];
      lStack_60 = *param_2;
      param_2[1] = lVar1;
      *param_2 = lVar6;
      FUN_0040ce68(&lStack_60);
    }
    else {
      param_2[1] = lStack_b8;
      *param_2 = lStack_c0;
      lStack_c0 = 0;
      lStack_b8 = 0;
      *(undefined1 *)(param_2 + 2) = 1;
    }
    FUN_0040ce68(&lStack_c0);
    plVar3 = plStack_70;
    if (lVar5 != 0) {
      lVar5 = 0;
      for (plVar8 = plStack_78; plVar8 != plVar3; plVar8 = plVar8 + 4) {
        if (*plVar8 == 0) {
          lVar6 = (long)plVar8 + 9;
          uVar4 = (ulong)*(byte *)(plVar8 + 1);
        }
        else {
          uVar4 = plVar8[1];
          lVar6 = plVar8[2];
        }
        plVar2 = (long *)*param_2;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
        if (uVar4 != 0) {
          _memmove((long)plVar2 + lVar5,lVar6,uVar4);
        }
        if (*plVar8 == 0) {
          uVar4 = (ulong)*(byte *)(plVar8 + 1);
        }
        else {
          uVar4 = plVar8[1];
        }
        lVar5 = uVar4 + lVar5;
      }
    }
    func_0x005bb450(&plStack_78);
  }
  return lVar7 != 0;
}



/* Entry: 005ba72c; end: 005ba86f;  */

long * FUN_005ba72c(undefined1 *param_1,long param_2,int param_3,long *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 extraout_x8;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  
  plVar5 = &lStack_90;
  plVar6 = &lStack_90;
  puVar4 = param_1;
  func_0x005bbe00();
  uStack_48 = extraout_x8;
  FUN_006ad008();
  lVar12 = *(long *)(param_2 + 0xb8);
  uVar3 = param_3 == 0;
  pcVar1 = "1";
  if ((bool)uVar3) {
    pcVar1 = "0";
  }
  FUN_004841bc(auStack_78,&PTR_s_result_00a03ae0,pcVar1);
  func_0x00483acc(&lStack_90,auStack_78,1);
  func_0x00483da0(auStack_78);
  lVar9 = *param_4;
  lVar10 = param_4[1];
  FUN_005ba870(&lStack_90);
  puVar2 = puRam0000000000b6bf88;
  puVar8 = puStack_88;
  if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
    FUN_0048405c(auStack_78,&lStack_90);
    lVar10 = ((long)puVar4 - lVar12) * 1000;
    lVar9 = param_2 + 0xa0;
    (**(code **)*puVar2)(puVar2);
    FUN_00484170(auStack_78);
    puVar8 = param_1;
  }
  FUN_00484190();
  func_0x005bbde0(uStack_48);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    FUN_00484170(auStack_78);
    FUN_00484190();
    func_0x005bbe10();
    lVar12 = (lVar10 - lVar9) / 0x30;
    if (0 < lVar12) {
      plVar5 = plVar6 + 2;
      lVar11 = plVar6[1];
      if ((*plVar5 - lVar11) / 0x30 < lVar12) {
        plVar7 = plVar6;
        FUN_00483ee8(plVar6,(lVar11 - *plVar6) / 0x30 + lVar12);
        FUN_00483f7c(&lStack_108,plVar7,((long)puVar8 - *plVar6) / 0x30,plVar5);
        lVar10 = lStack_f8 + lVar12 * 0x30;
        puVar4 = puStack_100;
        for (lVar12 = lVar12 * 0x30; puStack_100 = puVar4, lVar12 != 0; lVar12 = lVar12 + -0x30) {
          FUN_00483c54(lStack_f8,lVar9);
          lStack_f8 = lStack_f8 + 0x30;
          lVar9 = lVar9 + 0x30;
          puVar4 = puStack_100;
        }
        lStack_f8 = lVar10;
        _memcpy(lVar10,puVar8,plVar6[1] - (long)puVar8);
        lVar12 = *plVar6;
        lStack_f8 = lStack_f8 + (plVar6[1] - (long)puVar8);
        plVar6[1] = (long)puVar8;
        _memcpy(puStack_100 + (((long)puVar8 - lVar12) / -0x30) * 0x30);
        lStack_108 = *plVar6;
        *plVar6 = (long)(puStack_100 + (((long)puVar8 - lVar12) / -0x30) * 0x30);
        lVar12 = plVar6[2];
        plVar6[2] = lStack_f0;
        plVar6[1] = lStack_f8;
        puStack_100 = (undefined1 *)lStack_108;
        lStack_f8 = lStack_108;
        lStack_f0 = lVar12;
        func_0x00483fc8(&lStack_108);
        puVar8 = puVar4;
      }
      else {
        lVar13 = lVar11 - (long)puVar8;
        if (lVar13 / 0x30 < lVar12) {
          FUN_00483c08(plVar5,lVar9 + lVar13,lVar10,lVar11);
          plVar6[1] = (long)plVar5;
          if (lVar13 < 1) {
            return (long *)puVar8;
          }
          func_0x005bbe5c();
          lVar12 = lVar13 / 0x30;
        }
        else {
          func_0x005bbe5c();
        }
        func_0x005bb710(plVar6,lVar9,lVar12,puVar8);
      }
    }
    return (long *)puVar8;
  }
  return plVar5;
}



/* Entry: 005ba870; end: 005ba87f;  */

long FUN_005ba870(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  lVar4 = (param_4 - param_3) / 0x30;
  if (0 < lVar4) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if ((*plVar2 - lVar3) / 0x30 < lVar4) {
      plVar1 = param_1;
      FUN_00483ee8(param_1,(lVar3 - *param_1) / 0x30 + lVar4);
      FUN_00483f7c(&lStack_78,plVar1,(param_2 - *param_1) / 0x30,plVar2);
      lVar3 = lStack_68 + lVar4 * 0x30;
      lVar5 = lStack_70;
      for (lVar4 = lVar4 * 0x30; lStack_70 = lVar5, lVar4 != 0; lVar4 = lVar4 + -0x30) {
        FUN_00483c54(lStack_68,param_3);
        lStack_68 = lStack_68 + 0x30;
        param_3 = param_3 + 0x30;
        lVar5 = lStack_70;
      }
      lStack_68 = lVar3;
      _memcpy(lVar3,param_2,param_1[1] - param_2);
      lStack_68 = lStack_68 + (param_1[1] - param_2);
      param_1[1] = param_2;
      lVar4 = lStack_70 + ((param_2 - *param_1) / -0x30) * 0x30;
      _memcpy(lVar4);
      lStack_78 = *param_1;
      *param_1 = lVar4;
      lVar4 = param_1[2];
      param_1[2] = lStack_60;
      param_1[1] = lStack_68;
      lStack_70 = lStack_78;
      lStack_68 = lStack_78;
      lStack_60 = lVar4;
      func_0x00483fc8(&lStack_78);
      param_2 = lVar5;
    }
    else {
      lVar5 = lVar3 - param_2;
      if (lVar5 / 0x30 < lVar4) {
        FUN_00483c08(plVar2,param_3 + lVar5,param_4,lVar3);
        param_1[1] = (long)plVar2;
        if (lVar5 < 1) {
          return param_2;
        }
        func_0x005bbe5c();
        lVar4 = lVar5 / 0x30;
      }
      else {
        func_0x005bbe5c();
      }
      func_0x005bb710(param_1,param_3,lVar4,param_2);
    }
  }
  return param_2;
}



/* Entry: 005ba880; end: 005ba8c7;  */

bool FUN_005ba880(undefined4 *param_1,int *param_2)

{
  undefined4 uStack_14;
  
  if (*param_2 < 1 || *param_2 <= param_2[1]) {
    return false;
  }
  uStack_14 = *param_1;
  param_2 = param_2 + 0xe;
  FUN_005bbbc4(param_2,&uStack_14);
  return param_2 != (int *)0x0;
}



/* Entry: 005ba8c8; end: 005ba9df;  */

ulong FUN_005ba8c8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uStack_4c;
  undefined8 ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar5 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (((uVar5 == 0) || (lVar2 = param_1, FUN_005ba9e0(param_1,0xb1ef78,0), lVar2 == -1)) ||
     (lVar3 = param_1,
     __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x2c,lVar2),
     lVar3 == -1)) {
    uStack_4c = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = uRam0000000000b1ef80;
    if (-1 < (char)bRam0000000000b1ef8f) {
      uVar5 = (ulong)bRam0000000000b1ef8f;
    }
    FUN_00479db4(&pppuStack_48,param_1,uVar5 + lVar2,lVar3 - (uVar5 + lVar2));
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      pppuStack_48 = &pppuStack_48;
    }
    func_0x005baa10(pppuStack_48,uStack_40,&uStack_4c);
    uVar4 = uStack_4c & 0xffffff00;
    func_0x005bbe54();
    bVar1 = (int)pppuStack_48 == 0;
    if (bVar1) {
      uVar4 = 0;
    }
    uStack_4c = uStack_4c & 0xff;
    if (bVar1) {
      uStack_4c = 0;
    }
    uVar5 = 0x100000000;
    if (bVar1) {
      uVar5 = 0;
    }
  }
  return uVar5 | (uVar4 | uStack_4c);
}



/* Entry: 005ba9e0; end: 005baa17;  */

ulong FUN_005ba9e0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if ((long)uVar5 < 0) {
    puVar4 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  if (uVar5 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  else if (uVar1 != 0) {
    lVar3 = (long)puVar4 + param_3;
    FUN_004c97b8(lVar3,(long)puVar4 + uVar5,puVar2,(long)puVar2 + uVar1);
    param_3 = lVar3 - (long)puVar4;
    if (lVar3 == (long)puVar4 + uVar5) {
      param_3 = 0xffffffffffffffff;
    }
  }
  return param_3;
}



/* Entry: 005baa18; end: 005baa97;  */

void FUN_005baa18(undefined8 param_1,ulong param_2)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [48];
  
  FUN_005ba8c8();
  if (param_2 >> 0x20 != 0) {
    __ZNSt3__19to_stringEi(auStack_68);
    func_0x00483a94(auStack_50,&PTR_s_internal_00a03ae8,auStack_68);
    func_0x00483dc8(param_1,auStack_50);
    func_0x00483da0(auStack_50);
    func_0x005bbe54();
  }
  return;
}



/* Entry: 005baa98; end: 005bab27;  */

ulong * FUN_005baa98(ulong *param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  
  if (param_2[0x17] < '\0') {
    if (*(long *)(param_2 + 8) != 0) {
      pcVar6 = *(char **)param_2;
      goto LAB_005baacc;
    }
  }
  else {
    pcVar6 = param_2;
    if (param_2[0x17] != '\0') {
LAB_005baacc:
      if ((*pcVar6 == '/') &&
         (pcVar6 = param_2,
         __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm
                   (param_2,0x2f,0xffffffffffffffff),
         (char *)((long)&MACH_HEADER.magic + 1) < pcVar6 + 1)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (param_1,param_2,1,pcVar6 + -1,&stack0xffffffffffffffef);
        return param_1;
      }
    }
  }
  pcVar6 = "invalid_service_name";
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < pcVar6) {
    FUN_0040d740();
    plVar8 = *(long **)((long)pcVar6 + 8);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return (ulong *)pcVar6;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar6) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar6 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)pcVar6 | 7);
    }
    puVar5 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar6;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar5;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)pcVar6;
    puVar5 = param_1;
    if ((ulong *)pcVar6 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar5,"invalid_service_name",pcVar6);
LAB_00425d3c:
  *(char *)((long)puVar5 + (long)pcVar6) = '\0';
  return param_1;
}



/* Entry: 005bab28; end: 005babcf;  */

void FUN_005bab28(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_22 = param_4;
  uStack_21 = param_3;
  FUN_005babd0(&lStack_38,param_2,&uStack_21,&uStack_22);
  lStack_30 = lStack_38;
  lStack_38 = 0;
  FUN_005b8e2c(param_1,&lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  if (lVar1 != 0) {
    func_0x005bbdf4();
  }
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x005bbdf4();
  }
  return;
}



/* Entry: 005babd0; end: 005baca7;  */

void FUN_005babd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x005bbf1c();
  uVar1 = 0xf0;
  __Znwm();
  uStack_58 = unaff_x23[1];
  uStack_60 = *unaff_x23;
  if (unaff_x23[1] != 0) {
    do {
      func_0x005bbe74();
    } while (extraout_w10 != 0);
  }
  uStack_68 = unaff_x22[1];
  uStack_70 = *unaff_x22;
  if (unaff_x22[1] != 0) {
    do {
      func_0x005bbe74();
    } while (extraout_w10_00 != 0);
  }
  FUN_005bbcb0(uVar1,param_1);
  *extraout_x8 = uVar1;
  func_0x00467c1c(&uStack_70);
  func_0x00467c40(&uStack_60);
  return;
}



/* Entry: 005baca8; end: 005bad5b;  */

double FUN_005baca8(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _bzero(0xb6b780,0x800);
  for (uVar1 = 0; param_2 != uVar1; uVar1 = uVar1 + 1) {
    *(double *)((ulong)*(byte *)(param_1 + uVar1) * 8 + 0xb6b780) =
         *(double *)((ulong)*(byte *)(param_1 + uVar1) * 8 + 0xb6b780) + 1.0;
  }
  dVar4 = 0.0;
  for (lVar2 = 0; lVar2 != 0x800; lVar2 = lVar2 + 8) {
    dVar6 = *(double *)(lVar2 + 0xb6b780);
    if (dVar6 != 0.0) {
      dVar5 = dVar6 / (double)param_2;
      dVar3 = dVar5;
      _log2(dVar5);
      dVar4 = dVar4 + dVar6 * -(dVar5 * dVar3);
    }
  }
  return dVar4;
}



/* Entry: 005bad5c; end: 005bad63;  */

ulong * FUN_005bad5c(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  char *pcVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  
  pcVar5 = "";
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < pcVar5) {
    FUN_0040d740();
    plVar8 = *(long **)((long)pcVar5 + 8);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return (ulong *)pcVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)pcVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)pcVar5;
    puVar6 = param_1;
    if ((ulong *)pcVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,"",pcVar5);
LAB_00425d3c:
  *(char *)((long)puVar6 + (long)pcVar5) = '\0';
  return param_1;
}



/* Entry: 005bad64; end: 005bada3;  */

long FUN_005bad64(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00425cb4(param_1,*param_2);
  FUN_00425cb4(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 005bada4; end: 005bae37;  */

long FUN_005bada4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x38,param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



/* Entry: 005bae38; end: 005bafaf;  */

void FUN_005bae38(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  func_0x005bbf1c();
  FUN_005bafb0();
  *(undefined8 *)(param_1 + 0x88) = unaff_x24;
  *(undefined8 *)(param_1 + 0x90) = unaff_x23;
  *(undefined8 *)(param_1 + 0x98) = unaff_x22;
  *(undefined8 *)(param_1 + 0xa0) = in_x5;
  *(undefined8 *)(param_1 + 0xa8) = in_x6;
  *(undefined8 *)(param_1 + 0xb0) = in_x7;
  *(undefined8 *)(param_1 + 0xb8) = in_stack_00000000;
  *(undefined1 *)(param_1 + 0xc0) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xc4) = in_stack_0000000c;
  uVar2 = in_stack_00000010[1];
  uVar1 = *in_stack_00000010;
  *(undefined8 *)(param_1 + 0xd8) = in_stack_00000010[2];
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(undefined8 *)(param_1 + 200) = uVar1;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  *in_stack_00000010 = 0;
  uVar2 = in_stack_00000018[1];
  uVar1 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0xf0) = in_stack_00000018[2];
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *in_stack_00000018 = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (*(char *)(in_stack_00000020 + 3) == '\x01') {
    func_0x005bbea4(*in_stack_00000020);
    in_stack_00000020[1] = 0;
    in_stack_00000020[2] = 0;
    *in_stack_00000020 = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  *(undefined2 *)(param_1 + 0x118) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000030;
  *(undefined2 *)(param_1 + 0x128) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x130) = in_stack_00000040;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(char *)(in_stack_00000048 + 3) == '\x01') {
    uVar2 = in_stack_00000048[1];
    uVar1 = *in_stack_00000048;
    *(undefined8 *)(param_1 + 0x148) = in_stack_00000048[2];
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    *(undefined8 *)(param_1 + 0x138) = uVar1;
    in_stack_00000048[1] = 0;
    in_stack_00000048[2] = 0;
    *in_stack_00000048 = 0;
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  *(undefined8 *)(param_1 + 0x158) = in_stack_00000050;
  *(undefined4 *)(param_1 + 0x160) = in_stack_00000058;
  *(undefined8 *)(param_1 + 0x168) = in_stack_00000060;
  return;
}



/* Entry: 005bafb0; end: 005bb033;  */

void FUN_005bafb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  uVar2 = param_2[0xe];
  uVar1 = param_2[0xd];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xd] = 0;
  param_1[0x10] = param_2[0x10];
  return;
}



/* Entry: 005bb034; end: 005bb173;  */

void FUN_005bb034(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_005bafb0();
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (*(char *)(param_2 + 0x110) == '\x01') {
    func_0x005bbea4(*(undefined8 *)(param_2 + 0xf8));
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  uVar3 = *(undefined8 *)(param_2 + 0x130);
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(char *)(param_2 + 0x150) == '\x01') {
    func_0x005bbea4(param_1 + 0x138,*(undefined8 *)(param_2 + 0x138));
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined8 *)(param_2 + 0x148) = 0;
    *(undefined8 *)(param_2 + 0x138) = 0;
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x160);
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  return;
}



/* Entry: 005bb174; end: 005bb2e3;  */

void FUN_005bb174(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 *in_x7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000000;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  func_0x005bbf1c();
  FUN_005bafb0();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = unaff_x24;
  *(undefined8 *)(param_1 + 0x90) = unaff_x23;
  *(undefined8 *)(param_1 + 0x98) = unaff_x22;
  *(undefined8 *)(param_1 + 0xa0) = in_x5;
  *(undefined8 *)(param_1 + 0xa8) = in_x6;
  *(undefined1 *)(param_1 + 200) = 0;
  if (*(char *)(in_x7 + 3) == '\x01') {
    func_0x005bbea4(*in_x7);
    in_x7[1] = 0;
    in_x7[2] = 0;
    *in_x7 = 0;
    *(undefined1 *)(param_1 + 200) = 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if (*(char *)(in_stack_00000000 + 3) == '\x01') {
    uVar2 = in_stack_00000000[1];
    uVar1 = *in_stack_00000000;
    *(undefined8 *)(param_1 + 0xe0) = in_stack_00000000[2];
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    in_stack_00000000[1] = 0;
    in_stack_00000000[2] = 0;
    *in_stack_00000000 = 0;
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  *(undefined1 *)(param_1 + 0xf0) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xf4) = in_stack_0000000c;
  uVar2 = in_stack_00000010[1];
  uVar1 = *in_stack_00000010;
  *(undefined8 *)(param_1 + 0x108) = in_stack_00000010[2];
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  *in_stack_00000010 = 0;
  uVar2 = in_stack_00000018[1];
  uVar1 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000018[2];
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *in_stack_00000018 = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(in_stack_00000020 + 3) == '\x01') {
    uVar2 = in_stack_00000020[1];
    uVar1 = *in_stack_00000020;
    *(undefined8 *)(param_1 + 0x138) = in_stack_00000020[2];
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    *(undefined8 *)(param_1 + 0x128) = uVar1;
    in_stack_00000020[1] = 0;
    in_stack_00000020[2] = 0;
    *in_stack_00000020 = 0;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  *(undefined2 *)(param_1 + 0x148) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x150) = in_stack_00000030;
  *(undefined2 *)(param_1 + 0x158) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x160) = in_stack_00000040;
  *(undefined8 *)(param_1 + 0x168) = in_stack_00000048;
  *(undefined4 *)(param_1 + 0x170) = in_stack_00000050;
  return;
}



/* Entry: 005bb2e4; end: 005bb497;  */

void FUN_005bb2e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_005bafb0();
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined1 *)(param_1 + 200) = 0;
  if (*(char *)(param_2 + 200) == '\x01') {
    func_0x005bbea4(*(undefined8 *)(param_2 + 0xb0));
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 200) = 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    func_0x005bbea4(*(undefined8 *)(param_2 + 0xd0));
    *(undefined8 *)(param_2 + 0xd8) = 0;
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(undefined8 *)(param_2 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(param_2 + 0x140) == '\x01') {
    func_0x005bbea4(param_1 + 0x128,*(undefined8 *)(param_2 + 0x128));
    *(undefined8 *)(param_2 + 0x130) = 0;
    *(undefined8 *)(param_2 + 0x138) = 0;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  uVar4 = *(undefined8 *)(param_2 + 0x160);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  uVar5 = *(undefined8 *)(param_2 + 0x164);
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_2 + 0x16c);
  *(undefined8 *)(param_1 + 0x164) = uVar5;
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  return;
}



/* Entry: 005bb498; end: 005bb66f;  */

long FUN_005bb498(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  if (0 < param_5) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if ((*plVar2 - lVar3) / 0x30 < param_5) {
      plVar1 = param_1;
      FUN_00483ee8(param_1,(lVar3 - *param_1) / 0x30 + param_5);
      FUN_00483f7c(&lStack_78,plVar1,(param_2 - *param_1) / 0x30,plVar2);
      lVar3 = lStack_68 + param_5 * 0x30;
      lVar4 = lStack_70;
      for (param_5 = param_5 * 0x30; lStack_70 = lVar4, param_5 != 0; param_5 = param_5 + -0x30) {
        FUN_00483c54(lStack_68,param_3);
        lStack_68 = lStack_68 + 0x30;
        param_3 = param_3 + 0x30;
        lVar4 = lStack_70;
      }
      lStack_68 = lVar3;
      _memcpy(lVar3,param_2,param_1[1] - param_2);
      lStack_68 = lStack_68 + (param_1[1] - param_2);
      param_1[1] = param_2;
      lVar3 = lStack_70 + ((param_2 - *param_1) / -0x30) * 0x30;
      _memcpy(lVar3);
      lStack_78 = *param_1;
      *param_1 = lVar3;
      lVar3 = param_1[2];
      param_1[2] = lStack_60;
      param_1[1] = lStack_68;
      lStack_70 = lStack_78;
      lStack_68 = lStack_78;
      lStack_60 = lVar3;
      func_0x00483fc8(&lStack_78);
      param_2 = lVar4;
    }
    else {
      lVar4 = lVar3 - param_2;
      if (lVar4 / 0x30 < param_5) {
        FUN_00483c08(plVar2,param_3 + lVar4,param_4,lVar3);
        param_1[1] = (long)plVar2;
        if (lVar4 < 1) {
          return param_2;
        }
        func_0x005bbe5c();
        param_5 = lVar4 / 0x30;
      }
      else {
        func_0x005bbe5c();
      }
      func_0x005bb710(param_1,param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 005bb670; end: 005bb77f;  */

void FUN_005bb670(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)((long)puVar1 + (param_2 - param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 6) {
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    puVar3[2] = puVar2[2];
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    uVar6 = puVar2[4];
    uVar5 = puVar2[3];
    puVar3[5] = puVar2[5];
    puVar3[4] = uVar6;
    puVar3[3] = uVar5;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[3] = 0;
    puVar3 = puVar3 + 6;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  puVar2 = puVar1 + -6;
  lVar4 = (long)puVar2 + (param_2 - param_4);
  for (param_4 = param_4 - (long)puVar1; param_4 != 0; param_4 = param_4 + 0x30) {
    FUN_0052cc4c(puVar2,lVar4);
    lVar4 = lVar4 + -0x30;
    puVar2 = puVar2 + -6;
  }
  return;
}



/* Entry: 005bb780; end: 005bb7eb;  */

long FUN_005bb780(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if (param_2 < param_4) {
    return -1;
  }
  lVar1 = param_1 + param_4;
  FUN_004c6fa8(lVar1,param_3,param_2 - param_4);
  param_1 = lVar1 - param_1;
  if (lVar1 == 0) {
    param_1 = -1;
  }
  return param_1;
}



/* Entry: 005bb7ec; end: 005bb803;  */

void FUN_005bb7ec(void)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  func_0x00339fa0(0xafb148,FUN_003f8c8c);
  uVar2 = uRam0000000000b5f430;
  func_0x00339d8c(uRam0000000000b5f430);
  iVar3 = iRam0000000000b5ec28 + 1;
  bVar1 = iRam0000000000b5ec28 == 0;
  iRam0000000000b5ec28 = iVar3;
  if (bVar1) {
    if (cRam0000000000b5f438 == '\x01') {
      cRam0000000000b5f438 = '\0';
      func_0x00339f84(uRam0000000000b5f440);
    }
    FUN_0033a834();
    func_0x003c2d00();
    FUN_003b1eec();
    FUN_003c2d74();
    FUN_0033bb1c();
    if (0 < iRam0000000000b5ec2c) {
      lVar4 = 0;
      puVar5 = (undefined8 *)0xb5ec30;
      iVar3 = iRam0000000000b5ec2c;
      do {
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)();
          iVar3 = iRam0000000000b5ec2c;
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar4 < iVar3);
    }
    FUN_003b1f34();
    FUN_003c2e14();
  }
  func_0x00339da8(uVar2);
  return;
}



/* Entry: 005bb804; end: 005bb823;  */

void FUN_005bb804(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005ba168();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005bb824; end: 005bb83b;  */

void FUN_005bb824(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005bb83c; end: 005bb85b;  */

void FUN_005bb83c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005ba414();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005bb85c; end: 005bb85f;  */

void FUN_005bb85c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005bb860; end: 005bba37;  */

void FUN_005bb860(long *param_1,ulong *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  undefined4 *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 unaff_x22;
  undefined1 auStack_218 [24];
  int aiStack_200 [14];
  undefined1 auStack_1c8 [56];
  undefined1 auStack_190 [56];
  undefined4 auStack_158 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_110;
  long *plStack_108;
  ulong *puStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  ulong auStack_d8 [3];
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 *puStack_b0;
  undefined8 uStack_58;
  
  plVar3 = param_1;
  func_0x005bbe00();
  *param_3 = 1;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar3 + 0x28))();
  uVar2 = (uint)plVar3 == 0x17;
  pcVar4 = (char *)param_1;
  if ((uint)plVar3 < 0x18) {
    unaff_x22 = 0xb65da0;
    func_0x005bbfb8();
    (**(code **)(extraout_x8_00 + 0x148))(&lStack_c0);
    puVar1 = auStack_b8 + 1;
    if (lStack_c0 != 0) {
      puVar1 = puStack_b0;
    }
    FUN_00549ea8(param_1,puVar1);
    plVar3 = (long *)(auStack_b8 + 1 + ((ulong)auStack_b8 & 0xff));
    if (lStack_c0 != 0) {
      plVar3 = (long *)(puStack_b0 + (long)auStack_b8);
    }
    uVar2 = plVar3 == (long *)pcVar4;
    if (!(bool)uVar2) {
      func_0x005bbfb8();
      (**(code **)(extraout_x8_01 + 0x10))();
    }
    func_0x005bbfb8();
    (**(code **)(extraout_x8_02 + 0xf0))();
    auStack_d8[0] = *param_2;
    *param_2 = (ulong)pcVar4;
    func_0x005bbfb8();
    (**(code **)(extraout_x8_03 + 0x1b0))();
    func_0x005bbf90();
    FUN_00468b24(auStack_d8);
    plVar3 = &lStack_c0;
    FUN_00486338();
  }
  else {
    FUN_00486390(&lStack_c0,param_2,0x100000,plVar3);
    FUN_00549f80(param_1,&lStack_c0);
    if ((int)pcVar4 == 0) {
      pcVar4 = "Failed to serialize message";
      FUN_00425cb4(auStack_d8);
      func_0x005bbf98();
      func_0x005bbe54();
    }
    else {
      func_0x005bbf44();
      (*extraout_x8_04)();
      func_0x005bbf90();
    }
    plVar3 = &lStack_c0;
    FUN_0048670c();
  }
  func_0x005bbde0(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x005bbe54();
  plVar5 = &lStack_c0;
  FUN_0048670c();
  func_0x005bbe10();
  pcStack_e8 = FUN_005bba38;
  uStack_110 = unaff_x22;
  plStack_108 = param_1;
  puStack_100 = param_2;
  plStack_f8 = plVar3;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (plVar5 == (long *)0x0) {
    FUN_00425cb4(auStack_1c8,"No payload");
    func_0x005bbf98();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  }
  else {
    plVar3 = plVar5;
    func_0x005bbf44();
    (*extraout_x8_06)();
    FUN_004648ec(auStack_158,plVar3);
    FUN_0048677c(auStack_1c8,plVar5);
    FUN_004648ec(aiStack_200,auStack_190);
    FUN_00464a10(aiStack_200);
    if (aiStack_200[0] == 0) {
      plVar3 = (long *)pcVar4;
      FUN_00549da4(pcVar4,auStack_1c8);
      if (((ulong)plVar3 & 1) == 0) {
        func_0x00549b4c(auStack_218,pcVar4);
        FUN_0046e000(aiStack_200,0xd,auStack_218);
        FUN_00469ae8(auStack_158,aiStack_200);
        FUN_00464a10(aiStack_200);
        func_0x005bbe54();
      }
    }
    else {
      func_0x005bbf90();
    }
    FUN_00486a78(auStack_1c8);
    if (aiStack_200[0] == 0) {
      func_0x00469a4c(plVar5);
      *extraout_x8_05 = auStack_158[0];
      *(undefined8 *)(extraout_x8_05 + 4) = uStack_148;
      *(undefined8 *)(extraout_x8_05 + 2) = uStack_150;
      *(undefined8 *)(extraout_x8_05 + 6) = uStack_140;
      uStack_150 = 0;
      uStack_148 = 0;
      *(undefined8 *)(extraout_x8_05 + 10) = uStack_130;
      *(undefined8 *)(extraout_x8_05 + 8) = uStack_138;
      *(undefined8 *)(extraout_x8_05 + 0xc) = uStack_128;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
    }
    FUN_00464a10(auStack_158);
  }
  return;
}



/* Entry: 005bba38; end: 005bbbc3;  */

void FUN_005bba38(undefined4 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  code *extraout_x8;
  undefined1 auStack_138 [24];
  int aiStack_120 [14];
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [56];
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    FUN_00425cb4(auStack_e8,"No payload");
    func_0x005bbf98();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  }
  else {
    lVar1 = param_2;
    func_0x005bbf44();
    (*extraout_x8)();
    FUN_004648ec(auStack_78,lVar1);
    FUN_0048677c(auStack_e8,param_2);
    FUN_004648ec(aiStack_120,auStack_b0);
    FUN_00464a10(aiStack_120);
    if (aiStack_120[0] == 0) {
      uVar2 = param_3;
      FUN_00549da4(param_3,auStack_e8);
      if ((uVar2 & 1) == 0) {
        func_0x00549b4c(auStack_138,param_3);
        FUN_0046e000(aiStack_120,0xd,auStack_138);
        FUN_00469ae8(auStack_78,aiStack_120);
        FUN_00464a10(aiStack_120);
        func_0x005bbe54();
      }
    }
    else {
      func_0x005bbf90();
    }
    FUN_00486a78(auStack_e8);
    if (aiStack_120[0] == 0) {
      func_0x00469a4c(param_2);
      *param_1 = auStack_78[0];
      *(undefined8 *)(param_1 + 4) = uStack_68;
      *(undefined8 *)(param_1 + 2) = uStack_70;
      *(undefined8 *)(param_1 + 6) = uStack_60;
      uStack_70 = 0;
      uStack_68 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_50;
      *(undefined8 *)(param_1 + 8) = uStack_58;
      *(undefined8 *)(param_1 + 0xc) = uStack_48;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    FUN_00464a10(auStack_78);
  }
  return;
}



/* Entry: 005bbbc4; end: 005bbbdf;  */

bool FUN_005bbbc4(long param_1)

{
  FUN_005bbbe0();
  return param_1 != 0;
}



/* Entry: 005bbbe0; end: 005bbc7b;  */

long FUN_005bbbe0(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 005bbc7c; end: 005bbcaf;  */

void FUN_005bbc7c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uStack_24;
  
  FUN_00575540(param_1,param_2,&uStack_24);
  *param_3 = uStack_24;
  return;
}



/* Entry: 005bbcb0; end: 005bbd1f;  */

undefined8 *
FUN_005bbcb0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00a03b30;
  FUN_005b90a8(param_1 + 1);
  *(undefined1 *)(param_1 + 0x19) = param_3;
  *(undefined1 *)((long)param_1 + 0xc9) = param_4;
  uVar1 = *param_5;
  param_1[0x1b] = param_5[1];
  param_1[0x1a] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0x1d] = param_6[1];
  param_1[0x1c] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  return param_1;
}



/* Entry: 005bbd20; end: 005bbd23;  */

undefined8 * FUN_005bbd20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a03b30;
  func_0x00467c1c(param_1 + 0x1c);
  func_0x00467c40(param_1 + 0x1a);
  func_0x00465c30(param_1 + 1);
  return param_1;
}



/* Entry: 005bbd24; end: 005bbd37;  */

void FUN_005bbd24(void)

{
  FUN_005bbd9c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005bbd38; end: 005bbd9b;  */

undefined8 FUN_005bbd38(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd8;
  __Znwm(0xd8);
  FUN_005c4b04();
  return uVar1;
}



/* Entry: 005bbd9c; end: 005bbddf;  */

undefined8 * FUN_005bbd9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a03b30;
  func_0x00467c1c(param_1 + 0x1c);
  func_0x00467c40(param_1 + 0x1a);
  func_0x00465c30(param_1 + 1);
  return param_1;
}



/* Entry: 005bbde0; end: 005bbfc3;  */

void FUN_005bbde0(void)

{
  return;
}



/* Entry: 005bbfc4; end: 005bc15f;  */

void FUN_005bbfc4(undefined8 param_1,long param_2,long param_3,ulong param_4,long param_5,
                 long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long alStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x005bc9a4(param_1,"x-request-id");
  FUN_00409258(param_2,&uStack_60,param_3);
  func_0x005bc99c();
  if (*(char *)(param_3 + 0xe8) == '\x01') {
    func_0x005bc9a4();
    func_0x005bc9ac();
    func_0x005bc99c();
  }
  func_0x005bc9a4();
  func_0x005bc9ac();
  func_0x005bc99c();
  func_0x005bc9a4();
  __ZNSt3__19to_stringEx(alStack_78);
  func_0x005bc9ac();
  func_0x005bc9bc();
  func_0x005bc99c();
  if (*(char *)(param_6 + 0x2c) == '\x01') {
    func_0x005bc9a4();
    param_4 = (ulong)*(uint *)(param_6 + 0x28);
    __ZNSt3__19to_stringEi(alStack_78);
    func_0x005bc9ac();
    func_0x005bc9bc();
    func_0x005bc99c();
  }
  if (*(char *)(param_3 + 200) == '\x01') {
    uVar1 = (ulong)(int)*(uint *)(param_3 + 0xc4);
    uVar2 = (ulong)*(uint *)(param_3 + 0xc4);
  }
  else {
    if (*(char *)(param_5 + 0x20) != '\x01') goto LAB_005bc110;
    uVar1 = *(ulong *)(param_5 + 0x18);
    uVar2 = uVar1;
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  alStack_78[0] = param_4 + (uVar1 & 0x1fffffffffffff00 | uVar2 & 0xff) * 1000;
  FUN_0040c904(alStack_78,&uStack_60);
  *(undefined8 *)(param_2 + 0x70) = uStack_58;
  *(undefined8 *)(param_2 + 0x68) = uStack_60;
LAB_005bc110:
  FUN_005b9a24(param_2,param_6);
  return;
}



/* Entry: 005bc160; end: 005bc1bf;  */

void FUN_005bc160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_138 [256];
  undefined8 uStack_38;
  
  FUN_00483978(auStack_138);
  uStack_38 = param_3;
  FUN_005bc1c0(param_1,auStack_138);
  func_0x00467d18(auStack_138);
  return;
}



/* Entry: 005bc1c0; end: 005bc1d7;  */

void FUN_005bc1c0(void)

{
  FUN_005bc230();
  return;
}



/* Entry: 005bc1d8; end: 005bc223;  */

void FUN_005bc1d8(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    (**(code **)(*(long *)plVar1[0x22] + 0x20))();
  }
  FUN_005bc948(param_1);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 005bc224; end: 005bc22f;  */

void FUN_005bc224(void)

{
  return;
}



/* Entry: 005bc230; end: 005bc263;  */

void FUN_005bc230(void)

{
  func_0x005bc248();
  return;
}



/* Entry: 005bc264; end: 005bc627;  */

undefined1  [16] FUN_005bc264(long *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  qword *pqVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  ulong unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  uVar9 = param_2;
  FUN_005bc628();
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar16 = uVar15 - 1;
    if ((uVar15 & uVar16) == 0) {
      unaff_x25 = uVar16 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar15 <= uVar9) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar9 / uVar15;
        }
        unaff_x25 = uVar9 - uVar6 * uVar15;
      }
    }
    pcVar14 = *(char **)(*param_1 + unaff_x25 * 8);
    if (pcVar14 != (char *)0x0) {
      do {
        while( true ) {
          pcVar14 = *(char **)pcVar14;
          if (pcVar14 == (char *)0x0) goto LAB_005bc328;
          uVar6 = *(ulong *)(pcVar14 + 8);
          if (uVar6 != uVar9) break;
          pqVar3 = (qword *)(pcVar14 + 0x10);
          FUN_00459c38(pqVar3,param_2);
          if (((ulong)pqVar3 & 1) != 0) {
            uVar5 = 0;
            goto LAB_005bc5f0;
          }
        }
        if ((uVar15 & uVar16) == 0) {
          uVar6 = uVar6 & uVar16;
        }
        else if (uVar15 <= uVar6) {
          uVar7 = 0;
          if (uVar15 != 0) {
            uVar7 = uVar6 / uVar15;
          }
          uVar6 = uVar6 - uVar7 * uVar15;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_005bc328:
  plVar1 = param_1 + 2;
  pcVar14 = section_00000108.segname;
  __Znwm();
  pcVar14[0] = '\0';
  pcVar14[1] = '\0';
  pcVar14[2] = '\0';
  pcVar14[3] = '\0';
  pcVar14[4] = '\0';
  pcVar14[5] = '\0';
  pcVar14[6] = '\0';
  pcVar14[7] = '\0';
  *(ulong *)(pcVar14 + 8) = uVar9;
  FUN_00483978(pcVar14 + 0x10,param_3);
  *(undefined8 *)(pcVar14 + 0x110) = *(undefined8 *)(param_3 + 0x100);
  if ((uVar15 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar15))
  goto LAB_005bc574;
  uVar16 = 1;
  if (2 < uVar15) {
    uVar16 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar16 = uVar16 | uVar15 << 1;
  uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar16 <= uVar15) {
    uVar16 = uVar15;
  }
  if (uVar16 - 1 == 0) {
    uVar16 = 2;
  }
  else if ((uVar16 & uVar16 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar15 = param_1[1];
  if (uVar15 < uVar16) {
LAB_005bc3e0:
    if (uVar16 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x5bc618);
      (*pcVar2)();
    }
    lVar4 = uVar16 << 3;
    __Znwm(lVar4);
    FUN_005bc64c(param_1,lVar4);
    param_1[1] = uVar16;
    lVar4 = *param_1;
    for (uVar15 = 0; uVar16 != uVar15; uVar15 = uVar15 + 1) {
      *(undefined8 *)(lVar4 + uVar15 * 8) = 0;
    }
    plVar10 = (long *)*plVar1;
    uVar15 = uVar16;
    if (plVar10 != (long *)0x0) {
      uVar12 = plVar10[1];
      uVar7 = uVar16 - 1;
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar12 / uVar16;
      }
      uVar13 = uVar12;
      if (uVar16 <= uVar12) {
        uVar13 = uVar12 - uVar6 * uVar16;
      }
      if ((uVar16 & uVar7) == 0) {
        uVar13 = uVar12 & uVar7;
      }
      *(long **)(lVar4 + uVar13 * 8) = plVar1;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        uVar6 = plVar10[1];
        if ((uVar16 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar16 <= uVar6) {
          uVar12 = 0;
          if (uVar16 != 0) {
            uVar12 = uVar6 / uVar16;
          }
          uVar6 = uVar6 - uVar12 * uVar16;
        }
        if (uVar6 != uVar13) {
          if (*(long *)(lVar4 + uVar6 * 8) == 0) {
            *(long **)(lVar4 + uVar6 * 8) = plVar11;
            uVar13 = uVar6;
          }
          else {
            *plVar11 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar4 + uVar6 * 8);
            **(long **)(lVar4 + uVar6 * 8) = (long)plVar10;
            plVar10 = plVar11;
          }
        }
      }
    }
  }
  else if (uVar16 < uVar15) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (uVar16 <= uVar6) {
      uVar16 = uVar6;
    }
    if (uVar16 < uVar15) {
      if (uVar16 != 0) goto LAB_005bc3e0;
      FUN_005bc64c(param_1,0);
      param_1[1] = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[1];
    }
  }
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x25 = uVar15 - 1 & uVar9;
  }
  else {
    unaff_x25 = uVar9;
    if (uVar15 <= uVar9) {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar9 / uVar15;
      }
      unaff_x25 = uVar9 - uVar16 * uVar15;
    }
  }
LAB_005bc574:
  lVar4 = *param_1;
  puVar8 = *(undefined8 **)(lVar4 + unaff_x25 * 8);
  if (puVar8 == (undefined8 *)0x0) {
    *(long *)pcVar14 = *plVar1;
    *plVar1 = (long)pcVar14;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar1;
    if (*(long *)pcVar14 != 0) {
      uVar9 = *(ulong *)(*(long *)pcVar14 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar9 = uVar9 & uVar15 - 1;
      }
      else if (uVar15 <= uVar9) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar9 / uVar15;
        }
        uVar9 = uVar9 - uVar16 * uVar15;
      }
      *(char **)(lVar4 + uVar9 * 8) = pcVar14;
    }
  }
  else {
    *(undefined8 *)pcVar14 = *puVar8;
    *puVar8 = pcVar14;
  }
  param_1[3] = param_1[3] + 1;
  func_0x005bc9c4();
  uVar5 = 1;
LAB_005bc5f0:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = pcVar14;
  return auVar17;
}



/* Entry: 005bc628; end: 005bc64b;  */

void FUN_005bc628(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_004597c4(&uStack_11,param_1);
  return;
}



/* Entry: 005bc64c; end: 005bc663;  */

void FUN_005bc64c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005bc664; end: 005bc68b;  */

undefined8 FUN_005bc664(undefined8 param_1)

{
  FUN_005bc68c(param_1,0);
  return param_1;
}



/* Entry: 005bc68c; end: 005bc6a3;  */

void FUN_005bc68c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00467d18(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 005bc6a4; end: 005bc71f;  */

void FUN_005bc6a4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00467d18(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 005bc720; end: 005bc7f7;  */

long FUN_005bc720(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    FUN_005bc628();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_00459c38(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 005bc7f8; end: 005bc82b;  */

undefined8 FUN_005bc7f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_005bc82c(auStack_38);
  func_0x005bc9c4();
  return uVar1;
}



/* Entry: 005bc82c; end: 005bc947;  */

void FUN_005bc82c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_005bc8e0;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_005bc8e0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_005bc8e0:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 005bc948; end: 005bc99b;  */

void FUN_005bc948(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00467ce0(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 005bc99c; end: 005bc9cb;  */

void FUN_005bc99c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (&stack0x00000020);
  return;
}



/* Entry: 005bc9cc; end: 005bca1f;  */

void FUN_005bc9cc(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000000b6bf80 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0xb6bf80,&ppuStack_20,FUN_005bca58);
  }
  return;
}



/* Entry: 005bca20; end: 005bca57;  */

void FUN_005bca20(undefined8 param_1)

{
  FUN_005bc9cc();
                    /* WARNING: Could not recover jumptable at 0x005bca54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000000b6bf88 + 8))(plRam0000000000b6bf88,param_1);
  return;
}



/* Entry: 005bca58; end: 005bcb5b;  */

void FUN_005bca58(void)

{
  qword *pqVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  qword *pqVar5;
  qword *pqVar6;
  qword *pqStack_60;
  char *pcStack_58;
  qword *pqStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar4 = segment_command_00000020.segname + 8;
  __Znwm();
  pqVar6 = (qword *)(pcVar4 + 8);
  *pqVar6 = 0;
  *(qword *)(pcVar4 + 0x10) = 0;
  *(undefined ***)pcVar4 = &PTR_FUN_00a03bc0;
  pqVar1 = (qword *)(pcVar4 + 0x18);
  *(undefined8 *)(pcVar4 + 0x28) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pqVar6,0x10);
    if (bVar3) {
      *pqVar6 = *pqVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pqVar5 = (qword *)(pcVar4 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pqVar5,0x10);
    if (bVar3) {
      *pqVar5 = *pqVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_40 = 0;
  uStack_38 = 0;
  *(char **)(pcVar4 + 0x18) = pcVar4 + 0x18;
  *(char **)(pcVar4 + 0x20) = pcVar4;
  pqStack_60 = pqVar1;
  pcStack_58 = pcVar4;
  pqStack_50 = pqVar1;
  pcStack_48 = pcVar4;
  FUN_005bcb90(&uStack_40);
  func_0x005bcbbc(&pqStack_50);
  pqVar5 = &segment_command_00000020.vmsize;
  __Znwm();
  *pqVar5 = (qword)&PTR_FUN_00a04bb0;
  pqVar5[2] = 0;
  pqVar5[1] = 0;
  pqVar5[4] = 0;
  pqVar5[3] = 0;
  pqVar5[5] = (qword)pqVar1;
  pqVar5[6] = (qword)pcVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pqVar6,0x10);
    if (bVar3) {
      *pqVar6 = *pqVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pqVar5[7] = 0;
  pqRam0000000000b6bf88 = pqVar5;
  FUN_005c7fd4();
  func_0x005bcbbc(&pqStack_60);
  return;
}



/* Entry: 005bcb5c; end: 005bcb5f;  */

void FUN_005bcb5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a03bc0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005bcb60; end: 005bcb73;  */

void FUN_005bcb60(void)

{
  func_0x005bcb80();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005bcb74; end: 005bcb8f;  */

long FUN_005bcb74(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 005bcb90; end: 005bcbe7;  */

long FUN_005bcb90(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 005bcbe8; end: 005bcc43;  */

void FUN_005bcbe8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a03c10;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 3;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



/* Entry: 005bcc44; end: 005bcc57;  */

void FUN_005bcc44(void)

{
  FUN_005bcd7c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005bcc58; end: 005bcd7b;  */

void FUN_005bcc58(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_78,param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  FUN_00459e04(auStack_98,param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  FUN_00459e04(auStack_b8,param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  FUN_00459e04(auStack_d8,param_2 + 0x48);
  FUN_00466ec8(param_1,auStack_78,uVar1,uVar3,uVar5,auStack_98,uVar6,auStack_b8,uVar2,uVar4,
               auStack_d8,*(undefined1 *)(param_2 + 0x88));
  FUN_00457530(auStack_d8);
  FUN_00457530(auStack_b8);
  FUN_00457530(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 005bcd7c; end: 005bcdcb;  */

undefined8 * FUN_005bcd7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a03c10;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  FUN_00457530(param_1 + 9);
  FUN_00457530(param_1 + 5);
  FUN_00457530(param_1 + 1);
  return param_1;
}



/* Entry: 005bcdcc; end: 005bce23;  */

void FUN_005bcdcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005bcdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}


