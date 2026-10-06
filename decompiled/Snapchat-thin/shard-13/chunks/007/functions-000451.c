/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa87700; end: 10aa8778f;  */

float FUN_10aa87700(float param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  dVar3 = 0.0;
  if (*(long **)(param_2 + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0xe8) + 0x90))();
    dVar3 = (double)param_1;
  }
  if (*(long **)(param_2 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0xf8) + 0x90))();
    dVar2 = (double)param_1;
  }
  if (*(long **)(param_2 + 0x108) == (long *)0x0) {
    dVar1 = 0.0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x108) + 0x90))();
    dVar1 = (double)param_1;
  }
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  return (float)dVar1;
}



/* Entry: 10aa87790; end: 10aa8779f;  */

undefined8 FUN_10aa87790(void)

{
  return 3;
}



/* Entry: 10aa877a0; end: 10aa87837;  */

void FUN_10aa877a0(undefined8 *param_1,long param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 uVar8;
  long lStack_60;
  long *plStack_58;
  
  if ((uint)param_3 < 3) {
    param_2 = param_2 + (param_3 & 0xffffffff) * 0x10;
    lVar7 = *(long *)(param_2 + 0xf0);
    uVar8 = *(undefined8 *)(param_2 + 0xe8);
    param_1[1] = *(undefined8 *)(param_2 + 0xf0);
    *param_1 = uVar8;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  puVar6 = &UNK_10f68d017;
  FUN_10a00946c();
  if ((uint)param_3 < 3) {
    param_3 = param_3 & 0xffffffff;
    lVar7 = *(long *)(puVar6 + param_3 * 0x10 + 0x10);
    uVar8 = *(undefined8 *)(puVar6 + param_3 * 0x10 + 8);
    extraout_x8[1] = *(undefined8 *)(puVar6 + param_3 * 0x10 + 0x10);
    *extraout_x8 = uVar8;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  puVar6 = &UNK_10f68d017;
  FUN_10a00946c(&UNK_10f68d017);
  lStack_60 = *param_4;
  if ((lStack_60 == 0) ||
     (___dynamic_cast(lStack_60,&PTR_DAT_110c3f040,&PTR_DAT_110c3f750,0), lStack_60 == 0)) {
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    puVar6 = &UNK_10f68d042;
  }
  else {
    plStack_58 = (long *)param_4[1];
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((uint)param_3 < 3) {
      func_0x00010aa784b4(puVar6 + (param_3 & 0xffffffff) * 0x10 + 0xe8,&lStack_60);
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      return;
    }
    puVar6 = &UNK_10f68d017;
  }
  FUN_10a00946c(puVar6);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa87920);
  (*pcVar5)();
}



/* Entry: 10aa87838; end: 10aa87933;  */

void FUN_10aa87838(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *param_3;
  if ((lVar6 == 0) || (___dynamic_cast(lVar6,&PTR_DAT_110c3f040,&PTR_DAT_110c3f750,0), lVar6 == 0))
  {
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    puVar7 = &UNK_10f68d042;
  }
  else {
    plStack_38 = (long *)param_3[1];
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_40 = lVar6;
    if (param_2 < 3) {
      func_0x00010aa784b4(param_1 + (ulong)param_2 * 0x10 + 0xe8,&lStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      return;
    }
    puVar7 = &UNK_10f68d017;
  }
  FUN_10a00946c(puVar7);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa87920);
  (*pcVar5)();
}



/* Entry: 10aa87934; end: 10aa8793b;  */

void FUN_10aa87934(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *param_3;
  if ((lVar6 == 0) || (___dynamic_cast(lVar6,&PTR_DAT_110c3f040,&PTR_DAT_110c3f750,0), lVar6 == 0))
  {
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    puVar7 = &UNK_10f68d042;
  }
  else {
    plStack_38 = (long *)param_3[1];
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_40 = lVar6;
    if (param_2 < 3) {
      func_0x00010aa784b4(param_1 + (ulong)param_2 * 0x10 + 8,&lStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      return;
    }
    puVar7 = &UNK_10f68d017;
  }
  FUN_10a00946c(puVar7);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa87920);
  (*pcVar5)();
}



/* Entry: 10aa8793c; end: 10aa8796b;  */

ulong * FUN_10aa8793c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while (2 < (uint)param_3) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x30 = FUN_10aa8796c;
    FUN_10a00946c(&UNK_10f68d017);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    param_1 = extraout_x8;
    unaff_x29 = puVar2;
  }
  puVar6 = (ulong *)(&PTR_DAT_110c3ebf0)[param_3 & 0xffffffff];
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar3 = puVar6;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar3) {
    func_0x000107c2b040();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar3 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar3 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar3 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar3;
      }
    }
    return puVar3;
  }
  if (puVar3 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar3;
    puVar4 = param_1;
    if (puVar3 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar3 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar3 | 7) + 1);
    }
    puVar4 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar6,puVar3);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar4 + (long)puVar3) = 0;
  return param_1;
}



/* Entry: 10aa8796c; end: 10aa8796f;  */

ulong * FUN_10aa8796c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while (2 < (uint)param_3) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x30 = FUN_10aa8796c;
    FUN_10a00946c(&UNK_10f68d017);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    param_1 = extraout_x8;
    unaff_x29 = puVar2;
  }
  puVar6 = (ulong *)(&PTR_DAT_110c3ebf0)[param_3 & 0xffffffff];
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar3 = puVar6;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar3) {
    func_0x000107c2b040();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar3 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar3 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar3 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar3;
      }
    }
    return puVar3;
  }
  if (puVar3 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar3;
    puVar4 = param_1;
    if (puVar3 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar3 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar3 | 7) + 1);
    }
    puVar4 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar6,puVar3);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar4 + (long)puVar3) = 0;
  return param_1;
}



/* Entry: 10aa87970; end: 10aa87a77;  */

float FUN_10aa87970(undefined8 param_1,float param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = 0.0;
  fVar6 = 0.0;
  if (*(long **)(param_3 + 0xe8) != (long *)0x0) {
    uVar1 = param_1;
    (**(code **)(**(long **)(param_3 + 0xe8) + 0x98))(param_1);
    param_2 = 0.5;
    fVar6 = (float)uVar1 * 0.5;
  }
  if (*(long **)(param_3 + 0xf8) != (long *)0x0) {
    uVar1 = param_1;
    (**(code **)(**(long **)(param_3 + 0xf8) + 0x98))(param_1);
    param_2 = 0.5;
    fVar4 = (float)uVar1 * 0.5;
  }
  if (*(long **)(param_3 + 0x108) == (long *)0x0) {
    fVar5 = 0.0;
  }
  else {
    (**(code **)(**(long **)(param_3 + 0x108) + 0x98))(param_1);
    param_2 = 0.5;
    fVar5 = (float)param_1 * 0.5;
  }
  ___sincosf_stret(fVar6);
  fVar2 = param_2;
  ___sincosf_stret(fVar4);
  fVar3 = fVar2;
  ___sincosf_stret(fVar5);
  return -(param_2 * fVar4 * fVar5) + fVar3 * fVar6 * fVar2;
}



/* Entry: 10aa87a78; end: 10aa87bc7;  */

void FUN_10aa87a78(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  pcStack_78 = FUN_10aaaa5b8;
  ppuStack_70 = &PTR_DAT_110c40700;
  uStack_68 = param_1;
  FUN_10aa77204(param_2,&PTR_DAT_110c3fdf0,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  uStack_b8 = 0x10aaaa5e8;
  ppuStack_b0 = &PTR_DAT_110c40718;
  uStack_a8 = param_1;
  FUN_10aa77204(param_2,&PTR_s_y_110c3fe10,&uStack_b8);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  uStack_f8 = 0x10aaaa618;
  ppuStack_f0 = &PTR_DAT_110c40730;
  ppuVar5 = &PTR_s_z_110c3fe30;
  uStack_e8 = param_1;
  FUN_10aa77204(param_2,&PTR_s_z_110c3fe30,&uStack_f8);
  pppuVar4 = &ppuStack_f0;
  (*(code *)*ppuStack_f0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_f0)(&ppuStack_f0);
  __Unwind_Resume();
  func_0x00010aa70b70();
  FUN_10aa76510(ppuVar5,&PTR_DAT_110c3fdf0,pppuVar4[0x1d],pppuVar4[0x1e],&UNK_10f68d415,0x19);
  FUN_10aa76510(ppuVar5,&PTR_s_y_110c3fe10,pppuVar4[0x1f],pppuVar4[0x20],&UNK_10f68d415,0x19);
  ppuStack_140 = pppuVar4[0x21];
  ppuStack_138 = pppuVar4[0x22];
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar1 = ppuStack_138 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*ppuVar5 + 0x108))(ppuVar5,&PTR_s_z_110c3fe30,&ppuStack_140,&stack0xfffffffffffffed0)
  ;
  ppuVar5 = ppuStack_138;
  if (ppuStack_138 != (undefined **)0x0) {
    ppuVar1 = ppuStack_138 + 1;
    do {
      puVar6 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  return;
}



/* Entry: 10aa87bc8; end: 10aa87c4b;  */

void FUN_10aa87bc8(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  func_0x00010aa70b70();
  FUN_10aa76510(param_2,&PTR_DAT_110c3fdf0,*(undefined8 *)(param_1 + 0xe8),
                *(undefined8 *)(param_1 + 0xf0),&UNK_10f68d415,0x19);
  FUN_10aa76510(param_2,&PTR_s_y_110c3fe10,*(undefined8 *)(param_1 + 0xf8),
                *(undefined8 *)(param_1 + 0x100),&UNK_10f68d415,0x19);
  uStack_40 = *(undefined8 *)(param_1 + 0x108);
  plStack_38 = *(long **)(param_1 + 0x110);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_s_z_110c3fe30,&uStack_40,&stack0xffffffffffffffd0);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10aa87c4c; end: 10aa8816b;  */

void FUN_10aa87c4c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x130;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c407b8;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[3] = (long)&PTR_DAT_110c425e0;
    plVar3[5] = (long)&PTR_DAT_110c426b0;
    plVar3[10] = (long)&PTR_DAT_110c42708;
    plVar3[0x1f] = (long)&PTR_DAT_110c42728;
    plVar3[0x21] = 0;
    plVar3[0x20] = 0;
    plVar3[0x23] = 0;
    plVar3[0x22] = 0;
    plVar3[0x25] = 0;
    plVar3[0x24] = 0;
    plStack_60 = plVar5;
    plStack_58 = plVar3;
    FUN_10aaaa7ac(&plStack_60,plVar3 + 8,plVar5);
    FUN_10aaaa648(&plStack_a0,&plStack_60);
    if (plStack_58 == (long *)0x0) goto LAB_10aa87f58;
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_58;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x118;
    lStack_90 = lVar7;
    plStack_88 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    *plVar3 = (long)&PTR_DAT_110c425e0;
    plVar3[2] = (long)&PTR_DAT_110c426b0;
    plVar3[7] = (long)&PTR_DAT_110c42708;
    plVar3[0x1c] = (long)&PTR_DAT_110c42728;
    plVar3[0x20] = 0;
    plVar3[0x1f] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1d] = 0;
    plVar3[0x22] = 0;
    plVar3[0x21] = 0;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    plStack_60 = plVar3;
    __Znwm();
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c40758;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_58 = plVar4;
    FUN_10aaaa7ac(&plStack_60,plVar3 + 5,plVar3);
    FUN_10aaaa648(&plStack_a0,&plStack_60);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar4 = plStack_78 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_90 != 0) && (plStack_a0 != (long *)0x0)) {
      plStack_60 = plStack_a0;
      plStack_58 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar5 = plStack_98 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_90,&plStack_60);
      plVar5 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_88 == (long *)0x0) goto LAB_10aa87f58;
    plVar5 = plStack_88 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_88;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa87f58:
  lVar6 = 0;
  do {
    plVar5 = (long *)(param_2 + 0xe8 + lVar6 * 0x10);
    lStack_70 = *plVar5;
    if (lStack_70 != 0) {
      plStack_68 = (long *)plVar5[1];
      if (plStack_68 != (long *)0x0) {
        plVar5 = plStack_68 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a5726c4(&plStack_b0,param_4,&lStack_70);
      plStack_58 = plStack_a8;
      plStack_60 = plStack_b0;
      if (plStack_a8 != (long *)0x0) {
        plVar5 = plStack_a8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010aa77e78(plStack_a0 + lVar6 * 2 + 0x1d,&plStack_60);
      plVar5 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar4 = plStack_a8 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar4 = plStack_68 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  param_1[1] = plStack_98;
  *param_1 = plStack_a0;
  return;
}



/* Entry: 10aa8816c; end: 10aa881fb;  */

float FUN_10aa8816c(float param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  dVar3 = 0.0;
  if (*(long **)(param_2 + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0xe8) + 0x90))();
    dVar3 = (double)param_1;
  }
  if (*(long **)(param_2 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0xf8) + 0x90))();
    dVar2 = (double)param_1;
  }
  if (*(long **)(param_2 + 0x108) == (long *)0x0) {
    dVar1 = 0.0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x108) + 0x90))();
    dVar1 = (double)param_1;
  }
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  return (float)dVar1;
}



/* Entry: 10aa881fc; end: 10aa8820b;  */

undefined8 FUN_10aa881fc(void)

{
  return 3;
}



/* Entry: 10aa8820c; end: 10aa882a3;  */

void FUN_10aa8820c(undefined8 *param_1,long param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined8 uVar8;
  long lStack_60;
  long *plStack_58;
  
  if ((uint)param_3 < 3) {
    param_2 = param_2 + (param_3 & 0xffffffff) * 0x10;
    lVar7 = *(long *)(param_2 + 0xf0);
    uVar8 = *(undefined8 *)(param_2 + 0xe8);
    param_1[1] = *(undefined8 *)(param_2 + 0xf0);
    *param_1 = uVar8;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  puVar6 = &UNK_10f68d017;
  FUN_10a00946c();
  if ((uint)param_3 < 3) {
    param_3 = param_3 & 0xffffffff;
    lVar7 = *(long *)(puVar6 + param_3 * 0x10 + 0x10);
    uVar8 = *(undefined8 *)(puVar6 + param_3 * 0x10 + 8);
    extraout_x8[1] = *(undefined8 *)(puVar6 + param_3 * 0x10 + 0x10);
    *extraout_x8 = uVar8;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  puVar6 = &UNK_10f68d017;
  FUN_10a00946c(&UNK_10f68d017);
  lStack_60 = *param_4;
  if ((lStack_60 == 0) ||
     (___dynamic_cast(lStack_60,&PTR_DAT_110c3f040,&PTR_DAT_110c3f750,0), lStack_60 == 0)) {
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    puVar6 = &UNK_10f68d042;
  }
  else {
    plStack_58 = (long *)param_4[1];
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((uint)param_3 < 3) {
      func_0x00010aa784b4(puVar6 + (param_3 & 0xffffffff) * 0x10 + 0xe8,&lStack_60);
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      return;
    }
    puVar6 = &UNK_10f68d088;
  }
  FUN_10a00946c(puVar6);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa8838c);
  (*pcVar5)();
}



/* Entry: 10aa882a4; end: 10aa8839f;  */

void FUN_10aa882a4(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *param_3;
  if ((lVar6 == 0) || (___dynamic_cast(lVar6,&PTR_DAT_110c3f040,&PTR_DAT_110c3f750,0), lVar6 == 0))
  {
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    puVar7 = &UNK_10f68d042;
  }
  else {
    plStack_38 = (long *)param_3[1];
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_40 = lVar6;
    if (param_2 < 3) {
      func_0x00010aa784b4(param_1 + (ulong)param_2 * 0x10 + 0xe8,&lStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      return;
    }
    puVar7 = &UNK_10f68d088;
  }
  FUN_10a00946c(puVar7);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa8838c);
  (*pcVar5)();
}



/* Entry: 10aa883a0; end: 10aa883a7;  */

void FUN_10aa883a0(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = *param_3;
  if ((lVar6 == 0) || (___dynamic_cast(lVar6,&PTR_DAT_110c3f040,&PTR_DAT_110c3f750,0), lVar6 == 0))
  {
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    puVar7 = &UNK_10f68d042;
  }
  else {
    plStack_38 = (long *)param_3[1];
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_40 = lVar6;
    if (param_2 < 3) {
      func_0x00010aa784b4(param_1 + (ulong)param_2 * 0x10 + 8,&lStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      return;
    }
    puVar7 = &UNK_10f68d088;
  }
  FUN_10a00946c(puVar7);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa8838c);
  (*pcVar5)();
}



/* Entry: 10aa883a8; end: 10aa883d7;  */

ulong * FUN_10aa883a8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while (2 < (uint)param_3) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x30 = FUN_10aa883d8;
    FUN_10a00946c(&UNK_10f68d088);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    param_1 = extraout_x8;
    unaff_x29 = puVar2;
  }
  puVar6 = (ulong *)(&PTR_DAT_110c3ebf0)[param_3 & 0xffffffff];
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar3 = puVar6;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar3) {
    func_0x000107c2b040();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar3 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar3 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar3 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar3;
      }
    }
    return puVar3;
  }
  if (puVar3 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar3;
    puVar4 = param_1;
    if (puVar3 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar3 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar3 | 7) + 1);
    }
    puVar4 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar6,puVar3);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar4 + (long)puVar3) = 0;
  return param_1;
}



/* Entry: 10aa883d8; end: 10aa883db;  */

ulong * FUN_10aa883d8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while (2 < (uint)param_3) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x30 = FUN_10aa883d8;
    FUN_10a00946c(&UNK_10f68d088);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    param_1 = extraout_x8;
    unaff_x29 = puVar2;
  }
  puVar6 = (ulong *)(&PTR_DAT_110c3ebf0)[param_3 & 0xffffffff];
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar3 = puVar6;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar3) {
    func_0x000107c2b040();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar3 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar3 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar3 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar3;
      }
    }
    return puVar3;
  }
  if (puVar3 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar3;
    puVar4 = param_1;
    if (puVar3 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar3 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar3 | 7) + 1);
    }
    puVar4 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar6,puVar3);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar4 + (long)puVar3) = 0;
  return param_1;
}



/* Entry: 10aa883dc; end: 10aa886e3;  */

void FUN_10aa883dc(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c407f8;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 7;
    puVar6 = *(undefined4 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 7;
    puVar6 = (undefined4 *)(param_1 + 0x1b8);
  }
  *(undefined4 *)((long)puVar6 + 3) = 0x61746144;
  *puVar6 = 0x44796e41;
  *(undefined1 *)((long)puVar6 + 7) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f68d4f4;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c407f8;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f68d4f4,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa886e0;
    FUN_10a054dac(param_1,"getString",FUN_10aaaaa58,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa886e0;
    FUN_10a054dac(param_1,"getInt",FUN_10aaaac20,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa886e0;
    FUN_10a054dac(param_1,"getFloat",FUN_10aaaad00,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa886e0;
    FUN_10a054dac(param_1,&UNK_10f68d0b4,FUN_10aaaaddc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa886e0;
    FUN_10a054dac(param_1,"getBool",FUN_10aaaaeb4,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined4 *)(param_1 + 0x1b8),&UNK_10f68d4f4,7);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa886e0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa886e4);
  (*pcVar4)();
}



/* Entry: 10aa886e4; end: 10aa8870b;  */

undefined1  [16] FUN_10aa886e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 5;
  auVar1._0_8_ = &UNK_10f68d4fc;
  return auVar1;
}



/* Entry: 10aa8870c; end: 10aa887b3;  */

void FUN_10aa8870c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68c0c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f68c0c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10aa887b4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f68c3f3;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f68c0c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_38 = 0;
  FUN_10aaab06c();
  FUN_10aaab34c(param_1);
  return;
}



/* Entry: 10aa887b4; end: 10aa8888b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa8884c) */

undefined1  [16] FUN_10aa887b4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d4fc,5);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaaaf70(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa8888c; end: 10aa888e7;  */

void FUN_10aa8888c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10aa888e8; end: 10aa88a8b;  */

void FUN_10aa888e8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  plVar9 = (long *)(param_1 + 0x10);
  if (*plVar9 != 0) {
    ppuVar5 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    if (*ppuVar5 == (undefined *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x70);
    }
    else {
      puVar6 = *(undefined8 **)(param_1 + 0x70);
      if (*(undefined8 **)(*ppuVar5 + 0x870) == puVar6) goto LAB_10aa88a0c;
    }
    FUN_10a4620c0();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    plVar2 = *(long **)(param_1 + 0x18);
    *plVar9 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    plVar10 = (long *)puVar6[2];
    if (plVar10 == (long *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = uVar1;
      puVar7[1] = plVar2;
      puVar7[3] = 0x10aaab4fc;
      pcStack_58 = FUN_10aaab4c4;
      puStack_50 = puVar7;
      puStack_48 = puVar6;
      (**(code **)*puVar6)(puVar6,&pcStack_58);
    }
    else {
      lStack_60 = 0;
      (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_60);
      if (lStack_60 != 0) {
        __ZNSt13exception_ptrD1Ev(&lStack_60);
        if (plVar2 != (long *)0x0) {
          plVar10 = plVar2 + 1;
          do {
            lVar8 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        goto LAB_10aa88a0c;
      }
      puVar7 = (undefined8 *)0x28;
      __Znwm();
      *puVar7 = uVar1;
      puVar7[1] = plVar2;
      puVar7[3] = FUN_10aaab4e0;
      puVar7[4] = plVar10;
      pcStack_58 = FUN_10aaab490;
      puStack_50 = puVar7;
      puStack_48 = puVar6;
      (**(code **)*puVar6)(puVar6,&pcStack_58);
      __ZNSt13exception_ptrD1Ev(&lStack_60);
    }
    lStack_60 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
LAB_10aa88a0c:
  if (*(long *)(param_1 + 0x68) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
  func_0x00010a004dac(plVar9);
  func_0x00010a0536d4(param_1);
  return;
}



/* Entry: 10aa88a8c; end: 10aa88a9f;  */

undefined8 * FUN_10aa88a8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aa88aa0; end: 10aa88ae3;  */

void FUN_10aa88aa0(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa88ae4; end: 10aa88c27;  */

void FUN_10aa88ae4(undefined8 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **appuStack_68 [2];
  char cStack_51;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  byte bStack_39;
  undefined1 uStack_31;
  
  func_0x00010989f98c(&ppuStack_50,param_2 + 0x10);
  uVar2 = uStack_48;
  if (-1 < (char)bStack_39) {
    uVar2 = (ulong)bStack_39;
  }
  FUN_10a003c90(appuStack_68,uVar2 + 8,&uStack_31);
  pppuVar4 = (undefined8 ***)appuStack_68[0];
  if (-1 < cStack_51) {
    pppuVar4 = appuStack_68;
  }
  if (uVar2 != 0) {
    pppuVar1 = (undefined8 ***)ppuStack_50;
    if (-1 < (char)bStack_39) {
      pppuVar1 = &ppuStack_50;
    }
    _memmove(pppuVar4,pppuVar1,uVar2);
  }
  *(undefined8 *)((long)pppuVar4 + uVar2) = 0x203a656d616e2020;
  *(undefined1 *)((undefined8 *)((long)pppuVar4 + uVar2) + 1) = 0;
  uVar2 = *(ulong *)(param_2 + 0x60);
  puVar3 = *(undefined8 **)(param_2 + 0x58);
  if (-1 < (char)*(byte *)(param_2 + 0x6f)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x6f);
    puVar3 = (undefined8 *)(param_2 + 0x58);
  }
  pppuVar4 = appuStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,puVar3,uVar2);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if (cStack_51 < '\0') {
    __ZdlPv(appuStack_68[0]);
  }
  if ((char)bStack_39 < '\0') {
    __ZdlPv(ppuStack_50);
  }
  return;
}



/* Entry: 10aa88c28; end: 10aa88c2f;  */

void FUN_10aa88c28(undefined8 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **appuStack_68 [2];
  char cStack_51;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  byte bStack_39;
  undefined1 uStack_31;
  
  func_0x00010989f98c(&ppuStack_50,param_2);
  uVar2 = uStack_48;
  if (-1 < (char)bStack_39) {
    uVar2 = (ulong)bStack_39;
  }
  FUN_10a003c90(appuStack_68,uVar2 + 8,&uStack_31);
  pppuVar4 = (undefined8 ***)appuStack_68[0];
  if (-1 < cStack_51) {
    pppuVar4 = appuStack_68;
  }
  if (uVar2 != 0) {
    pppuVar1 = (undefined8 ***)ppuStack_50;
    if (-1 < (char)bStack_39) {
      pppuVar1 = &ppuStack_50;
    }
    _memmove(pppuVar4,pppuVar1,uVar2);
  }
  *(undefined8 *)((long)pppuVar4 + uVar2) = 0x203a656d616e2020;
  *(undefined1 *)((undefined8 *)((long)pppuVar4 + uVar2) + 1) = 0;
  uVar2 = *(ulong *)(param_2 + 0x50);
  puVar3 = *(undefined8 **)(param_2 + 0x48);
  if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x5f);
    puVar3 = (undefined8 *)(param_2 + 0x48);
  }
  pppuVar4 = appuStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,puVar3,uVar2);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if (cStack_51 < '\0') {
    __ZdlPv(appuStack_68[0]);
  }
  if ((char)bStack_39 < '\0') {
    __ZdlPv(ppuStack_50);
  }
  return;
}



/* Entry: 10aa88c30; end: 10aa88caf;  */

void FUN_10aa88c30(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a3c0654(param_1,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10aa88cb0; end: 10aa88d1f;  */

void FUN_10aa88cb0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  *param_2 = 0;
  FUN_10a3c0f34(param_1,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 10aa88d20; end: 10aa88e13;  */

void FUN_10aa88d20(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (param_2 != (long *)0x0) {
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar4 = (long *)param_1[1];
    if (((plVar4 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 == (long *)0x0)) ||
       (lStack_40 = *param_1, lStack_40 == 0)) {
      plVar4 = plStack_38;
      (**(code **)(*param_2 + 8))(param_2);
      if (plVar4 == (long *)0x0) {
        return;
      }
    }
    else {
      plStack_48 = param_2;
      FUN_10aa88cb0(lStack_40,&plStack_48);
      plVar1 = plStack_48;
      plStack_48 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10aa88e14; end: 10aa88e9b;  */

void FUN_10aa88e14(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a0533bc(&lStack_30);
  if (lStack_30 != 0) {
    FUN_10aa88e9c(param_1);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10aa88e9c; end: 10aa88f93;  */

void FUN_10aa88e9c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a3f24a8(&lStack_40,param_1 + 0x28);
  if (plStack_38 == (long *)0x0) {
    FUN_10a39a040(param_2 + 0x10);
    return;
  }
  plVar4 = plStack_38;
  __ZNSt3__119__shared_weak_count4lockEv();
  lVar5 = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = lStack_40;
  }
  if (plStack_38 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar5 == 0) {
    FUN_10a39a040(param_2 + 0x10);
    if (plVar4 == (long *)0x0) {
      return;
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) {
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  else {
    lStack_50 = lVar5;
    plStack_48 = plVar4;
    FUN_10a2c8f88(param_2,&lStack_50);
    FUN_10a39a040(param_2 + 0x10);
    if (plStack_48 == (long *)0x0) {
      return;
    }
    plVar4 = plStack_48 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) {
      return;
    }
    (**(code **)(*plStack_48 + 0x10))(plStack_48);
    plVar4 = plStack_48;
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  return;
}



/* Entry: 10aa88f94; end: 10aa891bb;  */

void FUN_10aa88f94(long param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x50);
  if (puVar6 == (undefined *)0x0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    puVar6 = *ppuVar3;
    if (puVar6 == (undefined *)0x0) {
      return;
    }
  }
  lVar8 = *(long *)(puVar6 + 0x870);
  if (lVar8 != 0) {
    puVar4 = (undefined8 *)0x38;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    puStack_50 = puVar4 + 3;
    *puStack_50 = 0;
    *puVar4 = &PTR_FUN_110c40840;
    puVar4[5] = param_2;
    puVar4[6] = lVar8;
    puVar4[4] = 0;
    puVar5 = (undefined8 *)0x20;
    plStack_48 = puVar4;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110c40890;
    (**(code **)(*param_2 + 0x248))(&uStack_70,param_2,param_3);
    puVar5[3] = uStack_70;
    plVar10 = (long *)puVar4[4];
    puVar4[3] = puVar5 + 3;
    puVar4[4] = puVar5;
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 1;
      do {
        lVar7 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_48;
    puVar4 = puStack_50;
    puStack_60 = puStack_50;
    puStack_58 = plStack_48;
    if (plStack_48 != (undefined8 *)0x0) {
      plVar9 = plStack_48 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a461ed0(lVar8,&puStack_60);
    if (puStack_58 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    __ZNSt3__15mutex4lockEv(param_1 + 0x80);
    puStack_50 = (undefined8 *)0x0;
    plStack_48 = (long *)0x0;
    plVar9 = *(long **)(param_1 + 0xd8);
    uStack_68 = *(undefined8 *)(param_1 + 0xd8);
    uStack_70 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 **)(param_1 + 0xd0) = puVar4;
    *(long **)(param_1 + 0xd8) = plVar10;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x80);
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 1;
      do {
        lVar8 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar10 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar9 = plStack_48 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  return;
}



/* Entry: 10aa891bc; end: 10aa8933b;  */

void FUN_10aa891bc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long lVar7;
  long lStack_58;
  long *plStack_50;
  int iStack_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  char cStack_38;
  
  FUN_10a0533bc(&lStack_58);
  if ((lStack_58 == 0) || (*(long *)(lStack_58 + 0x10) == 0)) {
    bVar4 = true;
  }
  else {
    lVar7 = *(long *)(lStack_58 + 0x18);
    *param_1 = *(long *)(lStack_58 + 0x10);
    param_1[1] = lVar7;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    bVar4 = false;
  }
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
    }
  }
  if (bVar4) {
    ppuVar5 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    if ((*ppuVar5 == (undefined *)0x0) || (FUN_10aa8933c(&lStack_58,param_2), cStack_38 != '\x01'))
    {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar6 = (undefined8 *)0x30;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_110b174d8;
      if (iStack_48 == 3) {
        puVar6[3] = lStack_58;
        *(undefined4 *)(puVar6 + 4) = 3;
        puVar6[5] = CONCAT71(uStack_3f,uStack_40);
      }
      else if (iStack_48 == 2) {
        puVar6[3] = lStack_58;
        *(undefined4 *)(puVar6 + 4) = 2;
        *(undefined1 *)(puVar6 + 5) = uStack_40;
      }
      else if (iStack_48 < 4) {
        puVar6[3] = lStack_58;
        *(int *)(puVar6 + 4) = iStack_48;
      }
      else {
        puVar6[3] = lStack_58;
        *(int *)(puVar6 + 4) = iStack_48;
        puVar6[5] = CONCAT71(uStack_3f,uStack_40);
      }
      *param_1 = (long)(puVar6 + 3);
      param_1[1] = (long)puVar6;
    }
  }
  return;
}



/* Entry: 10aa8933c; end: 10aa8946f;  */

void FUN_10aa8933c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int aiStack_50 [2];
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  __ZNSt3__15mutex4lockEv(param_2 + 0x80);
  plVar2 = *(long **)(param_2 + 0xd0);
  plVar3 = *(long **)(param_2 + 0xd8);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_40 = plVar2;
  plStack_38 = plVar3;
  __ZNSt3__15mutex6unlockEv(param_2 + 0x80);
  if (((plVar2 == (long *)0x0) || ((long *)plVar2[2] == (long *)0x0)) || (*plVar2 == 0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    (**(code **)(*(long *)plVar2[2] + 0x250))(aiStack_50);
    if (aiStack_50[0] == 7) {
      lVar6 = plVar2[2];
      param_1[1] = plVar2[3];
      *param_1 = lVar6;
      *(undefined4 *)(param_1 + 2) = 7;
      param_1[3] = (long)puStack_48;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      if ((3 < aiStack_50[0]) && (puStack_48 != (undefined8 *)0x0)) {
        (**(code **)*puStack_48)();
      }
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10aa89470; end: 10aa89663;  */

void FUN_10aa89470(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  FUN_10a0533bc(&lStack_50);
  if (lStack_50 == 0) {
    bVar3 = true;
  }
  else {
    FUN_10a053e40(&lStack_60);
    bVar3 = lStack_60 == 0;
    if (lStack_60 == 0) {
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          lVar4 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
    }
    else {
      *param_1 = lStack_60;
      param_1[1] = (long)plStack_58;
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  if (bVar3) {
    plVar5 = *(long **)(param_2 + 0x30);
    if (plVar5 == (long *)0x0) {
      plVar6 = (long *)0x0;
      lStack_60 = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x28);
      plVar6 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar6 = plVar5;
      __ZNSt3__119__shared_weak_count4lockEv();
      lStack_60 = 0;
      if (plVar6 != (long *)0x0) {
        lStack_60 = lVar4;
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    plStack_58 = plVar6;
    FUN_10aa89664(&lStack_70,param_2,&lStack_60);
    plVar5 = plStack_58;
    param_1[1] = lStack_68;
    *param_1 = lStack_70;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10aa89664; end: 10aa89aff;  */

void FUN_10aa89664(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  int iStack_78;
  undefined8 *puStack_70;
  byte bStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (*ppuVar6 == (undefined *)0x0) {
LAB_10aa89710:
    plVar10 = (long *)0x0;
  }
  else {
    FUN_10aa8933c(&plStack_88,param_2);
    if (bStack_68 != 1) goto LAB_10aa89710;
    plVar7 = (long *)0x30;
    __Znwm();
    plVar10 = plStack_58;
    puVar4 = puStack_70;
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_DAT_110b174d8;
    plStack_60 = plVar7 + 3;
    if (iStack_78 == 3) {
      plVar7[3] = (long)plStack_88;
      *(undefined4 *)(plVar7 + 4) = 3;
      plVar7[5] = (long)puStack_70;
    }
    else if (iStack_78 == 2) {
      plVar7[3] = (long)plStack_88;
      *(undefined4 *)(plVar7 + 4) = 2;
      *(undefined1 *)(plVar7 + 5) = puStack_70._0_1_;
    }
    else if (iStack_78 < 4) {
      plVar7[3] = (long)plStack_88;
      *(int *)(plVar7 + 4) = iStack_78;
    }
    else {
      puStack_70 = (undefined8 *)0x0;
      plVar7[3] = (long)plStack_88;
      *(int *)(plVar7 + 4) = iStack_78;
      plVar7[5] = (long)puVar4;
    }
    iStack_78 = 0;
    if (plStack_58 != (long *)0x0) {
      plVar8 = plStack_58 + 1;
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        lVar9 = *plStack_58;
        plStack_58 = plVar7;
        (**(code **)(lVar9 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        plVar7 = plStack_58;
      }
    }
    plStack_58 = plVar7;
    if ((bStack_68 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa89a88);
      (*pcVar5)();
    }
    plVar10 = plStack_80;
    if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
      (**(code **)*puStack_70)();
    }
  }
  plVar7 = (long *)0x90;
  __Znwm();
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110b9fe30;
  lVar9 = *param_3;
  plVar11 = plVar7 + 3;
  plVar7[4] = param_3[1];
  *plVar11 = lVar9;
  *param_3 = 0;
  param_3[1] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0x32aaaba7;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_98 = param_2;
  plStack_90 = plVar7;
  plStack_88 = plVar11;
  plStack_80 = plVar7;
  func_0x00010a053e8c(plVar11,&lStack_98);
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  __ZNSt3__15mutex4lockEv(param_2 + 0x80);
  plVar8 = *(long **)(param_2 + 200);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar8 != (long *)0x0) && (*(long **)(param_2 + 0xc0) != (long *)0x0)) {
      plStack_a8 = *(long **)(param_2 + 0xc0);
      plStack_a0 = plVar8;
      __ZNSt3__15mutex6unlockEv(param_2 + 0x80);
      goto LAB_10aa89874;
    }
  }
  if (plStack_60 != (long *)0x0) {
    func_0x00010a04a7fc(plVar7 + 5,&plStack_60);
    func_0x00010a053620(plVar11);
  }
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plStack_a8 = plVar11;
  plStack_a0 = plVar7;
  FUN_10a2c8f88(param_1,&lStack_98);
  plVar1 = plVar7 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar9 = *(long *)(param_2 + 200);
  *(long **)(param_2 + 0xc0) = plVar11;
  *(long **)(param_2 + 200) = plVar7;
  if (lVar9 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0x80);
  if (plStack_60 != (long *)0x0) {
    FUN_10aa89b3c(plVar10,&plStack_a8);
  }
LAB_10aa89874:
  if (*param_1 == 0) {
    func_0x00010a053e40(auStack_b8,plStack_a8);
    FUN_10a2c8f88(param_1,auStack_b8);
    if (plStack_b0 != (long *)0x0) {
      plVar10 = plStack_b0 + 1;
      do {
        lVar9 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
      }
    }
  }
  plVar10 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar7 = plStack_a0 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar7 = plStack_90 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar7 = plStack_80 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      lVar9 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 10aa89b00; end: 10aa89b3b;  */

void FUN_10aa89b00(undefined8 *param_1,long *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10aa89b3c; end: 10aa89bab;  */

void FUN_10aa89b3c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = *param_2;
  lStack_28 = param_2[1];
  *(undefined8 *)(lStack_30 + 0x70) = param_1;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a461ce0(param_1,&lStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10aa89bac; end: 10aa89c2b;  */

undefined4 FUN_10aa89bac(long param_1,undefined4 param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar1;
  undefined4 uStack_24;
  
  param_1 = param_1 + 0x20;
  uStack_24 = param_2;
  func_0x00010aaab7c0(param_1,&uStack_24);
  if (param_1 == 0) {
    uVar1 = 0;
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f68d0be,&UNK_10f68d0f5,0x1c,&UNK_10f68d13b,in_x6,in_x7,
                          uStack_24);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar1;
}



/* Entry: 10aa89c2c; end: 10aa89c5b;  */

int FUN_10aa89c2c(long param_1)

{
  return (int)(*(float *)(param_1 + 0x40) * (float)*(ulong *)(param_1 + 0x28) * 8.0);
}



/* Entry: 10aa89c5c; end: 10aa89d93;  */

void FUN_10aa89c5c(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_80;
  undefined1 uStack_79;
  undefined1 *puStack_78;
  
  (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110c3edd0);
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x208))();
  if (0 < (int)plVar1) {
    iVar4 = 0;
    do {
      (**(code **)(*param_3 + 0x218))(param_3,iVar4);
      plVar2 = param_3;
      (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110c3fe70);
      (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c3fe90);
      uStack_80 = SUB84(plVar2,0);
      lVar3 = param_2 + 0x20;
      uVar5 = param_1;
      puStack_78 = (undefined1 *)&uStack_80;
      func_0x0001094d9630(lVar3,&uStack_80,&UNK_10dd5b8f9,&puStack_78,&uStack_79);
      *(int *)(lVar3 + 0x14) = (int)param_1;
      (**(code **)(*param_3 + 0x220))(param_3);
      iVar4 = iVar4 + 1;
      param_1 = uVar5;
    } while ((int)plVar1 != iVar4);
  }
  (**(code **)(*param_3 + 0x220))(param_3);
  return;
}



/* Entry: 10aa89d94; end: 10aa89d9b;  */

void FUN_10aa89d94(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_80;
  undefined1 uStack_79;
  undefined1 *puStack_78;
  
  (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110c3edd0);
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x208))();
  if (0 < (int)plVar1) {
    iVar4 = 0;
    do {
      (**(code **)(*param_3 + 0x218))(param_3,iVar4);
      plVar2 = param_3;
      (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110c3fe70);
      (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c3fe90);
      uStack_80 = SUB84(plVar2,0);
      lVar3 = param_2 + 0x10;
      uVar5 = param_1;
      puStack_78 = (undefined1 *)&uStack_80;
      func_0x0001094d9630(lVar3,&uStack_80,&UNK_10dd5b8f9,&puStack_78,&uStack_79);
      *(int *)(lVar3 + 0x14) = (int)param_1;
      (**(code **)(*param_3 + 0x220))(param_3);
      iVar4 = iVar4 + 1;
      param_1 = uVar5;
    } while ((int)plVar1 != iVar4);
  }
  (**(code **)(*param_3 + 0x220))(param_3);
  return;
}



/* Entry: 10aa89d9c; end: 10aa89e57;  */

void FUN_10aa89d9c(long param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3edd0);
  for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3fe70,*(undefined4 *)(plVar1 + 2));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)plVar1 + 0x14),param_2,&PTR_DAT_110c3fe90);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa89e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa89e58; end: 10aa89ee3;  */

void FUN_10aa89e58(long param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3edd0);
  for (plVar1 = *(long **)(param_1 + 0x20); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3fe70,*(undefined4 *)(plVar1 + 2));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)((long)plVar1 + 0x14),param_2,&PTR_DAT_110c3fe90);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa89e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa89ee4; end: 10aa89f3b;  */

void FUN_10aa89ee4(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10aa89f3c(param_1,&uStack_58);
  FUN_10aaab95c();
  return;
}



/* Entry: 10aa89f3c; end: 10aa8a013;  */

/* WARNING: Removing unreachable block (ram,0x00010aa89fd4) */

undefined1  [16] FUN_10aa89f3c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d507,0x16);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaab860(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa8a014; end: 10aa8a1c3;  */

void FUN_10aa8a014(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3ef18);
  (**(code **)(*param_2 + 600))(&lStack_40,param_2,0);
  plVar3 = &lStack_50;
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110c5ee60,0), plVar3 = &lStack_50,
     lStack_40 != 0)) {
    plStack_48 = plStack_38;
    plVar3 = &lStack_40;
    lStack_50 = lStack_40;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  plVar3 = plStack_48;
  lVar4 = lStack_50;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  *(long *)(param_1 + 0xe0) = lVar4;
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10aa8a1c4; end: 10aa8a1ff;  */

void FUN_10aa8a1c4(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa8a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3ef18,*(undefined8 *)(param_1 + 0xe0));
  return;
}



/* Entry: 10aa8a200; end: 10aa8a233;  */

undefined1  [16] FUN_10aa8a200(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(param_1 + 0xe0);
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)0x1;
    FUN_10a576ce4();
    uVar3 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *puVar2;
    }
    auVar4._0_8_ = uVar1 & 0xffffffff;
    auVar4._8_8_ = uVar3;
    return auVar4;
  }
  return ZEXT816(0);
}



/* Entry: 10aa8a234; end: 10aa8a2c7;  */

undefined8 * FUN_10aa8a234(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_110c3ef48;
  param_1[1] = &PTR_DAT_110c3ef80;
  param_1[4] = &PTR_DAT_110c3efb0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 6,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[8] = param_2[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
  }
  *(undefined4 *)(param_1 + 9) = 0xac44;
  *(undefined1 *)((long)param_1 + 0x4c) = param_3;
  return param_1;
}



/* Entry: 10aa8a2c8; end: 10aa8a353;  */

void FUN_10aa8a2c8(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c3efe8);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3efe8);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))
              (param_2,&PTR_s_sampleRate_110c3f008,*(undefined4 *)(param_1 + 0x48));
    *(int *)(param_1 + 0x48) = (int)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010aa8a344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x220))(param_2);
    return;
  }
  return;
}



/* Entry: 10aa8a354; end: 10aa8a35b;  */

void FUN_10aa8a354(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c3efe8);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3efe8);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))
              (param_2,&PTR_s_sampleRate_110c3f008,*(undefined4 *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = (int)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010aa8a344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x220))(param_2);
    return;
  }
  return;
}



/* Entry: 10aa8a35c; end: 10aa8a41b;  */

void FUN_10aa8a35c(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3efe8);
  (**(code **)(*param_2 + 0x40))
            (param_2,&PTR_s_sampleRate_110c3f008,*(undefined4 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010aa8a3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa8a41c; end: 10aa8a49f;  */

undefined1  [16] FUN_10aa8a41c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f68d533;
  return auVar1;
}



/* Entry: 10aa8a4a0; end: 10aa8a553;  */

void FUN_10aa8a4a0(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f68c0c1;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f68c0c1;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10aa8a554(param_1,&puStack_98);
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68d16e;
  puStack_70 = &UNK_10f68c0c1;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x91;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f68c0c1;
  uStack_38 = 0;
  FUN_10aaabb6c();
  FUN_10aaabf8c(param_1);
  return;
}



/* Entry: 10aa8a554; end: 10aa8a62b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa8a5ec) */

undefined1  [16] FUN_10aa8a554(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d533,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aaaba70(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa8a62c; end: 10aa8a68f;  */

undefined8 * FUN_10aa8a62c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aa8a690; end: 10aa8a717;  */

undefined8 * FUN_10aa8a690(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  uVar6 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar6);
  *param_1 = &PTR_FUN_110c41b28;
  param_1[2] = &PTR_DAT_110c41bd0;
  param_1[7] = &PTR_DAT_110c41c28;
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}



/* Entry: 10aa8a718; end: 10aa8aa23;  */

void FUN_10aa8a718(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar4 = (long *)0x108;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110bc8410;
    plVar5 = plVar4 + 3;
    FUN_10aa8a690(plVar5,0,param_2 + 0xe0);
    plStack_50 = plVar5;
    plStack_48 = plVar4;
    FUN_10a37e8cc(&plStack_50,plVar4 + 8,plVar5);
    FUN_10a37e5ac(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10aa8a978;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar3 = 0xf0;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm(0xf0);
    FUN_10aa8a690();
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    FUN_10a37e82c(&plStack_50,uVar3,&lStack_60);
    FUN_10a37e5ac(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10aa8a978;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10aa8a978:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  return;
}



/* Entry: 10aa8aa24; end: 10aa8aae7;  */

void FUN_10aa8aa24(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  func_0x00010aa70acc();
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c3ef18);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3ef18);
    FUN_10aa8aae8(auStack_30,param_2,0);
    FUN_10aa8a62c(param_1 + 0xe0,auStack_30);
    if (plStack_28 != (long *)0x0) {
      plVar3 = plStack_28 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10aa8aae8; end: 10aa8abdf;  */

void FUN_10aa8aae8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(*param_2 + 600))(&lStack_40);
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110c5efc0,0), lStack_40 != 0)) {
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_38;
    param_1 = &lStack_40;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10aa8abe0; end: 10aa8ac1b;  */

void FUN_10aa8abe0(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010aa8ac18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3ef18,*(undefined8 *)(param_1 + 0xe0));
  return;
}



/* Entry: 10aa8ac1c; end: 10aa8ac4b;  */

undefined8 FUN_10aa8ac1c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    puVar2 = (undefined8 *)0x1;
    FUN_10aaac048();
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *puVar2;
    }
  }
  return uVar1;
}



/* Entry: 10aa8ac4c; end: 10aa8b35b;  */

undefined8 * FUN_10aa8ac4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3d5a0;
  param_1[2] = &PTR_DAT_110c3d640;
  param_1[7] = &PTR_DAT_110c3d698;
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aa8b35c; end: 10aa8b36f;  */

void FUN_10aa8b35c(void)

{
  FUN_10aa91f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa8b370; end: 10aa8b547;  */

undefined8 * FUN_10aa8b370(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  
  puVar1 = param_1 + 1;
  if (puVar1 == param_2) {
    puVar6 = (undefined8 *)param_1[2];
    puVar7 = param_1;
  }
  else {
    puVar6 = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    uVar5 = uVar2 - (long)puVar6;
    lVar4 = param_1[3];
    puVar7 = (undefined8 *)param_1[1];
    if ((ulong)(lVar4 - (long)puVar7) < uVar5) {
      puVar10 = (undefined8 *)(((long)uVar5 >> 4) * -0x5555555555555555);
      puVar3 = param_1;
      if (puVar7 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)param_1[2];
        puVar3 = puVar7;
        if (puVar8 != puVar7) {
          do {
            puVar8 = puVar8 + -6;
            func_0x00010aa91efc(puVar8);
          } while (puVar8 != puVar7);
          puVar3 = (undefined8 *)*puVar1;
        }
        param_1[2] = puVar7;
        __ZdlPv();
        lVar4 = 0;
        *puVar1 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if ((undefined8 *)0x555555555555555 < puVar10) {
LAB_10aa8b538:
        FUN_10aa95c9c();
        param_1[2] = puVar7;
        __Unwind_Resume();
        FUN_10aa91f2c(puVar3 + 0x1d);
        *puVar3 = &PTR_FUN_110c3ec18;
        puVar3[2] = &PTR_DAT_110c3ecb8;
        puVar3[7] = &PTR_DAT_110c3ed10;
        func_0x00010aa92258(puVar3 + 0x1a);
        if (puVar3[0x19] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        __ZNSt3__15mutexD1Ev(puVar3 + 0x10);
        if (puVar3[0xf] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (*(char *)((long)puVar3 + 0x6f) < '\0') {
          __ZdlPv(puVar3[0xb]);
        }
        if (puVar3[6] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        puVar3[2] = &PTR_DAT_110b17898;
        func_0x00010a004dac(puVar3 + 3);
        return puVar3;
      }
      puVar3 = (undefined8 *)((lVar4 >> 4) * 0x5555555555555556);
      if (puVar3 < puVar10 || (long)puVar3 + ((long)uVar5 >> 4) * 0x5555555555555555 == 0) {
        puVar3 = puVar10;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar4 >> 4) * -0x5555555555555555)) {
        puVar3 = (undefined8 *)0x555555555555555;
      }
      if ((undefined8 *)0x555555555555555 < puVar3) goto LAB_10aa8b538;
      FUN_10aa95cb0();
      param_1[1] = puVar3;
      param_1[2] = puVar3;
      param_1[3] = puVar3 + (long)param_2 * 6;
      FUN_10aaac33c(puVar6,uVar2,puVar3);
      puVar7 = puVar6;
    }
    else {
      uVar9 = param_1[2] - (long)puVar7;
      if (uVar9 < uVar5) {
        FUN_10aaac42c(puVar6,(long)puVar6 + uVar9,puVar7);
        puVar7 = (undefined8 *)((long)puVar6 + uVar9);
        FUN_10aaac33c(puVar7,uVar2,param_1[2]);
        puVar6 = puVar7;
      }
      else {
        FUN_10aaac42c(puVar6,uVar2,puVar7);
        puVar3 = (undefined8 *)param_1[2];
        puVar7 = puVar6;
        while (puVar3 != puVar6) {
          puVar3 = puVar3 + -6;
          puVar7 = puVar3;
          func_0x00010aa91efc(puVar3);
        }
      }
    }
    param_1[2] = puVar6;
  }
  if ((undefined8 *)*puVar1 == puVar6) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar11 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar6 + -6);
    uVar11 = *(undefined4 *)*puVar1;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = uVar11;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return puVar7;
}



/* Entry: 10aa8b548; end: 10aa8b9f7;  */

undefined8 * FUN_10aa8b548(undefined8 *param_1)

{
  FUN_10aa91f2c(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aa8b9f8; end: 10aa8b9ff;  */

void FUN_10aa8b9f8(void)

{
  return;
}



/* Entry: 10aa8ba00; end: 10aa8ba8b;  */

undefined8 * FUN_10aa8ba00(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  param_1[-1] = &PTR_DAT_110c3dc58;
  *param_1 = &PTR_FUN_110c3dcb8;
  param_1[2] = &PTR_FUN_110c3dd00;
  FUN_10aa9d34c(param_1 + 0x18,0);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  FUN_10aa9d068(param_1 + 7);
  func_0x00010a43c2c4(param_1 + 5);
  param_1[2] = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[4];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 3;
}



/* Entry: 10aa8ba8c; end: 10aa8ba93;  */

void FUN_10aa8ba8c(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110c3dc58;
  *param_1 = &PTR_FUN_110c3dcb8;
  param_1[2] = &PTR_FUN_110c3dd00;
  FUN_10aa9d34c(param_1 + 0x18,0);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  FUN_10aa9d068(param_1 + 7);
  func_0x00010a43c2c4(param_1 + 5);
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -1);
  return;
}



/* Entry: 10aa8ba94; end: 10aa8bb1b;  */

undefined8 * FUN_10aa8ba94(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  param_1[-3] = &PTR_DAT_110c3dc58;
  param_1[-2] = &PTR_FUN_110c3dcb8;
  *param_1 = &PTR_FUN_110c3dd00;
  FUN_10aa9d34c(param_1 + 0x16,0);
  if (param_1[0x15] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  FUN_10aa9d068(param_1 + 5);
  func_0x00010a43c2c4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 1;
}



/* Entry: 10aa8bb1c; end: 10aa8bb23;  */

void FUN_10aa8bb1c(undefined8 *param_1)

{
  param_1[-3] = &PTR_DAT_110c3dc58;
  param_1[-2] = &PTR_FUN_110c3dcb8;
  *param_1 = &PTR_FUN_110c3dd00;
  FUN_10aa9d34c(param_1 + 0x16,0);
  if (param_1[0x15] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  FUN_10aa9d068(param_1 + 5);
  func_0x00010a43c2c4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -3);
  return;
}



/* Entry: 10aa8bb24; end: 10aa8bec3;  */

undefined8 * FUN_10aa8bb24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3de58;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa8bec4; end: 10aa8c09f;  */

undefined4 FUN_10aa8bec4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  
  plVar1 = (long *)(param_1 + 8);
  if (plVar1 == param_2) {
    puVar8 = *(undefined4 **)(param_1 + 0x10);
  }
  else {
    puVar8 = (undefined4 *)*param_2;
    lVar2 = param_2[1];
    uVar6 = lVar2 - (long)puVar8;
    lVar5 = *(long *)(param_1 + 0x18);
    lVar10 = *(long *)(param_1 + 8);
    if ((ulong)(lVar5 - lVar10) < uVar6) {
      uVar11 = ((long)uVar6 >> 4) * -0x5555555555555555;
      lVar3 = param_1;
      if (lVar10 != 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        lVar3 = lVar10;
        if (lVar5 != lVar10) {
          do {
            lVar5 = lVar5 + -0x30;
            func_0x00010a436760(lVar5);
          } while (lVar5 != lVar10);
          lVar3 = *plVar1;
        }
        *(long *)(param_1 + 0x10) = lVar10;
        __ZdlPv();
        lVar5 = 0;
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      if (0x555555555555555 < uVar11) {
LAB_10aa8c090:
        FUN_10a43668c();
        *(long *)(param_1 + 0x10) = lVar10;
        __Unwind_Resume();
        return *(undefined4 *)(lVar3 + 0x20);
      }
      uVar7 = (lVar5 >> 4) * 0x5555555555555556;
      if (uVar7 < uVar11 || uVar7 + ((long)uVar6 >> 4) * 0x5555555555555555 == 0) {
        uVar7 = uVar11;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar5 >> 4) * -0x5555555555555555)) {
        uVar7 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar7) goto LAB_10aa8c090;
      plVar4 = plVar1;
      func_0x00010a4366a0();
      *(long **)(param_1 + 8) = plVar4;
      *(long **)(param_1 + 0x10) = plVar4;
      *(long **)(param_1 + 0x18) = plVar4 + uVar7 * 6;
      FUN_10aaac49c(puVar8,lVar2,plVar4);
    }
    else {
      uVar11 = *(long *)(param_1 + 0x10) - lVar10;
      if (uVar11 < uVar6) {
        FUN_10aaac58c(puVar8,(long)puVar8 + uVar11,lVar10);
        puVar8 = (undefined4 *)((long)puVar8 + uVar11);
        FUN_10aaac49c(puVar8,lVar2,*(undefined8 *)(param_1 + 0x10));
      }
      else {
        FUN_10aaac58c(puVar8,lVar2,lVar10);
        puVar9 = *(undefined4 **)(param_1 + 0x10);
        while (puVar9 != puVar8) {
          puVar9 = puVar9 + -0xc;
          func_0x00010a436760(puVar9);
        }
      }
    }
    *(undefined4 **)(param_1 + 0x10) = puVar8;
  }
  if ((undefined4 *)*plVar1 == puVar8) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar12 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = puVar8[-0xc];
    uVar12 = *(undefined4 *)*plVar1;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar12;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return uVar12;
}



/* Entry: 10aa8c0a0; end: 10aa8c0af;  */

undefined4 FUN_10aa8c0a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10aa8c0b0; end: 10aa8c143;  */

undefined8 * FUN_10aa8c0b0(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  *(undefined8 *)(param_1 + -0x68) = &PTR____cxa_pure_virtual_110c3fdb0;
  if (*(char *)(param_1 + -9) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + -0x20));
  }
  FUN_10a436634(param_1 + -0x30);
  lStack_28 = param_1 + -0x60;
  FUN_10a4367dc(&lStack_28);
  return (undefined8 *)(param_1 + -0x68);
}



/* Entry: 10aa8c144; end: 10aa8c153;  */

undefined4 FUN_10aa8c144(long param_1)

{
  return *(undefined4 *)(param_1 + -0x48);
}



/* Entry: 10aa8c154; end: 10aa8c1e7;  */

undefined8 * FUN_10aa8c154(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-0xf] = &PTR____cxa_pure_virtual_110c3fdb0;
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  FUN_10a436634(param_1 + -8);
  puStack_28 = param_1 + -0xe;
  FUN_10a4367dc(&puStack_28);
  return param_1 + -0xf;
}



/* Entry: 10aa8c1e8; end: 10aa8c20b;  */

float FUN_10aa8c1e8(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(long *)(param_1 + 0x30) + 0x20);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = *(float *)(*(long *)(param_1 + 0x40) + 0x20);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}



/* Entry: 10aa8c20c; end: 10aa8c2e7;  */

long FUN_10aa8c20c(long param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  do {
    FUN_10a493e78(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x20);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return param_1;
}



/* Entry: 10aa8c2e8; end: 10aa8c33f;  */

void FUN_10aa8c2e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  lVar2 = -0x20;
  do {
    FUN_10a493e78(lVar1);
    lVar1 = lVar1 + -0x10;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0);
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 10aa8c340; end: 10aa8c363;  */

float FUN_10aa8c340(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(long *)(param_1 + 0x28) + 0x20);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = *(float *)(*(long *)(param_1 + 0x38) + 0x20);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}



/* Entry: 10aa8c364; end: 10aa8c3a7;  */

undefined8 * FUN_10aa8c364(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = 0x28;
  do {
    FUN_10a493e78((long)param_1 + lVar5);
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 8);
  *param_1 = &PTR_DAT_110b17898;
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1 + 1;
}



/* Entry: 10aa8c3a8; end: 10aa8c3ff;  */

void FUN_10aa8c3a8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  do {
    FUN_10a493e78((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 8);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -3);
  return;
}



/* Entry: 10aa8c400; end: 10aa8c42b;  */

void FUN_10aa8c400(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = 0;
  fVar2 = 0.0;
  do {
    fVar3 = *(float *)(*(long *)(param_1 + 0x30 + lVar1) + 0x20);
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    lVar1 = lVar1 + 0x10;
    fVar2 = fVar3;
  } while (lVar1 != 0x30);
  return;
}



/* Entry: 10aa8c42c; end: 10aa8c507;  */

long FUN_10aa8c42c(long param_1)

{
  long lVar1;
  
  lVar1 = 0x50;
  do {
    FUN_10a493e78(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x20);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return param_1;
}



/* Entry: 10aa8c508; end: 10aa8c55f;  */

void FUN_10aa8c508(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x48;
  lVar2 = -0x30;
  do {
    FUN_10a493e78(lVar1);
    lVar1 = lVar1 + -0x10;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0);
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 10aa8c560; end: 10aa8c58b;  */

void FUN_10aa8c560(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = 0;
  fVar2 = 0.0;
  do {
    fVar3 = *(float *)(*(long *)(param_1 + 0x28 + lVar1) + 0x20);
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    lVar1 = lVar1 + 0x10;
    fVar2 = fVar3;
  } while (lVar1 != 0x30);
  return;
}



/* Entry: 10aa8c58c; end: 10aa8c5cf;  */

undefined8 * FUN_10aa8c58c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = 0x38;
  do {
    FUN_10a493e78((long)param_1 + lVar5);
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 8);
  *param_1 = &PTR_DAT_110b17898;
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1 + 1;
}



/* Entry: 10aa8c5d0; end: 10aa8c627;  */

void FUN_10aa8c5d0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  do {
    FUN_10a493e78((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 8);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -3);
  return;
}



/* Entry: 10aa8c628; end: 10aa8c653;  */

void FUN_10aa8c628(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = 0;
  fVar2 = 0.0;
  do {
    fVar3 = *(float *)(*(long *)(param_1 + 0x30 + lVar1) + 0x20);
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    lVar1 = lVar1 + 0x10;
    fVar2 = fVar3;
  } while (lVar1 != 0x40);
  return;
}



/* Entry: 10aa8c654; end: 10aa8c72f;  */

long FUN_10aa8c654(long param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  do {
    FUN_10a493e78(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x20);
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return param_1;
}



/* Entry: 10aa8c730; end: 10aa8c787;  */

void FUN_10aa8c730(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x58;
  lVar2 = -0x40;
  do {
    FUN_10a493e78(lVar1);
    lVar1 = lVar1 + -0x10;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0);
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -8);
  return;
}



/* Entry: 10aa8c788; end: 10aa8c7b3;  */

void FUN_10aa8c788(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = 0;
  fVar2 = 0.0;
  do {
    fVar3 = *(float *)(*(long *)(param_1 + 0x28 + lVar1) + 0x20);
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    lVar1 = lVar1 + 0x10;
    fVar2 = fVar3;
  } while (lVar1 != 0x40);
  return;
}



/* Entry: 10aa8c7b4; end: 10aa8c7f7;  */

undefined8 * FUN_10aa8c7b4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = 0x48;
  do {
    FUN_10a493e78((long)param_1 + lVar5);
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 8);
  *param_1 = &PTR_DAT_110b17898;
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1 + 1;
}



/* Entry: 10aa8c7f8; end: 10aa8c84f;  */

void FUN_10aa8c7f8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  do {
    FUN_10a493e78((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 8);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -3);
  return;
}



/* Entry: 10aa8c850; end: 10aa8c92b;  */

float FUN_10aa8c850(float param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (int)((ulong)param_2 >> 0x20);
  iVar3 = (int)param_2;
  FUN_10aaa5e8c();
  lVar1 = *(long *)(param_2 + 8);
  uVar5 = *(long *)(param_2 + 0x10) - lVar1 >> 4;
  if (((ulong)(long)iVar3 < uVar5) && ((ulong)(long)iVar4 < uVar5)) {
    fVar6 = *(float *)(lVar1 + (long)iVar3 * 0x10);
    fVar7 = *(float *)(lVar1 + (long)iVar4 * 0x10);
    fVar8 = 1.0;
    if (1.1920929e-07 <= ABS(fVar6 - fVar7)) {
      fVar8 = (param_1 - fVar6) / (fVar7 - fVar6);
    }
    fVar6 = 0.0;
    if (0.0 <= fVar8) {
      fVar6 = fVar8;
    }
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    return fVar7 * *(float *)(lVar1 + (long)iVar4 * 0x10 + 4) +
           *(float *)(lVar1 + (long)iVar3 * 0x10 + 4) * (1.0 - fVar7);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa8c92c);
  (*pcVar2)();
}



/* Entry: 10aa8c92c; end: 10aa8c9cb;  */

undefined8 * FUN_10aa8c92c(undefined8 *param_1)

{
  param_1[10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0xb);
  *param_1 = &PTR____cxa_pure_virtual_110ba1b68;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}


