/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a2c5078; end: 10a2c52db;  */

void FUN_10a2c5078(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    FUN_10a2b85ec(param_1 + 0x78,param_1 + 0x48);
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x78);
    plVar5 = (long *)(*(long *)(param_1 + 0x78) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      lVar8 = *(long *)(param_1 + 0x68);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x68);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2c5214);
    (*pcVar4)();
  }
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
  plVar5 = *(long **)(param_1 + 0x78);
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
  func_0x0001092ba100(param_1 + 0x10);
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a2c52dc; end: 10a2c53ab;  */

void FUN_10a2c52dc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x78);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a2c53ac; end: 10a2c54fb;  */

undefined1  [16] FUN_10a2c53ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f64c482;
  return auVar1;
}



/* Entry: 10a2c54fc; end: 10a2c561b;  */

void FUN_10a2c54fc(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x124;
  uStack_58 = 0x13c;
  FUN_10a2c561c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b3c4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f64b3ce;
  uStack_38 = 0;
  FUN_10a2e3688();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f64b3cf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f64b3ce;
  uStack_38 = 0;
  func_0x00010a2e3950(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f64b3d5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f64b3ce;
  uStack_38 = 0;
  FUN_10a2e3b48(param_1,&puStack_98);
  FUN_10a2e3d4c(param_1);
  return;
}



/* Entry: 10a2c561c; end: 10a2c56f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a2c56b4) */

undefined1  [16] FUN_10a2c561c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f64c482,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a2e358c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a2c56f4; end: 10a2c6397;  */

void FUN_10a2c56f4(ulong param_1)

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
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c492,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc3320;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bc3320;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2c6378;
    FUN_10a054dac(param_1,&UNK_10f64b3df,FUN_10a2e3e08,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2c6378;
    FUN_10a054dac(param_1,&UNK_10f64b3f2,FUN_10a2e3f54,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2c6378;
    FUN_10a054dac(param_1,&UNK_10f64b404,FUN_10a2e410c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2c6378;
    FUN_10a054dac(param_1,&UNK_10f64b413,FUN_10a2e41c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2c6378;
    FUN_10a054dac(param_1,&UNK_10f64b424,FUN_10a2e4294,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b437,FUN_10a2e4508,FUN_10a2e45c4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b3cf,FUN_10a2e468c,FUN_10a2e4760);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b449,FUN_10a2e482c,FUN_10a2e48e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b453,FUN_10a2e49d4,FUN_10a2e4a90);
  }
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f64b45f;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  puStack_78 = &UNK_10f64b3ce;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50._0_4_ = 0xffffffff;
  puStack_48 = &UNK_10f64b3ce;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10a2e4b74(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&DAT_10f64b46c;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  puStack_78 = &UNK_10f64b3ce;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  puStack_48 = &UNK_10f64b3ce;
  uStack_40 = 0;
  FUN_10a2e4b74();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b3d5,FUN_10a2e4e34,FUN_10a2e4ef0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b47f,FUN_10a2e4fe0,FUN_10a2e5098);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b48c,FUN_10a2e5158,FUN_10a2e5214);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b4a2,FUN_10a2e5304,FUN_10a2e53c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b4b8,FUN_10a2e54b0,FUN_10a2e5568);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b4c5,FUN_10a2e5634,FUN_10a2e56f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6850aa,FUN_10a2e57dc,FUN_10a2e58a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6850b6,FUN_10a2e596c,FUN_10a2e5a28);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b4d0,FUN_10a2e5b18,FUN_10a2e5bd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b4e1,FUN_10a2e5c8c,FUN_10a2e5d44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b4f9,FUN_10a2e5e04,FUN_10a2e5ebc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b50f,FUN_10a2e5f7c,FUN_10a2e6038);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b52b,FUN_10a2e6128,FUN_10a2e61e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b53d,FUN_10a2e629c,FUN_10a2e6358);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b558,FUN_10a2e6410,FUN_10a2e64cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b572,FUN_10a2e6584,FUN_10a2e663c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b583,FUN_10a2e6708,FUN_10a2e67c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b58d,FUN_10a2e6880,FUN_10a2e693c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b59c,FUN_10a2e6a2c,FUN_10a2e6ae8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b5ab,FUN_10a2e6bd8,FUN_10a2e6c90);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b5bd,FUN_10a2e6e74,FUN_10a2e6f2c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b5d2,FUN_10a2e6fe4,FUN_10a2e709c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b5e5,FUN_10a2e7154,FUN_10a2e720c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b5fb,FUN_10a2e72c4,FUN_10a2e737c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b612,FUN_10a2e7434,FUN_10a2e7568);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b622,FUN_10a2e77a0,FUN_10a2e7858);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b63d,FUN_10a2e7e34,FUN_10a2e7ef0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b656,FUN_10a2e7fec,FUN_10a2e80a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b66f,FUN_10a2e81a4,FUN_10a2e8260);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b686,FUN_10a2e8358,FUN_10a2e8414);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b698,FUN_10a2e84cc,FUN_10a2e8588);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b6a9,FUN_10a2e8640,FUN_10a2e8710);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    puStack_48 = *(undefined **)(lVar3 + -0x10);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c492,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2c6378:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2c637c);
  (*pcVar6)();
}



/* Entry: 10a2c6398; end: 10a2c63db;  */

undefined4 FUN_10a2c6398(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 10a2c63dc; end: 10a2c65a3;  */

void FUN_10a2c63dc(undefined4 param_1,long param_2,long *param_3)

{
  (**(code **)(*param_3 + 0xf0))(param_3,&PTR_DAT_110bbbda8,param_2 + 0x24);
  (**(code **)(*param_3 + 0xf0))(param_3,&PTR_DAT_110bbbdc8,param_2 + 0x30);
  (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110bbbde8);
  *(undefined4 *)(param_2 + 0x3c) = param_1;
  return;
}



/* Entry: 10a2c65a4; end: 10a2c689f;  */

undefined8 * FUN_10a2c65a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[0x72] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x75) = 0x100;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bbc110,param_2,param_3);
  *puVar1 = &PTR_FUN_110bbbe20;
  puVar1[2] = &PTR_DAT_110bbbf58;
  puVar1[7] = &PTR_FUN_110bbbfb0;
  puVar1[0xd] = &PTR_FUN_110bbbfd0;
  puVar1[0x72] = &PTR_FUN_110bbc0d0;
  puVar1[0x16] = &PTR_DAT_110bbc040;
  puVar1[0x17] = &PTR_DAT_110bbc070;
  uVar2 = NEON_fmov(0x3f800000,4);
  puVar1[0x3e] = 0x200000200;
  puVar1[0x3f] = uVar2;
  *(undefined4 *)(puVar1 + 0x40) = 0x3f800000;
  *(undefined2 *)((long)puVar1 + 0x204) = 1;
  puVar1[0x41] = 0x3f8000007f800000;
  *(undefined1 *)(puVar1 + 0x42) = 1;
  *(undefined8 *)((long)puVar1 + 0x214) = 0x4234000000000000;
  *(undefined2 *)((long)puVar1 + 0x21c) = 0;
  puVar1[0x45] = 0;
  puVar1[0x44] = 0;
  puVar1[0x46] = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x47) = 0;
  *(undefined8 *)((long)puVar1 + 0x244) = 0x447a00003f800000;
  *(undefined8 *)((long)puVar1 + 0x23c) = 0x41f0000040000000;
  *(undefined4 *)((long)puVar1 + 0x24c) = 0x3a83126f;
  *(undefined2 *)(puVar1 + 0x4a) = 0x101;
  *(undefined1 *)((long)puVar1 + 0x252) = 0;
  *(undefined4 *)((long)puVar1 + 0x254) = 0x10;
  *(undefined1 *)(puVar1 + 0x4b) = 0;
  *(undefined4 *)((long)puVar1 + 0x25c) = 0xffffffff;
  *(undefined2 *)(puVar1 + 0x4c) = 0;
  FUN_10a1322a0(puVar1 + 0x4d,9);
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0x3f800000;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110bc2870;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = &PTR_FUN_110bbbd08;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[6] = &PTR_FUN_110bbbd70;
  *(undefined8 *)((long)puVar1 + 0x44) = 0x3f59999a3f800000;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0x3f68f5c33f5eb852;
  *(undefined4 *)((long)puVar1 + 0x54) = 0x40c6b852;
  param_1[0x5c] = puVar1 + 3;
  param_1[0x5d] = puVar1;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = uVar2;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0xbf800000;
  param_1[99] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 1;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x70] = puVar1 + 3;
  param_1[0x71] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x70);
  return param_1;
}



/* Entry: 10a2c68a0; end: 10a2c68ab;  */

void FUN_10a2c68a0(void)

{
  return;
}



/* Entry: 10a2c68ac; end: 10a2c691f;  */

void FUN_10a2c68ac(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x368);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
  }
  if (((*(long *)(param_1 + 0x2d0) != 0) &&
      (plVar1 = *(long **)(*(long *)(param_1 + 0x2d0) + 0x268), plVar1 != (long *)0x0)) &&
     (___dynamic_cast(plVar1,&PTR_DAT_110bb3788,&PTR_DAT_110c5e3a8,0), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  *(undefined1 *)(param_1 + 0x378) = 0;
  return;
}



/* Entry: 10a2c6920; end: 10a2c692b;  */

void FUN_10a2c6920(void)

{
  return;
}



/* Entry: 10a2c692c; end: 10a2c6aa7;  */

void FUN_10a2c692c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined4 auStack_50 [2];
  undefined1 **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x380),&PTR_DAT_110bc3320,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  puVar2 = (undefined8 *)0x8;
  __Znwm();
  *puVar2 = &PTR_FUN_110bc3560;
  ppuVar3 = *(undefined1 ***)(param_1 + 0x328);
  *(undefined8 **)(param_1 + 0x328) = puVar2;
  if (ppuVar3 != (undefined1 **)0x0) {
    (**(code **)(*ppuVar3 + 8))();
  }
  if ((*(char *)(param_1 + 0x204) == '\a') ||
     (((*(char *)(param_1 + 0x260) == '\x01' && (*(byte *)(param_1 + 0x261) < 2)) &&
      ((lVar5 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20),
       (*(byte *)(lVar5 + 0x1c) >> 4 & 1) != 0 || (0xab < *(int *)(lVar5 + 0x18))))))) {
    auStack_50[0] = 5;
    ppuVar3 = (undefined1 **)0x20;
    __Znwm();
    lStack_38 = -0x7fffffffffffffe0;
    uStack_40 = 0x1f;
    ppuVar3[1] = (undefined1 *)0x455f544847494c5f;
    *ppuVar3 = (undefined1 *)0x45524f43534e454c;
    *(undefined8 *)((long)ppuVar3 + 0x17) = 0x4c45444f4d5f4e4f;
    *(undefined8 *)((long)ppuVar3 + 0xf) = 0x4954414d49545345;
    *(undefined1 *)((long)ppuVar3 + 0x1f) = 0;
    uStack_30 = 2;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    ppuStack_48 = ppuVar3;
    FUN_10a2e1520(&uStack_70,auStack_50,&lStack_28,1);
    ppuVar3 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010a2e17b4();
    if (lStack_38 < 0) {
      ppuVar3 = ppuStack_48;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (lStack_38 < 0) {
      __ZdlPv(ppuStack_48);
    }
    __Unwind_Resume();
    plVar4 = (long *)ppuVar3[0x70];
    if (*(char *)((long)plVar4 + 0x3c) == '\x01') {
      FUN_10a3cf620(plVar4[6],(int)plVar4[7],plVar4);
      *(undefined4 *)(plVar4 + 7) = 0;
    }
    else {
      if (*(char *)((long)plVar4 + 0x3c) != '\x02') {
        return;
      }
      lVar5 = *plVar4;
      plVar1 = (long *)plVar4[1];
      *(long **)(lVar5 + 8) = plVar1;
      *plVar1 = lVar5;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
    }
    *(undefined1 *)((long)plVar4 + 0x3c) = 0;
    return;
  }
  return;
}



/* Entry: 10a2c6aa8; end: 10a2c6aaf;  */

void FUN_10a2c6aa8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x380);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a2c6ab0; end: 10a2c6b5f;  */

void FUN_10a2c6ab0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  
  plVar5 = *(long **)(param_1 + 0x360);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (*(long *)(param_1 + 0x358) != 0) {
        FUN_10a3c762c();
      }
      FUN_10a5d2ad8();
      plVar1 = plVar5 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 != 0) {
        return;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  puVar9 = PTR___tlv_bootstrap_11340df90;
  ppuVar8 = &PTR___tlv_bootstrap_11340df90;
  ppuVar6 = ppuVar8;
  (*(code *)PTR___tlv_bootstrap_11340df90)();
  ppuVar7 = &PTR___tlv_bootstrap_11340df78;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340df78)(&PTR___tlv_bootstrap_11340df78);
    __tlv_atexit(FUN_10a5e34e8,ppuVar6,0x100000000);
    (*(code *)puVar9)();
    *(undefined1 *)ppuVar8 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340df78)();
  ppuVar7[1] = *ppuVar7;
  puVar9 = *ppuVar7;
  uVar12 = (long)ppuVar7[2] - (long)puVar9;
  uVar13 = (long)ppuVar7[1] - (long)puVar9;
  if (uVar13 < uVar12) {
    if (ppuVar7[1] == puVar9) {
      ppuVar8 = (undefined **)0x0;
      uVar10 = 0;
    }
    else {
      uVar10 = ((long)uVar13 >> 2) * -0x5555555555555555;
      ppuVar8 = ppuVar7;
      FUN_10a051b24();
      puVar9 = *ppuVar7;
      uVar12 = (long)ppuVar7[2] - (long)puVar9;
    }
    if (uVar10 < (ulong)(((long)uVar12 >> 2) * -0x5555555555555555)) {
      puVar2 = (undefined *)((long)ppuVar8 + uVar13);
      puVar14 = (undefined *)((long)ppuVar8 + uVar10 * 0xc);
      puVar9 = puVar2 + -((long)ppuVar7[1] - (long)puVar9);
      _memcpy(puVar9);
      ppuVar8 = (undefined **)*ppuVar7;
      *ppuVar7 = puVar9;
      ppuVar7[1] = puVar2;
      ppuVar7[2] = puVar14;
    }
    if (ppuVar8 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a2c6b60; end: 10a2c6b67;  */

void FUN_10a2c6b60(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  
  plVar5 = *(long **)(param_1 + 0x2f8);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (*(long *)(param_1 + 0x2f0) != 0) {
        FUN_10a3c762c();
      }
      FUN_10a5d2ad8();
      plVar1 = plVar5 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 != 0) {
        return;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  puVar9 = PTR___tlv_bootstrap_11340df90;
  ppuVar8 = &PTR___tlv_bootstrap_11340df90;
  ppuVar6 = ppuVar8;
  (*(code *)PTR___tlv_bootstrap_11340df90)();
  ppuVar7 = &PTR___tlv_bootstrap_11340df78;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340df78)(&PTR___tlv_bootstrap_11340df78);
    __tlv_atexit(FUN_10a5e34e8,ppuVar6,0x100000000);
    (*(code *)puVar9)();
    *(undefined1 *)ppuVar8 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340df78)();
  ppuVar7[1] = *ppuVar7;
  puVar9 = *ppuVar7;
  uVar12 = (long)ppuVar7[2] - (long)puVar9;
  uVar13 = (long)ppuVar7[1] - (long)puVar9;
  if (uVar13 < uVar12) {
    if (ppuVar7[1] == puVar9) {
      ppuVar8 = (undefined **)0x0;
      uVar10 = 0;
    }
    else {
      uVar10 = ((long)uVar13 >> 2) * -0x5555555555555555;
      ppuVar8 = ppuVar7;
      FUN_10a051b24();
      puVar9 = *ppuVar7;
      uVar12 = (long)ppuVar7[2] - (long)puVar9;
    }
    if (uVar10 < (ulong)(((long)uVar12 >> 2) * -0x5555555555555555)) {
      puVar2 = (undefined *)((long)ppuVar8 + uVar13);
      puVar14 = (undefined *)((long)ppuVar8 + uVar10 * 0xc);
      puVar9 = puVar2 + -((long)ppuVar7[1] - (long)puVar9);
      _memcpy(puVar9);
      ppuVar8 = (undefined **)*ppuVar7;
      *ppuVar7 = puVar9;
      ppuVar7[1] = puVar2;
      ppuVar7[2] = puVar14;
    }
    if (ppuVar8 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a2c6b68; end: 10a2c6da3;  */

void FUN_10a2c6b68(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_a8,uVar1 + 0xd,&puStack_c0);
  pppuVar6 = (undefined8 ***)appuStack_a8[0];
  if (-1 < cStack_91) {
    pppuVar6 = appuStack_a8;
  }
  if (uVar1 != 0) {
    pppuVar2 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar2 = &ppuStack_58;
    }
    _memmove(pppuVar6,pppuVar2,uVar1);
  }
  puVar8 = (undefined8 *)((long)pppuVar6 + uVar1);
  *puVar8 = 0x736e65746e69202c;
  *(undefined8 *)((long)puVar8 + 5) = 0x203a797469736e65;
  *(undefined1 *)((long)puVar8 + 0xd) = 0;
  __ZNSt3__19to_stringEf(&puStack_c0,*(undefined4 *)(param_2 + 0x20c));
  ppuVar4 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    ppuVar4 = &puStack_c0;
  }
  pppuVar6 = appuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,ppuVar4,uStack_b8);
  puStack_88 = pppuVar6[1];
  puStack_90 = *pppuVar6;
  puStack_80 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  ppuVar7 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar7,&UNK_10f64b6c3,0x13);
  uStack_68 = ppuVar7[1];
  uStack_70 = *ppuVar7;
  lStack_60 = (long)ppuVar7[2];
  ppuVar7[1] = (undefined8 *)0x0;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = (undefined8 *)0x0;
  bVar5 = *(char *)(param_2 + 0x21c) == '\0';
  pcVar3 = "true";
  if (bVar5) {
    pcVar3 = "false";
  }
  uVar9 = 4;
  if (bVar5) {
    uVar9 = 5;
  }
  puVar8 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,pcVar3,uVar9);
  uVar9 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar9;
  param_1[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(appuStack_a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a2c6da4; end: 10a2c6dab;  */

void FUN_10a2c6da4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_a8,uVar1 + 0xd,&puStack_c0);
  pppuVar6 = (undefined8 ***)appuStack_a8[0];
  if (-1 < cStack_91) {
    pppuVar6 = appuStack_a8;
  }
  if (uVar1 != 0) {
    pppuVar2 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar2 = &ppuStack_58;
    }
    _memmove(pppuVar6,pppuVar2,uVar1);
  }
  puVar8 = (undefined8 *)((long)pppuVar6 + uVar1);
  *puVar8 = 0x736e65746e69202c;
  *(undefined8 *)((long)puVar8 + 5) = 0x203a797469736e65;
  *(undefined1 *)((long)puVar8 + 0xd) = 0;
  __ZNSt3__19to_stringEf(&puStack_c0,*(undefined4 *)(param_2 + 0x1fc));
  ppuVar4 = (undefined1 **)puStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    ppuVar4 = &puStack_c0;
  }
  pppuVar6 = appuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,ppuVar4,uStack_b8);
  puStack_88 = pppuVar6[1];
  puStack_90 = *pppuVar6;
  puStack_80 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  ppuVar7 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar7,&UNK_10f64b6c3,0x13);
  uStack_68 = ppuVar7[1];
  uStack_70 = *ppuVar7;
  lStack_60 = (long)ppuVar7[2];
  ppuVar7[1] = (undefined8 *)0x0;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = (undefined8 *)0x0;
  bVar5 = *(char *)(param_2 + 0x20c) == '\0';
  pcVar3 = "true";
  if (bVar5) {
    pcVar3 = "false";
  }
  uVar9 = 4;
  if (bVar5) {
    uVar9 = 5;
  }
  puVar8 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,pcVar3,uVar9);
  uVar9 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar9;
  param_1[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(puStack_c0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(appuStack_a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a2c6dac; end: 10a2c6deb;  */

void FUN_10a2c6dac(long param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  *(undefined1 *)(param_1 + 0x204) = param_2;
  FUN_10a2c703c(param_1,*(undefined1 *)(param_1 + 0x21c),0);
  FUN_10a2c83e0(param_1,*(undefined1 *)(param_1 + 0x260),0);
  if (*(char *)(param_1 + 0x204) == '\a') {
    lVar5 = *(long *)(param_1 + 0x368);
    if (lVar5 == 0) {
      uStack_50 = *(undefined8 *)(param_1 + 0x170);
      FUN_10a2e97f4(&uStack_48,&uStack_31,&uStack_50,param_1 + 0x2f0);
      func_0x00010a2c8fec((long *)(param_1 + 0x368),&uStack_48);
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
        }
      }
      lVar5 = *(long *)(param_1 + 0x368);
    }
    *(undefined8 *)(lVar5 + 0x104) = *(undefined8 *)(param_1 + 0x300);
  }
  else {
    uStack_48 = 0;
    plStack_40 = (long *)0x0;
    func_0x00010a2c8fec(param_1 + 0x368,&uStack_48);
    plVar1 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar2 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a2c6dec; end: 10a2c6eeb;  */

void FUN_10a2c6dec(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  if (*(char *)(param_1 + 0x204) == '\a') {
    lVar5 = *(long *)(param_1 + 0x368);
    if (lVar5 == 0) {
      uStack_50 = *(undefined8 *)(param_1 + 0x170);
      FUN_10a2e97f4(&uStack_48,&uStack_31,&uStack_50,param_1 + 0x2f0);
      func_0x00010a2c8fec((long *)(param_1 + 0x368),&uStack_48);
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
        }
      }
      lVar5 = *(long *)(param_1 + 0x368);
    }
    *(undefined8 *)(lVar5 + 0x104) = *(undefined8 *)(param_1 + 0x300);
  }
  else {
    uStack_48 = 0;
    plStack_40 = (long *)0x0;
    func_0x00010a2c8fec(param_1 + 0x368,&uStack_48);
    plVar1 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar2 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a2c6eec; end: 10a2c6efb;  */

undefined4 FUN_10a2c6eec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1f8);
}



/* Entry: 10a2c6efc; end: 10a2c703b;  */

void FUN_10a2c6efc(long param_1,undefined8 *param_2)

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
  FUN_10a015bec(param_1 + 0x290,&uStack_30);
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



/* Entry: 10a2c703c; end: 10a2c7aa7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a2c703c(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *******pppppppuVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 ******ppppppuVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined1 uVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  int iVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined1 uStack_c1;
  undefined8 *******pppppppuStack_c0;
  long *plStack_b8;
  byte bStack_a9;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_71;
  
  *(char *)(param_1 + 0x21c) = (char)param_2;
  if (param_2 == 0) {
    uVar18 = 0;
LAB_10a2c70e8:
    *(undefined1 *)(param_1 + 0x21d) = uVar18;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x170) + 0xd48;
    FUN_10a5aeb74(lVar11,&PTR_DAT_110bc3320);
    for (lVar21 = *(long *)(lVar11 + 8); lVar21 != lVar11; lVar21 = *(long *)(lVar21 + 8)) {
      lVar9 = *(long *)(lVar21 + 0x28);
      if ((lVar9 != param_1) && (*(char *)(lVar9 + 0x21c) == '\x01')) {
        if (param_3 != 0) {
          FUN_10a00946c(&UNK_10f64b6d7);
          goto LAB_10a2c7a04;
        }
        FUN_10a2c703c(lVar9,0,0);
      }
    }
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x13d) {
      uVar18 = 1;
      goto LAB_10a2c70e8;
    }
  }
  bVar8 = (*(byte *)(param_1 + 0x204) & 0xfe) == 2;
  if (!bVar8) {
    return;
  }
  bVar4 = *(byte *)(param_1 + 0x21c);
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plVar10 = *(long **)(param_1 + 0x360);
  if (plVar10 == (long *)0x0) {
    plVar10 = plStack_80;
    plVar12 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar12 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plStack_88 = *(long **)(param_1 + 0x358);
      plVar12 = plStack_88;
    }
  }
  plStack_80 = plVar10;
  if ((bVar8 & bVar4) == 0) {
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x68))();
    }
    goto LAB_10a2c79a0;
  }
  *(undefined4 *)(param_1 + 0x25c) = 0;
  uVar24 = 0x3f800000;
  uVar25 = 0x3f800000;
  if (plVar12 == (long *)0x0) {
    if (*(char *)(param_1 + 0x204) == '\x02') {
      iVar19 = *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18);
      uVar24 = 0x3f800000;
      uVar25 = 0;
      if (iVar19 < 0x4d) {
        uVar24 = 0;
        uVar25 = 0;
        if (iVar19 < 0x44) {
          uVar24 = 0x3f800000;
          uVar25 = 0x3f800000;
        }
      }
    }
    uVar20 = *(undefined8 *)(param_1 + 0x168);
    func_0x000107c2b054(&pppppppuStack_c0,&UNK_10f64b3ce);
    FUN_10a0d6648(&uStack_a0,uVar20,&pppppppuStack_c0);
    if (plStack_98 != (long *)0x0) {
      plVar10 = plStack_98 + 2;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar11 = *(long *)(param_1 + 0x360);
    *(long **)(param_1 + 0x360) = plStack_98;
    *(undefined8 ********)(param_1 + 0x358) = uStack_a0;
    if (lVar11 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar10 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar12 = plStack_98 + 1;
      do {
        lVar11 = *plVar12;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(pppppppuStack_c0);
    }
    plVar10 = *(long **)(param_1 + 0x360);
    if ((plVar10 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar10 == (long *)0x0)) {
      plStack_88 = (long *)0x0;
    }
    else {
      plStack_88 = *(long **)(param_1 + 0x358);
    }
    plVar12 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar14 = plStack_80 + 1;
      do {
        lVar11 = *plVar14;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *plVar14 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        lVar11 = *plStack_80;
        plStack_80 = plVar10;
        (**(code **)(lVar11 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        plVar10 = plStack_80;
      }
    }
    plStack_80 = plVar10;
    plVar10 = plStack_88;
    uVar2 = *(ulong *)(param_1 + 0x158);
    if (-1 < (char)*(byte *)(param_1 + 0x167)) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x167);
    }
    FUN_10a003c90(&pppppppuStack_c0,uVar2 + 0xc,&uStack_a0);
    pppppppuVar3 = pppppppuStack_c0;
    if (-1 < (char)bStack_a9) {
      pppppppuVar3 = &pppppppuStack_c0;
    }
    if (uVar2 != 0) {
      lVar11 = *(long *)(param_1 + 0x150);
      if (-1 < *(char *)(param_1 + 0x167)) {
        lVar11 = param_1 + 0x150;
      }
      _memmove(pppppppuVar3,lVar11,uVar2);
    }
    puVar1 = (undefined8 *)((long)pppppppuVar3 + uVar2);
    *puVar1 = 0x6143776f64616853;
    *(undefined4 *)(puVar1 + 1) = 0x6172656d;
    *(undefined1 *)((long)puVar1 + 0xc) = 0;
    pppppppuVar3 = pppppppuStack_c0;
    if (-1 < (char)bStack_a9) {
      pppppppuVar3 = &pppppppuStack_c0;
      plStack_b8 = (long *)(ulong)bStack_a9;
    }
    func_0x000107c2c4d8(plVar10 + 0x2a,pppppppuVar3,plStack_b8);
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(pppppppuStack_c0);
    }
    *(ushort *)(plVar10 + 0x30) = *(ushort *)(plVar10 + 0x30) | 0x100;
    *(bool *)(plVar10 + 0x51) = *(char *)(param_1 + 0x204) == '\x02';
    *(undefined1 *)(plVar10 + 0x5e) = 1;
    *(undefined4 *)(plVar10 + 0x54) = 0;
    if (*(float *)((long)plVar10 + 0x26c) != 1.0) {
      *(undefined1 *)(plVar10 + 0x5e) = 1;
    }
    *(undefined4 *)((long)plVar10 + 0x26c) = 0x3f800000;
    pppppppuStack_c0 = (undefined8 *******)&UNK_10f63946e;
    plStack_b8 = (long *)0x4f;
    if ((long *)plVar10[0x46] == (long *)plVar10[0x47]) {
LAB_10a2c7a04:
      FUN_10a0edfc4(&pppppppuStack_c0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a2c7a10);
      (*pcVar7)();
    }
    lVar11 = *(long *)plVar10[0x46];
    *(undefined4 *)(lVar11 + 100) = uVar24;
    *(undefined4 *)(lVar11 + 0x68) = uVar24;
    *(undefined4 *)(lVar11 + 0x6c) = uVar24;
    *(undefined4 *)(lVar11 + 0x70) = uVar25;
    *(undefined1 *)(plVar10 + 0xdf) = 1;
    bVar8 = 0x4f < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18);
    if ((bool)*(char *)((long)plVar10 + 0x6f9) != bVar8) {
      *(undefined1 *)(plVar10 + 0x5e) = 1;
    }
    *(bool *)((long)plVar10 + 0x6f9) = bVar8;
    FUN_10a2c7b0c(&pppppppuStack_c0,param_1);
    plVar12 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar14 = plStack_b8 + 2;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *plVar14 = *plVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar11 = plVar10[0xe8];
    plVar10[0xe8] = (long)plStack_b8;
    plVar10[0xe7] = (long)pppppppuStack_c0;
    if (lVar11 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 1;
      do {
        lVar11 = *plVar10;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    *(undefined4 *)((long)plStack_88 + 500) = 0x80000000;
    *(undefined1 *)(plStack_88 + 1) = 1;
    plVar12 = plStack_88;
  }
  (**(code **)(*plVar12 + 0x68))();
  lVar11 = *(long *)(param_1 + 0x318);
  plStack_88[0x53] = *(long *)(param_1 + 800);
  plStack_88[0x52] = lVar11;
  fVar23 = *(float *)(param_1 + 0x240);
  if (((*(float *)(plStack_88 + 0x4e) != fVar23) ||
      (*(float *)(plStack_88 + 0x4c) != *(float *)(param_1 + 0x244))) ||
     (*(float *)((long)plStack_88 + 0x264) != *(float *)(param_1 + 0x248))) {
    if (*(float *)(plStack_88 + 0x4e) != fVar23) {
      *(undefined1 *)(plStack_88 + 0x5e) = 1;
    }
    *(float *)(plStack_88 + 0x4e) = fVar23;
    fVar23 = *(float *)(param_1 + 0x244);
    if (*(float *)(plStack_88 + 0x4c) != fVar23) {
      *(undefined1 *)(plStack_88 + 0x5e) = 1;
    }
    *(float *)(plStack_88 + 0x4c) = fVar23;
    fVar23 = *(float *)(param_1 + 0x248);
    if (*(float *)((long)plStack_88 + 0x264) != fVar23) {
      *(undefined1 *)(plStack_88 + 0x5e) = 1;
    }
    *(float *)((long)plStack_88 + 0x264) = fVar23;
  }
  cVar5 = *(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x168) + 0x120) + 0x910) + 0x23);
  pppppppuStack_c0 = (undefined8 *******)plStack_88[0xe9];
  plStack_b8 = (long *)plStack_88[0xea];
  if (plStack_b8 != (long *)0x0) {
    plVar10 = plStack_b8 + 1;
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = *plVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  iVar19 = 0x400;
  if (*(char *)(param_1 + 600) != '\x01') {
    iVar19 = 0x800;
  }
  iVar22 = 0x200;
  if (*(char *)(param_1 + 600) != '\0') {
    iVar22 = iVar19;
  }
  if (*(char *)(param_1 + 0x21d) != '\x02') {
    iVar22 = *(int *)(param_1 + 0x1f0);
  }
  if ((pppppppuStack_c0 == (undefined8 *******)0x0) || (*(long *)(param_1 + 0x348) == 0)) {
    if ((*(char *)(param_1 + 0x21d) == '\x02') && (*(long *)(param_1 + 0x348) == 0)) {
      uVar20 = *(undefined8 *)(param_1 + 0x170);
      plVar14 = (long *)0x340;
      __Znwm();
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&PTR_DAT_110bbae88;
      plVar10 = plVar14 + 3;
      FUN_10ac25f14(plVar10,uVar20);
      plVar12 = (long *)(param_1 + 0x348);
      uStack_a0 = (undefined8 *******)plVar10;
      plStack_98 = plVar14;
      FUN_10a271c18(&uStack_a0,plVar14 + 0xb,plVar10);
      func_0x00010a2c7ba0(plVar12,&uStack_a0);
      plVar10 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar14 = plStack_98 + 1;
        do {
          lVar11 = *plVar14;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      lVar11 = *plVar12;
      *(undefined1 *)(lVar11 + 0x2a8) = 0;
      uStack_a0 = (undefined8 *******)CONCAT44(iVar22,iVar22);
      FUN_10ac26770(lVar11,&uStack_a0);
      plVar10 = (long *)*plVar12;
      *(undefined1 *)(plVar10 + 1) = 1;
      *(undefined1 *)((long)plVar10 + 0x2a9) = 1;
      *(undefined4 *)((long)plVar10 + 0x2ac) = 0x3f800000;
      if ((int)plVar10[0x53] != 0x2c) {
        *(undefined4 *)(plVar10 + 0x53) = 0x2c;
        plVar14 = plVar10;
        (**(code **)(*plVar10 + 0xb0))(plVar10);
        plVar15 = plVar10;
        (**(code **)(*plVar10 + 0xb8))(plVar10);
        plVar16 = plVar10;
        (**(code **)(*plVar10 + 0xc0))(plVar10);
        lVar11 = plVar10[0x3f];
        lVar21 = plVar10[0x53];
        plVar17 = plVar10;
        (**(code **)(*plVar10 + 0xd0))(plVar10);
        FUN_10a1da3a4(plVar10,plVar14,plVar15,plVar16,(int)lVar11,(int)lVar21,plVar17,0);
      }
      FUN_10a2c7c04(&uStack_a0,*(undefined8 *)(param_1 + 0x170),plVar12);
      *(undefined1 *)((long)uStack_a0 + 8) = 1;
      FUN_10a430310(plStack_88,&uStack_a0);
      plVar10 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar12 = plStack_98 + 1;
        do {
          lVar11 = *plVar12;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    plVar10 = plStack_88;
    if (pppppppuStack_c0 == (undefined8 *******)0x0) {
      uStack_c1 = 1;
      uStack_d0 = *(undefined8 *)(param_1 + 0x170);
      uStack_d4 = 0;
      FUN_10a2e8ff8(&uStack_a0,&uStack_71,&uStack_d0,&uStack_d4,&uStack_c1);
      plVar12 = (long *)(param_1 + 0x338);
      FUN_10a2c7d5c(plVar12,&uStack_a0);
      plVar10 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar14 = plStack_98 + 1;
        do {
          lVar11 = *plVar14;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      lVar11 = *plVar12;
      *(byte *)(lVar11 + 0x2b8) = *(byte *)(lVar11 + 0x2b8) & 0xfe;
      *(undefined1 *)(lVar11 + 0x2fc) = 1;
      *(undefined1 *)(lVar11 + 0x304) = 0;
      *(undefined1 *)(lVar11 + 8) = 1;
      *(undefined1 *)(lVar11 + 800) = 2;
      *(undefined4 *)(lVar11 + 0x324) = uVar24;
      *(undefined4 *)(lVar11 + 0x328) = uVar24;
      *(undefined4 *)(lVar11 + 0x32c) = uVar24;
      *(undefined4 *)(lVar11 + 0x330) = uVar25;
      lVar11 = *plVar12;
      *(undefined1 *)(lVar11 + 0x334) = 1;
      *(undefined4 *)(lVar11 + 0x338) = 0x3f800000;
      uStack_a0 = (undefined8 *******)CONCAT44(iVar22,iVar22);
      FUN_10a1ddfe4(lVar11,&uStack_a0);
      FUN_10a2c7dc0(&uStack_a0,*(undefined8 *)(param_1 + 0x170),plVar12);
      plVar14 = plStack_98;
      pppppppuStack_c0 = uStack_a0;
      plVar10 = plStack_b8;
      uStack_a0 = (undefined8 *******)0x0;
      plStack_98 = (long *)0x0;
      plStack_b8 = plVar14;
      if (plVar10 != (long *)0x0) {
        plVar14 = plVar10 + 1;
        do {
          lVar11 = *plVar14;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar14 = plStack_98 + 1;
        do {
          lVar11 = *plVar14;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      plVar10 = plStack_88;
      *(undefined1 *)(pppppppuStack_c0 + 1) = 1;
      if (cVar5 == '\x01') {
        FUN_10a2c7f18(plStack_88,&pppppppuStack_c0);
      }
      else {
        lVar11 = *plVar12;
        if (plStack_80 != (long *)0x0) {
          plVar12 = plStack_80 + 2;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar8) {
              *plVar12 = *plVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(long **)(lVar11 + 0x390) = plStack_88;
        lVar21 = *(long *)(lVar11 + 0x398);
        *(long **)(lVar11 + 0x398) = plStack_80;
        if (lVar21 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    func_0x00010a04a704(plVar10 + 0xe9,&pppppppuStack_c0);
  }
  else {
    ppppppuVar13 = pppppppuStack_c0[0x4d];
    if (ppppppuVar13 != (undefined8 ******)0x0) {
      (*(code *)(*ppppppuVar13)[0x16])();
    }
    if ((int)ppppppuVar13 == iVar22) {
      ppppppuVar13 = pppppppuStack_c0[0x4d];
      if (ppppppuVar13 != (undefined8 ******)0x0) {
        (*(code *)(*ppppppuVar13)[0x17])();
      }
      if ((int)ppppppuVar13 == iVar22) goto LAB_10a2c7964;
    }
    uStack_a0 = (undefined8 *******)CONCAT44(iVar22,iVar22);
    FUN_10a1ddfe4(*(undefined8 *)(param_1 + 0x338),&uStack_a0);
    uStack_a0 = (undefined8 *******)CONCAT44(iVar22,iVar22);
    FUN_10ac26770(*(undefined8 *)(param_1 + 0x348),&uStack_a0);
  }
LAB_10a2c7964:
  plVar12 = plStack_b8;
  plVar10 = plStack_80;
  if (plStack_b8 != (long *)0x0) {
    plVar14 = plStack_b8 + 1;
    do {
      lVar11 = *plVar14;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      plVar10 = plStack_80;
    }
  }
LAB_10a2c79a0:
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 1;
    do {
      lVar11 = *plVar12;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *plVar12 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 10a2c7aa8; end: 10a2c7b0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a2c79f8) */
/* WARNING: Removing unreachable block (ram,0x00010a2c70e4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a2c7aa8(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 ******ppppppuVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined1 uStack_c1;
  undefined8 *******pppppppuStack_c0;
  long *plStack_b8;
  byte bStack_a9;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_71;
  undefined8 in_stack_ffffffffffffffc0;
  long *in_stack_ffffffffffffffc8;
  
  if ((int)param_2 == 0) {
    *(undefined1 *)(param_1 + 0x21d) = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x204) & 0xfe) != 2) {
    FUN_10a00946c(&UNK_10f64b794);
LAB_10a2c7b00:
    puVar17 = (undefined8 *)&UNK_10f64b7dd;
    FUN_10a00946c();
    (**(code **)(*param_2 + 0x50))(&stack0xffffffffffffffc0,param_2);
    puVar17[1] = in_stack_ffffffffffffffc8;
    *puVar17 = in_stack_ffffffffffffffc0;
    if (in_stack_ffffffffffffffc8 != (long *)0x0) {
      plVar9 = in_stack_ffffffffffffffc8 + 1;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (in_stack_ffffffffffffffc8 != (long *)0x0) {
        plVar9 = in_stack_ffffffffffffffc8 + 1;
        do {
          lVar10 = *plVar9;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*in_stack_ffffffffffffffc8 + 0x10))(in_stack_ffffffffffffffc8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffc8);
        }
      }
    }
    return;
  }
  if (((int)param_2 == 1) && (*(byte *)(param_1 + 0x204) != 2)) goto LAB_10a2c7b00;
  *(char *)(param_1 + 0x21d) = (char)param_2;
  *(undefined1 *)(param_1 + 0x21c) = 1;
  lVar10 = *(long *)(param_1 + 0x170) + 0xd48;
  FUN_10a5aeb74(lVar10,&PTR_DAT_110bc3320);
  for (lVar20 = *(long *)(lVar10 + 8); lVar20 != lVar10; lVar20 = *(long *)(lVar20 + 8)) {
    lVar8 = *(long *)(lVar20 + 0x28);
    if ((lVar8 != param_1) && (*(char *)(lVar8 + 0x21c) == '\x01')) {
      FUN_10a2c703c(lVar8,0,0);
    }
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0x13d) {
    *(undefined1 *)(param_1 + 0x21d) = 1;
  }
  bVar7 = (*(byte *)(param_1 + 0x204) & 0xfe) == 2;
  if (!bVar7) {
    return;
  }
  bVar3 = *(byte *)(param_1 + 0x21c);
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plVar9 = *(long **)(param_1 + 0x360);
  if (plVar9 == (long *)0x0) {
    plVar9 = plStack_80;
    plVar11 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar11 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plStack_88 = *(long **)(param_1 + 0x358);
      plVar11 = plStack_88;
    }
  }
  plStack_80 = plVar9;
  if ((bVar7 & bVar3) == 0) {
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x68))();
    }
    goto LAB_10a2c79a0;
  }
  *(undefined4 *)(param_1 + 0x25c) = 0;
  uVar23 = 0x3f800000;
  uVar24 = 0x3f800000;
  if (plVar11 == (long *)0x0) {
    if (*(char *)(param_1 + 0x204) == '\x02') {
      iVar18 = *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18);
      uVar23 = 0x3f800000;
      uVar24 = 0;
      if (iVar18 < 0x4d) {
        uVar23 = 0;
        uVar24 = 0;
        if (iVar18 < 0x44) {
          uVar23 = 0x3f800000;
          uVar24 = 0x3f800000;
        }
      }
    }
    uVar19 = *(undefined8 *)(param_1 + 0x168);
    func_0x000107c2b054(&pppppppuStack_c0,&UNK_10f64b3ce);
    FUN_10a0d6648(&uStack_a0,uVar19,&pppppppuStack_c0);
    if (plStack_98 != (long *)0x0) {
      plVar9 = plStack_98 + 2;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar10 = *(long *)(param_1 + 0x360);
    *(long **)(param_1 + 0x360) = plStack_98;
    *(undefined8 ********)(param_1 + 0x358) = uStack_a0;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar9 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar11 = plStack_98 + 1;
      do {
        lVar10 = *plVar11;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(pppppppuStack_c0);
    }
    plVar9 = *(long **)(param_1 + 0x360);
    if ((plVar9 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 == (long *)0x0)
       ) {
      plStack_88 = (long *)0x0;
    }
    else {
      plStack_88 = *(long **)(param_1 + 0x358);
    }
    plVar11 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar13 = plStack_80 + 1;
      do {
        lVar10 = *plVar13;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        lVar10 = *plStack_80;
        plStack_80 = plVar9;
        (**(code **)(lVar10 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        plVar9 = plStack_80;
      }
    }
    plStack_80 = plVar9;
    plVar9 = plStack_88;
    uVar1 = *(ulong *)(param_1 + 0x158);
    if (-1 < (char)*(byte *)(param_1 + 0x167)) {
      uVar1 = (ulong)*(byte *)(param_1 + 0x167);
    }
    FUN_10a003c90(&pppppppuStack_c0,uVar1 + 0xc,&uStack_a0);
    pppppppuVar2 = pppppppuStack_c0;
    if (-1 < (char)bStack_a9) {
      pppppppuVar2 = &pppppppuStack_c0;
    }
    if (uVar1 != 0) {
      lVar10 = *(long *)(param_1 + 0x150);
      if (-1 < *(char *)(param_1 + 0x167)) {
        lVar10 = param_1 + 0x150;
      }
      _memmove(pppppppuVar2,lVar10,uVar1);
    }
    puVar17 = (undefined8 *)((long)pppppppuVar2 + uVar1);
    *puVar17 = 0x6143776f64616853;
    *(undefined4 *)(puVar17 + 1) = 0x6172656d;
    *(undefined1 *)((long)puVar17 + 0xc) = 0;
    pppppppuVar2 = pppppppuStack_c0;
    if (-1 < (char)bStack_a9) {
      pppppppuVar2 = &pppppppuStack_c0;
      plStack_b8 = (long *)(ulong)bStack_a9;
    }
    func_0x000107c2c4d8(plVar9 + 0x2a,pppppppuVar2,plStack_b8);
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(pppppppuStack_c0);
    }
    *(ushort *)(plVar9 + 0x30) = *(ushort *)(plVar9 + 0x30) | 0x100;
    *(bool *)(plVar9 + 0x51) = *(char *)(param_1 + 0x204) == '\x02';
    *(undefined1 *)(plVar9 + 0x5e) = 1;
    *(undefined4 *)(plVar9 + 0x54) = 0;
    if (*(float *)((long)plVar9 + 0x26c) != 1.0) {
      *(undefined1 *)(plVar9 + 0x5e) = 1;
    }
    *(undefined4 *)((long)plVar9 + 0x26c) = 0x3f800000;
    pppppppuStack_c0 = (undefined8 *******)&UNK_10f63946e;
    plStack_b8 = (long *)0x4f;
    if ((long *)plVar9[0x46] == (long *)plVar9[0x47]) {
      FUN_10a0edfc4(&pppppppuStack_c0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2c7a10);
      (*pcVar6)();
    }
    lVar10 = *(long *)plVar9[0x46];
    *(undefined4 *)(lVar10 + 100) = uVar23;
    *(undefined4 *)(lVar10 + 0x68) = uVar23;
    *(undefined4 *)(lVar10 + 0x6c) = uVar23;
    *(undefined4 *)(lVar10 + 0x70) = uVar24;
    *(undefined1 *)(plVar9 + 0xdf) = 1;
    bVar7 = 0x4f < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18);
    if ((bool)*(char *)((long)plVar9 + 0x6f9) != bVar7) {
      *(undefined1 *)(plVar9 + 0x5e) = 1;
    }
    *(bool *)((long)plVar9 + 0x6f9) = bVar7;
    FUN_10a2c7b0c(&pppppppuStack_c0,param_1);
    plVar11 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar13 = plStack_b8 + 2;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar10 = plVar9[0xe8];
    plVar9[0xe8] = (long)plStack_b8;
    plVar9[0xe7] = (long)pppppppuStack_c0;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar11 != (long *)0x0) {
      plVar9 = plVar11 + 1;
      do {
        lVar10 = *plVar9;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    *(undefined4 *)((long)plStack_88 + 500) = 0x80000000;
    *(undefined1 *)(plStack_88 + 1) = 1;
    plVar11 = plStack_88;
  }
  (**(code **)(*plVar11 + 0x68))();
  lVar10 = *(long *)(param_1 + 0x318);
  plStack_88[0x53] = *(long *)(param_1 + 800);
  plStack_88[0x52] = lVar10;
  fVar22 = *(float *)(param_1 + 0x240);
  if (((*(float *)(plStack_88 + 0x4e) != fVar22) ||
      (*(float *)(plStack_88 + 0x4c) != *(float *)(param_1 + 0x244))) ||
     (*(float *)((long)plStack_88 + 0x264) != *(float *)(param_1 + 0x248))) {
    if (*(float *)(plStack_88 + 0x4e) != fVar22) {
      *(undefined1 *)(plStack_88 + 0x5e) = 1;
    }
    *(float *)(plStack_88 + 0x4e) = fVar22;
    fVar22 = *(float *)(param_1 + 0x244);
    if (*(float *)(plStack_88 + 0x4c) != fVar22) {
      *(undefined1 *)(plStack_88 + 0x5e) = 1;
    }
    *(float *)(plStack_88 + 0x4c) = fVar22;
    fVar22 = *(float *)(param_1 + 0x248);
    if (*(float *)((long)plStack_88 + 0x264) != fVar22) {
      *(undefined1 *)(plStack_88 + 0x5e) = 1;
    }
    *(float *)((long)plStack_88 + 0x264) = fVar22;
  }
  cVar4 = *(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x168) + 0x120) + 0x910) + 0x23);
  pppppppuStack_c0 = (undefined8 *******)plStack_88[0xe9];
  plStack_b8 = (long *)plStack_88[0xea];
  if (plStack_b8 != (long *)0x0) {
    plVar9 = plStack_b8 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  iVar18 = 0x400;
  if (*(char *)(param_1 + 600) != '\x01') {
    iVar18 = 0x800;
  }
  iVar21 = 0x200;
  if (*(char *)(param_1 + 600) != '\0') {
    iVar21 = iVar18;
  }
  if (*(char *)(param_1 + 0x21d) != '\x02') {
    iVar21 = *(int *)(param_1 + 0x1f0);
  }
  if ((pppppppuStack_c0 == (undefined8 *******)0x0) || (*(long *)(param_1 + 0x348) == 0)) {
    if ((*(char *)(param_1 + 0x21d) == '\x02') && (*(long *)(param_1 + 0x348) == 0)) {
      uVar19 = *(undefined8 *)(param_1 + 0x170);
      plVar13 = (long *)0x340;
      __Znwm();
      plVar13[1] = 0;
      plVar13[2] = 0;
      *plVar13 = (long)&PTR_DAT_110bbae88;
      plVar9 = plVar13 + 3;
      FUN_10ac25f14(plVar9,uVar19);
      plVar11 = (long *)(param_1 + 0x348);
      uStack_a0 = (undefined8 *******)plVar9;
      plStack_98 = plVar13;
      FUN_10a271c18(&uStack_a0,plVar13 + 0xb,plVar9);
      func_0x00010a2c7ba0(plVar11,&uStack_a0);
      plVar9 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar13 = plStack_98 + 1;
        do {
          lVar10 = *plVar13;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      lVar10 = *plVar11;
      *(undefined1 *)(lVar10 + 0x2a8) = 0;
      uStack_a0 = (undefined8 *******)CONCAT44(iVar21,iVar21);
      FUN_10ac26770(lVar10,&uStack_a0);
      plVar9 = (long *)*plVar11;
      *(undefined1 *)(plVar9 + 1) = 1;
      *(undefined1 *)((long)plVar9 + 0x2a9) = 1;
      *(undefined4 *)((long)plVar9 + 0x2ac) = 0x3f800000;
      if ((int)plVar9[0x53] != 0x2c) {
        *(undefined4 *)(plVar9 + 0x53) = 0x2c;
        plVar13 = plVar9;
        (**(code **)(*plVar9 + 0xb0))(plVar9);
        plVar14 = plVar9;
        (**(code **)(*plVar9 + 0xb8))(plVar9);
        plVar15 = plVar9;
        (**(code **)(*plVar9 + 0xc0))(plVar9);
        lVar10 = plVar9[0x3f];
        lVar20 = plVar9[0x53];
        plVar16 = plVar9;
        (**(code **)(*plVar9 + 0xd0))(plVar9);
        FUN_10a1da3a4(plVar9,plVar13,plVar14,plVar15,(int)lVar10,(int)lVar20,plVar16,0);
      }
      FUN_10a2c7c04(&uStack_a0,*(undefined8 *)(param_1 + 0x170),plVar11);
      *(undefined1 *)((long)uStack_a0 + 8) = 1;
      FUN_10a430310(plStack_88,&uStack_a0);
      plVar9 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar11 = plStack_98 + 1;
        do {
          lVar10 = *plVar11;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    plVar9 = plStack_88;
    if (pppppppuStack_c0 == (undefined8 *******)0x0) {
      uStack_c1 = 1;
      uStack_d0 = *(undefined8 *)(param_1 + 0x170);
      uStack_d4 = 0;
      FUN_10a2e8ff8(&uStack_a0,&uStack_71,&uStack_d0,&uStack_d4,&uStack_c1);
      plVar11 = (long *)(param_1 + 0x338);
      FUN_10a2c7d5c(plVar11,&uStack_a0);
      plVar9 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar13 = plStack_98 + 1;
        do {
          lVar10 = *plVar13;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      lVar10 = *plVar11;
      *(byte *)(lVar10 + 0x2b8) = *(byte *)(lVar10 + 0x2b8) & 0xfe;
      *(undefined1 *)(lVar10 + 0x2fc) = 1;
      *(undefined1 *)(lVar10 + 0x304) = 0;
      *(undefined1 *)(lVar10 + 8) = 1;
      *(undefined1 *)(lVar10 + 800) = 2;
      *(undefined4 *)(lVar10 + 0x324) = uVar23;
      *(undefined4 *)(lVar10 + 0x328) = uVar23;
      *(undefined4 *)(lVar10 + 0x32c) = uVar23;
      *(undefined4 *)(lVar10 + 0x330) = uVar24;
      lVar10 = *plVar11;
      *(undefined1 *)(lVar10 + 0x334) = 1;
      *(undefined4 *)(lVar10 + 0x338) = 0x3f800000;
      uStack_a0 = (undefined8 *******)CONCAT44(iVar21,iVar21);
      FUN_10a1ddfe4(lVar10,&uStack_a0);
      FUN_10a2c7dc0(&uStack_a0,*(undefined8 *)(param_1 + 0x170),plVar11);
      plVar13 = plStack_98;
      pppppppuStack_c0 = uStack_a0;
      plVar9 = plStack_b8;
      uStack_a0 = (undefined8 *******)0x0;
      plStack_98 = (long *)0x0;
      plStack_b8 = plVar13;
      if (plVar9 != (long *)0x0) {
        plVar13 = plVar9 + 1;
        do {
          lVar10 = *plVar13;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar13 = plStack_98 + 1;
        do {
          lVar10 = *plVar13;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = plStack_88;
      *(undefined1 *)(pppppppuStack_c0 + 1) = 1;
      if (cVar4 == '\x01') {
        FUN_10a2c7f18(plStack_88,&pppppppuStack_c0);
      }
      else {
        lVar10 = *plVar11;
        if (plStack_80 != (long *)0x0) {
          plVar11 = plStack_80 + 2;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(long **)(lVar10 + 0x390) = plStack_88;
        lVar20 = *(long *)(lVar10 + 0x398);
        *(long **)(lVar10 + 0x398) = plStack_80;
        if (lVar20 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    func_0x00010a04a704(plVar9 + 0xe9,&pppppppuStack_c0);
  }
  else {
    ppppppuVar12 = pppppppuStack_c0[0x4d];
    if (ppppppuVar12 != (undefined8 ******)0x0) {
      (*(code *)(*ppppppuVar12)[0x16])();
    }
    if ((int)ppppppuVar12 == iVar21) {
      ppppppuVar12 = pppppppuStack_c0[0x4d];
      if (ppppppuVar12 != (undefined8 ******)0x0) {
        (*(code *)(*ppppppuVar12)[0x17])();
      }
      if ((int)ppppppuVar12 == iVar21) goto LAB_10a2c7964;
    }
    uStack_a0 = (undefined8 *******)CONCAT44(iVar21,iVar21);
    FUN_10a1ddfe4(*(undefined8 *)(param_1 + 0x338),&uStack_a0);
    uStack_a0 = (undefined8 *******)CONCAT44(iVar21,iVar21);
    FUN_10ac26770(*(undefined8 *)(param_1 + 0x348),&uStack_a0);
  }
LAB_10a2c7964:
  plVar11 = plStack_b8;
  plVar9 = plStack_80;
  if (plStack_b8 != (long *)0x0) {
    plVar13 = plStack_b8 + 1;
    do {
      lVar10 = *plVar13;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      plVar9 = plStack_80;
    }
  }
LAB_10a2c79a0:
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      lVar10 = *plVar11;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a2c7b0c; end: 10a2c7c03;  */

void FUN_10a2c7b0c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10a2c7c04; end: 10a2c7d5b;  */

undefined8 ** FUN_10a2c7c04(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10a2e8b94(&uStack_80,&uStack_a0);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar4) {
          *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar5 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a2c7d14;
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar7 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_78;
    } while (cVar3 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar4) {
          *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar5 = &puStack_98;
    param_3 = &lStack_88;
    FUN_10a2e89ac(param_1);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a2c7d14;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar7 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_90;
    } while (cVar3 != '\0');
  }
  if (puVar7 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar6)[2])(ppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar5 = ppuVar6;
  }
LAB_10a2c7d14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar10 = (undefined8 *)param_3[1];
    puVar7 = (undefined8 *)*param_3;
    *param_3 = 0;
    param_3[1] = 0;
    plVar9 = ppuVar5[1];
    ppuVar5[1] = puVar10;
    *ppuVar5 = puVar7;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return ppuVar5;
  }
  return ppuVar5;
}



/* Entry: 10a2c7d5c; end: 10a2c7dbf;  */

undefined8 * FUN_10a2c7d5c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a2c7dc0; end: 10a2c7f17;  */

void FUN_10a2c7dc0(undefined8 *param_1,float param_2,long param_3,long *param_4)

{
  undefined8 **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  long lStack_e0;
  long *plStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_88 = param_3;
  if (param_3 == 0) {
    uStack_a0 = 0;
    FUN_10a2e92ac(&uStack_80,&uStack_a0);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar6 = ppuStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar4) {
          *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a044790(auStack_70);
    param_2 = (float)uStack_80;
    ppuVar6 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a2c7ed0;
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar7 = ppuStack_78;
    } while (cVar3 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_3 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_3 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar6 = ppuStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
        if (bVar4) {
          *ppuVar6 = (undefined8 *)((long)*ppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar6 = &puStack_98;
    param_4 = &lStack_88;
    FUN_10a2e90c4(param_1);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a2c7ed0;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar7 = ppuStack_90;
    } while (cVar3 != '\0');
  }
  if (puVar11 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar7)[2])(ppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar6 = ppuVar7;
  }
LAB_10a2c7ed0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_d0 = &UNK_10f63946e;
  uStack_c8 = 0x4f;
  if (ppuVar6[0x46] != ppuVar6[0x47]) {
    plVar8 = (long *)*ppuVar6[0x46];
    plStack_d8 = (long *)param_4[1];
    lStack_e0 = *param_4;
    if (param_4[1] != 0) {
      plVar2 = (long *)(param_4[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*plVar8 + 0x48))(plVar8,&lStack_e0);
    plVar8 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar2 = plStack_d8 + 1;
      do {
        lVar12 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return;
  }
  ppuVar9 = &puStack_d0;
  FUN_10a0edfc4();
  func_0x00010a05248c(&lStack_e0);
  __Unwind_Resume();
  bVar4 = false;
  bVar5 = true;
  if (0.0 <= param_2) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(param_2)) {
      bVar4 = param_2 == 16.0;
      bVar5 = 16.0 <= param_2;
    }
  }
  if (!bVar5 || bVar4) {
    *(float *)((long)ppuVar9 + 0x234) = param_2;
    return;
  }
  puVar10 = &UNK_10f64b75b;
  FUN_10a00946c();
  *(float *)(puVar10 + 0x30c) = param_2;
  fVar14 = (float)((*(uint *)(puVar10 + 0x308) >> 1) + 1);
  fVar13 = 5.0;
  if (param_2 <= 5.0) {
    fVar13 = param_2;
  }
  if (fVar14 <= fVar13) {
    fVar14 = fVar13;
  }
  *(float *)(puVar10 + 0x234) = *(float *)(puVar10 + 0x310) + -1.0 + fVar14;
  return;
}



/* Entry: 10a2c7f18; end: 10a2c7fe3;  */

void FUN_10a2c7f18(float param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f63946e;
  uStack_28 = 0x4f;
  if (*(undefined8 **)(param_2 + 0x230) != *(undefined8 **)(param_2 + 0x238)) {
    plVar5 = (long *)**(undefined8 **)(param_2 + 0x230);
    plStack_38 = (long *)param_3[1];
    uStack_40 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar5 + 0x48))(plVar5,&uStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return;
  }
  ppuVar6 = &puStack_30;
  FUN_10a0edfc4();
  func_0x00010a05248c(&uStack_40);
  __Unwind_Resume();
  bVar3 = false;
  bVar4 = true;
  if (0.0 <= param_1) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(param_1)) {
      bVar3 = param_1 == 16.0;
      bVar4 = 16.0 <= param_1;
    }
  }
  if (!bVar4 || bVar3) {
    *(float *)((long)ppuVar6 + 0x234) = param_1;
    return;
  }
  puVar7 = &UNK_10f64b75b;
  FUN_10a00946c();
  *(float *)(puVar7 + 0x30c) = param_1;
  fVar10 = (float)((*(uint *)(puVar7 + 0x308) >> 1) + 1);
  fVar9 = 5.0;
  if (param_1 <= 5.0) {
    fVar9 = param_1;
  }
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  *(float *)(puVar7 + 0x234) = *(float *)(puVar7 + 0x310) + -1.0 + fVar10;
  return;
}



/* Entry: 10a2c7fe4; end: 10a2c800f;  */

void FUN_10a2c7fe4(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 == 16.0;
      bVar2 = 16.0 <= param_1;
    }
  }
  if (!bVar2 || bVar1) {
    *(float *)(param_2 + 0x234) = param_1;
    return;
  }
  puVar3 = &UNK_10f64b75b;
  FUN_10a00946c();
  *(float *)(puVar3 + 0x30c) = param_1;
  fVar5 = (float)((*(uint *)(puVar3 + 0x308) >> 1) + 1);
  fVar4 = 5.0;
  if (param_1 <= 5.0) {
    fVar4 = param_1;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  *(float *)(puVar3 + 0x234) = *(float *)(puVar3 + 0x310) + -1.0 + fVar5;
  return;
}



/* Entry: 10a2c8010; end: 10a2c808f;  */

void FUN_10a2c8010(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_2 + 0x30c) = param_1;
  fVar2 = (float)((*(uint *)(param_2 + 0x308) >> 1) + 1);
  fVar1 = 5.0;
  if (param_1 <= 5.0) {
    fVar1 = param_1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(param_2 + 0x234) = *(float *)(param_2 + 0x310) + -1.0 + fVar2;
  return;
}



/* Entry: 10a2c8090; end: 10a2c822f;  */

void FUN_10a2c8090(undefined4 param_1,long param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  int iStack_58;
  int iStack_54;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if ((0x51 < *(int *)(*(long *)(*(long *)(param_2 + 0x170) + 0xa20) + 0x18)) &&
     (((param_3 == 0 || (0x800 < param_3)) || ((param_3 & param_3 - 1) != 0)))) {
    puVar5 = &UNK_10f64b825;
    FUN_10a00946c();
    func_0x00010a05248c(&lStack_50);
    FUN_10a0d6a2c(&lStack_40);
    __Unwind_Resume();
    *(undefined4 *)(puVar5 + 0x240) = param_1;
    plVar3 = *(long **)(puVar5 + 0x360);
    if ((plVar3 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 != (long *)0x0)
       ) {
      lVar8 = *(long *)(puVar5 + 0x358);
      if (lVar8 != 0) {
        fVar9 = *(float *)(puVar5 + 0x240);
        if (*(float *)(lVar8 + 0x270) != fVar9) {
          *(undefined1 *)(lVar8 + 0x2f0) = 1;
        }
        *(float *)(lVar8 + 0x270) = fVar9;
      }
      plVar4 = plVar3 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
    return;
  }
  *(uint *)(param_2 + 0x1f0) = param_3;
  plVar3 = *(long **)(param_2 + 0x360);
  if (plVar3 == (long *)0x0) {
    return;
  }
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar3 == (long *)0x0) {
    return;
  }
  lStack_40 = *(long *)(param_2 + 0x358);
  plStack_38 = plVar3;
  if (lStack_40 == 0) goto LAB_10a2c81c0;
  lVar8 = *(long *)(lStack_40 + 0x748);
  plVar3 = *(long **)(lStack_40 + 0x750);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_50 = lVar8;
  plStack_48 = plVar3;
  if (lVar8 != 0) {
    plVar4 = *(long **)(lVar8 + 0x268);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xb0))();
    }
    iVar7 = *(int *)(param_2 + 0x1f0);
    if ((int)plVar4 == iVar7) {
      plVar6 = *(long **)(lVar8 + 0x268);
      iVar7 = (int)plVar4;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0xb8))();
        iVar7 = *(int *)(param_2 + 0x1f0);
      }
      if ((int)plVar6 == iVar7) goto LAB_10a2c817c;
    }
    iStack_58 = iVar7;
    iStack_54 = iVar7;
    FUN_10a1ddfe4(*(undefined8 *)(param_2 + 0x338),&iStack_58);
  }
LAB_10a2c817c:
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plStack_38 == (long *)0x0) {
    return;
  }
LAB_10a2c81c0:
  plVar4 = plStack_38;
  plVar3 = plStack_38 + 1;
  do {
    lVar8 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a2c8230; end: 10a2c83df;  */

void FUN_10a2c8230(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  
  *(undefined4 *)(param_2 + 0x240) = param_1;
  plVar4 = *(long **)(param_2 + 0x360);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar5 = *(long *)(param_2 + 0x358);
    if (lVar5 != 0) {
      fVar6 = *(float *)(param_2 + 0x240);
      if (*(float *)(lVar5 + 0x270) != fVar6) {
        *(undefined1 *)(lVar5 + 0x2f0) = 1;
      }
      *(float *)(lVar5 + 0x270) = fVar6;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a2c83e0; end: 10a2c8e2b;  */

/* WARNING: Removing unreachable block (ram,0x00010a2c8b84) */
/* WARNING: Removing unreachable block (ram,0x00010a2c8b88) */
/* WARNING: Removing unreachable block (ram,0x00010a2c8b90) */
/* WARNING: Removing unreachable block (ram,0x00010a2c8b98) */
/* WARNING: Removing unreachable block (ram,0x00010a2c8b9c) */

void FUN_10a2c83e0(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined **ppuVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  code *pcStack_f0;
  undefined **appuStack_e8 [7];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(char *)(param_1 + 0x260) = (char)param_2;
  if (param_2 != 0) {
    lVar17 = *(long *)(param_1 + 0x170);
    ppuStack_f8 = (undefined **)0x0;
    ppuStack_100 = (undefined **)0xffffffffffffffff;
    lVar12 = *(long *)(lVar17 + 0x4d0);
    if (lVar12 != lVar17 + 0x4c8) {
      plVar16 = (long *)0x0;
      plVar13 = (long *)0x0;
      plVar20 = (long *)0x0;
      do {
        plVar14 = plVar13;
        plVar21 = plVar20;
        if (*(long *)(lVar12 + 0x10) != 0) {
          plVar5 = (long *)(*(long *)(lVar12 + 0x10) + 0xb0);
          (**(code **)(*plVar5 + 0x18))(plVar5,0x14404b27a032c91e);
          if ((plVar5 != (long *)0x0) &&
             (lVar19 = lVar17, FUN_10a3df848(lVar17,*(undefined8 *)(lVar12 + 0x10),&ppuStack_100,0),
             (int)lVar19 != 0)) {
            if (plVar20 < plVar16) {
              plVar21 = plVar20 + 1;
              *plVar20 = (long)plVar5;
            }
            else {
              lVar19 = (long)plVar20 - (long)plVar13;
              uVar1 = (lVar19 >> 3) + 1;
              if (uVar1 >> 0x3d != 0) {
                FUN_10a2e9710();
                goto LAB_10a2c8d38;
              }
              uVar11 = (long)plVar16 - (long)plVar13 >> 2;
              if (uVar11 <= uVar1) {
                uVar11 = uVar1;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plVar16 - (long)plVar13)) {
                uVar11 = 0x1fffffffffffffff;
              }
              if (uVar11 >> 0x3d != 0) goto LAB_10a2c8d2c;
              lVar6 = uVar11 << 3;
              __Znwm();
              plVar20 = (long *)(lVar6 + lVar19);
              plVar16 = (long *)(lVar6 + uVar11 * 8);
              plVar14 = plVar20 + -(lVar19 >> 3);
              plVar21 = plVar20 + 1;
              *plVar20 = (long)plVar5;
              _memcpy(plVar14,plVar13,lVar19);
              if (plVar13 != (long *)0x0) {
                __ZdlPv(plVar13);
              }
            }
          }
        }
        lVar12 = *(long *)(lVar12 + 8);
        plVar13 = plVar14;
        plVar20 = plVar21;
      } while (lVar12 != lVar17 + 0x4c8);
      for (; plVar13 != plVar21; plVar13 = plVar13 + 1) {
        lVar12 = *plVar13;
        if ((lVar12 != param_1) && (*(char *)(lVar12 + 0x260) == '\x01')) {
          if (param_3 != 0) {
            FUN_10a00946c(&UNK_10f64b87d);
            goto LAB_10a2c8d38;
          }
          *(undefined1 *)(lVar12 + 0x260) = 0;
          FUN_10a02d8cc(lVar12 + 0x2d0);
        }
      }
      if (plVar14 != (long *)0x0) {
        __ZdlPv(plVar14);
      }
    }
    if (((*(char *)(param_1 + 0x260) == '\x01') && (*(char *)(param_1 + 0x204) == '\x06')) &&
       ((*(byte *)(param_1 + 0x280) & 1) != 0)) {
      if (*(long *)(param_1 + 0x2d0) != 0) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x268);
        if (lVar12 != 0) {
          ___dynamic_cast(lVar12,&PTR_DAT_110bb3788,&PTR_DAT_110c5e3a8,0);
        }
        *(undefined1 *)(lVar12 + 0x2d0) = *(undefined1 *)(param_1 + 0x261);
        FUN_10ac29c7c();
        goto LAB_10a2c85dc;
      }
      uVar18 = *(undefined8 *)(param_1 + 0x170);
      plVar16 = (long *)0x768;
      __Znwm();
      plVar13 = plVar16 + 1;
      *plVar13 = 0;
      plVar16[2] = 0;
      *plVar16 = (long)&PTR_FUN_110bc28d8;
      ppuVar10 = (undefined **)(plVar16 + 3);
      ppuStack_f8 = *(undefined ***)(param_1 + 0x2f8);
      ppuStack_100 = *(undefined ***)(param_1 + 0x2f0);
      if (*(long *)(param_1 + 0x2f8) != 0) {
        plVar20 = (long *)(*(long *)(param_1 + 0x2f8) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = *plVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10ac2978c(ppuVar10,uVar18,&ppuStack_100);
      ppuVar15 = ppuStack_f8;
      if (ppuStack_f8 != (undefined **)0x0) {
        plVar20 = (long *)(ppuStack_f8 + 1);
        do {
          lVar12 = *plVar20;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)((long)*ppuStack_f8 + 0x10))(ppuStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
        }
      }
      ppuStack_130 = ppuVar10;
      plStack_128 = plVar16;
      if (plVar16[0xc] == 0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar20 = plVar16 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = *plVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar16[0xb] = (long)ppuVar10;
        plVar16[0xc] = (long)plVar16;
LAB_10a2c8720:
        do {
          lVar12 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      else if (*(long *)(plVar16[0xc] + 8) == -1) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar20 = plVar16 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *plVar20 = *plVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar16[0xb] = (long)ppuVar10;
        plVar16[0xc] = (long)plVar16;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_10a2c8720;
      }
      ppuVar10 = ppuStack_130;
      lVar12 = param_1;
      FUN_10a2c7b0c(&ppuStack_100,param_1);
      ppuVar15 = ppuStack_f8;
      if (ppuStack_f8 != (undefined **)0x0) {
        plVar16 = (long *)(ppuStack_f8 + 2);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar7 = ppuVar10[0xb7];
      ppuVar10[0xb7] = (undefined *)ppuStack_f8;
      ppuVar10[0xb6] = (undefined *)ppuStack_100;
      if (puVar7 != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (ppuVar15 != (undefined **)0x0) {
        plVar16 = (long *)(ppuVar15 + 1);
        do {
          lVar17 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar17 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar17 == 0) {
          (**(code **)((long)*ppuVar15 + 0x10))(ppuVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
        }
      }
      ppuVar10 = ppuStack_130;
      *(undefined1 *)(ppuStack_130 + 1) = 1;
      *(undefined1 *)(ppuStack_130 + 0x5a) = *(undefined1 *)(param_1 + 0x261);
      FUN_10ac29c7c(ppuStack_130);
      plVar16 = plStack_128;
      lVar17 = *(long *)(param_1 + 0x170);
      if (lVar17 == 0) {
        ppuVar9 = (undefined **)0x2c0;
        __Znwm();
        ppuVar9[1] = (undefined *)0x0;
        ppuVar9[2] = (undefined *)0x0;
        *ppuVar9 = (undefined *)&PTR_DAT_110b9fda0;
        ppuVar15 = ppuVar9 + 3;
        ppuStack_100 = ppuVar10;
        ppuStack_f8 = (undefined **)plVar16;
        if (plVar16 != (long *)0x0) {
          plVar13 = plVar16 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuVar10 = ppuVar9;
        func_0x00010a0fda30();
        FUN_10ab6a888(ppuVar15,0,&ppuStack_100,ppuVar10,lVar12);
        if (plVar16 != (long *)0x0) {
          plVar13 = plVar16 + 1;
          do {
            lVar12 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        ppuStack_b0 = ppuVar15;
        ppuStack_a8 = ppuVar9;
        FUN_10a05b2a8(&ppuStack_b0,ppuVar9 + 8,ppuVar15);
        FUN_10a05b04c(&ppuStack_110,&ppuStack_b0);
        ppuVar10 = ppuStack_a8;
        if (ppuStack_a8 != (undefined **)0x0) {
          ppuVar15 = ppuStack_a8 + 1;
          do {
            puVar7 = *ppuVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *ppuVar15 = puVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar7 == (undefined *)0x0) {
            (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
          }
        }
        if (ppuStack_108 == (undefined **)0x0) {
          ppuStack_f8 = (undefined **)0x0;
        }
        else {
          ppuVar10 = ppuStack_108 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar3) {
              *ppuVar10 = *ppuVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          ppuStack_f8 = ppuStack_108;
          if (ppuStack_108 != (undefined **)0x0) {
            ppuVar10 = ppuStack_108 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
              if (bVar3) {
                *ppuVar10 = *ppuVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_b0 = (undefined **)&UNK_1053a6a3c;
        appuStack_e8[0] = &PTR_DAT_110bc2918;
        pcStack_f0 = FUN_10a2e97bc;
        ppuStack_100 = ppuStack_110;
        ppuStack_a8 = &PTR_DAT_110ae9180;
        FUN_10a044790(&ppuStack_b0);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        ppuVar10 = ppuStack_108;
        if (ppuStack_108 != (undefined **)0x0) {
          ppuVar15 = ppuStack_108 + 1;
          do {
            puVar7 = *ppuVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *ppuVar15 = puVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar7 == (undefined *)0x0) {
            (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
          }
        }
        ppuStack_138 = ppuStack_f8;
        ppuStack_140 = ppuStack_100;
        if (ppuStack_f8 != (undefined **)0x0) {
          ppuVar10 = ppuStack_f8 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar3) {
              *ppuVar10 = *ppuVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a044790(&pcStack_f0);
        (*(code *)*appuStack_e8[0])(appuStack_e8);
        if (ppuStack_f8 != (undefined **)0x0) {
          ppuVar10 = ppuStack_f8 + 1;
          do {
            puVar7 = *ppuVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar3) {
              *ppuVar10 = puVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            ppuVar15 = ppuStack_f8;
          } while (cVar2 != '\0');
          goto LAB_10a2c8c6c;
        }
      }
      else {
        ppuStack_120 = *(undefined ***)(lVar17 + 0x858);
        ppuStack_118 = *(undefined ***)(lVar17 + 0x860);
        if (ppuStack_118 != (undefined **)0x0) {
          ppuVar15 = ppuStack_118 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *ppuVar15 = *ppuVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar18 = 0x2a8;
        __Znwm(0x2a8);
        ppuStack_100 = ppuVar10;
        ppuStack_f8 = (undefined **)plVar16;
        if (plVar16 != (long *)0x0) {
          plVar13 = plVar16 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar8 = uVar18;
        func_0x00010a0fda30();
        FUN_10ab6a888(uVar18,lVar17,&ppuStack_100,uVar8,lVar12);
        if (plVar16 != (long *)0x0) {
          plVar13 = plVar16 + 1;
          do {
            lVar12 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        ppuVar15 = ppuStack_118;
        ppuVar10 = ppuStack_120;
        ppuStack_110 = ppuStack_120;
        ppuStack_108 = ppuStack_118;
        if (ppuStack_118 != (undefined **)0x0) {
          ppuVar9 = ppuStack_118 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
            if (bVar3) {
              *ppuVar9 = *ppuVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          ppuVar9 = ppuStack_118 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
            if (bVar3) {
              *ppuVar9 = *ppuVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
            if (bVar3) {
              *ppuVar9 = *ppuVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_118);
        }
        ppuStack_100 = ppuVar10;
        ppuStack_f8 = ppuVar15;
        FUN_10a05b208(&ppuStack_b0,uVar18,&ppuStack_100);
        FUN_10a05b04c(&ppuStack_140,&ppuStack_b0);
        ppuVar10 = ppuStack_a8;
        if (ppuStack_a8 != (undefined **)0x0) {
          ppuVar15 = ppuStack_a8 + 1;
          do {
            puVar7 = *ppuVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *ppuVar15 = puVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar7 == (undefined *)0x0) {
            (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
          }
        }
        if (ppuStack_f8 != (undefined **)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        ppuVar10 = ppuStack_108;
        if (ppuStack_108 != (undefined **)0x0) {
          ppuVar15 = ppuStack_108 + 1;
          do {
            puVar7 = *ppuVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *ppuVar15 = puVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar7 == (undefined *)0x0) {
            (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
          }
        }
        if ((ppuStack_120 != (undefined **)0x0) && (ppuStack_140 != (undefined **)0x0)) {
          ppuStack_b0 = ppuStack_140;
          ppuStack_a8 = ppuStack_138;
          if (ppuStack_138 != (undefined **)0x0) {
            ppuVar10 = ppuStack_138 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
              if (bVar3) {
                *ppuVar10 = *ppuVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_10aa88c30(ppuStack_120,&ppuStack_b0);
          ppuVar10 = ppuStack_a8;
          if (ppuStack_a8 != (undefined **)0x0) {
            ppuVar15 = ppuStack_a8 + 1;
            do {
              puVar7 = *ppuVar15;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar3) {
                *ppuVar15 = puVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar7 == (undefined *)0x0) {
              (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
            }
          }
        }
        if (ppuStack_118 != (undefined **)0x0) {
          ppuVar10 = ppuStack_118 + 1;
          do {
            puVar7 = *ppuVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar3) {
              *ppuVar10 = puVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            ppuVar15 = ppuStack_118;
          } while (cVar2 != '\0');
LAB_10a2c8c6c:
          if (puVar7 == (undefined *)0x0) {
            (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
          }
        }
      }
      FUN_10a015bec((long *)(param_1 + 0x2d0),&ppuStack_140);
      ppuVar10 = ppuStack_138;
      if (ppuStack_138 != (undefined **)0x0) {
        ppuVar15 = ppuStack_138 + 1;
        do {
          puVar7 = *ppuVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
          if (bVar3) {
            *ppuVar15 = puVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar7 == (undefined *)0x0) {
          (**(code **)(*ppuStack_138 + 0x10))(ppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
        }
      }
      plVar16 = plStack_128;
      *(undefined1 *)(*(long *)(param_1 + 0x2d0) + 8) = 1;
      if (plStack_128 != (long *)0x0) {
        plVar13 = plStack_128 + 1;
        do {
          lVar12 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      goto LAB_10a2c85dc;
    }
  }
  FUN_10a02d8cc(param_1 + 0x2d0);
LAB_10a2c85dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a2c8d2c:
  func_0x000109ffded8();
LAB_10a2c8d38:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2c8d3c);
  (*pcVar4)();
}



/* Entry: 10a2c8e2c; end: 10a2c8f87;  */

long * FUN_10a2c8e2c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if ((*(byte *)(param_1 + 0x378) & 1) != 0) {
    FUN_10a2c8f88(param_1 + 0x2f0);
    plVar4 = *(long **)(param_1 + 0x368);
    if (plVar4 != (long *)0x0) {
      plStack_28 = *(long **)(param_1 + 0x2f8);
      uStack_30 = *(undefined8 *)(param_1 + 0x2f0);
      if (*(long *)(param_1 + 0x2f8) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x2f8) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10ac69b30(plVar4,&uStack_30);
      plVar6 = plStack_28;
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
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          plVar4 = plVar6;
        }
      }
    }
    if (((*(long *)(param_1 + 0x2d0) != 0) &&
        (plVar4 = *(long **)(*(long *)(param_1 + 0x2d0) + 0x268), plVar4 != (long *)0x0)) &&
       (___dynamic_cast(plVar4,&PTR_DAT_110bb3788,&PTR_DAT_110c5e3a8,0), plVar4 != (long *)0x0)) {
      plStack_38 = *(long **)(param_1 + 0x2f8);
      uStack_40 = *(undefined8 *)(param_1 + 0x2f0);
      if (*(long *)(param_1 + 0x2f8) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x2f8) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10ac29bd0();
      plVar6 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          plVar4 = plVar6;
        }
      }
    }
    return plVar4;
  }
  plVar4 = (long *)&UNK_10f64b906;
  FUN_10a00946c();
  func_0x00010a0536d4(&uStack_40);
  __Unwind_Resume();
  lVar7 = param_2[1];
  lVar5 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (long *)plVar4[1];
  plVar4[1] = lVar7;
  *plVar4 = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 10a2c8f88; end: 10a2c904f;  */

undefined8 * FUN_10a2c8f88(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a2c9050; end: 10a2c9113;  */

void FUN_10a2c9050(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x360);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x358);
      if (((plVar4 != (long *)0x0) && (*(char *)(param_1 + 0x21c) == '\x01')) &&
         ((*(byte *)(param_1 + 0x204) & 0xfe) == 2)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,1);
      }
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2c9114; end: 10a2c911b;  */

void FUN_10a2c9114(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x2f8);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x2f0);
      if (((plVar4 != (long *)0x0) && (*(char *)(param_1 + 0x1b4) == '\x01')) &&
         ((*(byte *)(param_1 + 0x19c) & 0xfe) == 2)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,1);
      }
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2c911c; end: 10a2c91cf;  */

void FUN_10a2c911c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x360);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x358);
      if ((plVar4 != (long *)0x0) && (*(char *)(param_1 + 0x21c) == '\x01')) {
        (**(code **)(*plVar4 + 0x68))(plVar4,0);
      }
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2c91d0; end: 10a2c91d7;  */

void FUN_10a2c91d0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 0x2f8);
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x2f0);
      if ((plVar4 != (long *)0x0) && (*(char *)(param_1 + 0x1b4) == '\x01')) {
        (**(code **)(*plVar4 + 0x68))(plVar4,0);
      }
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a2c91d8; end: 10a2c949f;  */

/* WARNING: Possible PIC construction at 0x00010a2c91f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2c91f4) */
/* WARNING: Removing unreachable block (ram,0x00010a2c91f8) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9294) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9200) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9234) */
/* WARNING: Removing unreachable block (ram,0x00010a2c923c) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9248) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9254) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9258) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9260) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9268) */
/* WARNING: Removing unreachable block (ram,0x00010a2c926c) */
/* WARNING: Removing unreachable block (ram,0x00010a2c9284) */

long * FUN_10a2c91d8(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *extraout_x8;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &stack0xfffffffffffffff0;
  uStack_38 = 0x10a2c91f4;
  uStack_50 = param_2;
  lStack_48 = param_1;
  if ((uint)param_2 < 0x40) {
    uVar10 = 1L << (param_2 & 0x3f);
    uStack_58 = 0;
    uVar11 = *(ulong *)(param_1 + 0x318);
    uStack_60 = uVar10;
    FUN_10a3c8d60(&uStack_58,param_1 + 800);
    return (long *)(ulong)((uVar11 & uVar10) != 0);
  }
  puVar6 = &UNK_10f633850;
  uVar10 = param_2;
  FUN_10a00946c();
  uStack_68 = 0x10a2c9300;
  uStack_80 = param_2;
  lStack_78 = param_1;
  ppuStack_70 = &puStack_40;
  if ((uint)uVar10 < 0x40) {
    uStack_88 = 0;
    *(ulong *)(puVar6 + 0x318) = *(ulong *)(puVar6 + 0x318) | 1L << (uVar10 & 0x3f);
    puVar7 = puVar6 + 800;
    FUN_10a3c8ddc(puVar7,&uStack_88);
    *(undefined **)(puVar6 + 800) = puVar7;
    plVar8 = *(long **)(puVar6 + 0x360);
    if ((plVar8 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)
       ) {
      lVar9 = *(long *)(puVar6 + 0x358);
      if (lVar9 != 0) {
        uVar12 = *(undefined8 *)(puVar6 + 0x318);
        *(undefined8 *)(lVar9 + 0x298) = *(undefined8 *)(puVar6 + 800);
        *(undefined8 *)(lVar9 + 0x290) = uVar12;
      }
      plVar1 = plVar8 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return plVar8;
  }
  puVar6 = &UNK_10f633850;
  FUN_10a00946c();
  plVar8 = extraout_x8;
  FUN_109ffe1f4(extraout_x8,0x40);
  uVar10 = 0;
  lVar9 = *plVar8;
  lVar2 = plVar8[1];
  do {
    if (lVar2 - lVar9 >> 2 == uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2c941c);
      (*pcVar5)();
    }
    *(uint *)(lVar9 + uVar10 * 4) = (uint)(*(ulong *)(puVar6 + 0x318) >> (uVar10 & 0x3f)) & 1;
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x40);
  return plVar8;
}



/* Entry: 10a2c94a0; end: 10a2c9d5b;  */

long * FUN_10a2c94a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,long *param_6)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char cVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined8 **ppuStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 uStack_280;
  undefined8 *apuStack_278 [7];
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined8 *puStack_218;
  long lStack_1e8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  plVar12 = param_6;
  (**(code **)(*param_6 + 0xd0))(param_6,&PTR_s_version_110bbc128,1);
  *(int *)((long)param_5 + 500) = (int)plVar12;
  (**(code **)(*param_6 + 0xf0))(param_6,&PTR_DAT_110bc2480,param_5 + 0x3f);
  *(undefined4 *)(param_5 + 0x3f) = param_1;
  *(undefined4 *)((long)param_5 + 0x1fc) = param_2;
  *(undefined4 *)(param_5 + 0x40) = param_3;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbc148,*(undefined1 *)((long)param_5 + 0x204));
  *(char *)((long)param_5 + 0x204) = (char)plVar12;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbc168,*(undefined1 *)((long)param_5 + 0x205));
  *(char *)((long)param_5 + 0x205) = (char)plVar12;
  uVar13 = (undefined4)param_5[0x41];
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc188);
  *(undefined4 *)(param_5 + 0x41) = uVar13;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbc1a8,*(undefined1 *)((long)param_5 + 0x205));
  *(char *)((long)param_5 + 0x205) = (char)plVar12;
  uVar13 = (undefined4)param_5[0x41];
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc1c8);
  *(undefined4 *)(param_5 + 0x41) = uVar13;
  uVar13 = *(undefined4 *)((long)param_5 + 0x20c);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc1e8);
  *(undefined4 *)((long)param_5 + 0x20c) = uVar13;
  uVar13 = *(undefined4 *)((long)param_5 + 0x214);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc208);
  *(undefined4 *)((long)param_5 + 0x214) = uVar13;
  uVar13 = (undefined4)param_5[0x43];
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc228);
  *(undefined4 *)(param_5 + 0x43) = uVar13;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc248,(char)param_5[0x42]);
  *(char *)(param_5 + 0x42) = (char)plVar12;
  if (*(int *)(*(long *)(param_5[0x2e] + 0xa20) + 0x18) < 0x13d) {
    plVar12 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc268,0);
    *(char *)((long)param_5 + 0x21d) = (char)plVar12;
    goto LAB_10a2c9860;
  }
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bbc288);
  uVar3 = (uint)plVar12;
  uVar2 = 0;
  if (uVar3 != 0) {
    plVar12 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbc288,0);
    uVar2 = SUB81(plVar12,0);
  }
  *(undefined1 *)((long)param_5 + 0x21d) = uVar2;
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bbc268);
  if ((((int)plVar12 != 0) &&
      (plVar12 = param_6, (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc268,0),
      *(char *)((long)param_5 + 0x21d) == '\0')) && ((int)plVar12 != 0)) {
    *(bool *)((long)param_5 + 0x21d) = (*(byte *)((long)param_5 + 0x204) & 0xfe) == 2;
  }
  plVar12 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bbc2a8);
  if ((int)plVar12 == 0) {
    bVar1 = false;
  }
  else {
    fVar14 = 0.0;
    (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc2a8);
    bVar1 = 0.0 < fVar14;
  }
  cVar10 = *(char *)((long)param_5 + 0x21d);
  if (cVar10 != '\0') {
    uVar3 = 1;
  }
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_5 + 0x204) == '\x02') {
      if (bVar1) {
LAB_10a2c978c:
        cVar10 = '\x01';
        *(undefined1 *)((long)param_5 + 0x21d) = 1;
        goto LAB_10a2c9794;
      }
    }
    else if ((bool)(*(char *)((long)param_5 + 0x204) == '\x03' & bVar1)) goto LAB_10a2c978c;
    cVar10 = '\0';
  }
LAB_10a2c9794:
  plVar12 = (long *)(ulong)(cVar10 != '\0');
  uVar13 = 0x3a83126f;
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc2c8);
  *(undefined4 *)((long)param_5 + 0x24c) = uVar13;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc2e8,1);
  *(char *)(param_5 + 0x4a) = (char)plVar4;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc308,1);
  *(char *)((long)param_5 + 0x251) = (char)plVar4;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc328,0);
  *(char *)((long)param_5 + 0x252) = (char)plVar4;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbc348,9);
  *(int *)((long)param_5 + 0x254) = (int)plVar4;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbc368,0);
  *(char *)(param_5 + 0x4b) = (char)plVar4;
LAB_10a2c9860:
  *(char *)((long)param_5 + 0x21c) = (char)plVar12;
  (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110bbc388,param_5 + 0x44);
  *(undefined4 *)(param_5 + 0x44) = uVar13;
  *(undefined4 *)((long)param_5 + 0x224) = param_2;
  *(undefined4 *)(param_5 + 0x45) = param_3;
  *(undefined4 *)((long)param_5 + 0x22c) = param_4;
  uVar13 = (undefined4)param_5[0x46];
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc2a8);
  *(undefined4 *)(param_5 + 0x46) = uVar13;
  uVar13 = *(undefined4 *)((long)param_5 + 0x234);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc3a8);
  *(undefined4 *)((long)param_5 + 0x234) = uVar13;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0xd0))(param_6,&PTR_DAT_110bbc3c8,(int)param_5[0x61]);
  *(int *)(param_5 + 0x61) = (int)plVar4;
  uVar13 = *(undefined4 *)((long)param_5 + 0x30c);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc3e8);
  *(undefined4 *)((long)param_5 + 0x30c) = uVar13;
  uVar13 = (undefined4)param_5[0x62];
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc408);
  *(undefined4 *)(param_5 + 0x62) = uVar13;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0xd0))(param_6,&PTR_DAT_110bbc428,(int)param_5[0x3e]);
  *(int *)(param_5 + 0x3e) = (int)plVar4;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc448,(char)param_5[0x47]);
  *(char *)(param_5 + 0x47) = (char)plVar4;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc468,*(undefined1 *)((long)param_5 + 0x239));
  *(char *)((long)param_5 + 0x239) = (char)plVar4;
  uVar13 = *(undefined4 *)((long)param_5 + 0x23c);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc488);
  *(undefined4 *)((long)param_5 + 0x23c) = uVar13;
  uVar13 = (undefined4)param_5[0x48];
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc4a8);
  *(undefined4 *)(param_5 + 0x48) = uVar13;
  uVar13 = *(undefined4 *)((long)param_5 + 0x244);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc4c8);
  *(undefined4 *)((long)param_5 + 0x244) = uVar13;
  uVar13 = 0x44bb8000;
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc4e8);
  *(undefined4 *)(param_5 + 0x49) = uVar13;
  plVar4 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc508,0);
  plVar5 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbc528,*(undefined1 *)((long)param_5 + 0x261));
  *(char *)((long)param_5 + 0x261) = (char)plVar5;
  plVar5 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bbc548,(char)param_5[0x50]);
  *(char *)(param_5 + 0x50) = (char)plVar5;
  uVar13 = *(undefined4 *)((long)param_5 + 0x284);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc568);
  *(undefined4 *)((long)param_5 + 0x284) = uVar13;
  uVar13 = (undefined4)param_5[0x51];
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc588);
  *(undefined4 *)(param_5 + 0x51) = uVar13;
  uVar13 = (undefined4)param_5[0x60];
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc5a8);
  *(undefined4 *)(param_5 + 0x60) = uVar13;
  uVar13 = *(undefined4 *)((long)param_5 + 0x304);
  (**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bbc5c8);
  *(undefined4 *)((long)param_5 + 0x304) = uVar13;
  pcStack_88 = FUN_10a2e9a3c;
  ppuStack_80 = &PTR_DAT_110bc2930;
  plStack_78 = param_5;
  FUN_10a02d928(param_6,&PTR_DAT_110bbc5e8,&pcStack_88,0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  uStack_c8 = 0x10a2e9a6c;
  ppuStack_c0 = &PTR_DAT_110bc2948;
  plStack_b8 = param_5;
  FUN_10a02d928(param_6,&PTR_DAT_110bbc608,&uStack_c8,0);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  uStack_108 = 0x10a2e9a9c;
  ppuStack_100 = &PTR_DAT_110bc2960;
  plStack_f8 = param_5;
  FUN_10a02d928(param_6,&PTR_DAT_110bbc628,&uStack_108,0);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  uStack_148 = 0x10a2e9acc;
  ppuStack_140 = &PTR_DAT_110bc2978;
  plStack_138 = param_5;
  FUN_10a02d928(param_6,&PTR_DAT_110bbc648,&uStack_148,0);
  (*(code *)*ppuStack_140)(&ppuStack_140);
  uStack_188 = 0x10a2e9db8;
  ppuStack_180 = &PTR_FUN_110bc2990;
  uVar9 = 0;
  plStack_178 = param_5;
  FUN_10a2c9d5c(param_6,&PTR_DAT_110bbc668,&uStack_188,0);
  (*(code *)*ppuStack_180)(&ppuStack_180);
  if ((*(byte *)(param_5 + 0x66) & 1) == 0) {
    *(undefined1 *)(param_5 + 0x66) = 1;
    fVar14 = *(float *)((long)param_5 + 0x30c);
    if (((0.0 <= fVar14) && (1.0 <= *(float *)(param_5 + 0x62))) && (*(uint *)(param_5 + 0x61) != 0)
       ) {
      fVar16 = (float)((*(uint *)(param_5 + 0x61) >> 1) + 1);
      fVar15 = 5.0;
      if (fVar14 <= 5.0) {
        fVar15 = fVar14;
      }
      if (fVar16 <= fVar15) {
        fVar16 = fVar15;
      }
      *(float *)((long)param_5 + 0x234) = *(float *)(param_5 + 0x62) + -1.0 + fVar16;
    }
  }
  FUN_10a3c92c8(param_5 + 99,param_6);
  FUN_10a2c703c(param_5,plVar12,0);
  puVar8 = (undefined8 *)0x0;
  FUN_10a2c83e0(param_5);
  FUN_10a2c6dec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_5;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_180)(&ppuStack_180);
  __Unwind_Resume();
  pcStack_198 = FUN_10a2c9d5c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_280 = *puVar8;
  puStack_1a0 = &stack0xfffffffffffffff0;
  (**(code **)(puVar8[1] + 0x10))(apuStack_278,puVar8 + 1);
  FUN_109ffe064(&uStack_240,*plVar4,plVar4[1]);
  pcStack_228 = FUN_10a2e9afc;
  ppuStack_220 = &PTR_FUN_110bc3538;
  puVar8 = (undefined8 *)0x58;
  __Znwm();
  *puVar8 = uStack_280;
  (*(code *)apuStack_278[0][2])(puVar8 + 1,apuStack_278);
  puVar8[9] = uStack_238;
  puVar8[8] = uStack_240;
  puVar8[10] = lStack_230;
  uStack_238 = 0;
  lStack_230 = 0;
  uStack_240 = 0;
  puStack_218 = puVar8;
  func_0x000107c2b054(auStack_298,&UNK_10f64b3ce);
  plVar12 = param_5;
  plVar5 = plVar4;
  (**(code **)(*param_5 + 0x250))(param_5,plVar4,&pcStack_228,uVar9,auStack_298);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  (*(code *)*ppuStack_220)(&ppuStack_220);
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  ppuVar6 = apuStack_278;
  (*(code *)*apuStack_278[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return plVar12;
  }
  ___stack_chk_fail();
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  (*(code *)*ppuStack_220)(&ppuStack_220);
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  (*(code *)*apuStack_278[0])(apuStack_278);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10a2c9f28;
  puStack_2d0 = puVar8;
  plStack_2c8 = param_5;
  plStack_2c0 = plVar4;
  ppuStack_2b8 = ppuVar6;
  ppuStack_2b0 = &puStack_1a0;
  func_0x00010a3c7928();
  (**(code **)(*plVar5 + 0x50))(plVar5,&PTR_s_version_110bbc128,2);
  (**(code **)(*plVar5 + 0x80))(plVar5,&PTR_DAT_110bc2480,ppuVar7 + 0x3f);
  (**(code **)(*plVar5 + 0x40))(plVar5,&PTR_DAT_110bbc148,*(undefined1 *)((long)ppuVar7 + 0x204));
  (**(code **)(*plVar5 + 0x40))(plVar5,&PTR_DAT_110bbc1a8,*(undefined1 *)((long)ppuVar7 + 0x205));
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)(ppuVar7 + 0x41),plVar5,&PTR_DAT_110bbc1c8);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x20c),plVar5,&PTR_DAT_110bbc1e8);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x214),plVar5,&PTR_DAT_110bbc208);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)(ppuVar7 + 0x43),plVar5,&PTR_DAT_110bbc228);
  (**(code **)(*plVar5 + 0x40))(plVar5,&PTR_DAT_110bbc288,*(undefined1 *)((long)ppuVar7 + 0x21d));
  (**(code **)(*plVar5 + 0x90))(plVar5,&PTR_DAT_110bbc388,ppuVar7 + 0x44);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)(ppuVar7 + 0x46),plVar5,&PTR_DAT_110bbc2a8);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x234),plVar5,&PTR_DAT_110bbc3a8);
  (**(code **)(*plVar5 + 0x50))(plVar5,&PTR_DAT_110bbc428,*(undefined4 *)(ppuVar7 + 0x3e));
  (**(code **)(*plVar5 + 0x70))(plVar5,&PTR_DAT_110bbc448,*(undefined1 *)(ppuVar7 + 0x47));
  (**(code **)(*plVar5 + 0x70))(plVar5,&PTR_DAT_110bbc468,*(undefined1 *)((long)ppuVar7 + 0x239));
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x23c),plVar5,&PTR_DAT_110bbc488);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)(ppuVar7 + 0x48),plVar5,&PTR_DAT_110bbc4a8);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x244),plVar5,&PTR_DAT_110bbc4c8);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)(ppuVar7 + 0x49),plVar5,&PTR_DAT_110bbc4e8);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x24c),plVar5,&PTR_DAT_110bbc2c8);
  (**(code **)(*plVar5 + 0x70))(plVar5,&PTR_DAT_110bbc2e8,*(undefined1 *)(ppuVar7 + 0x4a));
  (**(code **)(*plVar5 + 0x70))(plVar5,&PTR_DAT_110bbc308,*(undefined1 *)((long)ppuVar7 + 0x251));
  (**(code **)(*plVar5 + 0x70))(plVar5,&PTR_DAT_110bbc328,*(undefined1 *)((long)ppuVar7 + 0x252));
  (**(code **)(*plVar5 + 0x40))(plVar5,&PTR_DAT_110bbc348,*(undefined4 *)((long)ppuVar7 + 0x254));
  (**(code **)(*plVar5 + 0x40))(plVar5,&PTR_DAT_110bbc368,*(undefined1 *)(ppuVar7 + 0x4b));
  (**(code **)(*plVar5 + 0x70))(plVar5,&PTR_DAT_110bbc508,*(undefined1 *)(ppuVar7 + 0x4c));
  (**(code **)(*plVar5 + 0x40))(plVar5,&PTR_DAT_110bbc528,*(undefined1 *)((long)ppuVar7 + 0x261));
  (**(code **)(*plVar5 + 0x70))(plVar5,&PTR_DAT_110bbc548,*(undefined1 *)(ppuVar7 + 0x50));
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x284),plVar5,&PTR_DAT_110bbc568);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)(ppuVar7 + 0x51),plVar5,&PTR_DAT_110bbc588);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)(ppuVar7 + 0x60),plVar5,&PTR_DAT_110bbc5a8);
  (**(code **)(*plVar5 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x304),plVar5,&PTR_DAT_110bbc5c8);
  FUN_10a02e188(plVar5,&PTR_DAT_110bbc5e8,ppuVar7 + 0x52,&UNK_10f633e9d,0xd);
  FUN_10a02e188(plVar5,&PTR_DAT_110bbc608,ppuVar7 + 0x54,&UNK_10f633e9d,0xd);
  FUN_10a02e188(plVar5,&PTR_DAT_110bbc628,ppuVar7 + 0x56,&UNK_10f633e9d,0xd);
  FUN_10a02e188(plVar5,&PTR_DAT_110bbc648,ppuVar7 + 0x58,&UNK_10f633e9d,0xd);
  puStack_2e0 = &DAT_10f638986;
  uStack_2d8 = 5;
  plStack_2e8 = ppuVar7[0x5f];
  puStack_2f0 = ppuVar7[0x5e];
  if (ppuVar7[0x5f] != (undefined8 *)0x0) {
    plVar12 = ppuVar7[0x5f] + 1;
    do {
      cVar10 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar1) {
        *plVar12 = *plVar12 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  (**(code **)(*plVar5 + 0x108))(plVar5,&PTR_DAT_110bbc668,&puStack_2f0,&puStack_2e0);
  plVar12 = plStack_2e8;
  if (plStack_2e8 != (long *)0x0) {
    plVar4 = plStack_2e8 + 1;
    do {
      lVar11 = *plVar4;
      cVar10 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar1) {
        *plVar4 = lVar11 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a2ca3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5,&PTR_DAT_110bd0108,ppuVar7[99]);
  return plVar5;
}



/* Entry: 10a2c9d5c; end: 10a2c9f27;  */

long * FUN_10a2c9d5c(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puStack_160;
  long *plStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a2e9afc;
  ppuStack_90 = &PTR_FUN_110bc3538;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar4 + 1,apuStack_e8);
  puVar4[9] = uStack_a8;
  puVar4[8] = uStack_b0;
  puVar4[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar4;
  func_0x000107c2b054(auStack_108,&UNK_10f64b3ce);
  plVar5 = param_1;
  plVar8 = param_2;
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar6 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_118 = FUN_10a2c9f28;
  puStack_140 = puVar4;
  plStack_138 = param_1;
  plStack_130 = param_2;
  ppuStack_128 = ppuVar6;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_10a3c7928();
  (**(code **)(*plVar8 + 0x50))(plVar8,&PTR_s_version_110bbc128,2);
  (**(code **)(*plVar8 + 0x80))(plVar8,&PTR_DAT_110bc2480,ppuVar7 + 0x3f);
  (**(code **)(*plVar8 + 0x40))(plVar8,&PTR_DAT_110bbc148,*(undefined1 *)((long)ppuVar7 + 0x204));
  (**(code **)(*plVar8 + 0x40))(plVar8,&PTR_DAT_110bbc1a8,*(undefined1 *)((long)ppuVar7 + 0x205));
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)(ppuVar7 + 0x41),plVar8,&PTR_DAT_110bbc1c8);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x20c),plVar8,&PTR_DAT_110bbc1e8);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x214),plVar8,&PTR_DAT_110bbc208);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)(ppuVar7 + 0x43),plVar8,&PTR_DAT_110bbc228);
  (**(code **)(*plVar8 + 0x40))(plVar8,&PTR_DAT_110bbc288,*(undefined1 *)((long)ppuVar7 + 0x21d));
  (**(code **)(*plVar8 + 0x90))(plVar8,&PTR_DAT_110bbc388,ppuVar7 + 0x44);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)(ppuVar7 + 0x46),plVar8,&PTR_DAT_110bbc2a8);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x234),plVar8,&PTR_DAT_110bbc3a8);
  (**(code **)(*plVar8 + 0x50))(plVar8,&PTR_DAT_110bbc428,*(undefined4 *)(ppuVar7 + 0x3e));
  (**(code **)(*plVar8 + 0x70))(plVar8,&PTR_DAT_110bbc448,*(undefined1 *)(ppuVar7 + 0x47));
  (**(code **)(*plVar8 + 0x70))(plVar8,&PTR_DAT_110bbc468,*(undefined1 *)((long)ppuVar7 + 0x239));
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x23c),plVar8,&PTR_DAT_110bbc488);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)(ppuVar7 + 0x48),plVar8,&PTR_DAT_110bbc4a8);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x244),plVar8,&PTR_DAT_110bbc4c8);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)(ppuVar7 + 0x49),plVar8,&PTR_DAT_110bbc4e8);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x24c),plVar8,&PTR_DAT_110bbc2c8);
  (**(code **)(*plVar8 + 0x70))(plVar8,&PTR_DAT_110bbc2e8,*(undefined1 *)(ppuVar7 + 0x4a));
  (**(code **)(*plVar8 + 0x70))(plVar8,&PTR_DAT_110bbc308,*(undefined1 *)((long)ppuVar7 + 0x251));
  (**(code **)(*plVar8 + 0x70))(plVar8,&PTR_DAT_110bbc328,*(undefined1 *)((long)ppuVar7 + 0x252));
  (**(code **)(*plVar8 + 0x40))(plVar8,&PTR_DAT_110bbc348,*(undefined4 *)((long)ppuVar7 + 0x254));
  (**(code **)(*plVar8 + 0x40))(plVar8,&PTR_DAT_110bbc368,*(undefined1 *)(ppuVar7 + 0x4b));
  (**(code **)(*plVar8 + 0x70))(plVar8,&PTR_DAT_110bbc508,*(undefined1 *)(ppuVar7 + 0x4c));
  (**(code **)(*plVar8 + 0x40))(plVar8,&PTR_DAT_110bbc528,*(undefined1 *)((long)ppuVar7 + 0x261));
  (**(code **)(*plVar8 + 0x70))(plVar8,&PTR_DAT_110bbc548,*(undefined1 *)(ppuVar7 + 0x50));
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x284),plVar8,&PTR_DAT_110bbc568);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)(ppuVar7 + 0x51),plVar8,&PTR_DAT_110bbc588);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)(ppuVar7 + 0x60),plVar8,&PTR_DAT_110bbc5a8);
  (**(code **)(*plVar8 + 0x60))(*(undefined4 *)((long)ppuVar7 + 0x304),plVar8,&PTR_DAT_110bbc5c8);
  FUN_10a02e188(plVar8,&PTR_DAT_110bbc5e8,ppuVar7 + 0x52,&UNK_10f633e9d,0xd);
  FUN_10a02e188(plVar8,&PTR_DAT_110bbc608,ppuVar7 + 0x54,&UNK_10f633e9d,0xd);
  FUN_10a02e188(plVar8,&PTR_DAT_110bbc628,ppuVar7 + 0x56,&UNK_10f633e9d,0xd);
  FUN_10a02e188(plVar8,&PTR_DAT_110bbc648,ppuVar7 + 0x58,&UNK_10f633e9d,0xd);
  puStack_150 = &DAT_10f638986;
  uStack_148 = 5;
  plStack_158 = ppuVar7[0x5f];
  puStack_160 = ppuVar7[0x5e];
  if (ppuVar7[0x5f] != (undefined8 *)0x0) {
    plVar5 = ppuVar7[0x5f] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar8 + 0x108))(plVar8,&PTR_DAT_110bbc668,&puStack_160,&puStack_150);
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar1 = plStack_158 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a2ca3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x58))(plVar8,&PTR_DAT_110bd0108,ppuVar7[99]);
  return plVar8;
}



/* Entry: 10a2c9f28; end: 10a2ca40b;  */

void FUN_10a2c9f28(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_s_version_110bbc128,2);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110bc2480,param_1 + 0x1f8);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbc148,*(undefined1 *)(param_1 + 0x204));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbc1a8,*(undefined1 *)(param_1 + 0x205));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x208),param_2,&PTR_DAT_110bbc1c8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x20c),param_2,&PTR_DAT_110bbc1e8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x214),param_2,&PTR_DAT_110bbc208);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x218),param_2,&PTR_DAT_110bbc228);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbc288,*(undefined1 *)(param_1 + 0x21d));
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110bbc388,param_1 + 0x220);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x230),param_2,&PTR_DAT_110bbc2a8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x234),param_2,&PTR_DAT_110bbc3a8);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bbc428,*(undefined4 *)(param_1 + 0x1f0));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbc448,*(undefined1 *)(param_1 + 0x238));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbc468,*(undefined1 *)(param_1 + 0x239));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x23c),param_2,&PTR_DAT_110bbc488);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x240),param_2,&PTR_DAT_110bbc4a8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x244),param_2,&PTR_DAT_110bbc4c8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x248),param_2,&PTR_DAT_110bbc4e8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x24c),param_2,&PTR_DAT_110bbc2c8);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbc2e8,*(undefined1 *)(param_1 + 0x250));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbc308,*(undefined1 *)(param_1 + 0x251));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbc328,*(undefined1 *)(param_1 + 0x252));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbc348,*(undefined4 *)(param_1 + 0x254));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbc368,*(undefined1 *)(param_1 + 600));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbc508,*(undefined1 *)(param_1 + 0x260));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbc528,*(undefined1 *)(param_1 + 0x261));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbc548,*(undefined1 *)(param_1 + 0x280));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x284),param_2,&PTR_DAT_110bbc568);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x288),param_2,&PTR_DAT_110bbc588);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x300),param_2,&PTR_DAT_110bbc5a8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x304),param_2,&PTR_DAT_110bbc5c8);
  FUN_10a02e188(param_2,&PTR_DAT_110bbc5e8,param_1 + 0x290,&UNK_10f633e9d,0xd);
  FUN_10a02e188(param_2,&PTR_DAT_110bbc608,param_1 + 0x2a0,&UNK_10f633e9d,0xd);
  FUN_10a02e188(param_2,&PTR_DAT_110bbc628,param_1 + 0x2b0,&UNK_10f633e9d,0xd);
  FUN_10a02e188(param_2,&PTR_DAT_110bbc648,param_1 + 0x2c0,&UNK_10f633e9d,0xd);
  puStack_40 = &DAT_10f638986;
  uStack_38 = 5;
  plStack_48 = *(long **)(param_1 + 0x2f8);
  uStack_50 = *(undefined8 *)(param_1 + 0x2f0);
  if (*(long *)(param_1 + 0x2f8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x2f8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bbc668,&uStack_50,&puStack_40);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a2ca3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd0108,*(undefined8 *)(param_1 + 0x318));
  return;
}



/* Entry: 10a2ca40c; end: 10a2ca8cf;  */

undefined1  [16]
FUN_10a2ca40c(undefined8 *param_1,undefined8 ****param_2,undefined8 ****param_3,
             undefined8 *****param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****unaff_x23;
  undefined8 *****unaff_x24;
  undefined8 *****unaff_x25;
  undefined8 *****unaff_x26;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 ****ppppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****ppppuStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ****ppppuStack_188;
  long lStack_158;
  undefined8 ****ppppuStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ***pppuStack_120;
  undefined ***pppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == (undefined8 *****)0x0) {
    ppppuVar13 = param_2;
    ppppuVar12 = param_3;
    func_0x00010a0fda30();
  }
  else {
    unaff_x23 = &ppppuStack_b0;
    ppppuStack_a8 = (undefined8 ****)param_2[9];
    ppppuStack_b0 = (undefined8 ****)param_2[8];
    pppppuVar7 = param_4 + 0x11;
    func_0x00010a35bf90(pppppuVar7,&ppppuStack_b0);
    pppppuVar15 = (undefined8 *****)((ulong)unaff_x23 | 8);
    pppppuVar8 = unaff_x23;
    if (pppppuVar7 != (undefined8 *****)0x0) {
      pppppuVar15 = pppppuVar7 + 5;
      pppppuVar8 = pppppuVar7 + 4;
    }
    ppppuVar12 = *pppppuVar15;
    ppppuVar13 = *pppppuVar8;
  }
  FUN_10a0d6f88(&ppppuStack_100,param_2[0x2e],ppppuVar13,ppppuVar12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppppuStack_100 + 0x2a,param_2 + 0x2a);
  uVar1 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(ppppuStack_100 + 0x30) & 0xfffc;
  *(ushort *)(ppppuStack_100 + 0x30) = uVar2 | *(ushort *)(ppppuStack_100 + 0x30) & 1 | uVar1;
  *(ushort *)(ppppuStack_100 + 0x30) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x30) & 1;
  ppppuStack_b0 = ppppuStack_100;
  ppppuStack_a8 = ppppuStack_f8;
  if ((undefined8 *****)ppppuStack_f8 != (undefined8 *****)0x0) {
    pppppuVar7 = (undefined8 *****)(ppppuStack_f8 + 1);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
      if (bVar5) {
        *pppppuVar7 = (undefined8 ****)((long)*pppppuVar7 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a3c7ce8(param_3,&ppppuStack_b0);
  ppppuVar13 = ppppuStack_a8;
  if ((undefined8 *****)ppppuStack_a8 != (undefined8 *****)0x0) {
    pppppuVar7 = (undefined8 *****)(ppppuStack_a8 + 1);
    do {
      ppppuVar12 = *pppppuVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
      if (bVar5) {
        *pppppuVar7 = (undefined8 ****)((long)ppppuVar12 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppuVar12 == (undefined8 ****)0x0) {
      (*(code *)(*ppppuStack_a8)[2])(ppppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar13);
    }
  }
  *(undefined4 *)((long)ppppuStack_100 + 500) = *(undefined4 *)((long)param_2 + 500);
  ppppuVar13 = (undefined8 ****)param_2[0x3f];
  *(undefined4 *)(ppppuStack_100 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  ppppuStack_100[0x3f] = ppppuVar13;
  *(undefined2 *)((long)ppppuStack_100 + 0x204) = *(undefined2 *)((long)param_2 + 0x204);
  ppppuStack_100[0x41] = param_2[0x41];
  *(undefined4 *)((long)ppppuStack_100 + 0x214) = *(undefined4 *)((long)param_2 + 0x214);
  *(undefined4 *)(ppppuStack_100 + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined1 *)(ppppuStack_100 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  ppppuVar13 = (undefined8 ****)param_2[0x44];
  ppppuStack_100[0x45] = param_2[0x45];
  ppppuStack_100[0x44] = ppppuVar13;
  ppppuStack_100[0x46] = param_2[0x46];
  *(undefined4 *)(ppppuStack_100 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined2 *)(ppppuStack_100 + 0x47) = *(undefined2 *)(param_2 + 0x47);
  uVar16 = *(undefined8 *)((long)param_2 + 0x23c);
  *(undefined8 *)((long)ppppuStack_100 + 0x244) = *(undefined8 *)((long)param_2 + 0x244);
  *(undefined8 *)((long)ppppuStack_100 + 0x23c) = uVar16;
  *(undefined4 *)((long)ppppuStack_100 + 0x24c) = *(undefined4 *)((long)param_2 + 0x24c);
  *(undefined1 *)(ppppuStack_100 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  *(undefined2 *)((long)ppppuStack_100 + 0x251) = *(undefined2 *)((long)param_2 + 0x251);
  *(undefined4 *)((long)ppppuStack_100 + 0x254) = *(undefined4 *)((long)param_2 + 0x254);
  ppppuVar13 = (undefined8 ****)param_2[99];
  ppppuStack_100[100] = param_2[100];
  ppppuStack_100[99] = ppppuVar13;
  FUN_10a2c703c(ppppuStack_100,*(undefined1 *)((long)param_2 + 0x21c),0);
  FUN_10a2ca8d0(param_2[0x58],ppppuStack_100 + 0x58,param_4);
  FUN_10a2c83e0(ppppuStack_100,*(undefined1 *)(param_2 + 0x4c),0);
  *(undefined1 *)(ppppuStack_100 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined4 *)((long)ppppuStack_100 + 0x284) = *(undefined4 *)((long)param_2 + 0x284);
  *(undefined4 *)(ppppuStack_100 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  FUN_10a2ca8d0(param_2[0x52],ppppuStack_100 + 0x52,param_4);
  FUN_10a2ca8d0(param_2[0x54],ppppuStack_100 + 0x54,param_4);
  pppppuVar7 = param_4;
  FUN_10a2ca8d0(param_2[0x56],ppppuStack_100 + 0x56);
  pppppuVar15 = (undefined8 *****)param_2[0x5e];
  ppppuStack_e0 = ppppuStack_100 + 0x5e;
  ppppuStack_f0 = (undefined8 *****)0x10a2ea208;
  ppuStack_e8 = &PTR_FUN_110bc29c8;
  if (pppppuVar15 == (undefined8 *****)0x0) {
    ppppuStack_b0 = (undefined8 *****)0x0;
    pppppuVar8 = &ppppuStack_b0;
    FUN_10a2e9e64(&ppppuStack_f0);
  }
  else if (param_4 == (undefined8 *****)0x0) {
    FUN_10a2ea178(&ppppuStack_b0,pppppuVar15);
    pppppuVar8 = &ppppuStack_b0;
    FUN_10a2ea0ec(&ppppuStack_f0);
    param_4 = (undefined8 *****)ppppuStack_a8;
    if ((undefined8 *****)ppppuStack_a8 != (undefined8 *****)0x0) {
      pppppuVar11 = (undefined8 *****)(ppppuStack_a8 + 1);
      do {
        ppppuVar13 = *pppppuVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar5) {
          *pppppuVar11 = (undefined8 ****)((long)ppppuVar13 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_10a2ca794:
      param_4 = (undefined8 *****)ppppuStack_a8;
      if (ppppuVar13 == (undefined8 ****)0x0) {
        (*(code *)(*ppppuStack_a8)[2])(ppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
      }
    }
  }
  else {
    unaff_x24 = (undefined8 *****)pppppuVar15[8];
    unaff_x23 = (undefined8 *****)pppppuVar15[9];
    if (*(char *)(param_4 + 0x17) == '\x01') {
      ppppuStack_b0 = (undefined8 *****)0x10a2ea208;
      ppppuStack_a8 = (undefined8 ****)&PTR_FUN_110bc29c8;
      pppppuVar8 = unaff_x24;
      pppppuVar7 = unaff_x23;
      ppppuStack_a0 = ppppuStack_e0;
      FUN_10a069d9c(param_4,unaff_x24,unaff_x23,&ppppuStack_b0);
    }
    else {
      pppppuVar8 = param_4 + 0x11;
      ppppuStack_b0 = unaff_x24;
      ppppuStack_a8 = unaff_x23;
      func_0x00010a35bf90(pppppuVar8,&ppppuStack_b0);
      pppppuVar11 = &ppppuStack_a8;
      pppppuVar3 = &ppppuStack_b0;
      if (pppppuVar8 != (undefined8 *****)0x0) {
        pppppuVar11 = pppppuVar8 + 5;
        pppppuVar3 = pppppuVar8 + 4;
      }
      unaff_x25 = (undefined8 *****)*pppppuVar11;
      unaff_x26 = (undefined8 *****)*pppppuVar3;
      if ((unaff_x24 == unaff_x26) && (unaff_x23 == unaff_x25)) {
        FUN_10a2ea178(&ppppuStack_b0,pppppuVar15);
        pppppuVar8 = &ppppuStack_b0;
        FUN_10a2ea0ec(&ppppuStack_f0);
        param_4 = (undefined8 *****)ppppuStack_a8;
        if ((undefined8 *****)ppppuStack_a8 != (undefined8 *****)0x0) {
          pppppuVar11 = (undefined8 *****)(ppppuStack_a8 + 1);
          do {
            ppppuVar13 = *pppppuVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
            if (bVar5) {
              *pppppuVar11 = (undefined8 ****)((long)ppppuVar13 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a2ca794;
        }
        goto LAB_10a2ca7f4;
      }
      ppppuStack_b0 = ppppuStack_f0;
      (*(code *)ppuStack_e8[3])(&ppppuStack_a8,&ppuStack_e8);
      pppppuVar8 = unaff_x26;
      pppppuVar7 = unaff_x25;
      FUN_10a069d9c(param_4,unaff_x26,unaff_x25,&ppppuStack_b0);
    }
    pppppuVar15 = &ppppuStack_b0;
    (*(code *)*ppppuStack_a8)(&ppppuStack_a8);
  }
LAB_10a2ca7f4:
  pppuVar9 = &ppuStack_e8;
  (*(code *)*ppuStack_e8)();
  ppppuVar13 = (undefined8 ****)param_2[0x60];
  param_1[1] = ppppuStack_f8;
  *param_1 = ppppuStack_100;
  ppppuStack_100[0x60] = ppppuVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar17._8_8_ = pppppuVar8;
    auVar17._0_8_ = pppuVar9;
    return auVar17;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&ppppuStack_b0);
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  FUN_10a0d71ec(&ppppuStack_100);
  pppuVar10 = pppuVar9;
  __Unwind_Resume();
  pcStack_108 = FUN_10a2ca8d0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_1d8 = (undefined8 *****)0x10a2ea000;
  ppuStack_1d0 = &PTR_FUN_110bc29a8;
  ppppuStack_1c8 = pppppuVar8;
  ppppuStack_150 = unaff_x26;
  ppppuStack_148 = unaff_x25;
  ppppuStack_140 = unaff_x24;
  ppppuStack_138 = unaff_x23;
  ppppuStack_130 = pppppuVar15;
  ppppuStack_128 = param_4;
  pppuStack_120 = param_2;
  pppuStack_118 = pppuVar9;
  puStack_110 = &stack0xfffffffffffffff0;
  if (pppuVar10 == (undefined ***)0x0) {
    ppppuStack_198 = (undefined8 *****)0x0;
    pppppuVar15 = &ppppuStack_198;
    FUN_10a2e9e64(&ppppuStack_1d8,pppppuVar15);
    goto LAB_10a2caa7c;
  }
  if (pppppuVar7 == (undefined8 *****)0x0) {
    FUN_10a2e9f70(&ppppuStack_198,pppuVar10);
    pppppuVar15 = &ppppuStack_198;
    FUN_10a2e9ee4(&ppppuStack_1d8,pppppuVar15);
    if ((undefined8 ****)pppuStack_190 == (undefined8 ****)0x0) goto LAB_10a2caa7c;
    ppppuVar13 = (undefined8 ****)(pppuStack_190 + 1);
    do {
      pppuVar14 = *ppppuVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppuVar13,0x10);
      if (bVar5) {
        *ppppuVar13 = (undefined8 ***)((long)pppuVar14 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_10a2caa60:
    pppuVar6 = pppuStack_190;
    if (pppuVar14 == (undefined8 ***)0x0) {
      (*(code *)(*pppuStack_190)[2])(pppuStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
    }
  }
  else {
    pppppuVar11 = (undefined8 *****)pppuVar10[8];
    ppppuVar13 = (undefined8 ****)pppuVar10[9];
    if (*(char *)(pppppuVar7 + 0x17) == '\x01') {
      ppppuStack_198 = (undefined8 *****)0x10a2ea000;
      pppuStack_190 = (undefined8 ***)&PTR_FUN_110bc29a8;
      ppppuStack_188 = pppppuVar8;
      FUN_10a069d9c(pppppuVar7,pppppuVar11,ppppuVar13,&ppppuStack_198);
      pppppuVar15 = pppppuVar11;
    }
    else {
      pppppuVar8 = pppppuVar7 + 0x11;
      ppppuStack_198 = pppppuVar11;
      pppuStack_190 = ppppuVar13;
      func_0x00010a35bf90(pppppuVar8,&ppppuStack_198);
      pppppuVar3 = (undefined8 *****)&pppuStack_190;
      pppppuVar15 = &ppppuStack_198;
      if (pppppuVar8 != (undefined8 *****)0x0) {
        pppppuVar3 = pppppuVar8 + 5;
        pppppuVar15 = pppppuVar8 + 4;
      }
      ppppuVar12 = *pppppuVar3;
      pppppuVar15 = (undefined8 *****)*pppppuVar15;
      if (pppppuVar11 == pppppuVar15 && ppppuVar13 == ppppuVar12) {
        FUN_10a2e9f70(&ppppuStack_198,pppuVar10);
        pppppuVar15 = &ppppuStack_198;
        FUN_10a2e9ee4(&ppppuStack_1d8,pppppuVar15);
        if ((undefined8 ****)pppuStack_190 == (undefined8 ****)0x0) goto LAB_10a2caa7c;
        ppppuVar13 = (undefined8 ****)(pppuStack_190 + 1);
        do {
          pppuVar14 = *ppppuVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppuVar13,0x10);
          if (bVar5) {
            *ppppuVar13 = (undefined8 ***)((long)pppuVar14 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_10a2caa60;
      }
      ppppuStack_198 = ppppuStack_1d8;
      (*(code *)ppuStack_1d0[3])(&pppuStack_190,&ppuStack_1d0);
      FUN_10a069d9c(pppppuVar7,pppppuVar15,ppppuVar12,&ppppuStack_198);
    }
    (*(code *)*pppuStack_190)(&pppuStack_190);
  }
LAB_10a2caa7c:
  pppuVar9 = &ppuStack_1d0;
  (*(code *)*ppuStack_1d0)(pppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    func_0x00010a05248c(&ppppuStack_198);
    (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
    __Unwind_Resume(pppuVar9);
    auVar19._8_8_ = 0x17;
    auVar19._0_8_ = &UNK_10f64c5c1;
    return auVar19;
  }
  auVar18._8_8_ = pppppuVar15;
  auVar18._0_8_ = pppuVar9;
  return auVar18;
}



/* Entry: 10a2ca8d0; end: 10a2cab13;  */

undefined1  [16] FUN_10a2ca8d0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined8 *****pppppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *****pppppuVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 ****ppppuStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_d8 = (undefined8 *****)0x10a2ea000;
  ppuStack_d0 = &PTR_FUN_110bc29a8;
  uStack_c8 = param_2;
  if (param_1 == 0) {
    ppppuStack_98 = (undefined8 *****)0x0;
    pppppuVar9 = &ppppuStack_98;
    FUN_10a2e9e64(&ppppuStack_d8,pppppuVar9);
    goto LAB_10a2caa7c;
  }
  if (param_3 == 0) {
    FUN_10a2e9f70(&ppppuStack_98,param_1);
    pppppuVar9 = &ppppuStack_98;
    FUN_10a2e9ee4(&ppppuStack_d8,pppppuVar9);
    if (ppuStack_90 == (undefined **)0x0) goto LAB_10a2caa7c;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_10a2caa60:
    ppuVar1 = ppuStack_90;
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
    }
  }
  else {
    pppppuVar6 = *(undefined8 ******)(param_1 + 0x40);
    ppuVar1 = *(undefined ***)(param_1 + 0x48);
    if (*(char *)(param_3 + 0xb8) == '\x01') {
      ppppuStack_98 = (undefined8 *****)0x10a2ea000;
      ppuStack_90 = &PTR_FUN_110bc29a8;
      uStack_88 = param_2;
      FUN_10a069d9c(param_3,pppppuVar6,ppuVar1,&ppppuStack_98);
      pppppuVar9 = pppppuVar6;
    }
    else {
      lVar4 = param_3 + 0x88;
      ppppuStack_98 = pppppuVar6;
      ppuStack_90 = ppuVar1;
      func_0x00010a35bf90(lVar4,&ppppuStack_98);
      pppuVar5 = &ppuStack_90;
      pppppuVar9 = &ppppuStack_98;
      if (lVar4 != 0) {
        pppuVar5 = (undefined ***)(lVar4 + 0x28);
        pppppuVar9 = (undefined8 *****)(lVar4 + 0x20);
      }
      ppuVar8 = *pppuVar5;
      pppppuVar9 = (undefined8 *****)*pppppuVar9;
      if (pppppuVar6 == pppppuVar9 && ppuVar1 == ppuVar8) {
        FUN_10a2e9f70(&ppppuStack_98,param_1);
        pppppuVar9 = &ppppuStack_98;
        FUN_10a2e9ee4(&ppppuStack_d8,pppppuVar9);
        if (ppuStack_90 == (undefined **)0x0) goto LAB_10a2caa7c;
        ppuVar1 = ppuStack_90 + 1;
        do {
          puVar7 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_10a2caa60;
      }
      ppppuStack_98 = ppppuStack_d8;
      (*(code *)ppuStack_d0[3])(&ppuStack_90,&ppuStack_d0);
      FUN_10a069d9c(param_3,pppppuVar9,ppuVar8,&ppppuStack_98);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
  }
LAB_10a2caa7c:
  pppuVar5 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)(pppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a05248c(&ppppuStack_98);
    (*(code *)*ppuStack_d0)(&ppuStack_d0);
    __Unwind_Resume(pppuVar5);
    auVar11._8_8_ = 0x17;
    auVar11._0_8_ = &UNK_10f64c5c1;
    return auVar11;
  }
  auVar10._8_8_ = pppppuVar9;
  auVar10._0_8_ = pppuVar5;
  return auVar10;
}



/* Entry: 10a2cab14; end: 10a2cabe3;  */

undefined1  [16] FUN_10a2cab14(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f64c5c1;
  return auVar1;
}



/* Entry: 10a2cabe4; end: 10a2caccb;  */

void FUN_10a2cabe4(undefined8 param_1)

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
  puStack_80 = &UNK_10f64b3ce;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f64b3ce;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a2caccc(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f64b959;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f64b3ce;
  uStack_38 = 0;
  FUN_10a2ea3f0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f64b3d5;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f64b3ce;
  uStack_38 = 0;
  func_0x00010a2ea6c4(param_1,&puStack_98);
  FUN_10a2ea8c8(param_1);
  return;
}



/* Entry: 10a2caccc; end: 10a2cada3;  */

/* WARNING: Removing unreachable block (ram,0x00010a2cad64) */

undefined1  [16] FUN_10a2caccc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f64c5c1,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a2ea2f4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a2cada4; end: 10a2caeb3;  */

void FUN_10a2cada4(long param_1,long *param_2)

{
  FUN_10a422a34();
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x4f0),param_2,&PTR_DAT_110bbcac0);
                    /* WARNING: Could not recover jumptable at 0x00010a2cadf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x4f4),param_2,&PTR_DAT_110bbcae0);
  return;
}



/* Entry: 10a2caeb4; end: 10a2cb15b;  */

void FUN_10a2caeb4(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    lStack_60 = param_2[8];
    lVar11 = param_4 + 0x88;
    func_0x00010a35bf90(lVar11,&lStack_60);
    puVar4 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar10 = &lStack_60;
    if (lVar11 != 0) {
      puVar4 = (undefined8 *)(lVar11 + 0x28);
      plVar10 = (long *)(lVar11 + 0x20);
    }
    uVar9 = *puVar4;
    plVar10 = (long *)*plVar10;
  }
  lVar11 = param_2[0x2e];
  FUN_10a3dd220(lVar11);
  FUN_10a2ea984(lVar11,plVar10,uVar9);
  plVar10 = (long *)0x28;
  __Znwm();
  plVar7 = plVar10 + 1;
  *plVar7 = 0;
  *plVar10 = (long)&PTR_FUN_110bc29f8;
  plVar10[2] = 0;
  plVar10[3] = lVar11;
  plVar10[4] = (long)FUN_10a3df8cc;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = *plVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar10 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar10;
    }
    else {
      if (*(long *)(*(long *)(lVar11 + 0x30) + 8) != -1) goto LAB_10a2cb020;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = *plVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar10 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar8 = *plVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
LAB_10a2cb020:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar11 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar11 + 0x180) & 0xfffc;
  *(ushort *)(lVar11 + 0x180) = uVar3 | *(ushort *)(lVar11 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar11 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_60 = lVar11;
  plStack_58 = plVar10;
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar11 + 0x20c) = 0;
  *(int *)(lVar11 + 0x210) = (int)plVar7;
  FUN_10a422d34(param_2,lVar11,param_4);
  *(long *)(lVar11 + 0x4f0) = param_2[0x9e];
  *param_1 = lVar11;
  param_1[1] = (long)plVar10;
  return;
}



/* Entry: 10a2cb15c; end: 10a2cb3c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a2cb2d0) */

void FUN_10a2cb15c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_a8,uVar1 + 10,&ppuStack_c0);
  pppuVar2 = (undefined8 ***)appuStack_a8[0];
  if (-1 < cStack_91) {
    pppuVar2 = appuStack_a8;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  puVar5 = (undefined8 *)((long)pppuVar2 + uVar1);
  *puVar5 = 0x737569646172202c;
  *(undefined2 *)(puVar5 + 1) = 0x203a;
  *(undefined1 *)((long)puVar5 + 10) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_c0,*(undefined4 *)(param_2 + 0x4f0));
  pppuVar2 = (undefined8 ***)ppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    pppuVar2 = &ppuStack_c0;
  }
  pppuVar3 = appuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_b8);
  puStack_88 = pppuVar3[1];
  puStack_90 = *pppuVar3;
  puStack_80 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f64b6b5,0xd);
  uStack_68 = ppuVar4[1];
  uStack_70 = *ppuVar4;
  uStack_60 = ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_d8,*(undefined4 *)(param_2 + 0x4f4));
  pppuVar2 = (undefined8 ***)ppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppuVar2 = &ppuStack_d8;
  }
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_d0);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(ppuStack_d8);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(ppuStack_c0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(appuStack_a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a2cb3c4; end: 10a2cb493;  */

/* WARNING: Removing unreachable block (ram,0x00010a2cb2d0) */

void FUN_10a2cb3c4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_a8,uVar1 + 10,&ppuStack_c0);
  pppuVar2 = (undefined8 ***)appuStack_a8[0];
  if (-1 < cStack_91) {
    pppuVar2 = appuStack_a8;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  puVar5 = (undefined8 *)((long)pppuVar2 + uVar1);
  *puVar5 = 0x737569646172202c;
  *(undefined2 *)(puVar5 + 1) = 0x203a;
  *(undefined1 *)((long)puVar5 + 10) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_c0,*(undefined4 *)(param_2 + 0x4e0));
  pppuVar2 = (undefined8 ***)ppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    pppuVar2 = &ppuStack_c0;
  }
  pppuVar3 = appuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_b8);
  puStack_88 = pppuVar3[1];
  puStack_90 = *pppuVar3;
  puStack_80 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f64b6b5,0xd);
  uStack_68 = ppuVar4[1];
  uStack_70 = *ppuVar4;
  uStack_60 = ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_d8,*(undefined4 *)(param_2 + 0x4e4));
  pppuVar2 = (undefined8 ***)ppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppuVar2 = &ppuStack_d8;
  }
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_d0);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(ppuStack_d8);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(ppuStack_c0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(appuStack_a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a2cb494; end: 10a2cb79b;  */

void FUN_10a2cb494(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c5e5,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bbfec8;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
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
    ppuStack_b0 = &PTR_DAT_110bbfec8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64b96b,FUN_10a2eab10,FUN_10a2eabcc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b976,FUN_10a2ead9c,FUN_10a2eae58);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b981,FUN_10a2eaf58,FUN_10a2eb014);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f638ab2,FUN_10a2eb114,FUN_10a2eb204);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64b98f,FUN_10a2eb47c,FUN_10a2eb548);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c5e5,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2cb780);
  (*pcVar6)();
}



/* Entry: 10a2cb79c; end: 10a2cc33f;  */

void FUN_10a2cb79c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b99e;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f64b3ce;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9a9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8(param_1,&puStack_98,1);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9b1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9b9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9c1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9c9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9d1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9d9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9e9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64b9f9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba09;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba19;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba29;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba39;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba49;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba59;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba69;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba79;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba89;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64ba99;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64bab1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64bac9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64bae1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64baf9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64bb11;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a2cbde8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a2cc340; end: 10a2cc397;  */

ulong FUN_10a2cc340(ulong param_1,undefined8 *param_2)

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



/* Entry: 10a2cc398; end: 10a2cc3ef;  */

ulong FUN_10a2cc398(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a2eb630(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a2cc3f0; end: 10a2cc4a3;  */

void FUN_10a2cc3f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x46] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x49) = 0x100;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  FUN_10a3c575c(param_1,&PTR_PTR_110bbcde8,param_2,param_3);
  *param_1 = &PTR_DAT_110bbcb18;
  param_1[2] = &PTR_FUN_110bbcc30;
  param_1[7] = &PTR_DAT_110bbcc88;
  param_1[0xd] = &PTR_DAT_110bbcca8;
  param_1[0x46] = &PTR_DAT_110bbcda8;
  param_1[0x16] = &PTR_FUN_110bbcd18;
  param_1[0x17] = &PTR_FUN_110bbcd48;
  param_1[0x3e] = 0x100000001;
  *(undefined4 *)(param_1 + 0x3f) = 2;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x22c) = 0x3f800000;
  return;
}



/* Entry: 10a2cc4a4; end: 10a2cc4bf;  */

void FUN_10a2cc4a4(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  float *pfVar12;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  float *pfVar13;
  
  if (0x53 < *(int *)(*(long *)(*(long *)(param_5 + 0x170) + 0xa20) + 0x18)) {
    return;
  }
  plVar7 = *(long **)(param_5 + 0x208);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar14 = *(long *)(param_5 + 0x168);
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar7 == (long *)0x0) {
    return;
  }
  lStack_70 = *(long *)(param_5 + 0x200);
  plStack_68 = plVar7;
  if (lStack_70 == 0) goto LAB_10a2ccf6c;
  uVar11 = *(undefined8 *)(lStack_70 + 0x140);
  if (*(int *)(param_5 + 0x1f0) == 2) {
    func_0x00010a2cd08c(uVar11);
    fVar15 = param_3 * param_1 + param_2 * param_4;
    fVar16 = -(param_4 * param_1) + param_2 * param_3;
    param_3 = 0.5 - (param_1 * param_1 + param_2 * param_2);
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    param_3 = param_3 + param_3;
    param_4 = fVar15 * fVar15 + fVar16 * fVar16 + param_3 * param_3;
LAB_10a2cc5c0:
    param_4 = SQRT(param_4);
    if (param_4 < 1.1920929e-07) goto LAB_10a2ccf6c;
    fVar15 = fVar15 / param_4;
    fVar17 = fVar16 / param_4;
    fVar18 = param_3 / param_4;
  }
  else {
    fVar15 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar16 = 0.0;
    if (*(int *)(param_5 + 0x1f0) == 1) {
      FUN_10a2cd058(uVar11);
      fVar17 = fVar15;
      fVar18 = fVar16;
      fVar21 = param_3;
      FUN_10a2cd058(*(undefined8 *)(param_5 + 0x178));
      fVar15 = fVar15 - fVar17;
      fVar16 = fVar16 - fVar18;
      param_3 = param_3 - fVar21;
      param_4 = param_3 * param_3 + fVar15 * fVar15 + fVar16 * fVar16;
      goto LAB_10a2cc5c0;
    }
  }
  iVar2 = *(int *)(param_5 + 0x1f8);
  fVar16 = 0.0;
  fVar21 = 0.0;
  if (iVar2 < 5) {
    if (iVar2 < 3) {
      fVar23 = 0.0;
      fVar21 = 1.0;
      fVar16 = fVar21;
      if (iVar2 != 2) {
        fVar16 = 0.0;
      }
      fVar22 = 0.0;
      if (iVar2 != 1) {
        fVar21 = 0.0;
        fVar22 = fVar16;
      }
    }
    else if (iVar2 == 3) {
      fVar23 = 1.0;
      fVar22 = 0.0;
    }
    else {
      fVar19 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      if (iVar2 == 4) {
        func_0x00010a2cd08c(uVar11);
        fVar21 = 0.5 - (param_3 * param_3 + fVar19 * fVar19);
        fVar22 = fVar19 * fVar16 + param_4 * param_3;
        fVar23 = -(fVar19 * param_4) + param_3 * fVar16;
        goto LAB_10a2cc7d4;
      }
    }
  }
  else if (iVar2 < 7) {
    if (iVar2 == 5) {
      fVar23 = fVar18;
      func_0x00010a2cd08c(uVar11);
      fVar21 = -(param_3 * param_4) + fVar16 * fVar23;
      fVar22 = 0.5 - (fVar16 * fVar16 + param_3 * param_3);
      fVar23 = fVar23 * param_3 + param_4 * fVar16;
LAB_10a2cc7d4:
      fVar21 = fVar21 + fVar21;
      fVar23 = fVar23 + fVar23;
      fVar22 = fVar22 + fVar22;
    }
    else {
      fVar19 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      if (iVar2 == 6) {
        func_0x00010a2cd08c(uVar11);
        fVar21 = param_3 * fVar16 + fVar19 * param_4;
        fVar22 = -(param_4 * fVar16) + fVar19 * param_3;
        fVar23 = 0.5 - (fVar16 * fVar16 + fVar19 * fVar19);
        fVar21 = fVar21 + fVar21;
        fVar23 = fVar23 + fVar23;
        fVar22 = fVar22 + fVar22;
      }
    }
  }
  else if (iVar2 == 7) {
    if (*(long *)(lVar14 + 0x188) == 0) {
      fVar22 = *(float *)(param_5 + 0x220);
      fVar23 = *(float *)(param_5 + 0x224);
      fVar16 = *(float *)(param_5 + 0x228);
      fVar21 = *(float *)(param_5 + 0x22c);
    }
    else {
      fVar19 = fVar18;
      func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
      fVar24 = *(float *)(param_5 + 0x220);
      fVar25 = *(float *)(param_5 + 0x224);
      fVar26 = *(float *)(param_5 + 0x228);
      fVar27 = *(float *)(param_5 + 0x22c);
      fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
      fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
      fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
      fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
    }
    fVar24 = fVar16 * -0.0 + fVar23 * 0.0;
    fVar19 = fVar16 + fVar22 * -0.0;
    fVar26 = fVar22 * 0.0 - fVar23;
    fVar25 = fVar21 * fVar24 + -(fVar19 * fVar16) + fVar26 * fVar23;
    fVar16 = fVar19 * fVar21 + -(fVar26 * fVar22) + fVar24 * fVar16;
    fVar22 = fVar26 * fVar21 + -(fVar24 * fVar23) + fVar19 * fVar22;
    fVar21 = fVar25 + fVar25 + 1.0;
    fVar23 = fVar22 + fVar22 + 0.0;
    fVar22 = fVar16 + fVar16 + 0.0;
  }
  else if (iVar2 == 8) {
    if (*(long *)(lVar14 + 0x188) == 0) {
      fVar22 = *(float *)(param_5 + 0x220);
      fVar23 = *(float *)(param_5 + 0x224);
      fVar16 = *(float *)(param_5 + 0x228);
      fVar21 = *(float *)(param_5 + 0x22c);
    }
    else {
      fVar19 = fVar18;
      func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
      fVar24 = *(float *)(param_5 + 0x220);
      fVar25 = *(float *)(param_5 + 0x224);
      fVar26 = *(float *)(param_5 + 0x228);
      fVar27 = *(float *)(param_5 + 0x22c);
      fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
      fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
      fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
      fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
    }
    fVar19 = fVar23 * 0.0 - fVar16;
    fVar26 = fVar22 * -0.0 + fVar16 * 0.0;
    fVar25 = fVar22 + fVar23 * -0.0;
    fVar24 = fVar19 * fVar21 + -(fVar26 * fVar16) + fVar25 * fVar23;
    fVar16 = fVar26 * fVar21 + -(fVar25 * fVar22) + fVar19 * fVar16;
    fVar22 = fVar21 * fVar25 + -(fVar19 * fVar23) + fVar26 * fVar22;
    fVar21 = fVar24 + fVar24 + 0.0;
    fVar23 = fVar22 + fVar22 + 0.0;
    fVar22 = fVar16 + fVar16 + 1.0;
  }
  else {
    fVar19 = 0.0;
    fVar23 = 0.0;
    fVar22 = 0.0;
    if (iVar2 == 9) {
      if (*(long *)(lVar14 + 0x188) == 0) {
        fVar22 = *(float *)(param_5 + 0x220);
        fVar23 = *(float *)(param_5 + 0x224);
        fVar16 = *(float *)(param_5 + 0x228);
        fVar21 = *(float *)(param_5 + 0x22c);
      }
      else {
        func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
        fVar24 = *(float *)(param_5 + 0x220);
        fVar25 = *(float *)(param_5 + 0x224);
        fVar26 = *(float *)(param_5 + 0x228);
        fVar27 = *(float *)(param_5 + 0x22c);
        fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
        fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
        fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
        fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
      }
      fVar24 = fVar23 + fVar16 * -0.0;
      fVar26 = fVar16 * 0.0 - fVar22;
      fVar19 = fVar23 * -0.0 + fVar22 * 0.0;
      fVar25 = fVar21 * fVar24 + -(fVar26 * fVar16) + fVar19 * fVar23;
      fVar16 = fVar26 * fVar21 + -(fVar19 * fVar22) + fVar24 * fVar16;
      fVar22 = fVar21 * fVar19 + -(fVar24 * fVar23) + fVar26 * fVar22;
      fVar21 = fVar25 + fVar25 + 0.0;
      fVar23 = fVar22 + fVar22 + 1.0;
      fVar22 = fVar16 + fVar16 + 0.0;
    }
  }
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar24 = (float)uVar11 / SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar18 * fVar18);
  fVar25 = (float)((ulong)uVar11 >> 0x20) /
           SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23);
  fVar16 = fVar15 * fVar24;
  fVar19 = fVar17 * fVar24;
  fVar24 = fVar18 * fVar24;
  if (1.1920929e-07 <=
      ABS(1.0 - ABS(fVar24 * fVar23 * fVar25 + fVar16 * fVar21 * fVar25 + fVar19 * fVar22 * fVar25))
     ) {
    fVar26 = -(fVar22 * fVar18) + fVar23 * fVar17;
    fVar25 = -(fVar23 * fVar15) + fVar21 * fVar18;
    fVar21 = -(fVar21 * fVar17) + fVar22 * fVar15;
    fVar22 = 1.0 / SQRT(fVar21 * fVar21 + fVar26 * fVar26 + fVar25 * fVar25);
    fVar23 = -(fVar17 * fVar21 * fVar22) + fVar18 * fVar25 * fVar22;
    fVar18 = -(fVar18 * fVar26 * fVar22) + fVar15 * fVar21 * fVar22;
    fVar15 = -(fVar15 * fVar25 * fVar22) + fVar17 * fVar26 * fVar22;
    fStack_f0 = -(fVar18 * fVar24) + fVar15 * fVar19;
    fStack_e0 = -(fVar15 * fVar16) + fVar23 * fVar24;
    fStack_d0 = -(fVar23 * fVar19) + fVar18 * fVar16;
    fVar15 = 1.0 / SQRT(fStack_d0 * fStack_d0 + fStack_f0 * fStack_f0 + fStack_e0 * fStack_e0);
    fStack_f0 = fStack_f0 * fVar15;
    fStack_e0 = fStack_e0 * fVar15;
    fStack_d0 = fStack_d0 * fVar15;
    fStack_d8 = -fVar19;
    fStack_ec = -(fVar19 * fStack_d0) + fVar24 * fStack_e0;
    fStack_c8 = -fVar24;
    fStack_dc = -(fVar24 * fStack_f0) + fVar16 * fStack_d0;
    fStack_e8 = -fVar16;
    fStack_cc = -(fVar16 * fStack_e0) + fVar19 * fStack_f0;
    fStack_e4 = 0.0;
    fStack_d4 = 0.0;
    fStack_c4 = 0.0;
    uStack_c0 = CONCAT44(-(fStack_cc * 0.0 + fStack_ec * 0.0 + fStack_dc * 0.0),
                         -(fStack_d0 * 0.0 + fStack_f0 * 0.0 + fStack_e0 * 0.0));
    fVar15 = fVar16 * 0.0 + fVar19 * 0.0;
    uVar20 = (ulong)(uint)fVar15;
    uStack_b8 = CONCAT44(0x3f800000,fVar24 * 0.0 + fVar15);
    func_0x0001094f5708(&uStack_b0,&fStack_f0);
    uVar8 = 0;
    piVar10 = (int *)&UNK_110bc26e0;
    while( true ) {
      for (; piVar9 = (int *)(&UNK_110bc24a0 + uVar8 * 0x18), *piVar9 < *(int *)(param_5 + 500);
          uVar8 = uVar8 * 2 + 2) {
        piVar9 = piVar10;
        if (10 < uVar8) goto LAB_10a2ccbd4;
      }
      if (0xb < uVar8) break;
      uVar8 = uVar8 << 1 | 1;
      piVar10 = piVar9;
    }
LAB_10a2ccbd4:
    if ((piVar9 == (int *)&UNK_110bc26e0) || (*(int *)(param_5 + 500) < *piVar9)) {
      piVar9 = (int *)&UNK_110bc26e0;
    }
    if (*(long *)(piVar9 + 4) != 0) {
      pfVar12 = (float *)(*(long *)(piVar9 + 2) + *(long *)(piVar9 + 4) * 0x10);
      do {
        fVar16 = (float)uVar20;
        pfVar13 = pfVar12 + -4;
        fVar15 = *pfVar13 * 0.017453292;
        ___sincosf_stret();
        fVar17 = pfVar12[-3];
        fVar18 = pfVar12[-2];
        fVar22 = pfVar12[-1];
        fVar21 = 1.0 / SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar22 * fVar22);
        fVar17 = fVar17 * fVar21;
        fVar18 = fVar18 * fVar21;
        fVar22 = fVar22 * fVar21;
        fVar21 = 1.0 - fVar16;
        fVar23 = fVar21 * fVar17;
        fVar19 = fVar21 * fVar18;
        fVar21 = fVar21 * fVar22;
        fVar24 = fVar16 + fVar17 * fVar23;
        fVar25 = fVar15 * fVar22 + fVar18 * fVar23;
        fStack_e8 = -(fVar15 * fVar18) + fVar22 * fVar23;
        fVar23 = -(fVar15 * fVar22) + fVar17 * fVar19;
        fVar26 = fVar16 + fVar18 * fVar19;
        fStack_d8 = fVar15 * fVar17 + fVar22 * fVar19;
        fVar19 = fVar15 * fVar18 + fVar17 * fVar21;
        fVar15 = -(fVar15 * fVar17) + fVar18 * fVar21;
        fVar16 = fVar16 + fVar22 * fVar21;
        fVar17 = fVar24 * 0.0;
        fVar21 = fVar25 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_e4 = fStack_e8 * 0.0;
        fStack_f0 = fStack_e4 + fVar24 + fVar21;
        fStack_ec = fStack_e4 + fVar25 + fVar17;
        fStack_e8 = fStack_e8 + fVar18;
        fStack_e4 = fStack_e4 + fVar18;
        fVar17 = fVar23 * 0.0;
        fVar21 = fVar26 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_d4 = fStack_d8 * 0.0;
        fStack_e0 = fStack_d4 + fVar23 + fVar21;
        fStack_dc = fStack_d4 + fVar26 + fVar17;
        fStack_d8 = fStack_d8 + fVar18;
        fStack_d4 = fStack_d4 + fVar18;
        fVar17 = fVar19 * 0.0;
        fVar21 = fVar15 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_c4 = fVar16 * 0.0;
        fStack_d0 = fStack_c4 + fVar19 + fVar21;
        fStack_cc = fStack_c4 + fVar15 + fVar17;
        fStack_c8 = fVar16 + fVar18;
        fStack_c4 = fStack_c4 + fVar18;
        uStack_b8 = 0x3f80000000000000;
        uStack_c0 = 0;
        func_0x000109519fd0(&uStack_130,&uStack_b0,&fStack_f0);
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        uStack_98 = uStack_118;
        uStack_a0 = uStack_120;
        uStack_88 = uStack_108;
        uStack_90 = uStack_110;
        uStack_78 = uStack_f8;
        uStack_80 = uStack_100;
        pfVar12 = pfVar13;
        uVar20 = uStack_100;
      } while (pfVar13 != *(float **)(piVar9 + 2));
    }
    fVar21 = ((float)uStack_b0 - uStack_a0._4_4_) - (float)uStack_88;
    fVar16 = (uStack_a0._4_4_ - (float)uStack_b0) - (float)uStack_88;
    fVar17 = ((float)uStack_88 - (float)uStack_b0) - uStack_a0._4_4_;
    fVar18 = (float)uStack_b0 + uStack_a0._4_4_ + (float)uStack_88;
    fVar15 = fVar21;
    if (fVar21 <= fVar18) {
      fVar15 = fVar18;
    }
    bVar5 = 2;
    if (fVar16 <= fVar15) {
      fVar16 = fVar15;
      bVar5 = fVar18 < fVar21;
    }
    bVar6 = 3;
    if (fVar17 <= fVar16) {
      fVar17 = fVar16;
      bVar6 = bVar5;
    }
    fVar19 = 1.0;
    fVar25 = SQRT(fVar17 + 1.0) * 0.5;
    fVar23 = 0.25 / fVar25;
    fVar22 = ((float)uStack_90 - (float)uStack_a8) * fVar23;
    fVar26 = (uStack_b0._4_4_ + (float)uStack_a0) * fVar23;
    fVar27 = ((float)uStack_98 + uStack_90._4_4_) * fVar23;
    fVar21 = (uStack_b0._4_4_ - (float)uStack_a0) * fVar23;
    fVar24 = ((float)uStack_a8 + (float)uStack_90) * fVar23;
    fVar15 = fVar22;
    fVar16 = fVar27;
    fVar17 = fVar25;
    fVar18 = fVar26;
    if (bVar6 != 2) {
      fVar15 = fVar21;
      fVar16 = fVar25;
      fVar17 = fVar27;
      fVar18 = fVar24;
    }
    fVar23 = ((float)uStack_98 - uStack_90._4_4_) * fVar23;
    fVar27 = fVar25;
    if (bVar6 != 0) {
      fVar27 = fVar23;
      fVar21 = fVar24;
      fVar22 = fVar26;
      fVar23 = fVar25;
    }
    if (bVar6 < 2) {
      fVar15 = fVar27;
      fVar16 = fVar21;
      fVar17 = fVar22;
      fVar18 = fVar23;
    }
    fVar22 = fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15;
    fVar21 = 0.0;
    if (fVar22 == 0.0) {
      fVar18 = 0.0;
      fVar17 = 0.0;
      fVar16 = 0.0;
    }
    else {
      fVar22 = 1.0 / SQRT(fVar22);
      fVar19 = fVar15 * fVar22;
      fVar18 = fVar18 * fVar22;
      fVar17 = fVar17 * fVar22;
      fVar16 = fVar16 * fVar22;
    }
    fVar15 = *(float *)(param_5 + 0x21c);
    fVar22 = *(float *)(param_5 + 0x210);
    fVar23 = *(float *)(param_5 + 0x214);
    fVar24 = *(float *)(param_5 + 0x218);
    fVar25 = fVar15 * fVar15 + fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
    if (fVar25 == 0.0) {
      fVar15 = 1.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar25 = 1.0 / SQRT(fVar25);
      fVar15 = fVar15 * fVar25;
      fVar21 = fVar22 * fVar25;
      fVar23 = fVar23 * fVar25;
      fVar24 = fVar24 * fVar25;
    }
    fStack_e4 = ((-(fVar18 * fVar21) + fVar15 * fVar19) - fVar23 * fVar17) - fVar24 * fVar16;
    fStack_f0 = (fVar18 * fVar15 + fVar21 * fVar19 + fVar24 * fVar17) - fVar23 * fVar16;
    fStack_ec = (fVar17 * fVar15 + fVar23 * fVar19 + fVar21 * fVar16) - fVar24 * fVar18;
    fStack_e8 = (fVar16 * fVar15 + fVar24 * fVar19 + fVar23 * fVar18) - fVar21 * fVar17;
    FUN_10a3e8838(*(undefined8 *)(lVar14 + 0x140),&fStack_f0);
    plVar7 = plStack_68;
    if (plStack_68 == (long *)0x0) {
      return;
    }
  }
LAB_10a2ccf6c:
  plVar1 = plVar7 + 1;
  do {
    lVar14 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a2cc4c0; end: 10a2ccffb;  */

void FUN_10a2cc4c0(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  float *pfVar12;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  float *pfVar13;
  
  plVar7 = *(long **)(param_5 + 0x208);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar14 = *(long *)(param_5 + 0x168);
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar7 == (long *)0x0) {
    return;
  }
  lStack_70 = *(long *)(param_5 + 0x200);
  plStack_68 = plVar7;
  if (lStack_70 == 0) goto LAB_10a2ccf6c;
  uVar11 = *(undefined8 *)(lStack_70 + 0x140);
  if (*(int *)(param_5 + 0x1f0) == 2) {
    func_0x00010a2cd08c(uVar11);
    fVar15 = param_3 * param_1 + param_2 * param_4;
    fVar16 = -(param_4 * param_1) + param_2 * param_3;
    param_3 = 0.5 - (param_1 * param_1 + param_2 * param_2);
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    param_3 = param_3 + param_3;
    param_4 = fVar15 * fVar15 + fVar16 * fVar16 + param_3 * param_3;
LAB_10a2cc5c0:
    param_4 = SQRT(param_4);
    if (param_4 < 1.1920929e-07) goto LAB_10a2ccf6c;
    fVar15 = fVar15 / param_4;
    fVar17 = fVar16 / param_4;
    fVar18 = param_3 / param_4;
  }
  else {
    fVar15 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar16 = 0.0;
    if (*(int *)(param_5 + 0x1f0) == 1) {
      FUN_10a2cd058(uVar11);
      fVar17 = fVar15;
      fVar18 = fVar16;
      fVar21 = param_3;
      FUN_10a2cd058(*(undefined8 *)(param_5 + 0x178));
      fVar15 = fVar15 - fVar17;
      fVar16 = fVar16 - fVar18;
      param_3 = param_3 - fVar21;
      param_4 = param_3 * param_3 + fVar15 * fVar15 + fVar16 * fVar16;
      goto LAB_10a2cc5c0;
    }
  }
  iVar2 = *(int *)(param_5 + 0x1f8);
  fVar16 = 0.0;
  fVar21 = 0.0;
  if (iVar2 < 5) {
    if (iVar2 < 3) {
      fVar23 = 0.0;
      fVar21 = 1.0;
      fVar16 = fVar21;
      if (iVar2 != 2) {
        fVar16 = 0.0;
      }
      fVar22 = 0.0;
      if (iVar2 != 1) {
        fVar21 = 0.0;
        fVar22 = fVar16;
      }
    }
    else if (iVar2 == 3) {
      fVar23 = 1.0;
      fVar22 = 0.0;
    }
    else {
      fVar19 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      if (iVar2 == 4) {
        func_0x00010a2cd08c(uVar11);
        fVar21 = 0.5 - (param_3 * param_3 + fVar19 * fVar19);
        fVar22 = fVar19 * fVar16 + param_4 * param_3;
        fVar23 = -(fVar19 * param_4) + param_3 * fVar16;
        goto LAB_10a2cc7d4;
      }
    }
  }
  else if (iVar2 < 7) {
    if (iVar2 == 5) {
      fVar23 = fVar18;
      func_0x00010a2cd08c(uVar11);
      fVar21 = -(param_3 * param_4) + fVar16 * fVar23;
      fVar22 = 0.5 - (fVar16 * fVar16 + param_3 * param_3);
      fVar23 = fVar23 * param_3 + param_4 * fVar16;
LAB_10a2cc7d4:
      fVar21 = fVar21 + fVar21;
      fVar23 = fVar23 + fVar23;
      fVar22 = fVar22 + fVar22;
    }
    else {
      fVar19 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      if (iVar2 == 6) {
        func_0x00010a2cd08c(uVar11);
        fVar21 = param_3 * fVar16 + fVar19 * param_4;
        fVar22 = -(param_4 * fVar16) + fVar19 * param_3;
        fVar23 = 0.5 - (fVar16 * fVar16 + fVar19 * fVar19);
        fVar21 = fVar21 + fVar21;
        fVar23 = fVar23 + fVar23;
        fVar22 = fVar22 + fVar22;
      }
    }
  }
  else if (iVar2 == 7) {
    if (*(long *)(lVar14 + 0x188) == 0) {
      fVar22 = *(float *)(param_5 + 0x220);
      fVar23 = *(float *)(param_5 + 0x224);
      fVar16 = *(float *)(param_5 + 0x228);
      fVar21 = *(float *)(param_5 + 0x22c);
    }
    else {
      fVar19 = fVar18;
      func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
      fVar24 = *(float *)(param_5 + 0x220);
      fVar25 = *(float *)(param_5 + 0x224);
      fVar26 = *(float *)(param_5 + 0x228);
      fVar27 = *(float *)(param_5 + 0x22c);
      fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
      fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
      fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
      fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
    }
    fVar24 = fVar16 * -0.0 + fVar23 * 0.0;
    fVar19 = fVar16 + fVar22 * -0.0;
    fVar26 = fVar22 * 0.0 - fVar23;
    fVar25 = fVar21 * fVar24 + -(fVar19 * fVar16) + fVar26 * fVar23;
    fVar16 = fVar19 * fVar21 + -(fVar26 * fVar22) + fVar24 * fVar16;
    fVar22 = fVar26 * fVar21 + -(fVar24 * fVar23) + fVar19 * fVar22;
    fVar21 = fVar25 + fVar25 + 1.0;
    fVar23 = fVar22 + fVar22 + 0.0;
    fVar22 = fVar16 + fVar16 + 0.0;
  }
  else if (iVar2 == 8) {
    if (*(long *)(lVar14 + 0x188) == 0) {
      fVar22 = *(float *)(param_5 + 0x220);
      fVar23 = *(float *)(param_5 + 0x224);
      fVar16 = *(float *)(param_5 + 0x228);
      fVar21 = *(float *)(param_5 + 0x22c);
    }
    else {
      fVar19 = fVar18;
      func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
      fVar24 = *(float *)(param_5 + 0x220);
      fVar25 = *(float *)(param_5 + 0x224);
      fVar26 = *(float *)(param_5 + 0x228);
      fVar27 = *(float *)(param_5 + 0x22c);
      fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
      fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
      fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
      fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
    }
    fVar19 = fVar23 * 0.0 - fVar16;
    fVar26 = fVar22 * -0.0 + fVar16 * 0.0;
    fVar25 = fVar22 + fVar23 * -0.0;
    fVar24 = fVar19 * fVar21 + -(fVar26 * fVar16) + fVar25 * fVar23;
    fVar16 = fVar26 * fVar21 + -(fVar25 * fVar22) + fVar19 * fVar16;
    fVar22 = fVar21 * fVar25 + -(fVar19 * fVar23) + fVar26 * fVar22;
    fVar21 = fVar24 + fVar24 + 0.0;
    fVar23 = fVar22 + fVar22 + 0.0;
    fVar22 = fVar16 + fVar16 + 1.0;
  }
  else {
    fVar19 = 0.0;
    fVar23 = 0.0;
    fVar22 = 0.0;
    if (iVar2 == 9) {
      if (*(long *)(lVar14 + 0x188) == 0) {
        fVar22 = *(float *)(param_5 + 0x220);
        fVar23 = *(float *)(param_5 + 0x224);
        fVar16 = *(float *)(param_5 + 0x228);
        fVar21 = *(float *)(param_5 + 0x22c);
      }
      else {
        func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
        fVar24 = *(float *)(param_5 + 0x220);
        fVar25 = *(float *)(param_5 + 0x224);
        fVar26 = *(float *)(param_5 + 0x228);
        fVar27 = *(float *)(param_5 + 0x22c);
        fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
        fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
        fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
        fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
      }
      fVar24 = fVar23 + fVar16 * -0.0;
      fVar26 = fVar16 * 0.0 - fVar22;
      fVar19 = fVar23 * -0.0 + fVar22 * 0.0;
      fVar25 = fVar21 * fVar24 + -(fVar26 * fVar16) + fVar19 * fVar23;
      fVar16 = fVar26 * fVar21 + -(fVar19 * fVar22) + fVar24 * fVar16;
      fVar22 = fVar21 * fVar19 + -(fVar24 * fVar23) + fVar26 * fVar22;
      fVar21 = fVar25 + fVar25 + 0.0;
      fVar23 = fVar22 + fVar22 + 1.0;
      fVar22 = fVar16 + fVar16 + 0.0;
    }
  }
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar24 = (float)uVar11 / SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar18 * fVar18);
  fVar25 = (float)((ulong)uVar11 >> 0x20) /
           SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23);
  fVar16 = fVar15 * fVar24;
  fVar19 = fVar17 * fVar24;
  fVar24 = fVar18 * fVar24;
  if (1.1920929e-07 <=
      ABS(1.0 - ABS(fVar24 * fVar23 * fVar25 + fVar16 * fVar21 * fVar25 + fVar19 * fVar22 * fVar25))
     ) {
    fVar26 = -(fVar22 * fVar18) + fVar23 * fVar17;
    fVar25 = -(fVar23 * fVar15) + fVar21 * fVar18;
    fVar21 = -(fVar21 * fVar17) + fVar22 * fVar15;
    fVar22 = 1.0 / SQRT(fVar21 * fVar21 + fVar26 * fVar26 + fVar25 * fVar25);
    fVar23 = -(fVar17 * fVar21 * fVar22) + fVar18 * fVar25 * fVar22;
    fVar18 = -(fVar18 * fVar26 * fVar22) + fVar15 * fVar21 * fVar22;
    fVar15 = -(fVar15 * fVar25 * fVar22) + fVar17 * fVar26 * fVar22;
    fStack_f0 = -(fVar18 * fVar24) + fVar15 * fVar19;
    fStack_e0 = -(fVar15 * fVar16) + fVar23 * fVar24;
    fStack_d0 = -(fVar23 * fVar19) + fVar18 * fVar16;
    fVar15 = 1.0 / SQRT(fStack_d0 * fStack_d0 + fStack_f0 * fStack_f0 + fStack_e0 * fStack_e0);
    fStack_f0 = fStack_f0 * fVar15;
    fStack_e0 = fStack_e0 * fVar15;
    fStack_d0 = fStack_d0 * fVar15;
    fStack_d8 = -fVar19;
    fStack_ec = -(fVar19 * fStack_d0) + fVar24 * fStack_e0;
    fStack_c8 = -fVar24;
    fStack_dc = -(fVar24 * fStack_f0) + fVar16 * fStack_d0;
    fStack_e8 = -fVar16;
    fStack_cc = -(fVar16 * fStack_e0) + fVar19 * fStack_f0;
    fStack_e4 = 0.0;
    fStack_d4 = 0.0;
    fStack_c4 = 0.0;
    uStack_c0 = CONCAT44(-(fStack_cc * 0.0 + fStack_ec * 0.0 + fStack_dc * 0.0),
                         -(fStack_d0 * 0.0 + fStack_f0 * 0.0 + fStack_e0 * 0.0));
    fVar15 = fVar16 * 0.0 + fVar19 * 0.0;
    uVar20 = (ulong)(uint)fVar15;
    uStack_b8 = CONCAT44(0x3f800000,fVar24 * 0.0 + fVar15);
    func_0x0001094f5708(&uStack_b0,&fStack_f0);
    uVar8 = 0;
    piVar10 = (int *)&UNK_110bc26e0;
    while( true ) {
      for (; piVar9 = (int *)(&UNK_110bc24a0 + uVar8 * 0x18), *piVar9 < *(int *)(param_5 + 500);
          uVar8 = uVar8 * 2 + 2) {
        piVar9 = piVar10;
        if (10 < uVar8) goto LAB_10a2ccbd4;
      }
      if (0xb < uVar8) break;
      uVar8 = uVar8 << 1 | 1;
      piVar10 = piVar9;
    }
LAB_10a2ccbd4:
    if ((piVar9 == (int *)&UNK_110bc26e0) || (*(int *)(param_5 + 500) < *piVar9)) {
      piVar9 = (int *)&UNK_110bc26e0;
    }
    if (*(long *)(piVar9 + 4) != 0) {
      pfVar12 = (float *)(*(long *)(piVar9 + 2) + *(long *)(piVar9 + 4) * 0x10);
      do {
        fVar16 = (float)uVar20;
        pfVar13 = pfVar12 + -4;
        fVar15 = *pfVar13 * 0.017453292;
        ___sincosf_stret();
        fVar17 = pfVar12[-3];
        fVar18 = pfVar12[-2];
        fVar22 = pfVar12[-1];
        fVar21 = 1.0 / SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar22 * fVar22);
        fVar17 = fVar17 * fVar21;
        fVar18 = fVar18 * fVar21;
        fVar22 = fVar22 * fVar21;
        fVar21 = 1.0 - fVar16;
        fVar23 = fVar21 * fVar17;
        fVar19 = fVar21 * fVar18;
        fVar21 = fVar21 * fVar22;
        fVar24 = fVar16 + fVar17 * fVar23;
        fVar25 = fVar15 * fVar22 + fVar18 * fVar23;
        fStack_e8 = -(fVar15 * fVar18) + fVar22 * fVar23;
        fVar23 = -(fVar15 * fVar22) + fVar17 * fVar19;
        fVar26 = fVar16 + fVar18 * fVar19;
        fStack_d8 = fVar15 * fVar17 + fVar22 * fVar19;
        fVar19 = fVar15 * fVar18 + fVar17 * fVar21;
        fVar15 = -(fVar15 * fVar17) + fVar18 * fVar21;
        fVar16 = fVar16 + fVar22 * fVar21;
        fVar17 = fVar24 * 0.0;
        fVar21 = fVar25 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_e4 = fStack_e8 * 0.0;
        fStack_f0 = fStack_e4 + fVar24 + fVar21;
        fStack_ec = fStack_e4 + fVar25 + fVar17;
        fStack_e8 = fStack_e8 + fVar18;
        fStack_e4 = fStack_e4 + fVar18;
        fVar17 = fVar23 * 0.0;
        fVar21 = fVar26 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_d4 = fStack_d8 * 0.0;
        fStack_e0 = fStack_d4 + fVar23 + fVar21;
        fStack_dc = fStack_d4 + fVar26 + fVar17;
        fStack_d8 = fStack_d8 + fVar18;
        fStack_d4 = fStack_d4 + fVar18;
        fVar17 = fVar19 * 0.0;
        fVar21 = fVar15 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_c4 = fVar16 * 0.0;
        fStack_d0 = fStack_c4 + fVar19 + fVar21;
        fStack_cc = fStack_c4 + fVar15 + fVar17;
        fStack_c8 = fVar16 + fVar18;
        fStack_c4 = fStack_c4 + fVar18;
        uStack_b8 = 0x3f80000000000000;
        uStack_c0 = 0;
        func_0x000109519fd0(&uStack_130,&uStack_b0,&fStack_f0);
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        uStack_98 = uStack_118;
        uStack_a0 = uStack_120;
        uStack_88 = uStack_108;
        uStack_90 = uStack_110;
        uStack_78 = uStack_f8;
        uStack_80 = uStack_100;
        pfVar12 = pfVar13;
        uVar20 = uStack_100;
      } while (pfVar13 != *(float **)(piVar9 + 2));
    }
    fVar21 = ((float)uStack_b0 - uStack_a0._4_4_) - (float)uStack_88;
    fVar16 = (uStack_a0._4_4_ - (float)uStack_b0) - (float)uStack_88;
    fVar17 = ((float)uStack_88 - (float)uStack_b0) - uStack_a0._4_4_;
    fVar18 = (float)uStack_b0 + uStack_a0._4_4_ + (float)uStack_88;
    fVar15 = fVar21;
    if (fVar21 <= fVar18) {
      fVar15 = fVar18;
    }
    bVar5 = 2;
    if (fVar16 <= fVar15) {
      fVar16 = fVar15;
      bVar5 = fVar18 < fVar21;
    }
    bVar6 = 3;
    if (fVar17 <= fVar16) {
      fVar17 = fVar16;
      bVar6 = bVar5;
    }
    fVar19 = 1.0;
    fVar25 = SQRT(fVar17 + 1.0) * 0.5;
    fVar23 = 0.25 / fVar25;
    fVar22 = ((float)uStack_90 - (float)uStack_a8) * fVar23;
    fVar26 = (uStack_b0._4_4_ + (float)uStack_a0) * fVar23;
    fVar27 = ((float)uStack_98 + uStack_90._4_4_) * fVar23;
    fVar21 = (uStack_b0._4_4_ - (float)uStack_a0) * fVar23;
    fVar24 = ((float)uStack_a8 + (float)uStack_90) * fVar23;
    fVar15 = fVar22;
    fVar16 = fVar27;
    fVar17 = fVar25;
    fVar18 = fVar26;
    if (bVar6 != 2) {
      fVar15 = fVar21;
      fVar16 = fVar25;
      fVar17 = fVar27;
      fVar18 = fVar24;
    }
    fVar23 = ((float)uStack_98 - uStack_90._4_4_) * fVar23;
    fVar27 = fVar25;
    if (bVar6 != 0) {
      fVar27 = fVar23;
      fVar21 = fVar24;
      fVar22 = fVar26;
      fVar23 = fVar25;
    }
    if (bVar6 < 2) {
      fVar15 = fVar27;
      fVar16 = fVar21;
      fVar17 = fVar22;
      fVar18 = fVar23;
    }
    fVar22 = fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15;
    fVar21 = 0.0;
    if (fVar22 == 0.0) {
      fVar18 = 0.0;
      fVar17 = 0.0;
      fVar16 = 0.0;
    }
    else {
      fVar22 = 1.0 / SQRT(fVar22);
      fVar19 = fVar15 * fVar22;
      fVar18 = fVar18 * fVar22;
      fVar17 = fVar17 * fVar22;
      fVar16 = fVar16 * fVar22;
    }
    fVar15 = *(float *)(param_5 + 0x21c);
    fVar22 = *(float *)(param_5 + 0x210);
    fVar23 = *(float *)(param_5 + 0x214);
    fVar24 = *(float *)(param_5 + 0x218);
    fVar25 = fVar15 * fVar15 + fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
    if (fVar25 == 0.0) {
      fVar15 = 1.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar25 = 1.0 / SQRT(fVar25);
      fVar15 = fVar15 * fVar25;
      fVar21 = fVar22 * fVar25;
      fVar23 = fVar23 * fVar25;
      fVar24 = fVar24 * fVar25;
    }
    fStack_e4 = ((-(fVar18 * fVar21) + fVar15 * fVar19) - fVar23 * fVar17) - fVar24 * fVar16;
    fStack_f0 = (fVar18 * fVar15 + fVar21 * fVar19 + fVar24 * fVar17) - fVar23 * fVar16;
    fStack_ec = (fVar17 * fVar15 + fVar23 * fVar19 + fVar21 * fVar16) - fVar24 * fVar18;
    fStack_e8 = (fVar16 * fVar15 + fVar24 * fVar19 + fVar23 * fVar18) - fVar21 * fVar17;
    FUN_10a3e8838(*(undefined8 *)(lVar14 + 0x140),&fStack_f0);
    plVar7 = plStack_68;
    if (plStack_68 == (long *)0x0) {
      return;
    }
  }
LAB_10a2ccf6c:
  plVar1 = plVar7 + 1;
  do {
    lVar14 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a2ccffc; end: 10a2cd057;  */

void FUN_10a2ccffc(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  float *pfVar12;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  float *pfVar13;
  
  if (0x53 < *(int *)(*(long *)(*(long *)(param_5 + 0x108) + 0xa20) + 0x18)) {
    return;
  }
  plVar7 = *(long **)(param_5 + 0x1a0);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar14 = *(long *)(param_5 + 0x100);
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar7 == (long *)0x0) {
    return;
  }
  lStack_70 = *(long *)(param_5 + 0x198);
  plStack_68 = plVar7;
  if (lStack_70 == 0) goto LAB_10a2ccf6c;
  uVar11 = *(undefined8 *)(lStack_70 + 0x140);
  if (*(int *)(param_5 + 0x188) == 2) {
    func_0x00010a2cd08c(uVar11);
    fVar15 = param_3 * param_1 + param_2 * param_4;
    fVar16 = -(param_4 * param_1) + param_2 * param_3;
    param_3 = 0.5 - (param_1 * param_1 + param_2 * param_2);
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    param_3 = param_3 + param_3;
    param_4 = fVar15 * fVar15 + fVar16 * fVar16 + param_3 * param_3;
LAB_10a2cc5c0:
    param_4 = SQRT(param_4);
    if (param_4 < 1.1920929e-07) goto LAB_10a2ccf6c;
    fVar15 = fVar15 / param_4;
    fVar17 = fVar16 / param_4;
    fVar18 = param_3 / param_4;
  }
  else {
    fVar15 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar16 = 0.0;
    if (*(int *)(param_5 + 0x188) == 1) {
      FUN_10a2cd058(uVar11);
      fVar17 = fVar15;
      fVar18 = fVar16;
      fVar21 = param_3;
      FUN_10a2cd058(*(undefined8 *)(param_5 + 0x110));
      fVar15 = fVar15 - fVar17;
      fVar16 = fVar16 - fVar18;
      param_3 = param_3 - fVar21;
      param_4 = param_3 * param_3 + fVar15 * fVar15 + fVar16 * fVar16;
      goto LAB_10a2cc5c0;
    }
  }
  iVar2 = *(int *)(param_5 + 400);
  fVar16 = 0.0;
  fVar21 = 0.0;
  if (iVar2 < 5) {
    if (iVar2 < 3) {
      fVar23 = 0.0;
      fVar21 = 1.0;
      fVar16 = fVar21;
      if (iVar2 != 2) {
        fVar16 = 0.0;
      }
      fVar22 = 0.0;
      if (iVar2 != 1) {
        fVar21 = 0.0;
        fVar22 = fVar16;
      }
    }
    else if (iVar2 == 3) {
      fVar23 = 1.0;
      fVar22 = 0.0;
    }
    else {
      fVar19 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      if (iVar2 == 4) {
        func_0x00010a2cd08c(uVar11);
        fVar21 = 0.5 - (param_3 * param_3 + fVar19 * fVar19);
        fVar22 = fVar19 * fVar16 + param_4 * param_3;
        fVar23 = -(fVar19 * param_4) + param_3 * fVar16;
        goto LAB_10a2cc7d4;
      }
    }
  }
  else if (iVar2 < 7) {
    if (iVar2 == 5) {
      fVar23 = fVar18;
      func_0x00010a2cd08c(uVar11);
      fVar21 = -(param_3 * param_4) + fVar16 * fVar23;
      fVar22 = 0.5 - (fVar16 * fVar16 + param_3 * param_3);
      fVar23 = fVar23 * param_3 + param_4 * fVar16;
LAB_10a2cc7d4:
      fVar21 = fVar21 + fVar21;
      fVar23 = fVar23 + fVar23;
      fVar22 = fVar22 + fVar22;
    }
    else {
      fVar19 = 0.0;
      fVar23 = 0.0;
      fVar22 = 0.0;
      if (iVar2 == 6) {
        func_0x00010a2cd08c(uVar11);
        fVar21 = param_3 * fVar16 + fVar19 * param_4;
        fVar22 = -(param_4 * fVar16) + fVar19 * param_3;
        fVar23 = 0.5 - (fVar16 * fVar16 + fVar19 * fVar19);
        fVar21 = fVar21 + fVar21;
        fVar23 = fVar23 + fVar23;
        fVar22 = fVar22 + fVar22;
      }
    }
  }
  else if (iVar2 == 7) {
    if (*(long *)(lVar14 + 0x188) == 0) {
      fVar22 = *(float *)(param_5 + 0x1b8);
      fVar23 = *(float *)(param_5 + 0x1bc);
      fVar16 = *(float *)(param_5 + 0x1c0);
      fVar21 = *(float *)(param_5 + 0x1c4);
    }
    else {
      fVar19 = fVar18;
      func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
      fVar24 = *(float *)(param_5 + 0x1b8);
      fVar25 = *(float *)(param_5 + 0x1bc);
      fVar26 = *(float *)(param_5 + 0x1c0);
      fVar27 = *(float *)(param_5 + 0x1c4);
      fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
      fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
      fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
      fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
    }
    fVar24 = fVar16 * -0.0 + fVar23 * 0.0;
    fVar19 = fVar16 + fVar22 * -0.0;
    fVar26 = fVar22 * 0.0 - fVar23;
    fVar25 = fVar21 * fVar24 + -(fVar19 * fVar16) + fVar26 * fVar23;
    fVar16 = fVar19 * fVar21 + -(fVar26 * fVar22) + fVar24 * fVar16;
    fVar22 = fVar26 * fVar21 + -(fVar24 * fVar23) + fVar19 * fVar22;
    fVar21 = fVar25 + fVar25 + 1.0;
    fVar23 = fVar22 + fVar22 + 0.0;
    fVar22 = fVar16 + fVar16 + 0.0;
  }
  else if (iVar2 == 8) {
    if (*(long *)(lVar14 + 0x188) == 0) {
      fVar22 = *(float *)(param_5 + 0x1b8);
      fVar23 = *(float *)(param_5 + 0x1bc);
      fVar16 = *(float *)(param_5 + 0x1c0);
      fVar21 = *(float *)(param_5 + 0x1c4);
    }
    else {
      fVar19 = fVar18;
      func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
      fVar24 = *(float *)(param_5 + 0x1b8);
      fVar25 = *(float *)(param_5 + 0x1bc);
      fVar26 = *(float *)(param_5 + 0x1c0);
      fVar27 = *(float *)(param_5 + 0x1c4);
      fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
      fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
      fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
      fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
    }
    fVar19 = fVar23 * 0.0 - fVar16;
    fVar26 = fVar22 * -0.0 + fVar16 * 0.0;
    fVar25 = fVar22 + fVar23 * -0.0;
    fVar24 = fVar19 * fVar21 + -(fVar26 * fVar16) + fVar25 * fVar23;
    fVar16 = fVar26 * fVar21 + -(fVar25 * fVar22) + fVar19 * fVar16;
    fVar22 = fVar21 * fVar25 + -(fVar19 * fVar23) + fVar26 * fVar22;
    fVar21 = fVar24 + fVar24 + 0.0;
    fVar23 = fVar22 + fVar22 + 0.0;
    fVar22 = fVar16 + fVar16 + 1.0;
  }
  else {
    fVar19 = 0.0;
    fVar23 = 0.0;
    fVar22 = 0.0;
    if (iVar2 == 9) {
      if (*(long *)(lVar14 + 0x188) == 0) {
        fVar22 = *(float *)(param_5 + 0x1b8);
        fVar23 = *(float *)(param_5 + 0x1bc);
        fVar16 = *(float *)(param_5 + 0x1c0);
        fVar21 = *(float *)(param_5 + 0x1c4);
      }
      else {
        func_0x00010a2cd08c(*(undefined8 *)(*(long *)(lVar14 + 0x188) + 0x140));
        fVar24 = *(float *)(param_5 + 0x1b8);
        fVar25 = *(float *)(param_5 + 0x1bc);
        fVar26 = *(float *)(param_5 + 0x1c0);
        fVar27 = *(float *)(param_5 + 0x1c4);
        fVar21 = ((-(fVar16 * fVar24) + fVar27 * param_4) - fVar25 * fVar19) - fVar26 * param_3;
        fVar22 = (fVar16 * fVar27 + fVar24 * param_4 + fVar26 * fVar19) - fVar25 * param_3;
        fVar23 = (fVar19 * fVar27 + fVar25 * param_4 + fVar24 * param_3) - fVar26 * fVar16;
        fVar16 = (param_3 * fVar27 + fVar26 * param_4 + fVar25 * fVar16) - fVar24 * fVar19;
      }
      fVar24 = fVar23 + fVar16 * -0.0;
      fVar26 = fVar16 * 0.0 - fVar22;
      fVar19 = fVar23 * -0.0 + fVar22 * 0.0;
      fVar25 = fVar21 * fVar24 + -(fVar26 * fVar16) + fVar19 * fVar23;
      fVar16 = fVar26 * fVar21 + -(fVar19 * fVar22) + fVar24 * fVar16;
      fVar22 = fVar21 * fVar19 + -(fVar24 * fVar23) + fVar26 * fVar22;
      fVar21 = fVar25 + fVar25 + 0.0;
      fVar23 = fVar22 + fVar22 + 1.0;
      fVar22 = fVar16 + fVar16 + 0.0;
    }
  }
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar24 = (float)uVar11 / SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar18 * fVar18);
  fVar25 = (float)((ulong)uVar11 >> 0x20) /
           SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23);
  fVar16 = fVar15 * fVar24;
  fVar19 = fVar17 * fVar24;
  fVar24 = fVar18 * fVar24;
  if (1.1920929e-07 <=
      ABS(1.0 - ABS(fVar24 * fVar23 * fVar25 + fVar16 * fVar21 * fVar25 + fVar19 * fVar22 * fVar25))
     ) {
    fVar26 = -(fVar22 * fVar18) + fVar23 * fVar17;
    fVar25 = -(fVar23 * fVar15) + fVar21 * fVar18;
    fVar21 = -(fVar21 * fVar17) + fVar22 * fVar15;
    fVar22 = 1.0 / SQRT(fVar21 * fVar21 + fVar26 * fVar26 + fVar25 * fVar25);
    fVar23 = -(fVar17 * fVar21 * fVar22) + fVar18 * fVar25 * fVar22;
    fVar18 = -(fVar18 * fVar26 * fVar22) + fVar15 * fVar21 * fVar22;
    fVar15 = -(fVar15 * fVar25 * fVar22) + fVar17 * fVar26 * fVar22;
    fStack_f0 = -(fVar18 * fVar24) + fVar15 * fVar19;
    fStack_e0 = -(fVar15 * fVar16) + fVar23 * fVar24;
    fStack_d0 = -(fVar23 * fVar19) + fVar18 * fVar16;
    fVar15 = 1.0 / SQRT(fStack_d0 * fStack_d0 + fStack_f0 * fStack_f0 + fStack_e0 * fStack_e0);
    fStack_f0 = fStack_f0 * fVar15;
    fStack_e0 = fStack_e0 * fVar15;
    fStack_d0 = fStack_d0 * fVar15;
    fStack_d8 = -fVar19;
    fStack_ec = -(fVar19 * fStack_d0) + fVar24 * fStack_e0;
    fStack_c8 = -fVar24;
    fStack_dc = -(fVar24 * fStack_f0) + fVar16 * fStack_d0;
    fStack_e8 = -fVar16;
    fStack_cc = -(fVar16 * fStack_e0) + fVar19 * fStack_f0;
    fStack_e4 = 0.0;
    fStack_d4 = 0.0;
    fStack_c4 = 0.0;
    uStack_c0 = CONCAT44(-(fStack_cc * 0.0 + fStack_ec * 0.0 + fStack_dc * 0.0),
                         -(fStack_d0 * 0.0 + fStack_f0 * 0.0 + fStack_e0 * 0.0));
    fVar15 = fVar16 * 0.0 + fVar19 * 0.0;
    uVar20 = (ulong)(uint)fVar15;
    uStack_b8 = CONCAT44(0x3f800000,fVar24 * 0.0 + fVar15);
    func_0x0001094f5708(&uStack_b0,&fStack_f0);
    uVar8 = 0;
    piVar10 = (int *)&UNK_110bc26e0;
    while( true ) {
      for (; piVar9 = (int *)(&UNK_110bc24a0 + uVar8 * 0x18), *piVar9 < *(int *)(param_5 + 0x18c);
          uVar8 = uVar8 * 2 + 2) {
        piVar9 = piVar10;
        if (10 < uVar8) goto LAB_10a2ccbd4;
      }
      if (0xb < uVar8) break;
      uVar8 = uVar8 << 1 | 1;
      piVar10 = piVar9;
    }
LAB_10a2ccbd4:
    if ((piVar9 == (int *)&UNK_110bc26e0) || (*(int *)(param_5 + 0x18c) < *piVar9)) {
      piVar9 = (int *)&UNK_110bc26e0;
    }
    if (*(long *)(piVar9 + 4) != 0) {
      pfVar12 = (float *)(*(long *)(piVar9 + 2) + *(long *)(piVar9 + 4) * 0x10);
      do {
        fVar16 = (float)uVar20;
        pfVar13 = pfVar12 + -4;
        fVar15 = *pfVar13 * 0.017453292;
        ___sincosf_stret();
        fVar17 = pfVar12[-3];
        fVar18 = pfVar12[-2];
        fVar22 = pfVar12[-1];
        fVar21 = 1.0 / SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar22 * fVar22);
        fVar17 = fVar17 * fVar21;
        fVar18 = fVar18 * fVar21;
        fVar22 = fVar22 * fVar21;
        fVar21 = 1.0 - fVar16;
        fVar23 = fVar21 * fVar17;
        fVar19 = fVar21 * fVar18;
        fVar21 = fVar21 * fVar22;
        fVar24 = fVar16 + fVar17 * fVar23;
        fVar25 = fVar15 * fVar22 + fVar18 * fVar23;
        fStack_e8 = -(fVar15 * fVar18) + fVar22 * fVar23;
        fVar23 = -(fVar15 * fVar22) + fVar17 * fVar19;
        fVar26 = fVar16 + fVar18 * fVar19;
        fStack_d8 = fVar15 * fVar17 + fVar22 * fVar19;
        fVar19 = fVar15 * fVar18 + fVar17 * fVar21;
        fVar15 = -(fVar15 * fVar17) + fVar18 * fVar21;
        fVar16 = fVar16 + fVar22 * fVar21;
        fVar17 = fVar24 * 0.0;
        fVar21 = fVar25 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_e4 = fStack_e8 * 0.0;
        fStack_f0 = fStack_e4 + fVar24 + fVar21;
        fStack_ec = fStack_e4 + fVar25 + fVar17;
        fStack_e8 = fStack_e8 + fVar18;
        fStack_e4 = fStack_e4 + fVar18;
        fVar17 = fVar23 * 0.0;
        fVar21 = fVar26 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_d4 = fStack_d8 * 0.0;
        fStack_e0 = fStack_d4 + fVar23 + fVar21;
        fStack_dc = fStack_d4 + fVar26 + fVar17;
        fStack_d8 = fStack_d8 + fVar18;
        fStack_d4 = fStack_d4 + fVar18;
        fVar17 = fVar19 * 0.0;
        fVar21 = fVar15 * 0.0;
        fVar18 = fVar17 + fVar21;
        fStack_c4 = fVar16 * 0.0;
        fStack_d0 = fStack_c4 + fVar19 + fVar21;
        fStack_cc = fStack_c4 + fVar15 + fVar17;
        fStack_c8 = fVar16 + fVar18;
        fStack_c4 = fStack_c4 + fVar18;
        uStack_b8 = 0x3f80000000000000;
        uStack_c0 = 0;
        func_0x000109519fd0(&uStack_130,&uStack_b0,&fStack_f0);
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        uStack_98 = uStack_118;
        uStack_a0 = uStack_120;
        uStack_88 = uStack_108;
        uStack_90 = uStack_110;
        uStack_78 = uStack_f8;
        uStack_80 = uStack_100;
        pfVar12 = pfVar13;
        uVar20 = uStack_100;
      } while (pfVar13 != *(float **)(piVar9 + 2));
    }
    fVar21 = ((float)uStack_b0 - uStack_a0._4_4_) - (float)uStack_88;
    fVar16 = (uStack_a0._4_4_ - (float)uStack_b0) - (float)uStack_88;
    fVar17 = ((float)uStack_88 - (float)uStack_b0) - uStack_a0._4_4_;
    fVar18 = (float)uStack_b0 + uStack_a0._4_4_ + (float)uStack_88;
    fVar15 = fVar21;
    if (fVar21 <= fVar18) {
      fVar15 = fVar18;
    }
    bVar5 = 2;
    if (fVar16 <= fVar15) {
      fVar16 = fVar15;
      bVar5 = fVar18 < fVar21;
    }
    bVar6 = 3;
    if (fVar17 <= fVar16) {
      fVar17 = fVar16;
      bVar6 = bVar5;
    }
    fVar19 = 1.0;
    fVar25 = SQRT(fVar17 + 1.0) * 0.5;
    fVar23 = 0.25 / fVar25;
    fVar22 = ((float)uStack_90 - (float)uStack_a8) * fVar23;
    fVar26 = (uStack_b0._4_4_ + (float)uStack_a0) * fVar23;
    fVar27 = ((float)uStack_98 + uStack_90._4_4_) * fVar23;
    fVar21 = (uStack_b0._4_4_ - (float)uStack_a0) * fVar23;
    fVar24 = ((float)uStack_a8 + (float)uStack_90) * fVar23;
    fVar15 = fVar22;
    fVar16 = fVar27;
    fVar17 = fVar25;
    fVar18 = fVar26;
    if (bVar6 != 2) {
      fVar15 = fVar21;
      fVar16 = fVar25;
      fVar17 = fVar27;
      fVar18 = fVar24;
    }
    fVar23 = ((float)uStack_98 - uStack_90._4_4_) * fVar23;
    fVar27 = fVar25;
    if (bVar6 != 0) {
      fVar27 = fVar23;
      fVar21 = fVar24;
      fVar22 = fVar26;
      fVar23 = fVar25;
    }
    if (bVar6 < 2) {
      fVar15 = fVar27;
      fVar16 = fVar21;
      fVar17 = fVar22;
      fVar18 = fVar23;
    }
    fVar22 = fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15;
    fVar21 = 0.0;
    if (fVar22 == 0.0) {
      fVar18 = 0.0;
      fVar17 = 0.0;
      fVar16 = 0.0;
    }
    else {
      fVar22 = 1.0 / SQRT(fVar22);
      fVar19 = fVar15 * fVar22;
      fVar18 = fVar18 * fVar22;
      fVar17 = fVar17 * fVar22;
      fVar16 = fVar16 * fVar22;
    }
    fVar15 = *(float *)(param_5 + 0x1b4);
    fVar22 = *(float *)(param_5 + 0x1a8);
    fVar23 = *(float *)(param_5 + 0x1ac);
    fVar24 = *(float *)(param_5 + 0x1b0);
    fVar25 = fVar15 * fVar15 + fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
    if (fVar25 == 0.0) {
      fVar15 = 1.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar25 = 1.0 / SQRT(fVar25);
      fVar15 = fVar15 * fVar25;
      fVar21 = fVar22 * fVar25;
      fVar23 = fVar23 * fVar25;
      fVar24 = fVar24 * fVar25;
    }
    fStack_e4 = ((-(fVar18 * fVar21) + fVar15 * fVar19) - fVar23 * fVar17) - fVar24 * fVar16;
    fStack_f0 = (fVar18 * fVar15 + fVar21 * fVar19 + fVar24 * fVar17) - fVar23 * fVar16;
    fStack_ec = (fVar17 * fVar15 + fVar23 * fVar19 + fVar21 * fVar16) - fVar24 * fVar18;
    fStack_e8 = (fVar16 * fVar15 + fVar24 * fVar19 + fVar23 * fVar18) - fVar21 * fVar17;
    FUN_10a3e8838(*(undefined8 *)(lVar14 + 0x140),&fStack_f0);
    plVar7 = plStack_68;
    if (plStack_68 == (long *)0x0) {
      return;
    }
  }
LAB_10a2ccf6c:
  plVar1 = plVar7 + 1;
  do {
    lVar14 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a2cd058; end: 10a2cd0bf;  */

undefined4 FUN_10a2cd058(long param_1)

{
  if ((*(byte *)(param_1 + 0x2a) >> 5 & 1) != 0) {
    func_0x00010a3e9278(param_1);
  }
  return *(undefined4 *)(param_1 + 0xf0);
}



/* Entry: 10a2cd0c0; end: 10a2cd21f;  */

undefined **
FUN_10a2cd0c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,undefined **param_6)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 uStack_180;
  undefined8 *apuStack_178 [7];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  long lStack_e8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  puVar2 = &uStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  ppuVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbce00,1);
  *(int *)(param_5 + 500) = (int)ppuVar1;
  ppuVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbce20,2);
  *(int *)(param_5 + 0x1f8) = (int)ppuVar1;
  uStack_78 = 0x10a2eb960;
  ppuStack_70 = &PTR_DAT_110bc2a38;
  uVar4 = 0;
  lStack_68 = param_5;
  FUN_10a2cd220(param_6,&PTR_DAT_110bbce40,&uStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  ppuVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110bbce60,1);
  *(int *)(param_5 + 0x1f0) = (int)ppuVar1;
  uVar5 = 0;
  uStack_88 = 0x3f80000000000000;
  uStack_90 = 0;
  ppuVar1 = &PTR_DAT_110bbce80;
  (**(code **)(*param_6 + 400))();
  *(undefined4 *)(param_5 + 0x210) = uVar5;
  *(undefined4 *)(param_5 + 0x214) = param_2;
  *(undefined4 *)(param_5 + 0x218) = param_3;
  *(undefined4 *)(param_5 + 0x21c) = param_4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_6;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_180 = *puVar2;
  (**(code **)(puVar2[1] + 0x10))(apuStack_178,puVar2 + 1);
  FUN_109ffe064(&uStack_140,*ppuVar1,ppuVar1[1]);
  pcStack_128 = FUN_10a2eb6a4;
  ppuStack_120 = &PTR_FUN_110bc33b8;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  *puVar2 = uStack_180;
  (*(code *)apuStack_178[0][2])(puVar2 + 1,apuStack_178);
  puVar2[9] = uStack_138;
  puVar2[8] = uStack_140;
  puVar2[10] = lStack_130;
  uStack_138 = 0;
  lStack_130 = 0;
  uStack_140 = 0;
  puStack_118 = puVar2;
  func_0x000107c2b054(auStack_198,&UNK_10f64b3ce);
  (**(code **)(*param_6 + 0x250))(param_6,ppuVar1,&pcStack_128,uVar4,auStack_198);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  (*(code *)*ppuStack_120)(&ppuStack_120);
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  ppuVar3 = apuStack_178;
  (*(code *)*apuStack_178[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return param_6;
  }
  ___stack_chk_fail();
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  (*(code *)*ppuStack_120)(&ppuStack_120);
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  (*(code *)*apuStack_178[0])(apuStack_178);
  __Unwind_Resume();
  func_0x00010a3c7928();
  (**(code **)(*ppuVar1 + 0x40))(ppuVar1,&PTR_DAT_110bbce00,*(undefined4 *)((long)ppuVar3 + 500));
  (**(code **)(*ppuVar1 + 0x40))(ppuVar1,&PTR_DAT_110bbce20,*(undefined4 *)(ppuVar3 + 0x3f));
  FUN_10a2cd49c(ppuVar1,&PTR_DAT_110bbce40,ppuVar3 + 0x40,&UNK_10f64c61b,0xb);
  (**(code **)(*ppuVar1 + 0x40))(ppuVar1,&PTR_DAT_110bbce60,*(undefined4 *)(ppuVar3 + 0x3e));
                    /* WARNING: Could not recover jumptable at 0x00010a2cd498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar1 + 0xd0))(ppuVar1,&PTR_DAT_110bbce80,ppuVar3 + 0x42);
  return ppuVar1;
}



/* Entry: 10a2cd220; end: 10a2cd3eb;  */

long * FUN_10a2cd220(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_e8,param_3 + 1);
  FUN_109ffe064(&uStack_b0,*param_2,param_2[1]);
  pcStack_98 = FUN_10a2eb6a4;
  ppuStack_90 = &PTR_FUN_110bc33b8;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *puVar1 = uStack_f0;
  (*(code *)apuStack_e8[0][2])(puVar1 + 1,apuStack_e8);
  puVar1[9] = uStack_a8;
  puVar1[8] = uStack_b0;
  puVar1[10] = lStack_a0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  uStack_b0 = 0;
  puStack_88 = puVar1;
  func_0x000107c2b054(auStack_108,&UNK_10f64b3ce);
  (**(code **)(*param_1 + 0x250))(param_1,param_2,&pcStack_98,param_4,auStack_108);
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  ppuVar2 = apuStack_e8;
  (*(code *)*apuStack_e8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_f1 < '\0') {
    __ZdlPv(auStack_108[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  __Unwind_Resume();
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbce00,*(undefined4 *)((long)ppuVar2 + 500));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbce20,*(undefined4 *)(ppuVar2 + 0x3f));
  FUN_10a2cd49c(param_2,&PTR_DAT_110bbce40,ppuVar2 + 0x40,&UNK_10f64c61b,0xb);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbce60,*(undefined4 *)(ppuVar2 + 0x3e));
                    /* WARNING: Could not recover jumptable at 0x00010a2cd498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bbce80,ppuVar2 + 0x42);
  return param_2;
}



/* Entry: 10a2cd3ec; end: 10a2cd49b;  */

void FUN_10a2cd3ec(long param_1,long *param_2)

{
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbce00,*(undefined4 *)(param_1 + 500));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbce20,*(undefined4 *)(param_1 + 0x1f8));
  FUN_10a2cd49c(param_2,&PTR_DAT_110bbce40,param_1 + 0x200,&UNK_10f64c61b,0xb);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bbce60,*(undefined4 *)(param_1 + 0x1f0));
                    /* WARNING: Could not recover jumptable at 0x00010a2cd498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bbce80,param_1 + 0x210);
  return;
}



/* Entry: 10a2cd49c; end: 10a2cd5bb;  */

void FUN_10a2cd49c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_3[1];
  uStack_40 = param_4;
  uStack_38 = param_5;
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0)) {
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  else {
    uStack_60 = *param_3;
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_58 = plVar4;
      uStack_50 = uStack_60;
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_60,&uStack_40);
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a2cd5bc; end: 10a2cd86f;  */

void FUN_10a2cd5bc(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a2eb9b4(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110bc2a60;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a2cd720;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a2cd720:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  *(undefined4 *)(lVar10 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(lVar10 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  uVar12 = *(undefined8 *)(param_2 + 0x208);
  uVar8 = *(undefined8 *)(param_2 + 0x200);
  if (*(long *)(param_2 + 0x208) != 0) {
    plVar11 = (long *)(*(long *)(param_2 + 0x208) + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar9 = *(long *)(lVar10 + 0x208);
  *(undefined8 *)(lVar10 + 0x208) = uVar12;
  *(undefined8 *)(lVar10 + 0x200) = uVar8;
  if (lVar9 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined4 *)(lVar10 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  uVar8 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(lVar10 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(lVar10 + 0x210) = uVar8;
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a2cd870; end: 10a2cd8d3;  */

void FUN_10a2cd870(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x178);
  func_0x00010a0d8ae0(lVar1);
  uVar2 = *(undefined8 *)(lVar1 + 0x54);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(lVar1 + 0x5c);
  *(undefined8 *)(param_1 + 0x220) = uVar2;
  return;
}



/* Entry: 10a2cd8d4; end: 10a2cd9b7;  */

undefined1  [16] FUN_10a2cd8d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f64c627;
  return auVar1;
}



/* Entry: 10a2cd9b8; end: 10a2cdab3;  */

void FUN_10a2cd9b8(undefined8 param_1)

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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = &UNK_10f64c645;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f64b3ce;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f64b3ce;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a2ebad8(param_1,&puStack_98,100);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64bc38;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ebbc8();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f64bc4d;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64b3ce;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2ebd70(param_1,&puStack_98,0);
  FUN_10a2ebe8c(param_1);
  return;
}



/* Entry: 10a2cdab4; end: 10a2ce0c7;  */

void FUN_10a2cdab4(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c627,0x1d);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bc3440;
  pppuVar2 = (undefined8 ***)&UNK_10f64b3ce;
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
    ppuStack_b0 = &PTR_DAT_110bc3440;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2ce0a8;
    FUN_10a054dac(param_1,&UNK_10f64bc55,FUN_10a2ebf48,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2ce0a8;
    FUN_10a054dac(param_1,&UNK_10f64bc68,FUN_10a2ec08c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2ce0a8;
    FUN_10a054dac(param_1,&UNK_10f64bc81,FUN_10a2ec2cc,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2ce0a8;
    FUN_10a054dac(param_1,&UNK_10f64bc96,FUN_10a2ec3cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a2ce0a8;
    FUN_10a054dac(param_1,&UNK_10f64bcae,FUN_10a2ec4d8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f64bcb8,FUN_10a2ec664,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bc2ad8,FUN_10a2ec720);
    FUN_10a0605c4(param_1,&UNK_10f64bcc7,FUN_10a2ed528,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bc2af0,FUN_10a2ed65c);
    FUN_10a0605c4(param_1,&UNK_10f64bcd9,FUN_10a2ee464,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bce9,FUN_10a2ee598,FUN_10a2ee654);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bcfc,FUN_10a2ee720,FUN_10a2ee7dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f35700f,FUN_10a2ee8cc,FUN_10a2ee988);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bd06,FUN_10a2eea78,FUN_10a2eeb34);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f48ab68,FUN_10a2eec24,FUN_10a2eece0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f64bd0f,FUN_10a2eedd0,FUN_10a2eee8c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6322b7,FUN_10a2eef7c,FUN_10a2ef038);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bd1b,FUN_10a2ef128,FUN_10a2ef1e4);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c627,0x1d);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a2ce0a8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2ce0ac);
  (*pcVar6)();
}



/* Entry: 10a2ce0c8; end: 10a2ce2af;  */

void FUN_10a2ce0c8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f64bd29;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64b3ce;
  uStack_78 = 0;
  puStack_70 = &UNK_10f64b3ce;
  uStack_68 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f5a3717;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64b3ce;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ce2b0(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64bd38;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64b3ce;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ce2b0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64bd3f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64b3ce;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ce2b0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f64bd44;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x200000019;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ce2b0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f643a20;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x200000019;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2ce2b0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a2ce2b0; end: 10a2ce353;  */

undefined8 * FUN_10a2ce2b0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2ce354);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a2ce354; end: 10a2ce413;  */

undefined * FUN_10a2ce354(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  
  plVar4 = (long *)param_1[1];
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    return &UNK_10e482b48;
  }
  if (*param_1 == 0) {
    puVar6 = &UNK_10e482b48;
  }
  else {
    lVar5 = *(long *)(*param_1 + 0x140);
    if ((*(byte *)(lVar5 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar5);
    }
    puVar6 = (undefined *)(lVar5 + 0x100);
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
    return puVar6;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  return puVar6;
}



/* Entry: 10a2ce414; end: 10a2ce4f3;  */

undefined8 FUN_10a2ce414(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)param_2[1];
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uVar6 = 0;
    if (plVar4 != (long *)0x0) {
      if (*param_2 != 0) {
        func_0x00010a2cd08c(*(undefined8 *)(*param_2 + 0x140));
        uVar6 = param_1;
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
  }
  return uVar6;
}



/* Entry: 10a2ce4f4; end: 10a2ce5c7;  */

undefined8 FUN_10a2ce4f4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)param_2[1];
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uVar6 = 0;
    if (plVar4 != (long *)0x0) {
      if (*param_2 != 0) {
        FUN_10a2cd058(*(undefined8 *)(*param_2 + 0x140));
        uVar6 = param_1;
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
  }
  return uVar6;
}



/* Entry: 10a2ce5c8; end: 10a2ce6b7;  */

float FUN_10a2ce5c8(float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  
  plVar4 = (long *)param_5[1];
  if (plVar4 == (long *)0x0) {
    fVar6 = 0.0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    fVar6 = 0.0;
    if (plVar4 != (long *)0x0) {
      if (*param_5 != 0) {
        func_0x00010a2cd08c(*(undefined8 *)(*param_5 + 0x140));
        fVar6 = -(param_3 * param_4) + param_1 * param_2;
        fVar6 = fVar6 + fVar6;
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
  }
  return fVar6;
}



/* Entry: 10a2ce6b8; end: 10a2ce8bf;  */

undefined8 * FUN_10a2ce6b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[0xab] = &PTR_FUN_110c383b8;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  *(undefined2 *)(param_1 + 0xae) = 0x100;
  puVar2 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bbd1a0,param_2,param_3);
  *puVar2 = &PTR_DAT_110bbceb8;
  puVar2[2] = &PTR_FUN_110bbcfe8;
  puVar2[7] = &PTR_DAT_110bbd040;
  puVar2[0xd] = &PTR_DAT_110bbd060;
  puVar2[0xab] = &PTR_DAT_110bbd160;
  puVar2[0x16] = &PTR_DAT_110bbd0d0;
  puVar2[0x17] = &PTR_FUN_110bbd100;
  *(undefined2 *)(puVar2 + 0x3e) = 0;
  *(undefined1 *)((long)puVar2 + 500) = 0;
  puVar2[0x40] = 0x7f7fffff00000000;
  puVar2[0x3f] = 0x7f7fffff00000000;
  puVar2[0x41] = 0x7f7fffff00000000;
  *(undefined4 *)(puVar2 + 0x42) = 0x3f800000;
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110bc2b18;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x12] = 0;
  puVar2[3] = &PTR_FUN_110bc2b68;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 10) = 0x3f800000;
  puVar2[0xb] = FUN_10a2ef600;
  puVar2[0xc] = &PTR_DAT_110ae9180;
  param_1[0x43] = puVar2 + 3;
  param_1[0x44] = puVar2;
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_110bc2bc0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x12] = 0;
  puVar2[3] = &PTR_FUN_110bc2c10;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xb] = FUN_10a2ef964;
  puVar2[0xc] = &PTR_DAT_110ae9180;
  *(undefined4 *)(puVar2 + 10) = 0x3f800000;
  param_1[0x45] = puVar2 + 3;
  param_1[0x46] = puVar2;
  param_1[0x49] = 0;
  *(undefined8 *)((long)param_1 + 0x24d) = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  lVar3 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar3 + 0x290) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x288) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x2a0) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x298) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x270) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x268) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x280) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x278) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x260) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 600) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x2a8) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar3 + 0x2b4) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x2ac) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x2c4) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 700) = 0;
    lVar1 = lVar3 + 0x7c;
    *(undefined8 *)((long)param_1 + lVar3 + 0x2c9) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x2e8);
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  puVar2 = (undefined8 *)0x10;
  __Znwm();
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[0xaa] = puVar2;
  return param_1;
}



/* Entry: 10a2ce8c0; end: 10a2ce8e3;  */

void FUN_10a2ce8c0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  FUN_10a2ce8e4();
  lVar6 = *(long *)(param_1 + 0x168);
  do {
    for (lVar7 = *(long *)(lVar6 + 0x158); lVar7 != lVar6 + 0x150; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar3 = (long *)(*(long *)(lVar7 + 0x10) + 0xb0);
        (**(code **)(*plVar3 + 0x18))(plVar3,0xfb330a2f178823e8);
        if (plVar3 != (long *)0x0) goto LAB_10a2cebe4;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x188);
  } while (lVar6 != 0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x168) + 0x188);
LAB_10a2cebe4:
  uVar4 = *(ulong *)(param_1 + 0x550);
  FUN_10a2d1adc(uVar4,lVar6);
  if ((uVar4 & 1) == 0) {
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *puVar5 = 0;
      puVar5[1] = 0;
      uStack_58 = 0;
      FUN_10a2ef9f4(param_1 + 0x550,puVar5);
      FUN_10a2ef9f4(&uStack_58,0);
    }
    else {
      func_0x00010a0d77bc(&uStack_58,lVar6);
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      if (plStack_50 == (long *)0x0) {
        *puVar5 = uStack_58;
        puVar5[1] = 0;
      }
      else {
        plVar3 = plStack_50 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        *puVar5 = uStack_58;
        puVar5[1] = plStack_50;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      uStack_48 = 0;
      FUN_10a2ef9f4(param_1 + 0x550,puVar5);
      FUN_10a2ef9f4(&uStack_48,0);
      if (plStack_50 != (long *)0x0) {
        plVar3 = plStack_50 + 1;
        do {
          lVar6 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
        }
      }
    }
  }
  return;
}



/* Entry: 10a2ce8e4; end: 10a2ceb6f;  */

void FUN_10a2ce8e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar5 = *(long **)(param_1 + 0x548);
  if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0))
  {
    lVar7 = *(long *)(param_1 + 0x540);
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    if (lVar7 != 0) {
      return;
    }
  }
  lVar7 = *(long *)(param_1 + 0x168);
  lVar6 = *(long *)(lVar7 + 0x158);
  if (lVar6 != lVar7 + 0x150) {
LAB_10a2ce974:
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_10a2ce990;
    plVar5 = (long *)(*(long *)(lVar6 + 0x10) + 0xb0);
    (**(code **)(*plVar5 + 0x18))(plVar5,0xc2c0ac5e4c065340);
    if (plVar5 == (long *)0x0) goto LAB_10a2ce990;
    FUN_10a2d1b5c(&lStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar5 = plStack_38 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar7 = *(long *)(param_1 + 0x548);
    *(long **)(param_1 + 0x548) = plStack_38;
    *(long *)(param_1 + 0x540) = lStack_40;
    plVar5 = plStack_38;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_38;
    }
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 != 0) {
      return;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
    goto LAB_10a2ceb30;
  }
LAB_10a2ce9a0:
  puStack_50 = &UNK_10f64cb48;
  uStack_48 = 0x1e;
  FUN_10a3e51f0(&lStack_40,lVar7,&puStack_50);
  plVar5 = plStack_38;
  lVar7 = lStack_40;
  if (lStack_40 == 0) {
    FUN_10a00946c(&UNK_10f64be13);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2ceb58);
    (*pcVar4)();
  }
  *(ushort *)(lStack_40 + 0x180) = *(ushort *)(lStack_40 + 0x180) | 0x100;
  lVar6 = lStack_40;
  FUN_10a3c76c8(lStack_40,1);
  FUN_10a2d1b5c(&lStack_40,lVar7);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar7 = *(long *)(param_1 + 0x548);
  *(long **)(param_1 + 0x548) = plStack_38;
  *(long *)(param_1 + 0x540) = lStack_40;
  if (lVar7 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f64bd51,&UNK_10f64bd90,0x12d,&UNK_10f64bdec,in_x6,in_x7,lVar6);
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
LAB_10a2ceb30:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
LAB_10a2ce990:
  lVar6 = *(long *)(lVar6 + 8);
  if (lVar6 == lVar7 + 0x150) goto code_r0x00010a2ce99c;
  goto LAB_10a2ce974;
code_r0x00010a2ce99c:
  lVar7 = *(long *)(param_1 + 0x168);
  goto LAB_10a2ce9a0;
}



/* Entry: 10a2ceb70; end: 10a2cecf7;  */

void FUN_10a2ceb70(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_1 + 0x168);
  do {
    for (lVar7 = *(long *)(lVar6 + 0x158); lVar7 != lVar6 + 0x150; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar3 = (long *)(*(long *)(lVar7 + 0x10) + 0xb0);
        (**(code **)(*plVar3 + 0x18))(plVar3,0xfb330a2f178823e8);
        if (plVar3 != (long *)0x0) goto LAB_10a2cebe4;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x188);
  } while (lVar6 != 0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x168) + 0x188);
LAB_10a2cebe4:
  uVar4 = *(ulong *)(param_1 + 0x550);
  FUN_10a2d1adc(uVar4,lVar6);
  if ((uVar4 & 1) == 0) {
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *puVar5 = 0;
      puVar5[1] = 0;
      uStack_58 = 0;
      FUN_10a2ef9f4(param_1 + 0x550,puVar5);
      FUN_10a2ef9f4(&uStack_58,0);
    }
    else {
      func_0x00010a0d77bc(&uStack_58,lVar6);
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      if (plStack_50 == (long *)0x0) {
        *puVar5 = uStack_58;
        puVar5[1] = 0;
      }
      else {
        plVar3 = plStack_50 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        *puVar5 = uStack_58;
        puVar5[1] = plStack_50;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      uStack_48 = 0;
      FUN_10a2ef9f4(param_1 + 0x550,puVar5);
      FUN_10a2ef9f4(&uStack_48,0);
      if (plStack_50 != (long *)0x0) {
        plVar3 = plStack_50 + 1;
        do {
          lVar6 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
        }
      }
    }
  }
  return;
}



/* Entry: 10a2cecf8; end: 10a2ced1f;  */

void FUN_10a2cecf8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  FUN_10a2ce8e4(param_1 + -0x68);
  lVar6 = *(long *)(param_1 + 0x100);
  do {
    for (lVar7 = *(long *)(lVar6 + 0x158); lVar7 != lVar6 + 0x150; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar3 = (long *)(*(long *)(lVar7 + 0x10) + 0xb0);
        (**(code **)(*plVar3 + 0x18))(plVar3,0xfb330a2f178823e8);
        if (plVar3 != (long *)0x0) goto LAB_10a2cebe4;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x188);
  } while (lVar6 != 0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x100) + 0x188);
LAB_10a2cebe4:
  uVar4 = *(ulong *)(param_1 + 0x4e8);
  FUN_10a2d1adc(uVar4,lVar6);
  if ((uVar4 & 1) == 0) {
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *puVar5 = 0;
      puVar5[1] = 0;
      uStack_58 = 0;
      FUN_10a2ef9f4(param_1 + 0x4e8,puVar5);
      FUN_10a2ef9f4(&uStack_58,0);
    }
    else {
      func_0x00010a0d77bc(&uStack_58,lVar6);
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      if (plStack_50 == (long *)0x0) {
        *puVar5 = uStack_58;
        puVar5[1] = 0;
      }
      else {
        plVar3 = plStack_50 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        *puVar5 = uStack_58;
        puVar5[1] = plStack_50;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      uStack_48 = 0;
      FUN_10a2ef9f4(param_1 + 0x4e8,puVar5);
      FUN_10a2ef9f4(&uStack_48,0);
      if (plStack_50 != (long *)0x0) {
        plVar3 = plStack_50 + 1;
        do {
          lVar6 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
        }
      }
    }
  }
  return;
}



/* Entry: 10a2ced20; end: 10a2ced23;  */

void FUN_10a2ced20(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = 0;
  bVar4 = 0;
  do {
    bVar4 = *(byte *)(param_1 + 0x2d0 + lVar5) | bVar4;
    *(undefined1 *)(param_1 + 0x2d0 + lVar5) = 0;
    lVar5 = lVar5 + 0x7c;
  } while (lVar5 != 0x2e8);
  *(byte *)(param_1 + 0x1f0) = *(byte *)(param_1 + 0x1f0) & 0xfe;
  if ((bVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x228);
    plVar3 = (long *)0x30;
    __Znwm();
    plVar7 = plVar3 + 1;
    *plVar7 = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110bc2c68;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plStack_40 = plVar3 + 3;
    *plStack_40 = (long)&PTR_DAT_110bfb810;
    plStack_38 = plVar3;
    FUN_10a2cee14(uVar6,&plStack_40);
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a2ced24; end: 10a2cee0b;  */

void FUN_10a2ced24(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = 0;
  bVar4 = 0;
  do {
    bVar4 = *(byte *)(param_1 + 0x2d0 + lVar5) | bVar4;
    *(undefined1 *)(param_1 + 0x2d0 + lVar5) = 0;
    lVar5 = lVar5 + 0x7c;
  } while (lVar5 != 0x2e8);
  *(byte *)(param_1 + 0x1f0) = *(byte *)(param_1 + 0x1f0) & 0xfe;
  if ((bVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x228);
    plVar3 = (long *)0x30;
    __Znwm();
    plVar7 = plVar3 + 1;
    *plVar7 = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110bc2c68;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plStack_40 = plVar3 + 3;
    *plStack_40 = (long)&PTR_DAT_110bfb810;
    plStack_38 = plVar3;
    FUN_10a2cee14(uVar6,&plStack_40);
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a2cee0c; end: 10a2cee13;  */

void FUN_10a2cee0c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = 0;
  bVar4 = 0;
  do {
    bVar4 = *(byte *)(param_1 + 0x268 + lVar5) | bVar4;
    *(undefined1 *)(param_1 + 0x268 + lVar5) = 0;
    lVar5 = lVar5 + 0x7c;
  } while (lVar5 != 0x2e8);
  *(byte *)(param_1 + 0x188) = *(byte *)(param_1 + 0x188) & 0xfe;
  if ((bVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x1c0);
    plVar3 = (long *)0x30;
    __Znwm();
    plVar7 = plVar3 + 1;
    *plVar7 = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110bc2c68;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plStack_40 = plVar3 + 3;
    *plStack_40 = (long)&PTR_DAT_110bfb810;
    plStack_38 = plVar3;
    FUN_10a2cee14(uVar6,&plStack_40);
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10a2cee14; end: 10a2cf373;  */

void FUN_10a2cee14(long param_1,undefined ***param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 **ppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined1 uVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long *plVar17;
  code *pcVar18;
  undefined **unaff_x21;
  long *plVar19;
  undefined ***unaff_x23;
  undefined8 **ppuVar20;
  undefined **ppuVar21;
  undefined **unaff_x25;
  long lVar22;
  code *unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  ulong *puVar23;
  undefined8 *puStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  code *pcStack_168;
  code *pcStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined ***pppuStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  float fStack_f0;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_80;
  
  plVar6 = &lStack_110;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_108 = (code *)0x0;
  lStack_110 = 0;
  lStack_f8 = 0;
  ppuStack_100 = (undefined **)0x0;
  fStack_f0 = *(float *)(param_1 + 0x38);
  pppuVar9 = *(undefined ****)(param_1 + 0x20);
  FUN_10a2ed864(&lStack_110);
  plVar19 = *(long **)(param_1 + 0x28);
  if (plVar19 != (long *)0x0) {
    unaff_x23 = (undefined ***)0x9ddfea08eb382d69;
    unaff_x25 = (undefined **)0x3;
    do {
      unaff_x27 = pcStack_108;
      uVar12 = plVar19[2];
      uVar16 = ((ulong)(uint)((int)uVar12 << 3) + 8 ^ uVar12 >> 0x20) * -0x622015f714c7d297;
      uVar16 = (uVar12 >> 0x20 ^ uVar16 >> 0x2f ^ uVar16) * -0x622015f714c7d297;
      unaff_x28 = (code *)((uVar16 ^ uVar16 >> 0x2f) * -0x622015f714c7d297);
      if (pcStack_108 != (code *)0x0) {
        pcVar13 = pcStack_108 + -1;
        if (((ulong)pcStack_108 & (ulong)pcVar13) == 0) {
          unaff_x26 = (code *)((ulong)unaff_x28 & (ulong)pcVar13);
        }
        else {
          unaff_x26 = unaff_x28;
          if (pcStack_108 <= unaff_x28) {
            uVar16 = 0;
            if (pcStack_108 != (code *)0x0) {
              uVar16 = (ulong)unaff_x28 / (ulong)pcStack_108;
            }
            unaff_x26 = unaff_x28 + -(uVar16 * (long)pcStack_108);
          }
        }
        plVar17 = *(long **)(lStack_110 + (long)unaff_x26 * 8);
        if (plVar17 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_10a2cef44;
              pcVar18 = (code *)plVar17[1];
              if (pcVar18 != unaff_x28) break;
              if (plVar17[2] == uVar12) goto LAB_10a2cf0a4;
            }
            if (((ulong)pcStack_108 & (ulong)pcVar13) == 0) {
              pcVar18 = (code *)((ulong)pcVar18 & (ulong)pcVar13);
            }
            else if (pcStack_108 <= pcVar18) {
              uVar16 = 0;
              if (pcStack_108 != (code *)0x0) {
                uVar16 = (ulong)pcVar18 / (ulong)pcStack_108;
              }
              pcVar18 = pcVar18 + -(uVar16 * (long)pcStack_108);
            }
          } while (pcVar18 == unaff_x26);
        }
      }
LAB_10a2cef44:
      unaff_x21 = (undefined **)0x68;
      __Znwm();
      *unaff_x21 = (undefined *)0x0;
      unaff_x21[1] = unaff_x28;
      lVar22 = plVar19[3];
      puVar15 = (undefined *)plVar19[2];
      unaff_x21[3] = (undefined *)plVar19[3];
      unaff_x21[2] = puVar15;
      if (lVar22 != 0) {
        plVar17 = (long *)(lVar22 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *plVar17 = *plVar17 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_c0 = unaff_x21 + 4;
      *(undefined1 *)(unaff_x21 + 0xc) = 3;
      if ((char)plVar19[0xc] == '\0') {
        uVar11 = 0;
      }
      else {
        pppuVar9 = (undefined ***)(plVar19 + 4);
        FUN_10a005398(&ppuStack_c0);
        uVar11 = (undefined1)plVar19[0xc];
      }
      *(undefined1 *)(unaff_x21 + 0xc) = uVar11;
      if ((unaff_x27 == (code *)0x0) || (fStack_f0 * (float)unaff_x27 < (float)(lStack_f8 + 1))) {
        uVar12 = 1;
        if ((code *)0x2 < unaff_x27) {
          uVar12 = (ulong)(((ulong)unaff_x27 & (ulong)(unaff_x27 + -1)) != 0);
        }
        pppuVar9 = (undefined ***)(uVar12 | (long)unaff_x27 << 1);
        pppuVar10 = (undefined ***)(long)((float)(lStack_f8 + 1) / fStack_f0);
        if (pppuVar9 <= pppuVar10) {
          pppuVar9 = pppuVar10;
        }
        FUN_10a2ed864(&lStack_110);
        unaff_x27 = pcStack_108;
        if (((ulong)pcStack_108 & (ulong)(pcStack_108 + -1)) == 0) {
          unaff_x26 = (code *)((ulong)(pcStack_108 + -1) & (ulong)unaff_x28);
        }
        else {
          unaff_x26 = unaff_x28;
          if (pcStack_108 <= unaff_x28) {
            uVar12 = 0;
            if (pcStack_108 != (code *)0x0) {
              uVar12 = (ulong)unaff_x28 / (ulong)pcStack_108;
            }
            unaff_x26 = unaff_x28 + -(uVar12 * (long)pcStack_108);
          }
        }
      }
      puVar14 = *(undefined8 **)(lStack_110 + (long)unaff_x26 * 8);
      if (puVar14 == (undefined8 *)0x0) {
        *unaff_x21 = (undefined *)ppuStack_100;
        *(undefined ****)(lStack_110 + (long)unaff_x26 * 8) = &ppuStack_100;
        ppuStack_100 = unaff_x21;
        if (*unaff_x21 != (undefined *)0x0) {
          pcVar13 = *(code **)(*unaff_x21 + 8);
          if (((ulong)unaff_x27 & (ulong)(unaff_x27 + -1)) == 0) {
            pcVar13 = (code *)((ulong)pcVar13 & (ulong)(unaff_x27 + -1));
          }
          else if (unaff_x27 <= pcVar13) {
            uVar12 = 0;
            if (unaff_x27 != (code *)0x0) {
              uVar12 = (ulong)pcVar13 / (ulong)unaff_x27;
            }
            pcVar13 = pcVar13 + -(uVar12 * (long)unaff_x27);
          }
          *(undefined ***)(lStack_110 + (long)pcVar13 * 8) = unaff_x21;
        }
      }
      else {
        *unaff_x21 = (undefined *)*puVar14;
        *puVar14 = unaff_x21;
      }
      lStack_f8 = lStack_f8 + 1;
LAB_10a2cf0a4:
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0);
  }
  puVar14 = (undefined8 *)0x0;
  if (ppuStack_100 != (undefined **)0x0) {
    puVar14 = &uStack_e0;
    unaff_x23 = &ppuStack_c0;
    unaff_x25 = &PTR_FUN_110bc2ca8;
    unaff_x26 = FUN_10a2efcd0;
    ppuVar21 = ppuStack_100;
    do {
      pppuVar10 = (undefined ***)ppuVar21[2];
      lVar22 = param_1 + 0x18;
      FUN_10a2ee274();
      pppuVar9 = pppuVar10;
      if (lVar22 != 0) {
        if (*(char *)(ppuVar21 + 0xc) == '\x01') {
          pcVar13 = (code *)ppuVar21[4];
          ppuStack_b8 = param_2[1];
          ppuStack_c0 = *param_2;
          if (param_2[1] != (undefined **)0x0) {
            ppuVar2 = param_2[1] + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar4) {
                *ppuVar2 = *ppuVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pppuVar9 = (undefined ***)(ppuVar21 + 4);
          (*pcVar13)(&ppuStack_c0);
          unaff_x21 = ppuStack_b8;
          if (ppuStack_b8 != (undefined **)0x0) {
            ppuVar2 = ppuStack_b8 + 1;
            do {
              puVar15 = *ppuVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar4) {
                *ppuVar2 = puVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_10a2cf184:
            if (puVar15 == (undefined *)0x0) {
              (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
            }
          }
        }
        else if (*(char *)(ppuVar21 + 0xc) == '\x02') {
          unaff_x21 = ppuVar21 + 4;
          FUN_10a688b40();
          if (unaff_x21 == (undefined **)0x0) {
            pppuVar9 = (undefined ***)0x0;
            if (pppuVar10 != (undefined ***)0x0) {
              puStack_b0 = ppuVar21[4];
              puStack_a8 = ppuVar21[5];
              if (puStack_a8 != (undefined *)0x0) {
                plVar19 = (long *)(puStack_a8 + 8);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar4) {
                    *plVar19 = *plVar19 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              ppuStack_d0 = *param_2;
              ppuVar2 = param_2[1];
              if (ppuVar2 == (undefined **)0x0) {
                ppuStack_98 = (undefined **)0x0;
              }
              else {
                ppuVar1 = ppuVar2 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar4) {
                    *ppuVar1 = *ppuVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar4) {
                    *ppuVar1 = *ppuVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  ppuStack_98 = ppuVar2;
                } while (cVar3 != '\0');
              }
              ppuStack_b8 = &PTR_FUN_110bc2ca8;
              ppuStack_d8 = (undefined **)0x0;
              uStack_e0 = 0;
              ppuStack_c0 = (undefined **)FUN_10a2efcd0;
              pppuVar9 = &ppuStack_c0;
              ppuStack_c8 = ppuVar2;
              ppuStack_a0 = ppuStack_d0;
              FUN_10a4634ec(pppuVar10);
              (*(code *)*ppuStack_b8)(&ppuStack_b8);
              if (ppuVar2 != (undefined **)0x0) {
                ppuVar1 = ppuVar2 + 1;
                do {
                  puVar15 = *ppuVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar4) {
                    *ppuVar1 = puVar15 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (puVar15 == (undefined *)0x0) {
                  (**(code **)(*ppuVar2 + 0x10))(ppuVar2);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
                }
              }
              unaff_x21 = ppuStack_d8;
              if (ppuStack_d8 != (undefined **)0x0) {
                ppuVar2 = ppuStack_d8 + 1;
                do {
                  puVar15 = *ppuVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                  if (bVar4) {
                    *ppuVar2 = puVar15 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                goto LAB_10a2cf184;
              }
            }
          }
          else {
            *unaff_x21 = (undefined *)
                         CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
            pppuVar9 = param_2;
            FUN_10a2efacc(ppuVar21[4]);
            iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
            *(int *)((long)unaff_x21 + 4) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)unaff_x21 = 0;
            }
          }
        }
      }
      ppuVar21 = (undefined **)*ppuVar21;
    } while (ppuVar21 != (undefined **)0x0);
  }
  FUN_10a2ef974();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b8)(unaff_x23 + 1);
  FUN_10a2efa74(puVar14 + 2);
  func_0x00010a004dac(&uStack_e0);
  FUN_10a2ef974(&lStack_110);
  puVar7 = (undefined1 *)plVar6;
  __Unwind_Resume();
  pcStack_118 = FUN_10a2cf374;
  pcStack_170 = unaff_x28;
  pcStack_168 = unaff_x27;
  pcStack_160 = unaff_x26;
  ppuStack_158 = unaff_x25;
  uStack_150 = 0;
  pppuStack_148 = unaff_x23;
  puStack_140 = puVar14;
  ppuStack_138 = unaff_x21;
  lStack_130 = param_1;
  puStack_128 = (undefined1 *)plVar6;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_10a3c7928();
  (*(code *)(*pppuVar9)[0xc])(*(undefined4 *)(puVar7 + 0x208),pppuVar9,&PTR_DAT_110bbd1b8);
  (*(code *)(*pppuVar9)[0xc])(*(undefined4 *)(puVar7 + 0x20c),pppuVar9,&PTR_DAT_110bbd1d8);
  (*(code *)(*pppuVar9)[0xc])(*(undefined4 *)(puVar7 + 0x200),pppuVar9,&PTR_DAT_110bbd1f8);
  (*(code *)(*pppuVar9)[0xc])(*(undefined4 *)(puVar7 + 0x204),pppuVar9,&PTR_DAT_110bbd218);
  (*(code *)(*pppuVar9)[0xc])(*(undefined4 *)(puVar7 + 0x1f8),pppuVar9,&PTR_DAT_110bbd238);
  (*(code *)(*pppuVar9)[0xc])(*(undefined4 *)(puVar7 + 0x1fc),pppuVar9,&PTR_DAT_110bbd258);
  (*(code *)(*pppuVar9)[0xc])(*(undefined4 *)(puVar7 + 0x210),pppuVar9,&PTR_DAT_110bbd278);
  (*(code *)(*pppuVar9)[0xe])(pppuVar9,&PTR_DAT_110bbd298,puVar7[500] & 1);
  lVar22 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  puVar23 = (ulong *)&UNK_110bbd2c0;
  uStack_178 = 0;
  do {
    if (((byte)puVar7[0x1f1] >> (ulong)((uint)lVar22 & 0x1f) & 1) != 0) {
      uVar12 = *puVar23;
      if (0x7ffffffffffffff7 < uVar12) {
        func_0x000109ffde50();
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10a2cf58c);
        (*pcVar13)();
      }
      uVar16 = puVar23[-1];
      if (uVar12 < 0x17) {
        uStack_190 = CONCAT17((char)uVar12,(undefined7)uStack_190);
        ppuVar8 = &puStack_1a0;
        ppuVar20 = &puStack_1a0;
        if (uVar12 != 0) goto LAB_10a2cf4f8;
      }
      else {
        puVar14 = (undefined8 *)0x19;
        if ((uVar12 | 7) != 0x17) {
          puVar14 = (undefined8 *)((uVar12 | 7) + 1);
        }
        ppuVar8 = (undefined8 **)puVar14;
        __Znwm();
        uStack_190 = (ulong)puVar14 | 0x8000000000000000;
        puStack_1a0 = ppuVar8;
        uStack_198 = uVar12;
LAB_10a2cf4f8:
        _memmove(ppuVar8,uVar16,uVar12);
        ppuVar20 = ppuVar8;
      }
      *(undefined1 *)((long)ppuVar20 + uVar12) = 0;
      FUN_10a059fa0(&uStack_188,&puStack_1a0);
      if ((long)uStack_190 < 0) {
        __ZdlPv(puStack_1a0);
      }
    }
    lVar22 = lVar22 + 1;
    puVar23 = puVar23 + 2;
    if (lVar22 == 6) {
      (*(code *)(*pppuVar9)[0x27])(pppuVar9,&PTR_DAT_110bbd318,&uStack_188);
      puStack_1a0 = &uStack_188;
      FUN_10a0426d8(&puStack_1a0);
      return;
    }
  } while( true );
}



/* Entry: 10a2cf374; end: 10a2cf5c7;  */

void FUN_10a2cf374(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 **ppuVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x208),param_2,&PTR_DAT_110bbd1b8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x20c),param_2,&PTR_DAT_110bbd1d8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x200),param_2,&PTR_DAT_110bbd1f8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x204),param_2,&PTR_DAT_110bbd218);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x1f8),param_2,&PTR_DAT_110bbd238);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x1fc),param_2,&PTR_DAT_110bbd258);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x210),param_2,&PTR_DAT_110bbd278);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bbd298,*(byte *)(param_1 + 500) & 1);
  lVar7 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar8 = (ulong *)&UNK_110bbd2c0;
  uStack_68 = 0;
  do {
    if ((*(byte *)(param_1 + 0x1f1) >> (ulong)((uint)lVar7 & 0x1f) & 1) != 0) {
      uVar4 = *puVar8;
      if (0x7ffffffffffffff7 < uVar4) {
        func_0x000109ffde50();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a2cf58c);
        (*pcVar2)();
      }
      uVar5 = puVar8[-1];
      if (uVar4 < 0x17) {
        uStack_80 = CONCAT17((char)uVar4,(undefined7)uStack_80);
        ppuVar3 = &puStack_90;
        ppuVar6 = &puStack_90;
        if (uVar4 != 0) goto LAB_10a2cf4f8;
      }
      else {
        puVar1 = (undefined8 *)0x19;
        if ((uVar4 | 7) != 0x17) {
          puVar1 = (undefined8 *)((uVar4 | 7) + 1);
        }
        ppuVar3 = (undefined8 **)puVar1;
        __Znwm();
        uStack_80 = (ulong)puVar1 | 0x8000000000000000;
        puStack_90 = ppuVar3;
        uStack_88 = uVar4;
LAB_10a2cf4f8:
        _memmove(ppuVar3,uVar5,uVar4);
        ppuVar6 = ppuVar3;
      }
      *(undefined1 *)((long)ppuVar6 + uVar4) = 0;
      FUN_10a059fa0(&uStack_78,&puStack_90);
      if ((long)uStack_80 < 0) {
        __ZdlPv(puStack_90);
      }
    }
    lVar7 = lVar7 + 1;
    puVar8 = puVar8 + 2;
    if (lVar7 == 6) {
      (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110bbd318,&uStack_78);
      puStack_90 = &uStack_78;
      FUN_10a0426d8(&puStack_90);
      return;
    }
  } while( true );
}



/* Entry: 10a2cf5c8; end: 10a2cf87b;  */

void FUN_10a2cf5c8(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_78;
  
  func_0x00010a3c7a18();
  uVar10 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bbd1b8);
  *(undefined4 *)(param_1 + 0x208) = uVar10;
  uVar11 = 0x7f7fffff;
  uVar10 = uVar11;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bbd1d8);
  *(undefined4 *)(param_1 + 0x20c) = uVar10;
  uVar10 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bbd1f8);
  *(undefined4 *)(param_1 + 0x200) = uVar10;
  uVar10 = uVar11;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bbd218);
  *(undefined4 *)(param_1 + 0x204) = uVar10;
  uVar10 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bbd238);
  *(undefined4 *)(param_1 + 0x1f8) = uVar10;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bbd258);
  *(undefined4 *)(param_1 + 0x1fc) = uVar11;
  uVar10 = 0x3f800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bbd278);
  *(undefined4 *)(param_1 + 0x210) = uVar10;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bbd298,0);
  *(byte *)(param_1 + 500) = *(byte *)(param_1 + 500) & 0xfe | (byte)plVar4;
  (**(code **)(*param_2 + 0x60))(&puStack_90,param_2,&PTR_DAT_110bbd318);
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  if (puStack_90 != puStack_88) {
    puVar6 = puStack_90;
    do {
      uVar9 = 0;
      ppuVar7 = (undefined **)&UNK_110bc2778;
      while( true ) {
        while( true ) {
          ppuVar8 = &PTR_DAT_110bc26e8 + uVar9 * 3;
          puVar5 = *ppuVar8;
          uVar1 = puVar6[1];
          puVar2 = (undefined8 *)*puVar6;
          if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
            uVar1 = (ulong)*(byte *)((long)puVar6 + 0x17);
            puVar2 = puVar6;
          }
          FUN_10a003d5c(puVar5,*(undefined8 *)(&UNK_110bc26f0 + uVar9 * 0x18),puVar2,uVar1);
          if (((uint)puVar5 >> 7 & 1) == 0) break;
          ppuVar8 = ppuVar7;
          if (1 < uVar9) goto LAB_10a2cf7a8;
          uVar9 = uVar9 * 2 + 2;
        }
        if (2 < uVar9) break;
        uVar9 = uVar9 << 1 | 1;
        ppuVar7 = ppuVar8;
      }
LAB_10a2cf7a8:
      if (ppuVar8 == (undefined **)&UNK_110bc2778) {
LAB_10a2cf83c:
        func_0x0001093fd0ac(&UNK_10f61d92d);
LAB_10a2cf858:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2cf85c);
        (*pcVar3)();
      }
      puVar5 = *ppuVar8;
      uVar9 = puVar6[1];
      puVar2 = (undefined8 *)*puVar6;
      if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
        uVar9 = (ulong)*(byte *)((long)puVar6 + 0x17);
        puVar2 = puVar6;
      }
      FUN_10a003d5c(puVar5,ppuVar8[1],puVar2,uVar9);
      if ('\0' < (char)puVar5 || ppuVar8 == (undefined **)&UNK_110bc2778) goto LAB_10a2cf83c;
      if (5 < *(uint *)(ppuVar8 + 2)) {
        FUN_10a00946c(&UNK_10f64c71c);
        goto LAB_10a2cf858;
      }
      *(byte *)(param_1 + 0x1f1) =
           *(byte *)(param_1 + 0x1f1) | (byte)(1 << (ulong)(*(uint *)(ppuVar8 + 2) & 0x1f));
      puVar6 = puVar6 + 3;
    } while (puVar6 != puStack_88);
  }
  puStack_78 = (undefined1 *)&puStack_90;
  FUN_10a0426d8(&puStack_78);
  return;
}



/* Entry: 10a2cf87c; end: 10a2cfc07;  */

void FUN_10a2cf87c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar5 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar8 = &lStack_50;
    if (param_4 != 0) {
      puVar5 = (undefined8 *)(param_4 + 0x28);
      plVar8 = (long *)(param_4 + 0x20);
    }
    uVar10 = *puVar5;
    lVar11 = *plVar8;
  }
  lVar12 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar12);
  FUN_10a2efd48(lVar12,lVar11,uVar10);
  plVar8 = (long *)0x28;
  __Znwm();
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  *plVar8 = (long)&PTR_FUN_110bc2cd0;
  plVar8[2] = 0;
  plVar8[3] = lVar12;
  plVar8[4] = (long)FUN_10a3df8cc;
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar8;
    }
    else {
      if (*(long *)(*(long *)(lVar12 + 0x30) + 8) != -1) goto LAB_10a2cf9e0;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar8 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar8;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar11 = *plVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10a2cf9e0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar12 + 0x150,param_2 + 0x150);
  uVar3 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar4 = *(ushort *)(lVar12 + 0x180) & 0xfffc;
  *(ushort *)(lVar12 + 0x180) = uVar4 | *(ushort *)(lVar12 + 0x180) & 1 | uVar3;
  *(ushort *)(lVar12 + 0x180) = uVar4 | uVar3 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lStack_50 = lVar12;
  plStack_48 = plVar8;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar9 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  *(undefined1 *)(lVar12 + 0x1f1) = *(undefined1 *)(param_2 + 0x1f1);
  _memcpy(lVar12 + 600,param_2 + 600,0x2e8);
  plVar9 = *(long **)(param_2 + 0x548);
  if ((plVar9 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 == (long *)0x0))
  {
    plVar9 = (long *)0x0;
  }
  else if (*(long *)(param_2 + 0x540) != 0) {
    FUN_10a2d1b5c(&lStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lVar11 = *(long *)(lVar12 + 0x548);
    *(long **)(lVar12 + 0x548) = plStack_48;
    *(long *)(lVar12 + 0x540) = lStack_50;
    if (lVar11 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar11 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    goto LAB_10a2cfb4c;
  }
  lVar11 = *(long *)(lVar12 + 0x548);
  *(undefined8 *)(lVar12 + 0x548) = 0;
  *(undefined8 *)(lVar12 + 0x540) = 0;
  if (lVar11 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a2cfb4c:
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uVar14 = *(undefined8 *)(param_2 + 500);
  uVar13 = *(undefined8 *)(param_2 + 0x20c);
  uVar10 = *(undefined8 *)(param_2 + 0x204);
  *(undefined8 *)(lVar12 + 0x1fc) = *(undefined8 *)(param_2 + 0x1fc);
  *(undefined8 *)(lVar12 + 500) = uVar14;
  *(undefined8 *)(lVar12 + 0x20c) = uVar13;
  *(undefined8 *)(lVar12 + 0x204) = uVar10;
  *param_1 = lVar12;
  param_1[1] = (long)plVar8;
  return;
}



/* Entry: 10a2cfc08; end: 10a2d145b;  */

/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_10a2cfc08(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined ********param_5)

{
  long *plVar1;
  undefined *******pppppppuVar2;
  long lVar3;
  undefined *******pppppppuVar4;
  char cVar5;
  int iVar6;
  undefined *******pppppppuVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined8 *puVar13;
  undefined ********ppppppppuVar14;
  byte bVar15;
  byte bVar16;
  undefined1 uVar17;
  long lVar18;
  undefined *******pppppppuVar19;
  ulong uVar20;
  undefined ******ppppppuVar21;
  undefined ********ppppppppuVar22;
  long *plVar23;
  long lVar24;
  undefined ********ppppppppuVar25;
  undefined *****pppppuVar26;
  uint uVar27;
  bool bVar28;
  undefined ********ppppppppuVar29;
  undefined *****pppppuVar30;
  undefined *******pppppppuVar31;
  undefined *******pppppppuVar32;
  undefined ******ppppppuVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  ulong uVar63;
  double dVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  float fVar91;
  undefined8 uVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fStack_280;
  float fStack_270;
  float fStack_260;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined ********ppppppppuStack_200;
  undefined4 uStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined8 uStack_1e4;
  float fStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined ********ppppppppuStack_1c8;
  undefined ********ppppppppuStack_1c0;
  undefined ********ppppppppuStack_1b8;
  undefined *******pppppppuStack_1b0;
  undefined *******pppppppuStack_1a8;
  undefined ********ppppppppuStack_1a0;
  undefined8 uStack_198;
  undefined *******pppppppuStack_190;
  undefined ********ppppppppuStack_180;
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined *******pppppppuStack_158;
  undefined ********ppppppppuStack_150;
  undefined *******pppppppuStack_148;
  undefined *******pppppppuStack_140;
  undefined *******pppppppuStack_138;
  undefined *******pppppppuStack_130;
  undefined *******pppppppuStack_128;
  undefined *******pppppppuStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a2ceb70();
  ppppppppuVar25 = param_5;
  FUN_10a2d145c();
  bVar15 = *(byte *)((long)param_5 + 0x1f1);
  uVar27 = (uint)bVar15;
  pppppppuVar32 = param_5[0xaa];
  ppppppppuVar11 = (undefined ********)param_5[0x2d];
  pppppppuVar31 = (undefined *******)param_5[0x2e][0x106];
  ppppppuVar33 = param_5[0x2e][0x175];
  ppppppppuVar12 = ppppppppuVar25;
  if (*(char *)((long)ppppppppuVar25 + 0x3b1) == '\x01') {
    ppppppppuVar12 = (undefined ********)ppppppuVar33[7];
    if ((ppppppppuVar12 != (undefined ********)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), ppppppppuVar12 != (undefined ********)0x0)) {
      ppppppppuVar29 = (undefined ********)ppppppuVar33[6];
      ppppppppuVar14 = ppppppppuVar12 + 1;
      do {
        pppppppuVar19 = *ppppppppuVar14;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar14,0x10);
        if (bVar10) {
          *ppppppppuVar14 = (undefined *******)((long)pppppppuVar19 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppppuVar19 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (ppppppppuVar29 == ppppppppuVar25) goto LAB_10a2cfd18;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      lVar18 = 0;
      bVar15 = 0;
      do {
        bVar15 = *(byte *)((long)param_5 + lVar18 + 0x2d0) | bVar15;
        *(undefined1 *)((long)param_5 + lVar18 + 0x2d0) = 0;
        lVar18 = lVar18 + 0x7c;
      } while (lVar18 != 0x2e8);
      *(byte *)(param_5 + 0x3e) = *(byte *)(param_5 + 0x3e) & 0xfe;
      if ((bVar15 & 1) != 0) {
        param_5 = (undefined ********)param_5[0x45];
        ppppppppuVar11 = (undefined ********)0x30;
        __Znwm();
        ppppppppuVar25 = ppppppppuVar11 + 1;
        *ppppppppuVar25 = (undefined *******)0x0;
        ppppppppuVar11[2] = (undefined *******)0x0;
        *ppppppppuVar11 = (undefined *******)&PTR_FUN_110bc2c68;
        ppppppppuVar11[4] = (undefined *******)0x0;
        ppppppppuVar11[5] = (undefined *******)0x0;
        ppppppppuVar11[3] = (undefined *******)&PTR_DAT_110bfb810;
        FUN_10a2cee14(param_5,&stack0xffffffffffffffc0);
        do {
          pppppppuVar31 = *ppppppppuVar25;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar25,0x10);
          if (bVar10) {
            *ppppppppuVar25 = (undefined *******)((long)pppppppuVar31 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppppuVar31 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuVar11)[2])(ppppppppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar11);
          param_5 = ppppppppuVar11;
        }
      }
      return param_5;
    }
    goto LAB_10a2d1360;
  }
LAB_10a2cfd18:
  ppppppppuVar29 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
  uStack_178 = (undefined ********)((long)param_5 + 500);
  ppppppppuVar14 = param_5 + 0x4b;
  pppppppuVar19 = (undefined *******)((long)param_5 + 0x254);
  uStack_228 = (undefined *******)0x0;
  fStack_220 = 0.0;
  fStack_214 = 0.0;
  fStack_210 = 1.0;
  fStack_21c = 0.0;
  fStack_218 = 0.0;
  uVar81 = NEON_fmov(0x3f800000,4);
  fStack_20c = (float)uVar81;
  fVar48 = fStack_20c;
  fStack_208 = (float)((ulong)uVar81 >> 0x20);
  fVar50 = fStack_208;
  fStack_204 = 1.0;
  if (*(int *)(ppppppuVar33 + 3) == 1) {
    uStack_1d0 = (code *)CONCAT71(uStack_1d0._1_7_,bVar15);
    uStack_198 = 6;
    ppppppppuStack_1c8 = uStack_178;
    ppppppppuStack_1c0 = ppppppppuVar11;
    ppppppppuStack_1b8 = ppppppppuVar25;
    pppppppuStack_1b0 = pppppppuVar32;
    pppppppuStack_1a8 = pppppppuVar31;
    ppppppppuStack_1a0 = ppppppppuVar14;
    pppppppuStack_190 = pppppppuVar19;
    if (((bVar15 ^ 0xffffffff) & 3) == 0) {
      if (((ulong)ppppppppuVar25[0x76] & 1) != 0) {
        ppppppuVar33 = pppppppuVar31[3];
        __ZNSt3__15mutex4lockEv(ppppppuVar33 + 0x3f);
        pppppuVar26 = ppppppuVar33[(long)*(int *)(ppppppuVar33 + 0x3e) * 3 + 0x38];
        pppppuVar30 = ppppppuVar33[(long)*(int *)(ppppppuVar33 + 0x3e) * 3 + 0x39];
        __ZNSt3__15mutex6unlockEv(ppppppuVar33 + 0x3f);
        if (pppppuVar26 != pppppuVar30) {
          bVar16 = *(byte *)pppppppuVar19 ^ 1;
          goto LAB_10a2cfefc;
        }
      }
    }
    else {
      bVar16 = (byte)((bVar15 & 2) >> 1);
      if ((bVar15 & 1) != 0) {
        bVar16 = 0;
      }
LAB_10a2cfefc:
      *(byte *)pppppppuVar19 = bVar16;
    }
    ppppppppuVar11 = (undefined ********)&ppppppppuStack_180;
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    uStack_178._4_4_ = 0.0;
    fStack_170 = 0.0;
    uStack_178._0_4_ = 0.0;
    uStack_15c = 1.0;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_180);
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    uStack_178._4_4_ = 0.0;
    fStack_170 = 0.0;
    uStack_178._0_4_ = 0.0;
    uStack_15c = 1.0;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_180);
    ppppppppuStack_200 = (undefined ********)0x0;
    uStack_1f8 = 0;
    uStack_1ec = 0x3f80000000000000;
    fStack_1f4 = 0.0;
    uStack_1f0 = 0;
    fStack_1dc = 1.0;
    uStack_1e4 = uVar81;
    if ((bVar15 & 7) != 0) {
      if ((*(byte *)(ppppppppuVar25 + 0x76) >> 1 & 1) == 0) {
        *(undefined1 *)(param_5 + 0x79) = 0;
        *(undefined1 *)(param_5 + 0x5a) = 0;
        *(undefined4 *)(param_5 + 0x59) = 0x3f800000;
        *(undefined1 *)((long)param_5 + 0x34c) = 0;
        *(undefined4 *)(param_5 + 0x68) = 0;
      }
      else {
        fVar34 = *(float *)(param_5 + 0x59);
        fVar35 = *(float *)(param_5 + 0x68);
        if ((bVar15 & 1) == 0) {
          if ((bVar15 & 2) == 0) {
LAB_10a2d0308:
            *(undefined1 *)(param_5 + 0x5a) = 0;
          }
          else {
            bVar16 = *(byte *)((long)param_5 + 0x254);
LAB_10a2d0334:
            *(undefined1 *)(param_5 + 0x5a) = 0;
            if (bVar16 == 1) {
              uVar17 = 0;
              bVar28 = false;
              bVar10 = true;
              goto LAB_10a2d0a38;
            }
          }
          bVar28 = false;
          *(undefined1 *)((long)param_5 + 0x34c) = 0;
          if ((bVar15 >> 2 & 1) != 0) {
LAB_10a2d0aac:
            ppppppppuVar25 = param_5 + 0x6a;
            uStack_1d8 = 0x3f0000003f000000;
            if (((ulong)param_5[0x79] & 1) == 0) {
              FUN_10a2f0374(&ppppppppuStack_180,&uStack_1d0,&uStack_1d8);
              param_5[0x73] = pppppppuStack_138;
              param_5[0x72] = pppppppuStack_140;
              param_5[0x75] = pppppppuStack_128;
              param_5[0x74] = pppppppuStack_130;
              param_5[0x77] = (undefined *******)CONCAT71(uStack_117,uStack_118);
              param_5[0x76] = pppppppuStack_120;
              *(undefined8 *)((long)param_5 + 0x3c1) = uStack_10f;
              *(ulong *)((long)param_5 + 0x3b9) = CONCAT17(uStack_110,uStack_117);
              param_5[0x6b] = (undefined *******)CONCAT44(uStack_178._4_4_,(float)uStack_178);
              *ppppppppuVar25 = (undefined *******)ppppppppuStack_180;
              param_5[0x6d] = (undefined *******)CONCAT44(fStack_164,fStack_168);
              param_5[0x6c] = (undefined *******)CONCAT44(fStack_16c,fStack_170);
              param_5[0x6f] = pppppppuStack_158;
              param_5[0x6e] = (undefined *******)CONCAT44(uStack_15c,fStack_160);
              param_5[0x71] = pppppppuStack_148;
              param_5[0x70] = (undefined *******)ppppppppuStack_150;
            }
            FUN_10a2f0afc(*(undefined4 *)(param_5 + 0x68),&uStack_1d0);
            FUN_10a2f0f8c(&ppppppppuStack_200,&uStack_1d0,ppppppppuVar25,&uStack_1d8);
LAB_10a2d0b18:
            if (bVar28) goto LAB_10a2d0b1c;
          }
        }
        else {
          bVar16 = *(byte *)pppppppuVar19;
          if ((bVar15 & 2) == 0) {
            if (bVar16 != 0) goto LAB_10a2d0308;
          }
          else if (bVar16 != 0) goto LAB_10a2d0334;
          bVar10 = false;
          *(undefined1 *)((long)param_5 + 0x34c) = 0;
          uVar17 = 1;
          bVar28 = true;
LAB_10a2d0a38:
          uStack_d8 = (undefined4 *)((long)param_5 + 0x2d4);
          uStack_f8 = FUN_10a2f2474;
          fStack_f0 = 7.4224136e-29;
          fStack_ec = 1.4013e-45;
          ppppppppuVar25 = (undefined ********)&fStack_f0;
          fStack_e8 = (float)CONCAT31(fStack_e8._1_3_,uVar17);
          uStack_e0 = ppppppppuVar14;
          FUN_10a2f0f14(pppppppuVar31[3] + 10,&uStack_f8);
          (**(code **)CONCAT44(fStack_ec,fStack_f0))(ppppppppuVar25);
          if ((bVar15 >> 2 & 1) != 0) goto LAB_10a2d0aac;
          if (bVar10) {
            fVar35 = *(float *)(param_5 + 0x68) - fVar35;
            FUN_10a2f0afc(&uStack_1d0);
            fStack_1f4 = fVar35;
            uStack_1ec = CONCAT44(param_4,param_3);
            uStack_1f0 = param_2;
            goto LAB_10a2d0b18;
          }
          if (!bVar28) goto LAB_10a2d0b60;
LAB_10a2d0b1c:
          fVar51 = *(float *)((long)param_5 + 0x2b4) - *(float *)(param_5 + 0x4b);
          fVar35 = 1.0;
          if (fVar51 <= 1.0) {
            fVar35 = fVar51;
          }
          fVar35 = fVar35 + fVar35;
          _exp2f();
          fVar56 = 0.25;
          if (-1.0 <= fVar51) {
            fVar56 = fVar35;
          }
          fStack_1dc = fVar56 / fVar34;
          uStack_1e4 = CONCAT44(fStack_1dc,fStack_1dc);
          *(float *)(param_5 + 0x59) = fVar56;
        }
      }
    }
LAB_10a2d0b60:
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_200);
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    uStack_178._4_4_ = 0.0;
    fStack_170 = 0.0;
    uStack_178._0_4_ = 0.0;
    uStack_15c = 1.0;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_180);
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    uStack_178._4_4_ = 0.0;
    fStack_170 = 0.0;
    uStack_178._0_4_ = 0.0;
    uStack_15c = 1.0;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_180);
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    fStack_170 = 0.0;
    uStack_178 = (undefined ********)0x0;
    uStack_15c = 1.0;
    ppppppppuVar14 = (undefined ********)&ppppppppuStack_180;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
LAB_10a2d0bd4:
    ppppppppuVar12 = (undefined ********)&uStack_228;
    func_0x00010a2d28c8(ppppppppuVar12,ppppppppuVar14);
    ppppppppuVar29 = uStack_178;
  }
  else if (*(int *)(ppppppuVar33 + 3) == 0) {
    ppppppppuStack_180 = (undefined ********)CONCAT71(ppppppppuStack_180._1_7_,bVar15);
    fStack_170 = SUB84(ppppppppuVar11,0);
    fStack_16c = (float)((ulong)ppppppppuVar11 >> 0x20);
    fStack_168 = SUB84(ppppppppuVar25,0);
    fStack_164 = (float)((ulong)ppppppppuVar25 >> 0x20);
    fStack_160 = SUB84(pppppppuVar32,0);
    uStack_15c = (float)((ulong)pppppppuVar32 >> 0x20);
    pppppppuStack_148 = (undefined *******)0x6;
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    pppppppuStack_158 = pppppppuVar31;
    ppppppppuStack_150 = ppppppppuVar14;
    pppppppuStack_140 = pppppppuVar19;
    uStack_e0._4_4_ = fStack_20c;
    uStack_d8._0_4_ = fStack_208;
    if ((bVar15 & 1) != 0) {
      uStack_1d0 = FUN_10a2f0250;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2d78;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = (undefined ********)&uStack_f8;
      FUN_10a2f01d8(pppppppuVar31[3] + 0x4f,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      uVar27 = (uint)ppppppppuStack_180 & 0xff;
    }
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if ((uVar27 >> 1 & 1) != 0) {
      ppppppuVar33 = pppppppuStack_158[3];
      uStack_1d0 = FUN_10a2f09d0;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2d98;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = (undefined ********)&uStack_f8;
      __ZNSt3__15mutex4lockEv(ppppppuVar33 + 0x6d);
      pppppuVar30 = ppppppuVar33[(long)*(int *)(ppppppuVar33 + 0x6c) * 3 + 0x67];
      for (pppppuVar26 = ppppppuVar33[(long)*(int *)(ppppppuVar33 + 0x6c) * 3 + 0x66];
          pppppuVar26 != pppppuVar30; pppppuVar26 = pppppuVar26 + 8) {
        (*uStack_1d0)(pppppuVar26,&uStack_1d0);
      }
      __ZNSt3__15mutex6unlockEv(ppppppuVar33 + 0x6d);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      uVar27 = (uint)(byte)ppppppppuStack_180;
    }
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    ppppppppuVar25 = ppppppppuStack_150;
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if ((uVar27 >> 2 & 1) != 0) {
      if (pppppppuStack_148 < (undefined *******)0x3) goto LAB_10a2d135c;
      ppppppppuVar12 = ppppppppuStack_150 + 0x1f;
      uStack_1d0 = FUN_10a2f18dc;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2db8;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = ppppppppuVar12;
      FUN_10a2f0f14(pppppppuStack_158[3] + 10,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      if (*(char *)(ppppppppuVar25 + 0x2e) == '\x01') {
        FUN_10a2f0f8c(0,0,0,0x3f800000,&uStack_f8,&ppppppppuStack_180,ppppppppuVar12,
                      (undefined4 *)((long)ppppppppuVar25 + 0x154));
      }
    }
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    ppppppppuVar25 = ppppppppuStack_150;
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if (((byte)ppppppppuStack_180 >> 3 & 1) != 0) {
      if (pppppppuStack_148 < (undefined *******)0x4) {
LAB_10a2d135c:
        uStack_d8._4_4_ = 0x3f800000;
        uStack_e0._0_4_ = 1.0;
        fStack_e4 = 0.0;
        fStack_e8 = 0.0;
        fStack_ec = 0.0;
        fStack_f0 = 0.0;
        uStack_f8 = (code *)0x0;
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10a2d1360);
        uStack_e0._4_4_ = fVar48;
        uStack_d8._0_4_ = fVar50;
        (*pcVar9)();
      }
      ppppppppuStack_1b8 = (undefined ********)((long)ppppppppuStack_150 + 0x174);
      uStack_1d0 = FUN_10a2f1bec;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2dd8;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      FUN_10a2f0f14(pppppppuStack_158[3] + 10,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      if (*(char *)((long)ppppppppuVar25 + 0x1ec) == '\x01') {
        lVar18 = CONCAT44(fStack_164,fStack_168);
        FUN_10a601e00();
        lVar24 = *(long *)(CONCAT44(fStack_16c,fStack_170) + 0x140);
        fVar34 = *(float *)(ppppppppuVar25 + 0x3a);
        fVar51 = *(float *)(ppppppppuVar25 + 0x2f);
        fVar35 = *(float *)((long)ppppppppuVar25 + 0x1cc);
        if (*(char *)(lVar18 + 0x2f0) == '\x01') {
          FUN_10a42b498(lVar18);
          *(undefined1 *)(lVar18 + 0x2f0) = 0;
        }
        lVar3 = 200;
        if (*(ulong *)(lVar18 + 0x4d0) < 2) {
          lVar3 = 0x1e0;
        }
        lVar3 = lVar18 + lVar3;
        fVar52 = *(float *)(lVar3 + 0x3c8);
        fVar36 = *(float *)(lVar3 + 0x3cc);
        fVar53 = *(float *)(lVar3 + 0x3d0);
        fVar58 = *(float *)(lVar3 + 0x3d4);
        fVar65 = *(float *)(lVar3 + 0x3d8);
        fVar37 = *(float *)(lVar3 + 0x3dc);
        fVar38 = *(float *)(lVar3 + 0x3e0);
        fVar39 = *(float *)(lVar3 + 0x3e4);
        fVar54 = *(float *)(lVar3 + 1000);
        fVar40 = *(float *)(lVar3 + 0x3ec);
        fVar41 = *(float *)(lVar3 + 0x3f0);
        fVar55 = *(float *)(lVar3 + 0x3f4);
        fVar59 = *(float *)(lVar3 + 0x3f8);
        fVar42 = *(float *)(lVar3 + 0x3fc);
        fVar43 = *(float *)(lVar3 + 0x400);
        fVar44 = *(float *)(lVar3 + 0x404);
        fVar93 = fVar44;
        fVar94 = fVar55;
        fVar95 = fVar59;
        FUN_10a2cd058(*(undefined8 *)(lVar18 + 0x178));
        puVar8 = (undefined8 *)CONCAT44(uStack_15c,fStack_160);
        fVar60 = fVar93;
        fVar45 = fVar94;
        fVar72 = fVar95;
        FUN_10a2ce5c8(puVar8);
        FUN_10a2f0738(lVar18);
        puVar13 = puVar8;
        FUN_10a2ce354();
        fVar66 = (float)*puVar13 * fVar60 + (float)puVar13[2] * fVar45 +
                 (float)puVar13[4] * fVar72 + (float)puVar13[6] * 0.0;
        fVar69 = (float)*(undefined8 *)((long)puVar13 + 4) * fVar60 +
                 (float)*(undefined8 *)((long)puVar13 + 0x14) * fVar45 +
                 (float)*(undefined8 *)((long)puVar13 + 0x24) * fVar72 +
                 (float)*(undefined8 *)((long)puVar13 + 0x34) * 0.0;
        fVar71 = (float)((ulong)*(undefined8 *)((long)puVar13 + 4) >> 0x20) * fVar60 +
                 (float)((ulong)*(undefined8 *)((long)puVar13 + 0x14) >> 0x20) * fVar45 +
                 (float)((ulong)*(undefined8 *)((long)puVar13 + 0x24) >> 0x20) * fVar72 +
                 (float)((ulong)*(undefined8 *)((long)puVar13 + 0x34) >> 0x20) * 0.0;
        uVar63 = *(ulong *)((long)ppppppppuVar25 + 0x1ac);
        fVar46 = (float)((ulong)ppppppppuVar25[0x36] >> 0x20);
        fVar75 = (float)uVar63;
        uVar81 = NEON_ext(uVar63,CONCAT44(fVar71,fVar69),4,1);
        fVar56 = (float)((ulong)uVar81 >> 0x20);
        fVar77 = SQRT((fVar75 * fVar75 + (float)uVar81 * (float)uVar81 + fVar46 * fVar46) *
                      (fVar66 * fVar66 + fVar56 * fVar56 + fVar71 * fVar71));
        fVar67 = (float)(uVar63 >> 0x20);
        fVar56 = fVar75 * fVar66 + fVar69 * fVar67 + fVar46 * fVar71 + fVar77;
        if (fVar77 * 1e-06 <= fVar56) {
          fStack_270 = fVar71 * fVar67;
          fVar67 = SUB84(ppppppppuVar25[0x36],0) * -fVar66 + fVar69 * fVar75;
          fStack_270 = fVar46 * -((float)((ulong)*puVar13 >> 0x20) * fVar60 +
                                  (float)((ulong)puVar13[2] >> 0x20) * fVar45 +
                                 (float)((ulong)puVar13[4] >> 0x20) * fVar72 +
                                 (float)((ulong)puVar13[6] >> 0x20) * 0.0) + fStack_270;
          uVar63 = CONCAT44(fVar56,-(fVar71 * fVar75) + fVar66 * fVar46);
        }
        else {
          fVar56 = 0.0;
          if (ABS(fVar75) <= ABS(fVar46)) {
            fStack_270 = 0.0;
            uVar63 = (ulong)(uint)-fVar46;
          }
          else {
            fStack_270 = -fVar67;
            fVar67 = 0.0;
            uVar63 = uVar63 & 0xffffffff;
          }
        }
        fStack_280 = (float)uVar63;
        fVar60 = (float)(uVar63 >> 0x20);
        fVar60 = fVar67 * fVar67 + fStack_280 * fStack_280 +
                 fStack_270 * fStack_270 + fVar60 * fVar60;
        if (fVar60 == 0.0) {
          fStack_260 = 1.0;
          fVar45 = 0.0;
          fStack_270 = 0.0;
          fStack_280 = 0.0;
        }
        else {
          fVar60 = 1.0 / SQRT(fVar60);
          fStack_260 = fVar56 * fVar60;
          fStack_270 = fVar60 * fStack_270;
          fStack_280 = fVar60 * fStack_280;
          fVar45 = fVar60 * fVar67;
          fVar56 = fStack_270;
        }
        fVar79 = *(float *)(ppppppppuVar25 + 0x37);
        fVar82 = *(float *)((long)ppppppppuVar25 + 0x1bc);
        fVar83 = *(float *)(ppppppppuVar25 + 0x38);
        fVar84 = *(float *)((long)ppppppppuVar25 + 0x1c4);
        fVar71 = fVar45;
        FUN_10a2ce414(puVar8);
        fVar72 = fVar71;
        fVar75 = fVar56;
        fVar66 = fVar67;
        fVar69 = fVar60;
        FUN_10a2f1b50(*(undefined8 *)(CONCAT44(fStack_16c,fStack_170) + 0x188));
        func_0x00010a0d8ae0(lVar24);
        fVar46 = ((-(fStack_270 * fVar79) + fVar84 * fStack_260) - fVar82 * fStack_280) -
                 fVar83 * fVar45;
        fVar77 = (fStack_270 * fVar84 + fVar79 * fStack_260 + fVar83 * fStack_280) - fVar82 * fVar45
        ;
        fVar61 = (fStack_280 * fVar84 + fVar82 * fStack_260 + fVar79 * fVar45) - fVar83 * fStack_270
        ;
        fVar45 = (fVar45 * fVar84 + fVar83 * fStack_260 + fVar82 * fStack_270) - fVar79 * fStack_280
        ;
        fVar84 = ((-(fVar71 * fVar77) + fVar46 * fVar67) - fVar61 * fVar56) - fVar45 * fVar60;
        fVar74 = (fVar71 * fVar46 + fVar77 * fVar67 + fVar45 * fVar56) - fVar61 * fVar60;
        fVar83 = (fVar56 * fVar46 + fVar61 * fVar67 + fVar77 * fVar60) - fVar45 * fVar71;
        fVar85 = (fVar60 * fVar46 + fVar45 * fVar67 + fVar61 * fVar71) - fVar77 * fVar56;
        fVar56 = ((-(fVar72 * fVar74) + fVar84 * fVar66) - fVar83 * fVar75) - fVar85 * fVar69;
        fVar61 = (fVar72 * fVar84 + fVar74 * fVar66 + fVar85 * fVar75) - fVar83 * fVar69;
        fVar79 = (fVar75 * fVar84 + fVar83 * fVar66 + fVar74 * fVar69) - fVar85 * fVar72;
        fVar60 = (fVar69 * fVar84 + fVar85 * fVar66 + fVar83 * fVar72) - fVar74 * fVar75;
        fVar45 = *(float *)(lVar24 + 0x54);
        fVar72 = *(float *)(lVar24 + 0x58);
        fVar75 = *(float *)(lVar24 + 0x5c);
        fVar82 = *(float *)(lVar24 + 0x60);
        uStack_e0._0_4_ = fVar45 * fVar61 + fVar82 * fVar56 + fVar72 * fVar79 + fVar75 * fVar60;
        fStack_ec = ((fVar82 * fVar61 - fVar45 * fVar56) - fVar75 * fVar79) + fVar72 * fVar60;
        fStack_e8 = ((fVar82 * fVar79 - fVar72 * fVar56) - fVar45 * fVar60) + fVar75 * fVar61;
        fVar82 = fVar82 * fVar60;
        fStack_e4 = ((fVar82 - fVar75 * fVar56) - fVar72 * fVar61) + fVar45 * fVar79;
        fVar71 = fStack_e4;
        FUN_10a2f1bb8(lVar24);
        fVar86 = *(float *)((long)ppppppppuVar25 + 0x17c);
        fVar87 = *(float *)(ppppppppuVar25 + 0x30);
        fVar80 = *(float *)((long)ppppppppuVar25 + 0x184);
        uVar81 = *(undefined8 *)(lVar18 + 0x178);
        fVar72 = fVar71;
        fVar66 = fVar61;
        fVar69 = fVar79;
        FUN_10a2d1e28(puVar8);
        fVar56 = fVar72;
        fVar75 = fVar66;
        fVar67 = fVar69;
        FUN_10a2cd058(uVar81);
        fVar77 = *(float *)(ppppppppuVar25 + 0x3d);
        fVar60 = fVar75;
        fVar45 = fVar67;
        fVar46 = fVar77;
        FUN_10a2cd058(lVar24);
        lVar18 = *(long *)(CONCAT44(fStack_16c,fStack_170) + 0x188);
        if (lVar18 == 0) {
          fVar47 = 0.0;
          fVar49 = 0.0;
          fVar57 = 0.0;
          fVar73 = 1.0;
          fVar62 = 0.0;
          fVar68 = 0.0;
          fVar70 = 0.0;
          fVar76 = 1.0;
          fVar78 = 0.0;
          fVar88 = 0.0;
          fVar89 = 0.0;
          fVar91 = 1.0;
        }
        else {
          lVar18 = *(long *)(lVar18 + 0x140);
          if ((*(byte *)(lVar18 + 0x2a) >> 6 & 1) != 0) {
            func_0x00010a3e933c(lVar18);
          }
          fVar91 = *(float *)(lVar18 + 0x100);
          fVar89 = *(float *)(lVar18 + 0x104);
          fVar88 = *(float *)(lVar18 + 0x108);
          fVar78 = *(float *)(lVar18 + 0x110);
          fVar76 = *(float *)(lVar18 + 0x114);
          fVar70 = *(float *)(lVar18 + 0x118);
          fVar68 = *(float *)(lVar18 + 0x120);
          fVar62 = *(float *)(lVar18 + 0x124);
          fVar47 = (float)*(undefined8 *)(lVar18 + 0x130) * 0.0;
          fVar49 = (float)((ulong)*(undefined8 *)(lVar18 + 0x130) >> 0x20) * 0.0;
          fVar57 = *(float *)(lVar18 + 0x138) * 0.0;
          fVar73 = *(float *)(lVar18 + 0x128);
        }
        fVar86 = fVar86 * fVar71;
        fVar61 = fVar61 * fVar87;
        fVar79 = fVar79 * fVar80;
        fVar71 = fVar34 * 2.0 + -1.0;
        fVar80 = fVar51 * -2.0 + 1.0;
        fVar51 = fVar71 * fVar58 + fVar80 * fVar39 + fVar55 + fVar44;
        fVar34 = (fVar71 * fVar52 + fVar80 * fVar65 + fVar54 + fVar59) / fVar51 - fVar93;
        fVar36 = (fVar71 * fVar36 + fVar80 * fVar37 + fVar40 + fVar42) / fVar51 - fVar94;
        fVar37 = (fVar71 * fVar53 + fVar80 * fVar38 + fVar41 + fVar43) / fVar51 - fVar95;
        fVar38 = 1.0 / SQRT(fVar37 * fVar37 + fVar34 * fVar34 + fVar36 * fVar36);
        fVar51 = -(fVar61 * fVar85) + fVar79 * fVar83;
        fVar40 = -(fVar79 * fVar74) + fVar86 * fVar85;
        fVar42 = -(fVar86 * fVar83) + fVar61 * fVar74;
        fVar39 = fVar84 * fVar51 + -(fVar40 * fVar85) + fVar42 * fVar83;
        fVar41 = fVar84 * fVar40 + -(fVar42 * fVar74) + fVar51 * fVar85;
        fVar40 = fVar84 * fVar42 + -(fVar51 * fVar83) + fVar40 * fVar74;
        fVar51 = (fVar93 + fVar35 * fVar34 * fVar38) - (fVar86 + fVar39 + fVar39);
        fVar34 = (fVar94 + fVar35 * fVar36 * fVar38) - (fVar61 + fVar41 + fVar41);
        fVar35 = (fVar95 + fVar35 * fVar37 * fVar38) - (fVar79 + fVar40 + fVar40);
        fVar95 = fVar69 * (fVar67 - fVar82 * fVar69) +
                 fVar72 * (fVar56 - fVar82 * fVar72) + fVar66 * (fVar75 - fVar82 * fVar66);
        fVar93 = fVar69 * (fVar35 - fVar82 * fVar69) +
                 fVar66 * (fVar34 - fVar82 * fVar66) + fVar72 * (fVar51 - fVar82 * fVar72);
        fVar72 = (fVar72 * 0.0 + (fVar51 - fVar72 * fVar93)) -
                 (fVar72 * 0.0 + (fVar56 - fVar72 * fVar95));
        fVar94 = (fVar66 * 0.0 + (fVar34 - fVar66 * fVar93)) -
                 (fVar66 * 0.0 + (fVar75 - fVar66 * fVar95));
        fVar56 = (fVar69 * 0.0 + (fVar35 - fVar69 * fVar93)) -
                 (fVar69 * 0.0 + (fVar67 - fVar69 * fVar95));
        fVar93 = 1.0 / SQRT(fVar56 * fVar56 + fVar72 * fVar72 + fVar94 * fVar94);
        fVar46 = (fVar51 + fVar77 * fVar72 * fVar93) - fVar46;
        fVar60 = (fVar34 + fVar77 * fVar94 * fVar93) - fVar60;
        fVar45 = (fVar35 + fVar77 * fVar56 * fVar93) - fVar45;
        fStack_f0 = fVar57 + fVar45 * fVar73 + fVar60 * fVar70 + fVar46 * fVar88;
        uStack_f8 = (code *)CONCAT44(fVar49 + fVar45 * fVar62 + fVar60 * fVar76 + fVar46 * fVar89,
                                     fVar47 + fVar45 * fVar68 + fVar60 * fVar78 + fVar46 * fVar91);
      }
    }
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    bVar15 = (byte)ppppppppuStack_180;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if (((byte)ppppppppuStack_180 >> 4 & 1) != 0) {
      uStack_1d0 = FUN_10a2f2078;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2df8;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = (undefined ********)&uStack_f8;
      FUN_10a2f2000(pppppppuStack_158[3] + 0x7d,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      bVar15 = (byte)ppppppppuStack_180;
    }
    ppppppppuVar25 = (undefined ********)(ulong)bVar15;
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if ((bVar15 >> 5 & 1) != 0) {
      ppppppppuVar25 = (undefined ********)&ppppppppuStack_1c8;
      uStack_1d0 = FUN_10a2f228c;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2e18;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = (undefined ********)&uStack_f8;
      FUN_10a2f2000(pppppppuStack_158[3] + 0x7d,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(ppppppppuVar25);
    }
    ppppppppuVar14 = (undefined ********)&uStack_f8;
    goto LAB_10a2d0bd4;
  }
  bVar10 = false;
  lVar18 = 0;
  ppppppppuVar14 = param_5 + 0x5a;
  do {
    if ((*(byte *)((long)param_5 + 0x1f1) >> (ulong)((uint)lVar18 & 0x1f) & 1) != 0) {
      bVar10 = *(char *)ppppppppuVar14 != '\0' || bVar10 != false;
    }
    lVar18 = lVar18 + 1;
    ppppppppuVar14 = (undefined ********)((long)ppppppppuVar14 + 0x7c);
  } while (lVar18 != 6);
  if (bVar10 != false) {
    ppppppppuVar25 = (undefined ********)param_5[0x2f];
    uStack_178 = ppppppppuVar29;
    func_0x00010a0d8ae0(ppppppppuVar25);
    fVar50 = fStack_208;
    fVar48 = fStack_20c;
    fVar35 = *(float *)(ppppppppuVar25 + 0x13) + uStack_228._4_4_;
    ppppppppuStack_1c8 =
         (undefined ********)
         CONCAT44(ppppppppuStack_1c8._4_4_,*(float *)((long)ppppppppuVar25 + 0x9c) + fStack_220);
    pppppppuVar31 = ppppppppuVar25[9];
    fVar34 = *(float *)((long)param_5 + 0x1fc);
    if (fVar35 <= *(float *)((long)param_5 + 0x1fc)) {
      fVar34 = fVar35;
    }
    fVar51 = *(float *)(param_5 + 0x3f);
    if (*(float *)(param_5 + 0x3f) <= fVar35) {
      fVar51 = fVar34;
    }
    uVar81 = *(undefined8 *)((long)ppppppppuVar25 + 0x54);
    fVar60 = (float)uVar81;
    fVar56 = *(float *)(ppppppppuVar25 + 0xc);
    uStack_1d0 = (code *)CONCAT44(fVar51,*(float *)((long)ppppppppuVar25 + 0x94) + (float)uStack_228
                                 );
    uVar92 = NEON_ext(uVar81,CONCAT44(fVar60,fVar56),4,1);
    uVar90 = NEON_ext(CONCAT44(fStack_214,fStack_218),CONCAT44(-fStack_214,-fStack_218),4,1);
    fVar51 = (float)((ulong)uVar81 >> 0x20);
    fVar45 = (float)((ulong)ppppppppuVar25[0xb] >> 0x20);
    fVar34 = (fVar56 * fStack_218 + (float)uVar92 * fStack_210 + fVar60 * (float)uVar90) -
             fStack_21c * fVar45;
    fVar35 = (fVar60 * -fStack_21c + (float)((ulong)uVar92 >> 0x20) * fStack_210 +
             fVar51 * (float)((ulong)uVar90 >> 0x20)) - fStack_214 * fVar45;
    uVar81 = NEON_rev64(CONCAT44(fStack_214 * fVar56 + fVar45 * fStack_210,
                                 fStack_21c * fVar56 + fVar60 * fStack_210),4);
    dVar64 = (double)CONCAT44((float)((ulong)uVar81 >> 0x20) + fVar45 * fStack_218,
                              (float)uVar81 + SUB84(ppppppppuVar25[0xb],0) * fStack_21c) -
             (double)CONCAT44(fVar51 * fStack_214,fVar60 * fStack_218);
    fVar51 = SUB84(dVar64,0);
    fVar56 = (float)((ulong)dVar64 >> 0x20);
    fVar60 = fVar34 * fVar34 + fVar51 * fVar51 + fVar35 * fVar35 + fVar56 * fVar56;
    if (fVar60 == 0.0) {
      fVar35 = 1.0;
      fVar56 = 0.0;
      fVar34 = 0.0;
      fVar60 = 0.0;
    }
    else {
      fVar60 = 1.0 / SQRT(fVar60);
      fVar35 = fVar60 * fVar35;
      fVar56 = fVar60 * fVar56;
      fVar34 = fVar60 * fVar34;
      fVar60 = fVar60 * fVar51;
    }
    fVar72 = *(float *)(param_5 + 0x40);
    fVar45 = *(float *)((long)param_5 + 0x204);
    fVar51 = fVar72;
    if (fVar72 <= fStack_204 * *(float *)(ppppppppuVar25 + 10)) {
      fVar51 = fStack_204 * *(float *)(ppppppppuVar25 + 10);
    }
    fVar93 = fVar45;
    if (fVar51 <= fVar45) {
      fVar93 = fVar51;
    }
    fVar94 = fVar45;
    fVar95 = fVar72;
    FUN_10a2cd058(ppppppppuVar25);
    fStack_f0 = fVar95;
    uStack_f8 = (code *)CONCAT44(fVar94,fVar51);
    FUN_10a3e3894(ppppppppuVar25,&uStack_1d0);
    fVar48 = fVar48 * SUB84(pppppppuVar31,0);
    fVar50 = fVar50 * (float)((ulong)pppppppuVar31 >> 0x20);
    uVar63 = CONCAT44(fVar50,fVar48);
    uVar63 = uVar63 ^ (uVar63 ^ CONCAT44(fVar72,fVar72)) &
                      CONCAT44(-(uint)(fVar50 < fVar72),-(uint)(fVar48 < fVar72));
    ppppppppuStack_180 =
         (undefined ********)
         (uVar63 ^ (uVar63 ^ CONCAT44(fVar45,fVar45)) &
                   CONCAT44(-(uint)(fVar45 < (float)(uVar63 >> 0x20)),
                            -(uint)(fVar45 < (float)uVar63)));
    uStack_178._0_4_ = fVar93;
    uStack_178._4_4_ = fVar56;
    fStack_170 = fVar34;
    fStack_16c = fVar60;
    fStack_168 = fVar35;
    FUN_10a3e38dc(ppppppppuVar25,&ppppppppuStack_180);
    FUN_10a2d1530(param_5,&uStack_f8);
    ppppppppuVar12 = param_5;
    FUN_10a2d1924();
    ppppppppuVar29 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
  }
  uStack_178 = ppppppppuVar29;
  if (bVar10 != (bool)(*(byte *)(param_5 + 0x3e) & 1)) {
    *(byte *)(param_5 + 0x3e) = *(byte *)(param_5 + 0x3e) & 0xfe | bVar10;
    if (bVar10 == false) {
      ppppppppuVar25 = (undefined ********)param_5[0x45];
      ppppppppuVar14 = (undefined ********)0x30;
      __Znwm();
      ppppppppuVar11 = ppppppppuVar14 + 1;
      *ppppppppuVar11 = (undefined *******)0x0;
      ppppppppuVar14[2] = (undefined *******)0x0;
      *ppppppppuVar14 = (undefined *******)&PTR_FUN_110bc2c68;
      ppppppppuVar14[4] = (undefined *******)0x0;
      ppppppppuVar14[5] = (undefined *******)0x0;
      ppppppppuStack_180 = ppppppppuVar14 + 3;
      *ppppppppuStack_180 = (undefined *******)&PTR_DAT_110bfb810;
      uStack_178._0_4_ = SUB84(ppppppppuVar14,0);
      uStack_178._4_4_ = (float)((ulong)ppppppppuVar14 >> 0x20);
      ppppppppuVar12 = ppppppppuVar25;
      FUN_10a2cee14(ppppppppuVar25,&ppppppppuStack_180);
      do {
        pppppppuVar31 = *ppppppppuVar11;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
        if (bVar10) {
          *ppppppppuVar11 = (undefined *******)((long)pppppppuVar31 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      pppppppuVar31 = param_5[0x43];
      ppppppppuVar14 = (undefined ********)0x30;
      __Znwm();
      ppppppppuVar14[1] = (undefined *******)0x0;
      ppppppppuVar14[2] = (undefined *******)0x0;
      *ppppppppuVar14 = (undefined *******)&PTR_FUN_110bc2d20;
      ppppppppuVar14[4] = (undefined *******)0x0;
      ppppppppuVar14[5] = (undefined *******)0x0;
      ppppppppuStack_200 = ppppppppuVar14 + 3;
      *ppppppppuStack_200 = (undefined *******)&PTR_DAT_110bfb7b8;
      uStack_1f8 = SUB84(ppppppppuVar14,0);
      fStack_1f4 = (float)((ulong)ppppppppuVar14 >> 0x20);
      ppppppppuStack_1c8 = (undefined ********)0x0;
      uStack_1d0 = (code *)0x0;
      ppppppppuStack_1b8 = (undefined ********)0x0;
      ppppppppuStack_1c0 = (undefined ********)0x0;
      pppppppuStack_1b0 =
           (undefined *******)CONCAT44(pppppppuStack_1b0._4_4_,*(undefined4 *)(pppppppuVar31 + 7));
      FUN_10a2ec928(&uStack_1d0,pppppppuVar31[4]);
      ppppppuVar33 = pppppppuVar31[5];
      if (ppppppuVar33 != (undefined ******)0x0) {
        do {
          ppppppppuVar12 = ppppppppuStack_1c8;
          pppppuVar26 = ppppppuVar33[2];
          uVar63 = ((ulong)(uint)((int)pppppuVar26 << 3) + 8 ^ (ulong)pppppuVar26 >> 0x20) *
                   -0x622015f714c7d297;
          uVar63 = ((ulong)pppppuVar26 >> 0x20 ^ uVar63 >> 0x2f ^ uVar63) * -0x622015f714c7d297;
          ppppppppuVar29 = (undefined ********)((uVar63 ^ uVar63 >> 0x2f) * -0x622015f714c7d297);
          if (ppppppppuStack_1c8 != (undefined ********)0x0) {
            uVar63 = (long)ppppppppuStack_1c8 - 1;
            if (((ulong)ppppppppuStack_1c8 & uVar63) == 0) {
              ppppppppuVar11 = (undefined ********)((ulong)ppppppppuVar29 & uVar63);
            }
            else {
              ppppppppuVar11 = ppppppppuVar29;
              if (ppppppppuStack_1c8 <= ppppppppuVar29) {
                uVar20 = 0;
                if (ppppppppuStack_1c8 != (undefined ********)0x0) {
                  uVar20 = (ulong)ppppppppuVar29 / (ulong)ppppppppuStack_1c8;
                }
                ppppppppuVar11 =
                     (undefined ********)((long)ppppppppuVar29 - uVar20 * (long)ppppppppuStack_1c8);
              }
            }
            ppppppuVar21 = *(undefined *******)((long)uStack_1d0 + ppppppppuVar11 * 8);
            if (ppppppuVar21 != (undefined ******)0x0) {
              do {
                while( true ) {
                  ppppppuVar21 = (undefined ******)*ppppppuVar21;
                  if (ppppppuVar21 == (undefined ******)0x0) goto LAB_10a2d0f08;
                  ppppppppuVar22 = (undefined ********)ppppppuVar21[1];
                  if (ppppppppuVar22 != ppppppppuVar29) break;
                  if (ppppppuVar21[2] == pppppuVar26) goto LAB_10a2d1068;
                }
                if (((ulong)ppppppppuStack_1c8 & uVar63) == 0) {
                  ppppppppuVar22 = (undefined ********)((ulong)ppppppppuVar22 & uVar63);
                }
                else if (ppppppppuStack_1c8 <= ppppppppuVar22) {
                  uVar20 = 0;
                  if (ppppppppuStack_1c8 != (undefined ********)0x0) {
                    uVar20 = (ulong)ppppppppuVar22 / (ulong)ppppppppuStack_1c8;
                  }
                  ppppppppuVar22 =
                       (undefined ********)
                       ((long)ppppppppuVar22 - uVar20 * (long)ppppppppuStack_1c8);
                }
              } while (ppppppppuVar22 == ppppppppuVar11);
            }
          }
LAB_10a2d0f08:
          ppppppppuVar25 = (undefined ********)0x68;
          __Znwm();
          *ppppppppuVar25 = (undefined *******)0x0;
          ppppppppuVar25[1] = (undefined *******)ppppppppuVar29;
          pppppuVar26 = ppppppuVar33[3];
          pppppppuVar32 = (undefined *******)ppppppuVar33[2];
          ppppppppuVar25[3] = (undefined *******)ppppppuVar33[3];
          ppppppppuVar25[2] = pppppppuVar32;
          if (pppppuVar26 != (undefined *****)0x0) {
            pppppuVar26 = pppppuVar26 + 1;
            do {
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pppppuVar26,0x10);
              if (bVar10) {
                *pppppuVar26 = (undefined ****)((long)*pppppuVar26 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppppppppuStack_180 = ppppppppuVar25 + 4;
          *(undefined1 *)(ppppppppuVar25 + 0xc) = 3;
          if (*(char *)(ppppppuVar33 + 0xc) == '\0') {
            uVar17 = 0;
          }
          else {
            FUN_10a005398(&ppppppppuStack_180,ppppppuVar33 + 4);
            uVar17 = *(undefined1 *)(ppppppuVar33 + 0xc);
          }
          *(undefined1 *)(ppppppppuVar25 + 0xc) = uVar17;
          if ((ppppppppuVar12 == (undefined ********)0x0) ||
             (pppppppuStack_1b0._0_4_ * (float)ppppppppuVar12 <
              (float)((long)ppppppppuStack_1b8 + 1))) {
            uVar63 = 1;
            if ((undefined ********)0x2 < ppppppppuVar12) {
              uVar63 = (ulong)(((ulong)ppppppppuVar12 & (long)ppppppppuVar12 - 1U) != 0);
            }
            uVar63 = uVar63 | (long)ppppppppuVar12 << 1;
            uVar20 = (ulong)((float)((long)ppppppppuStack_1b8 + 1) / pppppppuStack_1b0._0_4_);
            if (uVar63 <= uVar20) {
              uVar63 = uVar20;
            }
            FUN_10a2ec928(&uStack_1d0,uVar63);
            ppppppppuVar12 = ppppppppuStack_1c8;
            if (((ulong)ppppppppuStack_1c8 & (long)ppppppppuStack_1c8 - 1U) == 0) {
              ppppppppuVar11 =
                   (undefined ********)((long)ppppppppuStack_1c8 - 1U & (ulong)ppppppppuVar29);
            }
            else {
              ppppppppuVar11 = ppppppppuVar29;
              if (ppppppppuStack_1c8 <= ppppppppuVar29) {
                uVar63 = 0;
                if (ppppppppuStack_1c8 != (undefined ********)0x0) {
                  uVar63 = (ulong)ppppppppuVar29 / (ulong)ppppppppuStack_1c8;
                }
                ppppppppuVar11 =
                     (undefined ********)((long)ppppppppuVar29 - uVar63 * (long)ppppppppuStack_1c8);
              }
            }
          }
          ppppppuVar21 = *(undefined *******)((long)uStack_1d0 + ppppppppuVar11 * 8);
          if (ppppppuVar21 == (undefined ******)0x0) {
            *ppppppppuVar25 = (undefined *******)ppppppppuStack_1c0;
            *(undefined **********)((long)uStack_1d0 + ppppppppuVar11 * 8) = &ppppppppuStack_1c0;
            ppppppppuStack_1c0 = ppppppppuVar25;
            if (*ppppppppuVar25 != (undefined *******)0x0) {
              ppppppppuVar29 = (undefined ********)(*ppppppppuVar25)[1];
              if (((ulong)ppppppppuVar12 & (long)ppppppppuVar12 - 1U) == 0) {
                ppppppppuVar29 =
                     (undefined ********)((ulong)ppppppppuVar29 & (long)ppppppppuVar12 - 1U);
              }
              else if (ppppppppuVar12 <= ppppppppuVar29) {
                uVar63 = 0;
                if (ppppppppuVar12 != (undefined ********)0x0) {
                  uVar63 = (ulong)ppppppppuVar29 / (ulong)ppppppppuVar12;
                }
                ppppppppuVar29 =
                     (undefined ********)((long)ppppppppuVar29 - uVar63 * (long)ppppppppuVar12);
              }
              *(undefined *********)((long)uStack_1d0 + ppppppppuVar29 * 8) = ppppppppuVar25;
            }
          }
          else {
            *ppppppppuVar25 = (undefined *******)*ppppppuVar21;
            *ppppppuVar21 = (undefined *****)ppppppppuVar25;
          }
          ppppppppuStack_1b8 = (undefined ********)((long)ppppppppuStack_1b8 + 1);
LAB_10a2d1068:
          ppppppuVar33 = (undefined ******)*ppppppuVar33;
        } while (ppppppuVar33 != (undefined ******)0x0);
      }
      ppppppppuVar11 = ppppppppuStack_1c0;
      if (ppppppppuStack_1c0 == (undefined ********)0x0) {
        ppppppppuVar12 = (undefined ********)&uStack_1d0;
        FUN_10a2ef610();
      }
      else {
        do {
          pppppppuVar19 = ppppppppuVar11[2];
          pppppppuVar32 = pppppppuVar31 + 3;
          FUN_10a2ed338();
          ppppppppuVar12 = uStack_178;
          if (pppppppuVar32 != (undefined *******)0x0) {
            if (*(char *)(ppppppppuVar11 + 0xc) == '\x01') {
              pppppppuVar32 = ppppppppuVar11[4];
              uStack_178._0_4_ = (float)uStack_1f8;
              uStack_178._4_4_ = fStack_1f4;
              ppppppppuStack_180 = ppppppppuStack_200;
              if (CONCAT44(fStack_1f4,uStack_1f8) != 0) {
                plVar23 = (long *)(CONCAT44(fStack_1f4,uStack_1f8) + 8);
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar10) {
                    *plVar23 = *plVar23 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              (*(code *)pppppppuVar32)(&ppppppppuStack_180,ppppppppuVar11 + 4);
              plVar23 = (long *)CONCAT44(uStack_178._4_4_,(float)uStack_178);
              ppppppppuVar12 = (undefined ********)0x0;
              if (plVar23 != (long *)0x0) {
                plVar1 = plVar23 + 1;
                do {
                  lVar18 = *plVar1;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar10) {
                    *plVar1 = lVar18 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
LAB_10a2d114c:
                ppppppppuVar12 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
                if (lVar18 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
                  ppppppppuVar12 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
                }
              }
            }
            else if (*(char *)(ppppppppuVar11 + 0xc) == '\x02') {
              ppppppppuVar25 = ppppppppuVar11 + 4;
              FUN_10a688b40();
              if (ppppppppuVar25 == (undefined ********)0x0) {
                ppppppppuVar12 = uStack_178;
                if (pppppppuVar19 != (undefined *******)0x0) {
                  pppppppuVar32 = ppppppppuVar11[4];
                  pppppppuVar4 = ppppppppuVar11[5];
                  if (pppppppuVar4 != (undefined *******)0x0) {
                    pppppppuVar7 = pppppppuVar4 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
                      if (bVar10) {
                        *pppppppuVar7 = (undefined ******)((long)*pppppppuVar7 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  pppppppuVar7 = (undefined *******)CONCAT44(fStack_1f4,uStack_1f8);
                  fStack_e8 = SUB84(ppppppppuStack_200,0);
                  fStack_e4 = (float)((ulong)ppppppppuStack_200 >> 0x20);
                  uStack_e0._0_4_ = (float)uStack_1f8;
                  uStack_e0._4_4_ = fStack_1f4;
                  fStack_16c = (float)((ulong)pppppppuVar32 >> 0x20);
                  fStack_164 = (float)((ulong)pppppppuVar4 >> 0x20);
                  if (pppppppuVar7 == (undefined *******)0x0) {
                    pppppppuStack_158 = (undefined *******)0x0;
                  }
                  else {
                    pppppppuVar2 = pppppppuVar7 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar2,0x10);
                      if (bVar10) {
                        *pppppppuVar2 = (undefined ******)((long)*pppppppuVar2 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    do {
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar2,0x10);
                      if (bVar10) {
                        *pppppppuVar2 = (undefined ******)((long)*pppppppuVar2 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      pppppppuStack_158 = pppppppuVar7;
                    } while (cVar5 != '\0');
                  }
                  fStack_ec = 0.0;
                  fStack_f0 = 0.0;
                  uStack_f8 = (code *)0x0;
                  fStack_168 = SUB84(pppppppuVar4,0);
                  fStack_170 = SUB84(pppppppuVar32,0);
                  uStack_178._4_4_ = 1.4013e-45;
                  uStack_178._0_4_ = 7.4222836e-29;
                  ppppppppuStack_180 = (undefined ********)FUN_10a2f0108;
                  fStack_160 = fStack_e8;
                  uStack_15c = fStack_e4;
                  FUN_10a4634ec(pppppppuVar19,&ppppppppuStack_180);
                  (**(code **)CONCAT44(uStack_178._4_4_,(float)uStack_178))(&uStack_178);
                  if (pppppppuVar7 != (undefined *******)0x0) {
                    pppppppuVar32 = pppppppuVar7 + 1;
                    do {
                      ppppppuVar33 = *pppppppuVar32;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
                      if (bVar10) {
                        *pppppppuVar32 = (undefined ******)((long)ppppppuVar33 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (ppppppuVar33 == (undefined ******)0x0) {
                      (*(code *)(*pppppppuVar7)[2])(pppppppuVar7);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar7);
                    }
                  }
                  plVar23 = (long *)CONCAT44(fStack_ec,fStack_f0);
                  ppppppppuVar12 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
                  if (plVar23 != (long *)0x0) {
                    plVar1 = plVar23 + 1;
                    do {
                      lVar18 = *plVar1;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar10) {
                        *plVar1 = lVar18 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    goto LAB_10a2d114c;
                  }
                }
              }
              else {
                *ppppppppuVar25 =
                     (undefined *******)
                     CONCAT44((int)((ulong)*ppppppppuVar25 >> 0x20) + 1,(int)*ppppppppuVar25 + 1);
                FUN_10a2eff04(ppppppppuVar11[4],&ppppppppuStack_200);
                iVar6 = *(int *)((long)ppppppppuVar25 + 4) + -1;
                *(int *)((long)ppppppppuVar25 + 4) = iVar6;
                ppppppppuVar12 = uStack_178;
                if (iVar6 == 0) {
                  *(undefined4 *)ppppppppuVar25 = 0;
                }
              }
            }
          }
          uStack_178 = ppppppppuVar12;
          ppppppppuVar11 = (undefined ********)*ppppppppuVar11;
        } while (ppppppppuVar11 != (undefined ********)0x0);
        ppppppppuVar14 = (undefined ********)CONCAT44(fStack_1f4,uStack_1f8);
        ppppppppuVar12 = (undefined ********)&uStack_1d0;
        FUN_10a2ef610();
        if (ppppppppuVar14 == (undefined ********)0x0) goto LAB_10a2d12e8;
      }
      ppppppppuVar11 = ppppppppuVar14 + 1;
      do {
        pppppppuVar31 = *ppppppppuVar11;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
        if (bVar10) {
          *ppppppppuVar11 = (undefined *******)((long)pppppppuVar31 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (pppppppuVar31 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar14)[2])(ppppppppuVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppppuVar12 = ppppppppuVar14;
    }
  }
LAB_10a2d12e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppppppppuVar12;
  }
LAB_10a2d1360:
  ___stack_chk_fail();
  (*(code *)**ppppppppuVar25)(ppppppppuVar25);
  __Unwind_Resume();
  pppppppuVar31 = ppppppppuVar12[0xa9];
  if (pppppppuVar31 != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (pppppppuVar31 != (undefined *******)0x0) {
      ppppppppuVar11 = (undefined ********)ppppppppuVar12[0xa8];
      pppppppuVar32 = pppppppuVar31 + 1;
      do {
        ppppppuVar33 = *pppppppuVar32;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
        if (bVar10) {
          *pppppppuVar32 = (undefined ******)((long)ppppppuVar33 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppppuVar33 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar31)[2])(pppppppuVar31);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar31);
      }
      if (ppppppppuVar11 != (undefined ********)0x0) {
        return ppppppppuVar11;
      }
    }
  }
  FUN_10a2ce8e4(ppppppppuVar12);
  pppppppuVar31 = ppppppppuVar12[0xa9];
  if (pppppppuVar31 != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (pppppppuVar31 != (undefined *******)0x0) {
      ppppppppuVar11 = (undefined ********)ppppppppuVar12[0xa8];
      pppppppuVar32 = pppppppuVar31 + 1;
      do {
        ppppppuVar33 = *pppppppuVar32;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
        if (bVar10) {
          *pppppppuVar32 = (undefined ******)((long)ppppppuVar33 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppppuVar33 != (undefined ******)0x0) {
        return ppppppppuVar11;
      }
      (*(code *)(*pppppppuVar31)[2])(pppppppuVar31);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar31);
      return ppppppppuVar11;
    }
  }
  return (undefined ********)0x0;
}



/* Entry: 10a2d145c; end: 10a2d152f;  */

long FUN_10a2d145c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x548);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = *(long *)(param_1 + 0x540);
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
    if (lVar6 != 0) {
      return lVar6;
    }
  }
  FUN_10a2ce8e4(param_1);
  plVar4 = *(long **)(param_1 + 0x548);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x540);
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
  return lVar6;
}



/* Entry: 10a2d1530; end: 10a2d1923;  */

void FUN_10a2d1530(float param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  float fVar14;
  ulong uVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long *plStack_88;
  ulong uVar18;
  
  lVar7 = param_5;
  FUN_10a2d145c();
  lVar9 = *(long *)(param_5 + 0x178);
  lVar4 = lVar7;
  FUN_10a601e00();
  uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x168) + 0x140);
  FUN_10a2d1e28(*(undefined8 *)(param_5 + 0x550));
  fVar29 = param_1;
  fVar16 = param_2;
  fVar17 = param_3;
  FUN_10a2cd058(uVar11);
  fVar23 = param_4 * param_3;
  fVar24 = param_3 * 0.0;
  fVar21 = (float)((ulong)*param_6 >> 0x20);
  fVar27 = param_1 * 0.0;
  fVar28 = param_2 * 0.0;
  fVar30 = param_1 * param_4;
  param_4 = param_2 * param_4;
  fVar22 = (float)*param_6;
  uVar11 = NEON_rev64(CONCAT44(param_2 * (fVar16 - param_4),param_1 * (fVar22 - fVar30)),4);
  fVar15 = param_1 * (fVar29 - fVar30) + (float)uVar11 + (fVar17 - fVar23) * param_3;
  fVar19 = param_2 * (fVar21 - param_4) + (float)((ulong)uVar11 >> 0x20) +
           (*(float *)(param_6 + 1) - fVar23) * param_3;
  fVar25 = fVar27 + (fVar29 - param_1 * fVar15);
  fVar26 = fVar28 + (fVar16 - param_2 * fVar15);
  fVar16 = fVar17 - fVar15 * param_3;
  fVar15 = fVar24 + fVar16;
  fVar14 = fVar24 + (*(float *)(param_6 + 1) - fVar19 * param_3);
  fVar29 = fVar15;
  FUN_10a2cd058(lVar9);
  fVar30 = param_3 * (fVar17 - fVar23) + param_1 * (fVar29 - fVar30) + param_2 * (fVar16 - param_4);
  fVar23 = (fVar27 + (fVar22 - param_1 * fVar19)) - fVar25;
  fVar19 = (fVar28 + (fVar21 - param_2 * fVar19)) - fVar26;
  fVar21 = fVar14 - fVar15;
  fVar22 = 1.0 / SQRT(fVar21 * fVar21 + fVar23 * fVar23 + fVar19 * fVar19);
  fVar23 = fVar23 * fVar22;
  fVar19 = fVar19 * fVar22;
  uVar20 = CONCAT44(fVar19,fVar23);
  fVar22 = fVar22 * fVar21;
  fVar17 = ((fVar24 + (fVar17 - param_3 * fVar30)) - fVar15) * fVar22;
  uVar18 = (ulong)(uint)fVar17;
  fVar29 = fVar17 + ((fVar27 + (fVar29 - param_1 * fVar30)) - fVar25) * fVar23 +
                    ((fVar28 + (fVar16 - param_2 * fVar30)) - fVar26) * fVar19;
  plVar10 = *(long **)(lVar7 + 0x388);
  plVar12 = *(long **)(lVar7 + 0x390);
  fVar16 = fVar23;
  do {
    if (plVar10 == plVar12) {
      fVar15 = *(float *)(param_5 + 0x208);
      if (fVar29 < fVar15) {
        FUN_10a2cd058(lVar9);
        fVar29 = *(float *)(param_5 + 0x208) - fVar29;
        uStack_130 = CONCAT44(fVar17 + fVar29 * fVar19,fVar15 + fVar29 * fVar23);
        uStack_128 = CONCAT44(uStack_128._4_4_,fVar16 + fVar22 * fVar29);
        FUN_10a3e8ad4(lVar9,&uStack_130);
      }
      return;
    }
    plVar5 = (long *)plVar10[1];
    if ((plVar5 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_88 = plVar5, plVar5 != (long *)0x0)) {
      lStack_90 = *plVar10;
      if ((lStack_90 != 0) && (plVar6 = *(long **)(lStack_90 + 0x260), plVar6 != (long *)0x0)) {
        FUN_10a347d04();
        if (plVar6 == (long *)0x0) {
          uStack_a8 = 0xff7fffff00000000;
          uStack_b0 = 0;
          uStack_a0 = 0xff7fffffff7fffff;
          bVar2 = true;
          uVar13 = 0xff7fffff;
          uVar18 = uVar13;
        }
        else {
          (**(code **)(*plVar6 + 0x38))(&uStack_b0);
          uVar13 = uStack_a8 >> 0x20;
          bVar2 = uStack_a0._4_4_ < 0.0;
          uVar18 = uStack_a0 & 0xffffffff;
        }
        iVar8 = 0;
        while ((uVar20 = uVar18, iVar8 == 1 || (uVar20 = uVar13, iVar8 != 2))) {
          bVar3 = (float)uVar20 < 0.0;
          while (iVar8 = iVar8 + 1, bVar3) {
            if (iVar8 == 2) goto LAB_10a2d185c;
            bVar3 = true;
          }
        }
        if (!bVar2) {
          if ((*(byte *)(lVar9 + 0x2a) & 0x24) != 0) {
            FUN_10a3e8fd4(lVar9);
          }
          FUN_10a005558(auStack_c8,&uStack_b0,lVar9 + 0xc0);
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          FUN_10a00561c(auStack_c8,&uStack_130,8);
          lVar7 = 0;
          do {
            fVar16 = fVar23 * ((float)*(undefined8 *)((long)&uStack_130 + lVar7) - fVar25) +
                     fVar19 * ((float)((ulong)*(undefined8 *)((long)&uStack_130 + lVar7) >> 0x20) -
                              fVar26);
            uVar18 = (ulong)(uint)fVar16;
            fVar16 = fVar16 + fVar22 * (*(float *)((long)&uStack_128 + lVar7) - fVar15);
            if (fVar29 <= fVar16) {
              fVar16 = fVar29;
            }
            fVar29 = fVar16;
            lVar7 = lVar7 + 0xc;
            uVar20 = CONCAT44(fVar14,fVar15);
          } while (lVar7 != 0x60);
        }
      }
LAB_10a2d185c:
      plVar6 = plVar5 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    fVar16 = (float)uVar20;
    fVar17 = (float)uVar18;
    plVar10 = plVar10 + 2;
  } while( true );
}



/* Entry: 10a2d1924; end: 10a2d1ad3;  */

void FUN_10a2d1924(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_50;
  float fStack_48;
  
  lVar1 = param_5;
  FUN_10a2d145c();
  uVar2 = *(undefined8 *)(param_5 + 0x178);
  FUN_10a601e00();
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x168) + 0x140);
  FUN_10a2d1e28(*(undefined8 *)(param_5 + 0x550));
  fVar7 = param_2;
  fVar11 = param_1;
  fVar6 = param_3;
  FUN_10a2cd058(uVar3);
  fVar4 = param_3 * 0.0;
  fVar5 = fVar4;
  fVar12 = param_3;
  fVar8 = fVar6;
  FUN_10a2cd058(uVar2);
  uVar3 = NEON_rev64(CONCAT44(param_2 * (fVar7 - param_2 * param_4),
                              param_1 * (fVar5 - param_1 * param_4)),4);
  fVar9 = (fVar6 - param_4 * param_3) * param_3 +
          param_1 * (fVar11 - param_1 * param_4) + (float)uVar3;
  fVar10 = (fVar8 - param_4 * param_3) * param_3 +
           param_2 * (fVar12 - param_2 * param_4) + (float)((ulong)uVar3 >> 0x20);
  fVar11 = (param_1 * 0.0 + (fVar5 - param_1 * fVar10)) -
           (param_1 * 0.0 + (fVar11 - param_1 * fVar9));
  fVar12 = (param_2 * 0.0 + (fVar12 - param_2 * fVar10)) -
           (param_2 * 0.0 + (fVar7 - param_2 * fVar9));
  fVar5 = (fVar4 + (fVar8 - fVar10 * param_3)) - (fVar4 + (fVar6 - fVar9 * param_3));
  fVar7 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar12 * fVar12);
  fStack_48 = *(float *)(param_5 + 0x20c);
  if (fStack_48 < fVar7) {
    fVar4 = 1.0 / fVar7;
    fVar6 = fStack_48 - fVar7;
    fVar8 = fVar6;
    FUN_10a2cd058(uVar2);
    fStack_48 = fVar6 * fVar4 * fVar5 + fStack_48;
    uStack_50 = CONCAT44(fVar12 * fVar4 * fVar6 + fVar7,fVar11 * fVar4 * fVar6 + fVar8);
    FUN_10a3e8ad4(uVar2,&uStack_50);
  }
  return;
}



/* Entry: 10a2d1ad4; end: 10a2d1adb;  */

/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_10a2d1ad4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5)

{
  byte *pbVar1;
  long *plVar2;
  undefined *******pppppppuVar3;
  undefined *******pppppppuVar4;
  undefined *******pppppppuVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined8 *puVar13;
  undefined ********ppppppppuVar14;
  byte bVar15;
  byte bVar16;
  undefined1 uVar17;
  undefined *****pppppuVar18;
  undefined *******pppppppuVar19;
  ulong uVar20;
  undefined ******ppppppuVar21;
  char *pcVar22;
  undefined ********ppppppppuVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  bool bVar27;
  undefined ********ppppppppuVar28;
  long lVar29;
  undefined ********ppppppppuVar30;
  long *plVar31;
  undefined8 uVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  ulong uVar63;
  double dVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fStack_280;
  float fStack_270;
  float fStack_260;
  undefined8 uStack_228;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined ********ppppppppuStack_200;
  undefined4 uStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined8 uStack_1e4;
  float fStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined ********ppppppppuStack_1c8;
  undefined ********ppppppppuStack_1c0;
  undefined ********ppppppppuStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  byte *pbStack_190;
  undefined ********ppppppppuStack_180;
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  long *plStack_158;
  long lStack_150;
  ulong uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_b8;
  
  ppppppppuVar14 = (undefined ********)(param_5 + -0x68);
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a2ceb70();
  ppppppppuVar23 = ppppppppuVar14;
  FUN_10a2d145c();
  bVar15 = *(byte *)(param_5 + 0x189);
  uVar25 = (uint)bVar15;
  uVar32 = *(undefined8 *)(param_5 + 0x4e8);
  ppppppppuVar11 = *(undefined *********)(param_5 + 0x100);
  plVar31 = *(long **)(*(long *)(param_5 + 0x108) + 0x830);
  lVar33 = *(long *)(*(long *)(param_5 + 0x108) + 0xba8);
  ppppppppuVar12 = ppppppppuVar23;
  if (*(char *)((long)ppppppppuVar23 + 0x3b1) == '\x01') {
    ppppppppuVar12 = *(undefined *********)(lVar33 + 0x38);
    if ((ppppppppuVar12 != (undefined ********)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), ppppppppuVar12 != (undefined ********)0x0)) {
      ppppppppuVar28 = *(undefined *********)(lVar33 + 0x30);
      ppppppppuVar30 = ppppppppuVar12 + 1;
      do {
        pppppppuVar19 = *ppppppppuVar30;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar30,0x10);
        if (bVar10) {
          *ppppppppuVar30 = (undefined *******)((long)pppppppuVar19 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (pppppppuVar19 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuVar12)[2])(ppppppppuVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (ppppppppuVar28 == ppppppppuVar23) goto LAB_10a2cfd18;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      lVar33 = 0;
      bVar15 = 0;
      do {
        bVar15 = *(byte *)(param_5 + 0x268 + lVar33) | bVar15;
        *(undefined1 *)(param_5 + 0x268 + lVar33) = 0;
        lVar33 = lVar33 + 0x7c;
      } while (lVar33 != 0x2e8);
      *(byte *)(param_5 + 0x188) = *(byte *)(param_5 + 0x188) & 0xfe;
      if ((bVar15 & 1) != 0) {
        ppppppppuVar14 = *(undefined *********)(param_5 + 0x1c0);
        ppppppppuVar11 = (undefined ********)0x30;
        __Znwm();
        ppppppppuVar23 = ppppppppuVar11 + 1;
        *ppppppppuVar23 = (undefined *******)0x0;
        ppppppppuVar11[2] = (undefined *******)0x0;
        *ppppppppuVar11 = (undefined *******)&PTR_FUN_110bc2c68;
        ppppppppuVar11[4] = (undefined *******)0x0;
        ppppppppuVar11[5] = (undefined *******)0x0;
        ppppppppuVar11[3] = (undefined *******)&PTR_DAT_110bfb810;
        FUN_10a2cee14(ppppppppuVar14,&stack0xffffffffffffffc0);
        do {
          pppppppuVar19 = *ppppppppuVar23;
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar23,0x10);
          if (bVar10) {
            *ppppppppuVar23 = (undefined *******)((long)pppppppuVar19 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (pppppppuVar19 == (undefined *******)0x0) {
          (*(code *)(*ppppppppuVar11)[2])(ppppppppuVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar11);
          ppppppppuVar14 = ppppppppuVar11;
        }
      }
      return ppppppppuVar14;
    }
    goto LAB_10a2d1360;
  }
LAB_10a2cfd18:
  ppppppppuVar30 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
  uStack_178 = (undefined ********)(param_5 + 0x18c);
  lVar26 = param_5 + 0x1f0;
  pbVar1 = (byte *)(param_5 + 0x1ec);
  uStack_228 = (undefined *******)0x0;
  fStack_220 = 0.0;
  fStack_214 = 0.0;
  fStack_210 = 1.0;
  fStack_21c = 0.0;
  fStack_218 = 0.0;
  uVar81 = NEON_fmov(0x3f800000,4);
  fStack_20c = (float)uVar81;
  fVar48 = fStack_20c;
  fStack_208 = (float)((ulong)uVar81 >> 0x20);
  fVar50 = fStack_208;
  fStack_204 = 1.0;
  if (*(int *)(lVar33 + 0x18) == 1) {
    uStack_1d0 = (code *)CONCAT71(uStack_1d0._1_7_,bVar15);
    uStack_198 = 6;
    ppppppppuStack_1c8 = uStack_178;
    ppppppppuStack_1c0 = ppppppppuVar11;
    ppppppppuStack_1b8 = ppppppppuVar23;
    uStack_1b0 = uVar32;
    plStack_1a8 = plVar31;
    lStack_1a0 = lVar26;
    pbStack_190 = pbVar1;
    if (((bVar15 ^ 0xffffffff) & 3) == 0) {
      if (((ulong)ppppppppuVar23[0x76] & 1) != 0) {
        lVar24 = plVar31[3];
        __ZNSt3__15mutex4lockEv(lVar24 + 0x1f8);
        lVar29 = lVar24 + (long)*(int *)(lVar24 + 0x1f0) * 0x18;
        lVar33 = *(long *)(lVar29 + 0x1c0);
        lVar29 = *(long *)(lVar29 + 0x1c8);
        __ZNSt3__15mutex6unlockEv(lVar24 + 0x1f8);
        if (lVar33 != lVar29) {
          bVar16 = *pbVar1 ^ 1;
          goto LAB_10a2cfefc;
        }
      }
    }
    else {
      bVar16 = (byte)((bVar15 & 2) >> 1);
      if ((bVar15 & 1) != 0) {
        bVar16 = 0;
      }
LAB_10a2cfefc:
      *pbVar1 = bVar16;
    }
    ppppppppuVar11 = (undefined ********)&ppppppppuStack_180;
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    uStack_178._4_4_ = 0.0;
    fStack_170 = 0.0;
    uStack_178._0_4_ = 0.0;
    uStack_15c = 1.0;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_180);
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    uStack_178._4_4_ = 0.0;
    fStack_170 = 0.0;
    uStack_178._0_4_ = 0.0;
    uStack_15c = 1.0;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_180);
    ppppppppuStack_200 = (undefined ********)0x0;
    uStack_1f8 = 0;
    uStack_1ec = 0x3f80000000000000;
    fStack_1f4 = 0.0;
    uStack_1f0 = 0;
    fStack_1dc = 1.0;
    uStack_1e4 = uVar81;
    if ((bVar15 & 7) != 0) {
      if ((*(byte *)(ppppppppuVar23 + 0x76) >> 1 & 1) == 0) {
        *(undefined1 *)(param_5 + 0x360) = 0;
        *(undefined1 *)(param_5 + 0x268) = 0;
        *(undefined4 *)(param_5 + 0x260) = 0x3f800000;
        *(undefined1 *)(param_5 + 0x2e4) = 0;
        *(undefined4 *)(param_5 + 0x2d8) = 0;
      }
      else {
        fVar34 = *(float *)(param_5 + 0x260);
        fVar35 = *(float *)(param_5 + 0x2d8);
        if ((bVar15 & 1) == 0) {
          if ((bVar15 & 2) == 0) {
LAB_10a2d0308:
            *(undefined1 *)(param_5 + 0x268) = 0;
          }
          else {
            bVar16 = *(byte *)(param_5 + 0x1ec);
LAB_10a2d0334:
            *(undefined1 *)(param_5 + 0x268) = 0;
            if (bVar16 == 1) {
              uVar17 = 0;
              bVar27 = false;
              bVar10 = true;
              goto LAB_10a2d0a38;
            }
          }
          bVar27 = false;
          *(undefined1 *)(param_5 + 0x2e4) = 0;
          if ((bVar15 >> 2 & 1) != 0) {
LAB_10a2d0aac:
            ppppppppuVar23 = (undefined ********)(param_5 + 0x2e8);
            uStack_1d8 = 0x3f0000003f000000;
            if ((*(byte *)(param_5 + 0x360) & 1) == 0) {
              FUN_10a2f0374(&ppppppppuStack_180,&uStack_1d0,&uStack_1d8);
              *(undefined8 *)(param_5 + 0x330) = uStack_138;
              *(byte **)(param_5 + 0x328) = pbStack_140;
              *(undefined8 *)(param_5 + 0x340) = uStack_128;
              *(undefined8 *)(param_5 + 0x338) = uStack_130;
              *(ulong *)(param_5 + 0x350) = CONCAT71(uStack_117,uStack_118);
              *(undefined8 *)(param_5 + 0x348) = uStack_120;
              *(undefined8 *)(param_5 + 0x359) = uStack_10f;
              *(ulong *)(param_5 + 0x351) = CONCAT17(uStack_110,uStack_117);
              *(ulong *)(param_5 + 0x2f0) = CONCAT44(uStack_178._4_4_,(float)uStack_178);
              *ppppppppuVar23 = (undefined *******)ppppppppuStack_180;
              *(ulong *)(param_5 + 0x300) = CONCAT44(fStack_164,fStack_168);
              *(ulong *)(param_5 + 0x2f8) = CONCAT44(fStack_16c,fStack_170);
              *(long **)(param_5 + 0x310) = plStack_158;
              *(ulong *)(param_5 + 0x308) = CONCAT44(uStack_15c,fStack_160);
              *(ulong *)(param_5 + 800) = uStack_148;
              *(long *)(param_5 + 0x318) = lStack_150;
            }
            FUN_10a2f0afc(*(undefined4 *)(param_5 + 0x2d8),&uStack_1d0);
            FUN_10a2f0f8c(&ppppppppuStack_200,&uStack_1d0,ppppppppuVar23,&uStack_1d8);
LAB_10a2d0b18:
            if (bVar27) goto LAB_10a2d0b1c;
          }
        }
        else {
          bVar16 = *pbVar1;
          if ((bVar15 & 2) == 0) {
            if (bVar16 != 0) goto LAB_10a2d0308;
          }
          else if (bVar16 != 0) goto LAB_10a2d0334;
          bVar10 = false;
          *(undefined1 *)(param_5 + 0x2e4) = 0;
          uVar17 = 1;
          bVar27 = true;
LAB_10a2d0a38:
          uStack_d8 = param_5 + 0x26c;
          uStack_f8 = FUN_10a2f2474;
          fStack_f0 = 7.4224136e-29;
          fStack_ec = 1.4013e-45;
          ppppppppuVar23 = (undefined ********)&fStack_f0;
          fStack_e8 = (float)CONCAT31(fStack_e8._1_3_,uVar17);
          uStack_e0 = lVar26;
          FUN_10a2f0f14(plVar31[3] + 0x50,&uStack_f8);
          (**(code **)CONCAT44(fStack_ec,fStack_f0))(ppppppppuVar23);
          if ((bVar15 >> 2 & 1) != 0) goto LAB_10a2d0aac;
          if (bVar10) {
            fVar35 = *(float *)(param_5 + 0x2d8) - fVar35;
            FUN_10a2f0afc(&uStack_1d0);
            fStack_1f4 = fVar35;
            uStack_1ec = CONCAT44(param_4,param_3);
            uStack_1f0 = param_2;
            goto LAB_10a2d0b18;
          }
          if (!bVar27) goto LAB_10a2d0b60;
LAB_10a2d0b1c:
          fVar51 = *(float *)(param_5 + 0x24c) - *(float *)(param_5 + 0x1f0);
          fVar35 = 1.0;
          if (fVar51 <= 1.0) {
            fVar35 = fVar51;
          }
          fVar35 = fVar35 + fVar35;
          _exp2f();
          fVar56 = 0.25;
          if (-1.0 <= fVar51) {
            fVar56 = fVar35;
          }
          fStack_1dc = fVar56 / fVar34;
          uStack_1e4 = CONCAT44(fStack_1dc,fStack_1dc);
          *(float *)(param_5 + 0x260) = fVar56;
        }
      }
    }
LAB_10a2d0b60:
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_200);
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    uStack_178._4_4_ = 0.0;
    fStack_170 = 0.0;
    uStack_178._0_4_ = 0.0;
    uStack_15c = 1.0;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_180);
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    uStack_178._4_4_ = 0.0;
    fStack_170 = 0.0;
    uStack_178._0_4_ = 0.0;
    uStack_15c = 1.0;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
    func_0x00010a2d28c8(&uStack_228,&ppppppppuStack_180);
    ppppppppuStack_180 = (undefined ********)0x0;
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    fStack_170 = 0.0;
    uStack_178 = (undefined ********)0x0;
    uStack_15c = 1.0;
    ppppppppuVar30 = (undefined ********)&ppppppppuStack_180;
    fStack_164 = fVar48;
    fStack_160 = fVar50;
LAB_10a2d0bd4:
    ppppppppuVar12 = (undefined ********)&uStack_228;
    func_0x00010a2d28c8(ppppppppuVar12,ppppppppuVar30);
    ppppppppuVar30 = uStack_178;
  }
  else if (*(int *)(lVar33 + 0x18) == 0) {
    ppppppppuStack_180 = (undefined ********)CONCAT71(ppppppppuStack_180._1_7_,bVar15);
    fStack_170 = SUB84(ppppppppuVar11,0);
    fStack_16c = (float)((ulong)ppppppppuVar11 >> 0x20);
    fStack_168 = SUB84(ppppppppuVar23,0);
    fStack_164 = (float)((ulong)ppppppppuVar23 >> 0x20);
    fStack_160 = (float)uVar32;
    uStack_15c = (float)((ulong)uVar32 >> 0x20);
    uStack_148 = 6;
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    plStack_158 = plVar31;
    lStack_150 = lVar26;
    pbStack_140 = pbVar1;
    uStack_e0._4_4_ = fStack_20c;
    uStack_d8._0_4_ = fStack_208;
    if ((bVar15 & 1) != 0) {
      uStack_1d0 = FUN_10a2f0250;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2d78;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = (undefined ********)&uStack_f8;
      FUN_10a2f01d8(plVar31[3] + 0x278,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      uVar25 = (uint)ppppppppuStack_180 & 0xff;
    }
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if ((uVar25 >> 1 & 1) != 0) {
      lVar26 = plStack_158[3];
      uStack_1d0 = FUN_10a2f09d0;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2d98;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = (undefined ********)&uStack_f8;
      __ZNSt3__15mutex4lockEv(lVar26 + 0x368);
      lVar33 = lVar26 + (long)*(int *)(lVar26 + 0x360) * 0x18;
      lVar29 = *(long *)(lVar33 + 0x338);
      for (lVar33 = *(long *)(lVar33 + 0x330); lVar33 != lVar29; lVar33 = lVar33 + 0x40) {
        (*uStack_1d0)(lVar33,&uStack_1d0);
      }
      __ZNSt3__15mutex6unlockEv(lVar26 + 0x368);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      uVar25 = (uint)(byte)ppppppppuStack_180;
    }
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    lVar33 = lStack_150;
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if ((uVar25 >> 2 & 1) != 0) {
      if (uStack_148 < 3) goto LAB_10a2d135c;
      ppppppppuVar23 = (undefined ********)(lStack_150 + 0xf8);
      uStack_1d0 = FUN_10a2f18dc;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2db8;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = ppppppppuVar23;
      FUN_10a2f0f14(plStack_158[3] + 0x50,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      if (*(char *)(lVar33 + 0x170) == '\x01') {
        FUN_10a2f0f8c(0,0,0,0x3f800000,&uStack_f8,&ppppppppuStack_180,ppppppppuVar23,lVar33 + 0x154)
        ;
      }
    }
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    lVar33 = lStack_150;
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if (((byte)ppppppppuStack_180 >> 3 & 1) != 0) {
      if (uStack_148 < 4) {
LAB_10a2d135c:
        uStack_d8._4_4_ = 0x3f800000;
        uStack_e0._0_4_ = 1.0;
        fStack_e4 = 0.0;
        fStack_e8 = 0.0;
        fStack_ec = 0.0;
        fStack_f0 = 0.0;
        uStack_f8 = (code *)0x0;
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10a2d1360);
        uStack_e0._4_4_ = fVar48;
        uStack_d8._0_4_ = fVar50;
        (*pcVar9)();
      }
      ppppppppuStack_1b8 = (undefined ********)(lStack_150 + 0x174);
      uStack_1d0 = FUN_10a2f1bec;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2dd8;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      FUN_10a2f0f14(plStack_158[3] + 0x50,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      if (*(char *)(lVar33 + 0x1ec) == '\x01') {
        lVar26 = CONCAT44(fStack_164,fStack_168);
        FUN_10a601e00();
        lVar29 = *(long *)(CONCAT44(fStack_16c,fStack_170) + 0x140);
        fVar34 = *(float *)(lVar33 + 0x1d0);
        fVar51 = *(float *)(lVar33 + 0x178);
        fVar35 = *(float *)(lVar33 + 0x1cc);
        if (*(char *)(lVar26 + 0x2f0) == '\x01') {
          FUN_10a42b498(lVar26);
          *(undefined1 *)(lVar26 + 0x2f0) = 0;
        }
        lVar24 = 200;
        if (*(ulong *)(lVar26 + 0x4d0) < 2) {
          lVar24 = 0x1e0;
        }
        lVar24 = lVar26 + lVar24;
        fVar52 = *(float *)(lVar24 + 0x3c8);
        fVar36 = *(float *)(lVar24 + 0x3cc);
        fVar53 = *(float *)(lVar24 + 0x3d0);
        fVar58 = *(float *)(lVar24 + 0x3d4);
        fVar65 = *(float *)(lVar24 + 0x3d8);
        fVar37 = *(float *)(lVar24 + 0x3dc);
        fVar38 = *(float *)(lVar24 + 0x3e0);
        fVar39 = *(float *)(lVar24 + 0x3e4);
        fVar54 = *(float *)(lVar24 + 1000);
        fVar40 = *(float *)(lVar24 + 0x3ec);
        fVar41 = *(float *)(lVar24 + 0x3f0);
        fVar55 = *(float *)(lVar24 + 0x3f4);
        fVar59 = *(float *)(lVar24 + 0x3f8);
        fVar42 = *(float *)(lVar24 + 0x3fc);
        fVar43 = *(float *)(lVar24 + 0x400);
        fVar44 = *(float *)(lVar24 + 0x404);
        fVar92 = fVar44;
        fVar93 = fVar55;
        fVar94 = fVar59;
        FUN_10a2cd058(*(undefined8 *)(lVar26 + 0x178));
        puVar8 = (undefined8 *)CONCAT44(uStack_15c,fStack_160);
        fVar60 = fVar92;
        fVar45 = fVar93;
        fVar72 = fVar94;
        FUN_10a2ce5c8(puVar8);
        FUN_10a2f0738(lVar26);
        puVar13 = puVar8;
        FUN_10a2ce354();
        fVar66 = (float)*puVar13 * fVar60 + (float)puVar13[2] * fVar45 +
                 (float)puVar13[4] * fVar72 + (float)puVar13[6] * 0.0;
        fVar69 = (float)*(undefined8 *)((long)puVar13 + 4) * fVar60 +
                 (float)*(undefined8 *)((long)puVar13 + 0x14) * fVar45 +
                 (float)*(undefined8 *)((long)puVar13 + 0x24) * fVar72 +
                 (float)*(undefined8 *)((long)puVar13 + 0x34) * 0.0;
        fVar71 = (float)((ulong)*(undefined8 *)((long)puVar13 + 4) >> 0x20) * fVar60 +
                 (float)((ulong)*(undefined8 *)((long)puVar13 + 0x14) >> 0x20) * fVar45 +
                 (float)((ulong)*(undefined8 *)((long)puVar13 + 0x24) >> 0x20) * fVar72 +
                 (float)((ulong)*(undefined8 *)((long)puVar13 + 0x34) >> 0x20) * 0.0;
        uVar63 = *(ulong *)(lVar33 + 0x1ac);
        fVar46 = (float)((ulong)*(undefined8 *)(lVar33 + 0x1b0) >> 0x20);
        fVar75 = (float)uVar63;
        uVar32 = NEON_ext(uVar63,CONCAT44(fVar71,fVar69),4,1);
        fVar56 = (float)((ulong)uVar32 >> 0x20);
        fVar77 = SQRT((fVar75 * fVar75 + (float)uVar32 * (float)uVar32 + fVar46 * fVar46) *
                      (fVar66 * fVar66 + fVar56 * fVar56 + fVar71 * fVar71));
        fVar67 = (float)(uVar63 >> 0x20);
        fVar56 = fVar75 * fVar66 + fVar69 * fVar67 + fVar46 * fVar71 + fVar77;
        if (fVar77 * 1e-06 <= fVar56) {
          fStack_270 = fVar71 * fVar67;
          fVar67 = (float)*(undefined8 *)(lVar33 + 0x1b0) * -fVar66 + fVar69 * fVar75;
          fStack_270 = fVar46 * -((float)((ulong)*puVar13 >> 0x20) * fVar60 +
                                  (float)((ulong)puVar13[2] >> 0x20) * fVar45 +
                                 (float)((ulong)puVar13[4] >> 0x20) * fVar72 +
                                 (float)((ulong)puVar13[6] >> 0x20) * 0.0) + fStack_270;
          uVar63 = CONCAT44(fVar56,-(fVar71 * fVar75) + fVar66 * fVar46);
        }
        else {
          fVar56 = 0.0;
          if (ABS(fVar75) <= ABS(fVar46)) {
            fStack_270 = 0.0;
            uVar63 = (ulong)(uint)-fVar46;
          }
          else {
            fStack_270 = -fVar67;
            fVar67 = 0.0;
            uVar63 = uVar63 & 0xffffffff;
          }
        }
        fStack_280 = (float)uVar63;
        fVar60 = (float)(uVar63 >> 0x20);
        fVar60 = fVar67 * fVar67 + fStack_280 * fStack_280 +
                 fStack_270 * fStack_270 + fVar60 * fVar60;
        if (fVar60 == 0.0) {
          fStack_260 = 1.0;
          fVar45 = 0.0;
          fStack_270 = 0.0;
          fStack_280 = 0.0;
        }
        else {
          fVar60 = 1.0 / SQRT(fVar60);
          fStack_260 = fVar56 * fVar60;
          fStack_270 = fVar60 * fStack_270;
          fStack_280 = fVar60 * fStack_280;
          fVar45 = fVar60 * fVar67;
          fVar56 = fStack_270;
        }
        fVar79 = *(float *)(lVar33 + 0x1b8);
        fVar82 = *(float *)(lVar33 + 0x1bc);
        fVar83 = *(float *)(lVar33 + 0x1c0);
        fVar84 = *(float *)(lVar33 + 0x1c4);
        fVar71 = fVar45;
        FUN_10a2ce414(puVar8);
        fVar72 = fVar71;
        fVar75 = fVar56;
        fVar66 = fVar67;
        fVar69 = fVar60;
        FUN_10a2f1b50(*(undefined8 *)(CONCAT44(fStack_16c,fStack_170) + 0x188));
        func_0x00010a0d8ae0(lVar29);
        fVar46 = ((-(fStack_270 * fVar79) + fVar84 * fStack_260) - fVar82 * fStack_280) -
                 fVar83 * fVar45;
        fVar77 = (fStack_270 * fVar84 + fVar79 * fStack_260 + fVar83 * fStack_280) - fVar82 * fVar45
        ;
        fVar61 = (fStack_280 * fVar84 + fVar82 * fStack_260 + fVar79 * fVar45) - fVar83 * fStack_270
        ;
        fVar45 = (fVar45 * fVar84 + fVar83 * fStack_260 + fVar82 * fStack_270) - fVar79 * fStack_280
        ;
        fVar84 = ((-(fVar71 * fVar77) + fVar46 * fVar67) - fVar61 * fVar56) - fVar45 * fVar60;
        fVar74 = (fVar71 * fVar46 + fVar77 * fVar67 + fVar45 * fVar56) - fVar61 * fVar60;
        fVar83 = (fVar56 * fVar46 + fVar61 * fVar67 + fVar77 * fVar60) - fVar45 * fVar71;
        fVar85 = (fVar60 * fVar46 + fVar45 * fVar67 + fVar61 * fVar71) - fVar77 * fVar56;
        fVar56 = ((-(fVar72 * fVar74) + fVar84 * fVar66) - fVar83 * fVar75) - fVar85 * fVar69;
        fVar61 = (fVar72 * fVar84 + fVar74 * fVar66 + fVar85 * fVar75) - fVar83 * fVar69;
        fVar79 = (fVar75 * fVar84 + fVar83 * fVar66 + fVar74 * fVar69) - fVar85 * fVar72;
        fVar60 = (fVar69 * fVar84 + fVar85 * fVar66 + fVar83 * fVar72) - fVar74 * fVar75;
        fVar45 = *(float *)(lVar29 + 0x54);
        fVar72 = *(float *)(lVar29 + 0x58);
        fVar75 = *(float *)(lVar29 + 0x5c);
        fVar82 = *(float *)(lVar29 + 0x60);
        uStack_e0._0_4_ = fVar45 * fVar61 + fVar82 * fVar56 + fVar72 * fVar79 + fVar75 * fVar60;
        fStack_ec = ((fVar82 * fVar61 - fVar45 * fVar56) - fVar75 * fVar79) + fVar72 * fVar60;
        fStack_e8 = ((fVar82 * fVar79 - fVar72 * fVar56) - fVar45 * fVar60) + fVar75 * fVar61;
        fVar82 = fVar82 * fVar60;
        fStack_e4 = ((fVar82 - fVar75 * fVar56) - fVar72 * fVar61) + fVar45 * fVar79;
        fVar71 = fStack_e4;
        FUN_10a2f1bb8(lVar29);
        fVar86 = *(float *)(lVar33 + 0x17c);
        fVar87 = *(float *)(lVar33 + 0x180);
        fVar80 = *(float *)(lVar33 + 0x184);
        uVar32 = *(undefined8 *)(lVar26 + 0x178);
        fVar72 = fVar71;
        fVar66 = fVar61;
        fVar69 = fVar79;
        FUN_10a2d1e28(puVar8);
        fVar56 = fVar72;
        fVar75 = fVar66;
        fVar67 = fVar69;
        FUN_10a2cd058(uVar32);
        fVar77 = *(float *)(lVar33 + 0x1e8);
        fVar60 = fVar75;
        fVar45 = fVar67;
        fVar46 = fVar77;
        FUN_10a2cd058(lVar29);
        lVar33 = *(long *)(CONCAT44(fStack_16c,fStack_170) + 0x188);
        if (lVar33 == 0) {
          fVar47 = 0.0;
          fVar49 = 0.0;
          fVar57 = 0.0;
          fVar73 = 1.0;
          fVar62 = 0.0;
          fVar68 = 0.0;
          fVar70 = 0.0;
          fVar76 = 1.0;
          fVar78 = 0.0;
          fVar88 = 0.0;
          fVar89 = 0.0;
          fVar90 = 1.0;
        }
        else {
          lVar33 = *(long *)(lVar33 + 0x140);
          if ((*(byte *)(lVar33 + 0x2a) >> 6 & 1) != 0) {
            func_0x00010a3e933c(lVar33);
          }
          fVar90 = *(float *)(lVar33 + 0x100);
          fVar89 = *(float *)(lVar33 + 0x104);
          fVar88 = *(float *)(lVar33 + 0x108);
          fVar78 = *(float *)(lVar33 + 0x110);
          fVar76 = *(float *)(lVar33 + 0x114);
          fVar70 = *(float *)(lVar33 + 0x118);
          fVar68 = *(float *)(lVar33 + 0x120);
          fVar62 = *(float *)(lVar33 + 0x124);
          fVar47 = (float)*(undefined8 *)(lVar33 + 0x130) * 0.0;
          fVar49 = (float)((ulong)*(undefined8 *)(lVar33 + 0x130) >> 0x20) * 0.0;
          fVar57 = *(float *)(lVar33 + 0x138) * 0.0;
          fVar73 = *(float *)(lVar33 + 0x128);
        }
        fVar86 = fVar86 * fVar71;
        fVar61 = fVar61 * fVar87;
        fVar79 = fVar79 * fVar80;
        fVar71 = fVar34 * 2.0 + -1.0;
        fVar80 = fVar51 * -2.0 + 1.0;
        fVar51 = fVar71 * fVar58 + fVar80 * fVar39 + fVar55 + fVar44;
        fVar34 = (fVar71 * fVar52 + fVar80 * fVar65 + fVar54 + fVar59) / fVar51 - fVar92;
        fVar36 = (fVar71 * fVar36 + fVar80 * fVar37 + fVar40 + fVar42) / fVar51 - fVar93;
        fVar37 = (fVar71 * fVar53 + fVar80 * fVar38 + fVar41 + fVar43) / fVar51 - fVar94;
        fVar38 = 1.0 / SQRT(fVar37 * fVar37 + fVar34 * fVar34 + fVar36 * fVar36);
        fVar51 = -(fVar61 * fVar85) + fVar79 * fVar83;
        fVar40 = -(fVar79 * fVar74) + fVar86 * fVar85;
        fVar42 = -(fVar86 * fVar83) + fVar61 * fVar74;
        fVar39 = fVar84 * fVar51 + -(fVar40 * fVar85) + fVar42 * fVar83;
        fVar41 = fVar84 * fVar40 + -(fVar42 * fVar74) + fVar51 * fVar85;
        fVar40 = fVar84 * fVar42 + -(fVar51 * fVar83) + fVar40 * fVar74;
        fVar51 = (fVar92 + fVar35 * fVar34 * fVar38) - (fVar86 + fVar39 + fVar39);
        fVar34 = (fVar93 + fVar35 * fVar36 * fVar38) - (fVar61 + fVar41 + fVar41);
        fVar35 = (fVar94 + fVar35 * fVar37 * fVar38) - (fVar79 + fVar40 + fVar40);
        fVar94 = fVar69 * (fVar67 - fVar82 * fVar69) +
                 fVar72 * (fVar56 - fVar82 * fVar72) + fVar66 * (fVar75 - fVar82 * fVar66);
        fVar92 = fVar69 * (fVar35 - fVar82 * fVar69) +
                 fVar66 * (fVar34 - fVar82 * fVar66) + fVar72 * (fVar51 - fVar82 * fVar72);
        fVar72 = (fVar72 * 0.0 + (fVar51 - fVar72 * fVar92)) -
                 (fVar72 * 0.0 + (fVar56 - fVar72 * fVar94));
        fVar93 = (fVar66 * 0.0 + (fVar34 - fVar66 * fVar92)) -
                 (fVar66 * 0.0 + (fVar75 - fVar66 * fVar94));
        fVar56 = (fVar69 * 0.0 + (fVar35 - fVar69 * fVar92)) -
                 (fVar69 * 0.0 + (fVar67 - fVar69 * fVar94));
        fVar92 = 1.0 / SQRT(fVar56 * fVar56 + fVar72 * fVar72 + fVar93 * fVar93);
        fVar46 = (fVar51 + fVar77 * fVar72 * fVar92) - fVar46;
        fVar60 = (fVar34 + fVar77 * fVar93 * fVar92) - fVar60;
        fVar45 = (fVar35 + fVar77 * fVar56 * fVar92) - fVar45;
        fStack_f0 = fVar57 + fVar45 * fVar73 + fVar60 * fVar70 + fVar46 * fVar88;
        uStack_f8 = (code *)CONCAT44(fVar49 + fVar45 * fVar62 + fVar60 * fVar76 + fVar46 * fVar89,
                                     fVar47 + fVar45 * fVar68 + fVar60 * fVar78 + fVar46 * fVar90);
      }
    }
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    bVar15 = (byte)ppppppppuStack_180;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if (((byte)ppppppppuStack_180 >> 4 & 1) != 0) {
      uStack_1d0 = FUN_10a2f2078;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2df8;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = (undefined ********)&uStack_f8;
      FUN_10a2f2000(plStack_158[3] + 1000,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(&ppppppppuStack_1c8);
      bVar15 = (byte)ppppppppuStack_180;
    }
    ppppppppuVar23 = (undefined ********)(ulong)bVar15;
    func_0x00010a2d28c8(&uStack_228,&uStack_f8);
    uStack_f8 = (code *)0x0;
    fStack_e4 = 0.0;
    uStack_e0._0_4_ = 1.0;
    fStack_ec = 0.0;
    fStack_e8 = 0.0;
    fStack_f0 = 0.0;
    uStack_d8._4_4_ = 0x3f800000;
    uStack_e0._4_4_ = fVar48;
    uStack_d8._0_4_ = fVar50;
    if ((bVar15 >> 5 & 1) != 0) {
      ppppppppuVar23 = (undefined ********)&ppppppppuStack_1c8;
      uStack_1d0 = FUN_10a2f228c;
      ppppppppuStack_1c8 = (undefined ********)&PTR_FUN_110bc2e18;
      ppppppppuStack_1c0 = (undefined ********)&ppppppppuStack_180;
      ppppppppuStack_1b8 = (undefined ********)&uStack_f8;
      FUN_10a2f2000(plStack_158[3] + 1000,&uStack_1d0);
      (*(code *)*ppppppppuStack_1c8)(ppppppppuVar23);
    }
    ppppppppuVar30 = (undefined ********)&uStack_f8;
    goto LAB_10a2d0bd4;
  }
  bVar10 = false;
  lVar33 = 0;
  pcVar22 = (char *)(param_5 + 0x268);
  do {
    if ((*(byte *)(param_5 + 0x189) >> (ulong)((uint)lVar33 & 0x1f) & 1) != 0) {
      bVar10 = *pcVar22 != '\0' || bVar10 != false;
    }
    lVar33 = lVar33 + 1;
    pcVar22 = pcVar22 + 0x7c;
  } while (lVar33 != 6);
  if (bVar10 != false) {
    ppppppppuVar23 = *(undefined *********)(param_5 + 0x110);
    uStack_178 = ppppppppuVar30;
    func_0x00010a0d8ae0(ppppppppuVar23);
    fVar50 = fStack_208;
    fVar48 = fStack_20c;
    fVar35 = *(float *)(ppppppppuVar23 + 0x13) + uStack_228._4_4_;
    ppppppppuStack_1c8 =
         (undefined ********)
         CONCAT44(ppppppppuStack_1c8._4_4_,*(float *)((long)ppppppppuVar23 + 0x9c) + fStack_220);
    pppppppuVar19 = ppppppppuVar23[9];
    fVar34 = *(float *)(param_5 + 0x194);
    if (fVar35 <= *(float *)(param_5 + 0x194)) {
      fVar34 = fVar35;
    }
    fVar51 = *(float *)(param_5 + 400);
    if (*(float *)(param_5 + 400) <= fVar35) {
      fVar51 = fVar34;
    }
    uVar32 = *(undefined8 *)((long)ppppppppuVar23 + 0x54);
    fVar60 = (float)uVar32;
    fVar56 = *(float *)(ppppppppuVar23 + 0xc);
    uStack_1d0 = (code *)CONCAT44(fVar51,*(float *)((long)ppppppppuVar23 + 0x94) + (float)uStack_228
                                 );
    uVar91 = NEON_ext(uVar32,CONCAT44(fVar60,fVar56),4,1);
    uVar81 = NEON_ext(CONCAT44(fStack_214,fStack_218),CONCAT44(-fStack_214,-fStack_218),4,1);
    fVar51 = (float)((ulong)uVar32 >> 0x20);
    fVar45 = (float)((ulong)ppppppppuVar23[0xb] >> 0x20);
    fVar34 = (fVar56 * fStack_218 + (float)uVar91 * fStack_210 + fVar60 * (float)uVar81) -
             fStack_21c * fVar45;
    fVar35 = (fVar60 * -fStack_21c + (float)((ulong)uVar91 >> 0x20) * fStack_210 +
             fVar51 * (float)((ulong)uVar81 >> 0x20)) - fStack_214 * fVar45;
    uVar32 = NEON_rev64(CONCAT44(fStack_214 * fVar56 + fVar45 * fStack_210,
                                 fStack_21c * fVar56 + fVar60 * fStack_210),4);
    dVar64 = (double)CONCAT44((float)((ulong)uVar32 >> 0x20) + fVar45 * fStack_218,
                              (float)uVar32 + SUB84(ppppppppuVar23[0xb],0) * fStack_21c) -
             (double)CONCAT44(fVar51 * fStack_214,fVar60 * fStack_218);
    fVar51 = SUB84(dVar64,0);
    fVar56 = (float)((ulong)dVar64 >> 0x20);
    fVar60 = fVar34 * fVar34 + fVar51 * fVar51 + fVar35 * fVar35 + fVar56 * fVar56;
    if (fVar60 == 0.0) {
      fVar35 = 1.0;
      fVar56 = 0.0;
      fVar34 = 0.0;
      fVar60 = 0.0;
    }
    else {
      fVar60 = 1.0 / SQRT(fVar60);
      fVar35 = fVar60 * fVar35;
      fVar56 = fVar60 * fVar56;
      fVar34 = fVar60 * fVar34;
      fVar60 = fVar60 * fVar51;
    }
    fVar72 = *(float *)(param_5 + 0x198);
    fVar45 = *(float *)(param_5 + 0x19c);
    fVar51 = fVar72;
    if (fVar72 <= fStack_204 * *(float *)(ppppppppuVar23 + 10)) {
      fVar51 = fStack_204 * *(float *)(ppppppppuVar23 + 10);
    }
    fVar92 = fVar45;
    if (fVar51 <= fVar45) {
      fVar92 = fVar51;
    }
    fVar93 = fVar45;
    fVar94 = fVar72;
    FUN_10a2cd058(ppppppppuVar23);
    fStack_f0 = fVar94;
    uStack_f8 = (code *)CONCAT44(fVar93,fVar51);
    FUN_10a3e3894(ppppppppuVar23,&uStack_1d0);
    fVar48 = fVar48 * SUB84(pppppppuVar19,0);
    fVar50 = fVar50 * (float)((ulong)pppppppuVar19 >> 0x20);
    uVar63 = CONCAT44(fVar50,fVar48);
    uVar63 = uVar63 ^ (uVar63 ^ CONCAT44(fVar72,fVar72)) &
                      CONCAT44(-(uint)(fVar50 < fVar72),-(uint)(fVar48 < fVar72));
    ppppppppuStack_180 =
         (undefined ********)
         (uVar63 ^ (uVar63 ^ CONCAT44(fVar45,fVar45)) &
                   CONCAT44(-(uint)(fVar45 < (float)(uVar63 >> 0x20)),
                            -(uint)(fVar45 < (float)uVar63)));
    uStack_178._0_4_ = fVar92;
    uStack_178._4_4_ = fVar56;
    fStack_170 = fVar34;
    fStack_16c = fVar60;
    fStack_168 = fVar35;
    FUN_10a3e38dc(ppppppppuVar23,&ppppppppuStack_180);
    FUN_10a2d1530(ppppppppuVar14,&uStack_f8);
    FUN_10a2d1924();
    ppppppppuVar30 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
    ppppppppuVar12 = ppppppppuVar14;
  }
  uStack_178 = ppppppppuVar30;
  if (bVar10 != (bool)(*(byte *)(param_5 + 0x188) & 1)) {
    *(byte *)(param_5 + 0x188) = *(byte *)(param_5 + 0x188) & 0xfe | bVar10;
    if (bVar10 == false) {
      ppppppppuVar23 = *(undefined *********)(param_5 + 0x1c0);
      ppppppppuVar14 = (undefined ********)0x30;
      __Znwm();
      ppppppppuVar11 = ppppppppuVar14 + 1;
      *ppppppppuVar11 = (undefined *******)0x0;
      ppppppppuVar14[2] = (undefined *******)0x0;
      *ppppppppuVar14 = (undefined *******)&PTR_FUN_110bc2c68;
      ppppppppuVar14[4] = (undefined *******)0x0;
      ppppppppuVar14[5] = (undefined *******)0x0;
      ppppppppuStack_180 = ppppppppuVar14 + 3;
      *ppppppppuStack_180 = (undefined *******)&PTR_DAT_110bfb810;
      uStack_178._0_4_ = SUB84(ppppppppuVar14,0);
      uStack_178._4_4_ = (float)((ulong)ppppppppuVar14 >> 0x20);
      ppppppppuVar12 = ppppppppuVar23;
      FUN_10a2cee14(ppppppppuVar23,&ppppppppuStack_180);
      do {
        pppppppuVar19 = *ppppppppuVar11;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
        if (bVar10) {
          *ppppppppuVar11 = (undefined *******)((long)pppppppuVar19 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      lVar33 = *(long *)(param_5 + 0x1b0);
      ppppppppuVar14 = (undefined ********)0x30;
      __Znwm();
      ppppppppuVar14[1] = (undefined *******)0x0;
      ppppppppuVar14[2] = (undefined *******)0x0;
      *ppppppppuVar14 = (undefined *******)&PTR_FUN_110bc2d20;
      ppppppppuVar14[4] = (undefined *******)0x0;
      ppppppppuVar14[5] = (undefined *******)0x0;
      ppppppppuStack_200 = ppppppppuVar14 + 3;
      *ppppppppuStack_200 = (undefined *******)&PTR_DAT_110bfb7b8;
      uStack_1f8 = SUB84(ppppppppuVar14,0);
      fStack_1f4 = (float)((ulong)ppppppppuVar14 >> 0x20);
      ppppppppuStack_1c8 = (undefined ********)0x0;
      uStack_1d0 = (code *)0x0;
      ppppppppuStack_1b8 = (undefined ********)0x0;
      ppppppppuStack_1c0 = (undefined ********)0x0;
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,*(undefined4 *)(lVar33 + 0x38));
      FUN_10a2ec928(&uStack_1d0,*(undefined8 *)(lVar33 + 0x20));
      plVar31 = *(long **)(lVar33 + 0x28);
      if (plVar31 != (long *)0x0) {
        do {
          ppppppppuVar12 = ppppppppuStack_1c8;
          pppppuVar18 = (undefined *****)plVar31[2];
          uVar63 = ((ulong)(uint)((int)pppppuVar18 << 3) + 8 ^ (ulong)pppppuVar18 >> 0x20) *
                   -0x622015f714c7d297;
          uVar63 = ((ulong)pppppuVar18 >> 0x20 ^ uVar63 >> 0x2f ^ uVar63) * -0x622015f714c7d297;
          ppppppppuVar30 = (undefined ********)((uVar63 ^ uVar63 >> 0x2f) * -0x622015f714c7d297);
          if (ppppppppuStack_1c8 != (undefined ********)0x0) {
            uVar63 = (long)ppppppppuStack_1c8 - 1;
            if (((ulong)ppppppppuStack_1c8 & uVar63) == 0) {
              ppppppppuVar11 = (undefined ********)((ulong)ppppppppuVar30 & uVar63);
            }
            else {
              ppppppppuVar11 = ppppppppuVar30;
              if (ppppppppuStack_1c8 <= ppppppppuVar30) {
                uVar20 = 0;
                if (ppppppppuStack_1c8 != (undefined ********)0x0) {
                  uVar20 = (ulong)ppppppppuVar30 / (ulong)ppppppppuStack_1c8;
                }
                ppppppppuVar11 =
                     (undefined ********)((long)ppppppppuVar30 - uVar20 * (long)ppppppppuStack_1c8);
              }
            }
            ppppppuVar21 = *(undefined *******)((long)uStack_1d0 + ppppppppuVar11 * 8);
            if (ppppppuVar21 != (undefined ******)0x0) {
              do {
                while( true ) {
                  ppppppuVar21 = (undefined ******)*ppppppuVar21;
                  if (ppppppuVar21 == (undefined ******)0x0) goto LAB_10a2d0f08;
                  ppppppppuVar28 = (undefined ********)ppppppuVar21[1];
                  if (ppppppppuVar28 != ppppppppuVar30) break;
                  if (ppppppuVar21[2] == pppppuVar18) goto LAB_10a2d1068;
                }
                if (((ulong)ppppppppuStack_1c8 & uVar63) == 0) {
                  ppppppppuVar28 = (undefined ********)((ulong)ppppppppuVar28 & uVar63);
                }
                else if (ppppppppuStack_1c8 <= ppppppppuVar28) {
                  uVar20 = 0;
                  if (ppppppppuStack_1c8 != (undefined ********)0x0) {
                    uVar20 = (ulong)ppppppppuVar28 / (ulong)ppppppppuStack_1c8;
                  }
                  ppppppppuVar28 =
                       (undefined ********)
                       ((long)ppppppppuVar28 - uVar20 * (long)ppppppppuStack_1c8);
                }
              } while (ppppppppuVar28 == ppppppppuVar11);
            }
          }
LAB_10a2d0f08:
          ppppppppuVar23 = (undefined ********)0x68;
          __Znwm();
          *ppppppppuVar23 = (undefined *******)0x0;
          ppppppppuVar23[1] = (undefined *******)ppppppppuVar30;
          lVar26 = plVar31[3];
          pppppppuVar19 = (undefined *******)plVar31[2];
          ppppppppuVar23[3] = (undefined *******)plVar31[3];
          ppppppppuVar23[2] = pppppppuVar19;
          if (lVar26 != 0) {
            plVar2 = (long *)(lVar26 + 8);
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar10) {
                *plVar2 = *plVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          ppppppppuStack_180 = ppppppppuVar23 + 4;
          *(undefined1 *)(ppppppppuVar23 + 0xc) = 3;
          if ((char)plVar31[0xc] == '\0') {
            uVar17 = 0;
          }
          else {
            FUN_10a005398(&ppppppppuStack_180,plVar31 + 4);
            uVar17 = (undefined1)plVar31[0xc];
          }
          *(undefined1 *)(ppppppppuVar23 + 0xc) = uVar17;
          if ((ppppppppuVar12 == (undefined ********)0x0) ||
             ((float)uStack_1b0 * (float)ppppppppuVar12 < (float)((long)ppppppppuStack_1b8 + 1))) {
            uVar63 = 1;
            if ((undefined ********)0x2 < ppppppppuVar12) {
              uVar63 = (ulong)(((ulong)ppppppppuVar12 & (long)ppppppppuVar12 - 1U) != 0);
            }
            uVar63 = uVar63 | (long)ppppppppuVar12 << 1;
            uVar20 = (ulong)((float)((long)ppppppppuStack_1b8 + 1) / (float)uStack_1b0);
            if (uVar63 <= uVar20) {
              uVar63 = uVar20;
            }
            FUN_10a2ec928(&uStack_1d0,uVar63);
            ppppppppuVar12 = ppppppppuStack_1c8;
            if (((ulong)ppppppppuStack_1c8 & (long)ppppppppuStack_1c8 - 1U) == 0) {
              ppppppppuVar11 =
                   (undefined ********)((long)ppppppppuStack_1c8 - 1U & (ulong)ppppppppuVar30);
            }
            else {
              ppppppppuVar11 = ppppppppuVar30;
              if (ppppppppuStack_1c8 <= ppppppppuVar30) {
                uVar63 = 0;
                if (ppppppppuStack_1c8 != (undefined ********)0x0) {
                  uVar63 = (ulong)ppppppppuVar30 / (ulong)ppppppppuStack_1c8;
                }
                ppppppppuVar11 =
                     (undefined ********)((long)ppppppppuVar30 - uVar63 * (long)ppppppppuStack_1c8);
              }
            }
          }
          ppppppuVar21 = *(undefined *******)((long)uStack_1d0 + ppppppppuVar11 * 8);
          if (ppppppuVar21 == (undefined ******)0x0) {
            *ppppppppuVar23 = (undefined *******)ppppppppuStack_1c0;
            *(undefined **********)((long)uStack_1d0 + ppppppppuVar11 * 8) = &ppppppppuStack_1c0;
            ppppppppuStack_1c0 = ppppppppuVar23;
            if (*ppppppppuVar23 != (undefined *******)0x0) {
              ppppppppuVar30 = (undefined ********)(*ppppppppuVar23)[1];
              if (((ulong)ppppppppuVar12 & (long)ppppppppuVar12 - 1U) == 0) {
                ppppppppuVar30 =
                     (undefined ********)((ulong)ppppppppuVar30 & (long)ppppppppuVar12 - 1U);
              }
              else if (ppppppppuVar12 <= ppppppppuVar30) {
                uVar63 = 0;
                if (ppppppppuVar12 != (undefined ********)0x0) {
                  uVar63 = (ulong)ppppppppuVar30 / (ulong)ppppppppuVar12;
                }
                ppppppppuVar30 =
                     (undefined ********)((long)ppppppppuVar30 - uVar63 * (long)ppppppppuVar12);
              }
              *(undefined *********)((long)uStack_1d0 + ppppppppuVar30 * 8) = ppppppppuVar23;
            }
          }
          else {
            *ppppppppuVar23 = (undefined *******)*ppppppuVar21;
            *ppppppuVar21 = (undefined *****)ppppppppuVar23;
          }
          ppppppppuStack_1b8 = (undefined ********)((long)ppppppppuStack_1b8 + 1);
LAB_10a2d1068:
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      ppppppppuVar11 = ppppppppuStack_1c0;
      if (ppppppppuStack_1c0 == (undefined ********)0x0) {
        ppppppppuVar12 = (undefined ********)&uStack_1d0;
        FUN_10a2ef610();
      }
      else {
        do {
          pppppppuVar19 = ppppppppuVar11[2];
          lVar26 = lVar33 + 0x18;
          FUN_10a2ed338();
          ppppppppuVar12 = uStack_178;
          if (lVar26 != 0) {
            if (*(char *)(ppppppppuVar11 + 0xc) == '\x01') {
              pppppppuVar19 = ppppppppuVar11[4];
              uStack_178._0_4_ = (float)uStack_1f8;
              uStack_178._4_4_ = fStack_1f4;
              ppppppppuStack_180 = ppppppppuStack_200;
              if (CONCAT44(fStack_1f4,uStack_1f8) != 0) {
                plVar31 = (long *)(CONCAT44(fStack_1f4,uStack_1f8) + 8);
                do {
                  cVar6 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                  if (bVar10) {
                    *plVar31 = *plVar31 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              (*(code *)pppppppuVar19)(&ppppppppuStack_180,ppppppppuVar11 + 4);
              plVar31 = (long *)CONCAT44(uStack_178._4_4_,(float)uStack_178);
              ppppppppuVar12 = (undefined ********)0x0;
              if (plVar31 != (long *)0x0) {
                plVar2 = plVar31 + 1;
                do {
                  lVar26 = *plVar2;
                  cVar6 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar10) {
                    *plVar2 = lVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
LAB_10a2d114c:
                ppppppppuVar12 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
                if (lVar26 == 0) {
                  (**(code **)(*plVar31 + 0x10))(plVar31);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
                  ppppppppuVar12 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
                }
              }
            }
            else if (*(char *)(ppppppppuVar11 + 0xc) == '\x02') {
              ppppppppuVar23 = ppppppppuVar11 + 4;
              FUN_10a688b40();
              if (ppppppppuVar23 == (undefined ********)0x0) {
                ppppppppuVar12 = uStack_178;
                if (pppppppuVar19 != (undefined *******)0x0) {
                  pppppppuVar4 = ppppppppuVar11[4];
                  pppppppuVar5 = ppppppppuVar11[5];
                  if (pppppppuVar5 != (undefined *******)0x0) {
                    pppppppuVar3 = pppppppuVar5 + 1;
                    do {
                      cVar6 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar3,0x10);
                      if (bVar10) {
                        *pppppppuVar3 = (undefined ******)((long)*pppppppuVar3 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  plVar31 = (long *)CONCAT44(fStack_1f4,uStack_1f8);
                  fStack_e8 = SUB84(ppppppppuStack_200,0);
                  fStack_e4 = (float)((ulong)ppppppppuStack_200 >> 0x20);
                  uStack_e0._0_4_ = (float)uStack_1f8;
                  uStack_e0._4_4_ = fStack_1f4;
                  fStack_16c = (float)((ulong)pppppppuVar4 >> 0x20);
                  fStack_164 = (float)((ulong)pppppppuVar5 >> 0x20);
                  if (plVar31 == (long *)0x0) {
                    plStack_158 = (long *)0x0;
                  }
                  else {
                    plVar2 = plVar31 + 1;
                    do {
                      cVar6 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar10) {
                        *plVar2 = *plVar2 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    do {
                      cVar6 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar10) {
                        *plVar2 = *plVar2 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      plStack_158 = plVar31;
                    } while (cVar6 != '\0');
                  }
                  fStack_ec = 0.0;
                  fStack_f0 = 0.0;
                  uStack_f8 = (code *)0x0;
                  fStack_168 = SUB84(pppppppuVar5,0);
                  fStack_170 = SUB84(pppppppuVar4,0);
                  uStack_178._4_4_ = 1.4013e-45;
                  uStack_178._0_4_ = 7.4222836e-29;
                  ppppppppuStack_180 = (undefined ********)FUN_10a2f0108;
                  fStack_160 = fStack_e8;
                  uStack_15c = fStack_e4;
                  FUN_10a4634ec(pppppppuVar19,&ppppppppuStack_180);
                  (**(code **)CONCAT44(uStack_178._4_4_,(float)uStack_178))(&uStack_178);
                  if (plVar31 != (long *)0x0) {
                    plVar2 = plVar31 + 1;
                    do {
                      lVar26 = *plVar2;
                      cVar6 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar10) {
                        *plVar2 = lVar26 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (lVar26 == 0) {
                      (**(code **)(*plVar31 + 0x10))(plVar31);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
                    }
                  }
                  plVar31 = (long *)CONCAT44(fStack_ec,fStack_f0);
                  ppppppppuVar12 = (undefined ********)CONCAT44(uStack_178._4_4_,(float)uStack_178);
                  if (plVar31 != (long *)0x0) {
                    plVar2 = plVar31 + 1;
                    do {
                      lVar26 = *plVar2;
                      cVar6 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar10) {
                        *plVar2 = lVar26 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    goto LAB_10a2d114c;
                  }
                }
              }
              else {
                *ppppppppuVar23 =
                     (undefined *******)
                     CONCAT44((int)((ulong)*ppppppppuVar23 >> 0x20) + 1,(int)*ppppppppuVar23 + 1);
                FUN_10a2eff04(ppppppppuVar11[4],&ppppppppuStack_200);
                iVar7 = *(int *)((long)ppppppppuVar23 + 4) + -1;
                *(int *)((long)ppppppppuVar23 + 4) = iVar7;
                ppppppppuVar12 = uStack_178;
                if (iVar7 == 0) {
                  *(undefined4 *)ppppppppuVar23 = 0;
                }
              }
            }
          }
          uStack_178 = ppppppppuVar12;
          ppppppppuVar11 = (undefined ********)*ppppppppuVar11;
        } while (ppppppppuVar11 != (undefined ********)0x0);
        ppppppppuVar14 = (undefined ********)CONCAT44(fStack_1f4,uStack_1f8);
        ppppppppuVar12 = (undefined ********)&uStack_1d0;
        FUN_10a2ef610();
        if (ppppppppuVar14 == (undefined ********)0x0) goto LAB_10a2d12e8;
      }
      ppppppppuVar11 = ppppppppuVar14 + 1;
      do {
        pppppppuVar19 = *ppppppppuVar11;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
        if (bVar10) {
          *ppppppppuVar11 = (undefined *******)((long)pppppppuVar19 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (pppppppuVar19 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuVar14)[2])(ppppppppuVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppppuVar12 = ppppppppuVar14;
    }
  }
LAB_10a2d12e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppppppppuVar12;
  }
LAB_10a2d1360:
  ___stack_chk_fail();
  (*(code *)**ppppppppuVar23)(ppppppppuVar23);
  __Unwind_Resume();
  pppppppuVar19 = ppppppppuVar12[0xa9];
  if (pppppppuVar19 != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (pppppppuVar19 != (undefined *******)0x0) {
      ppppppppuVar11 = (undefined ********)ppppppppuVar12[0xa8];
      pppppppuVar4 = pppppppuVar19 + 1;
      do {
        ppppppuVar21 = *pppppppuVar4;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar4,0x10);
        if (bVar10) {
          *pppppppuVar4 = (undefined ******)((long)ppppppuVar21 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppppuVar21 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar19)[2])(pppppppuVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar19);
      }
      if (ppppppppuVar11 != (undefined ********)0x0) {
        return ppppppppuVar11;
      }
    }
  }
  FUN_10a2ce8e4(ppppppppuVar12);
  pppppppuVar19 = ppppppppuVar12[0xa9];
  if (pppppppuVar19 != (undefined *******)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (pppppppuVar19 != (undefined *******)0x0) {
      ppppppppuVar11 = (undefined ********)ppppppppuVar12[0xa8];
      pppppppuVar4 = pppppppuVar19 + 1;
      do {
        ppppppuVar21 = *pppppppuVar4;
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar4,0x10);
        if (bVar10) {
          *pppppppuVar4 = (undefined ******)((long)ppppppuVar21 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppppuVar21 != (undefined ******)0x0) {
        return ppppppppuVar11;
      }
      (*(code *)(*pppppppuVar19)[2])(pppppppuVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar19);
      return ppppppppuVar11;
    }
  }
  return (undefined ********)0x0;
}



/* Entry: 10a2d1adc; end: 10a2d1b5b;  */

bool FUN_10a2d1adc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)param_1[1];
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    lVar6 = 0;
  }
  else {
    lVar6 = *param_1;
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
  return lVar6 == param_2;
}



/* Entry: 10a2d1b5c; end: 10a2d1beb;  */

void FUN_10a2d1b5c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10a2d1bec; end: 10a2d1c3b;  */

undefined1  [16]
FUN_10a2d1bec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,undefined8 param_6,uint param_7)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float afStack_68 [3];
  float fStack_5c;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  
  uVar6 = (uint)param_6;
  if (uVar6 < 6) {
    *(byte *)(param_5 + 0x1f1) =
         *(byte *)(param_5 + 0x1f1) & ((byte)(1 << (ulong)(uVar6 & 0x1f)) ^ 0xff) |
         (byte)(param_7 << (ulong)(uVar6 & 0x1f));
    if ((param_7 & 1) == 0) {
      *(undefined1 *)(param_5 + (ulong)(uVar6 * 0x7c) + 0x2d0) = 0;
    }
    auVar7._8_8_ = param_6;
    auVar7._0_8_ = param_5;
    return auVar7;
  }
  puVar3 = &UNK_10f64c71c;
  FUN_10a00946c();
  fStack_48 = 0.0;
  uStack_44 = uStack_44 & 0xffffff00;
  fStack_50 = 0.0;
  fStack_4c = 0.0;
  puVar4 = puVar3;
  FUN_10a2d145c();
  FUN_10a601e00();
  if (puVar4[0x2f0] == '\x01') {
    FUN_10a42b498(puVar4);
    puVar4[0x2f0] = 0;
  }
  lVar1 = 200;
  if (*(ulong *)(puVar4 + 0x4d0) < 2) {
    lVar1 = 0x1e0;
  }
  func_0x0001094f5708(&uStack_a8,puVar4 + lVar1 + 0x388);
  FUN_10a2d1d3c(afStack_68,&uStack_a8);
  FUN_10a2d1e28(*(undefined8 *)(puVar3 + 0x550));
  puVar5 = &uStack_a8;
  uStack_a8 = param_1;
  uStack_a4 = param_2;
  uStack_a0 = param_3;
  uStack_9c = param_4;
  FUN_10a2d1eb8(puVar5,afStack_68,&fStack_50);
  if ((int)puVar5 != 0) {
    uStack_44 = CONCAT31(uStack_44._1_3_,
                         0.0 < (fStack_50 - afStack_68[0]) * fStack_5c +
                               (fStack_4c - (float)afStack_68._4_8_) * (float)uStack_58 +
                               (fStack_48 - SUB84(afStack_68._4_8_,4)) *
                               (float)((ulong)uStack_58 >> 0x20));
  }
  auVar2._4_4_ = fStack_4c;
  auVar2._0_4_ = fStack_50;
  auVar2._8_4_ = fStack_48;
  auVar2._12_4_ = uStack_44;
  return auVar2;
}



/* Entry: 10a2d1c3c; end: 10a2d1d3b;  */

undefined1  [16]
FUN_10a2d1c3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined4 *puVar4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float afStack_58 [3];
  float fStack_4c;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  
  fStack_38 = 0.0;
  uStack_34 = uStack_34 & 0xffffff00;
  fStack_40 = 0.0;
  fStack_3c = 0.0;
  lVar3 = param_5;
  FUN_10a2d145c();
  FUN_10a601e00();
  if (*(char *)(lVar3 + 0x2f0) == '\x01') {
    FUN_10a42b498(lVar3);
    *(undefined1 *)(lVar3 + 0x2f0) = 0;
  }
  lVar1 = 200;
  if (*(ulong *)(lVar3 + 0x4d0) < 2) {
    lVar1 = 0x1e0;
  }
  func_0x0001094f5708(&uStack_98,lVar3 + lVar1 + 0x388);
  FUN_10a2d1d3c(afStack_58,&uStack_98);
  FUN_10a2d1e28(*(undefined8 *)(param_5 + 0x550));
  puVar4 = &uStack_98;
  uStack_98 = param_1;
  uStack_94 = param_2;
  uStack_90 = param_3;
  uStack_8c = param_4;
  FUN_10a2d1eb8(puVar4,afStack_58,&fStack_40);
  if ((int)puVar4 != 0) {
    uStack_34 = CONCAT31(uStack_34._1_3_,
                         0.0 < (fStack_40 - afStack_58[0]) * fStack_4c +
                               (fStack_3c - (float)afStack_58._4_8_) * (float)uStack_48 +
                               (fStack_38 - SUB84(afStack_58._4_8_,4)) *
                               (float)((ulong)uStack_48 >> 0x20));
  }
  auVar2._4_4_ = fStack_3c;
  auVar2._0_4_ = fStack_40;
  auVar2._8_4_ = fStack_38;
  auVar2._12_4_ = uStack_34;
  return auVar2;
}



/* Entry: 10a2d1d3c; end: 10a2d1e27;  */

void FUN_10a2d1d3c(float param_1,float param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = param_1 * 2.0 + -1.0;
  fVar3 = param_2 * -2.0 + 1.0;
  fVar6 = fVar1 * *(float *)(param_4 + 1) + fVar3 * *(float *)(param_4 + 3);
  fVar7 = fVar1 * *(float *)((long)param_4 + 0xc) + fVar3 * *(float *)((long)param_4 + 0x1c);
  fVar8 = *(float *)(param_4 + 5);
  fVar12 = *(float *)(param_4 + 7);
  fVar13 = fVar7 + (*(float *)((long)param_4 + 0x3c) - *(float *)((long)param_4 + 0x2c));
  fVar7 = fVar7 + *(float *)((long)param_4 + 0x2c) + *(float *)((long)param_4 + 0x3c);
  fVar2 = (float)*param_4 * fVar1 + (float)param_4[2] * fVar3;
  fVar3 = (float)((ulong)*param_4 >> 0x20) * fVar1 + (float)((ulong)param_4[2] >> 0x20) * fVar3;
  fVar5 = (float)param_4[4];
  fVar9 = (float)param_4[6];
  fVar4 = (float)((ulong)param_4[4] >> 0x20);
  fVar10 = (float)((ulong)param_4[6] >> 0x20);
  fVar1 = (fVar2 + (fVar9 - fVar5)) / fVar13;
  fVar11 = (fVar3 + (fVar10 - fVar4)) / fVar13;
  fVar13 = (fVar6 + (fVar12 - fVar8)) / fVar13;
  *param_3 = fVar1;
  fVar1 = (fVar2 + fVar5 + fVar9) / fVar7 - fVar1;
  fVar2 = (fVar3 + fVar4 + fVar10) / fVar7 - fVar11;
  fVar3 = (fVar6 + fVar8 + fVar12) / fVar7 - fVar13;
  fVar5 = 1.0 / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  *(ulong *)(param_3 + 3) = CONCAT44(fVar2 * fVar5,fVar1 * fVar5);
  *(ulong *)(param_3 + 1) = CONCAT44(fVar13,fVar11);
  param_3[5] = fVar3 * fVar5;
  return;
}



/* Entry: 10a2d1e28; end: 10a2d1eb7;  */

float FUN_10a2d1e28(float param_1,float param_2,float param_3,undefined8 param_4)

{
  FUN_10a2ce5c8();
  FUN_10a2ce4f4(param_4);
  return param_1 * (1.0 / SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2));
}


