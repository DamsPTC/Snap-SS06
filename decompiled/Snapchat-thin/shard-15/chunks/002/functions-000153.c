/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9399b0; end: 10b9399bb;  */

void FUN_10b9399b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b93a95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9399bc; end: 10b9399cf;  */

void FUN_10b9399bc(void)

{
  func_0x00010b939a30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9399d0; end: 10b939a6b;  */

undefined8 FUN_10b9399d0(void)

{
  int iVar1;
  
  if ((bRam00000001137fd1a8 & 1) == 0) {
    iVar1 = 0x137fd1a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd1a0,&UNK_10f7ce3c8);
      ___cxa_guard_release(0x1137fd1a8);
    }
  }
  return 0x1137fd1a0;
}



/* Entry: 10b939a6c; end: 10b939a83;  */

void FUN_10b939a6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d779c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b939a84; end: 10b939bdb;  */

void FUN_10b939a84(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined8 extraout_x8;
  long *unaff_x21;
  long lVar4;
  undefined1 auStack_3a0 [64];
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined1 *puStack_350;
  undefined8 uStack_348;
  undefined1 auStack_2b0 [72];
  long lStack_268;
  undefined **ppuStack_260;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [504];
  undefined8 uStack_48;
  
  puVar1 = auStack_3a0;
  puVar2 = auStack_3a0;
  func_0x00010b93ab08();
  func_0x00010b93a8f4();
  uStack_48 = extraout_x8;
  func_0x000107c2837c(auStack_3a0);
  func_0x000107c28378();
  lVar4 = *unaff_x21;
  *unaff_x21 = (long)puVar1;
  unaff_x21[1] = unaff_x21[1] + (lVar4 - (long)puVar1);
  puStack_258 = auStack_240;
  ppuStack_260 = &PTR_DAT_11099bc38;
  uStack_248 = 500;
  uStack_250 = 0;
  lVar4 = param_3[3];
  lStack_268 = lVar4;
  func_0x000107c284f4(auStack_2b0,&ppuStack_260);
  func_0x000107c284ec(&puStack_350,auStack_2b0);
  if (lVar4 != 0) {
    lVar4 = *(long *)(puStack_350 + -0x18);
    func_0x00010bd490d0(auStack_360,&lStack_268);
    func_0x0001080c9df4(auStack_358,(long)&puStack_350 + lVar4,auStack_360);
    __ZNSt3__16localeD1Ev(auStack_358);
    __ZNSt3__16localeD1Ev(auStack_360);
  }
  FUN_10b9a27dc(&puStack_350);
  func_0x000107c284fc((long)&puStack_350 + *(long *)(puStack_350 + -0x18),5);
  func_0x000107c283e0(&ppuStack_260,uStack_250);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(&puStack_350);
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(auStack_2b0);
  puStack_350 = puStack_258;
  uStack_348 = uStack_250;
  func_0x000107c28388(auStack_3a0,&puStack_350,param_3);
  pppuVar3 = &ppuStack_260;
  func_0x000107c283e8();
  *param_3 = puVar2;
  func_0x00010b93a8e0(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *pppuVar3 = &PTR_FUN_110d77a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b939bdc; end: 10b939bdf;  */

void FUN_10b939bdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77a70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b939be0; end: 10b939bf3;  */

void FUN_10b939be0(void)

{
  func_0x00010b939c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b939bf4; end: 10b939c43;  */

void FUN_10b939bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b93a95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b939c44; end: 10b939c6f;  */

void FUN_10b939c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10b939c70(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10b939c70; end: 10b939d0b;  */

undefined8 *
FUN_10b939c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 auStack_60 [2];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  func_0x00010b93a8f4();
  uStack_48 = extraout_x8;
  FUN_10b9306c8(auStack_60,1);
  FUN_10b939d0c(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  FUN_10b9306ac(param_1,lVar1 + 0x18);
  FUN_10b930854();
  func_0x00010b93a8e0(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110d77178;
  puVar2[1] = 0;
  FUN_10b934cf4(puVar2 + 3);
  return puVar2;
}



/* Entry: 10b939d0c; end: 10b939d3f;  */

undefined8 * FUN_10b939d0c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d77178;
  param_1[1] = 0;
  FUN_10b934cf4(param_1 + 3);
  return param_1;
}



/* Entry: 10b939d40; end: 10b939dd7;  */

void FUN_10b939d40(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = param_2;
  FUN_10b939dd8();
  plVar5 = param_2;
  plVar7 = param_3;
  func_0x00010b939dfc(param_2,param_3,plVar4);
  uVar6 = SUB81(plVar7,0);
  if (((ulong)plVar7 & 1) != 0) {
    plVar7 = (long *)(param_2[1] + (long)plVar5 * 0x10);
    lVar8 = *param_3;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar7 = lVar8;
    plVar7[1] = 0;
    *(byte *)(*param_2 + (long)plVar5) = (byte)plVar4 & 0x7f;
    func_0x00010b93aa38();
  }
  lVar8 = param_2[1];
  *param_1 = *param_2 + (long)plVar5;
  param_1[1] = lVar8 + (long)plVar5 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10b939dd8; end: 10b939ed7;  */

void FUN_10b939dd8(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b939eb8(&lStack_18);
  return;
}



/* Entry: 10b939ed8; end: 10b939f9f;  */

void FUN_10b939ed8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b939fa0(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b939f20;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b939f20;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b939f74:
    FUN_10b939fe0(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b939f74;
    }
    func_0x00010b93a108(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b939fa0(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b939f20:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b939fa0; end: 10b939fdf;  */

ulong FUN_10b939fa0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b939fe0; end: 10b93a2af;  */

void FUN_10b939fe0(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b93a2b0();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b939fa0(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b93a2d0(param_1[1] + lVar4 * 0x10,lVar5);
    }
    lVar5 = lVar5 + 0x10;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b93a2b0; end: 10b93a2cf;  */

void FUN_10b93a2b0(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b93a2d0; end: 10b93a30f;  */

undefined8 FUN_10b93a2d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10b93a310(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b93a310; end: 10b93a383;  */

undefined8 * FUN_10b93a310(undefined8 *param_1)

{
  func_0x00010b93a2e4(*param_1);
  return param_1;
}



/* Entry: 10b93a384; end: 10b93a423;  */

bool FUN_10b93a384(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x10) == lVar7) goto LAB_10b93a418;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_10b93a418:
  return uVar5 != 0;
}



/* Entry: 10b93a424; end: 10b93a4a3;  */

ulong FUN_10b93a424(ulong param_1)

{
  ulong uVar1;
  
  if (((param_1 != 0) && (uVar1 = param_1, FUN_10b9a5818(), (uVar1 & 1) == 0)) &&
     (FUN_10b9a5890(), param_1 = uVar1, *(long *)(uVar1 + 8) != 0)) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b93a4a4; end: 10b93a60f;  */

void FUN_10b93a4a4(long *param_1,long *param_2,long param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  code *pcVar3;
  code *extraout_x8_00;
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long lVar4;
  long lVar5;
  long lStack_70;
  long alStack_60 [3];
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_2;
  func_0x00010b93a8f4();
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *param_1;
  alStack_60[0] = lVar5;
  uStack_38 = extraout_x8;
  func_0x00010b93a960();
  if (lStack_70 == 0) goto LAB_10b93a5e0;
  plVar1 = *(long **)(lStack_70 + 0xf0);
  if (plVar1 == (long *)0x0) {
LAB_10b93a528:
    in_ZR = lVar5 == 2;
    if (!(bool)in_ZR) {
LAB_10b93a55c:
      func_0x00010b93a9f0();
      if (lStack_48 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lStack_48;
        ___dynamic_cast(lStack_48,&PTR_DAT_110d7ebe8,&PTR_DAT_110d77b50,0);
      }
      FUN_10b93a424(lVar5);
      func_0x000104bddf04(lStack_48);
      pcVar3 = *(code **)(lVar4 + 0x10);
      lStack_48 = 1;
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
        do {
          func_0x00010b93aa18();
          pcVar3 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      plVar2 = (long *)(lVar4 + 0x10);
      lStack_40 = lVar5;
      (*pcVar3)(&lStack_48);
      FUN_10b92b010(&lStack_48);
      FUN_10b92b058(lVar5);
      goto LAB_10b93a5e0;
    }
  }
  else {
    if ((int)param_2 == 1) {
      func_0x00010b93aa00(*(undefined8 *)(*plVar1 + 0xd0));
      goto LAB_10b93a528;
    }
    if ((int)param_2 != 2) goto LAB_10b93a528;
    func_0x00010b93aa00(*(undefined8 *)(*plVar1 + 0xd8));
    in_ZR = lVar5 == 2;
    if (!(bool)in_ZR) {
      func_0x00010b93aa00(*(undefined8 *)(**(long **)(lStack_70 + 0xf0) + 0xc0));
      goto LAB_10b93a55c;
    }
    func_0x00010b93aa00(*(undefined8 *)(**(long **)(lStack_70 + 0xf0) + 200));
  }
  func_0x00010b93aaf4();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b93a980();
    } while (extraout_w12 != 0);
  }
  func_0x00010b93a934();
  FUN_10b92b010(&lStack_48);
LAB_10b93a5e0:
  func_0x00010b93aa50();
  plVar1 = alStack_60;
  func_0x000104bda914();
  func_0x00010b93a8e0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar4 = plVar2[1];
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar1[1] = lVar4;
      if (lVar4 != 0) {
        *plVar1 = *plVar2;
      }
    }
    return;
  }
  return;
}



/* Entry: 10b93a610; end: 10b93a64f;  */

void FUN_10b93a610(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10b93a650; end: 10b93a66f;  */

void FUN_10b93a650(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b9394e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93a670; end: 10b93a673;  */

void FUN_10b93a670(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b93a674; end: 10b93a727;  */

void FUN_10b93a674(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d77ab0;
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  lVar2 = puVar3[1];
  uVar4 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x00010b93a904();
    } while (extraout_w10 != 0);
  }
  puVar1[2] = puVar3[2];
  (**(code **)(puVar3[3] + 0x18))(puVar1 + 3,puVar3 + 3);
  uVar4 = 0;
  if (puVar3[8] != 0) {
    do {
      func_0x00010b93a944();
      uVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar1[8] = uVar4;
  FUN_10b9394dc(puVar1 + 9,puVar3 + 9);
  uVar4 = 0;
  if (puVar3[0xe] != 0) {
    do {
      func_0x00010b93aa28();
      uVar4 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[0xe] = uVar4;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b93a728; end: 10b93a74f;  */

long * FUN_10b93a728(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    FUN_10b92e3b8(param_1[1]);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b93a750; end: 10b93a847;  */

void FUN_10b93a750(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long extraout_x9;
  int extraout_w12;
  long lVar6;
  long lVar7;
  long lStack_60;
  long alStack_50 [3];
  long *aplStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b93a8f4();
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *param_1;
  alStack_50[0] = lVar7;
  uStack_28 = extraout_x8;
  func_0x00010b93a960();
  if (lStack_60 != 0) {
    in_ZR = lVar7 == 2;
    if ((bool)in_ZR) {
      func_0x00010b93aaf4();
      if (extraout_x9 != 0) {
        do {
          func_0x00010b93a980();
        } while (extraout_w12 != 0);
      }
      func_0x00010b93a934();
      FUN_10b93a728(aplStack_38);
    }
    else {
      func_0x00010b93a9f0();
      plVar3 = aplStack_38[0];
      if (aplStack_38[0] == (long *)0x0) {
        aplStack_38[0] = (long *)0x0;
      }
      else {
        plVar4 = aplStack_38[0];
        FUN_10b9a5818();
        if ((int)plVar4 == 0) goto LAB_10b93a844;
      }
      func_0x000104bddf04(aplStack_38[0]);
      lVar7 = plVar3[3];
      uVar5 = *(undefined8 *)(lVar6 + 0x10);
      aplStack_38[0] = (long *)0x1;
      if ((lVar7 != 0) && (lVar6 = *(long *)(lVar7 + 0x10), lVar6 != 0)) {
        plVar4 = (long *)(lVar6 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010b93a934(uVar5);
      FUN_10b93a728(aplStack_38);
      func_0x000107c3105c(plVar3);
    }
  }
  func_0x00010b93aa50();
  plVar4 = alStack_50;
  func_0x000104bda914();
  func_0x00010b93a8e0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b93a844:
  FUN_10b9a5890();
  if (plVar4[1] == 0) {
    return;
  }
  FUN_10b939734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93a848; end: 10b93a867;  */

void FUN_10b93a848(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b939734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93a868; end: 10b93a86b;  */

void FUN_10b93a868(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b93a86c; end: 10b93a8df;  */

void FUN_10b93a86c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d77ad0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  lVar2 = puVar3[1];
  uVar4 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x00010b93a904();
    } while (extraout_w10 != 0);
  }
  puVar1[2] = puVar3[2];
  (**(code **)(puVar3[3] + 0x18))(puVar1 + 3,puVar3 + 3);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b93a8e0; end: 10b93ab27;  */

void FUN_10b93a8e0(void)

{
  return;
}



/* Entry: 10b93ab28; end: 10b93b29f;  */

void FUN_10b93ab28(long param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x00010b93b280();
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  func_0x00010b93ab64(unaff_x20 + 0x10);
  __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x28);
  func_0x00010b9493ac(unaff_x20 + 0x70);
  func_0x00010b949408();
  func_0x0001080eb338(auStack_30);
  return;
}



/* Entry: 10b93b2a0; end: 10b93b3cf;  */

undefined8 * FUN_10b93b2a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d77b20;
  func_0x00010b939bfc(param_1 + 3);
  return param_1;
}



/* Entry: 10b93b3d0; end: 10b93b3d3;  */

undefined8 * FUN_10b93b3d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77b20;
  func_0x000108138894(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b93b3d4; end: 10b93b3e7;  */

void FUN_10b93b3d4(void)

{
  FUN_10b93b3e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93b3e8; end: 10b93b423;  */

undefined8 * FUN_10b93b3e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d77b20;
  func_0x000108138894(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b93b424; end: 10b93b42b;  */

void FUN_10b93b424(void)

{
  return;
}



/* Entry: 10b93b42c; end: 10b93b813;  */

undefined8 * FUN_10b93b42c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = param_3[2];
  uVar7 = param_3[1];
  uVar6 = *param_3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d76a50;
  param_1[1] = 0;
  param_1[4] = uVar7;
  param_1[3] = uVar6;
  param_1[5] = uVar4;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  func_0x000104bfe1e0(&uStack_38);
  *param_1 = &PTR_DAT_110d77b78;
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[6] = lVar5;
  return param_1;
}



/* Entry: 10b93b814; end: 10b93ba9f;  */

undefined8 *
FUN_10b93b814(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  *param_2 = &PTR_FUN_110d77c00;
  param_2[1] = 1;
  lVar7 = param_3[1];
  uVar5 = *param_3;
  param_2[3] = param_3[1];
  param_2[2] = uVar5;
  if (lVar7 != 0) {
    do {
      func_0x00010b93f620();
    } while (extraout_w10 != 0);
  }
  uVar5 = 0;
  if (*param_4 != 0) {
    do {
      func_0x00010b93f4b4();
      uVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar6 = (undefined1)param_9;
  plVar10 = param_2 + 5;
  *plVar10 = 0;
  param_2[4] = uVar5;
  puVar8 = (undefined8 *)*param_7;
  if ((puVar8 != (undefined8 *)0x0) && (puVar8[2] != 0)) {
    do {
      func_0x00010b93f620();
      uVar6 = (undefined1)param_9;
    } while (extraout_w10_00 != 0);
  }
  param_2[6] = puVar8;
  param_2[7] = 0;
  param_2[8] = param_1;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[9] = 0;
  *(undefined2 *)(param_2 + 0xc) = 0x101;
  *(undefined1 *)((long)param_2 + 0x62) = uVar6;
  *(undefined1 *)((long)param_2 + 100) = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined1 *)((long)param_2 + 0x6c) = 1;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = param_10;
  func_0x00010b93f764();
  param_2[0x12] = extraout_x8_00;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x1c] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x17] = 0;
  param_2[0x1d] = 0x32aaaba7;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  param_2[0x21] = 0;
  param_2[0x20] = 0;
  param_2[0x23] = 0;
  param_2[0x22] = 0;
  param_2[0x25] = 0;
  param_2[0x24] = 0;
  param_2[0x26] = 0x32aaaba7;
  param_2[0x28] = 0;
  param_2[0x27] = 0;
  param_2[0x2a] = 0;
  param_2[0x29] = 0;
  param_2[0x2c] = 0;
  param_2[0x2b] = 0;
  param_2[0x2e] = 0;
  param_2[0x2d] = 0;
  param_2[0x34] = 0;
  param_2[0x2f] = extraout_x8_00;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  puVar4 = (undefined8 *)0x110;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110d77ce8;
  if ((puVar8 != (undefined8 *)0x0) && (puVar8[2] != 0)) {
    do {
      func_0x00010b93f620();
    } while (extraout_w10_01 != 0);
    param_1 = param_2[8];
  }
  puVar1 = puVar4 + 3;
  puStack_80 = puVar8;
  FUN_10b938d14(param_1,puVar1,param_4,param_6,&puStack_80,param_10);
  func_0x000107c278fc(puStack_80);
  puVar8 = puVar1;
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      puStack_78 = puVar4;
      puStack_80 = puVar8;
      func_0x00010b93f678();
      puVar8 = puStack_80;
      puVar4 = puStack_78;
    } while (extraout_w9 != 0);
    func_0x00010b93f758();
    func_0x000107c284e8(&puStack_80);
  }
  lVar7 = *plVar10;
  *plVar10 = (long)puVar1;
  FUN_10b929fc0(lVar7);
  FUN_10b929fc0(0);
  puVar4 = (undefined8 *)0x150;
  __Znwm();
  plVar9 = puVar4 + 1;
  *plVar9 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110d77d38;
  puVar8 = puVar4 + 3;
  FUN_10b926f44(puVar8,param_3,plVar10,param_5,param_7,param_8,param_10);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_80 = puVar8;
    puStack_78 = puVar4;
    func_0x00010b93f758();
    func_0x000107c284e8(&puStack_80);
  }
  uVar5 = param_2[7];
  param_2[7] = puVar8;
  FUN_10b8d6f08(uVar5);
  FUN_10b8d6f08(0);
  return param_2;
}



/* Entry: 10b93baa0; end: 10b93bb8f;  */

undefined8 * FUN_10b93baa0(undefined8 *param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110d77c00;
  FUN_10b8be4ec(param_1 + 0x2f);
  FUN_10b9a1f08(param_1 + 0x26);
  FUN_10b9a1f08(param_1 + 0x1d);
  func_0x0001080d87c4(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0x12] + lVar3)) {
        func_0x0001080d5a38(param_1[0x13] + lVar2);
        lVar1 = param_1[0x15];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[0x17] = 0;
    func_0x00010b93f764();
    param_1[0x12] = extraout_x8;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  func_0x0001080c9d44(param_1 + 0xe);
  func_0x000104bd4728(param_1 + 10);
  func_0x00010b93e8b4(param_1 + 9);
  FUN_10b929a58(param_1 + 7);
  func_0x000104bd5214(param_1 + 6);
  FUN_10b929fa0(param_1 + 5);
  func_0x0001080e6aa4(param_1 + 4);
  func_0x0001080d88ec(param_1 + 2);
  return param_1;
}



/* Entry: 10b93bb90; end: 10b93bb93;  */

undefined8 * FUN_10b93bb90(undefined8 *param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110d77c00;
  FUN_10b8be4ec(param_1 + 0x2f);
  FUN_10b9a1f08(param_1 + 0x26);
  FUN_10b9a1f08(param_1 + 0x1d);
  func_0x0001080d87c4(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    param_1[0x19] = param_1[0x18];
    __ZdlPv();
  }
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(param_1[0x12] + lVar3)) {
        func_0x0001080d5a38(param_1[0x13] + lVar2);
        lVar1 = param_1[0x15];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[0x17] = 0;
    func_0x00010b93f764();
    param_1[0x12] = extraout_x8;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  func_0x0001080c9d44(param_1 + 0xe);
  func_0x000104bd4728(param_1 + 10);
  func_0x00010b93e8b4(param_1 + 9);
  FUN_10b929a58(param_1 + 7);
  func_0x000104bd5214(param_1 + 6);
  FUN_10b929fa0(param_1 + 5);
  func_0x0001080e6aa4(param_1 + 4);
  func_0x0001080d88ec(param_1 + 2);
  return param_1;
}



/* Entry: 10b93bb94; end: 10b93bba7;  */

void FUN_10b93bb94(void)

{
  FUN_10b93baa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b93bba8; end: 10b93bceb;  */

undefined8 * FUN_10b93bba8(uint *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  uint uVar7;
  undefined8 *unaff_x20;
  long *plVar8;
  long lVar9;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [16];
  undefined1 uStack_60;
  long alStack_58 [2];
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_1;
  func_0x00010b93f470();
  uStack_38 = extraout_x8;
  func_0x00010b93f564();
  uVar7 = param_1[0x1a];
  uVar1 = (byte)uVar7 == 1;
  if ((bool)uVar1) {
    puVar3 = param_1 + 0x19;
    func_0x000108a5ef58();
    unaff_x20 = (undefined8 *)(ulong)*puVar3;
  }
  func_0x00010b93f5a4();
  if (((byte)uVar7 & 1) != 0) goto LAB_10b93bcc4;
  plVar8 = *(long **)(param_1 + 4);
  func_0x000107c31088(&lStack_88,&UNK_10f7ce407);
  param_2 = &lStack_88;
  (**(code **)(*plVar8 + 0x10))(alStack_58,plVar8);
  func_0x000107c278f8(lStack_88);
  uVar1 = alStack_58[0] == 1;
  if ((bool)uVar1) {
    lStack_88 = lStack_48;
    uStack_80 = uStack_40;
    uStack_78 = 0;
    auStack_70[0] = 0;
    uStack_60 = 0;
    func_0x000107c310ac(&lStack_88);
    plVar8 = &lStack_88;
    FUN_10b9a7070();
    func_0x000107c310ac(&lStack_88);
    if ((ulong)plVar8 >> 0x20 == 0) {
LAB_10b93bc74:
      uVar7 = 0;
    }
    else {
      uVar1 = uStack_78 == uStack_80;
      if (uStack_78 < uStack_80) goto LAB_10b93bc74;
      uVar7 = (uint)plVar8 & ((int)(uint)plVar8 >> 0x1f ^ 0xffffffffU);
    }
    func_0x000107c310b8(auStack_70);
  }
  else {
    uVar7 = 0;
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x3a);
  if ((param_1[0x1a] & 1) == 0) {
    param_1[0x19] = uVar7;
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  param_1 = param_1 + 0x19;
  func_0x000108a5ef58();
  unaff_x20 = (undefined8 *)(ulong)*param_1;
  func_0x00010b93f5a4();
  puVar3 = (uint *)alStack_58;
  func_0x0001080c5c8c();
LAB_10b93bcc4:
  func_0x00010b93f45c(uStack_38);
  if ((bool)uVar1) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  if ((bRam00000001137fd1c8 & 1) == 0) {
    iVar2 = 0x137fd1c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x1137fd1c0,&UNK_10f7ce441);
      ___cxa_guard_release(0x1137fd1c8);
    }
  }
  lVar9 = *param_2;
  uVar4 = *param_3;
  FUN_10b93fc2c(uVar4,0x1137fd1c0);
  if ((int)uVar4 == 0) {
    puStack_108 = (undefined8 *)*param_3;
    *param_3 = 0;
    func_0x00010b92c9dc(param_2,&puStack_108,0);
    FUN_10b92e3b8(puStack_108);
  }
  else {
    func_0x00010b93fc94(&uStack_e8,*param_3,0x1137fd1c0);
    puVar5 = (undefined8 *)0x70;
    __Znwm();
    *puVar5 = &PTR_FUN_110d77700;
    puVar5[1] = 1;
    puVar5[3] = 0;
    puVar6 = puVar5 + 2;
    *puVar6 = &PTR_FUN_110d79300;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = &DAT_11383d918;
    puVar5[0xc] = 0;
    *(undefined1 *)(puVar5 + 0xd) = 0;
    puStack_f0 = puVar5;
    func_0x000107c3034c(puVar6,uStack_e8,uStack_e0);
    if (((ulong)puVar6 & 1) == 0) {
      FUN_10b93bebc(&uStack_f8);
      FUN_10b93bcec(puVar3,param_2,&uStack_f8);
      FUN_10b92e3b8(uStack_f8);
    }
    else {
      FUN_10b938f04(*(undefined8 *)(puVar3 + 10),lVar9 + 0x10,&puStack_f0);
      iVar2 = *(int *)(puStack_f0 + 6);
      if ((*(byte *)(puStack_f0 + 4) & 1) == 0) {
        uStack_100 = *param_3;
        *param_3 = 0;
        func_0x00010b92c9dc(param_2,&uStack_100,0 < iVar2);
        FUN_10b92e3b8(uStack_100);
        puVar5 = puStack_f0;
      }
      else {
        lVar9 = *param_2;
        *(undefined1 *)(lVar9 + 0x21) = 1;
        *(bool *)(lVar9 + 0x20) = 0 < iVar2;
        puVar5 = puStack_f0;
      }
    }
    func_0x00010b93a2e4(puVar5);
    puStack_108 = puVar5;
  }
  return puStack_108;
}



/* Entry: 10b93bcec; end: 10b93bebb;  */

void FUN_10b93bcec(long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam00000001137fd1c8 & 1) == 0) {
    iVar1 = 0x137fd1c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd1c0,&UNK_10f7ce441);
      ___cxa_guard_release(0x1137fd1c8);
    }
  }
  lVar5 = *param_2;
  uVar2 = *param_3;
  FUN_10b93fc2c(uVar2,0x1137fd1c0);
  if ((int)uVar2 == 0) {
    uStack_78 = *param_3;
    *param_3 = 0;
    func_0x00010b92c9dc(param_2,&uStack_78,0);
    FUN_10b92e3b8(uStack_78);
  }
  else {
    func_0x00010b93fc94(&uStack_58,*param_3,0x1137fd1c0);
    puVar3 = (undefined8 *)0x70;
    __Znwm();
    *puVar3 = &PTR_FUN_110d77700;
    puVar3[1] = 1;
    puVar3[3] = 0;
    puVar4 = puVar3 + 2;
    *puVar4 = &PTR_FUN_110d79300;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = &DAT_11383d918;
    puVar3[0xc] = 0;
    *(undefined1 *)(puVar3 + 0xd) = 0;
    puStack_60 = puVar3;
    func_0x000107c3034c(puVar4,uStack_58,uStack_50);
    if (((ulong)puVar4 & 1) == 0) {
      FUN_10b93bebc(&uStack_68);
      FUN_10b93bcec(param_1,param_2,&uStack_68);
      FUN_10b92e3b8(uStack_68);
    }
    else {
      FUN_10b938f04(*(undefined8 *)(param_1 + 0x28),lVar5 + 0x10,&puStack_60);
      iVar1 = *(int *)(puStack_60 + 6);
      if ((*(byte *)(puStack_60 + 4) & 1) == 0) {
        uStack_70 = *param_3;
        *param_3 = 0;
        func_0x00010b92c9dc(param_2,&uStack_70,0 < iVar1);
        FUN_10b92e3b8(uStack_70);
        puVar3 = puStack_60;
      }
      else {
        lVar5 = *param_2;
        *(undefined1 *)(lVar5 + 0x21) = 1;
        *(bool *)(lVar5 + 0x20) = 0 < iVar1;
        puVar3 = puStack_60;
      }
    }
    func_0x00010b93a2e4(puVar3);
  }
  return;
}



/* Entry: 10b93bebc; end: 10b93bf67;  */

long **** FUN_10b93bebc(long *param_1,undefined8 param_2,long ****param_3,long ****param_4)

{
  undefined8 ****ppppuVar1;
  long **pplVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long ****pppplVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 ****extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long unaff_x20;
  undefined8 uVar10;
  long ***ppplVar11;
  long ***ppplVar12;
  long ***ppplStack_1e8;
  long lStack_1e0;
  long **pplStack_1d8;
  long **pplStack_1d0;
  long **pplStack_1c8;
  long **pplStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_188;
  undefined8 uStack_140;
  undefined8 ***pppuStack_138;
  undefined8 uStack_130;
  char cStack_121;
  undefined8 **appuStack_120 [3];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  long ***ppplStack_d8;
  long lStack_d0;
  long lStack_c8;
  long alStack_50 [2];
  long **applStack_40 [2];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b93f470();
  uStack_28 = extraout_x8;
  FUN_10b93986c(applStack_40,1);
  puVar6 = puStack_30;
  *puStack_30 = &PTR_FUN_110d77978;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110d77f80;
  puStack_30[6] = 0;
  puStack_30[7] = 0;
  puStack_30[8] = 0;
  puStack_30[9] = &UNK_10dd5b8b0;
  puStack_30[0xb] = 0;
  puStack_30[0xc] = 0;
  puStack_30[10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x10] = 0;
  puStack_30 = (undefined8 *)0x0;
  FUN_10b939850(alStack_50,puVar6 + 3);
  pppplVar4 = (long ****)applStack_40;
  FUN_10b939988(pppplVar4);
  *param_1 = alStack_50[0];
  func_0x00010b93f45c(uStack_28);
  if ((bool)in_ZR) {
    return pppplVar4;
  }
  ___stack_chk_fail();
  pppplVar4 = param_3;
  pppplVar9 = param_4;
  func_0x00010b93f56c();
  func_0x00010b93f470();
  ppppuVar7 = (undefined8 ****)0x2e;
  pppplVar8 = pppplVar4;
  func_0x00010b9a5f34();
  if (((ulong)ppppuVar7 & 1) == 0) {
    func_0x0001080da3e4();
    goto LAB_10b93c1ac;
  }
  ppppuVar7 = (undefined8 ****)((long)pppplVar4 + 1);
  FUN_10b9a6470(&ppplStack_d8,param_3);
  func_0x00010b9387bc(&lStack_d0,param_3);
  uVar3 = 0;
  if (lStack_d0 == 1) {
    func_0x00010b9495fc(auStack_f0,param_4);
    FUN_10b9a2108(auStack_108,&stack0xffffffffffffff40);
    if (*(long *)(unaff_x20 + 0x58) != -1) {
      pppuStack_138 = appuStack_120;
      appuStack_120[0] = (undefined8 **)&stack0xffffffffffffff40;
      __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(unaff_x20 + 0x58),&pppuStack_138,0x10b93ed80);
    }
    FUN_10b9305a8(&stack0xffffffffffffff40,auStack_f0,&ppplStack_d8);
    func_0x000107c2793c(&UNK_10f7cdf64);
    pppplVar9 = (long ****)&stack0xffffffffffffff40;
    func_0x000107c3173c(&pppuStack_138);
    uVar3 = cStack_121 == '\0';
    ppppuVar1 = (undefined8 ****)pppuStack_138;
    if (-1 < cStack_121) {
      ppppuVar1 = &pppuStack_138;
    }
    FUN_10b9a2434(appuStack_120,auStack_108,&stack0xffffffffffffff40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_138);
    plVar5 = *(long **)(unaff_x20 + 0x20);
    (**(code **)(*plVar5 + 0x20))(plVar5,appuStack_120);
    if (((ulong)plVar5 & 1) == 0) {
      ppppuVar7 = (undefined8 ****)appuStack_120;
      (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x38))(&stack0xffffffffffffff40);
      func_0x0001080c6234(&stack0xffffffffffffff40);
      uVar3 = ppppuVar1 == (undefined8 ****)0x1;
      if ((bool)uVar3) goto LAB_10b93c0d8;
    }
    else {
LAB_10b93c0d8:
      (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x60))
                (&uStack_140,*(long **)(unaff_x20 + 0x20),appuStack_120);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
      ppppuVar7 = (undefined8 ****)0x0;
      if (*param_1 != 0) {
        do {
          func_0x00010b93f4b4();
          ppppuVar7 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      uStack_130 = 0;
      pppuStack_138 = ppppuVar7;
      if (lStack_c8 != 0) {
        do {
          func_0x00010b93f4d4();
          uStack_130 = extraout_x8_02;
        } while (extraout_w11_00 != 0);
      }
      FUN_10b9a8bb4(&stack0xffffffffffffff40,&uStack_140);
      ppppuVar7 = &pppuStack_138;
      param_4 = (long ****)&stack0xffffffffffffff40;
      FUN_10b927734(uVar10);
      FUN_10b9a8cb4(&stack0xffffffffffffff40);
      FUN_10b9244a4(&pppuStack_138);
      func_0x000107c278f8(uStack_140);
    }
    func_0x0001080c9d44(appuStack_120);
    func_0x0001080c9d44(auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    pppplVar8 = param_4;
  }
  func_0x000104bdd63c(&lStack_d0);
  func_0x000107c278f8();
  func_0x00010b93f45c(extraout_x8_00);
  in_ZR = 0;
  pppplVar4 = (long ****)ppplStack_d8;
  if ((bool)uVar3) {
    return (long ****)ppplStack_d8;
  }
LAB_10b93c1ac:
  ___stack_chk_fail();
  func_0x00010b93f470();
  uStack_188 = extraout_x8_03;
  do {
    func_0x00010b93f4c4();
  } while (extraout_w10 != 0);
  lStack_1e0 = 0;
  ppplStack_1e8 = (long ***)pppplVar4;
  if (*ppppuVar7 != (undefined8 ***)0x0) {
    do {
      func_0x00010b93f4b4();
      lStack_1e0 = extraout_x8_04;
    } while (extraout_w11_01 != 0);
  }
  ppplVar12 = *pppplVar8;
  if (ppplVar12 != (long ***)0x0) {
    do {
      func_0x00010b93f5b8();
    } while (extraout_w10_00 != 0);
  }
  ppplVar11 = *pppplVar9;
  pplStack_1d8 = (long **)ppplVar12;
  if (ppplVar11 != (long ***)0x0) {
    func_0x00010b93f4a4();
  }
  pplStack_1c0 = (long **)pppplVar9[2];
  pplStack_1c8 = (long **)pppplVar9[1];
  pcStack_1b8 = FUN_10b93dbf8;
  ppuStack_1b0 = &PTR_FUN_110d77c38;
  puVar6 = (undefined8 *)0x30;
  pplStack_1d0 = (long **)ppplVar11;
  __Znwm();
  *puVar6 = ppplStack_1e8;
  ppplStack_1e8 = (long ***)0x0;
  uVar10 = 0;
  if (lStack_1e0 != 0) {
    do {
      func_0x00010b93f4b4();
      uVar10 = extraout_x8_05;
      ppplVar12 = (long ***)pplStack_1d8;
    } while (extraout_w11_02 != 0);
  }
  puVar6[1] = uVar10;
  if (ppplVar12 != (long ***)0x0) {
    do {
      func_0x00010b93f5b8();
    } while (extraout_w10_01 != 0);
  }
  pplVar2 = pplStack_1d0;
  puVar6[2] = ppplVar12;
  if ((long ***)pplStack_1d0 != (long ***)0x0) {
    func_0x00010b93f4a4();
  }
  puVar6[3] = pplVar2;
  puVar6[5] = pplStack_1c0;
  puVar6[4] = pplStack_1c8;
  puStack_1a8 = puVar6;
  func_0x00010b93f5c8();
  (*(code *)*ppuStack_1b0)(&ppuStack_1b0);
  pppplVar4 = &ppplStack_1e8;
  FUN_10b93c2f0();
  func_0x00010b93f45c(uStack_188);
  if ((bool)in_ZR) {
    return pppplVar4;
  }
  ___stack_chk_fail();
  if (pppplVar4[3] != (long ***)0x0) {
    func_0x00010b93f584();
  }
  func_0x000107c278f4(pppplVar4 + 2);
  func_0x0001080d5ad4(pppplVar4 + 1);
  FUN_10b93dce4(*pppplVar4);
  return pppplVar4;
}



/* Entry: 10b93bf68; end: 10b93c2ef;  */

long **** FUN_10b93bf68(undefined8 param_1,undefined8 param_2,long ****param_3,long ****param_4)

{
  undefined8 ****ppppuVar1;
  long **pplVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long ****pppplVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined8 extraout_x8;
  undefined8 ****extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  long ***ppplVar11;
  long ***ppplVar12;
  long ***ppplStack_198;
  long lStack_190;
  long **pplStack_188;
  long **pplStack_180;
  long **pplStack_178;
  long **pplStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_138;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  char cStack_d1;
  undefined8 **appuStack_d0 [3];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long ***ppplStack_88;
  long lStack_80;
  long lStack_78;
  
  pppplVar4 = param_3;
  pppplVar9 = param_4;
  func_0x00010b93f56c();
  func_0x00010b93f470();
  ppppuVar7 = (undefined8 ****)0x2e;
  pppplVar8 = pppplVar4;
  func_0x00010b9a5f34();
  if (((ulong)ppppuVar7 & 1) == 0) {
    func_0x0001080da3e4();
    goto LAB_10b93c1ac;
  }
  ppppuVar7 = (undefined8 ****)((long)pppplVar4 + 1);
  FUN_10b9a6470(&ppplStack_88,param_3);
  func_0x00010b9387bc(&lStack_80,param_3);
  uVar3 = 0;
  if (lStack_80 == 1) {
    func_0x00010b9495fc(auStack_a0,param_4);
    FUN_10b9a2108(auStack_b8,&stack0xffffffffffffff90);
    if (*(long *)(unaff_x20 + 0x58) != -1) {
      pppuStack_e8 = appuStack_d0;
      appuStack_d0[0] = (undefined8 **)&stack0xffffffffffffff90;
      __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(unaff_x20 + 0x58),&pppuStack_e8,0x10b93ed80);
    }
    FUN_10b9305a8(&stack0xffffffffffffff90,auStack_a0,&ppplStack_88);
    func_0x000107c2793c(&UNK_10f7cdf64);
    pppplVar9 = (long ****)&stack0xffffffffffffff90;
    func_0x000107c3173c(&pppuStack_e8);
    uVar3 = cStack_d1 == '\0';
    ppppuVar1 = (undefined8 ****)pppuStack_e8;
    if (-1 < cStack_d1) {
      ppppuVar1 = &pppuStack_e8;
    }
    FUN_10b9a2434(appuStack_d0,auStack_b8,&stack0xffffffffffffff90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_e8);
    plVar5 = *(long **)(unaff_x20 + 0x20);
    (**(code **)(*plVar5 + 0x20))(plVar5,appuStack_d0);
    if (((ulong)plVar5 & 1) == 0) {
      ppppuVar7 = (undefined8 ****)appuStack_d0;
      (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x38))(&stack0xffffffffffffff90);
      func_0x0001080c6234(&stack0xffffffffffffff90);
      uVar3 = ppppuVar1 == (undefined8 ****)0x1;
      if ((bool)uVar3) goto LAB_10b93c0d8;
    }
    else {
LAB_10b93c0d8:
      (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x60))
                (&uStack_f0,*(long **)(unaff_x20 + 0x20),appuStack_d0);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
      ppppuVar7 = (undefined8 ****)0x0;
      if (*unaff_x19 != 0) {
        do {
          func_0x00010b93f4b4();
          ppppuVar7 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uStack_e0 = 0;
      pppuStack_e8 = ppppuVar7;
      if (lStack_78 != 0) {
        do {
          func_0x00010b93f4d4();
          uStack_e0 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      FUN_10b9a8bb4(&stack0xffffffffffffff90,&uStack_f0);
      ppppuVar7 = &pppuStack_e8;
      param_4 = (long ****)&stack0xffffffffffffff90;
      FUN_10b927734(uVar10);
      FUN_10b9a8cb4(&stack0xffffffffffffff90);
      FUN_10b9244a4(&pppuStack_e8);
      func_0x000107c278f8(uStack_f0);
    }
    func_0x0001080c9d44(appuStack_d0);
    func_0x0001080c9d44(auStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    pppplVar8 = param_4;
  }
  func_0x000104bdd63c(&lStack_80);
  func_0x000107c278f8();
  func_0x00010b93f45c(extraout_x8);
  in_ZR = 0;
  pppplVar4 = (long ****)ppplStack_88;
  if ((bool)uVar3) {
    return (long ****)ppplStack_88;
  }
LAB_10b93c1ac:
  ___stack_chk_fail();
  func_0x00010b93f470();
  uStack_138 = extraout_x8_02;
  do {
    func_0x00010b93f4c4();
  } while (extraout_w10 != 0);
  lStack_190 = 0;
  ppplStack_198 = (long ***)pppplVar4;
  if (*ppppuVar7 != (undefined8 ***)0x0) {
    do {
      func_0x00010b93f4b4();
      lStack_190 = extraout_x8_03;
    } while (extraout_w11_01 != 0);
  }
  ppplVar12 = *pppplVar8;
  if (ppplVar12 != (long ***)0x0) {
    do {
      func_0x00010b93f5b8();
    } while (extraout_w10_00 != 0);
  }
  ppplVar11 = *pppplVar9;
  pplStack_188 = (long **)ppplVar12;
  if (ppplVar11 != (long ***)0x0) {
    func_0x00010b93f4a4();
  }
  pplStack_170 = (long **)pppplVar9[2];
  pplStack_178 = (long **)pppplVar9[1];
  pcStack_168 = FUN_10b93dbf8;
  ppuStack_160 = &PTR_FUN_110d77c38;
  puVar6 = (undefined8 *)0x30;
  pplStack_180 = (long **)ppplVar11;
  __Znwm();
  *puVar6 = ppplStack_198;
  ppplStack_198 = (long ***)0x0;
  uVar10 = 0;
  if (lStack_190 != 0) {
    do {
      func_0x00010b93f4b4();
      uVar10 = extraout_x8_04;
      ppplVar12 = (long ***)pplStack_188;
    } while (extraout_w11_02 != 0);
  }
  puVar6[1] = uVar10;
  if (ppplVar12 != (long ***)0x0) {
    do {
      func_0x00010b93f5b8();
    } while (extraout_w10_01 != 0);
  }
  pplVar2 = pplStack_180;
  puVar6[2] = ppplVar12;
  if ((long ***)pplStack_180 != (long ***)0x0) {
    func_0x00010b93f4a4();
  }
  puVar6[3] = pplVar2;
  puVar6[5] = pplStack_170;
  puVar6[4] = pplStack_178;
  puStack_158 = puVar6;
  func_0x00010b93f5c8();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  pppplVar4 = &ppplStack_198;
  FUN_10b93c2f0();
  func_0x00010b93f45c(uStack_138);
  if ((bool)in_ZR) {
    return pppplVar4;
  }
  ___stack_chk_fail();
  if (pppplVar4[3] != (long ***)0x0) {
    func_0x00010b93f584();
  }
  func_0x000107c278f4(pppplVar4 + 2);
  func_0x0001080d5ad4(pppplVar4 + 1);
  FUN_10b93dce4(*pppplVar4);
  return pppplVar4;
}



/* Entry: 10b93c2f0; end: 10b93c327;  */

undefined8 * FUN_10b93c2f0(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    func_0x00010b93f584();
  }
  func_0x000107c278f4(param_1 + 2);
  func_0x0001080d5ad4(param_1 + 1);
  FUN_10b93dce4(*param_1);
  return param_1;
}



/* Entry: 10b93c328; end: 10b93c433;  */

undefined8 * FUN_10b93c328(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  puVar2 = &uStack_a0;
  puVar1 = param_1;
  func_0x00010b93f470();
  plVar3 = (long *)puVar1[6];
  uStack_48 = extraout_x8;
  do {
    func_0x00010b93f4c4();
  } while (extraout_w10 != 0);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    do {
      func_0x00010b93f4c4();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = *param_3;
  lStack_98 = lVar5;
  if (lVar4 != 0) {
    func_0x00010b93f4a4();
  }
  lStack_80 = param_3[2];
  lStack_88 = param_3[1];
  pcStack_78 = FUN_10b93dd10;
  ppuStack_70 = &PTR_FUN_110d77c58;
  lStack_90 = lVar4;
  func_0x00010b93f640();
  *puVar1 = param_1;
  uStack_a0 = 0;
  if (lVar5 != 0) {
    do {
      func_0x00010b93f4c4();
    } while (extraout_w10_01 != 0);
  }
  puVar1[1] = lVar5;
  if (lVar4 != 0) {
    func_0x00010b93f4a4();
  }
  puVar1[2] = lVar4;
  puVar1[4] = lStack_80;
  puVar1[3] = lStack_88;
  puStack_68 = puVar1;
  (**(code **)(*plVar3 + 0x28))(plVar3,&pcStack_78);
  func_0x00010b93f6e0(ppuStack_70);
  FUN_10b93c434();
  func_0x00010b93f45c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (puVar2[2] != 0) {
      func_0x00010b93f584();
    }
    func_0x0001080d5ad4(puVar2 + 1);
    FUN_10b93dce4(*puVar2);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b93c434; end: 10b93c463;  */

undefined8 * FUN_10b93c434(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    func_0x00010b93f584();
  }
  func_0x0001080d5ad4(param_1 + 1);
  FUN_10b93dce4(*param_1);
  return param_1;
}



/* Entry: 10b93c464; end: 10b93c46b;  */

void FUN_10b93c464(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 extraout_x8_00;
  long lVar8;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long lStack_80;
  long alStack_78 [2];
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 uStack_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  func_0x00010b92bce8(*(undefined8 *)(param_1 + 0x38));
  func_0x00010b92bbfc();
  uStack_38 = extraout_x8;
  FUN_10b927b4c(auStack_48,param_2);
  plStack_58 = unaff_x20 + 0xb;
  uStack_50 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  plVar4 = unaff_x20 + 0x13;
  func_0x00010b927bc8();
  lVar7 = unaff_x20[0x13];
  lVar8 = unaff_x20[0x16];
  plStack_68 = plVar4;
  plStack_60 = param_2;
  while (plVar4 = plStack_60, uVar2 = plStack_68 == (long *)(lVar7 + lVar8), !(bool)uVar2) {
    if (*plStack_60 == *unaff_x19) {
      func_0x00010b92bf4c(alStack_78);
      lVar1 = alStack_78[0];
      if (alStack_78[0] != 0) {
        if (*(long *)(alStack_78[0] + 0x10) != 0) {
          do {
            func_0x00010b92bcf4();
          } while (extraout_w10 != 0);
        }
        lStack_80 = lVar1;
        plVar5 = plVar4;
        FUN_10b9244cc(plVar4);
        FUN_10b927bf4(&lStack_80,plVar5,auStack_48);
        FUN_10b92a548(lVar1);
      }
      FUN_10b92a478(alStack_78);
    }
    FUN_10b927c5c(&plStack_68);
    unaff_x20 = plVar4;
  }
  func_0x000107c2851c(&plStack_58);
  puVar6 = auStack_48;
  func_0x00010b8fc3ac();
  func_0x00010b92bbd4(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    if ((bRam0000000113846818 & 1) == 0) {
      iVar3 = 0x13846818;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000107c31088(0x113846810,&UNK_10f7cde72);
        ___cxa_guard_release(0x113846818);
      }
    }
    func_0x00010b92fb68(*puVar6,0x113846810);
    func_0x00010b92fa40();
    func_0x00010b92d9c4(extraout_x8_00,unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x20 + 6);
    return;
  }
  return;
}



/* Entry: 10b93c46c; end: 10b93c50f;  */

uint FUN_10b93c46c(long param_1,long param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  uint uVar2;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x00010b93f564();
  param_1 = param_1 + 0x90;
  func_0x00010b93c4e4(param_1,param_2);
  func_0x00010b93f688();
  if (extraout_x8 == param_1) {
    func_0x00010b93f5a4();
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    func_0x00010b92c4bc(&uStack_28,param_2 + 8);
    func_0x00010b93f5a4();
    uVar1 = uStack_28;
    func_0x00010b92dd78(uStack_28);
    uVar2 = (uint)uVar1 ^ 1;
    uVar1 = uStack_28;
  }
  func_0x0001080d5af4(uVar1);
  return uVar2;
}



/* Entry: 10b93c510; end: 10b93cb97;  */

void FUN_10b93c510(undefined8 *param_1,long *param_2,undefined8 *****param_3,undefined8 *****param_4
                  )

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar10;
  undefined8 extraout_x8_01;
  long lVar11;
  ulong uVar12;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar16;
  long unaff_x22;
  undefined8 ****ppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  uint uVar20;
  long lStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined8 ****ppppuStack_338;
  undefined1 **ppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [32];
  undefined8 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  char *pcStack_2c8;
  undefined8 auStack_2c0 [4];
  long lStack_2a0;
  long *plStack_298;
  char cStack_290;
  long alStack_288 [2];
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 ****ppppuStack_258;
  long *plStack_250;
  undefined8 *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 ***pppuStack_228;
  undefined8 ***pppuStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 auStack_1f8 [16];
  long *plStack_1e8;
  undefined1 uStack_1e0;
  undefined8 ***apppuStack_1d8 [3];
  undefined2 uStack_1ba;
  undefined8 uStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 ****ppppuStack_198;
  undefined8 ****ppppuStack_190;
  byte bStack_181;
  undefined8 uStack_180;
  undefined8 ****ppppuStack_178;
  undefined1 auStack_170 [88];
  undefined1 uStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 ****appppuStack_108 [15];
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar9 = param_2;
  func_0x00010b93f470();
  plStack_1e8 = plVar9 + 0x1d;
  uStack_1e0 = 1;
  uStack_70 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  plVar9 = param_2 + 0x12;
  pppppuVar19 = param_3;
  func_0x00010b93c4e4();
  uVar5 = (long *)(param_2[0x12] + param_2[0x15]) == plVar9;
  if (!(bool)uVar5) {
    uVar13 = 0;
    if (pppppuVar19[1] != (undefined8 ****)0x0) {
      do {
        func_0x00010b93f4b4();
        uVar13 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    *param_1 = uVar13;
    goto LAB_10b93cb60;
  }
  auStack_170[0] = 0;
  uStack_118 = 0;
  func_0x000105c3b044();
  if ((int)plVar9 != 0) {
    func_0x00010b9a7520(&ppppuStack_110,&UNK_10f7ce466,0x10,param_3);
    func_0x00010b8a6ed0(auStack_170,&ppppuStack_110);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_110);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_4 = (undefined8 *****)param_2[0x11];
  ppppuVar17 = *param_3;
  lVar11 = 0x178;
  __Znwm();
  if (ppppuVar17 != (undefined8 ****)0x0) {
    do {
      func_0x00010b93f5b8();
    } while (extraout_w10 != 0);
  }
  ppppuStack_110 = ppppuVar17;
  func_0x00010b92ca90();
  lStack_90 = lVar11;
  func_0x000107c278f8(ppppuStack_110);
  plVar9 = param_2 + 0x12;
  FUN_10b93e930(plVar9,param_3);
  lVar11 = 0;
  uVar12 = (ulong)plVar9 >> 7;
  while( true ) {
    uVar12 = uVar12 & param_2[0x15];
    uVar16 = *(ulong *)(param_2[0x12] + uVar12);
    uVar15 = uVar16 ^ ((ulong)plVar9 & 0x7f) * 0x101010101010101;
    for (uVar15 = uVar15 + 0xfefefefefefefeff & (uVar15 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar2 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar14 = param_2[0x13];
      plVar6 = (long *)(uVar12 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                       param_2[0x15]);
      if (*(undefined8 *****)(lVar14 + (long)plVar6 * 0x10) == *param_3) goto LAB_10b93c704;
    }
    if ((uVar16 & ~uVar16 << 6 & 0x8080808080808080) != 0) break;
    lVar11 = lVar11 + 8;
    uVar12 = lVar11 + uVar12;
  }
  plVar6 = param_2 + 0x12;
  FUN_10b93e974(plVar6,plVar9);
  puVar10 = (undefined8 *)(param_2[0x13] + (long)plVar6 * 0x10);
  ppppuVar17 = *param_3;
  if (ppppuVar17 != (undefined8 ****)0x0) {
    ppppuVar7 = ppppuVar17 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppuVar7,0x10);
      if (bVar4) {
        *(int *)ppppuVar7 = *(int *)ppppuVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar10 = ppppuVar17;
  puVar10[1] = 0;
  *(byte *)(param_2[0x12] + (long)plVar6) = (byte)plVar9 & 0x7f;
  func_0x00010b93f544();
  lVar14 = param_2[0x13];
LAB_10b93c704:
  func_0x00010b92c4bc(lVar14 + (long)plVar6 * 0x10 + 8,&lStack_90);
  FUN_10b92c974(auStack_1f8,lStack_90);
  func_0x0001080d5af4(lStack_90);
  cVar3 = *(char *)((long)param_2 + 0x61);
  unaff_x22 = param_2[9];
  if (unaff_x22 != 0) {
    do {
      func_0x00010b93f4c4();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108a1e998(&lStack_210,param_2 + 0xe);
  plVar9 = (long *)param_2[10];
  if (plVar9 != (long *)0x0) {
    do {
      func_0x00010b93f4c4();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001080ea3b0(&plStack_1e8);
  if (((unaff_x22 == 0) || (lVar11 = unaff_x22, FUN_10b94d4e4(), (int)lVar11 == 0)) ||
     (lStack_210 == lStack_208)) {
    uVar20 = 0;
  }
  else {
    lVar11 = unaff_x22;
    FUN_10b94d4f0(unaff_x22,param_3);
    uVar20 = (uint)lVar11 ^ 1;
  }
  func_0x000107c31088(&uStack_218,&UNK_10f7ce477);
  ppppuStack_110 = (undefined8 ****)&UNK_10f7ce419;
  appppuStack_108[0] = (undefined8 *****)0xc;
  FUN_10b9a63dc(&uStack_1b8,param_3,&ppppuStack_110);
  (**(code **)(*(long *)param_2[2] + 0x10))(&lStack_90,(long *)param_2[2],&uStack_1b8);
  if (lStack_90 == 1) {
LAB_10b93c8cc:
    uStack_1ba = 0;
    func_0x00010b9214bc(apppuStack_1d8);
    if (uVar20 == 0) {
      FUN_10b93fd24(&ppppuStack_110,uStack_80,uStack_78);
    }
    else {
      ppppuVar17 = *param_3;
      if (ppppuVar17 == (undefined8 ****)0x0) {
        uVar8 = 0;
        ppppuVar7 = (undefined8 ****)&UNK_10f7d0ef0;
      }
      else {
        ppppuVar7 = ppppuVar17 + 3;
        uVar8 = *(undefined4 *)((long)ppppuVar17 + 0xc);
      }
      func_0x00010b949608(&ppppuStack_198,ppppuVar7,uVar8);
      appppuStack_108[0] = ppppuStack_190;
      ppppuStack_110 = ppppuStack_198;
      if (-1 < (char)bStack_181) {
        appppuStack_108[0] = (undefined8 *****)(ulong)bStack_181;
        ppppuStack_110 = &ppppuStack_198;
      }
      FUN_10b9a2434(&ppppuStack_1b0,&lStack_210,&ppppuStack_110);
      param_4 = &ppppuStack_1b0;
      FUN_10b9400ac(&ppppuStack_110,uStack_80,uStack_78,param_4,(long)&uStack_1ba + 1,&uStack_1ba);
      func_0x0001080c9d44(&ppppuStack_1b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_198);
    }
    pppppuVar19 = (undefined8 *****)apppuStack_1d8;
    func_0x000107c28148();
    uVar5 = (undefined8 *****)ppppuStack_110 == (undefined8 *****)0x1;
    ppppuStack_198 = pppppuVar19;
    if ((bool)uVar5) {
      if (plVar9 != (long *)0x0) {
        if (uVar20 == 0) {
          puVar10 = (undefined8 *)(*plVar9 + 0x130);
LAB_10b93c9e0:
          func_0x00010b93f714(*puVar10);
        }
        else {
          if (uStack_1ba._1_1_ != '\x01') {
            puVar10 = (undefined8 *)(*plVar9 + 0x128);
            goto LAB_10b93c9e0;
          }
          func_0x00010b93f714(*(undefined8 *)(*plVar9 + 0x120));
          if ((char)uStack_1ba == '\x01') {
            puVar10 = (undefined8 *)(*plVar9 + 0x140);
            goto LAB_10b93c9e0;
          }
        }
        param_4 = &ppppuStack_198;
        (**(code **)(*plVar9 + 0x138))(plVar9,param_3);
        uVar5 = (undefined8 *****)ppppuStack_110 == (undefined8 *****)0x1;
        if (!(bool)uVar5) goto LAB_10b93ca2c;
      }
      func_0x00010b938328(&ppppuStack_1b0,appppuStack_108);
      pppppuVar19 = (undefined8 *****)0x1;
      uStack_180 = 1;
      ppppuStack_178 = ppppuStack_1b0;
    }
    else {
LAB_10b93ca2c:
      pppppuVar19 = (undefined8 *****)0x0;
      uStack_180 = 2;
      ppppuStack_178 = appppuStack_108[0];
      appppuStack_108[0] = (undefined8 *****)0x0;
    }
    func_0x000105c3e664(&ppppuStack_110);
    func_0x0001080c5c8c(&lStack_90);
    func_0x000107c278f8(uStack_1b8);
    pppppuVar18 = (undefined8 *****)ppppuStack_178;
    if ((int)pppppuVar19 == 0) goto LAB_10b93cad0;
    if (cVar3 == '\0') {
      if (((undefined8 *****)ppppuStack_178 != (undefined8 *****)0x0) &&
         ((undefined8 ****)ppppuStack_178[2] != (undefined8 ****)0x0)) {
        do {
          func_0x00010b93f620();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010b93f5f0();
      goto LAB_10b93cb10;
    }
    pppppuVar19 = (undefined8 *****)ppppuStack_178;
    FUN_10b93fc2c(ppppuStack_178,&uStack_218);
    if ((pppppuVar18 != (undefined8 *****)0x0) && (pppppuVar18[2] != (undefined8 ****)0x0)) {
      do {
        func_0x00010b93f620();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010b93f5f0();
    FUN_10b92e3b8(pppuStack_228);
    func_0x00010b93f5dc();
    if ((int)pppppuVar19 != 0) {
      param_3 = &ppppuStack_110;
      FUN_10b92ce64(&ppppuStack_110,pppppuVar18,&uStack_218);
      param_4 = appppuStack_108;
      FUN_10b93c328(param_2,auStack_1f8);
      func_0x0001080c5c8c(&ppppuStack_110);
    }
  }
  else {
    pppppuVar18 = (undefined8 *****)param_2[2];
    ppppuStack_198 = (undefined8 ****)&UNK_10f7ce419;
    ppppuStack_190 = (undefined8 *****)0xc;
    FUN_10b9a63dc(&ppppuStack_1b0,param_3,&ppppuStack_198);
    (*(code *)(*pppppuVar18)[2])(&ppppuStack_110,pppppuVar18,&ppppuStack_1b0);
    pppppuVar19 = (undefined8 *****)ppppuStack_1b0;
    func_0x000107c278f8();
    ppppuVar17 = ppppuStack_110;
    if ((undefined8 *****)ppppuStack_110 == (undefined8 *****)0x1) {
      FUN_10b8da69c(&lStack_90,&ppppuStack_110);
      pppppuVar19 = pppppuVar18;
    }
    else {
      func_0x000107c31084();
      puStack_1a8 = &UNK_1003ab990;
      ppppuStack_1b0 = param_3;
      func_0x000107c2793c(&UNK_10f7ce426);
      param_4 = (undefined8 *****)0xf;
      func_0x000107c3173c(&ppppuStack_198);
      func_0x000107c31080(apppuStack_1d8,pppppuVar19,&ppppuStack_198);
      FUN_10b99fa14(&ppppuStack_1b0,auStack_88,apppuStack_1d8);
      uStack_180 = 2;
      ppppuStack_178 = ppppuStack_1b0;
      ppppuStack_1b0 = (undefined8 *****)0x0;
      func_0x000107c278f8(apppuStack_1d8[0]);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_198);
    }
    func_0x0001080c5c8c(&ppppuStack_110);
    uVar5 = (undefined8 *****)ppppuVar17 == (undefined8 *****)0x1;
    if ((bool)uVar5) goto LAB_10b93c8cc;
    func_0x0001080c5c8c(&lStack_90);
    func_0x000107c278f8(uStack_1b8);
LAB_10b93cad0:
    pppppuVar18 = pppppuVar19;
    FUN_10b93bebc(&pppuStack_220);
    param_4 = (undefined8 *****)&pppuStack_220;
    FUN_10b93bcec(param_2,auStack_1f8);
    pppuStack_228 = pppuStack_220;
LAB_10b93cb10:
    FUN_10b92e3b8(pppuStack_228);
    func_0x00010b93f5dc();
  }
  do {
    func_0x00010b93f4c4();
  } while (extraout_w10_04 != 0);
  *param_1 = pppppuVar18;
  FUN_10b93a728(&uStack_180);
  func_0x000107c278f8(uStack_218);
  func_0x000104bd474c(plVar9);
  func_0x0001080c9d44(&lStack_210);
  func_0x00010b8fb1f8(unaff_x22);
  func_0x00010b92c9ac(auStack_1f8);
  func_0x0001080e8dd4(auStack_170);
LAB_10b93cb60:
  func_0x0001080eb338(&plStack_1e8);
  func_0x00010b93f45c(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_10b93cb98;
  lStack_260 = unaff_x22;
  ppppuStack_258 = param_3;
  plStack_250 = param_2;
  puStack_248 = param_1;
  puStack_240 = &stack0xfffffffffffffff0;
  func_0x00010b93f66c();
  func_0x00010b93f470();
  pcStack_2c8 = ".map.json";
  auStack_2c0[0] = 9;
  uStack_268 = extraout_x8_01;
  func_0x00010b93f72c(&lStack_2d0);
  (*(code *)(*param_3[2])[2])(alStack_288,param_3[2],&lStack_2d0);
  uVar5 = 0;
  if (alStack_288[0] == 1) {
    FUN_10b9ad2f0(&lStack_2a0,uStack_278);
    uVar5 = 0;
    if ((lStack_2a0 == 1) && (uVar5 = 0, cStack_290 == '\b')) {
      pcStack_2c8 = "/";
      auStack_2c0[0] = 1;
      func_0x00010b93f72c(&lStack_2d8);
      func_0x000107c31088(&lStack_2e0,&DAT_10f2f41e7);
      plVar9 = plStack_298;
      if (cStack_290 != '\b') {
        plVar9 = (long *)0x0;
      }
      plVar6 = plVar9 + 2;
      func_0x00010527d444();
      lVar11 = plVar9[2];
      lVar14 = plStack_298[5];
      param_2 = plStack_298;
      plStack_2f0 = plVar6;
      plStack_2e8 = plStack_270;
      while (plVar9 = plStack_2e8, uVar5 = plStack_2f0 == (long *)(lVar11 + lVar14), !(bool)uVar5) {
        if ((((*(byte *)(plStack_2e8 + 2) & 0xfe) == 2) &&
            (plVar6 = plStack_2e8, func_0x00010b9a6130(plStack_2e8,&lStack_2d8), (int)plVar6 != 0))
           && (plVar6 = plVar9, FUN_10b9a61b0(plVar9,&lStack_2e0), (int)plVar6 != 0)) {
          if (lStack_2d8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(lStack_2d8 + 0xc);
          }
          uVar12 = 0;
          if (*plVar9 != 0) {
            uVar12 = (ulong)*(uint *)(*plVar9 + 0xc);
          }
          uVar15 = 0;
          if (lStack_2e0 != 0) {
            uVar15 = (ulong)*(uint *)(lStack_2e0 + 0xc);
          }
          FUN_10b9a6488(&uStack_2f8,plVar9,uVar8,uVar12 - uVar15);
          FUN_10b92d094(&pcStack_2c8,param_4,&uStack_2f8);
          if (pcStack_2c8 == (char *)0x1) {
            FUN_10b9a9358(&uStack_320,plVar9 + 1);
            func_0x00010b92dde8(auStack_318,auStack_2c0,&uStack_320);
            FUN_10b92d358(param_4,&uStack_2f8,auStack_318);
            func_0x00010b92ddb8(auStack_318);
            func_0x000107c278f8(uStack_320);
          }
          func_0x00010b8fbe80(&pcStack_2c8);
          func_0x000107c278f8(uStack_2f8);
        }
        func_0x00010527d4cc(&plStack_2f0);
        param_2 = plVar9;
      }
      func_0x000107c278f8(lStack_2e0);
      func_0x000107c278f8(lStack_2d8);
    }
    func_0x000104bda914(&lStack_2a0);
  }
  func_0x0001080c5c8c(alStack_288);
  func_0x000107c278f8();
  func_0x00010b93f45c(uStack_268);
  if ((bool)uVar5) {
    return;
  }
  lVar11 = lStack_2d0;
  ___stack_chk_fail();
  uStack_328 = 0x10b93cdac;
  *extraout_x8_02 = 0;
  extraout_x8_02[1] = 0;
  extraout_x8_02[2] = 0;
  plStack_340 = param_2;
  ppppuStack_338 = param_4;
  ppuStack_330 = &puStack_240;
  func_0x00010b93f564();
  plVar9 = *(long **)(lVar11 + 0xa0);
  func_0x00010b93ce7c(extraout_x8_02);
  lVar11 = lVar11 + 0x90;
  FUN_10b93da58();
  lStack_350 = lVar11;
  plStack_348 = plVar9;
  do {
    lVar11 = lStack_350;
    func_0x00010b93f688();
    if (lVar11 == extraout_x8_03) {
      func_0x00010b93f5a4();
      return;
    }
    if ((plStack_348[1] != 0) && (*(char *)(plStack_348[1] + 0x23) == '\x01')) {
      lStack_360 = *plStack_348;
      if (lStack_360 == 0) {
LAB_10b93ce40:
        do {
          func_0x00010b93f4b4();
          uVar13 = extraout_x8_04;
        } while (extraout_w11_00 != 0);
      }
      else {
        piVar1 = (int *)(lStack_360 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plStack_348[1] != 0) goto LAB_10b93ce40;
        uVar13 = 0;
      }
      uStack_358 = uVar13;
      func_0x00010b93e088(extraout_x8_02,&lStack_360);
      func_0x0001080d5a38(&lStack_360);
    }
    FUN_10b93dad4(&lStack_350);
  } while( true );
}



/* Entry: 10b93cb98; end: 10b93cdab;  */

void FUN_10b93cb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int extraout_w11;
  long unaff_x21;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long *plStack_118;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  char *pcStack_98;
  undefined8 auStack_90 [4];
  long lStack_70;
  long lStack_68;
  char cStack_60;
  long alStack_58 [2];
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  func_0x00010b93f66c();
  func_0x00010b93f470();
  pcStack_98 = ".map.json";
  auStack_90[0] = 9;
  uStack_38 = extraout_x8;
  func_0x00010b93f72c(&lStack_a0);
  (**(code **)(**(long **)(unaff_x21 + 0x10) + 0x10))
            (alStack_58,*(long **)(unaff_x21 + 0x10),&lStack_a0);
  uVar4 = 0;
  if (alStack_58[0] == 1) {
    FUN_10b9ad2f0(&lStack_70,uStack_48);
    uVar4 = 0;
    if ((lStack_70 == 1) && (uVar4 = 0, cStack_60 == '\b')) {
      pcStack_98 = "/";
      auStack_90[0] = 1;
      func_0x00010b93f72c(&lStack_a8);
      func_0x000107c31088(&lStack_b0,&DAT_10f2f41e7);
      lVar9 = lStack_68;
      if (cStack_60 != '\b') {
        lVar9 = 0;
      }
      lVar5 = lVar9 + 0x10;
      func_0x00010527d444();
      lVar9 = *(long *)(lVar9 + 0x10);
      lVar12 = *(long *)(lStack_68 + 0x28);
      lStack_c0 = lVar5;
      plStack_b8 = plStack_40;
      while (plVar8 = plStack_b8, uVar4 = lStack_c0 == lVar9 + lVar12, !(bool)uVar4) {
        if ((((*(byte *)(plStack_b8 + 2) & 0xfe) == 2) &&
            (plVar6 = plStack_b8, func_0x00010b9a6130(plStack_b8,&lStack_a8), (int)plVar6 != 0)) &&
           (plVar6 = plVar8, FUN_10b9a61b0(plVar8,&lStack_b0), (int)plVar6 != 0)) {
          if (lStack_a8 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined4 *)(lStack_a8 + 0xc);
          }
          uVar10 = 0;
          if (*plVar8 != 0) {
            uVar10 = (ulong)*(uint *)(*plVar8 + 0xc);
          }
          uVar13 = 0;
          if (lStack_b0 != 0) {
            uVar13 = (ulong)*(uint *)(lStack_b0 + 0xc);
          }
          FUN_10b9a6488(&uStack_c8,plVar8,uVar7,uVar10 - uVar13);
          FUN_10b92d094(&pcStack_98,param_3,&uStack_c8);
          if (pcStack_98 == (char *)0x1) {
            FUN_10b9a9358(&uStack_f0,plVar8 + 1);
            func_0x00010b92dde8(auStack_e8,auStack_90,&uStack_f0);
            FUN_10b92d358(param_3,&uStack_c8,auStack_e8);
            func_0x00010b92ddb8(auStack_e8);
            func_0x000107c278f8(uStack_f0);
          }
          func_0x00010b8fbe80(&pcStack_98);
          func_0x000107c278f8(uStack_c8);
        }
        func_0x00010527d4cc(&lStack_c0);
      }
      func_0x000107c278f8(lStack_b0);
      func_0x000107c278f8(lStack_a8);
    }
    func_0x000104bda914(&lStack_70);
  }
  func_0x0001080c5c8c(alStack_58);
  func_0x000107c278f8();
  func_0x00010b93f45c(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  lVar9 = lStack_a0;
  ___stack_chk_fail();
  uStack_f8 = 0x10b93cdac;
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  uStack_108 = param_3;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010b93f564();
  plVar8 = *(long **)(lVar9 + 0xa0);
  func_0x00010b93ce7c(extraout_x8_00);
  lVar9 = lVar9 + 0x90;
  FUN_10b93da58();
  lStack_120 = lVar9;
  plStack_118 = plVar8;
  do {
    lVar9 = lStack_120;
    func_0x00010b93f688();
    if (lVar9 == extraout_x8_01) {
      func_0x00010b93f5a4();
      return;
    }
    if ((plStack_118[1] != 0) && (*(char *)(plStack_118[1] + 0x23) == '\x01')) {
      lStack_130 = *plStack_118;
      if (lStack_130 == 0) {
LAB_10b93ce40:
        do {
          func_0x00010b93f4b4();
          uVar11 = extraout_x8_02;
        } while (extraout_w11 != 0);
      }
      else {
        piVar1 = (int *)(lStack_130 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (plStack_118[1] != 0) goto LAB_10b93ce40;
        uVar11 = 0;
      }
      uStack_128 = uVar11;
      func_0x00010b93e088(extraout_x8_00,&lStack_130);
      func_0x0001080d5a38(&lStack_130);
    }
    FUN_10b93dad4(&lStack_120);
  } while( true );
}



/* Entry: 10b93cdac; end: 10b93cee3;  */

void FUN_10b93cdac(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  int extraout_w11;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long *plStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010b93f564();
  plVar5 = *(long **)(param_2 + 0xa0);
  func_0x00010b93ce7c(param_1);
  param_2 = param_2 + 0x90;
  FUN_10b93da58();
  lStack_30 = param_2;
  plStack_28 = plVar5;
  do {
    lVar4 = lStack_30;
    func_0x00010b93f688();
    if (lVar4 == extraout_x8) {
      func_0x00010b93f5a4();
      return;
    }
    if ((plStack_28[1] != 0) && (*(char *)(plStack_28[1] + 0x23) == '\x01')) {
      lStack_40 = *plStack_28;
      if (lStack_40 == 0) {
LAB_10b93ce40:
        do {
          func_0x00010b93f4b4();
          uVar6 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      else {
        piVar1 = (int *)(lStack_40 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (plStack_28[1] != 0) goto LAB_10b93ce40;
        uVar6 = 0;
      }
      uStack_38 = uVar6;
      func_0x00010b93e088(param_1,&lStack_40);
      func_0x0001080d5a38(&lStack_40);
    }
    FUN_10b93dad4(&lStack_30);
  } while( true );
}



/* Entry: 10b93cee4; end: 10b93d00f;  */

long * FUN_10b93cee4(undefined8 param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  undefined8 uStack_38;
  
  func_0x00010b93f66c();
  func_0x00010b93f470();
  uStack_38 = extraout_x8;
  func_0x000107c31084();
  FUN_10b98c7b8(&stack0xffffffffffffff60);
  func_0x000107c31080(&plStack_70,param_1,&stack0xffffffffffffff60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0xffffffffffffff60);
  __ZNSt3__15mutex4lockEv(unaff_x21 + 0x130);
  uVar1 = unaff_x21 + 0x178;
  FUN_10b93d010(uVar1,&plStack_70);
  if ((uVar1 & 1) == 0) {
    FUN_10b93ef54(&stack0xffffffffffffff60,unaff_x21 + 0x178,&plStack_70);
    __ZNSt3__15mutex6unlockEv(unaff_x21 + 0x130);
    do {
      func_0x00010b93f4c4();
    } while (extraout_w10 != 0);
    plVar2 = (long *)((ulong)&stack0xffffffffffffff60 | 8);
    FUN_10b93e188();
    plVar3 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      do {
        func_0x00010b93f5b8();
      } while (extraout_w10_00 != 0);
    }
    pcStack_68 = FUN_10b93e1bc;
    ppuStack_60 = &PTR_FUN_110d77c78;
    func_0x00010b93f640();
    plVar2[1] = lStack_98;
    *plVar2 = unaff_x21;
    plVar2[3] = lStack_88;
    plVar2[2] = lStack_90;
    plVar2[4] = (long)plVar3;
    plStack_58 = plVar2;
    func_0x00010b93f5c8();
    func_0x00010b93f6d4(ppuStack_60);
    func_0x00010b93d044(&stack0xffffffffffffff60);
  }
  else {
    __ZNSt3__15mutex6unlockEv(unaff_x21 + 0x130);
  }
  func_0x000107c278f8();
  func_0x00010b93f45c(uStack_38);
  if (!(bool)in_ZR) {
    plVar3 = plStack_70;
    ___stack_chk_fail();
    plVar2 = plVar3;
    FUN_10b93ee64();
    return (long *)(ulong)((long *)(*plVar3 + plVar3[3]) != plVar2);
  }
  return plStack_70;
}



/* Entry: 10b93d010; end: 10b93d06f;  */

bool FUN_10b93d010(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_10b93ee64();
  return (long *)(*param_1 + param_1[3]) != plVar1;
}



/* Entry: 10b93d070; end: 10b93d20f;  */

undefined8 * FUN_10b93d070(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  long lVar9;
  int extraout_w10;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010b93f470();
  uStack_58 = extraout_x8;
  func_0x00010b93f764();
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  plVar1 = (long *)param_2[1];
  for (plVar6 = (long *)*param_2; uVar2 = plVar6 == plVar1, !(bool)uVar2; plVar6 = plVar6 + 1) {
    lVar9 = *plVar6;
    if (lVar9 == 0) {
      uStack_d8 = 0;
      puStack_e0 = &UNK_10f7d0ef0;
    }
    else {
      uStack_d8 = (ulong)*(uint *)(lVar9 + 0xc);
      puStack_e0 = (undefined *)(lVar9 + 0x18);
    }
    ppuVar3 = &puStack_e0;
    func_0x0001089f8ee8(ppuVar3,0x2f,0);
    if (ppuVar3 != (undefined **)0xffffffffffffffff) {
      ppuVar4 = ppuVar3;
      func_0x000107c31084();
      ppuVar5 = &puStack_e0;
      uVar8 = 0;
      func_0x000107c28524(ppuVar5,0,ppuVar3);
      func_0x000107c3107c(&uStack_e8,ppuVar4,ppuVar5,uVar8);
      FUN_10b93ef54(&uStack_108,&uStack_88,&uStack_e8);
      if ((char)uStack_f8 == '\x01') {
        func_0x00010811ffc4(&uStack_d0,&uStack_e8);
      }
      func_0x000107c278f8(uStack_e8);
    }
  }
  plVar6 = *(long **)(param_1 + 0x30);
  do {
    func_0x00010b93f4c4();
    uStack_90 = uStack_c0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
  } while (extraout_w10 != 0);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0x10b93e358;
  ppuStack_b0 = &PTR_FUN_110d77c98;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_a8 = param_1;
  (**(code **)(*plVar6 + 0x28))();
  func_0x00010b93f6e0(ppuStack_b0);
  FUN_10b93d210(&uStack_108);
  func_0x000104bfe1e0(&uStack_d0);
  puVar7 = &uStack_88;
  FUN_10b8be4ec();
  func_0x00010b93f45c(uStack_58);
  if ((bool)uVar2) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x000104bfe1e0(puVar7 + 1);
  FUN_10b93dce4(*puVar7);
  return puVar7;
}



/* Entry: 10b93d210; end: 10b93d233;  */

undefined8 * FUN_10b93d210(undefined8 *param_1)

{
  func_0x000104bfe1e0(param_1 + 1);
  FUN_10b93dce4(*param_1);
  return param_1;
}



/* Entry: 10b93d234; end: 10b93d3d7;  */

/* WARNING: Possible PIC construction at 0x00010b93d28c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b93d290) */
/* WARNING: Removing unreachable block (ram,0x00010b93d2b4) */
/* WARNING: Removing unreachable block (ram,0x00010b93d2a0) */

long * FUN_10b93d234(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar5;
  long *unaff_x20;
  long unaff_x21;
  long lStack_120;
  long lStack_118;
  undefined4 uStack_110;
  long lStack_108;
  long alStack_100 [5];
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_68;
  undefined1 auStack_60 [48];
  
  func_0x00010b93f66c();
  func_0x00010b93f470();
  lStack_68 = *param_4;
  (**(code **)(param_4[1] + 0x10))(auStack_60,param_4 + 1);
  puVar3 = (undefined8 *)(unaff_x21 + 0x30);
  plVar1 = &lStack_68;
  plVar2 = &lStack_120;
  plStack_a0 = &lStack_68;
  func_0x00010b93f470();
  plVar5 = (long *)*puVar3;
  uStack_a8 = extraout_x8;
  if (unaff_x21 != 0) {
    do {
      func_0x00010b93f4c4();
    } while (extraout_w10 != 0);
  }
  uStack_110 = (undefined4)param_3;
  lStack_118 = 0;
  lStack_120 = unaff_x21;
  if (*unaff_x20 != 0) {
    do {
      func_0x00010b93f4d4();
      uStack_110 = (undefined4)param_3;
      lStack_118 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_108 = *plVar1;
  (**(code **)(plVar1[1] + 0x10))(alStack_100,plVar1 + 1);
  pcStack_d8 = FUN_10b93e454;
  ppuStack_d0 = &PTR_FUN_110d77cb8;
  plVar1 = (long *)0x48;
  __Znwm();
  *plVar1 = lStack_120;
  lStack_120 = 0;
  lVar4 = 0;
  if (lStack_118 != 0) {
    do {
      func_0x00010b93f4d4();
      lVar4 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  plVar1[1] = lVar4;
  *(undefined4 *)(plVar1 + 2) = uStack_110;
  plVar1[3] = lStack_108;
  (**(code **)(alStack_100[0] + 0x10))(plVar1 + 4,alStack_100);
  plStack_c8 = plVar1;
  (**(code **)(*plVar5 + 0x28))(plVar5,&pcStack_d8);
  func_0x00010b93f6d4(ppuStack_d0);
  FUN_10b93d3d8();
  func_0x00010b93f45c(uStack_a8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (**(code **)plVar2[4])();
    func_0x000107c278f4(plVar2 + 1);
    FUN_10b93dce4(*plVar2);
    return plVar2;
  }
  return plVar2;
}



/* Entry: 10b93d3d8; end: 10b93d407;  */

undefined8 * FUN_10b93d3d8(undefined8 *param_1)

{
  (**(code **)param_1[4])();
  func_0x000107c278f4(param_1 + 1);
  FUN_10b93dce4(*param_1);
  return param_1;
}



/* Entry: 10b93d408; end: 10b93d7f7;  */

long * FUN_10b93d408(long param_1,long *param_2,long *param_3,ulong param_4,long *param_5)

{
  undefined1 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *pcVar12;
  int extraout_w9;
  int extraout_w9_00;
  ulong uVar13;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 extraout_x12;
  long *unaff_x19;
  long *unaff_x20;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_1a0 [8];
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 auStack_128 [5];
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_70;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar8 = param_3;
  func_0x00010b93f470();
  uStack_70 = extraout_x8;
  FUN_10b8be800(plVar8);
  plVar9 = param_3;
  func_0x00010b93ee90(param_3,param_2,plVar8);
  uVar7 = (long *)(*param_3 + param_3[3]) == plVar9;
  if ((bool)uVar7) {
    FUN_10b93ef54(&uStack_160,param_3,param_2);
    FUN_10b93c510(&plStack_168,param_1,param_2);
    plVar9 = plStack_168;
    plVar8 = plStack_168;
    FUN_10b92cccc();
    if (((ulong)plVar8 & 1) == 0) {
      FUN_10b93d7f8(param_5);
    }
    else {
      FUN_10b938fb4(&lStack_170,*(undefined8 *)(param_1 + 0x28),param_2);
      if (lStack_170 == 0) {
        FUN_10b93d7f8(param_5);
      }
      else {
        puVar10 = (undefined8 *)0x100;
        __Znwm();
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_FUN_110d77d88;
        puVar15 = puVar10 + 3;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0x32aaaba7;
        puVar10[10] = 0;
        puVar10[9] = 0;
        puVar10[0xc] = 0;
        puVar10[0xb] = 0;
        puVar10[0xe] = 0;
        puVar10[0xd] = 0;
        puVar10[0x10] = 0;
        puVar10[0xf] = 0;
        puVar10[0x11] = &PTR_DAT_110d78770;
        puVar10[0x13] = 0x32aaaba7;
        puVar10[0x12] = 1;
        puVar10[0x15] = 0;
        puVar10[0x14] = 0;
        puVar10[0x17] = 0;
        puVar10[0x16] = 0;
        puVar10[0x19] = 0;
        puVar10[0x18] = 0;
        puVar10[0x1b] = 0;
        puVar10[0x1a] = 0;
        puVar10[0x1d] = 0;
        puVar10[0x1c] = 0;
        puVar10[0x1f] = 0;
        puVar10[0x1e] = 0;
        puStack_180 = puVar15;
        puStack_178 = puVar10;
        puStack_140 = puVar15;
        puStack_138 = puVar10;
        do {
          func_0x00010b93f678();
        } while (extraout_w9 != 0);
        plStack_198 = plVar9;
        plStack_190 = param_2;
        plStack_188 = param_5;
        do {
          func_0x00010b93f620();
        } while (extraout_w10 != 0);
        uStack_160 = 0;
        uStack_158 = 0;
        puVar10[3] = puVar10 + 3;
        puVar10[4] = puVar10;
        func_0x00010b93b23c(&uStack_160);
        func_0x00010b93b160(&puStack_140);
        uVar13 = *(ulong *)(lStack_170 + 0x40);
        puVar14 = (ulong *)(lStack_170 + 0x40);
        if ((uVar13 & 1) != 0) {
          puVar14 = (ulong *)(uVar13 + 7);
        }
        puVar2 = puVar14 + *(int *)(lStack_170 + 0x48);
        for (; puVar14 != puVar2; puVar14 = puVar14 + 1) {
          func_0x00010b93f6c4();
          func_0x000107c31084();
          func_0x000107c31080(&puStack_140);
          puVar15 = puStack_180;
          do {
            func_0x00010b93f678();
          } while (extraout_w9_00 != 0);
          pcStack_a0 = FUN_10b93f0c4;
          ppuStack_98 = &PTR_FUN_110d77dc8;
          puStack_90 = puVar15;
          uStack_160 = 0;
          uStack_158 = 0;
          puStack_88 = puVar10;
          FUN_10b93d408(param_1,&puStack_140,param_3,param_4,&pcStack_a0);
          (*(code *)*ppuStack_98)(&ppuStack_98);
          func_0x00010b93b160(&uStack_160);
          func_0x000107c278f8(puStack_140);
        }
        uVar5 = (int)param_4 - 1;
        param_2 = plStack_188;
        plVar9 = plStack_190;
        if ((param_4 & 0xfffffffd) == 0) {
          func_0x00010b93f6c4();
          param_2 = plStack_188;
          plVar9 = plStack_190;
          if (plStack_198 == (long *)0x0) {
            uStack_c0 = 0;
LAB_10b93d6b8:
            plVar8 = puVar10 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = *plVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              puStack_b0 = puVar10;
            } while (cVar3 != '\0');
          }
          else {
            do {
              func_0x00010b93f4c4();
            } while (extraout_w10_00 != 0);
            uStack_c0 = extraout_x12;
            puVar10 = puStack_178;
            puStack_b0 = puStack_178;
            if (puStack_178 != (undefined8 *)0x0) goto LAB_10b93d6b8;
          }
          puVar15 = puStack_180;
          pcStack_d0 = FUN_10b93f164;
          ppuStack_c8 = &PTR_FUN_110d77de8;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
          puStack_b8 = puStack_180;
          FUN_10b939528();
          func_0x00010b93f590(ppuStack_c8);
          FUN_10b93d844(&uStack_160);
        }
        uVar7 = uVar5 == 1;
        if (uVar5 < 2) {
          func_0x00010b93f6c4();
          puVar15 = puStack_180;
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          if (puStack_178 != (undefined8 *)0x0) {
            plVar8 = puStack_178 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = *plVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pcStack_100 = FUN_10b93f288;
          ppuStack_f8 = &PTR_FUN_110d77e08;
          puStack_f0 = puStack_180;
          puStack_e8 = puStack_178;
          uStack_160 = 0;
          uStack_158 = 0;
          FUN_10b939080(uVar11,plVar9,&pcStack_100);
          func_0x00010b93f590(ppuStack_f8);
          func_0x00010b93b160(&uStack_160);
        }
        lStack_130 = *param_2;
        param_5 = &lStack_130;
        param_2 = param_2 + 1;
        (**(code **)(*param_2 + 0x10))(auStack_128,param_2);
        func_0x00010b93abb4(puVar15,&lStack_130);
        func_0x00010b93f590(auStack_128[0]);
        func_0x00010b93b160(&puStack_180);
        plVar9 = plStack_168;
      }
      func_0x00010b93a2e4(lStack_170);
    }
    func_0x0001080d5af4();
    func_0x00010b93f45c(uStack_70);
    uVar6 = 0;
    plVar8 = param_5;
    if ((bool)uVar7) {
      return plVar9;
    }
  }
  else {
    func_0x00010b93f45c(uStack_70);
    uVar6 = uVar7;
    plVar8 = param_5;
    if ((bool)uVar7) goto code_r0x00010b93d7f8;
  }
  unaff_x30 = FUN_10b93d7f8;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_1a0;
  uVar7 = uVar6;
  param_5 = plVar9;
  unaff_x19 = plVar8;
  unaff_x20 = param_2;
  unaff_x29 = puVar1;
code_r0x00010b93d7f8:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010b93f470();
  *(undefined8 *)((long)register0x00000008 + -0x18) = extraout_x8_00;
  pcVar12 = (code *)*param_5;
  *(undefined8 *)((long)register0x00000008 + -0x28) = 1;
  (*pcVar12)((undefined1 *)((long)register0x00000008 + -0x28));
  plVar9 = (long *)((long)register0x00000008 + -0x28);
  func_0x0001080c6234(plVar9);
  func_0x00010b93f45c(*(undefined8 *)((long)register0x00000008 + -0x18));
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = FUN_10b93d844;
    func_0x00010b93b160(plVar9 + 1);
    plVar8 = *(long **)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(long **)((long)register0x00000008 + -0x48) = plVar8;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    func_0x0001080d5efc(plVar9);
    func_0x0001080d5af4();
    return plVar8;
  }
  return plVar9;
}



/* Entry: 10b93d7f8; end: 10b93d843;  */

undefined8 * FUN_10b93d7f8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 auStack_28 [2];
  undefined8 uStack_18;
  
  func_0x00010b93f470(param_1,param_1);
  auStack_28[0] = 1;
  uStack_18 = extraout_x8;
  (*(code *)*param_1)(auStack_28);
  puVar1 = auStack_28;
  func_0x0001080c6234(puVar1);
  func_0x00010b93f45c(uStack_18);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b93b160(puVar1 + 1);
  func_0x0001080d5efc(puVar1);
  func_0x0001080d5af4();
  return unaff_x19;
}



/* Entry: 10b93d844; end: 10b93da57;  */

undefined8 FUN_10b93d844(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b93b160(param_1 + 8);
  func_0x0001080d5efc(param_1);
  func_0x0001080d5af4();
  return unaff_x19;
}



/* Entry: 10b93da58; end: 10b93da83;  */

undefined1  [16] FUN_10b93da58(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b93f328(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b93da84; end: 10b93dad3;  */

undefined1  [16] FUN_10b93da84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b93f66c();
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b93dad4(&uStack_40);
  FUN_10b93f37c();
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b93dad4; end: 10b93db5f;  */

long * FUN_10b93dad4(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10b93f328();
  return param_1;
}



/* Entry: 10b93db60; end: 10b93dbcb;  */

ulong FUN_10b93db60(void)

{
  ulong uVar1;
  long unaff_x21;
  ulong uStack_38;
  
  func_0x00010b93f66c();
  uStack_38 = 0;
  func_0x00010b93f564();
  func_0x00010b93d964(&uStack_38,unaff_x21 + 0x48);
  uVar1 = (ulong)*(byte *)(unaff_x21 + 0x60);
  __ZNSt3__15mutex6unlockEv(unaff_x21 + 0xe8);
  if (uStack_38 != 0) {
    uVar1 = uStack_38;
    FUN_10b94d0d8();
  }
  func_0x00010b8fb1f8(uStack_38);
  return uVar1;
}



/* Entry: 10b93dbcc; end: 10b93dbf7;  */

void FUN_10b93dbcc(void)

{
  long unaff_x20;
  
  func_0x00010b93f56c();
  func_0x00010b93f564();
  func_0x0001089af5ac(unaff_x20 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0xe8);
  return;
}



/* Entry: 10b93dbf8; end: 10b93dc0b;  */

long **** FUN_10b93dbf8(long param_1)

{
  undefined8 ****ppppuVar1;
  long **pplVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long ****pppplVar4;
  long *plVar5;
  long ****pppplVar6;
  undefined8 ****ppppuVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 ****extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  long ***ppplVar13;
  long ***ppplVar14;
  long ***ppplStack_198;
  long lStack_190;
  long **pplStack_188;
  long **pplStack_180;
  long **pplStack_178;
  long **pplStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_138;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  char cStack_d1;
  undefined8 **appuStack_d0 [3];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long ***ppplStack_88;
  long lStack_80;
  long lStack_78;
  
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  pppplVar6 = (long ****)(puVar11 + 2);
  pppplVar9 = (long ****)(puVar11 + 3);
  pppplVar4 = pppplVar6;
  pppplVar10 = pppplVar9;
  func_0x00010b93f56c(*puVar11,puVar11 + 1);
  func_0x00010b93f470();
  ppppuVar7 = (undefined8 ****)0x2e;
  pppplVar8 = pppplVar4;
  func_0x00010b9a5f34();
  if (((ulong)ppppuVar7 & 1) == 0) {
    func_0x0001080da3e4();
    goto LAB_10b93c1ac;
  }
  ppppuVar7 = (undefined8 ****)((long)pppplVar4 + 1);
  FUN_10b9a6470(&ppplStack_88,pppplVar6);
  func_0x00010b9387bc(&lStack_80,pppplVar6);
  uVar3 = 0;
  if (lStack_80 == 1) {
    func_0x00010b9495fc(auStack_a0,pppplVar9);
    FUN_10b9a2108(auStack_b8,&stack0xffffffffffffff90);
    if (*(long *)(unaff_x20 + 0x58) != -1) {
      pppuStack_e8 = appuStack_d0;
      appuStack_d0[0] = (undefined8 **)&stack0xffffffffffffff90;
      __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(unaff_x20 + 0x58),&pppuStack_e8,0x10b93ed80);
    }
    FUN_10b9305a8(&stack0xffffffffffffff90,auStack_a0,&ppplStack_88);
    func_0x000107c2793c(&UNK_10f7cdf64);
    pppplVar10 = (long ****)&stack0xffffffffffffff90;
    func_0x000107c3173c(&pppuStack_e8);
    uVar3 = cStack_d1 == '\0';
    ppppuVar1 = (undefined8 ****)pppuStack_e8;
    if (-1 < cStack_d1) {
      ppppuVar1 = &pppuStack_e8;
    }
    FUN_10b9a2434(appuStack_d0,auStack_b8,&stack0xffffffffffffff90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_e8);
    plVar5 = *(long **)(unaff_x20 + 0x20);
    (**(code **)(*plVar5 + 0x20))(plVar5,appuStack_d0);
    if (((ulong)plVar5 & 1) == 0) {
      ppppuVar7 = (undefined8 ****)appuStack_d0;
      (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x38))(&stack0xffffffffffffff90);
      func_0x0001080c6234(&stack0xffffffffffffff90);
      uVar3 = ppppuVar1 == (undefined8 ****)0x1;
      if ((bool)uVar3) goto LAB_10b93c0d8;
    }
    else {
LAB_10b93c0d8:
      (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x60))
                (&uStack_f0,*(long **)(unaff_x20 + 0x20),appuStack_d0);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
      ppppuVar7 = (undefined8 ****)0x0;
      if (*unaff_x19 != 0) {
        do {
          func_0x00010b93f4b4();
          ppppuVar7 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uStack_e0 = 0;
      pppuStack_e8 = ppppuVar7;
      if (lStack_78 != 0) {
        do {
          func_0x00010b93f4d4();
          uStack_e0 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      FUN_10b9a8bb4(&stack0xffffffffffffff90,&uStack_f0);
      ppppuVar7 = &pppuStack_e8;
      pppplVar9 = (long ****)&stack0xffffffffffffff90;
      FUN_10b927734(uVar12);
      FUN_10b9a8cb4(&stack0xffffffffffffff90);
      FUN_10b9244a4(&pppuStack_e8);
      func_0x000107c278f8(uStack_f0);
    }
    func_0x0001080c9d44(appuStack_d0);
    func_0x0001080c9d44(auStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    pppplVar8 = pppplVar9;
  }
  func_0x000104bdd63c(&lStack_80);
  func_0x000107c278f8();
  func_0x00010b93f45c(extraout_x8);
  in_ZR = 0;
  pppplVar4 = (long ****)ppplStack_88;
  if ((bool)uVar3) {
    return (long ****)ppplStack_88;
  }
LAB_10b93c1ac:
  ___stack_chk_fail();
  func_0x00010b93f470();
  uStack_138 = extraout_x8_02;
  do {
    func_0x00010b93f4c4();
  } while (extraout_w10 != 0);
  lStack_190 = 0;
  ppplStack_198 = (long ***)pppplVar4;
  if (*ppppuVar7 != (undefined8 ***)0x0) {
    do {
      func_0x00010b93f4b4();
      lStack_190 = extraout_x8_03;
    } while (extraout_w11_01 != 0);
  }
  ppplVar14 = *pppplVar8;
  if (ppplVar14 != (long ***)0x0) {
    do {
      func_0x00010b93f5b8();
    } while (extraout_w10_00 != 0);
  }
  ppplVar13 = *pppplVar10;
  pplStack_188 = (long **)ppplVar14;
  if (ppplVar13 != (long ***)0x0) {
    func_0x00010b93f4a4();
  }
  pplStack_170 = (long **)pppplVar10[2];
  pplStack_178 = (long **)pppplVar10[1];
  pcStack_168 = FUN_10b93dbf8;
  ppuStack_160 = &PTR_FUN_110d77c38;
  puVar11 = (undefined8 *)0x30;
  pplStack_180 = (long **)ppplVar13;
  __Znwm();
  *puVar11 = ppplStack_198;
  ppplStack_198 = (long ***)0x0;
  uVar12 = 0;
  if (lStack_190 != 0) {
    do {
      func_0x00010b93f4b4();
      uVar12 = extraout_x8_04;
      ppplVar14 = (long ***)pplStack_188;
    } while (extraout_w11_02 != 0);
  }
  puVar11[1] = uVar12;
  if (ppplVar14 != (long ***)0x0) {
    do {
      func_0x00010b93f5b8();
    } while (extraout_w10_01 != 0);
  }
  pplVar2 = pplStack_180;
  puVar11[2] = ppplVar14;
  if ((long ***)pplStack_180 != (long ***)0x0) {
    func_0x00010b93f4a4();
  }
  puVar11[3] = pplVar2;
  puVar11[5] = pplStack_170;
  puVar11[4] = pplStack_178;
  puStack_158 = puVar11;
  func_0x00010b93f5c8();
  (*(code *)*ppuStack_160)(&ppuStack_160);
  pppplVar6 = &ppplStack_198;
  FUN_10b93c2f0();
  func_0x00010b93f45c(uStack_138);
  if ((bool)in_ZR) {
    return pppplVar6;
  }
  ___stack_chk_fail();
  if (pppplVar6[3] != (long ***)0x0) {
    func_0x00010b93f584();
  }
  func_0x000107c278f4(pppplVar6 + 2);
  func_0x0001080d5ad4(pppplVar6 + 1);
  FUN_10b93dce4(*pppplVar6);
  return pppplVar6;
}



/* Entry: 10b93dc0c; end: 10b93dc2b;  */

void FUN_10b93dc0c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b93c2f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93dc2c; end: 10b93dc2f;  */

void FUN_10b93dc2c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b93dc30; end: 10b93dcbf;  */

void FUN_10b93dc30(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d77c38;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b93f4b4();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  uVar2 = 0;
  if (plVar3[1] != 0) {
    do {
      func_0x00010b93f4b4();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[1] = uVar2;
  uVar2 = 0;
  if (plVar3[2] != 0) {
    do {
      func_0x00010b93f4d4();
      uVar2 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  puVar1[2] = uVar2;
  func_0x000104c6257c(puVar1 + 3,plVar3 + 3);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b93dcc0; end: 10b93dce3;  */

undefined8 * FUN_10b93dcc0(undefined8 *param_1)

{
  FUN_10b93dce4(*param_1);
  return param_1;
}



/* Entry: 10b93dce4; end: 10b93dd0f;  */

void FUN_10b93dce4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x00010b93dd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b93dd10; end: 10b93de7b;  */

void FUN_10b93dd10(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [64];
  long lStack_c8;
  undefined1 auStack_c0 [24];
  long *plStack_a8;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_48;
  
  func_0x00010b93f470();
  plVar8 = *(long **)(param_1 + 0x10);
  uVar5 = plVar8[4];
  uStack_48 = extraout_x8;
  FUN_10b93fd24(&lStack_c8,plVar8[3]);
  uVar2 = 0;
  if (lStack_c8 == 1) {
    puStack_120 = auStack_108;
    uStack_110 = 8;
    uStack_118 = 0;
    for (uVar6 = uStack_60; uVar2 = uVar6 == uStack_58, !(bool)uVar2; uVar6 = uVar6 + 8) {
      uVar5 = uVar6;
      FUN_10b9a8e18(&lStack_140);
      FUN_10b9a92f0(&lStack_140);
      func_0x00010b924270(&puStack_120);
      FUN_10b9a8d98(&lStack_140);
    }
    ppuVar3 = &puStack_120;
    func_0x00010b9242ec(*(undefined8 *)(*plVar8 + 0x40));
    if ((uVar5 & 1) != 0) {
      puVar4 = auStack_c0;
      FUN_10b93fcec();
      puStack_148 = puVar4 + (long)ppuVar3;
      puStack_150 = puVar4;
      FUN_10b98eba0(&lStack_140,&puStack_150);
      uVar2 = false;
      lVar7 = lStack_138;
      if (lStack_140 == 1) {
        for (; plVar1 = plStack_a8, uVar2 = lVar7 == lStack_130, !(bool)uVar2; lVar7 = lVar7 + 0x18)
        {
          if (plStack_a8 != (long *)0x0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          }
          uStack_160 = *(undefined8 *)(lVar7 + 8);
          uStack_158 = *(undefined8 *)(lVar7 + 0x10);
          plStack_168 = plVar1;
          FUN_10b93bf68(*plVar8,plVar8 + 1,lVar7,&plStack_168);
          if (plStack_168 != (long *)0x0) {
            func_0x00010b93f584();
          }
        }
      }
      FUN_10b923ec4(&lStack_140);
    }
    func_0x000107732ee4(&puStack_120);
  }
  plVar8 = &lStack_c8;
  func_0x000105c3e664();
  func_0x00010b93f45c(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    if (plVar8[1] == 0) {
      return;
    }
    FUN_10b93c434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93de7c; end: 10b93de9b;  */

void FUN_10b93de7c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b93c434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93de9c; end: 10b93de9f;  */

void FUN_10b93de9c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b93dea0; end: 10b93df13;  */

void FUN_10b93dea0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d77c58;
  puVar1 = param_1;
  func_0x00010b93f640();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b93f4b4();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  uVar2 = 0;
  if (plVar3[1] != 0) {
    do {
      func_0x00010b93f4b4();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[1] = uVar2;
  func_0x000104c6257c(puVar1 + 2,plVar3 + 2);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b93df14; end: 10b93df1f;  */

void FUN_10b93df14(void)

{
  _abort();
  func_0x00010b93f56c();
  func_0x00010b93f698();
  FUN_10b93dfd0();
  func_0x00010b93f500();
  return;
}



/* Entry: 10b93df20; end: 10b93df47;  */

void FUN_10b93df20(void)

{
  func_0x00010b93f56c();
  func_0x00010b93f698();
  FUN_10b93dfd0();
  func_0x00010b93f500();
  return;
}



/* Entry: 10b93df48; end: 10b93dfb3;  */

long * FUN_10b93df48(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b93df90();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b93dfb4; end: 10b93dfcf;  */

void FUN_10b93dfb4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 2) {
      uVar2 = *puVar1;
      param_4[1] = puVar1[1];
      *param_4 = uVar2;
      *puVar1 = 0;
      puVar1[1] = 0;
      param_4 = param_4 + 2;
    }
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      func_0x0001080d5a38();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 4);
  return;
}



/* Entry: 10b93dfd0; end: 10b93dfef;  */

void FUN_10b93dfd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 2) {
    uVar2 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    param_4 = param_4 + 2;
  }
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    func_0x0001080d5a38();
  }
  return;
}



/* Entry: 10b93dff0; end: 10b93e04b;  */

void FUN_10b93dff0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x0001080d5a38();
  }
  return;
}



/* Entry: 10b93e04c; end: 10b93e053;  */

void FUN_10b93e04c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b93f56c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001080d5a38();
  }
  return;
}



/* Entry: 10b93e054; end: 10b93e147;  */

void FUN_10b93e054(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b93f56c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001080d5a38();
  }
  return;
}



/* Entry: 10b93e148; end: 10b93e187;  */

long * FUN_10b93e148(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  long *plVar2;
  int extraout_w11;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    FUN_10b93df14();
    FUN_10b8bc3c4();
    lVar1 = 0;
    if (param_2[2] != 0) {
      do {
        func_0x00010b93f4d4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    param_1[2] = lVar1;
    return param_1;
  }
  plVar2 = (long *)(param_1[2] - *param_1 >> 3);
  if (plVar2 <= param_2) {
    plVar2 = param_2;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
    plVar2 = (long *)0xfffffffffffffff;
  }
  return plVar2;
}



/* Entry: 10b93e188; end: 10b93e1bb;  */

void FUN_10b93e188(long param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  FUN_10b8bc3c4();
  uVar1 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x00010b93f4d4();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 10b93e1bc; end: 10b93e2bf;  */

void FUN_10b93e1bc(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 auStack_98 [88];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b93f470();
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  auStack_98[0] = 0;
  uStack_40 = 0;
  uStack_38 = extraout_x8;
  func_0x000105c3b044();
  if ((int)param_1 != 0) {
    func_0x00010b9a7520(&lStack_b0,&UNK_10f7ce492,0x1d,puVar5 + 4);
    func_0x00010b8a6ed0(auStack_98,&lStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_b0);
  }
  FUN_10b93c510(&uStack_b8,*puVar5,puVar5 + 1);
  uVar2 = uStack_b8;
  FUN_10b92d704();
  if ((int)uVar2 != 0) {
    FUN_10b92d72c(&lStack_b0,uStack_b8);
    in_ZR = lStack_b0 == 1;
    if ((bool)in_ZR) {
      FUN_10b92c5bc(plStack_a8,puVar5 + 4);
      if (plStack_a8 != (long *)0x0) {
        lVar1 = plStack_a8[1];
        for (lVar4 = *plStack_a8; in_ZR = lVar4 == lVar1, !(bool)in_ZR; lVar4 = lVar4 + 8) {
          func_0x00010b93f738(*puVar5);
          func_0x0001080d5af4(uStack_c0);
        }
      }
    }
    func_0x00010b92f1a0(&lStack_b0);
  }
  func_0x0001080d5af4(uStack_b8);
  puVar3 = auStack_98;
  func_0x0001080e8dd4();
  func_0x00010b93f45c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar3 + 8) != 0) {
    func_0x00010b93d044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93e2c0; end: 10b93e2df;  */

void FUN_10b93e2c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b93d044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93e2e0; end: 10b93e2e3;  */

void FUN_10b93e2e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b93e2e4; end: 10b93e3db;  */

void FUN_10b93e2e4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d77c78;
  puVar1 = param_1;
  func_0x00010b93f640();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b93f4b4();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  FUN_10b93e188(puVar1 + 1,plVar3 + 1);
  uVar2 = 0;
  if (plVar3[4] != 0) {
    do {
      func_0x00010b93f4d4();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[4] = uVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b93e3dc; end: 10b93e453;  */

undefined8 * FUN_10b93e3dc(long param_1)

{
  func_0x000104bfe1e0(param_1 + 0x10);
  FUN_10b93dce4(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b93e454; end: 10b93e4e7;  */

void FUN_10b93e454(long param_1)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b93f470();
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  uStack_38 = extraout_x8;
  func_0x00010b93f764();
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar3 = *puVar4;
  uVar1 = *(undefined4 *)(puVar4 + 2);
  uStack_98 = puVar4[3];
  (**(code **)(puVar4[4] + 0x18))(auStack_90);
  FUN_10b93d408(uVar3,puVar4 + 1,auStack_68,uVar1,&uStack_98);
  func_0x00010b93f630();
  puVar2 = auStack_68;
  FUN_10b8be4ec();
  func_0x00010b93f45c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar2 + 8) != 0) {
    FUN_10b93d3d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93e4e8; end: 10b93e507;  */

void FUN_10b93e4e8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b93d3d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b93e508; end: 10b93e50b;  */

void FUN_10b93e508(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b93e50c; end: 10b93e59b;  */

void FUN_10b93e50c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  long lVar3;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar4;
  
  plVar4 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d77cb8;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  uVar2 = 0;
  if (*plVar4 != 0) {
    do {
      func_0x00010b93f4b4();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  uVar2 = 0;
  if (plVar4[1] != 0) {
    do {
      func_0x00010b93f4d4();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[1] = uVar2;
  puVar1[3] = plVar4[3];
  lVar3 = plVar4[4];
  *(int *)(puVar1 + 2) = (int)plVar4[2];
  (**(code **)(lVar3 + 0x18))(puVar1 + 4,plVar4 + 4);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b93e59c; end: 10b93e5e3;  */

undefined8 * FUN_10b93e59c(undefined8 *param_1,long *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b93f770();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10b93e5e4();
  }
  else {
    uVar2 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b93f4b4();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar1 = param_1 + 1;
    *param_1 = uVar2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10b93e5e4; end: 10b93e69b;  */

long FUN_10b93e5e4(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  FUN_10b93e69c(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar5 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar4 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10b93e710();
  }
  plStack_50 = (long *)((long)plStack_58 + (lVar1 - lVar5));
  plStack_40 = plStack_58 + (long)plVar4;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plStack_50 + 1;
  *plStack_50 = lVar5;
  FUN_10b93e6dc(param_1,&plStack_58);
  lVar5 = param_1[1];
  func_0x00010b93e7a0(&plStack_58);
  return lVar5;
}


