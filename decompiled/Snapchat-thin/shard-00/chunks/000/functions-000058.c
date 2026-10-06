/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001a3fc4; end: 1001a4073;  */

void FUN_1001a3fc4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_100060b18(lVar1,param_2);
    lVar1 = lStack_48 + 0x18;
  }
  uStack_58 = 1;
  FUN_10007e34c(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1001a4074; end: 1001a4847;  */

long * FUN_1001a4074(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long *plVar2;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar1 = param_1;
  func_0x0001001a35f0(param_1,param_2,param_2);
  uStack_58 = extraout_x8;
  func_0x0001001610fc();
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    uStack_68 = 0xaaaaaaaaaaaaaaaa;
    uStack_60 = 0xaaaaaaaaaaaaaaaa;
    plStack_70 = (long *)0xaaaaaaaaaaaaaaaa;
    func_0x0001001a4170(&plStack_70,param_1,param_3,param_4,param_5);
    func_0x0001001612b4(param_1,0xaaaaaaaaaaaaaaaa,plVar1,plStack_70);
    plVar2 = plStack_70;
    func_0x0001001a420c();
    plVar1 = param_1;
  }
  func_0x0001001a4218(uStack_58);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    FUN_1001a4074();
    return plVar1 + 9;
  }
  return plVar2;
}



/* Entry: 1001a4848; end: 1001a488f;  */

undefined ** FUN_1001a4848(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x37af15) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e68bb8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e68bd8;
  if (param_1 != 0x37e30d) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f60738;
  if (param_1 != 0x179ec) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1001a4890; end: 1001a4a3b;  */

undefined1 * FUN_1001a4890(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_11;
  
  if (*(int *)*param_2 < *(int *)*param_3) {
    return (undefined1 *)0x1;
  }
  if (*(int *)*param_3 < *(int *)*param_2) {
    return (undefined1 *)0x0;
  }
  puVar1 = &uStack_11;
  func_0x0001001a494c(puVar1);
  return puVar1;
}



/* Entry: 1001a4a3c; end: 1001a4e4b;  */

void FUN_1001a4a3c(long *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar4 = (long *)*param_2;
  plVar9 = param_2;
  if (plVar4 == (long *)0x0) {
LAB_1001a4a5c:
    plVar4 = (long *)plVar9[1];
    bVar1 = plVar4 == (long *)0x0;
    if (bVar1) {
      plVar3 = (long *)plVar9[2];
      plVar7 = (long *)*plVar3;
    }
    else {
      plVar3 = (long *)plVar9[2];
      plVar4[2] = (long)plVar3;
      plVar7 = (long *)*plVar3;
    }
    if (plVar7 == plVar9) {
LAB_1001a4ab0:
      *plVar3 = (long)plVar4;
      if (plVar9 == param_1) {
        plVar3 = (long *)0x0;
        cVar2 = (char)plVar9[3];
        param_1 = plVar4;
      }
      else {
        plVar3 = *(long **)(plVar9[2] + 8);
        cVar2 = (char)plVar9[3];
      }
      goto joined_r0x0001001a4b08;
    }
  }
  else {
    plVar3 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar9 = plVar3;
        plVar3 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
      goto LAB_1001a4a5c;
    }
    bVar1 = false;
    plVar3 = (long *)param_2[2];
    plVar4[2] = (long)plVar3;
    if ((long *)*plVar3 == param_2) goto LAB_1001a4ab0;
  }
  plVar3[1] = (long)plVar4;
  plVar3 = *(long **)plVar9[2];
  cVar2 = (char)plVar9[3];
joined_r0x0001001a4b08:
  plVar7 = param_1;
  if (plVar9 != param_2) {
    puVar5 = (undefined8 *)param_2[2];
    plVar9[2] = (long)puVar5;
    lVar6 = 0;
    if ((long *)*puVar5 != param_2) {
      lVar6 = 8;
    }
    *(long **)((long)puVar5 + lVar6) = plVar9;
    lVar6 = *param_2;
    *plVar9 = lVar6;
    *(long **)(lVar6 + 0x10) = plVar9;
    lVar6 = param_2[1];
    plVar9[1] = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 0x10) = plVar9;
    }
    *(char *)(plVar9 + 3) = (char)param_2[3];
    plVar7 = plVar9;
    if (param_1 != param_2) {
      plVar7 = param_1;
    }
  }
  if ((plVar7 == (long *)0x0) || (cVar2 == '\0')) {
    return;
  }
  if (!bVar1) {
    *(undefined1 *)(plVar4 + 3) = 1;
    return;
  }
  do {
    puVar5 = (undefined8 *)plVar3[2];
    plVar4 = plVar7;
    if ((long *)*puVar5 == plVar3) {
      if ((*(byte *)(plVar3 + 3) & 1) == 0) {
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(puVar5 + 3) = 0;
        plVar4 = (long *)plVar3[2];
        lVar6 = *plVar4;
        lVar8 = *(long *)(lVar6 + 8);
        *plVar4 = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar4;
        }
        puVar5 = (undefined8 *)plVar4[2];
        *(undefined8 **)(lVar6 + 0x10) = puVar5;
        lVar8 = 0;
        if ((long *)*puVar5 != plVar4) {
          lVar8 = 8;
        }
        *(long *)((long)puVar5 + lVar8) = lVar6;
        *(long **)(lVar6 + 8) = plVar4;
        plVar4[2] = lVar6;
        plVar4 = plVar3;
        if (plVar7 != (long *)plVar3[1]) {
          plVar4 = plVar7;
        }
        plVar3 = *(long **)plVar3[1];
      }
      lVar6 = *plVar3;
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) != '\x01')) {
LAB_1001a4df0:
        *(undefined1 *)(plVar3 + 3) = *(undefined1 *)(plVar3[2] + 0x18);
        *(undefined1 *)(plVar3[2] + 0x18) = 1;
        *(undefined1 *)(*plVar3 + 0x18) = 1;
        plVar4 = (long *)plVar3[2];
        lVar6 = *plVar4;
        lVar8 = *(long *)(lVar6 + 8);
        *plVar4 = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar4;
        }
        puVar5 = (undefined8 *)plVar4[2];
        *(undefined8 **)(lVar6 + 0x10) = puVar5;
        lVar8 = 0;
        if ((long *)*puVar5 != plVar4) {
          lVar8 = 8;
        }
        *(long *)((long)puVar5 + lVar8) = lVar6;
        *(long **)(lVar6 + 8) = plVar4;
        plVar4[2] = lVar6;
        return;
      }
      lVar8 = plVar3[1];
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x18) != '\x01')) {
        if ((lVar6 == 0) || (*(char *)(lVar6 + 0x18) == '\x01')) {
          *(undefined1 *)(lVar8 + 0x18) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          plVar4 = (long *)plVar3[1];
          lVar6 = *plVar4;
          plVar3[1] = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar3;
          }
          puVar5 = (undefined8 *)plVar3[2];
          plVar4[2] = (long)puVar5;
          lVar6 = 0;
          if ((long *)*puVar5 != plVar3) {
            lVar6 = 8;
          }
          *(long **)((long)puVar5 + lVar6) = plVar4;
          *plVar4 = (long)plVar3;
          plVar3[2] = (long)plVar4;
          plVar3 = plVar4;
        }
        goto LAB_1001a4df0;
      }
      *(undefined1 *)(plVar3 + 3) = 0;
      plVar9 = (long *)plVar3[2];
      if ((char)plVar9[3] != '\x01' || plVar9 == plVar4) {
LAB_1001a4d24:
        *(undefined1 *)(plVar9 + 3) = 1;
        return;
      }
    }
    else {
      if ((*(byte *)(plVar3 + 3) & 1) == 0) {
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(puVar5 + 3) = 0;
        lVar6 = plVar3[2];
        plVar4 = *(long **)(lVar6 + 8);
        lVar8 = *plVar4;
        *(long *)(lVar6 + 8) = lVar8;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x10) = lVar6;
        }
        plVar9 = *(long **)(lVar6 + 0x10);
        plVar4[2] = (long)plVar9;
        lVar8 = 0;
        if (*plVar9 != lVar6) {
          lVar8 = 8;
        }
        *(long **)((long)plVar9 + lVar8) = plVar4;
        *plVar4 = lVar6;
        *(long **)(lVar6 + 0x10) = plVar4;
        plVar4 = plVar3;
        if (plVar7 != (long *)*plVar3) {
          plVar4 = plVar7;
        }
        plVar3 = (long *)((long *)*plVar3)[1];
      }
      lVar6 = *plVar3;
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) != '\x01')) {
        if ((plVar3[1] == 0) || (*(char *)(plVar3[1] + 0x18) == '\x01')) {
          *(undefined1 *)(lVar6 + 0x18) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          plVar4 = (long *)*plVar3;
          lVar6 = plVar4[1];
          *plVar3 = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar3;
          }
          puVar5 = (undefined8 *)plVar3[2];
          plVar4[2] = (long)puVar5;
          lVar6 = 0;
          if ((long *)*puVar5 != plVar3) {
            lVar6 = 8;
          }
          *(long **)((long)puVar5 + lVar6) = plVar4;
          plVar4[1] = (long)plVar3;
          plVar3[2] = (long)plVar4;
          plVar3 = plVar4;
        }
LAB_1001a4d90:
        *(undefined1 *)(plVar3 + 3) = *(undefined1 *)(plVar3[2] + 0x18);
        *(undefined1 *)(plVar3[2] + 0x18) = 1;
        *(undefined1 *)(plVar3[1] + 0x18) = 1;
        lVar6 = plVar3[2];
        plVar4 = *(long **)(lVar6 + 8);
        lVar8 = *plVar4;
        *(long *)(lVar6 + 8) = lVar8;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x10) = lVar6;
        }
        plVar9 = *(long **)(lVar6 + 0x10);
        plVar4[2] = (long)plVar9;
        lVar8 = 0;
        if (*plVar9 != lVar6) {
          lVar8 = 8;
        }
        *(long **)((long)plVar9 + lVar8) = plVar4;
        *plVar4 = lVar6;
        *(long **)(lVar6 + 0x10) = plVar4;
        return;
      }
      if ((plVar3[1] != 0) && (*(char *)(plVar3[1] + 0x18) != '\x01')) goto LAB_1001a4d90;
      *(undefined1 *)(plVar3 + 3) = 0;
      plVar9 = (long *)plVar3[2];
      if ((plVar9 == plVar4) || ((*(byte *)(plVar9 + 3) & 1) == 0)) goto LAB_1001a4d24;
    }
    lVar6 = 8;
    if (*(long **)plVar9[2] != plVar9) {
      lVar6 = 0;
    }
    plVar3 = *(long **)((long)plVar9[2] + lVar6);
    plVar7 = plVar4;
  } while( true );
}



/* Entry: 1001a4e4c; end: 1001a4e9b;  */

long FUN_1001a4e4c(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001001a5100();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  if ((int)param_2[6] == 0) {
    lVar1 = -1;
  }
  else {
    lVar1 = param_2[1] - *param_2 >> 3;
  }
  *(long *)(param_1 + 0x20) = lVar1;
  func_0x0001001a5128(param_1);
  return param_1;
}



/* Entry: 1001a4e9c; end: 1001a4ecb;  */

/* WARNING: Possible PIC construction at 0x0001001a4eb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001a4eb4) */

void FUN_1001a4e9c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 1001a4ecc; end: 1001a4ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001a4ecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e9f8),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1001a4ee4; end: 1001a4f13;  */

/* WARNING: Possible PIC construction at 0x0001001a4ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001a4efc) */

void FUN_1001a4ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1001a4f14; end: 1001a50f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001a4f14(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c41010();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5c8f4();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar3);
    if (param_1 == puVar3) {
      (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + _DAT_11278ea10));
      func_0x000107c3d66c(*(undefined8 *)(param_1 + _DAT_11278ea00));
    }
    else {
      func_0x000107c60f38(*(undefined8 *)(param_1 + _DAT_11278ea0c));
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1001d0a54;
      puStack_60 = &UNK_110896ce8;
      puStack_58 = param_1;
      func_0x000107c4e55c(*(undefined8 *)(param_1 + _DAT_11278e9f4));
      uVar4 = *(undefined8 *)(param_1 + _DAT_11278e9fc);
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1001bec94;
      puStack_90 = &UNK_110883780;
      puStack_88 = param_1;
      func_0x000107c61174(param_3);
      uStack_80 = param_3;
      FUN_10007380c(uVar4,&puStack_a8);
      func_0x000107c61170(uStack_80);
    }
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1001a50f4; end: 1001a53d3;  */

void FUN_1001a50f4(long *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  param_1[2] = param_2;
  plVar1 = (long *)(param_2 + 0x18);
  if (*param_1 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x10016a9d4);
    (*pcVar2)();
  }
  if (param_1[1] == 0) {
    param_1[1] = (long)plVar1;
    lVar3 = *plVar1;
    *param_1 = lVar3;
    *(long **)(lVar3 + 8) = param_1;
    *plVar1 = (long)param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0,0x10016a9e0);
  (*pcVar2)();
}



/* Entry: 1001a53d4; end: 1001a543b;  */

void FUN_1001a53d4(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if ((*param_1 & 3) == 0) {
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    if (param_3 == (undefined8 *)0x0) {
      FUN_1001a5520(puVar2,uVar1);
    }
    else {
      func_0x000107c39890(param_3,puVar2,uVar1);
      puVar2 = param_3;
    }
    *param_1 = (ulong)puVar2;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (*param_1 & 0xfffffffffffffffc);
  return;
}



/* Entry: 1001a543c; end: 1001a551f;  */

void FUN_1001a543c(undefined8 *param_1,uint *param_2)

{
  undefined1 **ppuVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined1 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuStack_48 = &PTR_DAT_110ce0480;
  uStack_40 = 0;
  puStack_30 = &DAT_11383d918;
  uStack_28 = (ulong)*param_2;
  uStack_38 = 3;
  FUN_1001a53d4(&puStack_30,param_2 + 2,0);
  uStack_28 = CONCAT44(param_2[8],(undefined4)uStack_28);
  uStack_38 = uStack_38 | 4;
  puStack_60 = (undefined1 *)0x0;
  lStack_58 = 0;
  uStack_50 = 0;
  pppuVar3 = &ppuStack_48;
  FUN_1001a556c(pppuVar3,&puStack_60);
  if (((ulong)pppuVar3 & 1) == 0) {
    FUN_10012dbd0(param_1,&UNK_10f755fe5);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    ppuVar1 = (undefined1 **)puStack_60;
    if (-1 < (long)uStack_50._7_1_) {
      ppuVar1 = &puStack_60;
    }
    lVar2 = lStack_58;
    if (-1 < uStack_50) {
      lVar2 = (long)uStack_50._7_1_;
    }
    FUN_1001a5b98(ppuVar1,lVar2,param_1);
  }
  func_0x000107c60ca0(&puStack_60);
  FUN_1001a3dc4(&ppuStack_48);
  return;
}



/* Entry: 1001a5520; end: 1001a5563;  */

ulong FUN_1001a5520(ulong param_1)

{
  FUN_100063c9c();
  func_0x000107c60c50();
  return param_1 | 2;
}



/* Entry: 1001a5564; end: 1001a556b;  */

void FUN_1001a5564(void)

{
  return;
}



/* Entry: 1001a556c; end: 1001a5597;  */

bool FUN_1001a556c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long lVar2;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  func_0x000100061464();
  FUN_1001a5598(param_2);
  func_0x0001001a55bc();
  lVar2 = (long)*(char *)(unaff_x19 + 0x17);
  if (lVar2 < 0) {
    lVar2 = unaff_x21[1];
  }
  plVar1 = unaff_x20;
  (**(code **)(*unaff_x20 + 0x28))();
  if ((ulong)plVar1 >> 0x1f == 0) {
    func_0x0001001a5774();
    if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    FUN_1001a5858(unaff_x20,(long)unaff_x21 + lVar2,plVar1);
  }
  else {
    func_0x000107c39c88();
    func_0x000107c2b930(auStack_50);
    func_0x000107c39c80(auStack_68);
    func_0x000107c39c84();
    func_0x000107c39c64();
    func_0x000107c39c78();
    func_0x000107c39c70();
    func_0x000107c39c6c();
  }
  return (ulong)plVar1 >> 0x1f == 0;
}



/* Entry: 1001a5598; end: 1001a55c7;  */

void FUN_1001a5598(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1001a55c8; end: 1001a569b;  */

bool FUN_1001a55c8(void)

{
  long *unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  func_0x0001001a55bc();
  (**(code **)(*unaff_x20 + 0x28))();
  if ((ulong)unaff_x20 >> 0x1f == 0) {
    func_0x0001001a5774();
    FUN_1001a5858();
  }
  else {
    func_0x000107c39c88();
    func_0x000107c2b930(auStack_50);
    func_0x000107c39c80(auStack_68);
    func_0x000107c39c84();
    func_0x000107c39c64();
    func_0x000107c39c78();
    func_0x000107c39c70();
    func_0x000107c39c6c();
  }
  return (ulong)unaff_x20 >> 0x1f == 0;
}



/* Entry: 1001a569c; end: 1001a5743;  */

void FUN_1001a569c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    iVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      uVar2 = (uint)*(undefined8 *)(param_1 + 0x18) & 0xfffffffc;
      FUN_1001a5744();
      iVar3 = uVar2 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + iVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 1001a5744; end: 1001a57af;  */

long FUN_1001a5744(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  return uVar1 + ((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
}



/* Entry: 1001a57b0; end: 1001a5857;  */

void FUN_1001a57b0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar3 < 0) {
      uVar4 = param_1[1];
      lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar3 = (ulong)param_1[2] >> 0x38;
    }
    else {
      lVar1 = 0x16;
      uVar4 = uVar3;
    }
    uVar2 = (uint)uVar3;
    if (lVar1 - uVar4 < param_2) {
      func_0x000107c60c88(param_1,lVar1,(param_2 - lVar1) + uVar4,uVar4,uVar4,0,0);
      param_1[1] = uVar4;
      uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
    }
    if ((uVar2 >> 7 & 1) == 0) {
      *(byte *)((long)param_1 + 0x17) = (char)uVar4 + (char)param_2 & 0x7f;
    }
    else {
      param_1[1] = uVar4 + param_2;
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((long)param_1 + uVar4 + param_2) = 0;
  }
  return;
}



/* Entry: 1001a5858; end: 1001a58bb;  */

long * FUN_1001a5858(long *param_1,long *param_2,int param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_28;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined8 uStack_18;
  
  func_0x000100063820();
  lStack_58 = (long)param_2 + (long)param_3;
  uStack_50 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_1e = uRam000000011383d940;
  uStack_1d = 0;
  plVar4 = &lStack_58;
  uStack_18 = extraout_x8;
  (**(code **)(*param_1 + 0x38))();
  func_0x0001000659a8(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  func_0x000107c60e78();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = plVar4;
    FUN_1001a5994(plVar4,(int)param_1[4],param_2);
    param_2 = plVar2;
  }
  if ((uVar1 & 1) != 0) {
    param_2 = plVar4;
    FUN_1001a5a30(plVar4,2,param_1[3] & 0xfffffffffffffffc);
  }
  plVar2 = param_2;
  if ((uVar1 >> 2 & 1) != 0) {
    plVar2 = plVar4;
    FUN_1001a5b64(plVar4,*(undefined4 *)((long)param_1 + 0x24),param_2);
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar2;
  }
  uVar6 = param_1[1] & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar3 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar3 = uVar6 + 8;
  }
  if ((long)(int)uVar5 <= *plVar4 - (long)plVar2) {
    _memcpy(plVar2,lVar3,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  while( true ) {
    iVar8 = ((int)*plVar4 - (int)plVar2) + 0x10;
    iVar7 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar7 - iVar8);
    if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    lVar3 = (long)plVar2 + (long)iVar8;
    plVar2 = plVar4;
    func_0x000107c303e4(plVar4,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar2 + (long)iVar7);
}



/* Entry: 1001a58bc; end: 1001a597b;  */

long * FUN_1001a58bc(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = param_3;
    FUN_1001a5994(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    param_2 = plVar2;
  }
  if ((uVar1 & 1) != 0) {
    param_2 = param_3;
    FUN_1001a5a30(param_3,2,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  }
  plVar2 = param_2;
  if ((uVar1 >> 2 & 1) != 0) {
    plVar2 = param_3;
    FUN_1001a5b64(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if ((long)(int)uVar4 <= *param_3 - (long)plVar2) {
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  while( true ) {
    iVar7 = ((int)*param_3 - (int)plVar2) + 0x10;
    iVar6 = (int)uVar4;
    uVar4 = (ulong)(uint)(iVar6 - iVar7);
    if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
    func_0x00010b4d5738();
    lVar3 = (long)plVar2 + (long)iVar7;
    plVar2 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar2 + (long)iVar6);
}



/* Entry: 1001a597c; end: 1001a5993;  */

ulong * FUN_1001a597c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (param_2 < (ulong *)*param_1) {
    return param_2;
  }
  do {
    if ((char)param_1[7] == '\x01') {
      return param_1 + 2;
    }
    uVar1 = *param_1;
    puVar2 = param_1;
    FUN_1006b07dc();
    param_2 = (ulong *)((long)puVar2 + (long)((int)param_2 - (int)uVar1));
  } while ((ulong *)*param_1 <= param_2);
  return param_2;
}



/* Entry: 1001a5994; end: 1001a59c7;  */

void FUN_1001a5994(byte *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  
  FUN_1001a597c(param_1,param_3);
  FUN_1001a59c8();
  for (uVar1 = (ulong)param_2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_1 = (byte)uVar1 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)uVar1;
  return;
}



/* Entry: 1001a59c8; end: 1001a5a2f;  */

void FUN_1001a59c8(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = 8;
  while (0x7f < bVar1) {
    *param_2 = bVar1 | 0x80;
    param_2 = param_2 + 1;
    bVar1 = 0;
  }
  *param_2 = bVar1;
  return;
}



/* Entry: 1001a5a30; end: 1001a5b1f;  */

long * FUN_1001a5a30(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar5;
  uint extraout_w10_00;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  
  lVar6 = (long)*(char *)((long)param_3 + 0x17);
  if ((-1 < lVar6) || (lVar6 = param_3[1], lVar6 < 0x80)) {
    lVar9 = *param_1;
    uVar5 = (int)param_2 << 3;
    uVar1 = uVar5;
    FUN_1001a5b20();
    if (lVar6 <= lVar9 + ~((long)param_4 + (long)(int)uVar1) + 0x10) {
      lVar9 = (long)param_4 + 2;
      for (uVar5 = uVar5 | 2; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *(byte *)(lVar9 + -2) = (byte)uVar5 | 0x80;
        lVar9 = lVar9 + 1;
      }
      *(byte *)(lVar9 + -2) = (byte)uVar5;
      *(char *)(lVar9 + -1) = (char)lVar6;
      plVar2 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar2 = param_3;
      }
      func_0x000107c610b4(lVar9,plVar2,lVar6);
      return (long *)(lVar9 + lVar6);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar5 = extraout_w10;
  while (0x7f < uVar5) {
    func_0x00010b4d576c();
    uVar5 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar4 = extraout_x8;
  while (0x7f < (uint)uVar4) {
    func_0x00010b4d5758();
    uVar4 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar7 = (int)param_3;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)param_4) + 0x10 <= (long)iVar7)) {
    plVar2 = param_1;
    func_0x000107c303e0(param_1,param_4);
    plVar3 = (long *)param_1[6];
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
    if (((ulong)plVar3 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar2;
  }
  if (*param_1 - (long)param_4 < (long)iVar7) {
    while( true ) {
      iVar8 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar7 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar7 - iVar8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      lVar6 = (long)param_4 + (long)iVar8;
      param_4 = param_1;
      func_0x000107c303e4(param_1,lVar6);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar7);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)iVar7);
}



/* Entry: 1001a5b20; end: 1001a5b63;  */

undefined4 FUN_1001a5b20(ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 4;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar3 = 5;
  }
  uVar2 = (uint)param_1;
  uVar1 = 3;
  if (0x1fffff < uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 2;
  if (0x3fff < uVar2) {
    uVar3 = uVar1;
  }
  uVar1 = 1;
  if (0x7f < uVar2) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 1001a5b64; end: 1001a5b8f;  */

void FUN_1001a5b64(undefined8 param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int unaff_w19;
  
  func_0x0001001a5b58();
  pbVar2 = (byte *)0x18;
  func_0x0001001a59d0(0x18,param_1);
  for (uVar1 = (ulong)unaff_w19; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  return;
}



/* Entry: 1001a5b90; end: 1001a5b97;  */

void FUN_1001a5b90(int param_1,byte *param_2)

{
  ulong uVar1;
  
  for (uVar1 = (ulong)param_1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_2 = (byte)uVar1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)uVar1;
  return;
}



/* Entry: 1001a5b98; end: 1001a5e5f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_1001a5b98(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3)

{
  byte *pbVar1;
  undefined8 *******pppppppuVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 *******pppppppuVar15;
  ulong uVar16;
  undefined8 *******pppppppuStack_68;
  undefined8 *******pppppppuStack_60;
  undefined8 uStack_58;
  
  pppppppuStack_68 = (undefined8 *******)0x0;
  pppppppuStack_60 = (undefined8 *******)0x0;
  uStack_58 = (undefined8 ******)0x0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (undefined1 *)((long)param_2 + 2);
  uVar11 = (SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2;
  pppppppuVar12 = (undefined8 *******)((ulong)((long)param_2 + 2) / 3 << 2 | 1);
  if (uVar11 < 0x16) {
    pppppppuVar9 = &pppppppuStack_68;
    func_0x000107c60ee4(pppppppuVar9,pppppppuVar12);
    pppppppuVar8 = pppppppuStack_60;
  }
  else {
    pppppppuVar9 = param_1;
    pppppppuVar8 = param_2;
    pppppppuVar10 = param_3;
    if (uVar11 + 0x8000000000000009 < 0x800000000000001e) goto LAB_1001a5e5c;
    pppppppuVar9 = pppppppuVar12;
    if (pppppppuVar12 < (undefined8 *******)0x2d) {
      pppppppuVar9 = (undefined8 *******)0x2c;
    }
    pppppppuVar8 = (undefined8 *******)(((ulong)pppppppuVar9 | 7) + 1);
    pppppppuVar9 = pppppppuVar8;
    func_0x000107c60e20();
    uStack_58 = (undefined8 ******)((ulong)pppppppuVar8 | 0x8000000000000000);
    pppppppuStack_60 = (undefined8 *******)0x0;
    pppppppuStack_68 = pppppppuVar9;
    func_0x000107c60ee4();
    pppppppuVar8 = pppppppuStack_60;
  }
  pppppppuStack_60 = pppppppuVar12;
  if (-1 < (long)uStack_58) {
    uStack_58 = (undefined8 ******)
                (CONCAT17((char)pppppppuVar12,(undefined7)uStack_58) & 0x7dffffffffffffff);
    pppppppuStack_60 = pppppppuVar8;
  }
  *(undefined1 *)((long)pppppppuVar9 + (long)pppppppuVar12) = 0;
  pppppppuVar9 = pppppppuStack_68;
  if (-1 < (long)uStack_58) {
    pppppppuVar9 = &pppppppuStack_68;
  }
  FUN_1001a5e60();
  pppppppuVar12 = (undefined8 *******)(long)uStack_58._7_1_;
  if ((long)pppppppuVar12 < 0) {
    if (pppppppuVar9 <= pppppppuStack_60) {
      pppppppuStack_60 = pppppppuVar9;
      *(undefined1 *)((long)pppppppuStack_68 + (long)pppppppuVar9) = 0;
      cVar6 = *(char *)((long)param_3 + 0x17);
      goto joined_r0x0001001a5df4;
    }
    uVar16 = ((ulong)uStack_58 & 0x7fffffffffffffff) - 1;
    uVar14 = (uint)((ulong)uStack_58 >> 0x3f);
    uVar11 = (long)pppppppuVar9 - (long)pppppppuStack_60;
    pppppppuVar12 = pppppppuStack_60;
    if (uVar16 - (long)pppppppuStack_60 < uVar11) goto LAB_1001a5ccc;
LAB_1001a5dc0:
    pppppppuVar15 = pppppppuStack_68;
    if (uVar14 == 0) {
      pppppppuVar15 = &pppppppuStack_68;
    }
    pppppppuVar8 = (undefined8 *******)((long)pppppppuVar15 + (long)pppppppuVar12);
    func_0x000107c60ee4(pppppppuVar8,uVar11);
  }
  else {
    if (pppppppuVar9 <= pppppppuVar12) {
      uStack_58 = (undefined8 ******)CONCAT17((char)pppppppuVar9,(undefined7)uStack_58);
      *(undefined1 *)((long)&pppppppuStack_68 + (long)pppppppuVar9) = 0;
      cVar6 = *(char *)((long)param_3 + 0x17);
      goto joined_r0x0001001a5df4;
    }
    uVar14 = 0;
    uVar16 = 0x16;
    uVar11 = (long)pppppppuVar9 - (long)pppppppuVar12;
    if (uVar11 <= 0x16U - (long)pppppppuVar12) goto LAB_1001a5dc0;
LAB_1001a5ccc:
    pppppppuVar8 = param_1;
    pppppppuVar10 = param_2;
    if ((undefined1 *)(0x7ffffffffffffff7 - uVar16) <
        (undefined1 *)((uVar11 - uVar16) + (long)pppppppuVar12)) {
LAB_1001a5e5c:
      func_0x000104c4f6b8();
      pppppppuVar12 = pppppppuVar9;
      if (pppppppuVar10 < (undefined8 *******)0x3) {
        pppppppuVar15 = (undefined8 *******)0x0;
      }
      else {
        for (pppppppuVar15 = (undefined8 *******)0x0;
            pppppppuVar15 < (undefined8 *******)((long)pppppppuVar10 + -2);
            pppppppuVar15 = (undefined8 *******)((long)pppppppuVar15 + 3)) {
          pbVar1 = (byte *)((long)pppppppuVar8 + (long)pppppppuVar15);
          bVar3 = *pbVar1;
          bVar4 = pbVar1[1];
          bVar5 = pbVar1[2];
          *(undefined *)pppppppuVar12 = (&UNK_10e575c3c)[bVar3];
          *(undefined *)((long)pppppppuVar12 + 1) =
               (&UNK_10e575d3c)[(ulong)(bVar4 >> 4) | ((ulong)bVar3 & 3) << 4];
          *(undefined *)((long)pppppppuVar12 + 2) =
               (&UNK_10e575d3c)[(ulong)(bVar5 >> 6) | ((ulong)bVar4 & 0xf) << 2];
          *(undefined *)((long)pppppppuVar12 + 3) = (&UNK_10e575d3c)[bVar5];
          pppppppuVar12 = (undefined8 *******)((long)pppppppuVar12 + 4);
        }
      }
      if (pppppppuVar10 != pppppppuVar15) {
        if ((long)pppppppuVar10 - (long)pppppppuVar15 == 1) {
          bVar3 = *(byte *)((long)pppppppuVar8 + (long)pppppppuVar15);
          *(undefined *)pppppppuVar12 = (&UNK_10e575c3c)[bVar3];
          *(undefined *)((long)pppppppuVar12 + 1) = (&UNK_10e575d3c)[((ulong)bVar3 & 3) * 0x10];
          uVar13 = 0x3d;
        }
        else {
          uVar11 = (ulong)*(byte *)((long)pppppppuVar8 + (long)pppppppuVar15);
          bVar3 = ((byte *)((long)pppppppuVar8 + (long)pppppppuVar15))[1];
          *(undefined *)pppppppuVar12 = (&UNK_10e575c3c)[uVar11];
          *(undefined *)((long)pppppppuVar12 + 1) =
               (&UNK_10e575d3c)[(ulong)(bVar3 >> 4) | (uVar11 & 3) << 4];
          uVar13 = (&UNK_10e575d3c)[((ulong)bVar3 & 0xf) * 4];
        }
        *(undefined1 *)((long)pppppppuVar12 + 2) = uVar13;
        *(undefined1 *)((long)pppppppuVar12 + 3) = 0x3d;
        pppppppuVar12 = (undefined8 *******)((long)pppppppuVar12 + 4);
      }
      *(undefined1 *)pppppppuVar12 = 0;
      return (undefined8 *******)((long)pppppppuVar12 - (long)pppppppuVar9);
    }
    pppppppuVar8 = pppppppuStack_68;
    if (-1 < (long)uStack_58) {
      pppppppuVar8 = &pppppppuStack_68;
    }
    pppppppuVar10 = (undefined8 *******)0x7ffffffffffffff7;
    if (uVar16 < 0x3ffffffffffffff3) {
      pppppppuVar15 = pppppppuVar9;
      if (pppppppuVar9 <= (undefined8 *******)(uVar16 * 2)) {
        pppppppuVar15 = (undefined8 *******)(uVar16 * 2);
      }
      pppppppuVar2 = (undefined8 *******)0x19;
      if (((ulong)pppppppuVar15 | 7) != 0x17) {
        pppppppuVar2 = (undefined8 *******)(((ulong)pppppppuVar15 | 7) + 1);
      }
      pppppppuVar10 = (undefined8 *******)0x17;
      if ((undefined8 *******)0x16 < pppppppuVar15) {
        pppppppuVar10 = pppppppuVar2;
      }
    }
    pppppppuVar15 = pppppppuVar10;
    func_0x000107c60e20();
    if (pppppppuVar12 != (undefined8 *******)0x0) {
      func_0x000107c610b8(pppppppuVar15,pppppppuVar8,pppppppuVar12);
    }
    if (uVar16 != 0x16) {
      func_0x000107c60e14(pppppppuVar8);
    }
    uStack_58 = (undefined8 ******)((ulong)pppppppuVar10 | 0x8000000000000000);
    pppppppuVar8 = (undefined8 *******)((long)pppppppuVar15 + (long)pppppppuVar12);
    pppppppuStack_68 = pppppppuVar15;
    pppppppuStack_60 = pppppppuVar12;
    func_0x000107c60ee4(pppppppuVar8,uVar11);
  }
  if ((long)uStack_58 < 0) {
    pppppppuStack_60 = pppppppuVar9;
    *(undefined1 *)((long)pppppppuVar15 + (long)pppppppuVar9) = 0;
    cVar6 = *(char *)((long)param_3 + 0x17);
    pppppppuVar9 = pppppppuVar8;
  }
  else {
    uStack_58 = (undefined8 ******)
                (CONCAT17((char)pppppppuVar9,(undefined7)uStack_58) & 0x7fffffffffffffff);
    *(undefined1 *)((long)pppppppuVar15 + (long)pppppppuVar9) = 0;
    cVar6 = *(char *)((long)param_3 + 0x17);
    pppppppuVar9 = pppppppuVar8;
  }
joined_r0x0001001a5df4:
  if (cVar6 < '\0') {
    pppppppuVar9 = (undefined8 *******)*param_3;
    func_0x000107c60e14(pppppppuVar9);
  }
  param_3[1] = pppppppuStack_60;
  *param_3 = pppppppuStack_68;
  param_3[2] = uStack_58;
  return pppppppuVar9;
}



/* Entry: 1001a5e60; end: 1001a68b3;  */

long FUN_1001a5e60(undefined1 *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar5 = param_1;
  if (param_3 < 3) {
    uVar7 = 0;
  }
  else {
    for (uVar7 = 0; uVar7 < param_3 - 2; uVar7 = uVar7 + 3) {
      pbVar1 = (byte *)(param_2 + uVar7);
      bVar2 = *pbVar1;
      bVar3 = pbVar1[1];
      bVar4 = pbVar1[2];
      *puVar5 = (&UNK_10e575c3c)[bVar2];
      puVar5[1] = (&UNK_10e575d3c)[(ulong)(bVar3 >> 4) | ((ulong)bVar2 & 3) << 4];
      puVar5[2] = (&UNK_10e575d3c)[(ulong)(bVar4 >> 6) | ((ulong)bVar3 & 0xf) << 2];
      puVar5[3] = (&UNK_10e575d3c)[bVar4];
      puVar5 = puVar5 + 4;
    }
  }
  if (param_3 != uVar7) {
    if (param_3 - uVar7 == 1) {
      bVar2 = *(byte *)(param_2 + uVar7);
      *puVar5 = (&UNK_10e575c3c)[bVar2];
      puVar5[1] = (&UNK_10e575d3c)[((ulong)bVar2 & 3) * 0x10];
      uVar6 = 0x3d;
    }
    else {
      uVar8 = (ulong)*(byte *)(param_2 + uVar7);
      bVar2 = ((byte *)(param_2 + uVar7))[1];
      *puVar5 = (&UNK_10e575c3c)[uVar8];
      puVar5[1] = (&UNK_10e575d3c)[(ulong)(bVar2 >> 4) | (uVar8 & 3) << 4];
      uVar6 = (&UNK_10e575d3c)[((ulong)bVar2 & 0xf) * 4];
    }
    puVar5[2] = uVar6;
    puVar5[3] = 0x3d;
    puVar5 = puVar5 + 4;
  }
  *puVar5 = 0;
  return (long)puVar5 - (long)param_1;
}



/* Entry: 1001a68b4; end: 1001a695f;  */

long FUN_1001a68b4(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)((long)param_1 + param_2 + -8);
  uVar3 = lVar1 * -0x651e95c4d06fbfb1;
  uVar4 = *param_1 * -0x4b6d499041670d8d - param_1[1];
  uVar2 = param_1[1] ^ 0xc949d7c7509e6557;
  uVar2 = *param_1 * -0x4b6d499041670d8d + param_2 + (uVar2 >> 0x14 | uVar2 << 0x2c) +
          lVar1 * 0x651e95c4d06fbfb1;
  uVar3 = ((uVar3 >> 0x1e | uVar3 << 0x22) + (uVar4 >> 0x2b | uVar4 * 0x200000) +
           *(long *)((long)param_1 + param_2 + -0x10) * -0x3c5a37a36834ced9 ^ uVar2) *
          -0x622015f714c7d297;
  uVar2 = (uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
}



/* Entry: 1001a6960; end: 1001a69cf;  */

bool FUN_1001a6960(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_3 + 0x17);
  uVar2 = param_3[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar6 = param_2;
    }
    plVar3 = (long *)*param_3;
    if (-1 < (char)bVar5) {
      plVar3 = param_3;
    }
    func_0x000107c610b0(plVar6,plVar3,uVar1);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 1001a69d0; end: 1001aa23b;  */

void FUN_1001a69d0(void)

{
  return;
}



/* Entry: 1001aa23c; end: 1001aa37b;  */

undefined1  [16] FUN_1001aa23c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  long alStack_110 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  alStack_110[0] = 0;
  alStack_110[1] = 0;
  alStack_110[2] = 0;
  puStack_50 = &uStack_a8;
  puStack_38 = &uStack_58;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0xaaaaaaaaaaaaaa00;
  uStack_58 = 0xaaaaaaaaaaaaaa01;
  lStack_128 = param_2[1];
  plStack_130 = (long *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lStack_120 = param_2[2];
  param_2[2] = 0;
  plVar6 = alStack_110;
  alStack_110[3] = param_1;
  puStack_48 = puStack_50;
  puStack_40 = puStack_50;
  puStack_30 = puStack_50;
  func_0x0001001aa054(param_1,plVar6,&plStack_130);
  if (lStack_120 != 0) {
    func_0x000107c61268(lStack_120 + 0x20);
  }
  plVar5 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plStack_130 = (long *)0x0;
    if (lStack_128 != 0) {
      plVar6 = plVar5;
      func_0x0001001b6dcc(lStack_128,plVar5);
    }
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if (plStack_130 != (long *)0x0) {
      plVar5 = plStack_130 + 1;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plStack_130 + 0x20))();
      }
    }
  }
  plVar5 = alStack_110;
  FUN_10012a76c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar7._8_8_ = plVar6;
    auVar7._0_8_ = plVar5;
    return auVar7;
  }
  func_0x000107c60e78();
  auVar8._1_7_ = 0;
  auVar8[0] = *(byte *)((long)plVar5 + 0x1b);
  auVar8._8_8_ = plVar5[0x13];
  return auVar8;
}



/* Entry: 1001aa37c; end: 1001ab333;  */

undefined1 FUN_1001aa37c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 1001ab334; end: 1001ab363;  */

undefined8 * FUN_1001ab334(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSAutoreleasePool_1126ddfd8;
  func_0x000107c610fc();
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 1001ab364; end: 1001ab38b;  */

void FUN_1001ab364(long param_1)

{
  if (param_1 != 0) {
    func_0x00010014c5e8(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1001ab38c; end: 1001abb9b;  */

long * FUN_1001ab38c(long *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  lStack_e8 = -0x5555555555555556;
  uStack_d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_e0 = 0xaaaaaaaaaaaaaaaa;
  lVar17 = *(long *)(param_2 + 0x30);
  lStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  plStack_90 = &lStack_e8;
  plStack_78 = &lStack_98;
  plStack_128 = (long *)0x0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  plStack_108 = (long *)0x0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_f0 = 0xaaaaaaaaaaaaaa00;
  lStack_98 = -0x55555555555555ff;
  iVar5 = (int)lVar17 + 0x28;
  lStack_138 = lVar17;
  plStack_88 = plStack_90;
  plStack_80 = plStack_90;
  plStack_70 = plStack_90;
  func_0x000107c61264();
  if (iVar5 == 0) {
    plVar6 = *(long **)(param_2 + 0x30);
    bVar2 = *(byte *)((long)plVar6 + 0xe4);
  }
  else {
    func_0x000107c2cfbc(lVar17 + 0x28);
    plVar6 = *(long **)(param_2 + 0x30);
    bVar2 = *(byte *)((long)plVar6 + 0xe4);
  }
  if ((((bVar2 & 1) == 0) && ((int)plVar6[0x1c] != 0)) &&
     ((**(code **)(*plVar6 + 0x40))(plVar6,&lStack_150),
     plStack_130 != (long *)0x0 || plStack_110 != (long *)0x0)) {
    lVar15 = *(long *)(param_2 + 0x30);
    func_0x000107c61268(lVar15 + 0x28);
    FUN_10012a4f4(&lStack_150);
    plVar7 = plStack_130;
    plStack_130 = (long *)0x0;
    plVar16 = plStack_120;
    plVar6 = plStack_128;
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      do {
        iVar5 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x18))();
        plVar16 = plStack_120;
        plVar6 = plStack_128;
      }
    }
    while (plVar7 = plStack_110, plVar16 != plVar6) {
      plVar16 = plVar16 + -1;
      plVar7 = (long *)*plVar16;
      if (plVar7 != (long *)0x0) {
        plVar9 = plVar7 + 1;
        do {
          iVar5 = (int)*plVar9 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    }
    plStack_110 = (long *)0x0;
    plVar16 = plStack_100;
    plStack_120 = plVar6;
    plVar6 = plStack_108;
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      do {
        iVar5 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x18))();
        plVar16 = plStack_100;
        plVar6 = plStack_108;
      }
    }
    while (plVar16 != plVar6) {
      plVar16 = plVar16 + -1;
      plVar7 = (long *)*plVar16;
      if (plVar7 != (long *)0x0) {
        plVar9 = plVar7 + 1;
        do {
          iVar5 = (int)*plVar9 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    }
    uStack_f0 = uStack_f0 & 0xffffffffffffff00;
    iVar5 = (int)lVar15 + 0x28;
    plStack_100 = plVar6;
    func_0x000107c61264();
    if (iVar5 != 0) {
      func_0x000107c2cfbc(lVar15 + 0x28);
    }
  }
  lVar15 = *(long *)(*(long *)(param_2 + 0x30) + 0x168);
  if (*(long *)(*(long *)(param_2 + 0x30) + 0x160) == lVar15) {
    if (param_3 != 0) goto LAB_1001ab584;
LAB_1001ab5a0:
    iVar5 = (int)param_3 + 0x18;
    func_0x000107c61264();
    if (iVar5 != 0) {
      func_0x000107c2cfbc(param_3 + 0x18);
      lVar15 = *(long *)(param_3 + 0x60);
      plVar6 = (long *)(param_3 + 0x18);
      func_0x000107c61268();
      if (lVar15 != 0) goto LAB_1001ab5bc;
LAB_1001aba88:
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_1001aba8c;
    }
    lVar15 = *(long *)(param_3 + 0x60);
    plVar6 = (long *)(param_3 + 0x18);
    func_0x000107c61268();
    if (lVar15 == 0) goto LAB_1001aba88;
LAB_1001ab5bc:
    FUN_100128a9c();
    lVar10 = *(long *)(param_2 + 0x30);
    if (((long)plVar6 - lVar15 < *(long *)(lVar10 + 0xc0)) || ((*(byte *)(lVar10 + 0x181) & 1) != 0)
       ) goto LAB_1001aba88;
    lVar15 = *(long *)(lVar10 + 0x1d0);
    plVar7 = plStack_88;
    if (lVar15 == 0) {
LAB_1001ab6e8:
      plStack_88 = plVar7;
      *(undefined1 *)(param_3 + 0x90) = 1;
      func_0x00010012c800(param_3 + 0x68);
      lVar15 = *(long *)(param_2 + 0x30);
      plVar6 = *(long **)(lVar15 + 0x160);
      plVar7 = *(long **)(lVar15 + 0x168);
      plVar16 = plVar6;
      if (plVar6 != plVar7) {
        uVar12 = (long)plVar7 + (-8 - (long)plVar6);
        uVar11 = (uint)uVar12;
        if ((~uVar11 & 0x18) != 0) {
          uVar13 = (ulong)((uVar11 >> 3) + 1) & 3;
          do {
            plVar16 = plVar6;
            if (*plVar6 == param_3) goto LAB_1001ab750;
            plVar6 = plVar6 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        plVar16 = plVar7;
        if (0x17 < uVar12) {
          plVar6 = plVar6 + 2;
          do {
            if (plVar6[-2] == param_3) {
              plVar16 = plVar6 + -2;
              break;
            }
            if (plVar6[-1] == param_3) {
              plVar16 = plVar6 + -1;
              break;
            }
            plVar16 = plVar6;
            if (*plVar6 == param_3) break;
            if (plVar6[1] == param_3) {
              plVar16 = plVar6 + 1;
              break;
            }
            plVar9 = plVar6 + 2;
            plVar6 = plVar6 + 4;
            plVar16 = plVar7;
          } while (plVar9 != plVar7);
        }
      }
LAB_1001ab750:
      lVar10 = (long)plVar7 - (long)(plVar16 + 1);
      if (lVar10 != 0) {
        func_0x000107c610b8(plVar16,plVar16 + 1,lVar10);
      }
      *(long *)(lVar15 + 0x168) = (long)plVar16 + lVar10;
      lVar15 = *(long *)(param_2 + 0x30);
      plVar6 = *(long **)(lVar15 + 0x118);
      plVar16 = *(long **)(lVar15 + 0x120);
      plVar7 = plVar6;
      if (plVar6 != plVar16) {
        uVar12 = (long)plVar16 + (-8 - (long)plVar6);
        uVar11 = (uint)uVar12;
        if ((~uVar11 & 0x18) != 0) {
          uVar13 = (ulong)((uVar11 >> 3) + 1) & 3;
          do {
            plVar7 = plVar6;
            if (*plVar6 == param_3) goto LAB_1001ab814;
            plVar6 = plVar6 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        plVar7 = plVar16;
        if (0x17 < uVar12) {
          plVar6 = plVar6 + 2;
          do {
            if (plVar6[-2] == param_3) {
              plVar7 = plVar6 + -2;
              break;
            }
            if (plVar6[-1] == param_3) {
              plVar7 = plVar6 + -1;
              break;
            }
            plVar7 = plVar6;
            if (*plVar6 == param_3) break;
            if (plVar6[1] == param_3) {
              plVar7 = plVar6 + 1;
              break;
            }
            plVar9 = plVar6 + 2;
            plVar6 = plVar6 + 4;
            plVar7 = plVar16;
          } while (plVar9 != plVar16);
        }
      }
LAB_1001ab814:
      plVar6 = plVar7 + 1;
      if (plVar6 != plVar16) {
        do {
          lVar10 = *plVar6;
          *plVar6 = 0;
          plVar9 = (long *)*plVar7;
          *plVar7 = lVar10;
          if (plVar9 != (long *)0x0) {
            plVar8 = plVar9 + 1;
            do {
              iVar5 = (int)*plVar8 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *(int *)plVar8 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
          plVar6 = plVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (plVar6 != plVar16);
        plVar16 = *(long **)(lVar15 + 0x120);
      }
      while (plVar16 != plVar7) {
        plVar16 = plVar16 + -1;
        plVar6 = (long *)*plVar16;
        if (plVar6 != (long *)0x0) {
          plVar9 = plVar6 + 1;
          do {
            iVar5 = (int)*plVar9 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *(int *)plVar9 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
      }
      *(long **)(lVar15 + 0x120) = plVar7;
      goto LAB_1001aba88;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    if (plStack_80 < plStack_78) {
      *plStack_80 = lVar15;
      *(undefined4 *)(plStack_80 + 1) = uVar1;
      plVar7 = plStack_88;
      plStack_80 = plStack_80 + 2;
      goto LAB_1001ab6e8;
    }
    lVar10 = (long)plStack_80 - (long)plStack_88;
    uVar12 = (lVar10 >> 4) + 1;
    if (uVar12 >> 0x3c == 0) {
      uVar13 = (long)plStack_78 - (long)plStack_88 >> 3;
      if (uVar13 <= uVar12) {
        uVar13 = uVar12;
      }
      if (0x7fffffffffffffef < (ulong)((long)plStack_78 - (long)plStack_88)) {
        uVar13 = 0xfffffffffffffff;
      }
      if (uVar13 == 0) {
        plVar6 = (long *)0x0;
      }
      else if (((plStack_70 == (long *)0x0) || (5 < uVar13)) ||
              ((*(byte *)(plStack_70 + 10) & 1) != 0)) {
        if (uVar13 >> 0x3c != 0) goto LAB_1001abb98;
        plVar6 = (long *)(uVar13 << 4);
        func_0x000107c60e20();
      }
      else {
        *(undefined1 *)(plStack_70 + 10) = 1;
        plVar6 = plStack_70;
      }
      plVar7 = (long *)((long)plVar6 + lVar10);
      plVar6 = plVar6 + uVar13 * 2;
      *plVar7 = lVar15;
      *(undefined4 *)(plVar7 + 1) = uVar1;
      plVar16 = plVar7 + 2;
      plVar7 = (long *)((long)plVar7 + ((long)plStack_88 - (long)plStack_80));
      plVar9 = plVar7;
      for (plVar8 = plStack_88; plStack_80 != plVar8; plVar8 = plVar8 + 2) {
        lVar15 = *plVar8;
        plVar9[1] = plVar8[1];
        *plVar9 = lVar15;
        plVar9 = plVar9 + 2;
      }
      plStack_80 = plVar16;
      plStack_78 = plVar6;
      if (plStack_88 != (long *)0x0) {
        if (plStack_70 == plStack_88) {
          plStack_88 = plVar7;
          *(undefined1 *)(plStack_70 + 10) = 0;
          plVar7 = plStack_88;
        }
        else {
          plStack_88 = plVar7;
          func_0x000107c60e14();
          plVar7 = plStack_88;
          plStack_80 = plVar16;
        }
      }
      goto LAB_1001ab6e8;
    }
  }
  else {
    if (*(long *)(lVar15 + -8) == param_3) goto LAB_1001ab5a0;
LAB_1001ab584:
    iVar5 = (int)param_3 + 0x18;
    func_0x000107c61264();
    if (iVar5 == 0) {
      lVar15 = *(long *)(param_3 + 0x60);
      func_0x000107c61268(param_3 + 0x18);
    }
    else {
      func_0x000107c2cfbc(param_3 + 0x18);
      lVar15 = *(long *)(param_3 + 0x60);
      func_0x000107c61268(param_3 + 0x18);
    }
    if (lVar15 != 0) goto LAB_1001ab5a0;
    lVar10 = *(long *)(param_2 + 0x30);
    lVar15 = *(long *)(lVar10 + 0x168);
    if (*(ulong *)(lVar10 + 0x138) <
        (ulong)((*(long *)(lVar10 + 0x120) - *(long *)(lVar10 + 0x118) >> 3) -
               (lVar15 - *(long *)(lVar10 + 0x160) >> 3))) {
      lStack_160 = param_3;
      if (*(long *)(lVar10 + 0x160) != lVar15) {
        lVar14 = *(long *)(lVar15 + -8);
        lVar15 = lVar14 + 0x18;
        func_0x000107c61264();
        if ((int)lVar15 != 0) {
          lVar15 = lVar14 + 0x18;
          func_0x000107c2cfbc();
        }
        FUN_100128a9c();
        *(long *)(lVar14 + 0x60) = lVar15;
        func_0x000107c61268(lVar14 + 0x18);
      }
LAB_1001aba74:
      FUN_10012b7a0(lVar10 + 0x160,&lStack_160);
      func_0x000107c6121c(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x178));
      goto LAB_1001aba88;
    }
    do {
      lVar10 = *(long *)(param_2 + 0x30);
      if (*(long *)(lVar10 + 0x70) == *(long *)(lVar10 + 0x78)) {
LAB_1001aba38:
        lStack_160 = param_3;
        if (*(long *)(lVar10 + 0x160) != *(long *)(lVar10 + 0x168)) {
          lVar14 = *(long *)(*(long *)(lVar10 + 0x168) + -8);
          lVar15 = lVar14 + 0x18;
          func_0x000107c61264();
          if ((int)lVar15 != 0) {
            lVar15 = lVar14 + 0x18;
            func_0x000107c2cfbc();
          }
          FUN_100128a9c();
          *(long *)(lVar14 + 0x60) = lVar15;
          func_0x000107c61268(lVar14 + 0x18);
        }
        goto LAB_1001aba74;
      }
      bVar2 = *(byte *)(*(long *)(lVar10 + 0x70) + 0x10);
      iVar5 = *(int *)(*(long *)(lVar10 + 8) + 0x3c);
      if (iVar5 == 0) {
        lVar10 = *(long *)(param_2 + 0x30);
        if ((bVar2 == 0) && (*(ulong *)(lVar10 + 0x140) <= *(ulong *)(lVar10 + 0x150)))
        goto LAB_1001aba38;
      }
      else {
        lVar10 = *(long *)(param_2 + 0x30);
        if (bVar2 == 0 || iVar5 != 1) goto LAB_1001aba38;
      }
      func_0x0001001abd1c(&lStack_160,lVar10,&lStack_150);
      lVar15 = lStack_160;
    } while (lStack_160 == 0);
    lVar10 = *(long *)(param_2 + 0x30);
    uVar12 = *(long *)(lVar10 + 0x148) + 1;
    *(ulong *)(lVar10 + 0x148) = uVar12;
    if (bVar2 == 0) {
      *(long *)(lVar10 + 0x150) = *(long *)(lVar10 + 0x150) + 1;
    }
    if ((*(long *)(lVar10 + 0x70) == *(long *)(lVar10 + 0x78)) ||
       (uVar12 < *(ulong *)(lVar10 + 0x138))) {
      *(undefined2 *)(lVar10 + 0xa8) = 0;
    }
    else {
      *(undefined2 *)(lVar10 + 0xa8) = *(undefined2 *)(*(long *)(lVar10 + 0x70) + 0x10);
    }
    *(ushort *)(param_2 + 0x20) = (ushort)bVar2 << 8 | 1;
    *(ushort *)(param_2 + 0x22) = (*(byte *)(lStack_160 + 0x16) & 0x7f) << 8 | 1;
    plVar6 = *(long **)(param_2 + 0x30);
    if ((*(char *)((long)plVar6 + 0xe4) == '\x01') && ((int)plVar6[0x1c] != 0)) {
      (**(code **)(*plVar6 + 0x40))(plVar6,&lStack_150);
    }
    param_1[1] = lStack_158;
    *param_1 = lVar15;
LAB_1001aba8c:
    func_0x000107c61268(lVar17 + 0x28);
    plVar6 = &lStack_150;
    FUN_10012a76c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar6;
    }
    func_0x000107c60e78();
  }
  func_0x000107c2cde0();
LAB_1001abb98:
  func_0x000107c35c58();
  if ((*plVar6 != 0) && (*(char *)(*plVar6 + 4) == '\0')) {
    return (long *)(ulong)(plVar6[1] != 0);
  }
  return (long *)0x0;
}



/* Entry: 1001abb9c; end: 1001ad44f;  */

bool FUN_1001abb9c(long *param_1)

{
  if ((*param_1 != 0) && (*(char *)(*param_1 + 4) == '\0')) {
    return param_1[1] != 0;
  }
  return false;
}



/* Entry: 1001ad450; end: 1001ad51f;  */

undefined8 FUN_1001ad450(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c613dc(param_1,0x400);
    if (lVar1 + 0x19U < 0x401) {
      lVar2 = 0x1137fc7d9;
      func_0x000107c613d8(0x1137fc7d9,param_1,0x3ff);
      if (*(char *)(lVar1 + lVar2 + -1) != '/') {
        *(undefined2 *)(lVar1 + 0x1137fc7d9) = 0x2f;
      }
      lVar1 = 0x1137fc7d9;
      func_0x000107c613d0(0x1137fc7d9);
      func_0x000107c60e7c(0x1137fc7d9,&DAT_10f7c43cb,0x3ff - lVar1,0x400);
      uVar3 = 1;
      uRam00000001137fc7d8 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 1001ad520; end: 1001ad5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1001ad520(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112da9c60;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112da9c60);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    FUN_1000d224c(&uStack_38);
    puVar3 = PTR_PTR_1126a74e8;
    func_0x000107c610f8();
    func_0x000107c46238();
    func_0x000107c615e8(uStack_38);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1001ad5cc; end: 1001ad5d3;  */

void FUN_1001ad5cc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1001ad5d4; end: 1001ad60b;  */

void FUN_1001ad5d4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1001ad60c; end: 1001ad60f;  */

undefined8 FUN_1001ad60c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1001ad610; end: 1001ad633;  */

undefined8 FUN_1001ad610(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1001ad634; end: 1001ad6af;  */

void FUN_1001ad634(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100093514();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1001ad6b0; end: 1001ad723; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ad6b0(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126a6de0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112d9d658) = puVar1;
  puVar1 = PTR_PTR_1126a6de8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112d9d660) = puVar1;
  FUN_100093514();
  lStack_30 = param_1;
  puStack_28 = puVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1001ad724; end: 1001ad743;  */

void FUN_1001ad724(void)

{
  func_0x000107c61168(&PTR_PTR_1127e3c38);
  return;
}



/* Entry: 1001ad744; end: 1001ad7b7; -[SCGrapheneToolsMetric2 init] */

undefined1 * FUN_1001ad744(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7390;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1001ad7b8; end: 1001ad82b; -[SCGraphenePlatformMetric2 init] */

undefined1 * FUN_1001ad7b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7388;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1001ad82c; end: 1001ad853;  */

void FUN_1001ad82c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1001ad854; end: 1001ad8a3;  */

void FUN_1001ad854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001ad8a4; end: 1001ad8e7;  */

void FUN_1001ad8a4(undefined8 param_1)

{
  FUN_1000285a8(0x112dbe780,&UNK_10d9799a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003d1f68,param_1);
  return;
}



/* Entry: 1001ad8e8; end: 1001ad937;  */

void FUN_1001ad8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001ad938; end: 1001ad957;  */

void FUN_1001ad938(void)

{
  func_0x000107c61168(&PTR_PTR_112dc9b30);
  return;
}



/* Entry: 1001ad958; end: 1001ad9f7;  */

void FUN_1001ad958(void)

{
  long unaff_x21;
  
  func_0x0001001ad964();
  if (unaff_x21 != 0) {
    func_0x000107c607d0();
  }
  return;
}



/* Entry: 1001ad9f8; end: 1001ada8f;  */

void FUN_1001ad9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd3008,&UNK_10d995800);
  puVar1 = &UNK_110412328;
  func_0x000107c613fc(&UNK_110412328,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100b8ac1c,puVar1);
  return;
}



/* Entry: 1001ada90; end: 1001adaaf;  */

void FUN_1001ada90(void)

{
  func_0x000107c61168(&PTR_PTR_112dd3080);
  return;
}



/* Entry: 1001adab0; end: 1001adaeb;  */

long FUN_1001adab0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = 0;
  if (lVar1 != 0) {
    func_0x000107c607c0();
    lVar2 = lVar1;
    func_0x000107c607cc();
    lVar3 = *param_1;
    if (lVar1 != lVar2) {
      lVar3 = 0;
    }
  }
  return lVar3;
}



/* Entry: 1001adaec; end: 1001ade2b;  */

void FUN_1001adaec(void)

{
  return;
}



/* Entry: 1001ade2c; end: 1001ae0ef;  */

undefined8 FUN_1001ade2c(long param_1)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  *(undefined1 *)(param_1 + 0x54) = 0;
  pbVar11 = *(byte **)(param_1 + 0x10);
  pbVar3 = *(byte **)(param_1 + 0x18);
  *(byte **)(param_1 + 8) = pbVar11;
  if (pbVar3 != pbVar11) {
    lVar1 = param_1 + 0x20;
    cVar6 = *(char *)(param_1 + 0x37);
    lVar10 = (long)cVar6;
    pbVar12 = pbVar11;
    if (lVar10 < 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      do {
        pbVar12 = pbVar12 + 1;
        pbVar2 = pbVar11 + 1;
        *(byte **)(param_1 + 0x10) = pbVar2;
        bVar5 = *pbVar11;
        lVar9 = lVar8;
        func_0x000107c610ac(lVar8,(long)(char)bVar5,uVar4);
        if ((lVar9 == 0 || lVar9 - lVar8 == -1) &&
           ((bVar7 = *(int *)(param_1 + 0x58) == 1, !bVar7 ||
            (0x20 < bVar5 || (1L << ((ulong)(uint)bVar5 & 0x3f) & 0x100003600U) == 0)))) {
LAB_1001adf6c:
          pbVar12 = pbVar11 + 1;
          if (pbVar11 + 1 != pbVar3) {
            if (cVar6 < '\0') {
              lVar1 = *(long *)(param_1 + 0x20);
              uVar4 = *(undefined8 *)(param_1 + 0x28);
              if (bVar7) {
                do {
                  lVar10 = lVar1;
                  func_0x000107c610ac(lVar1,(long)(char)*pbVar12,uVar4);
                  if (lVar10 != 0 && lVar10 - lVar1 != -1) {
                    return 1;
                  }
                  if ((*pbVar12 - 9 < 0x18) &&
                     ((0x80001bU >> (ulong)(*pbVar12 - 9 & 0x1f) & 1) != 0)) {
                    return 1;
                  }
                  pbVar12 = pbVar12 + 1;
                  *(byte **)(param_1 + 0x10) = pbVar12;
                } while (pbVar12 != pbVar3);
              }
              else {
                do {
                  lVar10 = lVar1;
                  func_0x000107c610ac(lVar1,(long)(char)*pbVar12,uVar4);
                  if (lVar10 != 0 && lVar10 - lVar1 != -1) {
                    return 1;
                  }
                  pbVar12 = pbVar12 + 1;
                  *(byte **)(param_1 + 0x10) = pbVar12;
                } while (pbVar12 != pbVar3);
              }
            }
            else if (bVar7) {
              do {
                lVar8 = lVar1;
                func_0x000107c610ac(lVar1,(long)(char)*pbVar12,lVar10);
                if (lVar8 != 0 && lVar8 - lVar1 != -1) {
                  return 1;
                }
                if ((*pbVar12 - 9 < 0x18) && ((0x80001bU >> (ulong)(*pbVar12 - 9 & 0x1f) & 1) != 0))
                {
                  return 1;
                }
                pbVar12 = pbVar12 + 1;
                *(byte **)(param_1 + 0x10) = pbVar12;
              } while (pbVar12 != pbVar3);
            }
            else {
              do {
                lVar8 = lVar1;
                func_0x000107c610ac(lVar1,(long)(char)*pbVar12,lVar10);
                if (lVar8 != 0 && lVar8 - lVar1 != -1) {
                  return 1;
                }
                pbVar12 = pbVar12 + 1;
                *(byte **)(param_1 + 0x10) = pbVar12;
              } while (pbVar12 != pbVar3);
            }
          }
          return 1;
        }
        *(byte **)(param_1 + 8) = pbVar12;
        pbVar11 = pbVar2;
      } while (pbVar2 != pbVar3);
    }
    else {
      do {
        pbVar2 = pbVar11 + 1;
        *(byte **)(param_1 + 0x10) = pbVar2;
        bVar5 = *pbVar11;
        lVar8 = lVar1;
        func_0x000107c610ac(lVar1,(long)(char)bVar5,lVar10);
        if ((lVar8 == 0 || lVar8 - lVar1 == -1) &&
           ((bVar7 = *(int *)(param_1 + 0x58) == 1, !bVar7 ||
            (0x20 < bVar5 || (1L << ((ulong)(uint)bVar5 & 0x3f) & 0x100003600U) == 0))))
        goto LAB_1001adf6c;
        *(byte **)(param_1 + 8) = pbVar12 + 1;
        pbVar11 = pbVar2;
        pbVar12 = pbVar12 + 1;
      } while (pbVar2 != pbVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  return 0;
}



/* Entry: 1001ae0f0; end: 1001ae4bb;  */

long FUN_1001ae0f0(long param_1)

{
  func_0x000107c60ca0(param_1 + 0x38);
  func_0x000107c60ca0(param_1 + 0x20);
  return param_1;
}



/* Entry: 1001ae4bc; end: 1001ae53b;  */

void FUN_1001ae4bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd30f8,&UNK_10d995a20);
  puVar1 = &UNK_1104123f0;
  func_0x000107c613fc(&UNK_1104123f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003d3494,puVar1);
  return;
}



/* Entry: 1001ae53c; end: 1001ae55b;  */

void FUN_1001ae53c(void)

{
  func_0x000107c61168(&PTR_PTR_112dd3170);
  return;
}



/* Entry: 1001ae55c; end: 1001ae8eb;  */

void FUN_1001ae55c(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001001ae57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x38);
  return;
}



/* Entry: 1001ae8ec; end: 1001ae9a7; -[KSCrashInstallationSnapAir initWithCrashReportUploadManager:crashMetricLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1001ae8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f4ca0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithRequiredProperties__112533480,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d05d8;
    func_0x000107c610f4();
    func_0x000107c46238();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112757d20);
    *(undefined **)((long)puVar1 + (long)_DAT_112757d20) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c53fd8(puVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1001ae9a8; end: 1001aeb4b;  */

void FUN_1001ae9a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ae9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_11336f918)();
  return;
}



/* Entry: 1001aeb4c; end: 1001aeb5b;  */

void FUN_1001aeb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1001aeb5c; end: 1001aec1b; -[KSCrashInstallation initWithRequiredProperties:] */

long FUN_1001aeb5c(long param_1,undefined8 param_2)

{
  FUN_1001aeb4c();
  FUN_1001aec1c();
  if (param_1 != 0) {
    func_0x000107c41304(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,0xfb0);
    func_0x000107c61180();
    FUN_1001aecb8();
    func_0x000107c53a48();
    func_0x0001001aecf0();
    func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61180();
    FUN_1001aecb8();
    func_0x000107c54998();
    func_0x0001001aecf0();
    func_0x000107c57e24(param_1);
    func_0x000107c43504(PTR_PTR_1126d05c8,param_2,0);
    func_0x000107c61180();
    FUN_1001aecb8();
    func_0x000107c576dc();
    func_0x0001001aecf0();
    func_0x000107c53fd8(param_1,param_2,1);
  }
  func_0x0001001b2854();
  return param_1;
}



/* Entry: 1001aec1c; end: 1001aec47;  */

void FUN_1001aec1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 1001aec48; end: 1001aec97;  */

void FUN_1001aec48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001aec98; end: 1001aecb7;  */

void FUN_1001aec98(void)

{
  func_0x000107c61168(&PTR_PTR_11294fa98);
  return;
}



/* Entry: 1001aecb8; end: 1001aecc7;  */

void FUN_1001aecb8(void)

{
  return;
}



/* Entry: 1001aecc8; end: 1001aece7; -[KSCrashInstallation setCrashHandlerDataBacking:] */

void FUN_1001aecc8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1001aeb4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001aece8; end: 1001aecf7;  */

void FUN_1001aece8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1001aecf8; end: 1001afc03;  */

void FUN_1001aecf8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  if (param_2 != 0) {
    func_0x0001007830ac();
    FUN_1001aecf8();
    FUN_1001aecf8();
    func_0x000107c60ca0(unaff_x19 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1001afc04; end: 1001afc23; -[KSCrashInstallation setFields:] */

void FUN_1001afc04(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1001aeb4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001afc24; end: 1001b0c7f;  */

void FUN_1001afc24(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = 0;
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001afc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar4 + 4))();
      return;
    }
  }
  return;
}



/* Entry: 1001b0c80; end: 1001b0c9f; -[KSCrashInstallation setRequiredProperties:] */

void FUN_1001b0c80(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1001aeb4c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001b0ca0; end: 1001b0dc3;  */

byte * FUN_1001b0ca0(byte *param_1)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  long lVar12;
  uint uVar13;
  undefined8 extraout_x8;
  char cVar14;
  undefined1 *puVar15;
  uint uVar16;
  long unaff_x19;
  byte abStack_70 [56];
  undefined8 uStack_38;
  
  pbVar9 = abStack_70;
  pbVar7 = abStack_70;
  func_0x0001001afcac();
  bVar3 = param_1[0x17];
  pbVar6 = *(byte **)param_1;
  if (-1 < (long)(char)bVar3) {
    pbVar6 = param_1;
  }
  uVar4 = bVar3 == 0;
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (-1 < (char)bVar3) {
    puVar1 = (undefined1 *)(long)(char)bVar3;
  }
  pbVar10 = &UNK_10e58a85d;
  puVar11 = (undefined1 *)0x4;
  pbVar5 = pbVar6;
  puVar15 = puVar1;
  uStack_38 = extraout_x8;
  FUN_1001b0dc4();
  if (((ulong)pbVar5 & 1) == 0) {
    pbVar10 = &UNK_10e58a862;
    puVar11 = (undefined1 *)0x5;
    pbVar5 = pbVar6;
    puVar15 = puVar1;
    FUN_1001b0dc4();
    if (((ulong)pbVar5 & 1) == 0) {
      FUN_1001b0dc4(pbVar6,puVar1,&UNK_10e58a891,2);
      if ((int)pbVar6 == 0) {
        cVar14 = *(char *)(unaff_x19 + 0x2f);
        puVar11 = *(undefined1 **)(unaff_x19 + 0x18);
        if (-1 < (long)cVar14) {
          puVar11 = (undefined1 *)(unaff_x19 + 0x18);
        }
        lVar12 = *(long *)(unaff_x19 + 0x20);
        if (-1 < cVar14) {
          lVar12 = (long)cVar14;
        }
        uVar2 = *(undefined2 *)(unaff_x19 + 0x30);
        puVar8 = &UNK_10e58a862;
        pbVar10 = (byte *)0x5;
      }
      else {
        cVar14 = *(char *)(unaff_x19 + 0x2f);
        puVar11 = *(undefined1 **)(unaff_x19 + 0x18);
        if (-1 < (long)cVar14) {
          puVar11 = (undefined1 *)(unaff_x19 + 0x18);
        }
        lVar12 = *(long *)(unaff_x19 + 0x20);
        if (-1 < cVar14) {
          lVar12 = (long)cVar14;
        }
        uVar2 = *(undefined2 *)(unaff_x19 + 0x30);
        puVar8 = &UNK_10e58a85d;
        pbVar10 = (byte *)0x4;
      }
      uVar4 = cVar14 == '\0';
      func_0x00010017a6a4(abStack_70,puVar8,pbVar10,puVar11,lVar12,uVar2);
      func_0x0001001c67fc();
      func_0x000100156c2c();
      pbVar5 = pbVar7;
      puVar15 = pbVar9;
    }
  }
  func_0x0001001aff4c(uStack_38);
  if ((bool)uVar4) {
    return pbVar5;
  }
  func_0x000107c60e78();
  if (puVar15 != puVar11) {
    return (byte *)0x0;
  }
  if (puVar15 == (undefined1 *)0x0) {
    return (byte *)0x1;
  }
  do {
    puVar15 = puVar15 + -1;
    bVar3 = *pbVar5;
    uVar13 = bVar3 + 0x20;
    if (0x19 < bVar3 - 0x41) {
      uVar13 = (uint)bVar3;
    }
    bVar3 = *pbVar10;
    uVar16 = bVar3 + 0x20;
    if (0x19 < bVar3 - 0x41) {
      uVar16 = (uint)bVar3;
    }
  } while ((uVar13 == uVar16) &&
          (pbVar5 = pbVar5 + 1, pbVar10 = pbVar10 + 1, puVar15 != (undefined1 *)0x0));
  return (byte *)(ulong)(uVar13 == uVar16);
}



/* Entry: 1001b0dc4; end: 1001b0e2f;  */

bool FUN_1001b0dc4(byte *param_1,long param_2,byte *param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  do {
    param_2 = param_2 + -1;
    bVar1 = *param_1;
    uVar2 = bVar1 + 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar2 = (uint)bVar1;
    }
    bVar1 = *param_3;
    uVar3 = bVar1 + 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar3 = (uint)bVar1;
    }
  } while ((uVar2 == uVar3) && (param_1 = param_1 + 1, param_3 = param_3 + 1, param_2 != 0));
  return uVar2 == uVar3;
}



/* Entry: 1001b0e30; end: 1001b0e3f;  */

bool FUN_1001b0e30(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_10e58a862;
  if (-1 < *(int *)(param_1 + 0x24)) {
    func_0x000100187e3c();
    iVar2 = (int)param_1;
    if (puVar3 == (undefined *)0x5) {
      func_0x00010017ad7c();
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 1001b0e40; end: 1001b0e5b;  */

void FUN_1001b0e40(undefined8 param_1)

{
  FUN_1000285a8(0x112dca160,&UNK_10d98b810);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10040c1f4,param_1);
  return;
}



/* Entry: 1001b0e5c; end: 1001b0eab;  */

void FUN_1001b0e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b0eac; end: 1001b0eef;  */

undefined1  [16] FUN_1001b0eac(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uStack_28;
  
  func_0x00010016b2d4();
  FUN_1001b10a0();
  func_0x0001001b10b0();
  func_0x0001001b10f4();
  FUN_1001b11a4();
  func_0x00010017bcfc(uStack_28);
  if ((bool)in_ZR) {
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  func_0x000107c60e78();
  ppuVar1 = &PTR_PTR_112dca1d8;
  func_0x000107c61168(&PTR_PTR_112dca1d8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ppuVar1;
  return auVar2;
}



/* Entry: 1001b0ef0; end: 1001b0f0f;  */

void FUN_1001b0ef0(void)

{
  func_0x000107c61168(&PTR_PTR_112dca1d8);
  return;
}



/* Entry: 1001b0f10; end: 1001b0f1f;  */

void FUN_1001b0f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1001b0f20; end: 1001b0fbf; +[KSCrashReportFilterPipeline filterWithFilters:] */

void FUN_1001b0f20(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x24;
  
  FUN_1001b0f10();
  FUN_1001b0fc0();
  func_0x000107c3e15c();
  func_0x000107c61180();
  func_0x0001001b0fcc();
  func_0x0001001b0fdc(FUN_1001f7f90);
  func_0x0001001b0fec();
  FUN_1001b2284();
  while (unaff_x19 != 0) {
    FUN_1001f7760();
    func_0x0001001f7780();
    func_0x0001001f7798();
    unaff_x19 = unaff_x24;
  }
  func_0x0001001b2298();
  func_0x0001001b22a0();
  func_0x0001001b22a8();
  func_0x000107c46954();
  func_0x0001001b27d0();
  func_0x0001001b274c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1001b0fc0; end: 1001b0ff3;  */

undefined * FUN_1001b0fc0(void)

{
  return PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
}



/* Entry: 1001b0ff4; end: 1001b1073;  */

void FUN_1001b0ff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dbdff0,&UNK_10d979000);
  puVar1 = &UNK_1103f1a40;
  func_0x000107c613fc(&UNK_1103f1a40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1016766b4,puVar1);
  return;
}



/* Entry: 1001b1074; end: 1001b109f;  */

void FUN_1001b1074(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001b10a0; end: 1001b1157;  */

undefined1 * FUN_1001b10a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long unaff_x29;
  undefined1 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined1 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined1 in_stack_000000e0;
  
  *(undefined8 *)(unaff_x29 + -0x18) = param_1;
  cVar1 = *(char *)(param_2 + 0x18);
  func_0x00010017b1c0();
  if (cVar1 != '\0') {
    func_0x000100178054(&stack0x00000030,param_4);
  }
  return &stack0x00000008;
}



/* Entry: 1001b1158; end: 1001b11a3;  */

void FUN_1001b1158(undefined8 param_1)

{
  FUN_1000285a8(0x112dbdff8,&UNK_10d979040);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003cd194,param_1);
  return;
}



/* Entry: 1001b11a4; end: 1001b11b7;  */

undefined1 * FUN_1001b11a4(void)

{
  func_0x0001001778d4(&stack0x00000030);
  func_0x000107c60ca0(&stack0x00000010);
  return &stack0x00000008;
}



/* Entry: 1001b11b8; end: 1001b11d7;  */

void FUN_1001b11b8(void)

{
  func_0x000107c61168(&PTR_PTR_11294d458);
  return;
}



/* Entry: 1001b11d8; end: 1001b122f;  */

uint FUN_1001b11d8(long param_1)

{
  uint unaff_w19;
  long unaff_x20;
  
  func_0x0001001a83a0();
  func_0x00010014be60();
  if (*(long *)(unaff_x20 + 8) == param_1) {
    unaff_w19 = 0;
  }
  else {
    func_0x00010014c40c();
    unaff_w19 = unaff_w19 ^ 1;
  }
  return unaff_w19;
}



/* Entry: 1001b1230; end: 1001b124b;  */

void FUN_1001b1230(undefined8 param_1)

{
  FUN_1000285a8(0x112dca778,&UNK_10d98c1b0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003fd204,param_1);
  return;
}



/* Entry: 1001b124c; end: 1001b129b;  */

void FUN_1001b124c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}


