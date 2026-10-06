/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac8e5c0; end: 10ac8edc7;  */

void FUN_10ac8e5c0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long *unaff_x19;
  long *plVar12;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar13;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = (long *)param_2[0x5d];
    plVar8 = (long *)0x1;
    FUN_10a088744();
    if (plVar8 == (long *)0x0) {
      unaff_x22 = (long *)0x0;
    }
    else {
      unaff_x22 = (long *)*plVar8;
    }
    unaff_x20 = param_2;
    if ((int)unaff_x19 == 2) {
      plVar8 = (long *)param_2[0x5f];
      if (plVar8 == (long *)0x0) {
LAB_10ac8e678:
        unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x260);
        plVar8 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x28))(unaff_x22);
        plVar12 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x30))(unaff_x22);
        FUN_10a1da3a4(param_2,plVar8,plVar12,0,0,0x2e,0,0);
        lVar7 = param_2[0x12];
        FUN_10a2421c8();
        unaff_x23 = *(long **)(lVar7 + 0x228);
        unaff_x24 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x28))();
        (**(code **)(*unaff_x22 + 0x30))();
        *(undefined4 *)((long)register0x00000008 + -0x260) = 0;
        *(int *)((long)register0x00000008 + -0x25c) = (int)unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x24c) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x254) = 0x2e00000001;
        param_1 = 0x100000001;
        *(undefined8 *)((long)register0x00000008 + -0x244) = 0x100000001;
        *(int *)((long)register0x00000008 + -600) = (int)unaff_x22;
        *(undefined4 *)((long)register0x00000008 + -0x23c) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x238) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
        plVar8 = unaff_x23;
        (**(code **)(*unaff_x23 + 0x20))
                  (unaff_x23,(undefined1 *)((long)register0x00000008 + -0x260));
        FUN_10a099d88(param_2 + 0x5f,plVar8);
      }
      else {
        (**(code **)(*plVar8 + 0x28))();
        plVar12 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x28))();
        if ((int)plVar8 != (int)plVar12) goto LAB_10ac8e678;
        unaff_x23 = (long *)param_2[0x5f];
        (**(code **)(*unaff_x23 + 0x30))();
        plVar8 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x30))();
        if ((int)unaff_x23 != (int)plVar8) goto LAB_10ac8e678;
      }
      uVar13 = (undefined4)param_1;
      lVar7 = param_2[0x59];
      if (lVar7 == 0) {
        FUN_10ab451f4((undefined1 *)((long)register0x00000008 + -0x260),param_2[0x12],&UNK_10f6a0613
                      ,0x18,&UNK_10f6a062c,0x14,&UNK_10f65bb0b,0x13,1);
        unaff_x21 = param_2 + 0x59;
        unaff_x22 = (long *)((long)register0x00000008 + -0x260);
        plVar8 = (long *)((long)register0x00000008 + -0x260);
        func_0x00010a015c50(unaff_x21);
        lVar7 = param_2[0x59];
        if (lVar7 == 0) {
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x250));
          unaff_x19 = (long *)((long)register0x00000008 + -0x248);
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x248))();
          plVar12 = *(long **)((long)register0x00000008 + -600);
          if (plVar12 != (long *)0x0) {
            plVar1 = plVar12 + 1;
            do {
              lVar7 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar7 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              unaff_x19 = plVar12;
            }
          }
          goto LAB_10ac8ecf0;
        }
        *(undefined1 *)(lVar7 + 8) = 1;
        if (*(long **)(lVar7 + 0x228) == *(long **)(lVar7 + 0x230)) {
          lVar7 = 0;
        }
        else {
          lVar7 = **(long **)(lVar7 + 0x228);
        }
        lVar10 = *(long *)(lVar7 + 600);
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 6;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        uVar13 = 0;
        *(undefined8 *)(lVar10 + 0x50) = 0;
        *(undefined8 *)(lVar10 + 0x48) = 0;
        func_0x00010a3326b8(lVar7 + 0x218,0);
        func_0x00010a332748(lVar7 + 0x219,1);
        func_0x00010a332700(lVar7 + 0x21a,1);
        func_0x00010a332790(lVar7,7);
        func_0x00010a3325d0(lVar7,0);
        *(undefined4 *)(lVar7 + 0x21e) = 0;
        func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x2a8),&PTR_DAT_110c69ea8);
        FUN_10a047898(lVar7 + 0x200,(undefined1 *)((long)register0x00000008 + -0x2a8),
                      (undefined1 *)((long)register0x00000008 + -0x2a8));
        if (*(char *)((long)register0x00000008 + -0x291) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a8));
        }
        *(undefined1 *)(lVar7 + 8) = 1;
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x250));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x248))
                  ((undefined1 *)((long)register0x00000008 + -0x248));
        plVar8 = *(long **)((long)register0x00000008 + -600);
        if (plVar8 != (long *)0x0) {
          plVar12 = plVar8 + 1;
          do {
            lVar7 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar7 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        lVar7 = *unaff_x21;
      }
      lVar10 = param_2[0x12];
      unaff_x21 = param_3 + 4;
      FUN_10a5dfd94(unaff_x21,lVar7);
      plVar8 = param_3 + 4;
      FUN_10a01eacc(plVar8,unaff_x21);
      func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69ec0);
      FUN_10a048040(plVar8[0x2b],(undefined1 *)((long)register0x00000008 + -0x260));
      if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
      }
      func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69ed8);
      if (param_2[0x5b] == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(param_2[0x5b] + 0x268);
      }
      FUN_10a5e17a8(plVar8,(undefined1 *)((long)register0x00000008 + -0x260),uVar9,&UNK_10e4ac8a8);
      if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
      }
      func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x2a8),&PTR_DAT_110c69ef0);
      (**(code **)(*(long *)param_2[0x5d] + 0x90))
                ((undefined1 *)((long)register0x00000008 + -0x260));
      FUN_10a7ec36c(plVar8,(undefined1 *)((long)register0x00000008 + -0x2a8),
                    (undefined1 *)((long)register0x00000008 + -0x260));
      if (*(char *)((long)register0x00000008 + -0x291) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a8));
      }
      func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69f08);
      FUN_10ac2751c(param_2[0x5d]);
      *(undefined4 *)((long)register0x00000008 + -0x2a8) = uVar13;
      FUN_10a01671c(plVar8,(undefined1 *)((long)register0x00000008 + -0x260),
                    (undefined1 *)((long)register0x00000008 + -0x2a8));
      if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
      }
      if (*(int *)(*(long *)(lVar10 + 0xa20) + 0x18) < 0x133) {
        func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69f20);
        *(undefined4 *)((long)register0x00000008 + -0x2a8) = 0;
        FUN_10a01671c(plVar8,(undefined1 *)((long)register0x00000008 + -0x260),
                      (undefined1 *)((long)register0x00000008 + -0x2a8));
      }
      else {
        func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69f20);
        *(undefined4 *)((long)register0x00000008 + -0x2a8) = 0x3f800000;
        FUN_10a01671c(plVar8,(undefined1 *)((long)register0x00000008 + -0x260),
                      (undefined1 *)((long)register0x00000008 + -0x2a8));
      }
      if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
      }
      bVar4 = *(byte *)(lVar10 + 0x1150);
      unaff_x24 = (long *)(ulong)bVar4;
      unaff_x23 = param_2;
      (**(code **)(*param_2 + 0xb0))();
      plVar12 = param_2;
      (**(code **)(*param_2 + 0xb8))();
      *(undefined8 *)((long)register0x00000008 + -0x28c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x294) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x27c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x284) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x29c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2a4) = 0;
      *(float *)((long)register0x00000008 + -0x2a8) =
           ((float)((ulong)plVar12 & 0xffffffff) * 2.4142134) /
           (float)((ulong)unaff_x23 & 0xffffffff);
      *(undefined4 *)((long)register0x00000008 + -0x294) = 0x401a8279;
      param_1 = 0xbf800000bf80419a;
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0xbf800000bf80419a;
      *(undefined4 *)((long)register0x00000008 + -0x270) = 0xc00020cd;
      if ((bVar4 & 1) != 0) {
        if ((ulong)(param_2[0x62] - param_2[0x61]) < 0x21) goto LAB_10ac8ed24;
        FUN_10abac910(plVar8,param_2[0x61] + 0x20,(undefined1 *)((long)register0x00000008 + -0x2a8))
        ;
      }
      if (param_2[0x62] == param_2[0x61]) {
LAB_10ac8ed24:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10ac8ed28);
        (*pcVar11)();
      }
      FUN_10abac910(plVar8,param_2[0x61],(undefined1 *)((long)register0x00000008 + -0x2a8));
      *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0xffffffffffffffff;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0xffffffffffffffff;
      *(undefined4 *)((long)register0x00000008 + -0x68) = 0x3f800000;
      *(undefined8 *)((long)register0x00000008 + -100) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x5c) = 0;
      lVar10 = param_2[0x5f];
      lVar7 = param_2[0x60];
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(long *)((long)register0x00000008 + -0xb8) = lVar10;
      *(long *)((long)register0x00000008 + -0xb0) = lVar7;
      pcVar11 = *(code **)(*param_3 + 0x88);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0xffffffffffffffff;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0xffffffffffffffff;
      (*pcVar11)(param_3,(undefined1 *)((long)register0x00000008 + -0x260));
      uVar2 = *(uint *)(param_2 + 0x3d);
      unaff_x22 = (long *)(ulong)uVar2;
      func_0x00010a1bd170((undefined1 *)((long)register0x00000008 + -0x268));
      uVar3 = *(uint *)((long)param_2 + 0x1ec);
      func_0x00010a1bd170((undefined1 *)((long)register0x00000008 + -0x268));
      func_0x00010a1bd170((undefined1 *)((long)register0x00000008 + -0x268));
      func_0x00010a1bd170((undefined1 *)((long)register0x00000008 + -0x268));
      *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
      *(ulong *)((long)register0x00000008 + -0x2e0) = CONCAT44(uVar3,uVar2);
      (**(code **)(*param_3 + 0xc0))(param_3,(undefined1 *)((long)register0x00000008 + -0x2e8));
      lVar7 = 0;
      FUN_10a2421c8();
      uVar9 = *(undefined8 *)(lVar7 + 0x208);
      *(undefined4 *)((long)register0x00000008 + -0x2e8) = 0x3f800000;
      *(undefined8 *)((long)register0x00000008 + -0x2dc) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2e4) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x2d4) = 0x3f800000;
      *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x2c0) = 0x3f800000;
      *(undefined8 *)((long)register0x00000008 + -0x2b4) = 0;
      *(undefined8 *)((long)register0x00000008 + -700) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x2ac) = 0x3f800000;
      (**(code **)(*param_3 + 0x58))
                (param_3,uVar9,unaff_x21,(undefined1 *)((long)register0x00000008 + -0x2e8),3);
      (**(code **)(*param_3 + 0x90))(param_3,3,0,3);
      plVar8 = *(long **)((long)register0x00000008 + -0x88);
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 1;
        do {
          lVar7 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)((long)register0x00000008 + -0xb0);
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 1;
        do {
          lVar7 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)((long)register0x00000008 + -0x260);
      unaff_x19 = (long *)((long)register0x00000008 + -600);
      func_0x00010a048e34();
      unaff_x20 = (long *)(ulong)uVar3;
    }
LAB_10ac8ecf0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    param_3 = plVar8;
    if (*(char *)((long)register0x00000008 + -0x291) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a8));
      param_3 = plVar8;
    }
    func_0x00010a015cb4((undefined1 *)((long)register0x00000008 + -0x260));
    unaff_x30 = FUN_10ac8edc8;
    param_2 = unaff_x19;
    __Unwind_Resume();
    param_2 = param_2 + -0x52;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2f0);
  } while( true );
}



/* Entry: 10ac8edc8; end: 10ac8edcf;  */

void FUN_10ac8edc8(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long *plVar12;
  long *unaff_x19;
  long *plVar13;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar14;
  
  do {
    plVar13 = param_2 + -0x52;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = (long *)param_2[0xb];
    plVar8 = (long *)0x1;
    FUN_10a088744();
    if (plVar8 == (long *)0x0) {
      unaff_x22 = (long *)0x0;
    }
    else {
      unaff_x22 = (long *)*plVar8;
    }
    if ((int)unaff_x19 == 2) {
      plVar8 = (long *)param_2[0xd];
      if (plVar8 == (long *)0x0) {
LAB_10ac8e678:
        unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x260);
        plVar8 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x28))(unaff_x22);
        plVar12 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x30))(unaff_x22);
        FUN_10a1da3a4(plVar13,plVar8,plVar12,0,0,0x2e,0,0);
        lVar7 = param_2[-0x40];
        FUN_10a2421c8();
        unaff_x23 = *(long **)(lVar7 + 0x228);
        unaff_x24 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x28))();
        (**(code **)(*unaff_x22 + 0x30))();
        *(undefined4 *)((long)register0x00000008 + -0x260) = 0;
        *(int *)((long)register0x00000008 + -0x25c) = (int)unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x24c) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x254) = 0x2e00000001;
        param_1 = 0x100000001;
        *(undefined8 *)((long)register0x00000008 + -0x244) = 0x100000001;
        *(int *)((long)register0x00000008 + -600) = (int)unaff_x22;
        *(undefined4 *)((long)register0x00000008 + -0x23c) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x238) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
        plVar8 = unaff_x23;
        (**(code **)(*unaff_x23 + 0x20))
                  (unaff_x23,(undefined1 *)((long)register0x00000008 + -0x260));
        FUN_10a099d88(param_2 + 0xd,plVar8);
      }
      else {
        (**(code **)(*plVar8 + 0x28))();
        plVar12 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x28))();
        if ((int)plVar8 != (int)plVar12) goto LAB_10ac8e678;
        unaff_x23 = (long *)param_2[0xd];
        (**(code **)(*unaff_x23 + 0x30))();
        plVar8 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x30))();
        if ((int)unaff_x23 != (int)plVar8) goto LAB_10ac8e678;
      }
      uVar14 = (undefined4)param_1;
      lVar7 = param_2[7];
      if (lVar7 == 0) {
        FUN_10ab451f4((undefined1 *)((long)register0x00000008 + -0x260),param_2[-0x40],
                      &UNK_10f6a0613,0x18,&UNK_10f6a062c,0x14,&UNK_10f65bb0b,0x13,1);
        unaff_x21 = param_2 + 7;
        unaff_x22 = (long *)((long)register0x00000008 + -0x260);
        plVar8 = (long *)((long)register0x00000008 + -0x260);
        func_0x00010a015c50(unaff_x21);
        lVar7 = param_2[7];
        if (lVar7 == 0) {
          FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x250));
          unaff_x19 = (long *)((long)register0x00000008 + -0x248);
          (*(code *)**(undefined8 **)((long)register0x00000008 + -0x248))();
          plVar12 = *(long **)((long)register0x00000008 + -600);
          if (plVar12 != (long *)0x0) {
            plVar1 = plVar12 + 1;
            do {
              lVar7 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar7 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              unaff_x19 = plVar12;
            }
          }
          goto LAB_10ac8ecf0;
        }
        *(undefined1 *)(lVar7 + 8) = 1;
        if (*(long **)(lVar7 + 0x228) == *(long **)(lVar7 + 0x230)) {
          lVar7 = 0;
        }
        else {
          lVar7 = **(long **)(lVar7 + 0x228);
        }
        lVar10 = *(long *)(lVar7 + 600);
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 6;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        uVar14 = 0;
        *(undefined8 *)(lVar10 + 0x50) = 0;
        *(undefined8 *)(lVar10 + 0x48) = 0;
        func_0x00010a3326b8(lVar7 + 0x218,0);
        func_0x00010a332748(lVar7 + 0x219,1);
        func_0x00010a332700(lVar7 + 0x21a,1);
        func_0x00010a332790(lVar7,7);
        func_0x00010a3325d0(lVar7,0);
        *(undefined4 *)(lVar7 + 0x21e) = 0;
        func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x2a8),&PTR_DAT_110c69ea8);
        FUN_10a047898(lVar7 + 0x200,(undefined1 *)((long)register0x00000008 + -0x2a8),
                      (undefined1 *)((long)register0x00000008 + -0x2a8));
        if (*(char *)((long)register0x00000008 + -0x291) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a8));
        }
        *(undefined1 *)(lVar7 + 8) = 1;
        FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x250));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x248))
                  ((undefined1 *)((long)register0x00000008 + -0x248));
        plVar8 = *(long **)((long)register0x00000008 + -600);
        if (plVar8 != (long *)0x0) {
          plVar12 = plVar8 + 1;
          do {
            lVar7 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar7 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        lVar7 = *unaff_x21;
      }
      lVar10 = param_2[-0x40];
      unaff_x21 = param_3 + 4;
      FUN_10a5dfd94(unaff_x21,lVar7);
      plVar8 = param_3 + 4;
      FUN_10a01eacc(plVar8,unaff_x21);
      func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69ec0);
      FUN_10a048040(plVar8[0x2b],(undefined1 *)((long)register0x00000008 + -0x260));
      if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
      }
      func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69ed8);
      if (param_2[9] == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(param_2[9] + 0x268);
      }
      FUN_10a5e17a8(plVar8,(undefined1 *)((long)register0x00000008 + -0x260),uVar9,&UNK_10e4ac8a8);
      if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
      }
      func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x2a8),&PTR_DAT_110c69ef0);
      (**(code **)(*(long *)param_2[0xb] + 0x90))((undefined1 *)((long)register0x00000008 + -0x260))
      ;
      FUN_10a7ec36c(plVar8,(undefined1 *)((long)register0x00000008 + -0x2a8),
                    (undefined1 *)((long)register0x00000008 + -0x260));
      if (*(char *)((long)register0x00000008 + -0x291) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a8));
      }
      func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69f08);
      FUN_10ac2751c(param_2[0xb]);
      *(undefined4 *)((long)register0x00000008 + -0x2a8) = uVar14;
      FUN_10a01671c(plVar8,(undefined1 *)((long)register0x00000008 + -0x260),
                    (undefined1 *)((long)register0x00000008 + -0x2a8));
      if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
      }
      if (*(int *)(*(long *)(lVar10 + 0xa20) + 0x18) < 0x133) {
        func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69f20);
        *(undefined4 *)((long)register0x00000008 + -0x2a8) = 0;
        FUN_10a01671c(plVar8,(undefined1 *)((long)register0x00000008 + -0x260),
                      (undefined1 *)((long)register0x00000008 + -0x2a8));
      }
      else {
        func_0x000107c2b074((undefined1 *)((long)register0x00000008 + -0x260),&PTR_DAT_110c69f20);
        *(undefined4 *)((long)register0x00000008 + -0x2a8) = 0x3f800000;
        FUN_10a01671c(plVar8,(undefined1 *)((long)register0x00000008 + -0x260),
                      (undefined1 *)((long)register0x00000008 + -0x2a8));
      }
      if (*(char *)((long)register0x00000008 + -0x249) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x260));
      }
      bVar4 = *(byte *)(lVar10 + 0x1150);
      unaff_x24 = (long *)(ulong)bVar4;
      unaff_x23 = plVar13;
      (**(code **)(*plVar13 + 0xb0))();
      (**(code **)(*plVar13 + 0xb8))();
      *(undefined8 *)((long)register0x00000008 + -0x28c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x294) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x27c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x284) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x29c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2a4) = 0;
      *(float *)((long)register0x00000008 + -0x2a8) =
           ((float)((ulong)plVar13 & 0xffffffff) * 2.4142134) /
           (float)((ulong)unaff_x23 & 0xffffffff);
      *(undefined4 *)((long)register0x00000008 + -0x294) = 0x401a8279;
      param_1 = 0xbf800000bf80419a;
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0xbf800000bf80419a;
      *(undefined4 *)((long)register0x00000008 + -0x270) = 0xc00020cd;
      if ((bVar4 & 1) != 0) {
        if ((ulong)(param_2[0x10] - param_2[0xf]) < 0x21) goto LAB_10ac8ed24;
        FUN_10abac910(plVar8,param_2[0xf] + 0x20,(undefined1 *)((long)register0x00000008 + -0x2a8));
      }
      if (param_2[0x10] == param_2[0xf]) {
LAB_10ac8ed24:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10ac8ed28);
        (*pcVar11)();
      }
      FUN_10abac910(plVar8,param_2[0xf],(undefined1 *)((long)register0x00000008 + -0x2a8));
      *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0xffffffffffffffff;
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0xffffffffffffffff;
      *(undefined4 *)((long)register0x00000008 + -0x68) = 0x3f800000;
      *(undefined8 *)((long)register0x00000008 + -100) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x5c) = 0;
      lVar10 = param_2[0xd];
      lVar7 = param_2[0xe];
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(long *)((long)register0x00000008 + -0xb8) = lVar10;
      *(long *)((long)register0x00000008 + -0xb0) = lVar7;
      pcVar11 = *(code **)(*param_3 + 0x88);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0xffffffffffffffff;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0xffffffffffffffff;
      (*pcVar11)(param_3,(undefined1 *)((long)register0x00000008 + -0x260));
      uVar2 = *(uint *)(param_2 + -0x15);
      unaff_x22 = (long *)(ulong)uVar2;
      func_0x00010a1bd170((undefined1 *)((long)register0x00000008 + -0x268));
      uVar3 = *(uint *)((long)param_2 + -0xa4);
      plVar13 = (long *)(ulong)uVar3;
      func_0x00010a1bd170((undefined1 *)((long)register0x00000008 + -0x268));
      func_0x00010a1bd170((undefined1 *)((long)register0x00000008 + -0x268));
      func_0x00010a1bd170((undefined1 *)((long)register0x00000008 + -0x268));
      *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
      *(ulong *)((long)register0x00000008 + -0x2e0) = CONCAT44(uVar3,uVar2);
      (**(code **)(*param_3 + 0xc0))(param_3,(undefined1 *)((long)register0x00000008 + -0x2e8));
      lVar7 = 0;
      FUN_10a2421c8();
      uVar9 = *(undefined8 *)(lVar7 + 0x208);
      *(undefined4 *)((long)register0x00000008 + -0x2e8) = 0x3f800000;
      *(undefined8 *)((long)register0x00000008 + -0x2dc) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2e4) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x2d4) = 0x3f800000;
      *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x2c0) = 0x3f800000;
      *(undefined8 *)((long)register0x00000008 + -0x2b4) = 0;
      *(undefined8 *)((long)register0x00000008 + -700) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x2ac) = 0x3f800000;
      (**(code **)(*param_3 + 0x58))
                (param_3,uVar9,unaff_x21,(undefined1 *)((long)register0x00000008 + -0x2e8),3);
      (**(code **)(*param_3 + 0x90))(param_3,3,0,3);
      plVar8 = *(long **)((long)register0x00000008 + -0x88);
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 1;
        do {
          lVar7 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)((long)register0x00000008 + -0xb0);
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 1;
        do {
          lVar7 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)((long)register0x00000008 + -0x260);
      unaff_x19 = (long *)((long)register0x00000008 + -600);
      func_0x00010a048e34();
    }
LAB_10ac8ecf0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    param_3 = plVar8;
    if (*(char *)((long)register0x00000008 + -0x291) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x2a8));
      param_3 = plVar8;
    }
    func_0x00010a015cb4((undefined1 *)((long)register0x00000008 + -0x260));
    unaff_x30 = FUN_10ac8edc8;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2f0);
    unaff_x20 = plVar13;
  } while( true );
}



/* Entry: 10ac8edd0; end: 10ac8ee8f;  */

void FUN_10ac8edd0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x318);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c68d28,0);
  if ((int)param_2 != 0) {
    lVar2 = *(long *)(lVar1 + 0x18);
    func_0x000107c2b054(auStack_48,&UNK_10f65c9d3);
    if (lVar2 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),auStack_48);
    }
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  *(char *)(lVar1 + 0x20) = (char)param_2;
  return;
}



/* Entry: 10ac8ee90; end: 10ac8ef53;  */

undefined1  [16] FUN_10ac8ee90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f6a08cb;
  return auVar1;
}



/* Entry: 10ac8ef54; end: 10ac8efbb;  */

bool FUN_10ac8ef54(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf6628ac;
    _memcmp(&UNK_10f6628ac,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac8efbc; end: 10ac8efc3;  */

bool FUN_10ac8efbc(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf6628ac;
    _memcmp(&UNK_10f6628ac,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac8efc4; end: 10ac8f30b;  */

void FUN_10ac8efc4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6a08cb,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c699a0;
  pppuVar2 = (undefined8 ***)&UNK_10f69fe75;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c699a0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0641,FUN_10ac95ec8,FUN_10ac95f90);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f631b41,FUN_10ac96174,FUN_10ac9623c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f568846,FUN_10ac96350,FUN_10ac9640c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a064a,FUN_10ac96510,FUN_10ac965d8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0654,FUN_10ac966f4,FUN_10ac967ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a0661,FUN_10ac9686c,FUN_10ac96924);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6a08cb,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac8f2f0);
  (*pcVar6)();
}



/* Entry: 10ac8f30c; end: 10ac8f74f;  */

void FUN_10ac8f30c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6628ac,0x22);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c69e38;
  pppuVar2 = (undefined8 ***)&UNK_10f69fe75;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c69e38;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c67f30;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac8f730;
    FUN_10a054dac(param_1,&DAT_10f3f415b,FUN_10ac969e4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f691992,FUN_10ac96b10,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69eff2,FUN_10ac96c34,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a067a,FUN_10ac96cf0,FUN_10ac96da8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a068a,FUN_10ac96ecc,FUN_10ac96f88);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a06a3,FUN_10ac9706c,FUN_10ac97128);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bbb3,FUN_10ac97200,FUN_10ac972c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a06ae,FUN_10ac97390,FUN_10ac97450);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a06cc,FUN_10ac97528,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6a06e6,FUN_10ac9765c,FUN_10ac97714);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6628ac,0x22);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac8f730:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac8f734);
  (*pcVar6)();
}



/* Entry: 10ac8f750; end: 10ac8f85b;  */

void FUN_10ac8f750(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6a06ff;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f69fe75;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac8f85c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a0718;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f69fe75;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10ac8f8b4(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a071d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f69fe75;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10ac8f8b4(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ac8f85c; end: 10ac8f8b3;  */

ulong FUN_10ac8f85c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10ac8f8b4; end: 10ac8f90b;  */

ulong FUN_10ac8f8b4(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ac977d4(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ac8f90c; end: 10ac8f9b7;  */

void FUN_10ac8f90c(byte *param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  long lVar4;
  ushort uVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  bVar2 = *param_1;
  if ((bVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    *(bool *)(lVar4 + 0x19) = *(int *)(param_1 + 4) == 1;
    if ((bVar2 >> 1 & 1) == 0) {
      uVar5 = (ushort)param_1[8];
      uVar7 = (ushort)param_1[8];
    }
    else {
      uVar5 = 0;
      uVar7 = 1;
    }
    *(ushort *)(lVar4 + 0x34) = uVar5 | uVar7 << 8;
    lVar4 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(param_2 + 0x4d8) & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar4 + 0x20);
      uVar8 = *(undefined8 *)(lVar4 + 0x18);
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      uVar1 = *(undefined4 *)(lVar4 + 0x30);
      uVar3 = *(undefined2 *)(lVar4 + 0x34);
      *(undefined1 *)(param_2 + 0x4d6) = *(undefined1 *)(lVar4 + 0x36);
      *(undefined2 *)(param_2 + 0x4d4) = uVar3;
      *(undefined4 *)(param_2 + 0x4d0) = uVar1;
      *(undefined8 *)(param_2 + 0x4c8) = uVar6;
      *(undefined8 *)(param_2 + 0x4c0) = uVar9;
      *(undefined8 *)(param_2 + 0x4b8) = uVar8;
      *(undefined1 *)(param_2 + 0x4d8) = 1;
    }
    else {
      func_0x00010a4bfba4((undefined8 *)(param_2 + 0x4b8),lVar4 + 0x18);
    }
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x36) = 0;
  }
  return;
}



/* Entry: 10ac8f9b8; end: 10ac8ff4f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac8fee4) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10ac8f9b8(long *******param_1,long ******param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long *******ppppppplVar3;
  long ******pppppplVar4;
  long *******ppppppplVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  long lVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char cStack_169;
  undefined8 uStack_168;
  long ******pppppplStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *******ppppppplStack_110;
  long *plStack_108;
  long *******ppppppplStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  long ******pppppplStack_e8;
  long ******pppppplStack_e0;
  long ******pppppplStack_d8;
  undefined4 uStack_d0;
  long ******pppppplStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  long ******pppppplStack_b0;
  long ******pppppplStack_a8;
  long ******pppppplStack_a0;
  undefined4 uStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x36] = (long ******)0x0;
  param_1[0x37] = (long ******)0x0;
  param_1[0x35] = (long ******)&PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x38) = 0x100;
  ppppppplVar3 = param_1;
  FUN_10ac63ebc(param_1,&PTR_PTR_110c68f88,param_2);
  FUN_10a0040d0(ppppppplVar3 + 0x1d,&PTR_PTR_110c68fb8);
  *param_1 = (long ******)&PTR_FUN_110c68d60;
  param_1[2] = (long ******)&PTR_FUN_110c68e40;
  param_1[5] = (long ******)&PTR_FUN_110c68e70;
  param_1[0x35] = (long ******)&PTR_FUN_110c68f48;
  param_1[0x1d] = (long ******)&PTR_FUN_110c68ed0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  pppppplVar4 = (long ******)0x50;
  __Znwm();
  pppppplVar4[1] = (long *****)0x0;
  pppppplVar4[2] = (long *****)0x0;
  *pppppplVar4 = (long *****)&PTR_FUN_110c3d550;
  pppppplVar4[7] = (long *****)0x0;
  pppppplVar4[6] = (long *****)0x0;
  pppppplVar4[9] = (long *****)0x0;
  pppppplVar4[8] = (long *****)0x0;
  pppppplVar4[3] = (long *****)&PTR_DAT_110c69958;
  pppppplVar4[5] = (long *****)0x0;
  pppppplVar4[4] = (long *****)0x0;
  *(undefined8 *)((long)pppppplVar4 + 0x3c) = 0x3f4000003cf5c28f;
  *(undefined8 *)((long)pppppplVar4 + 0x34) = 0x409000003e800000;
  *(undefined4 *)(pppppplVar4 + 9) = 0x40e00000;
  param_1[0x24] = pppppplVar4 + 3;
  param_1[0x25] = pppppplVar4;
  param_1[0x26] = (long ******)0x0;
  param_1[0x27] = (long ******)0x0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = (long ******)0x0;
  param_1[0x29] = (long ******)0x0;
  param_1[0x2c] = (long ******)0x0;
  param_1[0x2b] = (long ******)0x0;
  param_1[0x2e] = (long ******)0x0;
  param_1[0x2d] = (long ******)0x0;
  param_1[0x30] = (long ******)0x0;
  param_1[0x2f] = (long ******)0x0;
  param_1[0x32] = (long ******)0x0;
  param_1[0x31] = (long ******)0x0;
  param_1[0x34] = (long ******)0x0;
  param_1[0x33] = (long ******)0x0;
  if (param_3 != 0) {
    if (((ulong)param_1[0x38] & 1) == 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      param_1[0x37] = param_2;
      if (param_2 != (long ******)0x0) {
        param_1[0x36] = *(long *******)((long)param_2[0x10a] + 0x2c);
      }
    }
    FUN_10a5ae998(param_1[0x20],&PTR_DAT_110b99f08,param_2,param_1 + 0x1d);
  }
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (*(code *)(*param_1)[0x14])(param_1);
  }
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (*(code *)(*param_1)[0x14])(param_1);
  }
  ppppppplVar3 = &pppppplStack_160;
  FUN_10a0d0194(&lStack_118);
  FUN_10ab6e728();
  if (*(char *)((long)ppppppplVar3 + 0x17) < '\0') {
    ppppppplVar8 = (long *******)&ppppppplStack_100;
    func_0x000107c3192c(ppppppplVar8,*ppppppplVar3,ppppppplVar3[1]);
  }
  else {
    pppppplStack_f8 = ppppppplVar3[1];
    ppppppplStack_100 = (long *******)*ppppppplVar3;
    pppppplStack_f0 = ppppppplVar3[2];
    ppppppplVar8 = ppppppplVar3;
  }
  pppppplStack_e8 = ppppppplVar3[3];
  uStack_d0 = *(undefined4 *)(ppppppplVar3 + 6);
  pppppplStack_d8 = ppppppplVar3[5];
  pppppplStack_e0 = ppppppplVar3[4];
  FUN_10ab6e9d8();
  if (*(char *)((long)ppppppplVar8 + 0x17) < '\0') {
    func_0x000107c3192c(&pppppplStack_c8,*ppppppplVar8,ppppppplVar8[1]);
  }
  else {
    pppppplStack_b8 = ppppppplVar8[2];
    pppppplStack_c0 = ppppppplVar8[1];
    pppppplStack_c8 = *ppppppplVar8;
  }
  pppppplStack_b0 = ppppppplVar8[3];
  pppppplStack_a0 = ppppppplVar8[5];
  pppppplStack_a8 = ppppppplVar8[4];
  uStack_98 = *(undefined4 *)(ppppppplVar8 + 6);
  func_0x000107c2b074(&uStack_180,&PTR_DAT_110c69f38);
  if (cStack_169 < '\0') {
    func_0x000107c3192c(auStack_90,uStack_180,uStack_178);
  }
  else {
    auStack_90[1] = uStack_178;
    auStack_90[0] = uStack_180;
  }
  uStack_78 = uStack_168;
  uStack_70 = 0x200000000;
  uStack_68 = 4;
  uStack_64 = 0;
  uStack_60 = 0;
  FUN_10ab6f520(&pppppplStack_160,&ppppppplStack_100,3);
  lVar7 = lStack_118;
  *(undefined4 *)(lStack_118 + 0xf0) = pppppplStack_160._0_4_;
  if ((long *******)(lStack_118 + 0xf0) != &pppppplStack_160) {
    FUN_10a1903c4(lStack_118 + 0xf8,lStack_158,lStack_150,
                  (lStack_150 - lStack_158 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar7 + 0x118) = uStack_138;
  *(undefined8 *)(lVar7 + 0x110) = uStack_140;
  *(undefined8 *)(lVar7 + 0x128) = uStack_128;
  *(undefined8 *)(lVar7 + 0x120) = uStack_130;
  *(undefined8 *)(lVar7 + 0x130) = uStack_120;
  plStack_108 = &lStack_158;
  func_0x00010a190844(&plStack_108);
  lVar7 = 0;
  do {
    if ((&cStack_79)[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_90 + lVar7));
    }
    lVar7 = lVar7 + -0x38;
  } while (lVar7 != -0xa8);
  if (cStack_169 < '\0') {
    __ZdlPv(uStack_180);
  }
  *(undefined8 *)(lStack_118 + 0xe8) = 2;
  lVar7 = *(long *)(lStack_118 + 0x10);
  uVar6 = *(long *)(lStack_118 + 0x18) - lVar7;
  if (uVar6 < 280000) {
    func_0x000107c27d58((long *)(lStack_118 + 0x10),280000 - uVar6);
  }
  else if (uVar6 != 280000) {
    *(long *)(lStack_118 + 0x18) = lVar7 + 280000;
  }
  lVar7 = *(long *)(lStack_118 + 0x28);
  uVar6 = *(long *)(lStack_118 + 0x30) - lVar7;
  if (uVar6 >> 6 < 0x753) {
    func_0x000107c27d58((long *)(lStack_118 + 0x28),120000 - uVar6);
  }
  else if (uVar6 != 120000) {
    *(long *)(lStack_118 + 0x30) = lVar7 + 120000;
  }
  ppppppplVar3 = param_1;
  FUN_10ac645fc(param_1,&lStack_118);
  if (ppppppplStack_110 != (long *******)0x0) {
    ppppppplVar8 = ppppppplStack_110 + 1;
    do {
      pppppplVar4 = *ppppppplVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar8,0x10);
      if (bVar2) {
        *ppppppplVar8 = (long ******)((long)pppppplVar4 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (pppppplVar4 == (long ******)0x0) {
      (*(code *)(*ppppppplStack_110)[2])(ppppppplStack_110);
      ppppppplVar3 = ppppppplStack_110;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_169 < '\0') {
      __ZdlPv(uStack_180);
    }
    if (&ppppppplStack_100 != (long ********)ppppppplStack_110) {
      do {
        ppppppplStack_110 = ppppppplStack_110 + -7;
      } while ((long ********)ppppppplStack_110 != &ppppppplStack_100);
    }
    FUN_10a0cfe2c(&lStack_118);
    if (*(char *)((long)param_1 + 0x187) < '\0') {
      __ZdlPv(param_1[0x2e]);
    }
    func_0x00010a0524e4(param_1 + 0x2c);
    ppppppplStack_100 = param_1 + 0x29;
    FUN_10a26e8c0(&ppppppplStack_100);
    FUN_10aa3dd44(param_1 + 0x24);
    FUN_10a004174(param_1 + 0x1d,&PTR_PTR_110c68fb8);
    FUN_10a7cca1c(param_1,&PTR_PTR_110c68f88);
    __Unwind_Resume();
    ppppppplVar8 = ppppppplVar3;
    while( true ) {
      if (ppppppplVar8 == (long *******)0x0) {
        (*(code *)(*ppppppplVar3)[0x12])();
        pppppplVar4 = ppppppplVar3[1];
        pppppplVar9 = *ppppppplVar3;
        extraout_x8[1] = ppppppplVar3[1];
        *extraout_x8 = pppppplVar9;
        if (pppppplVar4 != (long ******)0x0) {
          pppppplVar4 = pppppplVar4 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppplVar4,0x10);
            if (bVar2) {
              *pppppplVar4 = (long *****)((long)*pppppplVar4 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        return ppppppplVar3;
      }
      ppppppplVar5 = ppppppplVar8;
      (*(code *)(*ppppppplVar8)[0x10])();
      if ((int)ppppppplVar5 != 2) break;
      ppppppplVar8 = (long *******)ppppppplVar8[0x13];
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    return ppppppplVar5;
  }
  return param_1;
}



/* Entry: 10ac8ff50; end: 10ac8ffdb;  */

void FUN_10ac8ff50(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = param_2;
  while( true ) {
    if (plVar5 == (long *)0x0) {
      (**(code **)(*param_2 + 0x90))();
      lVar4 = param_2[1];
      lVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar6;
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return;
    }
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar3 != 2) break;
    plVar5 = (long *)plVar5[0x13];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10ac8ffdc; end: 10ac90c13;  */

/* WARNING: Removing unreachable block (ram,0x00010ac903ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac90390) */
/* WARNING: Removing unreachable block (ram,0x00010ac9035c) */
/* WARNING: Removing unreachable block (ram,0x00010ac90590) */

void FUN_10ac8ffdc(ulong *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  byte bVar5;
  ulong uVar6;
  ulong *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  byte bVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  long *plVar22;
  int iVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long *plStack_1d0;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long lStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  FUN_10ac90c14();
  uVar16 = param_1[0x29];
  uVar6 = param_1[0x2a];
  while (uVar6 != uVar16) {
    uVar6 = uVar6 - 0x10;
    func_0x00010a26e868();
  }
  param_1[0x2a] = uVar16;
  lVar10 = *(long *)(param_2 + 0x148);
  if (lVar10 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    param_1[0x34] =
         (ulong)(*(double *)(*(long *)(param_1[0x12] + 0x850) + 0x10) + (double)param_1[0x34]);
    goto LAB_10ac90aa8;
  }
  puVar7 = param_1 + 0x29;
  if (puVar7 != (ulong *)(lVar10 + 8)) {
    FUN_10aa3dd9c(puVar7,*(long *)(lVar10 + 8),*(long *)(lVar10 + 0x10),
                  *(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8) >> 4);
    uVar16 = param_1[0x2a];
  }
  plVar18 = (long *)*puVar7;
  lVar10 = uVar16 - (long)plVar18;
  if (lVar10 == 0) {
    plVar8 = (long *)0x0;
    plStack_1d0 = (long *)0x0;
    uVar16 = 0;
    plVar22 = (long *)0x0;
  }
  else {
    uVar16 = lVar10 >> 4;
    if (uVar16 >> 0x3d != 0) {
      FUN_10ac9153c();
LAB_10ac90adc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac90ae0);
      (*pcVar4)();
    }
    plVar22 = (long *)(lVar10 >> 1);
    plStack_1d0 = plVar22;
    __Znwm();
    _bzero();
    uVar6 = 0;
    plVar8 = (long *)((long)plStack_1d0 + (long)plVar22);
    do {
      if (uVar16 == uVar6) goto LAB_10ac90adc;
      plStack_1d0[uVar6] = *plVar18;
      uVar6 = uVar6 + 1;
      plVar18 = plVar18 + 2;
    } while (uVar16 != uVar6);
  }
  puVar9 = (undefined8 *)0x1;
  FUN_10a061940(param_1);
  if (puVar9 == (undefined8 *)0x0) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar18 = (long *)*puVar9;
  }
  uVar6 = param_1[0x12];
  puVar7 = param_1;
  (**(code **)(*param_1 + 0x90))();
  if ((plVar18 == (long *)0x0) || (uVar11 = *puVar7, uVar11 == 0 || plVar8 == plStack_1d0)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (uVar6 != 0) {
      param_1[0x34] = (ulong)(*(double *)(*(long *)(uVar6 + 0x850) + 0x10) + (double)param_1[0x34]);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (uVar6 != 0) {
      param_1[0x33] = (ulong)(*(double *)(*(long *)(uVar6 + 0x850) + 0x10) + (double)param_1[0x33]);
    }
    iVar14 = 0;
    iVar23 = 0;
    *(undefined8 *)(uVar11 + 0xd8) = *(undefined8 *)(uVar11 + 0xd0);
    bVar5 = *(byte *)(param_1[0x24] + 0x18);
    plVar8 = plStack_1d0;
    do {
      lStack_e0 = 0;
      lStack_d8 = 0;
      uStack_d0 = 0;
      uStack_90 = 0x3f80000000000000;
      uStack_98 = 0;
      uStack_a0 = 0x3f800000;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0x3f80000000000000;
      uStack_c0 = 0;
      uStack_c8 = 0x3f800000;
      uStack_e8 = CONCAT44((int)(uStack_e8 >> 0x20),iVar14) & 0xffffff00ffffffff;
      uStack_f0 = CONCAT44((int)((ulong)(*(long *)(*plVar8 + 0x48) - *(long *)(*plVar8 + 0x40)) >> 2
                                ),iVar23 << 2);
      FUN_10a701cb0((undefined8 *)(uVar11 + 0xd0),&uStack_f0);
      lVar10 = *plVar8;
      lVar12 = *(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28) >> 2;
      if ((bVar5 & 1) == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = (*(long *)(lVar10 + 0x78) - *(long *)(lVar10 + 0x70)) * -0x5555555555555555 +
                lVar12 * 0x5555555555555555 == 0;
      }
      iVar14 = iVar14 + (int)lVar12 * -0x55555555;
      iVar23 = iVar23 + (int)((ulong)(*(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40)) >> 2);
      plVar8 = plVar8 + 1;
      plVar22 = plVar22 + -1;
    } while (plVar22 != (long *)0x0);
    FUN_10ab4a154(uVar11,iVar14);
    FUN_10ab4cb54(uVar11,iVar23);
    if ((bool)bVar5 == false) {
LAB_10ac9039c:
      uVar24 = 1;
    }
    else {
      func_0x000107c2b074(&uStack_f0,&PTR_DAT_110c69f38);
      lVar10 = *(long *)(uVar11 + 0xf8);
      lVar12 = *(long *)(uVar11 + 0x100);
      if (lVar10 == lVar12) {
LAB_10ac902c8:
        bVar15 = 0;
        if ((lVar10 != lVar12) && (lVar10 != 0)) {
          func_0x000107c2b074(&uStack_110,&PTR_DAT_110c69f38);
          lVar10 = *(long *)(uVar11 + 0xf8);
          lVar12 = lVar10;
          for (; (lVar10 != *(long *)(uVar11 + 0x100) &&
                 (lVar12 = lVar10, *(long *)(lVar10 + 0x18) != lStack_f8)); lVar10 = lVar10 + 0x38)
          {
            lVar12 = *(long *)(uVar11 + 0x100);
          }
          bVar15 = *(byte *)(lVar12 + 0x2c) ^ 1;
          if (uStack_100 < 0) {
            __ZdlPv(uStack_110);
          }
        }
      }
      else {
        do {
          if (*(long *)(lVar10 + 0x18) == lStack_d8) goto LAB_10ac902c8;
          lVar10 = lVar10 + 0x38;
        } while (lVar10 != lVar12);
        bVar15 = 0;
      }
      if ((bVar15 & 1) == 0) goto LAB_10ac9039c;
      func_0x000107c2b074(&uStack_f0,&PTR_DAT_110c69f38);
      FUN_10ab6fc0c(uVar11 + 0xf0,&uStack_f0);
      func_0x000107c2b074(&uStack_110,&PTR_DAT_110c69f38);
      if (uStack_100 < 0) {
        func_0x000107c3192c(&uStack_f0,uStack_110,uStack_108);
      }
      else {
        uStack_e8 = uStack_108;
        uStack_f0 = uStack_110;
        lStack_e0 = uStack_100;
      }
      lStack_d8 = lStack_f8;
      uStack_d0 = 0x200000000;
      uStack_c8 = CONCAT35(uStack_c8._5_3_,0x100000004);
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      FUN_10ab6f9a8(uVar11 + 0xf0,&uStack_f0);
      if (uStack_100._7_1_ < '\0') {
        __ZdlPv(uStack_110);
      }
      uVar24 = 9;
    }
    FUN_10ab6e728();
    lVar10 = *(long *)(uVar11 + 0xf8);
    lVar12 = lVar10;
    for (; (lVar10 != *(long *)(uVar11 + 0x100) &&
           (lVar12 = lVar10, *(long *)(lVar10 + 0x18) != lRam00000001138356d8));
        lVar10 = lVar10 + 0x38) {
      lVar12 = *(long *)(uVar11 + 0x100);
    }
    FUN_10ab4c544(&plStack_118,uVar11,lVar12);
    FUN_10ab6e9d8();
    lVar10 = *(long *)(uVar11 + 0xf8);
    lVar12 = lVar10;
    for (; (lVar10 != *(long *)(uVar11 + 0x100) &&
           (lVar12 = lVar10, *(long *)(lVar10 + 0x18) != lRam0000000113835758));
        lVar10 = lVar10 + 0x38) {
      lVar12 = *(long *)(uVar11 + 0x100);
    }
    FUN_10ab4c544(&plStack_120,uVar11,lVar12);
    func_0x000107c2b074(&uStack_f0,&PTR_DAT_110c69f38);
    lVar10 = *(long *)(uVar11 + 0xf8);
    lVar12 = lVar10;
    for (; (lVar10 != *(long *)(uVar11 + 0x100) &&
           (lVar12 = lVar10, *(long *)(lVar10 + 0x18) != lStack_d8)); lVar10 = lVar10 + 0x38) {
      lVar12 = *(long *)(uVar11 + 0x100);
    }
    uVar2 = *(int *)(lVar12 + 0x24) - 1;
    if (uVar2 < 7) {
      iVar14 = *(int *)(&UNK_10e50ad54 + (ulong)uVar2 * 4);
    }
    else {
      iVar14 = 0;
    }
    if (*(int *)(lVar12 + 0x28) * iVar14 == 4) {
      if (uVar2 < 7) {
        iVar14 = *(int *)(&UNK_10e50ad54 + (ulong)uVar2 * 4);
      }
      else {
        iVar14 = 0;
      }
      if (iVar14 * *(int *)(lVar12 + 0x28) == 4) {
        lVar10 = *(long *)(uVar11 + 0x10) + (ulong)*(uint *)(lVar12 + 0x30);
        uVar6 = (ulong)*(uint *)(uVar11 + 0xf0);
        if (*(uint *)(uVar11 + 0xf0) == 0) goto LAB_10ac9055c;
        uVar20 = 0;
        if (uVar6 != 0) {
          uVar20 = (ulong)(*(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10)) / uVar6;
        }
        uVar20 = uVar20 & 0xffffffff;
      }
      else {
        lVar10 = 0;
LAB_10ac9055c:
        uVar20 = 0;
        uVar6 = 0;
      }
      plVar8 = (long *)0x28;
      __Znwm();
      plVar8[2] = uVar20;
      plVar8[3] = uVar6;
      plVar8[4] = 0;
      *plVar8 = (long)&PTR_FUN_110c6a200;
      plVar8[1] = lVar10;
    }
    else {
      plVar8 = (long *)0x0;
    }
    plVar3 = plStack_118;
    plVar22 = plStack_120;
    uStack_108 = 0xff7fffff00000000;
    uStack_110 = 0;
    uStack_100 = -0x80000000800001;
    lVar10 = *(long *)(uVar11 + 0xd0);
    if (*(long *)(uVar11 + 0xd8) == lVar10) {
      uStack_108._0_4_ = 0.0;
      uStack_108._4_4_ = -3.4028235e+38;
      uStack_110._4_4_ = 0.0;
      uStack_110._0_4_ = 0.0;
      uStack_100._4_4_ = uStack_108._4_4_;
      uStack_100._0_4_ = uStack_108._4_4_;
    }
    else {
      uVar6 = 0;
      do {
        puVar21 = (uint *)(lVar10 + uVar6 * 0x68);
        *(undefined1 *)(puVar21 + 3) = 1;
        if (uVar6 == uVar16) goto LAB_10ac90adc;
        lVar12 = plStack_1d0[uVar6];
        fStack_12c = (float)*(undefined8 *)(lVar12 + 0xac);
        fStack_128 = (float)((ulong)*(undefined8 *)(lVar12 + 0xac) >> 0x20);
        fStack_138 = ((float)*(undefined8 *)(lVar12 + 0xa0) + fStack_12c) * 0.5;
        fStack_134 = ((float)((ulong)*(undefined8 *)(lVar12 + 0xa0) >> 0x20) + fStack_128) * 0.5;
        fStack_130 = (*(float *)(lVar12 + 0xa8) + *(float *)(lVar12 + 0xb4)) * 0.5;
        fStack_12c = fStack_12c - fStack_138;
        fStack_128 = fStack_128 - fStack_134;
        fStack_124 = *(float *)(lVar12 + 0xb4) - fStack_130;
        uStack_148 = *(undefined4 *)(lVar12 + 0x20);
        uStack_150 = CONCAT44(uStack_148,uStack_148);
        FUN_10a45f7b0(&uStack_f0,lVar12 + 4,lVar12 + 0x10,&uStack_150);
        *(long *)(puVar21 + 0x10) = lStack_d8;
        *(long *)(puVar21 + 0xe) = lStack_e0;
        *(ulong *)(puVar21 + 0xc) = uStack_e8;
        *(undefined8 *)(puVar21 + 10) = uStack_f0;
        *(undefined8 *)(puVar21 + 0x18) = uStack_b8;
        *(ulong *)(puVar21 + 0x16) = uStack_c0;
        *(undefined8 *)(puVar21 + 0x14) = uStack_c8;
        *(undefined8 *)(puVar21 + 0x12) = uStack_d0;
        *(ulong *)(puVar21 + 6) = CONCAT44(fStack_12c,fStack_130);
        *(ulong *)(puVar21 + 4) = CONCAT44(fStack_134,fStack_138);
        *(ulong *)(puVar21 + 8) = CONCAT44(fStack_124,fStack_128);
        FUN_10a005448(&uStack_168,&fStack_138,&uStack_f0);
        FUN_10a01e958(&uStack_150,&uStack_168,&uStack_110);
        uStack_108 = CONCAT44(uStack_144,uStack_148);
        uStack_110 = uStack_150;
        uStack_100 = lStack_140;
        lVar10 = *(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28);
        if (lVar10 != 0) {
          lVar19 = 0;
          uVar20 = 0;
          do {
            uVar13 = (*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28) >> 2) *
                     -0x5555555555555555;
            if (uVar13 < uVar20 || uVar13 - uVar20 == 0) goto LAB_10ac90adc;
            puVar9 = (undefined8 *)(*(long *)(lVar12 + 0x28) + lVar19);
            uStack_150 = *puVar9;
            uStack_148 = *(undefined4 *)(puVar9 + 1);
            (**(code **)(*plVar3 + 0x18))(plVar3,(int)uVar20 + puVar21[2],&uStack_150);
            if (((byte)param_1[0x22] >> 2 & 1) != 0) {
              uVar13 = (*(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58) >> 2) *
                       -0x5555555555555555;
              if (uVar13 < uVar20 || uVar13 - uVar20 == 0) goto LAB_10ac90adc;
              puVar9 = (undefined8 *)(*(long *)(lVar12 + 0x58) + lVar19);
              uStack_168 = *puVar9;
              uStack_160 = *(undefined4 *)(puVar9 + 1);
              (**(code **)(*plVar22 + 0x18))(plVar22,(int)uVar20 + puVar21[2],&uStack_168);
            }
            uVar20 = uVar20 + 1;
            lVar19 = lVar19 + 0xc;
          } while ((lVar10 >> 2) * -0x5555555555555555 - uVar20 != 0);
        }
        if ((ulong)(*(long *)(uVar11 + 0x30) - *(long *)(uVar11 + 0x28)) <= (ulong)*puVar21)
        goto LAB_10ac90adc;
        lVar10 = *(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40);
        if (lVar10 == 0) goto LAB_10ac90adc;
        _memcpy(*(long *)(uVar11 + 0x28) + (ulong)*puVar21,*(long *)(lVar12 + 0x40),lVar10);
        if ((bool)bVar5 == false) {
LAB_10ac9085c:
          uVar20 = *(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40);
          if ((8 < uVar20) &&
             ((ulong)((long)uVar20 >> 2) / 3 == *(long *)(lVar12 + 0x90) - *(long *)(lVar12 + 0x88))
             ) {
            uVar13 = 0;
            uVar20 = 0;
            do {
              if ((ulong)(*(long *)(lVar12 + 0x90) - *(long *)(lVar12 + 0x88)) <= uVar20)
              goto LAB_10ac90adc;
              bVar15 = *(byte *)(*(long *)(lVar12 + 0x88) + uVar20);
              lVar10 = 3;
              uVar17 = uVar13;
              do {
                if ((ulong)(*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 2) <= uVar17)
                goto LAB_10ac90adc;
                uStack_150 = CONCAT44(uStack_150._4_4_,(uint)bVar15);
                (**(code **)(*plVar8 + 0x18))
                          (plVar8,puVar21[2] + *(int *)(*(long *)(lVar12 + 0x40) + uVar17 * 4),
                           &uStack_150);
                uVar17 = uVar17 + 1;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
              uVar20 = uVar20 + 1;
              uVar13 = uVar13 + 3;
            } while (uVar20 < (ulong)(*(long *)(lVar12 + 0x48) - *(long *)(lVar12 + 0x40) >> 2) / 3)
            ;
          }
        }
        else {
          lVar10 = *(long *)(lVar12 + 0x70);
          if ((*(long *)(lVar12 + 0x78) - lVar10) * -0x5555555555555555 +
              (*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x28) >> 2) * 0x5555555555555555 != 0)
          goto LAB_10ac9085c;
          if (*(long *)(lVar12 + 0x78) != lVar10) {
            lVar19 = 0;
            uVar20 = 0;
            do {
              pbVar1 = (byte *)(lVar10 + lVar19);
              uStack_150 = CONCAT44((int)((ulong)uStack_150 >> 0x20),
                                    *pbVar1 | 0xff000000 | (uint)pbVar1[1] << 8 |
                                    (uint)pbVar1[2] << 0x10);
              (**(code **)(*plVar8 + 0x18))(plVar8,uVar20 + puVar21[2],&uStack_150);
              uVar20 = uVar20 + 1;
              lVar10 = *(long *)(lVar12 + 0x70);
              lVar19 = lVar19 + 3;
            } while (uVar20 < (ulong)((*(long *)(lVar12 + 0x78) - lVar10) * -0x5555555555555555));
          }
        }
        uVar6 = uVar6 + 1;
        lVar10 = *(long *)(uVar11 + 0xd0);
        uVar20 = (*(long *)(uVar11 + 0xd8) - lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5;
      } while (uVar6 <= uVar20 && uVar20 - uVar6 != 0);
    }
    *(float *)(uVar11 + 0x144) = (float)uStack_110 - uStack_108._4_4_;
    *(float *)(uVar11 + 0x148) = uStack_110._4_4_ - (float)uStack_100;
    *(float *)(uVar11 + 0x14c) = (float)uStack_108 - uStack_100._4_4_;
    *(float *)(uVar11 + 0x138) = uStack_108._4_4_ + (float)uStack_110;
    *(float *)(uVar11 + 0x13c) = (float)uStack_100 + uStack_110._4_4_;
    *(float *)(uVar11 + 0x140) = uStack_100._4_4_ + (float)uStack_108;
    uVar2 = *(uint *)(uVar11 + 0xf0);
    if (uVar2 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      if ((ulong)uVar2 != 0) {
        uVar16 = (ulong)(*(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10)) / (ulong)uVar2;
      }
      uVar16 = uVar16 & 0xffffffff;
    }
    param_1[0x26] = uVar16;
    uVar16 = uVar11;
    FUN_10ab4a5b4();
    param_1[0x27] = (uVar16 & 0xffffffff) / 3;
    fVar25 = *(float *)(uVar11 + 0x138) - *(float *)(uVar11 + 0x144);
    fVar26 = *(float *)(uVar11 + 0x13c) - *(float *)(uVar11 + 0x148);
    fVar27 = *(float *)(uVar11 + 0x140) - *(float *)(uVar11 + 0x14c);
    param_1[0x31] = (ulong)((double)(fVar25 * fVar26 * fVar27) * 1e-06);
    param_1[0x32] = (ulong)(double)SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar27 * fVar27);
    (**(code **)(*plVar18 + 0x80))(plVar18,uVar11,uVar24,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    if (plStack_120 != (long *)0x0) {
      (**(code **)(*plStack_120 + 8))();
    }
    if (plStack_118 != (long *)0x0) {
      (**(code **)(*plStack_118 + 8))();
    }
  }
  if (plStack_1d0 != (long *)0x0) {
    __ZdlPv();
  }
LAB_10ac90aa8:
  FUN_10ac90c94(param_1,*(undefined4 *)(param_2 + 0x198));
  return;
}



/* Entry: 10ac90c14; end: 10ac90c8b;  */

void FUN_10ac90c14(long param_1)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x187) < '\0') {
    if (*(long *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x187) != '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x160);
  if ((lVar1 != 0) && (func_0x00010aae9fd8(), lVar1 != 0)) {
    FUN_10a08d2e0(&uStack_38,lVar1 + 0x10);
    if (*(char *)(param_1 + 0x187) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x170));
    }
    *(undefined8 *)(param_1 + 0x178) = uStack_30;
    *(undefined8 *)(param_1 + 0x170) = uStack_38;
    *(undefined8 *)(param_1 + 0x180) = uStack_28;
  }
  return;
}



/* Entry: 10ac90c8c; end: 10ac90c93;  */

/* WARNING: Removing unreachable block (ram,0x00010ac903ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac90390) */
/* WARNING: Removing unreachable block (ram,0x00010ac9035c) */
/* WARNING: Removing unreachable block (ram,0x00010ac90590) */

void FUN_10ac90c8c(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  byte bVar5;
  long lVar6;
  ulong *puVar7;
  long *plVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  long *plVar22;
  int iVar23;
  ulong uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long *plStack_1d0;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long lStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  puVar9 = (ulong *)(param_1 + -0xe8);
  FUN_10ac90c14();
  lVar15 = *(long *)(param_1 + 0x60);
  lVar6 = *(long *)(param_1 + 0x68);
  while (lVar6 != lVar15) {
    lVar6 = lVar6 + -0x10;
    func_0x00010a26e868();
  }
  *(long *)(param_1 + 0x68) = lVar15;
  lVar6 = *(long *)(param_2 + 0x148);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(double *)(param_1 + 0xb8) =
         *(double *)(*(long *)(*(long *)(param_1 + -0x58) + 0x850) + 0x10) +
         *(double *)(param_1 + 0xb8);
    goto LAB_10ac90aa8;
  }
  puVar10 = (undefined8 *)(param_1 + 0x60);
  if (puVar10 != (undefined8 *)(lVar6 + 8)) {
    FUN_10aa3dd9c(puVar10,*(long *)(lVar6 + 8),*(long *)(lVar6 + 0x10),
                  *(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8) >> 4);
    lVar15 = *(long *)(param_1 + 0x68);
  }
  plVar17 = (long *)*puVar10;
  lVar15 = lVar15 - (long)plVar17;
  if (lVar15 == 0) {
    plVar8 = (long *)0x0;
    plStack_1d0 = (long *)0x0;
    uVar24 = 0;
    plVar22 = (long *)0x0;
  }
  else {
    uVar24 = lVar15 >> 4;
    if (uVar24 >> 0x3d != 0) {
      FUN_10ac9153c();
LAB_10ac90adc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac90ae0);
      (*pcVar4)();
    }
    plVar22 = (long *)(lVar15 >> 1);
    plStack_1d0 = plVar22;
    __Znwm();
    _bzero();
    uVar11 = 0;
    plVar8 = (long *)((long)plStack_1d0 + (long)plVar22);
    do {
      if (uVar24 == uVar11) goto LAB_10ac90adc;
      plStack_1d0[uVar11] = *plVar17;
      uVar11 = uVar11 + 1;
      plVar17 = plVar17 + 2;
    } while (uVar24 != uVar11);
  }
  puVar10 = (undefined8 *)0x1;
  FUN_10a061940(puVar9);
  if (puVar10 == (undefined8 *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = (long *)*puVar10;
  }
  lVar15 = *(long *)(param_1 + -0x58);
  puVar7 = puVar9;
  (**(code **)(*puVar9 + 0x90))();
  if ((plVar17 == (long *)0x0) || (uVar11 = *puVar7, uVar11 == 0 || plVar8 == plStack_1d0)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (lVar15 != 0) {
      *(double *)(param_1 + 0xb8) =
           *(double *)(*(long *)(lVar15 + 0x850) + 0x10) + *(double *)(param_1 + 0xb8);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 2;
    if (lVar15 != 0) {
      *(double *)(param_1 + 0xb0) =
           *(double *)(*(long *)(lVar15 + 0x850) + 0x10) + *(double *)(param_1 + 0xb0);
    }
    iVar13 = 0;
    iVar23 = 0;
    *(undefined8 *)(uVar11 + 0xd8) = *(undefined8 *)(uVar11 + 0xd0);
    bVar5 = *(byte *)(*(long *)(param_1 + 0x38) + 0x18);
    plVar8 = plStack_1d0;
    do {
      lStack_e0 = 0;
      lStack_d8 = 0;
      uStack_d0 = 0;
      uStack_90 = 0x3f80000000000000;
      uStack_98 = 0;
      uStack_a0 = 0x3f800000;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0x3f80000000000000;
      uStack_c0 = 0;
      uStack_c8 = 0x3f800000;
      uStack_e8 = CONCAT44((int)(uStack_e8 >> 0x20),iVar13) & 0xffffff00ffffffff;
      uStack_f0 = CONCAT44((int)((ulong)(*(long *)(*plVar8 + 0x48) - *(long *)(*plVar8 + 0x40)) >> 2
                                ),iVar23 << 2);
      FUN_10a701cb0((undefined8 *)(uVar11 + 0xd0),&uStack_f0);
      lVar15 = *plVar8;
      lVar6 = *(long *)(lVar15 + 0x30) - *(long *)(lVar15 + 0x28) >> 2;
      if ((bVar5 & 1) == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = (*(long *)(lVar15 + 0x78) - *(long *)(lVar15 + 0x70)) * -0x5555555555555555 +
                lVar6 * 0x5555555555555555 == 0;
      }
      iVar13 = iVar13 + (int)lVar6 * -0x55555555;
      iVar23 = iVar23 + (int)((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40)) >> 2);
      plVar8 = plVar8 + 1;
      plVar22 = plVar22 + -1;
    } while (plVar22 != (long *)0x0);
    FUN_10ab4a154(uVar11,iVar13);
    FUN_10ab4cb54(uVar11,iVar23);
    if ((bool)bVar5 == false) {
LAB_10ac9039c:
      uVar25 = 1;
    }
    else {
      func_0x000107c2b074(&uStack_f0,&PTR_DAT_110c69f38);
      lVar15 = *(long *)(uVar11 + 0xf8);
      lVar6 = *(long *)(uVar11 + 0x100);
      if (lVar15 == lVar6) {
LAB_10ac902c8:
        bVar14 = 0;
        if ((lVar15 != lVar6) && (lVar15 != 0)) {
          func_0x000107c2b074(&uStack_110,&PTR_DAT_110c69f38);
          lVar15 = *(long *)(uVar11 + 0xf8);
          lVar6 = lVar15;
          for (; (lVar15 != *(long *)(uVar11 + 0x100) &&
                 (lVar6 = lVar15, *(long *)(lVar15 + 0x18) != lStack_f8)); lVar15 = lVar15 + 0x38) {
            lVar6 = *(long *)(uVar11 + 0x100);
          }
          bVar14 = *(byte *)(lVar6 + 0x2c) ^ 1;
          if (uStack_100 < 0) {
            __ZdlPv(uStack_110);
          }
        }
      }
      else {
        do {
          if (*(long *)(lVar15 + 0x18) == lStack_d8) goto LAB_10ac902c8;
          lVar15 = lVar15 + 0x38;
        } while (lVar15 != lVar6);
        bVar14 = 0;
      }
      if ((bVar14 & 1) == 0) goto LAB_10ac9039c;
      func_0x000107c2b074(&uStack_f0,&PTR_DAT_110c69f38);
      FUN_10ab6fc0c(uVar11 + 0xf0,&uStack_f0);
      func_0x000107c2b074(&uStack_110,&PTR_DAT_110c69f38);
      if (uStack_100 < 0) {
        func_0x000107c3192c(&uStack_f0,uStack_110,uStack_108);
      }
      else {
        uStack_e8 = uStack_108;
        uStack_f0 = uStack_110;
        lStack_e0 = uStack_100;
      }
      lStack_d8 = lStack_f8;
      uStack_d0 = 0x200000000;
      uStack_c8 = CONCAT35(uStack_c8._5_3_,0x100000004);
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      FUN_10ab6f9a8(uVar11 + 0xf0,&uStack_f0);
      if (uStack_100._7_1_ < '\0') {
        __ZdlPv(uStack_110);
      }
      uVar25 = 9;
    }
    FUN_10ab6e728();
    lVar15 = *(long *)(uVar11 + 0xf8);
    lVar6 = lVar15;
    for (; (lVar15 != *(long *)(uVar11 + 0x100) &&
           (lVar6 = lVar15, *(long *)(lVar15 + 0x18) != lRam00000001138356d8));
        lVar15 = lVar15 + 0x38) {
      lVar6 = *(long *)(uVar11 + 0x100);
    }
    FUN_10ab4c544(&plStack_118,uVar11,lVar6);
    FUN_10ab6e9d8();
    lVar15 = *(long *)(uVar11 + 0xf8);
    lVar6 = lVar15;
    for (; (lVar15 != *(long *)(uVar11 + 0x100) &&
           (lVar6 = lVar15, *(long *)(lVar15 + 0x18) != lRam0000000113835758));
        lVar15 = lVar15 + 0x38) {
      lVar6 = *(long *)(uVar11 + 0x100);
    }
    FUN_10ab4c544(&plStack_120,uVar11,lVar6);
    func_0x000107c2b074(&uStack_f0,&PTR_DAT_110c69f38);
    lVar15 = *(long *)(uVar11 + 0xf8);
    lVar6 = lVar15;
    for (; (lVar15 != *(long *)(uVar11 + 0x100) &&
           (lVar6 = lVar15, *(long *)(lVar15 + 0x18) != lStack_d8)); lVar15 = lVar15 + 0x38) {
      lVar6 = *(long *)(uVar11 + 0x100);
    }
    uVar2 = *(int *)(lVar6 + 0x24) - 1;
    if (uVar2 < 7) {
      iVar13 = *(int *)(&UNK_10e50ad54 + (ulong)uVar2 * 4);
    }
    else {
      iVar13 = 0;
    }
    if (*(int *)(lVar6 + 0x28) * iVar13 == 4) {
      if (uVar2 < 7) {
        iVar13 = *(int *)(&UNK_10e50ad54 + (ulong)uVar2 * 4);
      }
      else {
        iVar13 = 0;
      }
      if (iVar13 * *(int *)(lVar6 + 0x28) == 4) {
        lVar15 = *(long *)(uVar11 + 0x10) + (ulong)*(uint *)(lVar6 + 0x30);
        uVar18 = (ulong)*(uint *)(uVar11 + 0xf0);
        if (*(uint *)(uVar11 + 0xf0) == 0) goto LAB_10ac9055c;
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = (ulong)(*(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10)) / uVar18;
        }
        uVar20 = uVar20 & 0xffffffff;
      }
      else {
        lVar15 = 0;
LAB_10ac9055c:
        uVar20 = 0;
        uVar18 = 0;
      }
      plVar8 = (long *)0x28;
      __Znwm();
      plVar8[2] = uVar20;
      plVar8[3] = uVar18;
      plVar8[4] = 0;
      *plVar8 = (long)&PTR_FUN_110c6a200;
      plVar8[1] = lVar15;
    }
    else {
      plVar8 = (long *)0x0;
    }
    plVar3 = plStack_118;
    plVar22 = plStack_120;
    uStack_108 = 0xff7fffff00000000;
    uStack_110 = 0;
    uStack_100 = -0x80000000800001;
    lVar15 = *(long *)(uVar11 + 0xd0);
    if (*(long *)(uVar11 + 0xd8) == lVar15) {
      uStack_108._0_4_ = 0.0;
      uStack_108._4_4_ = -3.4028235e+38;
      uStack_110._4_4_ = 0.0;
      uStack_110._0_4_ = 0.0;
      uStack_100._4_4_ = uStack_108._4_4_;
      uStack_100._0_4_ = uStack_108._4_4_;
    }
    else {
      uVar18 = 0;
      do {
        puVar21 = (uint *)(lVar15 + uVar18 * 0x68);
        *(undefined1 *)(puVar21 + 3) = 1;
        if (uVar18 == uVar24) goto LAB_10ac90adc;
        lVar6 = plStack_1d0[uVar18];
        fStack_12c = (float)*(undefined8 *)(lVar6 + 0xac);
        fStack_128 = (float)((ulong)*(undefined8 *)(lVar6 + 0xac) >> 0x20);
        fStack_138 = ((float)*(undefined8 *)(lVar6 + 0xa0) + fStack_12c) * 0.5;
        fStack_134 = ((float)((ulong)*(undefined8 *)(lVar6 + 0xa0) >> 0x20) + fStack_128) * 0.5;
        fStack_130 = (*(float *)(lVar6 + 0xa8) + *(float *)(lVar6 + 0xb4)) * 0.5;
        fStack_12c = fStack_12c - fStack_138;
        fStack_128 = fStack_128 - fStack_134;
        fStack_124 = *(float *)(lVar6 + 0xb4) - fStack_130;
        uStack_148 = *(undefined4 *)(lVar6 + 0x20);
        uStack_150 = CONCAT44(uStack_148,uStack_148);
        FUN_10a45f7b0(&uStack_f0,lVar6 + 4,lVar6 + 0x10,&uStack_150);
        *(long *)(puVar21 + 0x10) = lStack_d8;
        *(long *)(puVar21 + 0xe) = lStack_e0;
        *(ulong *)(puVar21 + 0xc) = uStack_e8;
        *(undefined8 *)(puVar21 + 10) = uStack_f0;
        *(undefined8 *)(puVar21 + 0x18) = uStack_b8;
        *(ulong *)(puVar21 + 0x16) = uStack_c0;
        *(undefined8 *)(puVar21 + 0x14) = uStack_c8;
        *(undefined8 *)(puVar21 + 0x12) = uStack_d0;
        *(ulong *)(puVar21 + 6) = CONCAT44(fStack_12c,fStack_130);
        *(ulong *)(puVar21 + 4) = CONCAT44(fStack_134,fStack_138);
        *(ulong *)(puVar21 + 8) = CONCAT44(fStack_124,fStack_128);
        FUN_10a005448(&uStack_168,&fStack_138,&uStack_f0);
        FUN_10a01e958(&uStack_150,&uStack_168,&uStack_110);
        uStack_108 = CONCAT44(uStack_144,uStack_148);
        uStack_110 = uStack_150;
        uStack_100 = lStack_140;
        lVar15 = *(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28);
        if (lVar15 != 0) {
          lVar19 = 0;
          uVar20 = 0;
          do {
            uVar12 = (*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 2) * -0x5555555555555555;
            if (uVar12 < uVar20 || uVar12 - uVar20 == 0) goto LAB_10ac90adc;
            puVar10 = (undefined8 *)(*(long *)(lVar6 + 0x28) + lVar19);
            uStack_150 = *puVar10;
            uStack_148 = *(undefined4 *)(puVar10 + 1);
            (**(code **)(*plVar3 + 0x18))(plVar3,(int)uVar20 + puVar21[2],&uStack_150);
            if ((*(byte *)(param_1 + 0x28) >> 2 & 1) != 0) {
              uVar12 = (*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58) >> 2) *
                       -0x5555555555555555;
              if (uVar12 < uVar20 || uVar12 - uVar20 == 0) goto LAB_10ac90adc;
              puVar10 = (undefined8 *)(*(long *)(lVar6 + 0x58) + lVar19);
              uStack_168 = *puVar10;
              uStack_160 = *(undefined4 *)(puVar10 + 1);
              (**(code **)(*plVar22 + 0x18))(plVar22,(int)uVar20 + puVar21[2],&uStack_168);
            }
            uVar20 = uVar20 + 1;
            lVar19 = lVar19 + 0xc;
          } while ((lVar15 >> 2) * -0x5555555555555555 - uVar20 != 0);
        }
        if ((ulong)(*(long *)(uVar11 + 0x30) - *(long *)(uVar11 + 0x28)) <= (ulong)*puVar21)
        goto LAB_10ac90adc;
        lVar15 = *(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40);
        if (lVar15 == 0) goto LAB_10ac90adc;
        _memcpy(*(long *)(uVar11 + 0x28) + (ulong)*puVar21,*(long *)(lVar6 + 0x40),lVar15);
        if ((bool)bVar5 == false) {
LAB_10ac9085c:
          uVar20 = *(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40);
          if ((8 < uVar20) &&
             ((ulong)((long)uVar20 >> 2) / 3 == *(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88)))
          {
            uVar12 = 0;
            uVar20 = 0;
            do {
              if ((ulong)(*(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88)) <= uVar20)
              goto LAB_10ac90adc;
              bVar14 = *(byte *)(*(long *)(lVar6 + 0x88) + uVar20);
              lVar15 = 3;
              uVar16 = uVar12;
              do {
                if ((ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40) >> 2) <= uVar16)
                goto LAB_10ac90adc;
                uStack_150 = CONCAT44(uStack_150._4_4_,(uint)bVar14);
                (**(code **)(*plVar8 + 0x18))
                          (plVar8,puVar21[2] + *(int *)(*(long *)(lVar6 + 0x40) + uVar16 * 4),
                           &uStack_150);
                uVar16 = uVar16 + 1;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              uVar20 = uVar20 + 1;
              uVar12 = uVar12 + 3;
            } while (uVar20 < (ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40) >> 2) / 3);
          }
        }
        else {
          lVar15 = *(long *)(lVar6 + 0x70);
          if ((*(long *)(lVar6 + 0x78) - lVar15) * -0x5555555555555555 +
              (*(long *)(lVar6 + 0x30) - *(long *)(lVar6 + 0x28) >> 2) * 0x5555555555555555 != 0)
          goto LAB_10ac9085c;
          if (*(long *)(lVar6 + 0x78) != lVar15) {
            lVar19 = 0;
            uVar20 = 0;
            do {
              pbVar1 = (byte *)(lVar15 + lVar19);
              uStack_150 = CONCAT44((int)((ulong)uStack_150 >> 0x20),
                                    *pbVar1 | 0xff000000 | (uint)pbVar1[1] << 8 |
                                    (uint)pbVar1[2] << 0x10);
              (**(code **)(*plVar8 + 0x18))(plVar8,uVar20 + puVar21[2],&uStack_150);
              uVar20 = uVar20 + 1;
              lVar15 = *(long *)(lVar6 + 0x70);
              lVar19 = lVar19 + 3;
            } while (uVar20 < (ulong)((*(long *)(lVar6 + 0x78) - lVar15) * -0x5555555555555555));
          }
        }
        uVar18 = uVar18 + 1;
        lVar15 = *(long *)(uVar11 + 0xd0);
        uVar20 = (*(long *)(uVar11 + 0xd8) - lVar15 >> 3) * 0x4ec4ec4ec4ec4ec5;
      } while (uVar18 <= uVar20 && uVar20 - uVar18 != 0);
    }
    *(float *)(uVar11 + 0x144) = (float)uStack_110 - uStack_108._4_4_;
    *(float *)(uVar11 + 0x148) = uStack_110._4_4_ - (float)uStack_100;
    *(float *)(uVar11 + 0x14c) = (float)uStack_108 - uStack_100._4_4_;
    *(float *)(uVar11 + 0x138) = uStack_108._4_4_ + (float)uStack_110;
    *(float *)(uVar11 + 0x13c) = (float)uStack_100 + uStack_110._4_4_;
    *(float *)(uVar11 + 0x140) = uStack_100._4_4_ + (float)uStack_108;
    uVar2 = *(uint *)(uVar11 + 0xf0);
    if (uVar2 == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0;
      if ((ulong)uVar2 != 0) {
        uVar24 = (ulong)(*(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10)) / (ulong)uVar2;
      }
      uVar24 = uVar24 & 0xffffffff;
    }
    *(ulong *)(param_1 + 0x48) = uVar24;
    uVar24 = uVar11;
    FUN_10ab4a5b4();
    *(ulong *)(param_1 + 0x50) = (uVar24 & 0xffffffff) / 3;
    fVar26 = *(float *)(uVar11 + 0x138) - *(float *)(uVar11 + 0x144);
    fVar27 = *(float *)(uVar11 + 0x13c) - *(float *)(uVar11 + 0x148);
    fVar28 = *(float *)(uVar11 + 0x140) - *(float *)(uVar11 + 0x14c);
    *(double *)(param_1 + 0xa0) = (double)(fVar26 * fVar27 * fVar28) * 1e-06;
    *(double *)(param_1 + 0xa8) = (double)SQRT(fVar27 * fVar27 + fVar26 * fVar26 + fVar28 * fVar28);
    (**(code **)(*plVar17 + 0x80))(plVar17,uVar11,uVar25,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    if (plStack_120 != (long *)0x0) {
      (**(code **)(*plStack_120 + 8))();
    }
    if (plStack_118 != (long *)0x0) {
      (**(code **)(*plStack_118 + 8))();
    }
  }
  if (plStack_1d0 != (long *)0x0) {
    __ZdlPv();
  }
LAB_10ac90aa8:
  FUN_10ac90c94(puVar9,*(undefined4 *)(param_2 + 0x198));
  return;
}



/* Entry: 10ac90c94; end: 10ac90eef;  */

void FUN_10ac90c94(long param_1,int param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  pcVar2 = "false";
  if (param_2 == 1) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x8c0);
    FUN_10a25ec18();
    if ((uVar1 & 1) == 0) {
      pcVar2 = "true";
    }
  }
  lVar3 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f6a072b);
  if (lVar3 != 0) {
    FUN_10a76bf18(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(lVar3 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar3 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f6a0746);
  if (lVar3 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar3 + 0x8d8),auStack_48,*(undefined4 *)(param_1 + 0x130));
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar3 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f6a075e);
  if (lVar3 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar3 + 0x8d8),auStack_48,*(undefined4 *)(param_1 + 0x138));
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar3 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_60,&UNK_10f6a0776);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x8d8);
    func_0x000107c2b054(auStack_48,pcVar2);
    FUN_10a76bdb0(uVar4,auStack_60,auStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  lVar3 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f6a0792);
  if (lVar3 != 0) {
    FUN_10a76bf18(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(lVar3 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar3 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f6a07ab);
  if (lVar3 != 0) {
    FUN_10a76bf18(*(undefined8 *)(param_1 + 400),*(undefined8 *)(lVar3 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar3 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f6a07c8);
  if (lVar3 != 0) {
    FUN_10a76bf18(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar3 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10ac90ef0; end: 10ac90eff;  */

void FUN_10ac90ef0(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  long lVar4;
  ushort uVar5;
  undefined8 uVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  bVar2 = *(byte *)(param_1 + 0x110);
  if ((bVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x120);
    *(bool *)(lVar4 + 0x19) = *(int *)(param_1 + 0x114) == 1;
    if ((bVar2 >> 1 & 1) == 0) {
      uVar5 = (ushort)*(byte *)(param_1 + 0x118);
      uVar7 = (ushort)*(byte *)(param_1 + 0x118);
    }
    else {
      uVar5 = 0;
      uVar7 = 1;
    }
    *(ushort *)(lVar4 + 0x34) = uVar5 | uVar7 << 8;
    lVar4 = *(long *)(param_1 + 0x120);
    if ((*(byte *)(param_2 + 0x4d8) & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar4 + 0x20);
      uVar8 = *(undefined8 *)(lVar4 + 0x18);
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      uVar1 = *(undefined4 *)(lVar4 + 0x30);
      uVar3 = *(undefined2 *)(lVar4 + 0x34);
      *(undefined1 *)(param_2 + 0x4d6) = *(undefined1 *)(lVar4 + 0x36);
      *(undefined2 *)(param_2 + 0x4d4) = uVar3;
      *(undefined4 *)(param_2 + 0x4d0) = uVar1;
      *(undefined8 *)(param_2 + 0x4c8) = uVar6;
      *(undefined8 *)(param_2 + 0x4c0) = uVar9;
      *(undefined8 *)(param_2 + 0x4b8) = uVar8;
      *(undefined1 *)(param_2 + 0x4d8) = 1;
    }
    else {
      func_0x00010a4bfba4((undefined8 *)(param_2 + 0x4b8),lVar4 + 0x18);
    }
    *(undefined1 *)(*(long *)(param_1 + 0x120) + 0x36) = 0;
  }
  return;
}



/* Entry: 10ac90f00; end: 10ac91007;  */

void FUN_10ac90f00(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c68fd8,0);
  bVar2 = 4;
  if ((int)plVar1 == 0) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xfb | bVar2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c68ff8,0);
  *(int *)(param_1 + 0x114) = (int)param_2;
  return;
}



/* Entry: 10ac91008; end: 10ac91123;  */

void FUN_10ac91008(undefined8 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined7 uStack_40;
  char cStack_39;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_10a185264(&uStack_50,0x100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,&UNK_10f6a07df,0x1c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,&UNK_10f6a07fc,0x1c);
  __ZNSt3__19to_stringEj(&ppuStack_38,*(undefined4 *)(param_2 + 0x114));
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,&DAT_10f4f500b,2);
  if (cStack_39 < '\0') {
    func_0x000107c3192c(param_1,uStack_50,uStack_48);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
  }
  else {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = CONCAT17(cStack_39,uStack_40);
  }
  return;
}



/* Entry: 10ac91124; end: 10ac9112f;  */

void FUN_10ac91124(undefined8 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined7 uStack_40;
  char cStack_39;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_10a185264(&uStack_50,0x100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,&UNK_10f6a07df,0x1c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,&UNK_10f6a07fc,0x1c);
  __ZNSt3__19to_stringEj(&ppuStack_38,*(undefined4 *)(param_2 + 0xec));
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_50,&DAT_10f4f500b,2);
  if (cStack_39 < '\0') {
    func_0x000107c3192c(param_1,uStack_50,uStack_48);
    if (cStack_39 < '\0') {
      __ZdlPv(uStack_50);
    }
  }
  else {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = CONCAT17(cStack_39,uStack_40);
  }
  return;
}



/* Entry: 10ac91130; end: 10ac91143;  */

void FUN_10ac91130(void)

{
  FUN_10ac91550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac91144; end: 10ac91153;  */

long FUN_10ac91144(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac91154; end: 10ac9116b;  */

void FUN_10ac91154(long param_1)

{
  FUN_10ac91550(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9116c; end: 10ac91173;  */

undefined8 * FUN_10ac9116c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -5;
  *puVar2 = &PTR_DAT_110c683c8;
  param_1[-3] = &PTR_FUN_110c68510;
  *param_1 = &PTR_FUN_110c68540;
  param_1[0x76] = &PTR_FUN_110c68640;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110c68598;
  param_1[0x56] = &PTR_FUN_110c685b8;
  param_1[0x5b] = &PTR_FUN_110c685e0;
  func_0x00010ac951fc(param_1 + 0x72);
  FUN_10a004978(param_1 + 0x70);
  FUN_10a004978(param_1 + 0x6e);
  func_0x00010ac951a4(param_1 + 0x6c);
  func_0x00010a004e5c(param_1 + 0x6a);
  func_0x00010a004e5c(param_1 + 0x68);
  FUN_10a05b1b0(param_1 + 100);
  func_0x00010a004cfc(param_1 + 0x61);
  func_0x00010a004cfc(param_1 + 0x5f);
  FUN_10a00dc2c(param_1 + 0x56);
  FUN_10a1e3810(param_1 + 0x4c);
  *puVar2 = &PTR_FUN_110c69060;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x76] = &PTR_DAT_110c691c0;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar2 = &PTR_DAT_110c69210;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x76] = &PTR_DAT_110c692e0;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar1 = *(long *)(param_1[0xd] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar2;
}



/* Entry: 10ac91174; end: 10ac9118b;  */

void FUN_10ac91174(long param_1)

{
  FUN_10ac91550(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9118c; end: 10ac91193;  */

undefined8 * FUN_10ac9118c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x15;
  *puVar2 = &PTR_DAT_110c683c8;
  param_1[-0x13] = &PTR_FUN_110c68510;
  param_1[-0x10] = &PTR_FUN_110c68540;
  param_1[0x66] = &PTR_FUN_110c68640;
  *param_1 = &PTR_FUN_110c68598;
  param_1[0x46] = &PTR_FUN_110c685b8;
  param_1[0x4b] = &PTR_FUN_110c685e0;
  func_0x00010ac951fc(param_1 + 0x62);
  FUN_10a004978(param_1 + 0x60);
  FUN_10a004978(param_1 + 0x5e);
  func_0x00010ac951a4(param_1 + 0x5c);
  func_0x00010a004e5c(param_1 + 0x5a);
  func_0x00010a004e5c(param_1 + 0x58);
  FUN_10a05b1b0(param_1 + 0x54);
  func_0x00010a004cfc(param_1 + 0x51);
  func_0x00010a004cfc(param_1 + 0x4f);
  FUN_10a00dc2c(param_1 + 0x46);
  FUN_10a1e3810(param_1 + 0x3c);
  *puVar2 = &PTR_FUN_110c69060;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x66] = &PTR_DAT_110c691c0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar2 = &PTR_DAT_110c69210;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x66] = &PTR_DAT_110c692e0;
  FUN_10a042dcc(param_1 + -2);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar1 = *(long *)(param_1[-3] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar2;
}



/* Entry: 10ac91194; end: 10ac911ab;  */

void FUN_10ac91194(long param_1)

{
  FUN_10ac91550(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac911ac; end: 10ac911b3;  */

undefined8 * FUN_10ac911ac(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x5b;
  *puVar2 = &PTR_DAT_110c683c8;
  param_1[-0x59] = &PTR_FUN_110c68510;
  param_1[-0x56] = &PTR_FUN_110c68540;
  param_1[0x20] = &PTR_FUN_110c68640;
  puVar5 = param_1 + -0x46;
  *puVar5 = &PTR_FUN_110c68598;
  *param_1 = &PTR_FUN_110c685b8;
  param_1[5] = &PTR_FUN_110c685e0;
  func_0x00010ac951fc(param_1 + 0x1c);
  FUN_10a004978(param_1 + 0x1a);
  FUN_10a004978(param_1 + 0x18);
  func_0x00010ac951a4(param_1 + 0x16);
  func_0x00010a004e5c(param_1 + 0x14);
  func_0x00010a004e5c(param_1 + 0x12);
  FUN_10a05b1b0(param_1 + 0xe);
  func_0x00010a004cfc(param_1 + 0xb);
  func_0x00010a004cfc(param_1 + 9);
  FUN_10a00dc2c(param_1);
  FUN_10a1e3810(param_1 + -10);
  *puVar2 = &PTR_FUN_110c69060;
  param_1[-0x59] = &PTR_FUN_110bb3968;
  param_1[-0x56] = &PTR_DAT_110bb3998;
  param_1[0x20] = &PTR_DAT_110c691c0;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0xe);
  func_0x00010a042c64(param_1 + -0x13);
  func_0x00010a0523dc(param_1 + -0x16);
  if (*(char *)(param_1 + -0x1f) == '\x01') {
    func_0x00010a042d30(param_1 + -0x21);
  }
  param_1[-0x46] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar2 = &PTR_DAT_110c69210;
  param_1[-0x59] = &PTR_FUN_110b9f848;
  param_1[-0x56] = &PTR_DAT_110b9f878;
  param_1[0x20] = &PTR_DAT_110c692e0;
  FUN_10a042dcc(param_1 + -0x48);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x59] = &PTR_DAT_110c60a88;
  param_1[-0x56] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x50);
  puVar6 = (undefined8 *)param_1[-0x4f];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x51;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x58);
  if ((param_1[-0x49] != 0) && (lVar1 = *(long *)(param_1[-0x49] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x249) < '\0') {
    __ZdlPv(param_1[-0x4c]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x52] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x56] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x55);
  param_1[-0x59] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x58);
  return puVar2;
}



/* Entry: 10ac911b4; end: 10ac911cb;  */

void FUN_10ac911b4(long param_1)

{
  FUN_10ac91550(param_1 + -0x2d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac911cc; end: 10ac911d3;  */

undefined8 * FUN_10ac911cc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -0x60;
  *puVar2 = &PTR_DAT_110c683c8;
  param_1[-0x5e] = &PTR_FUN_110c68510;
  param_1[-0x5b] = &PTR_FUN_110c68540;
  param_1[0x1b] = &PTR_FUN_110c68640;
  puVar5 = param_1 + -0x4b;
  *puVar5 = &PTR_FUN_110c68598;
  param_1[-5] = &PTR_FUN_110c685b8;
  *param_1 = &PTR_FUN_110c685e0;
  func_0x00010ac951fc(param_1 + 0x17);
  FUN_10a004978(param_1 + 0x15);
  FUN_10a004978(param_1 + 0x13);
  func_0x00010ac951a4(param_1 + 0x11);
  func_0x00010a004e5c(param_1 + 0xf);
  func_0x00010a004e5c(param_1 + 0xd);
  FUN_10a05b1b0(param_1 + 9);
  func_0x00010a004cfc(param_1 + 6);
  func_0x00010a004cfc(param_1 + 4);
  FUN_10a00dc2c(param_1 + -5);
  FUN_10a1e3810(param_1 + -0xf);
  *puVar2 = &PTR_FUN_110c69060;
  param_1[-0x5e] = &PTR_FUN_110bb3968;
  param_1[-0x5b] = &PTR_DAT_110bb3998;
  param_1[0x1b] = &PTR_DAT_110c691c0;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x13);
  func_0x00010a042c64(param_1 + -0x18);
  func_0x00010a0523dc(param_1 + -0x1b);
  if (*(char *)(param_1 + -0x24) == '\x01') {
    func_0x00010a042d30(param_1 + -0x26);
  }
  param_1[-0x4b] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar2 = &PTR_DAT_110c69210;
  param_1[-0x5e] = &PTR_FUN_110b9f848;
  param_1[-0x5b] = &PTR_DAT_110b9f878;
  param_1[0x1b] = &PTR_DAT_110c692e0;
  FUN_10a042dcc(param_1 + -0x4d);
  *puVar2 = &PTR_DAT_110c60a00;
  param_1[-0x5e] = &PTR_DAT_110c60a88;
  param_1[-0x5b] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x55);
  puVar6 = (undefined8 *)param_1[-0x54];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x56;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x5d);
  if ((param_1[-0x4e] != 0) && (lVar1 = *(long *)(param_1[-0x4e] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + -0x271) < '\0') {
    __ZdlPv(param_1[-0x51]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x57] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x5b] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x5a);
  param_1[-0x5e] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x5d);
  return puVar2;
}



/* Entry: 10ac911d4; end: 10ac911eb;  */

void FUN_10ac911d4(long param_1)

{
  FUN_10ac91550(param_1 + -0x300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac911ec; end: 10ac911fb;  */

undefined8 * FUN_10ac911ec(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110c683c8;
  puVar1[2] = &PTR_FUN_110c68510;
  puVar1[5] = &PTR_FUN_110c68540;
  puVar1[0x7b] = &PTR_FUN_110c68640;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110c68598;
  puVar1[0x5b] = &PTR_FUN_110c685b8;
  puVar1[0x60] = &PTR_FUN_110c685e0;
  func_0x00010ac951fc(puVar1 + 0x77);
  FUN_10a004978(puVar1 + 0x75);
  FUN_10a004978(puVar1 + 0x73);
  func_0x00010ac951a4(puVar1 + 0x71);
  func_0x00010a004e5c(puVar1 + 0x6f);
  func_0x00010a004e5c(puVar1 + 0x6d);
  FUN_10a05b1b0(puVar1 + 0x69);
  func_0x00010a004cfc(puVar1 + 0x66);
  func_0x00010a004cfc(puVar1 + 100);
  FUN_10a00dc2c(puVar1 + 0x5b);
  FUN_10a1e3810(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c69060;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x7b] = &PTR_DAT_110c691c0;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110c69210;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x7b] = &PTR_DAT_110c692e0;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10ac911fc; end: 10ac9122b;  */

void FUN_10ac911fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac91550((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac9122c; end: 10ac9122f;  */

undefined8 * FUN_10ac9122c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c687a0;
  param_1[2] = &PTR_FUN_110c688d8;
  param_1[5] = &PTR_FUN_110c68908;
  param_1[0x5d] = &PTR_FUN_110c689d8;
  param_1[0x15] = &PTR_FUN_110c68960;
  param_1[0x51] = &PTR_FUN_110c68980;
  FUN_10a004cfc(param_1 + 0x5b);
  func_0x00010a05a86c(param_1 + 0x59);
  plVar5 = (long *)param_1[0x58];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a0598ec(param_1 + 0x56);
  FUN_10a00dc2c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c69330;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x5d] = &PTR_DAT_110c69490;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c694e0;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x5d] = &PTR_DAT_110c695b0;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar7 = (undefined **)(param_1 + 0xb);
  puVar9 = (undefined8 *)param_1[0xc];
  for (puVar8 = (undefined8 *)*ppuVar7; puVar8 != puVar9; puVar8 = puVar8 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar8,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar7);
  plVar5 = param_1 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar4 = *(long *)(param_1[0x12] + 0x828), lVar4 != 0)) {
    FUN_10a1dfb2c(lVar4,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar7;
  FUN_10ac78cf4(appuStack_180);
  lVar4 = *plVar5;
  *plVar5 = 0;
  if (lVar4 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac91230; end: 10ac91243;  */

void FUN_10ac91230(void)

{
  func_0x00010ac916a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac91244; end: 10ac91253;  */

long FUN_10ac91244(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac91254; end: 10ac9126b;  */

void FUN_10ac91254(long param_1)

{
  func_0x00010ac916a8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9126c; end: 10ac91273;  */

undefined8 * FUN_10ac9126c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -5;
  *puVar5 = &PTR_FUN_110c687a0;
  param_1[-3] = &PTR_FUN_110c688d8;
  *param_1 = &PTR_FUN_110c68908;
  param_1[0x58] = &PTR_FUN_110c689d8;
  param_1[0x10] = &PTR_FUN_110c68960;
  param_1[0x4c] = &PTR_FUN_110c68980;
  FUN_10a004cfc(param_1 + 0x56);
  func_0x00010a05a86c(param_1 + 0x54);
  plVar6 = (long *)param_1[0x53];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  FUN_10a0598ec(param_1 + 0x51);
  FUN_10a00dc2c(param_1 + 0x4c);
  *puVar5 = &PTR_FUN_110c69330;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x58] = &PTR_DAT_110c69490;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar5 = &PTR_DAT_110c694e0;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x58] = &PTR_DAT_110c695b0;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + 6);
  puVar10 = (undefined8 *)param_1[7];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar6 = param_1 + 5;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar4 = *(long *)(param_1[0xd] + 0x828), lVar4 != 0)) {
    FUN_10a1dfb2c(lVar4,puVar5);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar4 = *plVar6;
  *plVar6 = 0;
  if (lVar4 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar5;
}



/* Entry: 10ac91274; end: 10ac9128b;  */

void FUN_10ac91274(long param_1)

{
  func_0x00010ac916a8(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9128c; end: 10ac91293;  */

undefined8 * FUN_10ac9128c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -0x15;
  *puVar5 = &PTR_FUN_110c687a0;
  param_1[-0x13] = &PTR_FUN_110c688d8;
  param_1[-0x10] = &PTR_FUN_110c68908;
  param_1[0x48] = &PTR_FUN_110c689d8;
  *param_1 = &PTR_FUN_110c68960;
  param_1[0x3c] = &PTR_FUN_110c68980;
  FUN_10a004cfc(param_1 + 0x46);
  func_0x00010a05a86c(param_1 + 0x44);
  plVar6 = (long *)param_1[0x43];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  FUN_10a0598ec(param_1 + 0x41);
  FUN_10a00dc2c(param_1 + 0x3c);
  *puVar5 = &PTR_FUN_110c69330;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x48] = &PTR_DAT_110c69490;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar5 = &PTR_DAT_110c694e0;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x48] = &PTR_DAT_110c695b0;
  FUN_10a042dcc(param_1 + -2);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + -10);
  puVar10 = (undefined8 *)param_1[-9];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar6 = param_1 + -0xb;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar4 = *(long *)(param_1[-3] + 0x828), lVar4 != 0)) {
    FUN_10a1dfb2c(lVar4,puVar5);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar4 = *plVar6;
  *plVar6 = 0;
  if (lVar4 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar5;
}



/* Entry: 10ac91294; end: 10ac912ab;  */

void FUN_10ac91294(long param_1)

{
  func_0x00010ac916a8(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac912ac; end: 10ac912b3;  */

undefined8 * FUN_10ac912ac(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar5 = param_1 + -0x51;
  *puVar5 = &PTR_FUN_110c687a0;
  param_1[-0x4f] = &PTR_FUN_110c688d8;
  param_1[-0x4c] = &PTR_FUN_110c68908;
  param_1[0xc] = &PTR_FUN_110c689d8;
  param_1[-0x3c] = &PTR_FUN_110c68960;
  *param_1 = &PTR_FUN_110c68980;
  FUN_10a004cfc(param_1 + 10);
  func_0x00010a05a86c(param_1 + 8);
  plVar6 = (long *)param_1[7];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  FUN_10a0598ec(param_1 + 5);
  FUN_10a00dc2c(param_1);
  *puVar5 = &PTR_FUN_110c69330;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0xc] = &PTR_DAT_110c69490;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar5 = &PTR_DAT_110c694e0;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0xc] = &PTR_DAT_110c695b0;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar5 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(param_1 + -0x46);
  puVar10 = (undefined8 *)param_1[-0x45];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar6 = param_1 + -0x47;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar4 = *(long *)(param_1[-0x3f] + 0x828), lVar4 != 0)) {
    FUN_10a1dfb2c(lVar4,puVar5);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar4 = *plVar6;
  *plVar6 = 0;
  if (lVar4 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar5;
}



/* Entry: 10ac912b4; end: 10ac912cb;  */

void FUN_10ac912b4(long param_1)

{
  func_0x00010ac916a8(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac912cc; end: 10ac912db;  */

undefined8 * FUN_10ac912cc(long *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar2 = &PTR_FUN_110c687a0;
  puVar2[2] = &PTR_FUN_110c688d8;
  puVar2[5] = &PTR_FUN_110c68908;
  puVar2[0x5d] = &PTR_FUN_110c689d8;
  puVar2[0x15] = &PTR_FUN_110c68960;
  puVar2[0x51] = &PTR_FUN_110c68980;
  FUN_10a004cfc(puVar2 + 0x5b);
  func_0x00010a05a86c(puVar2 + 0x59);
  plVar6 = (long *)puVar2[0x58];
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar7 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  FUN_10a0598ec(puVar2 + 0x56);
  FUN_10a00dc2c(puVar2 + 0x51);
  *puVar2 = &PTR_FUN_110c69330;
  puVar2[2] = &PTR_FUN_110bb3968;
  puVar2[5] = &PTR_DAT_110bb3998;
  puVar2[0x5d] = &PTR_DAT_110c69490;
  puVar2[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar2 + 0x4d);
  func_0x00010a042c64(puVar2 + 0x48);
  func_0x00010a0523dc(puVar2 + 0x45);
  if (*(char *)(puVar2 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar2 + 0x3a);
  }
  puVar2[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar2 + 0x15);
  *puVar2 = &PTR_DAT_110c694e0;
  puVar2[2] = &PTR_FUN_110b9f848;
  puVar2[5] = &PTR_DAT_110b9f878;
  puVar2[0x5d] = &PTR_DAT_110c695b0;
  FUN_10a042dcc(puVar2 + 0x13);
  *puVar2 = &PTR_DAT_110c60a00;
  puVar2[2] = &PTR_DAT_110c60a88;
  puVar2[5] = &PTR_DAT_110c60ab8;
  ppuVar8 = (undefined **)(puVar2 + 0xb);
  puVar10 = (undefined8 *)puVar2[0xc];
  for (puVar9 = (undefined8 *)*ppuVar8; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar9,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar8);
  plVar6 = puVar2 + 10;
  if ((*plVar6 != 0) && (*(undefined ***)(*(long *)(*plVar6 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar2 + 3);
  if ((puVar2[0x12] != 0) && (lVar5 = *(long *)(puVar2[0x12] + 0x828), lVar5 != 0)) {
    FUN_10a1dfb2c(lVar5,puVar2);
  }
  if (*(char *)((long)puVar2 + 0x8f) < '\0') {
    __ZdlPv(puVar2[0xf]);
  }
  appuStack_180[0] = ppuVar8;
  FUN_10ac78cf4(appuStack_180);
  lVar5 = *plVar6;
  *plVar6 = 0;
  if (lVar5 != 0) {
    FUN_10ac7d690(plVar6);
  }
  if (puVar2[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar2[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar2 + 6);
  puVar2[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar2 + 3);
  return puVar2;
}



/* Entry: 10ac912dc; end: 10ac9130b;  */

void FUN_10ac912dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac916a8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac9130c; end: 10ac9130f;  */

void FUN_10ac9130c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c68a58;
  param_1[2] = &PTR_FUN_110c68b98;
  param_1[5] = &PTR_FUN_110c68bc8;
  param_1[100] = &PTR_FUN_110c68cc0;
  puVar1 = param_1 + 0x15;
  *puVar1 = &PTR_FUN_110c68c20;
  param_1[0x51] = &PTR_FUN_110c68c40;
  param_1[0x52] = &PTR_DAT_110c68c68;
  puStack_28 = param_1 + 0x61;
  FUN_10a044868(&puStack_28);
  func_0x00010a0523dc(param_1 + 0x5f);
  func_0x00010a4bafb8(param_1 + 0x5d);
  func_0x00010a05248c(param_1 + 0x5b);
  FUN_10a0617bc(param_1 + 0x59);
  FUN_10a00dc2c(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c69648;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[100] = &PTR_DAT_110c697a8;
  *puVar1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1);
  *param_1 = &PTR_DAT_110c697f8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[100] = &PTR_DAT_110c698c8;
  FUN_10a042dcc(param_1 + 0x13);
  FUN_10ac63308(param_1);
  return;
}



/* Entry: 10ac91310; end: 10ac91323;  */

void FUN_10ac91310(void)

{
  func_0x00010ac91808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac91324; end: 10ac91343;  */

long FUN_10ac91324(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac91344; end: 10ac9135b;  */

void FUN_10ac91344(long param_1)

{
  func_0x00010ac91808(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9135c; end: 10ac91363;  */

void FUN_10ac9135c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c68a58;
  param_1[-3] = &PTR_FUN_110c68b98;
  *param_1 = &PTR_FUN_110c68bc8;
  param_1[0x5f] = &PTR_FUN_110c68cc0;
  puVar2 = param_1 + 0x10;
  *puVar2 = &PTR_FUN_110c68c20;
  param_1[0x4c] = &PTR_FUN_110c68c40;
  param_1[0x4d] = &PTR_DAT_110c68c68;
  puStack_28 = param_1 + 0x5c;
  FUN_10a044868(&puStack_28);
  func_0x00010a0523dc(param_1 + 0x5a);
  func_0x00010a4bafb8(param_1 + 0x58);
  func_0x00010a05248c(param_1 + 0x56);
  FUN_10a0617bc(param_1 + 0x54);
  FUN_10a00dc2c(param_1 + 0x4d);
  *puVar1 = &PTR_FUN_110c69648;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x5f] = &PTR_DAT_110c697a8;
  *puVar2 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar2);
  *puVar1 = &PTR_DAT_110c697f8;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x5f] = &PTR_DAT_110c698c8;
  FUN_10a042dcc(param_1 + 0xe);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac91364; end: 10ac9137b;  */

void FUN_10ac91364(long param_1)

{
  func_0x00010ac91808(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9137c; end: 10ac91383;  */

void FUN_10ac9137c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110c68a58;
  param_1[-0x13] = &PTR_FUN_110c68b98;
  param_1[-0x10] = &PTR_FUN_110c68bc8;
  param_1[0x4f] = &PTR_FUN_110c68cc0;
  *param_1 = &PTR_FUN_110c68c20;
  param_1[0x3c] = &PTR_FUN_110c68c40;
  param_1[0x3d] = &PTR_DAT_110c68c68;
  puStack_28 = param_1 + 0x4c;
  FUN_10a044868(&puStack_28);
  func_0x00010a0523dc(param_1 + 0x4a);
  func_0x00010a4bafb8(param_1 + 0x48);
  func_0x00010a05248c(param_1 + 0x46);
  FUN_10a0617bc(param_1 + 0x44);
  FUN_10a00dc2c(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110c69648;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x4f] = &PTR_DAT_110c697a8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c697f8;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x4f] = &PTR_DAT_110c698c8;
  FUN_10a042dcc(param_1 + -2);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac91384; end: 10ac9139b;  */

void FUN_10ac91384(long param_1)

{
  func_0x00010ac91808(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9139c; end: 10ac913a3;  */

void FUN_10ac9139c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110c68a58;
  param_1[-0x4f] = &PTR_FUN_110c68b98;
  param_1[-0x4c] = &PTR_FUN_110c68bc8;
  param_1[0x13] = &PTR_FUN_110c68cc0;
  puVar2 = param_1 + -0x3c;
  *puVar2 = &PTR_FUN_110c68c20;
  *param_1 = &PTR_FUN_110c68c40;
  param_1[1] = &PTR_DAT_110c68c68;
  puStack_28 = param_1 + 0x10;
  FUN_10a044868(&puStack_28);
  func_0x00010a0523dc(param_1 + 0xe);
  func_0x00010a4bafb8(param_1 + 0xc);
  func_0x00010a05248c(param_1 + 10);
  FUN_10a0617bc(param_1 + 8);
  FUN_10a00dc2c(param_1 + 1);
  *puVar1 = &PTR_FUN_110c69648;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x13] = &PTR_DAT_110c697a8;
  *puVar2 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar2);
  *puVar1 = &PTR_DAT_110c697f8;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x13] = &PTR_DAT_110c698c8;
  FUN_10a042dcc(param_1 + -0x3e);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac913a4; end: 10ac913bb;  */

void FUN_10ac913a4(long param_1)

{
  func_0x00010ac91808(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac913bc; end: 10ac913cb;  */

long FUN_10ac913bc(long param_1)

{
  return param_1 + 0x30;
}



/* Entry: 10ac913cc; end: 10ac913e3;  */

void FUN_10ac913cc(long param_1)

{
  func_0x00010ac91808(param_1 + -0x290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac913e4; end: 10ac913f3;  */

void FUN_10ac913e4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c68a58;
  puVar1[2] = &PTR_FUN_110c68b98;
  puVar1[5] = &PTR_FUN_110c68bc8;
  puVar1[100] = &PTR_FUN_110c68cc0;
  puVar2 = puVar1 + 0x15;
  *puVar2 = &PTR_FUN_110c68c20;
  puVar1[0x51] = &PTR_FUN_110c68c40;
  puVar1[0x52] = &PTR_DAT_110c68c68;
  puStack_28 = puVar1 + 0x61;
  FUN_10a044868(&puStack_28);
  func_0x00010a0523dc(puVar1 + 0x5f);
  func_0x00010a4bafb8(puVar1 + 0x5d);
  func_0x00010a05248c(puVar1 + 0x5b);
  FUN_10a0617bc(puVar1 + 0x59);
  FUN_10a00dc2c(puVar1 + 0x52);
  *puVar1 = &PTR_FUN_110c69648;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[100] = &PTR_DAT_110c697a8;
  *puVar2 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar2);
  *puVar1 = &PTR_DAT_110c697f8;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[100] = &PTR_DAT_110c698c8;
  FUN_10a042dcc(puVar1 + 0x13);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac913f4; end: 10ac91483;  */

void FUN_10ac913f4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac91808((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac91484; end: 10ac91487;  */

void FUN_10ac91484(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c68d60;
  param_1[2] = &PTR_FUN_110c68e40;
  param_1[5] = &PTR_FUN_110c68e70;
  param_1[0x35] = &PTR_FUN_110c68f48;
  param_1[0x1d] = &PTR_FUN_110c68ed0;
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    __ZdlPv(param_1[0x2e]);
  }
  func_0x00010a0524e4(param_1 + 0x2c);
  puStack_28 = param_1 + 0x29;
  FUN_10a26e8c0(&puStack_28);
  FUN_10aa3dd44(param_1 + 0x24);
  param_1[0x1d] = &PTR_DAT_110c69d88;
  param_1[0x35] = &PTR_FUN_110c69e00;
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a004e04(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c699d0;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x35] = &PTR_FUN_110c69ad0;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c69c68;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x35] = &PTR_DAT_110c69d38;
  func_0x00010a1f9d14(param_1 + 0x13);
  FUN_10ac63308(param_1);
  return;
}



/* Entry: 10ac91488; end: 10ac9149b;  */

void FUN_10ac91488(void)

{
  func_0x00010ac9194c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac9149c; end: 10ac914a3;  */

void FUN_10ac9149c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c68d60;
  *param_1 = &PTR_FUN_110c68e40;
  param_1[3] = &PTR_FUN_110c68e70;
  param_1[0x33] = &PTR_FUN_110c68f48;
  param_1[0x1b] = &PTR_FUN_110c68ed0;
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  func_0x00010a0524e4(param_1 + 0x2a);
  puStack_28 = param_1 + 0x27;
  FUN_10a26e8c0(&puStack_28);
  FUN_10aa3dd44(param_1 + 0x22);
  param_1[0x1b] = &PTR_DAT_110c69d88;
  param_1[0x33] = &PTR_FUN_110c69e00;
  func_0x00010a004e5c(param_1 + 0x1e);
  func_0x00010a004e04(param_1 + 0x1c);
  *puVar1 = &PTR_FUN_110c699d0;
  *param_1 = &PTR_FUN_110c68030;
  param_1[3] = &PTR_DAT_110c68060;
  param_1[0x33] = &PTR_FUN_110c69ad0;
  FUN_10a0cfe2c(param_1 + 0x19);
  func_0x00010a1980a8(param_1 + 0x16);
  *puVar1 = &PTR_FUN_110c69c68;
  *param_1 = &PTR_FUN_110bb3b30;
  param_1[3] = &PTR_DAT_110bb3b60;
  param_1[0x33] = &PTR_DAT_110c69d38;
  func_0x00010a1f9d14(param_1 + 0x11);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac914a4; end: 10ac914bb;  */

void FUN_10ac914a4(long param_1)

{
  func_0x00010ac9194c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac914bc; end: 10ac914c3;  */

void FUN_10ac914bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c68d60;
  param_1[-3] = &PTR_FUN_110c68e40;
  *param_1 = &PTR_FUN_110c68e70;
  param_1[0x30] = &PTR_FUN_110c68f48;
  param_1[0x18] = &PTR_FUN_110c68ed0;
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    __ZdlPv(param_1[0x29]);
  }
  func_0x00010a0524e4(param_1 + 0x27);
  puStack_28 = param_1 + 0x24;
  FUN_10a26e8c0(&puStack_28);
  FUN_10aa3dd44(param_1 + 0x1f);
  param_1[0x18] = &PTR_DAT_110c69d88;
  param_1[0x30] = &PTR_FUN_110c69e00;
  func_0x00010a004e5c(param_1 + 0x1b);
  func_0x00010a004e04(param_1 + 0x19);
  *puVar1 = &PTR_FUN_110c699d0;
  param_1[-3] = &PTR_FUN_110c68030;
  *param_1 = &PTR_DAT_110c68060;
  param_1[0x30] = &PTR_FUN_110c69ad0;
  FUN_10a0cfe2c(param_1 + 0x16);
  func_0x00010a1980a8(param_1 + 0x13);
  *puVar1 = &PTR_FUN_110c69c68;
  param_1[-3] = &PTR_FUN_110bb3b30;
  *param_1 = &PTR_DAT_110bb3b60;
  param_1[0x30] = &PTR_DAT_110c69d38;
  func_0x00010a1f9d14(param_1 + 0xe);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac914c4; end: 10ac914db;  */

void FUN_10ac914c4(long param_1)

{
  func_0x00010ac9194c(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac914dc; end: 10ac914e3;  */

void FUN_10ac914dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x1d;
  *puVar1 = &PTR_FUN_110c68d60;
  param_1[-0x1b] = &PTR_FUN_110c68e40;
  param_1[-0x18] = &PTR_FUN_110c68e70;
  param_1[0x18] = &PTR_FUN_110c68f48;
  *param_1 = &PTR_FUN_110c68ed0;
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  func_0x00010a0524e4(param_1 + 0xf);
  puStack_28 = param_1 + 0xc;
  FUN_10a26e8c0(&puStack_28);
  FUN_10aa3dd44(param_1 + 7);
  *param_1 = &PTR_DAT_110c69d88;
  param_1[0x18] = &PTR_FUN_110c69e00;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_FUN_110c699d0;
  param_1[-0x1b] = &PTR_FUN_110c68030;
  param_1[-0x18] = &PTR_DAT_110c68060;
  param_1[0x18] = &PTR_FUN_110c69ad0;
  FUN_10a0cfe2c(param_1 + -2);
  func_0x00010a1980a8(param_1 + -5);
  *puVar1 = &PTR_FUN_110c69c68;
  param_1[-0x1b] = &PTR_FUN_110bb3b30;
  param_1[-0x18] = &PTR_DAT_110bb3b60;
  param_1[0x18] = &PTR_DAT_110c69d38;
  func_0x00010a1f9d14(param_1 + -10);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac914e4; end: 10ac914fb;  */

void FUN_10ac914e4(long param_1)

{
  func_0x00010ac9194c(param_1 + -0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac914fc; end: 10ac9150b;  */

void FUN_10ac914fc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c68d60;
  puVar1[2] = &PTR_FUN_110c68e40;
  puVar1[5] = &PTR_FUN_110c68e70;
  puVar1[0x35] = &PTR_FUN_110c68f48;
  puVar1[0x1d] = &PTR_FUN_110c68ed0;
  if (*(char *)((long)puVar1 + 0x187) < '\0') {
    __ZdlPv(puVar1[0x2e]);
  }
  func_0x00010a0524e4(puVar1 + 0x2c);
  puStack_28 = puVar1 + 0x29;
  FUN_10a26e8c0(&puStack_28);
  FUN_10aa3dd44(puVar1 + 0x24);
  puVar1[0x1d] = &PTR_DAT_110c69d88;
  puVar1[0x35] = &PTR_FUN_110c69e00;
  func_0x00010a004e5c(puVar1 + 0x20);
  func_0x00010a004e04(puVar1 + 0x1e);
  *puVar1 = &PTR_FUN_110c699d0;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x35] = &PTR_FUN_110c69ad0;
  FUN_10a0cfe2c(puVar1 + 0x1b);
  func_0x00010a1980a8(puVar1 + 0x18);
  *puVar1 = &PTR_FUN_110c69c68;
  puVar1[2] = &PTR_FUN_110bb3b30;
  puVar1[5] = &PTR_DAT_110bb3b60;
  puVar1[0x35] = &PTR_DAT_110c69d38;
  func_0x00010a1f9d14(puVar1 + 0x13);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10ac9150c; end: 10ac9153b;  */

void FUN_10ac9150c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010ac9194c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac9153c; end: 10ac9154f;  */

undefined8 * FUN_10ac9153c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [272];
  undefined1 auStack_198 [8];
  undefined **appuStack_190 [2];
  undefined1 auStack_180 [272];
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar2 = &PTR_DAT_110c683c8;
  puVar2[2] = &PTR_FUN_110c68510;
  puVar2[5] = &PTR_FUN_110c68540;
  puVar2[0x7b] = &PTR_FUN_110c68640;
  puVar5 = puVar2 + 0x15;
  *puVar5 = &PTR_FUN_110c68598;
  puVar2[0x5b] = &PTR_FUN_110c685b8;
  puVar2[0x60] = &PTR_FUN_110c685e0;
  func_0x00010ac951fc(puVar2 + 0x77);
  FUN_10a004978(puVar2 + 0x75);
  FUN_10a004978(puVar2 + 0x73);
  func_0x00010ac951a4(puVar2 + 0x71);
  func_0x00010a004e5c(puVar2 + 0x6f);
  func_0x00010a004e5c(puVar2 + 0x6d);
  FUN_10a05b1b0(puVar2 + 0x69);
  func_0x00010a004cfc(puVar2 + 0x66);
  func_0x00010a004cfc(puVar2 + 100);
  FUN_10a00dc2c(puVar2 + 0x5b);
  FUN_10a1e3810(puVar2 + 0x51);
  *puVar2 = &PTR_FUN_110c69060;
  puVar2[2] = &PTR_FUN_110bb3968;
  puVar2[5] = &PTR_DAT_110bb3998;
  puVar2[0x7b] = &PTR_DAT_110c691c0;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar2 + 0x4d);
  func_0x00010a042c64(puVar2 + 0x48);
  func_0x00010a0523dc(puVar2 + 0x45);
  if (*(char *)(puVar2 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar2 + 0x3a);
  }
  puVar2[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar2 = &PTR_DAT_110c69210;
  puVar2[2] = &PTR_FUN_110b9f848;
  puVar2[5] = &PTR_DAT_110b9f878;
  puVar2[0x7b] = &PTR_DAT_110c692e0;
  FUN_10a042dcc(puVar2 + 0x13);
  *puVar2 = &PTR_DAT_110c60a00;
  puVar2[2] = &PTR_DAT_110c60a88;
  puVar2[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar2 + 0xb);
  puVar6 = (undefined8 *)puVar2[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2b8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_190,auStack_2b8);
    _memcpy(auStack_180,auStack_2a8,0x110);
    appuStack_190[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_198,appuStack_190);
    __ZNSt13runtime_errorD2Ev(appuStack_190);
    func_0x000109d1b350(*puVar5,auStack_198);
    __ZNSt13exception_ptrD1Ev(auStack_198);
    __ZNSt13runtime_errorD2Ev(auStack_2b8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar2 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar2 + 3);
  if ((puVar2[0x12] != 0) && (lVar1 = *(long *)(puVar2[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)puVar2 + 0x8f) < '\0') {
    __ZdlPv(puVar2[0xf]);
  }
  appuStack_190[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_190);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar2[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar2[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar2 + 6);
  puVar2[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar2 + 3);
  return puVar2;
}



/* Entry: 10ac91550; end: 10ac91a5f;  */

undefined8 * FUN_10ac91550(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_DAT_110c683c8;
  param_1[2] = &PTR_FUN_110c68510;
  param_1[5] = &PTR_FUN_110c68540;
  param_1[0x7b] = &PTR_FUN_110c68640;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110c68598;
  param_1[0x5b] = &PTR_FUN_110c685b8;
  param_1[0x60] = &PTR_FUN_110c685e0;
  func_0x00010ac951fc(param_1 + 0x77);
  FUN_10a004978(param_1 + 0x75);
  FUN_10a004978(param_1 + 0x73);
  func_0x00010ac951a4(param_1 + 0x71);
  func_0x00010a004e5c(param_1 + 0x6f);
  func_0x00010a004e5c(param_1 + 0x6d);
  FUN_10a05b1b0(param_1 + 0x69);
  func_0x00010a004cfc(param_1 + 0x66);
  func_0x00010a004cfc(param_1 + 100);
  FUN_10a00dc2c(param_1 + 0x5b);
  FUN_10a1e3810(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c69060;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x7b] = &PTR_DAT_110c691c0;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110c69210;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x7b] = &PTR_DAT_110c692e0;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac91a60; end: 10ac91b1b;  */

void FUN_10ac91a60(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ac91b1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 3);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ac91b1c; end: 10ac91b83;  */

void FUN_10ac91b1c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10ac91b1c(plVar4,param_2);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  uVar15 = NEON_ucvtf((ulong)*(byte *)((long)plVar4 + 0x1c));
  *(undefined8 *)(extraout_x8 + 2) = uVar15;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10ac91b84; end: 10ac91c3f;  */

void FUN_10ac91b84(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ac91b1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 0x1c));
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ac91c40; end: 10ac91cfb;  */

void FUN_10ac91c40(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ac91b1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 0x1d));
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ac91cfc; end: 10ac91db7;  */

void FUN_10ac91cfc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ac91b1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ac91db8; end: 10ac91e77;  */

void FUN_10ac91db8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ac91b1c(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[5];
  lVar10 = param_2[6];
  *param_1 = 2;
  *(bool *)(param_1 + 2) = lVar5 != lVar10;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ac91e78; end: 10ac91f37;  */

void FUN_10ac91e78(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10ac91f38(param_2,param_3);
  FUN_10ac91fa0(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)((long)plVar4 + 0x1c) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ac91f38; end: 10ac91f9f;  */

void FUN_10ac91f38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a053854(param_1,lVar8);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar3 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0,puVar3);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10ac91f38(plVar4,uVar7);
  FUN_10ac92084(param_4);
  func_0x00010a068bd8(plVar4,puVar3);
  *(char *)((long)plVar6 + 0x1d) = (char)plVar4;
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_98 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_b8 = lVar8;
          lStack_b0 = lVar8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar14;
          func_0x00010988c1b8(&lStack_b8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10ac91fa0; end: 10ac91fc3;  */

void FUN_10ac91fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10ac91f38(plVar3,uVar6);
  FUN_10ac92084(param_4);
  func_0x00010a068bd8(plVar3,param_1);
  *(char *)((long)plVar5 + 0x1d) = (char)plVar3;
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10ac91fc4; end: 10ac92083;  */

void FUN_10ac91fc4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10ac91f38(param_2,param_3);
  FUN_10ac92084(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)((long)plVar4 + 0x1d) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ac92084; end: 10ac920a7;  */

void FUN_10ac92084(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar4 = (long *)0x1;
  uVar7 = 0;
  FUN_10a052ee0(1,0);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10ac91f38(plVar4,uVar7);
  FUN_10a05ed04(param_4);
  if (*param_1 == 3) {
    fVar1 = (float)*(double *)(param_1 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 2))) {
      fVar1 = 0.0;
    }
    if ((uint)ABS(fVar1) < 0x7f800000) {
      if (1.0 <= fVar1) {
        *(float *)(plVar4 + 4) = fVar1;
        *extraout_x8 = 0;
        plVar4 = plVar5 + 0x4b;
        lVar8 = plVar5[0x59];
        uVar9 = lVar8 - 1;
        plVar5[0x59] = uVar9;
        if (uVar9 < 8) {
          uVar9 = plVar4[lVar8 + 2];
          if (plVar5[0x5a] == uVar9) {
            return;
          }
        }
        else {
          uVar9 = *(ulong *)(plVar5[0x57] + -8);
          plVar5[0x57] = plVar5[0x57] + -8;
          if (plVar5[0x5a] == uVar9) {
            return;
          }
        }
        lVar8 = *plVar4;
        lVar13 = plVar5[0x4c];
        lVar11 = lVar13 - lVar8;
        uVar15 = lVar11 >> 4;
        if (uVar15 < uVar9) {
          uVar16 = uVar9 - uVar15;
          lVar14 = plVar5[0x4d];
          if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
            if (uVar9 >> 0x3c == 0) {
              uVar10 = lVar14 - lVar8 >> 3;
              if (uVar10 <= uVar9) {
                uVar10 = uVar9;
              }
              if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
                uVar10 = 0xfffffffffffffff;
              }
              plStack_78 = plVar4;
              if (uVar10 >> 0x3c == 0) {
                lVar3 = uVar10 << 4;
                __Znwm();
                lVar13 = lVar3 + lVar11;
                _bzero(lVar13,uVar16 * 0x10);
                lVar12 = lVar13 + uVar15 * -0x10;
                _memcpy(lVar12,lVar8,lVar11);
                *plVar4 = lVar12;
                plVar5[0x4c] = lVar13 + uVar16 * 0x10;
                plVar5[0x4d] = lVar3 + uVar10 * 0x10;
                lStack_98 = lVar8;
                lStack_90 = lVar8;
                lStack_88 = lVar8;
                lStack_80 = lVar14;
                func_0x00010988c1b8(&lStack_98);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar2)();
          }
          _bzero(lVar13,uVar16 * 0x10);
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
        }
        else if (uVar9 < uVar15) {
          lVar8 = lVar8 + uVar9 * 0x10;
          while (lVar13 != lVar8) {
            lVar13 = lVar13 + -0x10;
            func_0x00010988c204(lVar13);
          }
          plVar5[0x4c] = lVar8;
        }
code_r0x00010988c138:
        plVar5[0x5a] = uVar9;
        return;
      }
      puVar6 = &UNK_10f69ff57;
    }
    else {
      puVar6 = &UNK_10f69ff1d;
    }
    FUN_10a00946c(puVar6);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac921c0);
  (*pcVar2)();
}



/* Entry: 10ac920a8; end: 10ac921d3;  */

void FUN_10ac920a8(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10ac91f38(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 == 3) {
    fVar2 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar2 = 0.0;
    }
    if ((uint)ABS(fVar2) < 0x7f800000) {
      if (1.0 <= fVar2) {
        *(float *)(param_2 + 4) = fVar2;
        *param_1 = 0;
        plVar1 = plVar5 + 0x4b;
        lVar7 = plVar5[0x59];
        uVar8 = lVar7 - 1;
        plVar5[0x59] = uVar8;
        if (uVar8 < 8) {
          uVar8 = plVar1[lVar7 + 2];
          if (plVar5[0x5a] == uVar8) {
            return;
          }
        }
        else {
          uVar8 = *(ulong *)(plVar5[0x57] + -8);
          plVar5[0x57] = plVar5[0x57] + -8;
          if (plVar5[0x5a] == uVar8) {
            return;
          }
        }
        lVar7 = *plVar1;
        lVar12 = plVar5[0x4c];
        lVar10 = lVar12 - lVar7;
        uVar14 = lVar10 >> 4;
        if (uVar14 < uVar8) {
          uVar15 = uVar8 - uVar14;
          lVar13 = plVar5[0x4d];
          if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
            if (uVar8 >> 0x3c == 0) {
              uVar9 = lVar13 - lVar7 >> 3;
              if (uVar9 <= uVar8) {
                uVar9 = uVar8;
              }
              if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar1;
              if (uVar9 >> 0x3c == 0) {
                lVar4 = uVar9 << 4;
                __Znwm();
                lVar12 = lVar4 + lVar10;
                _bzero(lVar12,uVar15 * 0x10);
                lVar11 = lVar12 + uVar14 * -0x10;
                _memcpy(lVar11,lVar7,lVar10);
                *plVar1 = lVar11;
                plVar5[0x4c] = lVar12 + uVar15 * 0x10;
                plVar5[0x4d] = lVar4 + uVar9 * 0x10;
                lStack_88 = lVar7;
                lStack_80 = lVar7;
                lStack_78 = lVar7;
                lStack_70 = lVar13;
                func_0x00010988c1b8(&lStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar3)();
          }
          _bzero(lVar12,uVar15 * 0x10);
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
        }
        else if (uVar8 < uVar14) {
          lVar7 = lVar7 + uVar8 * 0x10;
          while (lVar12 != lVar7) {
            lVar12 = lVar12 + -0x10;
            func_0x00010988c204(lVar12);
          }
          plVar5[0x4c] = lVar7;
        }
code_r0x00010988c138:
        plVar5[0x5a] = uVar8;
        return;
      }
      puVar6 = &UNK_10f69ff57;
    }
    else {
      puVar6 = &UNK_10f69ff1d;
    }
    FUN_10a00946c(puVar6);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac921c0);
  (*pcVar3)();
}



/* Entry: 10ac921d4; end: 10ac923c7;  */

void FUN_10ac921d4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  float *in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  float *pfVar11;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10ac91f38(param_2,param_3);
  FUN_10ac923c8(param_5);
  FUN_10a36c768(&pfStack_68,param_2,param_4);
  pfVar1 = pfStack_68;
  if (*(int *)(param_4 + 0x10) == 3) {
    fVar18 = (float)*(double *)(param_4 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
      fVar18 = 0.0;
    }
    pfStack_68 = (float *)0x0;
    if ((uint)ABS(fVar18) < 0x7f800000) {
      if (pfVar1 != in_stack_ffffffffffffffa0) {
        pfVar10 = pfVar1;
        do {
          pfVar11 = pfVar10 + 1;
          puVar7 = &UNK_10f69ffc4;
          if ((0x7f7fffff < (uint)ABS(*pfVar10)) || (puVar7 = &UNK_10f6a0006, *pfVar10 < 0.0))
          goto LAB_10ac92364;
          pfVar10 = pfVar11;
        } while (pfVar11 != in_stack_ffffffffffffffa0);
      }
      if (plVar6[5] == 0) {
        plVar6[5] = (long)pfVar1;
        plVar6[6] = (long)in_stack_ffffffffffffffa0;
        plVar6[7] = in_stack_ffffffffffffffa8;
        *(float *)(plVar6 + 8) = fVar18;
      }
      else {
        plVar6[6] = plVar6[5];
        __ZdlPv();
        plVar6[5] = (long)pfVar1;
        plVar6[6] = (long)in_stack_ffffffffffffffa0;
        plVar6[7] = in_stack_ffffffffffffffa8;
        *(float *)(plVar6 + 8) = fVar18;
        if (pfStack_68 != (float *)0x0) {
          __ZdlPv();
        }
      }
      *param_1 = 0;
      pfVar1 = (float *)(plVar5 + 0x4b);
      uVar8 = plVar5[0x59] - 1;
      plVar5[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = *(ulong *)(pfVar1 + uVar8 * 2 + 6);
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      lVar2 = *(long *)pfVar1;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar2;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar8) {
        uVar17 = uVar8 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar15 - lVar2 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar2)) {
              uVar9 = 0xfffffffffffffff;
            }
            pfStack_68 = pfVar1;
            if (uVar9 >> 0x3c == 0) {
              lVar4 = uVar9 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar2,lVar12);
              *(long *)pfVar1 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar9 * 0x10;
              lStack_88 = lVar2;
              lStack_80 = lVar2;
              lStack_78 = lVar2;
              lStack_70 = lVar15;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar8 < uVar16) {
        lVar2 = lVar2 + uVar8 * 0x10;
        while (lVar14 != lVar2) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar2;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar8;
      return;
    }
    puVar7 = &UNK_10f69ff8f;
LAB_10ac92364:
    FUN_10a00946c(puVar7);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac9237c);
  (*pcVar3)();
}



/* Entry: 10ac923c8; end: 10ac923eb;  */

void FUN_10ac923c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar5 = (long *)0x2;
  uVar10 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  func_0x000109898688(plVar5,uVar10);
  if (plVar7 == (long *)0x0) {
    puVar9 = &UNK_10f68f52e;
  }
  else {
    plVar8 = plVar5;
    FUN_10a052c2c(plVar5,plVar7);
    if ((plVar8 != (long *)0x0) && (___dynamic_cast(), plVar8 != (long *)0x0)) {
      FUN_10a052e3c(param_4);
      FUN_10ac89548(&lStack_80,plVar8);
      plVar7 = plStack_78;
      lStack_80 = 0;
      plStack_78 = (long *)0x0;
      func_0x000109899de4(extraout_x8,plVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0,0);
      if (plVar7 != (long *)0x0) {
        plVar5 = plVar7 + 1;
        do {
          lVar13 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar5 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          lVar13 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plVar6 + 0x4b;
      lVar13 = plVar6[0x59];
      uVar11 = lVar13 - 1;
      plVar6[0x59] = uVar11;
      if (uVar11 < 8) {
        uVar11 = plVar5[lVar13 + 2];
        if (plVar6[0x5a] == uVar11) {
          return;
        }
      }
      else {
        uVar11 = *(ulong *)(plVar6[0x57] + -8);
        plVar6[0x57] = plVar6[0x57] + -8;
        if (plVar6[0x5a] == uVar11) {
          return;
        }
      }
      lVar13 = *plVar5;
      lVar16 = plVar6[0x4c];
      lVar14 = lVar16 - lVar13;
      uVar18 = lVar14 >> 4;
      if (uVar18 < uVar11) {
        uVar19 = uVar11 - uVar18;
        lVar17 = plVar6[0x4d];
        if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
          if (uVar11 >> 0x3c == 0) {
            uVar12 = lVar17 - lVar13 >> 3;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - lVar13)) {
              uVar12 = 0xfffffffffffffff;
            }
            plStack_78 = plVar5;
            if (uVar12 >> 0x3c == 0) {
              lVar4 = uVar12 << 4;
              __Znwm();
              lVar16 = lVar4 + lVar14;
              _bzero(lVar16,uVar19 * 0x10);
              lVar15 = lVar16 + uVar18 * -0x10;
              _memcpy(lVar15,lVar13,lVar14);
              *plVar5 = lVar15;
              plVar6[0x4c] = lVar16 + uVar19 * 0x10;
              plVar6[0x4d] = lVar4 + uVar12 * 0x10;
              lStack_98 = lVar13;
              lStack_90 = lVar13;
              lStack_88 = lVar13;
              lStack_80 = lVar17;
              func_0x00010988c1b8(&lStack_98);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar16,uVar19 * 0x10);
        plVar6[0x4c] = lVar16 + uVar19 * 0x10;
      }
      else if (uVar11 < uVar18) {
        lVar13 = lVar13 + uVar11 * 0x10;
        while (lVar16 != lVar13) {
          lVar16 = lVar16 + -0x10;
          func_0x00010988c204(lVar16);
        }
        plVar6[0x4c] = lVar13;
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar11;
      return;
    }
    puVar9 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar9);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac92584);
  (*pcVar3)();
}



/* Entry: 10ac923ec; end: 10ac92597;  */

void FUN_10ac923ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a052c2c(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10ac89548(&lStack_70,plVar7);
      plVar6 = plStack_68;
      lStack_70 = 0;
      plStack_68 = (long *)0x0;
      func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 1;
        do {
          lVar11 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 1;
        do {
          lVar11 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac92584);
  (*pcVar3)();
}



/* Entry: 10ac92598; end: 10ac92763;  */

void FUN_10ac92598(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  float fVar9;
  undefined **ppuStack_68;
  long *plStack_60;
  long *plStack_58;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a05ed04(param_5);
  if (*param_4 == 3) {
    fVar9 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar9 = 0.0;
    }
    if ((uint)ABS(fVar9) < 0x7f800000) {
      if (0.0 < fVar9) {
        plVar6 = (long *)0x60;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_110c69f60;
        plVar6[4] = 0;
        plVar6[5] = 0;
        plStack_60 = plVar6 + 3;
        *plStack_60 = (long)&PTR_FUN_110c682b8;
        *(float *)(plVar6 + 6) = fVar9;
        *(undefined2 *)((long)plVar6 + 0x34) = 0;
        *(undefined4 *)(plVar6 + 7) = 0x40800000;
        plVar6[9] = 0;
        plVar6[10] = 0;
        plVar6[8] = 0;
        *(undefined4 *)(plVar6 + 0xb) = 0;
        ppuStack_68 = &PTR_DAT_110c69018;
        plStack_58 = plVar6;
        func_0x000109899de4(param_1,param_2,&plStack_60,&ppuStack_68,0,0);
        plVar6 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar1 = plStack_58 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        func_0x00010988c170(plVar5 + 0x4b);
        return;
      }
      puVar7 = &UNK_10f69feed;
    }
    else {
      puVar7 = &UNK_10f69feba;
    }
    FUN_10a00946c(puVar7);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac92750);
  (*pcVar4)();
}



/* Entry: 10ac92764; end: 10ac92773;  */

void FUN_10ac92764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c69f60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac92774; end: 10ac92793;  */

void FUN_10ac92774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c69f60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac92794; end: 10ac927b3;  */

void FUN_10ac92794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ac9279c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ac927b4; end: 10ac927d3;  */

void FUN_10ac927b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c69fb0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac927d4; end: 10ac927e3;  */

void FUN_10ac927d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ac927dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ac927e4; end: 10ac928df;  */

undefined1  [16] FUN_10ac927e4(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6a290;
  puVar1 = &UNK_10f69fe75;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c6a290;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ac928e0; end: 10ac92933;  */

ulong FUN_10ac928e0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10ac92934,0);
  }
  return param_1;
}



/* Entry: 10ac92934; end: 10ac92a73;  */

void FUN_10ac92934(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10ac92a74(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x2f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[3],plVar5[4]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[4];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[3];
    in_stack_ffffffffffffffb0 = plVar5[5];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10ac92a74; end: 10ac92b2f;  */

undefined ** FUN_10ac92a74(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10ac92b30,0);
  }
  return ppuVar1;
}



/* Entry: 10ac92b30; end: 10ac92beb;  */

void FUN_10ac92b30(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ac92a74(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 6);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ac92bec; end: 10ac92c3f;  */

ulong FUN_10ac92bec(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10ac92c40,0);
  }
  return param_1;
}


