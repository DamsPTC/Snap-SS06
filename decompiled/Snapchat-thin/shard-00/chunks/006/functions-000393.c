/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008369b8; end: 1008369cb;  */

void FUN_1008369b8(void)

{
  FUN_10083698c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008369cc; end: 1008369d3;  */

void FUN_1008369cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010061db00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1008369d4; end: 100836a2b;  */

undefined8 * FUN_1008369d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11087fe28;
  FUN_1006038cc(param_1 + 0xb);
  func_0x00010061cd5c(param_1 + 9);
  (**(code **)param_1[4])();
  FUN_100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 100836a2c; end: 100836a43;  */

void FUN_100836a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010062a2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100836a44; end: 100836a7f;  */

long FUN_100836a44(long param_1)

{
  func_0x000100836a34(&PTR_DAT_110ccd610);
  FUN_100629f48();
  FUN_100558bb4(param_1 + 0x20);
  func_0x000107c60ca0();
  return param_1;
}



/* Entry: 100836a80; end: 100836a87;  */

void FUN_100836a80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100836a88; end: 100836abf;  */

void FUN_100836a88(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100603768();
  func_0x000107c60d88(param_1 + 8);
  if (*(long *)(unaff_x19 + 0x48) == unaff_x20) {
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 8);
  return;
}



/* Entry: 100836ac0; end: 100836b23;  */

undefined8 * FUN_100836ac0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11087ffd8;
  if (param_1[0x22] != 0) {
    FUN_100836a88(param_1[0x22],param_1 + 0x24);
  }
  FUN_100601aa4(param_1 + 99);
  FUN_100601c8c(param_1 + 0x5c);
  FUN_100836b24(param_1 + 0x24);
  func_0x00010060867c(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  FUN_100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 100836b24; end: 100836b27;  */

long FUN_100836b24(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000100834c7c();
  }
  (**(code **)(*plRam00000001136a2bc8 + 0x18))(plRam00000001136a2bc8,param_1);
  lStack_28 = param_1 + 0x198;
  FUN_1004b8838(&lStack_28);
  if (*(char *)(param_1 + 0x16f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x158));
  }
  FUN_1008379d0(param_1 + 0x108);
  FUN_1008379d0(param_1 + 0xd0);
  func_0x000100157e8c(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xc0));
  func_0x000100837c10(param_1 + 0xa0);
  func_0x000100837c68(param_1 + 0x90);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x78));
  }
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 0x18);
  FUN_100837cc8(param_1 + 8);
  return param_1;
}



/* Entry: 100836b28; end: 100836bfb;  */

long FUN_100836b28(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000100834c7c();
  }
  (**(code **)(*plRam00000001136a2bc8 + 0x18))(plRam00000001136a2bc8,param_1);
  lStack_28 = param_1 + 0x198;
  FUN_1004b8838(&lStack_28);
  if (*(char *)(param_1 + 0x16f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x158));
  }
  FUN_1008379d0(param_1 + 0x108);
  FUN_1008379d0(param_1 + 0xd0);
  func_0x000100157e8c(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xc0));
  func_0x000100837c10(param_1 + 0xa0);
  func_0x000100837c68(param_1 + 0x90);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x78));
  }
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 0x18);
  FUN_100837cc8(param_1 + 8);
  return param_1;
}



/* Entry: 100836bfc; end: 100836c9f;  */

void FUN_100836bfc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    lVar2 = *(long *)(*plVar3 + 0x10);
    FUN_100460448(lVar2);
    if (*(long *)(lVar2 + 0x40) == param_1) {
      lVar1 = 0;
      if (plVar3[1] != param_1) {
        lVar1 = plVar3[1];
      }
      *(long *)(lVar2 + 0x40) = lVar1;
    }
    lVar1 = plVar3[2];
    *(long *)(*(long *)(lVar1 + 0x18) + 8) = plVar3[1];
    *(long *)(*(long *)(plVar3[1] + 0x18) + 0x10) = lVar1;
    func_0x000100466b80(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100836c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar3 + 0x68))((long *)*plVar3,&UNK_10f47d354);
    return;
  }
  return;
}



/* Entry: 100836ca0; end: 100836ca3;  */

void FUN_100836ca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100836d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a2078 + 0x20))();
  return;
}



/* Entry: 100836ca4; end: 100836d4f;  */

void FUN_100836ca4(long *param_1)

{
  long *plVar1;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  plVar1 = param_1;
  FUN_100836ca0();
  if ((((ulong)plVar1 & 1) == 0) &&
     (func_0x000100460dc4(), (*(byte *)(*plVar1 + 0x28) >> 1 & 1) != 0)) {
    uStack_28 = 0;
    FUN_1004c1168(param_1 + 1,&uStack_28,0,0);
    if ((uStack_28 & 1) == 0) {
      return;
    }
    FUN_10084dad0();
    return;
  }
  uStack_38 = 0;
  FUN_1004bd7e8(&uStack_29,param_1 + 1,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100836d50; end: 100836d67;  */

void FUN_100836d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100836d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lRam00000001136a2078 + 0x20))();
  return;
}



/* Entry: 100836d68; end: 100836f03;  */

void FUN_100836d68(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  int *piVar6;
  ulong uVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  FUN_10083228c(param_2 + 0x5b8);
  FUN_1004e2b40(param_2 + 0x7a8);
  FUN_10083228c(param_2 + 0x7c0);
  FUN_1004e2b40(param_2 + 0x9b0);
  FUN_100614b50(param_2 + 0xbb0);
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_1005a5f48();
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    FUN_100832ca0();
  }
  plVar1 = (long *)(param_2 + 0xdc0);
  do {
    while (*plVar1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = *(ulong *)(param_2 + 0xdb8);
  if ((uVar7 & 1) == 0) {
    *plVar1 = 0;
  }
  else {
    piVar6 = (int *)(uVar7 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *plVar1 = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = uVar7;
  uStack_28 = uVar7;
  FUN_100831658(&uStack_30,*(undefined8 *)(param_2 + 0x20),param_2 + 0xa20,0,0,param_2 + 0xa28);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  uStack_38 = 0;
  puVar5 = &uStack_38;
  FUN_100831aec(param_2 + 0xdb8);
  uVar4 = uStack_38;
  if ((uStack_38 & 1) != 0) {
    FUN_10084dad0();
  }
  func_0x000100467750();
  FUN_100836f04(param_1,*(undefined8 *)(param_2 + 0xb8));
  *(ulong *)(param_2 + 0xa10) = uVar4;
  *(ulong **)(param_2 + 0xa18) = puVar5;
  *(code **)(param_2 + 0xd88) = FUN_100837340;
  *(long *)(param_2 + 0xd90) = param_2;
  *(undefined8 *)(param_2 + 0xd98) = 0;
  FUN_100836fa4(param_2 + 0xdd0,param_2 + 0x9e0,param_2 + 0xd80);
  if ((uVar7 & 1) != 0) {
    FUN_10084dad0(uVar7);
  }
  return;
}



/* Entry: 100836f04; end: 100836f67;  */

/* WARNING: Removing unreachable block (ram,0x0001004677a4) */
/* WARNING: Removing unreachable block (ram,0x0001004677a8) */
/* WARNING: Removing unreachable block (ram,0x00010046786c) */
/* WARNING: Removing unreachable block (ram,0x0001004678e0) */
/* WARNING: Removing unreachable block (ram,0x000100467884) */
/* WARNING: Removing unreachable block (ram,0x0001004678ac) */
/* WARNING: Removing unreachable block (ram,0x0001004678b0) */
/* WARNING: Removing unreachable block (ram,0x0001004678cc) */
/* WARNING: Removing unreachable block (ram,0x0001004678b4) */
/* WARNING: Removing unreachable block (ram,0x0001004678bc) */
/* WARNING: Removing unreachable block (ram,0x0001004678c0) */
/* WARNING: Removing unreachable block (ram,0x0001004678d4) */
/* WARNING: Removing unreachable block (ram,0x0001004678c4) */
/* WARNING: Removing unreachable block (ram,0x0001004678d8) */

undefined1  [16] FUN_100836f04(double param_1,double param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  lVar3 = (long)(param_1 / 1000000.0);
  uVar8 = (ulong)((param_1 - (double)(lVar3 * 1000000)) * 1000.0);
  uVar5 = (ulong)(param_2 / 1000000.0);
  lVar7 = 3;
  iVar6 = (int)(long)((param_2 - (double)(long)(uVar5 * 1000000)) * 1000.0);
  iVar4 = (int)uVar8;
  uVar2 = iVar4 - iVar6;
  uVar1 = uVar2 + 1000000000;
  if (iVar6 <= iVar4) {
    uVar1 = uVar2;
  }
  uVar8 = uVar8 & 0xffffffff;
  if (1 < lVar3 + 0x8000000000000001U) {
    if ((uVar5 == 0x8000000000000000) ||
       (((long)uVar5 < 1 && ((long)(uVar5 + 0x7fffffffffffffff) <= lVar3)))) {
      lVar7 = 1;
      lVar3 = 0x7fffffffffffffff;
      uVar8 = 0;
    }
    else if (((uVar5 == 0x7fffffffffffffff) ||
             ((-1 < (long)uVar5 && (lVar3 <= (long)(uVar5 | 0x8000000000000000))))) ||
            (((int)uVar2 < 0 && (lVar3 - uVar5 == -0x7fffffffffffffff)))) {
      lVar7 = 1;
      lVar3 = -0x8000000000000000;
      uVar8 = 0;
    }
    else {
      lVar3 = (lVar3 - uVar5) - (ulong)(uVar2 >> 0x1f);
      uVar8 = (ulong)uVar1;
    }
  }
  auVar9._8_8_ = uVar8 | lVar7 << 0x20;
  auVar9._0_8_ = lVar3;
  return auVar9;
}



/* Entry: 100836f68; end: 100836fa3;  */

void FUN_100836f68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(ulong *)(lVar1 + 0x78) & 1) != 0) {
    FUN_10084dad0();
  }
  if ((*(ulong *)(lVar1 + 0x50) & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100836fa4; end: 100836ffb;  */

void FUN_100836fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    plVar3 = (long *)(param_1 + 0x30);
    do {
      lVar2 = lVar2 + -1;
      uVar1 = param_3;
      if (lVar2 != 0) {
        uVar1 = 0;
      }
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,uVar1);
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 100836ffc; end: 100837003;  */

long FUN_100836ffc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x18) != 0) {
    FUN_1005a5960(*(long *)(lVar1 + 0x18) + 8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  return lVar1;
}



/* Entry: 100837004; end: 10083703b;  */

long FUN_100837004(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1005a5960(*(long *)(param_1 + 0x18) + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10083703c; end: 10083708b;  */

long * FUN_10083703c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  puVar2 = (undefined8 *)plVar3[7];
  plVar3[7] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  (**(code **)(*plVar3 + 8))();
  if (param_3 == 0) {
    return plVar3;
  }
  func_0x000107c2c238();
  *plVar3 = (long)&PTR_DAT_1107c4cb8;
  plVar3[1] = (long)&PTR_DAT_1107c4d10;
  if (plVar3[0x16] == 0) {
    if ((plVar3[0x14] & 1U) != 0) {
      FUN_10084dad0();
    }
    FUN_1006153ac(plVar3 + 0xc);
    (**(code **)(*(long *)plVar3[0xb] + 8))();
    *plVar3 = (long)&PTR_DAT_1107c4c40;
    plVar3[1] = (long)&PTR_DAT_1107c4c98;
    return plVar3;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 10083708c; end: 10083708f;  */

undefined8 * FUN_10083708c(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_DAT_1107c4cb8;
  param_1[1] = &PTR_DAT_1107c4d10;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_10084dad0();
    }
    FUN_1006153ac(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_DAT_1107c4c40;
    param_1[1] = &PTR_DAT_1107c4c98;
    return param_1;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 100837090; end: 10083713f;  */

undefined8 * FUN_100837090(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_DAT_1107c4cb8;
  param_1[1] = &PTR_DAT_1107c4d10;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_10084dad0();
    }
    FUN_1006153ac(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_DAT_1107c4c40;
    param_1[1] = &PTR_DAT_1107c4c98;
    return param_1;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 100837140; end: 10083717b;  */

void FUN_100837140(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(ulong *)(lVar1 + 0xb8) & 1) != 0) {
    FUN_10084dad0();
  }
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 10083717c; end: 10083719f;  */

void FUN_10083717c(long param_1)

{
  if ((*(ulong *)(*(long *)(param_1 + 0x10) + 0x10) & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1008371a0; end: 1008371bb;  */

void FUN_1008371a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008371b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x40))
            ((long *)**(undefined8 **)(param_1 + 8),*(long *)(param_1 + 0x10) + 0x200);
  return;
}



/* Entry: 1008371bc; end: 100837267;  */

void FUN_1008371bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_2 + 0x78) != 0 && *(long *)(param_2 + 0x78) != param_2 + 0x91) {
    FUN_100460314();
  }
  *(undefined8 *)(param_2 + 0x78) = 0;
  FUN_1004e2bc8(param_2 + 0x3e0);
  FUN_1004e2bc8(param_2 + 0x1d0);
  FUN_1008301a4(param_2 + 0xa8);
  if ((*(ulong *)(param_2 + 0x70) & 1) != 0) {
    FUN_10084dad0();
  }
  uStack_30 = 0;
  FUN_1004bd7e8(&uStack_21,param_3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 100837268; end: 10083733f;  */

long FUN_100837268(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    pcVar5 = *(code **)(param_1 + lVar6 + 0xa40);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(param_1 + lVar6 + 0xa38));
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  FUN_100460314(*(undefined8 *)(param_1 + 0xa28));
  FUN_1008373c8(param_1 + 0xdb8);
  FUN_1008373f8(param_1 + 0xbb0);
  FUN_1008301a4(param_1 + 0xa88);
  FUN_1004e2bc8(param_1 + 0x7c0);
  FUN_1004e2bc8(param_1 + 0x5b8);
  FUN_1004e2bc8(param_1 + 0x3b0);
  FUN_1004e2bc8(param_1 + 0x1a8);
  if ((*(ulong *)(param_1 + 0x198) & 1) != 0) {
    FUN_10084dad0();
  }
  plVar4 = *(long **)(param_1 + 0xb0);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_10083742c(param_1 + 0x38);
  return param_1;
}



/* Entry: 100837340; end: 1008373c7;  */

void FUN_100837340(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  plVar5 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  FUN_100837268();
  func_0x000100837538(uVar6);
  FUN_1008377fc(plVar5,uVar6);
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
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008373ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 1008373c8; end: 1008373f7;  */

ulong * FUN_1008373c8(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1008373f8; end: 10083742b;  */

long FUN_1008373f8(long param_1)

{
  if (*(char *)(param_1 + 0x128) != '\0') {
    FUN_1008301a4(param_1);
  }
  return param_1;
}



/* Entry: 10083742c; end: 10083742f;  */

long FUN_10083742c(long param_1)

{
  if ((*(ulong *)(param_1 + 0x58) & 1) != 0) {
    func_0x000104ab6b68(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe);
  }
  FUN_10083746c(param_1 + 8);
  return param_1;
}



/* Entry: 100837430; end: 10083746b;  */

long FUN_100837430(long param_1)

{
  if ((*(ulong *)(param_1 + 0x58) & 1) != 0) {
    func_0x000104ab6b68(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffe);
  }
  FUN_10083746c(param_1 + 8);
  return param_1;
}



/* Entry: 10083746c; end: 1008374e3;  */

void FUN_10083746c(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 + 9 == (long *)*param_1) {
    if ((long *)param_1[8] == (long *)*param_1) {
      return;
    }
    uVar2 = 0x2d;
  }
  else {
    uVar2 = 0x2c;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/mpscq.h"
                ,uVar2,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008374e0);
  (*pcVar1)();
}



/* Entry: 1008374e4; end: 10083757f;  */

void FUN_1008374e4(long param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  puVar3 = (ulong *)(param_1 + 0x28);
  do {
    uVar12 = *puVar3;
    uVar4 = uVar12 + param_2;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar8) {
      *puVar3 = uVar4;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (0x100000 < uVar4) {
    func_0x000104acb86c(param_1);
  }
  if (uVar12 == 0) {
    pbVar1 = (byte *)(param_1 + 0x38);
    do {
      bVar6 = *pbVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar8) {
        *pbVar1 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((bVar6 & 1) == 0) {
      FUN_100460448(param_1 + 0x40);
      if (*(char *)(param_1 + 0x80) == '\0') {
        FUN_1004bc2ac(&uStack_88,param_1 + 8);
        plVar2 = plStack_80;
        if (plStack_80 == (long *)0x0) {
          *pbVar1 = 1;
        }
        else {
          plVar5 = plStack_80 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar8) {
              *plVar5 = *plVar5 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          *pbVar1 = 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar8) {
              *plVar5 = *plVar5 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lVar13 = *(long *)(param_1 + 0x18);
        plVar9 = (long *)0x18;
        func_0x000107c60e20();
        plVar5 = *(long **)(lVar13 + 0x20);
        lVar11 = *(long *)(lVar13 + 0x28);
        if (lVar11 != 0) {
          plVar14 = (long *)(lVar11 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar8) {
              *plVar14 = *plVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plVar14 = plVar9 + 1;
        *plVar14 = 1;
        *plVar9 = (long)&PTR_SUB_1107c5d60;
        puVar10 = (undefined8 *)0x28;
        plStack_70 = plVar5;
        lStack_68 = lVar11;
        func_0x000107c60e20();
        *puVar10 = &PTR_DAT_1107c5ea8;
        puVar10[1] = plVar5;
        puVar10[2] = lVar11;
        puVar10[3] = uStack_88;
        puVar10[4] = plVar2;
        plVar9[2] = (long)puVar10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = *plVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plStack_78 = plVar9;
        plStack_70 = plVar9;
        FUN_1004bc2ec(lVar13 + 0x20,&plStack_70);
        if (plStack_70 != (long *)0x0) {
          plVar5 = plStack_70 + 1;
          do {
            lVar11 = *plVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar8) {
              *plVar5 = lVar11 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plStack_70 + 0x10))();
          }
        }
        FUN_1004bc3ac(param_1 + 0x88,plStack_78);
        if (plVar2 != (long *)0x0) {
          func_0x000107c60d68(plVar2);
        }
        if (plStack_80 != (long *)0x0) {
          plVar2 = plStack_80 + 1;
          do {
            lVar11 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar11 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            func_0x000107c60d68(plStack_80);
          }
        }
      }
      func_0x000100466b80(param_1 + 0x40);
    }
    return;
  }
  return;
}



/* Entry: 100837580; end: 100837587;  */

void FUN_100837580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + -8));
  return;
}



/* Entry: 100837588; end: 1008375c7;  */

long FUN_100837588(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    FUN_100837580();
  }
  return param_1;
}



/* Entry: 1008375c8; end: 10083760f;  */

void FUN_1008375c8(long param_1)

{
  code *extraout_x8;
  
  func_0x0001008368fc(**(undefined8 **)(param_1 + 0x10),*(undefined8 **)(param_1 + 0x10) + 2);
  (*extraout_x8)();
  func_0x000100838724();
  return;
}



/* Entry: 100837610; end: 1008376a7;  */

void FUN_100837610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1008377cc(param_2);
  func_0x000107c61180();
  FUN_100837848(param_3);
  func_0x000107c61180();
  func_0x000107c4dc00(uVar2);
  FUN_10083871c();
  func_0x00010062632c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1008376a8; end: 1008376ff;  */

void FUN_1008376a8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) &&
     (func_0x000107c60e58(lVar1,&PTR_DAT_1107edf90,&PTR_DAT_110d9ebb8,0), lVar1 != 0)) {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 100837700; end: 1008377cb;  */

void FUN_100837700(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long alStack_30 [2];
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1008376a8(alStack_30,&uStack_40);
  FUN_1000ff1ac(&uStack_40);
  if (alStack_30[0] != 0) {
    uVar5 = *(undefined8 *)(alStack_30[0] + 8);
    func_0x000107c61174(uVar5);
    FUN_1000ff228(alStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  uVar5 = 0x10;
  func_0x000107c60e30(0x10);
  func_0x00010527a174();
  func_0x000107c60e54(uVar5,PTR___ZTISt16invalid_argument_110352248,
                      PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008377ac);
  (*pcVar4)();
}



/* Entry: 1008377cc; end: 1008377fb;  */

void FUN_1008377cc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_100837700();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100837848; end: 100837877;  */

void FUN_100837848(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c2c4b4();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100837878; end: 10083787b;  */

void FUN_100837878(void)

{
  return;
}



/* Entry: 10083787c; end: 1008378df;  */

undefined8 * FUN_10083787c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccda90;
  func_0x0001004699a0(param_1 + 0x19);
  func_0x000107c60ca0(param_1 + 0x15);
  func_0x000107c60ca0(param_1 + 0xf);
  func_0x000107c60ca0(param_1 + 9);
  func_0x000107c60ca0(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  FUN_100837900(param_1 + 1);
  return param_1;
}



/* Entry: 1008378e0; end: 1008378f3;  */

void FUN_1008378e0(void)

{
  FUN_10083787c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008378f4; end: 1008378ff;  */

void FUN_1008378f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008378fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 100837900; end: 10083795b;  */

long * FUN_100837900(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1008378f4();
  }
  return param_1;
}



/* Entry: 10083795c; end: 10083796f;  */

void FUN_10083795c(void)

{
  func_0x00010083792c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100837970; end: 1008379bf;  */

undefined8 * FUN_100837970(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccdb78;
  FUN_1001148fc(param_1 + 0x10);
  FUN_1001148fc(param_1 + 0xb);
  func_0x000107c60ca0(param_1 + 8);
  FUN_1008379c0();
  func_0x000107c60ca0(param_1 + 2);
  return param_1;
}



/* Entry: 1008379c0; end: 1008379cf;  */

void FUN_1008379c0(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x19 + 0x28);
  return;
}



/* Entry: 1008379d0; end: 100837a1b;  */

long FUN_1008379d0(long param_1)

{
  (**(code **)(*plRam0000000113815c70 + 0x1a8))(plRam0000000113815c70,param_1 + 8);
  FUN_100837a24(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 100837a1c; end: 100837a23;  */

void FUN_100837a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100837a24; end: 100837a63;  */

void FUN_100837a24(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_100837a24(param_1,*param_2);
    FUN_100837a24(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 100837a64; end: 100837bcb; -[SCNGrpcUnaryEventHandlerImpl onEvent:status:] */

/* WARNING: Possible PIC construction at 0x000100837be8: Changing call to branch */

void FUN_100837a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_4 == (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4e380(uVar5);
    func_0x000107c61180();
    puVar4 = (undefined *)0x0;
    func_0x000107c61174(0);
  }
  else {
    func_0x000107c5bd10(param_4);
    puVar1 = param_4;
    func_0x000107c42a50();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c61180();
    func_0x000107c42a58(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    uVar5 = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),uVar5,puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
  if (*(char *)((long)param_4 + 0x2f) < '\0') {
    uVar5 = param_4[3];
  }
  else {
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      return;
    }
    uVar5 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar5);
  return;
}



/* Entry: 100837bcc; end: 100837cbf;  */

/* WARNING: Possible PIC construction at 0x000100837be8: Changing call to branch */

void FUN_100837bcc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    uVar1 = param_1[3];
  }
  else {
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      return;
    }
    uVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 100837cc0; end: 100837cc7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100837cc0(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  int *piVar6;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong auStack_78 [4];
  undefined1 uStack_51;
  ulong uStack_50;
  ulong *puStack_48;
  
  puVar5 = param_2;
  func_0x000107c61258();
  if ((int)param_2 == 0) {
    return;
  }
  func_0x000107c2c130();
  FUN_100460448(param_2 + 2);
  if (*puVar5 == 0) {
    if ((char)param_2[10] == '\0') {
      uVar4 = param_2[0xb];
      if (uVar4 == 0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                      ,0xc1,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005a6158);
        (*pcVar3)();
      }
      *(ulong *)param_2[0x11] = uVar4;
      param_2[0xb] = 0;
      if ((char)param_2[0x12] != '\0') {
        FUN_1005a6208(uVar4,param_2[0xe]);
      }
      uStack_88 = 0;
      FUN_1005a6218(param_2,&uStack_88);
      goto LAB_1005a60e0;
    }
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_78[1] = 0;
    func_0x000104ab5920(&uStack_50,2,"tcp handshaker shutdown",0x17,&uStack_51,auStack_78 + 1);
    uVar4 = *puVar5;
    if (uStack_50 == uVar4) {
LAB_1005a5fec:
      if ((uVar4 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      *puVar5 = uStack_50;
      uStack_50 = 0x36;
      if ((uVar4 & 1) != 0) {
        FUN_10084dad0();
        uVar4 = uStack_50;
        goto LAB_1005a5fec;
      }
    }
    puStack_48 = auStack_78 + 1;
    func_0x000100482b64(&puStack_48);
  }
  uVar4 = param_2[0xb];
  if (uVar4 != 0) {
    auStack_78[0] = *puVar5;
    if ((auStack_78[0] & 1) != 0) {
      piVar6 = (int *)(auStack_78[0] - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104aba5c4(uVar4,auStack_78);
    if ((auStack_78[0] & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if ((char)param_2[10] == '\0') {
    uVar4 = param_2[0x11];
    param_2[0xc] = *(ulong *)(uVar4 + 0x10);
    *(undefined8 *)(uVar4 + 0x10) = 0;
    FUN_10048650c(*(undefined8 *)(uVar4 + 8));
    *(undefined8 *)(param_2[0x11] + 8) = 0;
    *(undefined1 *)(param_2 + 10) = 1;
    uVar4 = *puVar5;
    if ((uVar4 & 1) != 0) {
      piVar6 = (int *)(uVar4 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_80 = uVar4;
    FUN_1005a6218(param_2,&uStack_80);
    if ((uVar4 & 1) != 0) {
      FUN_10084dad0(uVar4);
    }
  }
LAB_1005a60e0:
  func_0x000100466b80(param_2 + 2);
  puVar5 = param_2 + 1;
  do {
    uVar4 = *puVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar2) {
      *puVar5 = uVar4 - 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (uVar4 - 1 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



/* Entry: 100837cc8; end: 100837d1f;  */

long FUN_100837cc8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 100837d20; end: 100837d2b;  */

void FUN_100837d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x20);
  return;
}



/* Entry: 100837d2c; end: 100837d5b;  */

undefined8 * FUN_100837d2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110880018;
  FUN_100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 100837d5c; end: 100837ecb;  */

/* WARNING: Possible PIC construction at 0x000100837dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100837de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100837e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100837e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100837eac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100837e54) */
/* WARNING: Removing unreachable block (ram,0x000100837dec) */
/* WARNING: Removing unreachable block (ram,0x000100837eb0) */
/* WARNING: Removing unreachable block (ram,0x000100837dd4) */
/* WARNING: Removing unreachable block (ram,0x000100837e84) */

void FUN_100837d5c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x000107c61174(param_2);
    func_0x000107c51804(puVar1);
    func_0x000107c61180();
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
    func_0x000107c61174(param_2);
    func_0x000107c3cf64(uVar2);
    func_0x000107c61180();
    func_0x000107c4d890(param_2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100837ecc; end: 100837f53; -[SCFideliusServiceCoordinator ackRetryService:] */

void FUN_100837ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c3cf60();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x10;
    func_0x000107c61148(lVar1);
    func_0x000107c49ab0();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c3cf60(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100837f54; end: 10083800b; -[SCFideliusAckRetryService processRetriesV2:source:] */

void FUN_100837f54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100838204;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_68);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10083800c; end: 100838203; -[SCFideliusLogger logPollRecrypt:source:] */

void FUN_10083800c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c();
  func_0x000107c61180();
  puVar2 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    func_0x000107c61180();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac();
  func_0x000107c61180();
  func_0x000107c3d8e8(param_1);
  func_0x000107c61170(puVar3);
  if (param_4 == (undefined *)0x0) {
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126c04d8;
  func_0x000107c4eb1c();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c1ec(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  puVar1 = puVar3;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar8 = uVar4;
  func_0x000107c4338c();
  func_0x000107c61180();
  func_0x000107c45318();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  lVar14 = *(long *)(param_4 + 0x20);
  func_0x000107c61174(lVar14);
  lVar11 = lVar14;
  func_0x000107c4080c();
  lVar9 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        func_0x000107c61128(lVar14);
      }
      lVar15 = *(long *)(lVar13 * 8);
      lVar5 = lVar15;
      func_0x000107c496a8();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x000107c3d798(puVar1);
        func_0x000107c4fa8c();
        if ((int)lVar15 != 0) {
          lVar15 = lVar5;
          func_0x000107c5d984();
          func_0x000107c61180();
          func_0x000107c61170();
          if (lVar15 != 0) {
            lVar15 = lVar5;
            func_0x000107c5d984(lVar5);
            func_0x000107c61180();
            lVar6 = lVar15;
            func_0x000107c44e64();
            lVar7 = lVar15;
            func_0x000107c4c0fc(lVar15);
            func_0x000100c4a928(lVar6,lVar7);
            func_0x000107c61180();
            lVar7 = lVar6;
            func_0x000107c4c10c();
            func_0x000107c61180();
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar15);
            uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x18);
            func_0x000107c43998(uVar8);
            func_0x000107c61180();
            func_0x000107c416a0();
            func_0x000107c61170(uVar8);
            func_0x000107c61170(lVar7);
          }
        }
      }
      func_0x000107c61170(lVar5);
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar13);
    lVar11 = lVar14;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar14);
  lVar11 = *(long *)(param_4 + 0x28) + 8;
  func_0x000107c61148(lVar11);
  lVar9 = lVar11;
  func_0x000107c52018();
  func_0x000107c61180();
  lVar14 = lVar9;
  func_0x000107c44ffc();
  func_0x000107c61180();
  func_0x000107c4f2b8();
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar11);
  puVar2 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar2);
  lVar14 = *(long *)(param_4 + 0x20);
  func_0x000107c61174(lVar14);
  lVar11 = lVar14;
  func_0x000107c4080c();
  lVar9 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        func_0x000107c61128(lVar14);
      }
      lVar15 = *(long *)(lVar13 * 8);
      func_0x000107c4fa8c();
      lVar5 = lVar15;
      func_0x000107c496a8();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c5d984(lVar5);
        func_0x000107c61180();
        lVar7 = lVar6;
        func_0x000107c44e64();
        lVar10 = lVar6;
        func_0x000107c4c0fc(lVar6);
        func_0x000100c4a928(lVar7,lVar10);
        func_0x000107c61180();
        lVar10 = lVar7;
        func_0x000107c4c10c();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar6);
        lVar6 = lVar15;
        func_0x000107c4cdc8();
        func_0x000107c61180();
        lVar7 = lVar6;
        func_0x000107c40808();
        func_0x000107c61170(lVar6);
        if (lVar7 != 0) {
          uVar8 = *(undefined8 *)(param_4 + 0x28);
          lVar6 = lVar15;
          func_0x000107c4cdc8(lVar15);
          func_0x000107c61180();
          lVar7 = lVar15;
          func_0x000107c496a8(lVar15);
          func_0x000107c61180();
          func_0x000107c3c188(uVar8);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar6);
        }
        lVar6 = lVar15;
        func_0x000107c3e25c();
        func_0x000107c61180();
        lVar7 = lVar6;
        func_0x000107c40808();
        func_0x000107c61170(lVar6);
        if (lVar7 != 0) {
          uVar8 = *(undefined8 *)(param_4 + 0x28);
          lVar6 = lVar15;
          func_0x000107c3e25c(lVar15);
          func_0x000107c61180();
          func_0x000107c496a8(lVar15);
          func_0x000107c61180();
          func_0x000107c3c18c(uVar8);
          func_0x000107c61170(lVar15);
          func_0x000107c61170(lVar6);
        }
        func_0x000107c61170(lVar10);
      }
      func_0x000107c61170(lVar5);
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar13);
    lVar11 = lVar14;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar14);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    func_0x000107c60e78();
    func_0x000107c610f4(PTR_PTR_1126c04d8);
    func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 100838204; end: 1008386ef;  */

void FUN_100838204(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  lVar12 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar12);
  lVar2 = lVar12;
  func_0x000107c4080c();
  lVar7 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        func_0x000107c61128(lVar12);
      }
      lVar13 = *(long *)(lVar11 * 8);
      lVar3 = lVar13;
      func_0x000107c496a8();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c3d798(puVar1);
        func_0x000107c4fa8c();
        if ((int)lVar13 != 0) {
          lVar13 = lVar3;
          func_0x000107c5d984();
          func_0x000107c61180();
          func_0x000107c61170();
          if (lVar13 != 0) {
            lVar13 = lVar3;
            func_0x000107c5d984(lVar3);
            func_0x000107c61180();
            lVar4 = lVar13;
            func_0x000107c44e64();
            lVar5 = lVar13;
            func_0x000107c4c0fc(lVar13);
            func_0x000100c4a928(lVar4,lVar5);
            func_0x000107c61180();
            lVar5 = lVar4;
            func_0x000107c4c10c();
            func_0x000107c61180();
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar13);
            uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
            func_0x000107c43998(uVar6);
            func_0x000107c61180();
            func_0x000107c416a0();
            func_0x000107c61170(uVar6);
            func_0x000107c61170(lVar5);
          }
        }
      }
      func_0x000107c61170(lVar3);
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar12;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar12);
  lVar2 = *(long *)(param_1 + 0x28) + 8;
  func_0x000107c61148(lVar2);
  lVar7 = lVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  lVar12 = lVar7;
  func_0x000107c44ffc();
  func_0x000107c61180();
  func_0x000107c4f2b8();
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar2);
  puVar8 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar8);
  lVar12 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar12);
  lVar2 = lVar12;
  func_0x000107c4080c();
  lVar7 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        func_0x000107c61128(lVar12);
      }
      lVar13 = *(long *)(lVar11 * 8);
      func_0x000107c4fa8c();
      lVar3 = lVar13;
      func_0x000107c496a8();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5d984(lVar3);
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c44e64();
        lVar9 = lVar4;
        func_0x000107c4c0fc(lVar4);
        func_0x000100c4a928(lVar5,lVar9);
        func_0x000107c61180();
        lVar9 = lVar5;
        func_0x000107c4c10c();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        lVar4 = lVar13;
        func_0x000107c4cdc8();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c40808();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          lVar4 = lVar13;
          func_0x000107c4cdc8(lVar13);
          func_0x000107c61180();
          lVar5 = lVar13;
          func_0x000107c496a8(lVar13);
          func_0x000107c61180();
          func_0x000107c3c188(uVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar4);
        }
        lVar4 = lVar13;
        func_0x000107c3e25c();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c40808();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          lVar4 = lVar13;
          func_0x000107c3e25c(lVar13);
          func_0x000107c61180();
          func_0x000107c496a8(lVar13);
          func_0x000107c61180();
          func_0x000107c3c18c(uVar6);
          func_0x000107c61170(lVar13);
          func_0x000107c61170(lVar4);
        }
        func_0x000107c61170(lVar9);
      }
      func_0x000107c61170(lVar3);
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar12;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    func_0x000107c60e78();
    func_0x000107c610f4(PTR_PTR_1126c04d8);
    func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 1008386f0; end: 10083871b; +[SCGrapheneFideliusMetric pollRecrypt] */

void FUN_1008386f0(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10083871c; end: 10083872b;  */

void FUN_10083871c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10083872c; end: 10083875b;  */

long FUN_10083872c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c60ca0(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10083875c; end: 10083876b;  */

void FUN_10083875c(void)

{
  return;
}



/* Entry: 10083876c; end: 1008387fb;  */

long FUN_10083876c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cd0638;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    FUN_10083871c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1008387fc; end: 10083880b; -[SCNGrpcUnaryEventHandlerImpl .cxx_destruct] */

void FUN_1008387fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10083880c; end: 10083883f;  */

void FUN_10083880c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3bb78(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 100838840; end: 1008388df; -[SCFideliusIdentityService processKeysFromRetryInitV2:] */

void FUN_100838840(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_105932cd4;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    func_0x000107c61174(param_3);
    lStack_38 = param_3;
    func_0x000107c4e524(uVar2,param_2,&puStack_60);
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008388e0; end: 10083893b;  */

void FUN_1008388e0(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c54118(param_2);
  func_0x000107c53598(param_2);
  func_0x000107c543a4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
  func_0x000107c52718(*(undefined8 *)(param_1 + 0x38),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10083893c; end: 100838943; -[SIGLoadingArcConfiguration setEdgeOffsets:] */

void FUN_10083893c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x58) = param_1;
  *(undefined8 *)(param_3 + 0x60) = param_2;
  return;
}



/* Entry: 100838944; end: 10083894b; -[SIGHeaderButtonOption badge] */

undefined8 FUN_100838944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10083894c; end: 100838ceb; -[SIGBadgeView initWithStyle:uiColor:disableShadow:scalingFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10083894c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined1 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_4;
  func_0x000107c61174(param_5);
  puStack_c0 = PTR_PTR_11270b650;
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar7 = &uStack_c8;
  uStack_c8 = param_2;
  func_0x000107c61154(uVar11,uVar12,uVar13,uVar14,puVar7,PTR_s_initWithFrame__1125e2948);
  if (puVar7 != (undefined8 *)0x0) {
    *(long *)((long)puVar7 + (long)_DAT_112795120) = param_4;
    *(undefined8 *)((long)puVar7 + (long)_DAT_112795124) = 0;
    lVar8 = (long)_DAT_112795128;
    func_0x000107c61174(param_5);
    uVar1 = *(undefined8 *)((long)puVar7 + lVar8);
    *(long *)((long)puVar7 + lVar8) = param_5;
    func_0x000107c61170(uVar1);
    *(undefined1 *)((long)puVar7 + (long)_DAT_11279512c) = param_6;
    *(undefined8 *)((long)puVar7 + (long)_DAT_112795130) = param_1;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar11,uVar12,uVar13,uVar14);
    func_0x000107c5a050();
    lVar10 = (long)_DAT_112795134;
    uVar11 = *(undefined8 *)((long)puVar7 + lVar10);
    *(undefined **)((long)puVar7 + lVar10) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar11);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)((long)puVar7 + (long)_DAT_112795138);
    *(undefined **)((long)puVar7 + (long)_DAT_112795138) = puVar3;
    func_0x000107c61170(uVar11);
    func_0x000107c52b50(*(undefined8 *)((long)puVar7 + lVar10));
    func_0x000107c3b408(puVar7);
    func_0x000107c3d89c(puVar7);
    uVar12 = *(undefined8 *)((long)puVar7 + lVar10);
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c3ce28(puVar7);
    uVar11 = uVar12;
    func_0x000107c40290();
    func_0x000107c61180();
    lVar9 = (long)_DAT_11279513c;
    uVar13 = *(undefined8 *)((long)puVar7 + lVar9);
    *(undefined8 *)((long)puVar7 + lVar9) = uVar11;
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    uVar12 = *(undefined8 *)((long)puVar7 + lVar10);
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c3b968(puVar7);
    uVar11 = uVar12;
    func_0x000107c40290();
    func_0x000107c61180();
    lVar8 = (long)_DAT_112795140;
    uVar13 = *(undefined8 *)((long)puVar7 + lVar8);
    *(undefined8 *)((long)puVar7 + lVar8) = uVar11;
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar7 + lVar10);
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar4 = puVar7;
    func_0x000107c3f764(puVar7);
    func_0x000107c61180();
    uVar11 = uVar13;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_b8 = uVar11;
    uVar14 = *(undefined8 *)((long)puVar7 + lVar10);
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar5 = puVar7;
    func_0x000107c3f75c(puVar7);
    func_0x000107c61180();
    uVar12 = uVar14;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_b0 = uVar12;
    uStack_a8 = *(undefined8 *)((long)puVar7 + lVar9);
    uStack_a0 = *(undefined8 *)((long)puVar7 + lVar8);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar13);
    func_0x000107c3aca4(puVar7);
    func_0x000107c537fc(0x447a0000,puVar7);
    lVar8 = 1;
    func_0x000107c537fc(0x447a0000,puVar7);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar7;
  }
  func_0x000107c60e78();
  if (lVar8 < 4) {
    if (lVar8 < 2) {
      if (lVar8 == 0) {
        func_0x000107c3c6d4(param_5);
      }
      else if (lVar8 == 1) {
        func_0x000107c3c6dc(param_5);
      }
    }
    else if (lVar8 == 2) {
      func_0x000107c3c6e4(param_5);
    }
    else if (lVar8 == 3) {
      func_0x000107c3c6e8(param_5);
    }
  }
  else if (lVar8 - 6U < 3) {
    func_0x000107c3c6cc(param_5);
  }
  else if (lVar8 == 4) {
    func_0x000107c3c6e0(param_5);
  }
  else if (lVar8 == 5) {
    func_0x000107c3c6d0(param_5);
  }
  lVar8 = param_5;
  func_0x000107c3cb10(param_5);
  puVar7 = *(undefined8 **)(param_5 + _DAT_112795144);
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_setTypeStyle__112664568,lVar8);
  return puVar7;
}



/* Entry: 100838cec; end: 100838db7; -[SIGBadgeView _customizeViewUsingStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100838cec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        func_0x000107c3c6d4(param_1);
      }
      else if (param_3 == 1) {
        func_0x000107c3c6dc(param_1);
      }
    }
    else if (param_3 == 2) {
      func_0x000107c3c6e4(param_1);
    }
    else if (param_3 == 3) {
      func_0x000107c3c6e8(param_1);
    }
  }
  else if (param_3 - 6U < 3) {
    func_0x000107c3c6cc(param_1);
  }
  else if (param_3 == 4) {
    func_0x000107c3c6e0(param_1);
  }
  else if (param_3 == 5) {
    func_0x000107c3c6d0(param_1);
  }
  lVar1 = param_1;
  func_0x000107c3cb10(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795144),PTR_s_setTypeStyle__112664568,lVar1);
  return;
}



/* Entry: 100838db8; end: 100838ddb; -[SIGBadgeView _setupViewForOvalShape] */

void FUN_100838db8(undefined8 param_1)

{
  func_0x000107c3c090();
                    /* WARNING: Could not recover jumptable at 0x00010beb12b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViewForOvalShapeWithDimens_112589e50);
  return;
}



/* Entry: 100838ddc; end: 100838df3; -[SIGBadgeView _ovalDimension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100838ddc(long param_1)

{
  return *(double *)(param_1 + _DAT_112795130) * 16.0;
}



/* Entry: 100838df4; end: 100838e4f; -[SIGBadgeView _setupViewForOvalShapeWithDimension:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100838df4(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112795134);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c539d4(param_1 * 0.5);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be5df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__maybeAddShadowToContainerView_112575168);
  return;
}



/* Entry: 100838e50; end: 100838edb; -[SIGBadgeView _maybeAddShadowToContainerView] */

/* WARNING: Possible PIC construction at 0x000100838ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100838ea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100838e50(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_11279512c) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795134);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c59038(0,0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100838edc; end: 100838f03; -[SIGBadgeView _typeStyleOfBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100838edc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a;
  if (*(double *)(param_1 + _DAT_112795130) <= 1.0000001192092896) {
    uVar1 = 0x18;
  }
  return uVar1;
}



/* Entry: 100838f04; end: 10083905b; -[SIGBadgeView _widthOfBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100838f04(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *(long *)(param_2 + _DAT_112795120);
  if (lVar1 < 4) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be6ea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__ovalDimension_112579440);
        return param_1;
      }
      if (lVar1 == 1) {
        func_0x000107c498ec(*(undefined8 *)(param_2 + _DAT_112795144));
        dVar2 = param_1;
        func_0x000107c3bf44(param_2);
        param_1 = param_1 + 8.0;
        if (param_1 <= dVar2) {
          param_1 = dVar2;
        }
      }
    }
    else {
      if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010becc390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__tinyOvalDimension_112590a88);
        return param_1;
      }
      if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bed0910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__twoDigitOvalBadgeWidth_112591be8);
        return param_1;
      }
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010becb9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__threeDigitOvalBadgeWidth_112590818);
      return param_1;
    }
    if (lVar1 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010be5eef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__mediumOvalDimension_112575558);
      return param_1;
    }
  }
  else {
    if (lVar1 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__bigOvalDimension_112552a10);
      return param_1;
    }
    if (lVar1 == 7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd4210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__bigTwoDigitOvalBadgeWidth_112552a20);
      return param_1;
    }
    if (lVar1 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd41f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__bigThreeDigitOvalBadgeWidth_112552a18);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10083905c; end: 1008390cf; -[SIGBadgeView _heightOfBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083905c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112795120);
  if (lVar1 < 4) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be6ea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__ovalDimension_112579440);
        return;
      }
      if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be87e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__rectangleBadgeHeight_11257f928);
        return;
      }
    }
    else {
      if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010becc390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tinyOvalDimension_112590a88);
        return;
      }
      if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bed08f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__twoDigitOvalBadgeHeight_112591be0);
        return;
      }
    }
  }
  else {
    if (lVar1 - 6U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bigOvalDimension_112552a10);
      return;
    }
    if (lVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010becb9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__threeDigitOvalBadgeHeight_112590810);
      return;
    }
    if (lVar1 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010be5eef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediumOvalDimension_112575558);
      return;
    }
  }
  return;
}



/* Entry: 1008390d0; end: 1008390fb; -[SIGBadgeView _activateTextConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008390d0(long param_1)

{
  if ((*(long *)(param_1 + _DAT_112795144) != 0) && (*(long *)(param_1 + _DAT_112795120) == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateTextConstraintsForRecta_11254ed88)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc4f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateTextConstraintsForOvalS_11254ed80);
  return;
}



/* Entry: 1008390fc; end: 100839357; -[SIGBadgeView _activateTextConstraintsForOvalShape] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008390fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = &DAT_112795144;
  lVar15 = (long)_DAT_11279514c;
  iVar11 = (int)*(undefined8 *)(param_1 + lVar15);
  func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar14 = (long)_DAT_112795144;
  lVar1 = *(long *)(param_1 + lVar14);
  puVar9 = (undefined *)0x0;
  if (lVar1 != 0) {
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar13 = (long)_DAT_112795134;
    uVar2 = *(undefined8 *)(param_1 + lVar13);
    lStack_90 = lVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    uStack_98 = uVar2;
    func_0x000107c3ad44(param_1);
    func_0x000107c40284();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    lStack_a0 = lVar1;
    lStack_88 = lVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    uStack_a8 = uVar3;
    func_0x000107c3f75c(uVar4);
    func_0x000107c61180();
    func_0x000107c40280();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + lVar13);
    uStack_80 = uVar3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + lVar14);
    func_0x000107c4acb0(uVar6);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar7 = *(undefined **)(param_1 + lVar13);
    uStack_78 = uVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + lVar14);
    func_0x000107c5ce8c(uVar8);
    func_0x000107c61180();
    puVar9 = puVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar9;
    func_0x000107c3e17c();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar10;
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(lStack_a0);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(lStack_90);
    iVar11 = (int)*(undefined8 *)(param_1 + lVar15);
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c3d048();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_100839358;
  puStack_d0 = puVar7;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (((*(ulong *)(puVar9 + _DAT_112795124) & 0xfffffffffffffffe) == 2) ||
     (puVar7 = puVar9, func_0x000107c49eac(), iVar11 != (int)puVar7)) {
    if (iVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdca7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar9,PTR_s__animate_112550388);
      return;
    }
    puVar7 = puVar9;
    func_0x000107c438d4();
    func_0x000107c609ac();
    if (((ulong)puVar7 & 1) == 0) {
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      puStack_e8 = &UNK_10b8698e8;
      puStack_e0 = &UNK_110842e18;
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      puStack_118 = &UNK_10b869948;
      puStack_110 = &UNK_110857498;
      uStack_100 = (undefined1)iVar11;
      puStack_108 = puVar9;
      puStack_d8 = puVar9;
      func_0x000107c3dcd0(0x3fd0a3d70a3d70a4,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    else {
      puStack_130 = PTR_PTR_11270b650;
      puStack_138 = puVar9;
      func_0x000107c61154(&puStack_138,PTR_s_setHidden__1126479f8,1);
    }
  }
  return;
}



/* Entry: 100839358; end: 100839473; -[SIGBadgeView setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100839358(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined1 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  if (((*(ulong *)(param_1 + (long)_DAT_112795124) & 0xfffffffffffffffe) == 2) ||
     (uVar1 = param_1, func_0x000107c49eac(), param_3 != (int)uVar1)) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdca7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animate_112550388);
      return;
    }
    uVar1 = param_1;
    func_0x000107c438d4();
    func_0x000107c609ac();
    if ((uVar1 & 1) == 0) {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      puStack_38 = &UNK_10b8698e8;
      puStack_30 = &UNK_110842e18;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      puStack_68 = &UNK_10b869948;
      puStack_60 = &UNK_110857498;
      uStack_50 = (undefined1)param_3;
      uStack_58 = param_1;
      uStack_28 = param_1;
      func_0x000107c3dcd0(0x3fd0a3d70a3d70a4,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    else {
      puStack_80 = PTR_PTR_11270b650;
      uStack_88 = param_1;
      func_0x000107c61154(&uStack_88,PTR_s_setHidden__1126479f8,1);
    }
  }
  return;
}



/* Entry: 100839474; end: 1008394ff; -[SIGBadgeView setTextColor:] */

/* WARNING: Possible PIC construction at 0x0001008394d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008394d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100839474(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x000107c61178();
  func_0x000107c3ab24();
  lVar3 = (long)_DAT_112795138;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3ab24(uVar1);
  func_0x000107c608b0(uVar2,uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x000107c61174(param_3);
    uVar2 = *(ulong *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
    param_3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100839500; end: 1008397e7;  */

undefined * FUN_100839500(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3208 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f501d8,
                        &UNK_10e550e58,&UNK_10e551470,0x3e,&UNK_10b03cb8c,0);
    do {
      if (puRam00000001137f3208 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f3208;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3208,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3208 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3208;
}



/* Entry: 1008397e8; end: 100839853; +[IMPAddress descriptor] */

void FUN_1008397e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c512e0,
                        &PTR____CFConstantStringClassReference_110f34e38,&PTR_s_impala_113357488,
                        &PTR_DAT_11335b120,5,0x30,0x1c);
    puRam00000001137f2568 = puVar1;
  }
  return;
}



/* Entry: 100839854; end: 1008398d3; +[IMPBusinessLogo descriptor] */

undefined * FUN_100839854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f25f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51830,
                        &PTR____CFConstantStringClassReference_110f4d398,&PTR_s_impala_113357488,
                        &PTR_DAT_11335b300,5,0x28,0x1c);
    func_0x000107c5a894();
    puRam00000001137f25f0 = puVar1;
  }
  return puRam00000001137f25f0;
}



/* Entry: 1008398d4; end: 1008399cf; +[IMPPublisherDisplayInfo descriptor] */

undefined * FUN_1008398d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51920,
                        &PTR____CFConstantStringClassReference_110f4d3f8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335cb40,0xc,0x40,0x1c);
    func_0x000107c5a894();
    puRam00000001137f2608 = puVar1;
  }
  return puRam00000001137f2608;
}



/* Entry: 1008399d0; end: 100839b33; +[IMPBusinessProfileUserData descriptor] */

void FUN_1008399d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51ab0,
                        &PTR____CFConstantStringClassReference_110f4d498,&PTR_s_impala_113357488,
                        &PTR_DAT_11335c4e0,10,0x40,0x1c);
    puRam00000001137f2630 = puVar1;
  }
  return;
}



/* Entry: 100839b34; end: 100839b9f; +[IMPBusinessUserSettings descriptor] */

void FUN_100839b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c577d0,
                        &PTR____CFConstantStringClassReference_110f4d7b8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335bd60,8,0x38,0x1c);
    puRam00000001137f2700 = puVar1;
  }
  return;
}



/* Entry: 100839ba0; end: 100839c23; +[IMPBusinessUserSettings_NotificationSettings descriptor] */

undefined * FUN_100839ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c577f8,
                        &PTR____CFConstantStringClassReference_110f4d7d8,&PTR_s_impala_113357488,
                        &PTR_DAT_113357840,1,4,0x1c);
    func_0x000107c5a88c();
    puRam00000001137f2708 = puVar1;
  }
  return puRam00000001137f2708;
}



/* Entry: 100839c24; end: 100839c8f; +[IMPBusinessProfileFeatures descriptor] */

void FUN_100839c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51ba0,
                        &PTR____CFConstantStringClassReference_110f4d4f8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335d1a0,0x12,8,0x1c);
    puRam00000001137f2648 = puVar1;
  }
  return;
}



/* Entry: 100839c90; end: 100839cfb; +[IMPBusinessProfileSettings descriptor] */

void FUN_100839c90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c57780,
                        &PTR____CFConstantStringClassReference_110f4d638,&PTR_s_impala_113357488,
                        &PTR_DAT_11335cfe0,0xe,0x48,0x1c);
    puRam00000001137f2698 = puVar1;
  }
  return;
}



/* Entry: 100839cfc; end: 100839e5b; +[IMPTermsAndConditions descriptor] */

void FUN_100839cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f32b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c59210,
                        &PTR____CFConstantStringClassReference_110f50458,&PTR_s_impala_113360dc8,
                        &PTR_DAT_113360de0,5,0x20,0x1c);
    puRam00000001137f32b0 = puVar1;
  }
  return;
}



/* Entry: 100839e5c; end: 100839ec7; +[IMPMonetizationSettings descriptor] */

void FUN_100839e5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51bf0,
                        &PTR____CFConstantStringClassReference_110f4d518,&PTR_s_impala_113357488,
                        &PTR_DAT_11335b3a0,5,0x30,0x1c);
    puRam00000001137f2650 = puVar1;
  }
  return;
}


